// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/overworld/refresh_map_at_position.asm (source_named).
bool execute_overworld_refresh_map_at_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/refresh_map_at_position.asm:3 BEGIN_C_FUNCTION
    case 0xC0156E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01570: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01571: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01572: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01573: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC01573.
    case 0xC01575: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01576: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01577: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:12 STX @LOCAL03
    case 0xC01578: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC01575.
    case 0xC01579: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/overworld/refresh_map_at_position.asm:13 STA @LOCAL02
    case 0xC0157A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:13 STA @LOCAL02
    // Overlapping static entry reached from 0xC01579.
    case 0xC0157B: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // src/overworld/refresh_map_at_position.asm:14 STA BG2_X_POS
    case 0xC0157C: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/overworld/refresh_map_at_position.asm:14 STA BG2_X_POS
    // Overlapping static entry reached from 0xC0157B.
    case 0xC0157D: cpu.execute_instruction<0x35>(0x000000, 2); return true;
    // src/overworld/refresh_map_at_position.asm:15 LDA @LOCAL02
    case 0xC0157F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:16 STA BG1_X_POS
    case 0xC01581: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/overworld/refresh_map_at_position.asm:17 LDA @LOCAL03
    case 0xC01584: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:18 STA BG2_Y_POS
    case 0xC01586: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/overworld/refresh_map_at_position.asm:19 LDA @LOCAL03
    case 0xC01589: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:20 STA BG1_Y_POS
    case 0xC0158B: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/overworld/refresh_map_at_position.asm:21 LDA @LOCAL02
    case 0xC0158E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:22 AND #$8000
    case 0xC01590: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:22 AND #$8000
    // Overlapping static entry reached from 0xC01590.
    case 0xC01592: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:23 BEQ @UNKNOWN0
    case 0xC01593: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/refresh_map_at_position.asm:24 LDA @LOCAL02
    case 0xC01595: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:25 LSR
    case 0xC01597: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:26 LSR
    case 0xC01598: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:27 LSR
    case 0xC01599: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:28 ORA #$E000
    case 0xC0159A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:28 ORA #$E000
    // Overlapping static entry reached from 0xC0159A.
    case 0xC0159C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000485, 3); return true;
    // src/overworld/refresh_map_at_position.asm:29 STA @VIRTUAL04
    case 0xC0159D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:29 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC0159C.
    case 0xC0159E: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/overworld/refresh_map_at_position.asm:30 BRA @UNKNOWN1
    case 0xC0159F: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/refresh_map_at_position.asm:30 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC0159E.
    case 0xC015A0: cpu.execute_instruction<0x07>(0x0000A5, 2); return true;
    // src/overworld/refresh_map_at_position.asm:32 LDA @LOCAL02
    case 0xC015A1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:32 LDA @LOCAL02
    // Overlapping static entry reached from 0xC015A0.
    case 0xC015A2: cpu.execute_instruction<0x12>(0x00004A, 2); return true;
    // src/overworld/refresh_map_at_position.asm:33 LSR
    case 0xC015A3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:34 LSR
    case 0xC015A4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:35 LSR
    case 0xC015A5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:36 STA @VIRTUAL04
    case 0xC015A6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:38 LDA @LOCAL03
    case 0xC015A8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:39 AND #$8000
    case 0xC015AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:39 AND #$8000
    // Overlapping static entry reached from 0xC015AA.
    case 0xC015AC: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:40 BEQ @UNKNOWN2
    case 0xC015AD: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/overworld/refresh_map_at_position.asm:41 LDA @LOCAL03
    case 0xC015AF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:42 LSR
    case 0xC015B1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:43 LSR
    case 0xC015B2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:44 LSR
    case 0xC015B3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:45 ORA #$E000
    case 0xC015B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:45 ORA #$E000
    // Overlapping static entry reached from 0xC015B4.
    case 0xC015B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000285, 3); return true;
    // src/overworld/refresh_map_at_position.asm:46 STA @VIRTUAL02
    case 0xC015B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:46 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC015B6.
    case 0xC015B8: cpu.execute_instruction<0x02>(0x00004C, 2); return true;
    // src/overworld/refresh_map_at_position.asm:47 JMP @UNKNOWN5
    case 0xC015B9: cpu.execute_instruction<0x4C>(0x001673, 3); return true;
    // src/overworld/refresh_map_at_position.asm:47 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC015C8.
    case 0xC015BA: cpu.execute_instruction<0x73>(0x000016, 2); return true;
    // src/overworld/refresh_map_at_position.asm:49 LDA @LOCAL03
    case 0xC015BC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:50 LSR
    case 0xC015BE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:51 LSR
    case 0xC015BF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:52 LSR
    case 0xC015C0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:53 STA @VIRTUAL02
    case 0xC015C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:54 JMP @UNKNOWN5
    case 0xC015C3: cpu.execute_instruction<0x4C>(0x001673, 3); return true;
    // src/overworld/refresh_map_at_position.asm:56 AND #$8000
    case 0xC015C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:56 AND #$8000
    // Overlapping static entry reached from 0xC015C6.
    case 0xC015C8: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:57 BEQ @UNKNOWN4
    case 0xC015C9: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/overworld/refresh_map_at_position.asm:58 LDA SCREEN_LEFT_X
    case 0xC015CB: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:59 INC
    case 0xC015CE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:60 STA @LOCAL01
    case 0xC015CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:61 STA SCREEN_LEFT_X
    case 0xC015D1: cpu.execute_instruction<0x8D>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:62 LDA @VIRTUAL02
    case 0xC015D4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:63 SEC
    case 0xC015D6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:64 SBC #16
    case 0xC015D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:64 SBC #16
    // Overlapping static entry reached from 0xC015D7.
    case 0xC015D9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:65 TAY
    case 0xC015DA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:66 STY @LOCAL00
    case 0xC015DB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:67 TYX
    case 0xC015DD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:68 LDA @LOCAL01
    case 0xC015DE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:69 CLC
    case 0xC015E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:70 ADC #41
    case 0xC015E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:70 ADC #41
    // Overlapping static entry reached from 0xC015E1.
    case 0xC015E3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:71 JSR LOAD_MAP_COLUMN
    case 0xC015E4: cpu.execute_instruction<0x20>(0x000BEE, 3); return true;
    // src/overworld/refresh_map_at_position.asm:72 LDY @LOCAL00
    case 0xC015E7: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:73 TYX
    case 0xC015E9: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:74 LDA SCREEN_LEFT_X
    case 0xC015EA: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:75 CLC
    case 0xC015ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:76 ADC #41
    case 0xC015EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:76 ADC #41
    // Overlapping static entry reached from 0xC015EE.
    case 0xC015F0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:77 JSR LOAD_COLLISION_COLUMN
    case 0xC015F1: cpu.execute_instruction<0x20>(0x000D90, 3); return true;
    // src/overworld/refresh_map_at_position.asm:78 LDX @VIRTUAL02
    case 0xC015F4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:79 LDA SCREEN_LEFT_X
    case 0xC015F6: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:80 CLC
    case 0xC015F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:81 ADC #32
    case 0xC015FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/overworld/refresh_map_at_position.asm:81 ADC #32
    // Overlapping static entry reached from 0xC015FA.
    case 0xC015FC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:82 JSR UNKNOWN_C00FCB
    case 0xC015FD: cpu.execute_instruction<0x20>(0x000FDD, 3); return true;
    // src/overworld/refresh_map_at_position.asm:83 LDX @VIRTUAL02
    case 0xC01600: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:84 DEX
    case 0xC01602: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:85 LDA SCREEN_LEFT_X
    case 0xC01603: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:86 CLC
    case 0xC01606: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:87 ADC #34
    case 0xC01607: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/overworld/refresh_map_at_position.asm:87 ADC #34
    // Overlapping static entry reached from 0xC01607.
    case 0xC01609: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:88 JSL UNKNOWN_C025CF
    case 0xC0160A: cpu.execute_instruction<0x22>(0xC025DD, 4); return true;
    // src/overworld/refresh_map_at_position.asm:89 LDA @VIRTUAL02
    case 0xC0160E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:90 SEC
    case 0xC01610: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:91 SBC #8
    case 0xC01611: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:91 SBC #8
    // Overlapping static entry reached from 0xC01611.
    case 0xC01613: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:92 TAX
    case 0xC01614: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:93 LDA SCREEN_LEFT_X
    case 0xC01615: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:94 CLC
    case 0xC01618: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:95 ADC #40
    case 0xC01619: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/overworld/refresh_map_at_position.asm:95 ADC #40
    // Overlapping static entry reached from 0xC01619.
    case 0xC0161B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:96 JSL SPAWN_VERTICAL
    case 0xC0161C: cpu.execute_instruction<0x22>(0xC02B65, 4); return true;
    // src/overworld/refresh_map_at_position.asm:97 BRA @UNKNOWN5
    case 0xC01620: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/overworld/refresh_map_at_position.asm:99 LDA SCREEN_LEFT_X
    case 0xC01622: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:100 DEC
    case 0xC01625: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:101 STA @LOCAL00
    case 0xC01626: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:102 STA SCREEN_LEFT_X
    case 0xC01628: cpu.execute_instruction<0x8D>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:103 LDA @VIRTUAL02
    case 0xC0162B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:104 SEC
    case 0xC0162D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:105 SBC #16
    case 0xC0162E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:105 SBC #16
    // Overlapping static entry reached from 0xC0162E.
    case 0xC01630: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:106 TAY
    case 0xC01631: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:107 STY @LOCAL01
    case 0xC01632: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:108 TYX
    case 0xC01634: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:109 LDA @LOCAL00
    case 0xC01635: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:110 SEC
    case 0xC01637: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:111 SBC #16
    case 0xC01638: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:111 SBC #16
    // Overlapping static entry reached from 0xC01638.
    case 0xC0163A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:112 JSR LOAD_MAP_COLUMN
    case 0xC0163B: cpu.execute_instruction<0x20>(0x000BEE, 3); return true;
    // src/overworld/refresh_map_at_position.asm:113 LDY @LOCAL01
    case 0xC0163E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:114 TYX
    case 0xC01640: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:115 LDA SCREEN_LEFT_X
    case 0xC01641: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:116 SEC
    case 0xC01644: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:117 SBC #16
    case 0xC01645: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:117 SBC #16
    // Overlapping static entry reached from 0xC01645.
    case 0xC01647: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:118 JSR LOAD_COLLISION_COLUMN
    case 0xC01648: cpu.execute_instruction<0x20>(0x000D90, 3); return true;
    // src/overworld/refresh_map_at_position.asm:119 LDX @VIRTUAL02
    case 0xC0164B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:120 LDA SCREEN_LEFT_X
    case 0xC0164D: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:121 DEC
    case 0xC01650: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:122 JSR UNKNOWN_C00FCB
    case 0xC01651: cpu.execute_instruction<0x20>(0x000FDD, 3); return true;
    // src/overworld/refresh_map_at_position.asm:123 LDX @VIRTUAL02
    case 0xC01654: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:124 DEX
    case 0xC01656: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:125 LDA SCREEN_LEFT_X
    case 0xC01657: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:126 DEC
    case 0xC0165A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:127 DEC
    case 0xC0165B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:128 DEC
    case 0xC0165C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:129 JSL UNKNOWN_C025CF
    case 0xC0165D: cpu.execute_instruction<0x22>(0xC025DD, 4); return true;
    // src/overworld/refresh_map_at_position.asm:130 LDA @VIRTUAL02
    case 0xC01661: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:131 SEC
    case 0xC01663: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:132 SBC #8
    case 0xC01664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:132 SBC #8
    // Overlapping static entry reached from 0xC01664.
    case 0xC01666: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:133 TAX
    case 0xC01667: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:134 LDA SCREEN_LEFT_X
    case 0xC01668: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:135 SEC
    case 0xC0166B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:136 SBC #8
    case 0xC0166C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:136 SBC #8
    // Overlapping static entry reached from 0xC0166C.
    case 0xC0166E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:137 JSL SPAWN_VERTICAL
    case 0xC0166F: cpu.execute_instruction<0x22>(0xC02B65, 4); return true;
    // src/overworld/refresh_map_at_position.asm:139 LDA SCREEN_LEFT_X
    case 0xC01673: cpu.execute_instruction<0xAD>(0x0046FA, 3); return true;
    // src/overworld/refresh_map_at_position.asm:139 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC01683.
    case 0xC01675: cpu.execute_instruction<0x46>(0x000038, 2); return true;
    // src/overworld/refresh_map_at_position.asm:140 SEC
    case 0xC01676: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:141 SBC @VIRTUAL04
    case 0xC01677: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/refresh_map_at_position.asm:142 BNEL @UNKNOWN3
    case 0xC01679: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/refresh_map_at_position.asm:142 BNEL @UNKNOWN3
    case 0xC0167B: cpu.execute_instruction<0x4C>(0x0015C6, 3); return true;
    // src/overworld/refresh_map_at_position.asm:143 JMP @UNKNOWN9
    case 0xC0167E: cpu.execute_instruction<0x4C>(0x001730, 3); return true;
    // src/overworld/refresh_map_at_position.asm:145 AND #$8000
    case 0xC01681: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:145 AND #$8000
    // Overlapping static entry reached from 0xC01681.
    case 0xC01683: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:146 BEQ @UNKNOWN8
    case 0xC01684: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/overworld/refresh_map_at_position.asm:147 LDA SCREEN_TOP_Y
    case 0xC01686: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:148 INC
    case 0xC01689: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:149 STA @LOCAL01
    case 0xC0168A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:150 STA SCREEN_TOP_Y
    case 0xC0168C: cpu.execute_instruction<0x8D>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:151 LDA @VIRTUAL04
    case 0xC0168F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:152 SEC
    case 0xC01691: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:153 SBC #16
    case 0xC01692: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:153 SBC #16
    // Overlapping static entry reached from 0xC01692.
    case 0xC01694: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:154 TAY
    case 0xC01695: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:155 STY @LOCAL00
    case 0xC01696: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:156 LDA @LOCAL01
    case 0xC01698: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:157 CLC
    case 0xC0169A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:158 ADC #41
    case 0xC0169B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:158 ADC #41
    // Overlapping static entry reached from 0xC0169B.
    case 0xC0169D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:159 TAX
    case 0xC0169E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:160 TYA
    case 0xC0169F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:161 JSR LOAD_MAP_ROW
    case 0xC016A0: cpu.execute_instruction<0x20>(0x000AD7, 3); return true;
    // src/overworld/refresh_map_at_position.asm:162 LDA SCREEN_TOP_Y
    case 0xC016A3: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:163 CLC
    case 0xC016A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:164 ADC #41
    case 0xC016A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:164 ADC #41
    // Overlapping static entry reached from 0xC016A7.
    case 0xC016A9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:165 TAX
    case 0xC016AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:166 LDY @LOCAL00
    case 0xC016AB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:167 TYA
    case 0xC016AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:168 JSR LOAD_COLLISION_ROW
    case 0xC016AE: cpu.execute_instruction<0x20>(0x000D05, 3); return true;
    // src/overworld/refresh_map_at_position.asm:169 LDA SCREEN_TOP_Y
    case 0xC016B1: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:170 CLC
    case 0xC016B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:171 ADC #28
    case 0xC016B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/overworld/refresh_map_at_position.asm:171 ADC #28
    // Overlapping static entry reached from 0xC016B5.
    case 0xC016B7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:172 TAX
    case 0xC016B8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:173 LDA @VIRTUAL04
    case 0xC016B9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:174 JSR UNKNOWN_C00E16
    case 0xC016BB: cpu.execute_instruction<0x20>(0x000E28, 3); return true;
    // src/overworld/refresh_map_at_position.asm:175 LDA SCREEN_TOP_Y
    case 0xC016BE: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:176 CLC
    case 0xC016C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:177 ADC #29
    case 0xC016C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/overworld/refresh_map_at_position.asm:177 ADC #29
    // Overlapping static entry reached from 0xC016C2.
    case 0xC016C4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:178 TAX
    case 0xC016C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:179 LDA @VIRTUAL04
    case 0xC016C6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:180 JSL UNKNOWN_C0255C
    case 0xC016C8: cpu.execute_instruction<0x22>(0xC0256A, 4); return true;
    // src/overworld/refresh_map_at_position.asm:181 LDA SCREEN_TOP_Y
    case 0xC016CC: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:182 CLC
    case 0xC016CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:183 ADC #36
    case 0xC016D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000024, 2); else cpu.execute_instruction<0x69>(0x000024, 3); return true;
    // src/overworld/refresh_map_at_position.asm:183 ADC #36
    // Overlapping static entry reached from 0xC016D0.
    case 0xC016D2: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:184 TAX
    case 0xC016D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:185 LDA @VIRTUAL04
    case 0xC016D4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:186 SEC
    case 0xC016D6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:187 SBC #8
    case 0xC016D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:187 SBC #8
    // Overlapping static entry reached from 0xC016D7.
    case 0xC016D9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:188 JSL SPAWN_HORIZONTAL
    case 0xC016DA: cpu.execute_instruction<0x22>(0xC02A7B, 4); return true;
    // src/overworld/refresh_map_at_position.asm:189 BRA @UNKNOWN9
    case 0xC016DE: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/overworld/refresh_map_at_position.asm:191 LDA SCREEN_TOP_Y
    case 0xC016E0: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:192 DEC
    case 0xC016E3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:193 STA @LOCAL01
    case 0xC016E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:194 STA SCREEN_TOP_Y
    case 0xC016E6: cpu.execute_instruction<0x8D>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:195 LDA @VIRTUAL04
    case 0xC016E9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:196 SEC
    case 0xC016EB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:197 SBC #16
    case 0xC016EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:197 SBC #16
    // Overlapping static entry reached from 0xC016EC.
    case 0xC016EE: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:198 TAY
    case 0xC016EF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:199 STY @LOCAL00
    case 0xC016F0: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:200 LDA @LOCAL01
    case 0xC016F2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:201 SEC
    case 0xC016F4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:202 SBC #16
    case 0xC016F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:202 SBC #16
    // Overlapping static entry reached from 0xC016F5.
    case 0xC016F7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:203 TAX
    case 0xC016F8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:204 TYA
    case 0xC016F9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:205 JSR LOAD_MAP_ROW
    case 0xC016FA: cpu.execute_instruction<0x20>(0x000AD7, 3); return true;
    // src/overworld/refresh_map_at_position.asm:206 LDA SCREEN_TOP_Y
    case 0xC016FD: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:207 SEC
    case 0xC01700: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:208 SBC #16
    case 0xC01701: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:208 SBC #16
    // Overlapping static entry reached from 0xC01701.
    case 0xC01703: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:209 TAX
    case 0xC01704: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:210 LDY @LOCAL00
    case 0xC01705: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:211 TYA
    case 0xC01707: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:212 JSR LOAD_COLLISION_ROW
    case 0xC01708: cpu.execute_instruction<0x20>(0x000D05, 3); return true;
    // src/overworld/refresh_map_at_position.asm:213 LDX SCREEN_TOP_Y
    case 0xC0170B: cpu.execute_instruction<0xAE>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:214 DEX
    case 0xC0170E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:215 LDA @VIRTUAL04
    case 0xC0170F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:216 JSR UNKNOWN_C00E16
    case 0xC01711: cpu.execute_instruction<0x20>(0x000E28, 3); return true;
    // src/overworld/refresh_map_at_position.asm:217 LDX SCREEN_TOP_Y
    case 0xC01714: cpu.execute_instruction<0xAE>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:218 DEX
    case 0xC01717: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:219 LDA @VIRTUAL04
    case 0xC01718: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:220 JSL UNKNOWN_C0255C
    case 0xC0171A: cpu.execute_instruction<0x22>(0xC0256A, 4); return true;
    // src/overworld/refresh_map_at_position.asm:221 LDA SCREEN_TOP_Y
    case 0xC0171E: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:222 SEC
    case 0xC01721: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:223 SBC #8
    case 0xC01722: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:223 SBC #8
    // Overlapping static entry reached from 0xC01722.
    case 0xC01724: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:224 TAX
    case 0xC01725: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:225 LDA @VIRTUAL04
    case 0xC01726: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:226 SEC
    case 0xC01728: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:227 SBC #8
    case 0xC01729: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:227 SBC #8
    // Overlapping static entry reached from 0xC01729.
    case 0xC0172B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:228 JSL SPAWN_HORIZONTAL
    case 0xC0172C: cpu.execute_instruction<0x22>(0xC02A7B, 4); return true;
    // src/overworld/refresh_map_at_position.asm:230 LDA SCREEN_TOP_Y
    case 0xC01730: cpu.execute_instruction<0xAD>(0x0046FC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:231 SEC
    case 0xC01733: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:232 SBC @VIRTUAL02
    case 0xC01734: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/refresh_map_at_position.asm:233 BNEL @UNKNOWN7
    case 0xC01736: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/refresh_map_at_position.asm:233 BNEL @UNKNOWN7
    case 0xC01738: cpu.execute_instruction<0x4C>(0x001681, 3); return true;
    // src/overworld/refresh_map_at_position.asm:234 LDA @LOCAL02
    case 0xC0173B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:235 STA BG12_POSITION_X_COPY
    case 0xC0173D: cpu.execute_instruction<0x8D>(0x00470C, 3); return true;
    // src/overworld/refresh_map_at_position.asm:236 LDA @LOCAL03
    case 0xC01740: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:237 STA BG12_POSITION_Y_COPY
    case 0xC01742: cpu.execute_instruction<0x8D>(0x00470E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/refresh_map_at_position.asm:238 END_C_FUNCTION
    case 0xC01745: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/refresh_map_at_position.asm:238 END_C_FUNCTION
    case 0xC01746: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reload_hotspots.asm (source_named).
bool execute_overworld_reload_hotspots_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_hotspots.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07447: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07449: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC0744A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC0744B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC0744B.
    case 0xC0744D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC0744E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:7 LDA #0
    case 0xC0744F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/reload_hotspots.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0744F.
    case 0xC07451: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_hotspots.asm:8 STA @VIRTUAL02
    case 0xC07452: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:9 JMP @UNKNOWN3
    case 0xC07454: cpu.execute_instruction<0x4C>(0x0074F9, 3); return true;
    // src/overworld/reload_hotspots.asm:11 LDA @VIRTUAL02
    case 0xC07457: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:12 CLC
    case 0xC07459: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:13 ADC #.LOWORD(GAME_STATE)
    case 0xC0745A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/reload_hotspots.asm:13 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0745A.
    case 0xC0745C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:14 TAY
    case 0xC0745D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC0745E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/reload_hotspots.asm:16 LDA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC07460: cpu.execute_instruction<0xB9>(0x0000C5, 3); return true;
    // src/overworld/reload_hotspots.asm:17 STA @LOCAL00
    case 0xC07463: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/reload_hotspots.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC07465: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_hotspots.asm:19 AND #$00FF
    case 0xC07467: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_hotspots.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC07467.
    case 0xC07469: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/reload_hotspots.asm:20 BEQL @UNKNOWN2
    case 0xC0746A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/reload_hotspots.asm:20 BEQL @UNKNOWN2
    case 0xC0746C: cpu.execute_instruction<0x4C>(0x0074F7, 3); return true;
    // src/overworld/reload_hotspots.asm:21 LDA @VIRTUAL02
    case 0xC0746F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07471: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07473: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07474: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07476: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07477: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07479: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:23 CLC
    case 0xC0747A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:24 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC0747B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0061C2, 3); return true;
    // src/overworld/reload_hotspots.asm:24 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC0747B.
    case 0xC0747D: cpu.execute_instruction<0x61>(0x0000AA, 2); return true;
    // src/overworld/reload_hotspots.asm:25 TAX
    case 0xC0747E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0747F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00F25B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0747F.
    case 0xC07481: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07482: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07481.
    case 0xC07483: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07484: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07483.
    case 0xC07485: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07484.
    case 0xC07486: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07487: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/reload_hotspots.asm:27 LDA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC07489: cpu.execute_instruction<0xB9>(0x0000C7, 3); return true;
    // src/overworld/reload_hotspots.asm:28 AND #$00FF
    case 0xC0748C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_hotspots.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC0748C.
    case 0xC0748E: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0748F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07490: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07491: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:30 CLC
    case 0xC07492: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:31 ADC @VIRTUAL06
    case 0xC07493: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/reload_hotspots.asm:32 STA @VIRTUAL06
    case 0xC07495: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/reload_hotspots.asm:33 LDA @LOCAL00
    case 0xC07497: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/reload_hotspots.asm:34 AND #$00FF
    case 0xC07499: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_hotspots.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC07499.
    case 0xC0749B: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/reload_hotspots.asm:35 STA __BSS_START__,X
    case 0xC0749C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0749F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074A1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC074A5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/reload_hotspots.asm:37 LDA [@VIRTUAL0A]
    case 0xC074A7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:39 STA a:active_hotspot::x1,X
    case 0xC074AC: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:40 LDY #predefined_hotspot::x2
    case 0xC074AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/reload_hotspots.asm:40 LDY #predefined_hotspot::x2
    // Overlapping static entry reached from 0xC074AF.
    case 0xC074B1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/reload_hotspots.asm:41 LDA [@VIRTUAL06],Y
    case 0xC074B2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074B6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:43 STA a:active_hotspot::x2,X
    case 0xC074B7: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/overworld/reload_hotspots.asm:44 LDY #predefined_hotspot::y1
    case 0xC074BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:44 LDY #predefined_hotspot::y1
    // Overlapping static entry reached from 0xC074BA.
    case 0xC074BC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/reload_hotspots.asm:45 LDA [@VIRTUAL06],Y
    case 0xC074BD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:47 STA a:active_hotspot::y1,X
    case 0xC074C2: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/overworld/reload_hotspots.asm:48 LDY #predefined_hotspot::y2
    case 0xC074C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/reload_hotspots.asm:48 LDY #predefined_hotspot::y2
    // Overlapping static entry reached from 0xC074C5.
    case 0xC074C7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/reload_hotspots.asm:49 LDA [@VIRTUAL06],Y
    case 0xC074C8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC074CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:51 STA a:active_hotspot::y2,X
    case 0xC074CD: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/overworld/reload_hotspots.asm:52 LDA @VIRTUAL02
    case 0xC074D0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:53 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC074D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:53 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC074D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:54 CLC
    case 0xC074D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:56 ADC #.LOWORD(GAME_STATE)
    case 0xC074D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/reload_hotspots.asm:56 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC074D5.
    case 0xC074D7: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:57 CLC
    case 0xC074D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:58 ADC #game_state::active_hotspot_pointers
    case 0xC074D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C9, 2); else cpu.execute_instruction<0x69>(0x0000C9, 3); return true;
    // src/overworld/reload_hotspots.asm:58 ADC #game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC074D9.
    case 0xC074DB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/reload_hotspots.asm:62 TAY
    case 0xC074DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC074DD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC074E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC074E2: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC074E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/reload_hotspots.asm:64 TXA
    case 0xC074E7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:65 CLC
    case 0xC074E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:66 ADC #active_hotspot::pointer
    case 0xC074E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/reload_hotspots.asm:66 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC074E9.
    case 0xC074EB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/reload_hotspots.asm:67 TAY
    case 0xC074EC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC074ED: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC074EF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC074F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC074F4: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:70 INC @VIRTUAL02
    case 0xC074F7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:72 LDA @VIRTUAL02
    case 0xC074F9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:73 CMP #2
    case 0xC074FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:73 CMP #2
    // Overlapping static entry reached from 0xC074FB.
    case 0xC074FD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC074FE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC07500: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC07502: cpu.execute_instruction<0x4C>(0x007457, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_hotspots.asm:75 END_C_FUNCTION
    case 0xC07505: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_hotspots.asm:75 END_C_FUNCTION
    case 0xC07506: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reload_map.asm (source_named).
bool execute_overworld_reload_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01909: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC0190B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC0190C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC0190D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC0190D.
    case 0xC0190F: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC01910: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:8 LDA #.LOWORD(-1)
    case 0xC01911: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/reload_map.asm:8 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01911.
    case 0xC01913: cpu.execute_instruction<0xFF>(0x46F68D, 4); return true;
    // src/overworld/reload_map.asm:9 STA LOADED_MAP_PALETTE
    case 0xC01914: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // src/overworld/reload_map.asm:10 STA LOADED_MAP_TILE_COMBO
    case 0xC01917: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/overworld/reload_map.asm:11 LDA SCREEN_X_PIXELS
    case 0xC0191A: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/overworld/reload_map.asm:12 AND #$FFF8
    case 0xC0191D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/overworld/reload_map.asm:12 AND #$FFF8
    // Overlapping static entry reached from 0xC0191D.
    case 0xC0191F: cpu.execute_instruction<0xFF>(0x47068D, 4); return true;
    // src/overworld/reload_map.asm:13 STA SCREEN_X_PIXELS
    case 0xC01920: cpu.execute_instruction<0x8D>(0x004706, 3); return true;
    // src/overworld/reload_map.asm:14 LDA SCREEN_Y_PIXELS
    case 0xC01923: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/overworld/reload_map.asm:15 AND #$FFF8
    case 0xC01926: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/overworld/reload_map.asm:15 AND #$FFF8
    // Overlapping static entry reached from 0xC01926.
    case 0xC01928: cpu.execute_instruction<0xFF>(0x47088D, 4); return true;
    // src/overworld/reload_map.asm:16 STA SCREEN_Y_PIXELS
    case 0xC01929: cpu.execute_instruction<0x8D>(0x004708, 3); return true;
    // src/overworld/reload_map.asm:17 JSL UNKNOWN_C08726
    case 0xC0192C: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/overworld/reload_map.asm:18 LDA #.LOWORD(-1)
    case 0xC01930: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/reload_map.asm:18 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01930.
    case 0xC01932: cpu.execute_instruction<0xFF>(0x615A8D, 4); return true;
    // src/overworld/reload_map.asm:19 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC01933: cpu.execute_instruction<0x8D>(0x00615A, 3); return true;
    // src/overworld/reload_map.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC01936: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000028, 2); else cpu.execute_instruction<0xA9>(0x009B28, 3); return true;
    // src/overworld/reload_map.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC01936.
    case 0xC01938: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:21 STA @VIRTUAL04
    case 0xC01939: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:22 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC0193B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x009B2C, 3); return true;
    // src/overworld/reload_map.asm:22 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC0193B.
    case 0xC0193D: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:23 STA @VIRTUAL02
    case 0xC0193E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map.asm:24 LDX @VIRTUAL02
    case 0xC01940: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/reload_map.asm:25 LDA __BSS_START__,X
    case 0xC01942: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:26 TAX
    case 0xC01945: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:27 STX @LOCAL01
    case 0xC01946: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/reload_map.asm:28 LDX @VIRTUAL04
    case 0xC01948: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:29 LDA __BSS_START__,X
    case 0xC0194A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:30 LDX @LOCAL01
    case 0xC0194D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/reload_map.asm:31 JSL UNKNOWN_C068F4
    case 0xC0194F: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/overworld/reload_map.asm:32 LDA #$9
    case 0xC01953: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/overworld/reload_map.asm:32 LDA #$9
    // Overlapping static entry reached from 0xC01953.
    case 0xC01955: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:33 JSL UNKNOWN_C08D79
    case 0xC01956: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/overworld/reload_map.asm:34 LDY #$0000
    case 0xC0195A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:34 LDY #$0000
    // Overlapping static entry reached from 0xC0195A.
    case 0xC0195C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/reload_map.asm:35 LDX #$3800
    case 0xC0195D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/overworld/reload_map.asm:35 LDX #$3800
    // Overlapping static entry reached from 0xC0195D.
    case 0xC0195F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:36 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC01960: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/reload_map.asm:36 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC01960.
    case 0xC01962: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:37 JSL SET_BG1_VRAM_LOCATION
    case 0xC01963: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/overworld/reload_map.asm:38 LDY #$2000
    case 0xC01967: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/reload_map.asm:38 LDY #$2000
    // Overlapping static entry reached from 0xC01967.
    case 0xC01969: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/overworld/reload_map.asm:39 LDX #$5800
    case 0xC0196A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/overworld/reload_map.asm:39 LDX #$5800
    // Overlapping static entry reached from 0xC0196A.
    case 0xC0196C: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:40 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC0196D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/reload_map.asm:40 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC0196D.
    case 0xC0196F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:41 JSL SET_BG2_VRAM_LOCATION
    case 0xC01970: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/overworld/reload_map.asm:42 LDY #$6000
    case 0xC01974: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/overworld/reload_map.asm:42 LDY #$6000
    // Overlapping static entry reached from 0xC01974.
    case 0xC01976: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:43 LDX #$7C00
    case 0xC01977: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/overworld/reload_map.asm:43 LDX #$7C00
    // Overlapping static entry reached from 0xC01977.
    case 0xC01979: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/overworld/reload_map.asm:44 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC0197A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:44 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC0197A.
    case 0xC0197C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:45 JSL SET_BG3_VRAM_LOCATION
    case 0xC0197D: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/overworld/reload_map.asm:46 LDA #$62
    case 0xC01981: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/overworld/reload_map.asm:46 LDA #$62
    // Overlapping static entry reached from 0xC01981.
    case 0xC01983: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:47 JSL SET_OAM_SIZE
    case 0xC01984: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/overworld/reload_map.asm:48 LDX @VIRTUAL02
    case 0xC01988: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/reload_map.asm:49 LDA __BSS_START__,X
    case 0xC0198A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:50 TAX
    case 0xC0198D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:51 STX @LOCAL00
    case 0xC0198E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/reload_map.asm:52 LDX @VIRTUAL04
    case 0xC01990: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:53 LDA __BSS_START__,X
    case 0xC01992: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:54 LDX @LOCAL00
    case 0xC01995: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/reload_map.asm:55 JSL RELOAD_MAP_AT_POSITION
    case 0xC01997: cpu.execute_instruction<0x22>(0xC01303, 4); return true;
    // src/overworld/reload_map.asm:56 LDA GAME_STATE+game_state::walking_style
    case 0xC0199B: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/overworld/reload_map.asm:57 CMP #WALKING_STYLE::BICYCLE
    case 0xC0199E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/reload_map.asm:57 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC0199E.
    case 0xC019A0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/reload_map.asm:58 BNE @UNKNOWN0
    case 0xC019A1: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/overworld/reload_map.asm:59 LDA #MUSIC::BICYCLE
    case 0xC019A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/overworld/reload_map.asm:59 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC019A3.
    case 0xC019A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:60 JSL CHANGE_MUSIC
    case 0xC019A6: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/overworld/reload_map.asm:61 BRA @UNKNOWN1
    case 0xC019AA: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:63 JSL UNKNOWN_C069AF
    case 0xC019AC: cpu.execute_instruction<0x22>(0xC06BDD, 4); return true;
    // src/overworld/reload_map.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC019B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/reload_map.asm:66 LDA #$17
    case 0xC019B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    case 0xC019B4: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC019B2.
    case 0xC019B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC019B5.
    case 0xC019B6: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/reload_map.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC019B7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map.asm:69 LDA DEBUG
    case 0xC019B9: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/overworld/reload_map.asm:70 BEQ @UNKNOWN2
    case 0xC019BC: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:71 JSL UNKNOWN_EFD9F3
    case 0xC019BE: cpu.execute_instruction<0x22>(0xEFC30D, 4); return true;
    // src/overworld/reload_map.asm:73 JSL UNKNOWN_C08744
    case 0xC019C2: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_map.asm:74 END_C_FUNCTION
    case 0xC019C6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_map.asm:74 END_C_FUNCTION
    case 0xC019C7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reload_map_at_position.asm (source_named).
bool execute_overworld_reload_map_at_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_map_at_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC01303: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01305: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01306: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01307: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC01308: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC01308.
    case 0xC0130A: cpu.execute_instruction<0xFF>(0x8D685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC0130B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC0130C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:12 STA SCREEN_X_PIXELS
    case 0xC0130D: cpu.execute_instruction<0x8D>(0x004706, 3); return true;
    // src/overworld/reload_map_at_position.asm:12 STA SCREEN_X_PIXELS
    // Overlapping static entry reached from 0xC0130A.
    case 0xC0130E: cpu.execute_instruction<0x06>(0x000047, 2); return true;
    // src/overworld/reload_map_at_position.asm:13 STA SCREEN_X_PIXELS_COPY
    case 0xC01310: cpu.execute_instruction<0x8D>(0x004702, 3); return true;
    // src/overworld/reload_map_at_position.asm:14 STX SCREEN_Y_PIXELS
    case 0xC01313: cpu.execute_instruction<0x8E>(0x004708, 3); return true;
    // src/overworld/reload_map_at_position.asm:15 STX SCREEN_Y_PIXELS_COPY
    case 0xC01316: cpu.execute_instruction<0x8E>(0x004704, 3); return true;
    // src/overworld/reload_map_at_position.asm:16 LSR
    case 0xC01319: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:17 LSR
    case 0xC0131A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:18 LSR
    case 0xC0131B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:19 TAY
    case 0xC0131C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:20 STY @LOCAL03
    case 0xC0131D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:21 TXA
    case 0xC0131F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:22 LSR
    case 0xC01320: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:23 LSR
    case 0xC01321: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:24 LSR
    case 0xC01322: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:25 STA @VIRTUAL02
    case 0xC01323: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:26 LDA #.LOWORD(-1)
    case 0xC01325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/reload_map_at_position.asm:26 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC01325.
    case 0xC01327: cpu.execute_instruction<0xFF>(0x46F68D, 4); return true;
    // src/overworld/reload_map_at_position.asm:27 STA LOADED_MAP_PALETTE
    case 0xC01328: cpu.execute_instruction<0x8D>(0x0046F6, 3); return true;
    // src/overworld/reload_map_at_position.asm:28 STA LOADED_MAP_TILE_COMBO
    case 0xC0132B: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/overworld/reload_map_at_position.asm:29 LDA @VIRTUAL02
    case 0xC0132E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:30 LSR
    case 0xC01330: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:31 LSR
    case 0xC01331: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:32 LSR
    case 0xC01332: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:33 LSR
    case 0xC01333: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:34 TAX
    case 0xC01334: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:35 TYA
    case 0xC01335: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:36 LSR
    case 0xC01336: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:37 LSR
    case 0xC01337: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:38 LSR
    case 0xC01338: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:39 LSR
    case 0xC01339: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:40 LSR
    case 0xC0133A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:41 JSR LOAD_MAP_AT_SECTOR
    case 0xC0133B: cpu.execute_instruction<0x20>(0x0008D3, 3); return true;
    // src/overworld/reload_map_at_position.asm:42 LDY @LOCAL03
    case 0xC0133E: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:43 TYA
    case 0xC01340: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:44 SEC
    case 0xC01341: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:45 SBC #16
    case 0xC01342: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/reload_map_at_position.asm:45 SBC #16
    // Overlapping static entry reached from 0xC01342.
    case 0xC01344: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:46 STA @LOCAL02
    case 0xC01345: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/reload_map_at_position.asm:47 LDA @VIRTUAL02
    case 0xC01347: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:48 SEC
    case 0xC01349: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:49 SBC #14
    case 0xC0134A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/overworld/reload_map_at_position.asm:49 SBC #14
    // Overlapping static entry reached from 0xC0134A.
    case 0xC0134C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:50 STA @LOCAL01
    case 0xC0134D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/reload_map_at_position.asm:51 TYA
    case 0xC0134F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:52 SEC
    case 0xC01350: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:53 SBC #32
    case 0xC01351: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/reload_map_at_position.asm:53 SBC #32
    // Overlapping static entry reached from 0xC01351.
    case 0xC01353: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:54 STA @VIRTUAL04
    case 0xC01354: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/reload_map_at_position.asm:55 LDA @VIRTUAL02
    case 0xC01356: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:56 SEC
    case 0xC01358: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:57 SBC #32
    case 0xC01359: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/reload_map_at_position.asm:57 SBC #32
    // Overlapping static entry reached from 0xC01359.
    case 0xC0135B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:58 STA @VIRTUAL02
    case 0xC0135C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:59 STA @LOCAL00
    case 0xC0135E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/reload_map_at_position.asm:60 LDX #0
    case 0xC01360: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/reload_map_at_position.asm:60 LDX #0
    // Overlapping static entry reached from 0xC01360.
    case 0xC01362: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/reload_map_at_position.asm:61 BRA @UNKNOWN1
    case 0xC01363: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/reload_map_at_position.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC01365: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:64 LDA #>-1
    case 0xC01367: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/overworld/reload_map_at_position.asm:65 STA LOADED_COLUMNS_Y,X
    case 0xC01369: cpu.execute_instruction<0x9D>(0x004746, 3); return true;
    // src/overworld/reload_map_at_position.asm:65 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC01367.
    case 0xC0136A: cpu.execute_instruction<0x46>(0x000047, 2); return true;
    // src/overworld/reload_map_at_position.asm:66 STA LOADED_COLUMNS_X,X
    case 0xC0136C: cpu.execute_instruction<0x9D>(0x004736, 3); return true;
    // src/overworld/reload_map_at_position.asm:67 STA LOADED_ROWS_Y,X
    case 0xC0136F: cpu.execute_instruction<0x9D>(0x004726, 3); return true;
    // src/overworld/reload_map_at_position.asm:68 STA LOADED_ROWS_X,X
    case 0xC01372: cpu.execute_instruction<0x9D>(0x004716, 3); return true;
    // src/overworld/reload_map_at_position.asm:69 INX
    case 0xC01375: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:71 CPX #16
    case 0xC01376: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/reload_map_at_position.asm:71 CPX #16
    // Overlapping static entry reached from 0xC01376.
    case 0xC01378: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/reload_map_at_position.asm:72 BCC @UNKNOWN0
    case 0xC01379: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/reload_map_at_position.asm:73 LDY #0
    case 0xC0137B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/reload_map_at_position.asm:73 LDY #0
    // Overlapping static entry reached from 0xC0137B.
    case 0xC0137D: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/reload_map_at_position.asm:74 STY @LOCAL03
    case 0xC0137E: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:75 BRA @UNKNOWN3
    case 0xC01380: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/reload_map_at_position.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC01382: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:78 LDA @LOCAL00
    case 0xC01384: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/reload_map_at_position.asm:79 STA @VIRTUAL02
    case 0xC01386: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:80 STY @VIRTUAL02
    case 0xC01388: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:81 CLC
    case 0xC0138A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:82 ADC @VIRTUAL02
    case 0xC0138B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:83 TAX
    case 0xC0138D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:84 LDA @VIRTUAL04
    case 0xC0138E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/reload_map_at_position.asm:85 JSR LOAD_MAP_ROW
    case 0xC01390: cpu.execute_instruction<0x20>(0x000AD7, 3); return true;
    // src/overworld/reload_map_at_position.asm:86 LDY @LOCAL03
    case 0xC01393: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:87 INY
    case 0xC01395: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:88 STY @LOCAL03
    case 0xC01396: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:90 CPY #60
    case 0xC01398: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/reload_map_at_position.asm:90 CPY #60
    // Overlapping static entry reached from 0xC01398.
    case 0xC0139A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/reload_map_at_position.asm:91 BCC @UNKNOWN2
    case 0xC0139B: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/reload_map_at_position.asm:92 LDY #0
    case 0xC0139D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/reload_map_at_position.asm:92 LDY #0
    // Overlapping static entry reached from 0xC0139D.
    case 0xC0139F: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/reload_map_at_position.asm:93 STY @LOCAL03
    case 0xC013A0: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:94 BRA @UNKNOWN5
    case 0xC013A2: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/reload_map_at_position.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC013A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:97 LDA @LOCAL00
    case 0xC013A6: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/reload_map_at_position.asm:98 STA @VIRTUAL02
    case 0xC013A8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:99 STY @VIRTUAL02
    case 0xC013AA: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:100 CLC
    case 0xC013AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:101 ADC @VIRTUAL02
    case 0xC013AD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:102 TAX
    case 0xC013AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:103 LDA @VIRTUAL04
    case 0xC013B0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/reload_map_at_position.asm:104 JSR LOAD_COLLISION_ROW
    case 0xC013B2: cpu.execute_instruction<0x20>(0x000D05, 3); return true;
    // src/overworld/reload_map_at_position.asm:105 LDY @LOCAL03
    case 0xC013B5: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:106 INY
    case 0xC013B7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:107 STY @LOCAL03
    case 0xC013B8: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:109 CPY #60
    case 0xC013BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/reload_map_at_position.asm:109 CPY #60
    // Overlapping static entry reached from 0xC013BA.
    case 0xC013BC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/reload_map_at_position.asm:110 BCC @UNKNOWN4
    case 0xC013BD: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/reload_map_at_position.asm:111 LDY #.LOWORD(-1)
    case 0xC013BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/reload_map_at_position.asm:111 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC013BF.
    case 0xC013C1: cpu.execute_instruction<0xFF>(0x801484, 4); return true;
    // src/overworld/reload_map_at_position.asm:112 STY @LOCAL03
    case 0xC013C2: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:113 BRA @UNKNOWN7
    case 0xC013C4: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/reload_map_at_position.asm:113 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC013C1.
    case 0xC013C5: cpu.execute_instruction<0x11>(0x0000C2, 2); return true;
    // src/overworld/reload_map_at_position.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC013C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:115 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC013C5.
    case 0xC013C7: cpu.execute_instruction<0x20>(0x001898, 3); return true;
    // src/overworld/reload_map_at_position.asm:116 TYA
    case 0xC013C8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:117 CLC
    case 0xC013C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:118 ADC @LOCAL01
    case 0xC013CA: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/overworld/reload_map_at_position.asm:119 TAX
    case 0xC013CC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:120 LDA @LOCAL02
    case 0xC013CD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/reload_map_at_position.asm:121 JSR UNKNOWN_C00E16
    case 0xC013CF: cpu.execute_instruction<0x20>(0x000E28, 3); return true;
    // src/overworld/reload_map_at_position.asm:122 LDY @LOCAL03
    case 0xC013D2: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:123 INY
    case 0xC013D4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:124 STY @LOCAL03
    case 0xC013D5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:126 CPY #31
    case 0xC013D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001F, 2); else cpu.execute_instruction<0xC0>(0x00001F, 3); return true;
    // src/overworld/reload_map_at_position.asm:126 CPY #31
    // Overlapping static entry reached from 0xC013D7.
    case 0xC013D9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/reload_map_at_position.asm:127 BNE @UNKNOWN6
    case 0xC013DA: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/overworld/reload_map_at_position.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC013DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:130 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC013DE: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/reload_map_at_position.asm:131 AND #$00FF
    case 0xC013E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_map_at_position.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC013E1.
    case 0xC013E3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/reload_map_at_position.asm:132 BNE @UNKNOWN8
    case 0xC013E4: cpu.execute_instruction<0xD0>(0x0000F6, 2); return true;
    // src/overworld/reload_map_at_position.asm:133 LDA SCREEN_X_PIXELS
    case 0xC013E6: cpu.execute_instruction<0xAD>(0x004706, 3); return true;
    // src/overworld/reload_map_at_position.asm:134 SEC
    case 0xC013E9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:135 SBC #128
    case 0xC013EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/overworld/reload_map_at_position.asm:135 SBC #128
    // Overlapping static entry reached from 0xC013EA.
    case 0xC013EC: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/reload_map_at_position.asm:136 STA BG2_X_POS
    case 0xC013ED: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/overworld/reload_map_at_position.asm:137 STA BG1_X_POS
    case 0xC013F0: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/overworld/reload_map_at_position.asm:138 LDA SCREEN_Y_PIXELS
    case 0xC013F3: cpu.execute_instruction<0xAD>(0x004708, 3); return true;
    // src/overworld/reload_map_at_position.asm:139 SEC
    case 0xC013F6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:140 SBC #112
    case 0xC013F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/overworld/reload_map_at_position.asm:140 SBC #112
    // Overlapping static entry reached from 0xC013F7.
    case 0xC013F9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/reload_map_at_position.asm:141 STA BG2_Y_POS
    case 0xC013FA: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/overworld/reload_map_at_position.asm:142 STA BG1_Y_POS
    case 0xC013FD: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/overworld/reload_map_at_position.asm:143 LDA @LOCAL02
    case 0xC01400: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/reload_map_at_position.asm:144 STA SCREEN_LEFT_X
    case 0xC01402: cpu.execute_instruction<0x8D>(0x0046FA, 3); return true;
    // src/overworld/reload_map_at_position.asm:145 LDA @LOCAL01
    case 0xC01405: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/reload_map_at_position.asm:146 STA SCREEN_TOP_Y
    case 0xC01407: cpu.execute_instruction<0x8D>(0x0046FC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_map_at_position.asm:147 END_C_FUNCTION
    case 0xC0140A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_map_at_position.asm:147 END_C_FUNCTION
    case 0xC0140B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/replace_block.asm (source_named).
bool execute_overworld_replace_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/replace_block.asm:3 BEGIN_C_FUNCTION
    case 0xC0068E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00690: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00691: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00692: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00693: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00693.
    case 0xC00695: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00696: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00697: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:9 TXY
    case 0xC00698: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:10 STA @LOCAL00
    case 0xC00699: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0069B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0069B.
    case 0xC0069D: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0069E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC006A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC006A0.
    case 0xC006A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC006A3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/replace_block.asm:12 LDA @LOCAL00
    case 0xC006A5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006AC: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006AE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006B0: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006B2: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/replace_block.asm:15 CLC
    case 0xC006B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:16 ADC @VIRTUAL0A
    case 0xC006B5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:17 STA @VIRTUAL0A
    case 0xC006B7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:17 STA @VIRTUAL0A
    // Overlapping static entry reached from 0xC0070D.
    case 0xC006B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:18 TYA
    case 0xC006B9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006BA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:20 CLC
    case 0xC006BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:21 ADC @VIRTUAL06
    case 0xC006C0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:22 STA @VIRTUAL06
    case 0xC006C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:23 LDX #0
    case 0xC006C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/replace_block.asm:23 LDX #0
    // Overlapping static entry reached from 0xC006C4.
    case 0xC006C6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/replace_block.asm:24 BRA @UNKNOWN1
    case 0xC006C7: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/replace_block.asm:26 LDA [@VIRTUAL06]
    case 0xC006C9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:27 STA [@VIRTUAL0A]
    case 0xC006CB: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:28 INC @VIRTUAL06
    case 0xC006CD: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:29 INC @VIRTUAL06
    case 0xC006CF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:30 INC @VIRTUAL0A
    case 0xC006D1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:31 INC @VIRTUAL0A
    case 0xC006D3: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:32 INX
    case 0xC006D5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:34 CPX #16
    case 0xC006D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/replace_block.asm:34 CPX #16
    // Overlapping static entry reached from 0xC006D6.
    case 0xC006D8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/replace_block.asm:35 BCC @UNKNOWN0
    case 0xC006D9: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC006DB.
    case 0xC006DD: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC006E0.
    case 0xC006E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006E3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/replace_block.asm:37 LDA @LOCAL00
    case 0xC006E5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/replace_block.asm:37 LDA @LOCAL00
    // Overlapping static entry reached from 0xC0BA86.
    case 0xC006E6: cpu.execute_instruction<0x0E>(0x00A60A, 3); return true;
    // src/overworld/replace_block.asm:38 ASL
    case 0xC006E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006E8: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC006E6.
    case 0xC006E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006EA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006EC: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006EE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/replace_block.asm:40 CLC
    case 0xC006F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:41 ADC @VIRTUAL06
    case 0xC006F1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:42 STA @VIRTUAL06
    case 0xC006F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:43 TYA
    case 0xC006F5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:44 ASL
    case 0xC006F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:45 CLC
    case 0xC006F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:46 ADC @VIRTUAL0A
    case 0xC006F8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:47 STA @VIRTUAL0A
    case 0xC006FA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:48 LDA [@VIRTUAL0A]
    case 0xC006FC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:49 STA [@VIRTUAL06]
    case 0xC006FE: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/replace_block.asm:50 END_C_FUNCTION
    case 0xC00700: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/replace_block.asm:50 END_C_FUNCTION
    case 0xC00701: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reset_mushroomized_walking.asm (source_named).
bool execute_overworld_reset_mushroomized_walking_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/reset_mushroomized_walking.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC02E58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/reset_mushroomized_walking.asm:4 STZ MUSHROOMIZED_WALKING_FLAG
    case 0xC02E5A: cpu.execute_instruction<0x9C>(0x006126, 3); return true;
    // src/overworld/reset_mushroomized_walking.asm:5 RTL
    case 0xC02E5D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/schedule_overworld_task.asm (source_named).
bool execute_overworld_schedule_overworld_task_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/schedule_overworld_task.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DBAE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DBB3.
    case 0xC0DBB5: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBB7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:11 TAY
    case 0xC0DBB8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBB9: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBBD: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBBF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DBC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x00A042, 3); return true;
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DBC1.
    case 0xC0DBC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000085, 2); else cpu.execute_instruction<0xA0>(0x001085, 3); return true;
    // src/overworld/schedule_overworld_task.asm:14 STA @LOCAL01
    case 0xC0DBC4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:14 STA @LOCAL01
    // Overlapping static entry reached from 0xC0DBC3.
    case 0xC0DBC5: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    case 0xC0DBC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0DBC5.
    case 0xC0DBC7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0DBC6.
    case 0xC0DBC8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/schedule_overworld_task.asm:16 STX @LOCAL00
    case 0xC0DBC9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:17 BRA @UNKNOWN1
    case 0xC0DBCB: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/overworld/schedule_overworld_task.asm:19 TAX
    case 0xC0DBCD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:20 LDA a:overworld_task::frames_left,X
    case 0xC0DBCE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/schedule_overworld_task.asm:21 BEQ @UNKNOWN2
    case 0xC0DBD1: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/overworld/schedule_overworld_task.asm:22 LDA @LOCAL01
    case 0xC0DBD3: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:23 CLC
    case 0xC0DBD5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    case 0xC0DBD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DBD6.
    case 0xC0DBD8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/schedule_overworld_task.asm:25 STA @LOCAL01
    case 0xC0DBD9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:26 LDX @LOCAL00
    case 0xC0DBDB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:27 INX
    case 0xC0DBDD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:28 STX @LOCAL00
    case 0xC0DBDE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    case 0xC0DBE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    // Overlapping static entry reached from 0xC0DBE0.
    case 0xC0DBE2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/schedule_overworld_task.asm:31 BCC @UNKNOWN0
    case 0xC0DBE3: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/overworld/schedule_overworld_task.asm:33 LDA @LOCAL01
    case 0xC0DBE5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:34 TAX
    case 0xC0DBE7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:35 TYA
    case 0xC0DBE8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:36 STA a:overworld_task::frames_left,X
    case 0xC0DBE9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/schedule_overworld_task.asm:37 LDA @LOCAL01
    case 0xC0DBEC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:38 TAY
    case 0xC0DBEE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:39 INY ;overworld_task::function
    case 0xC0DBEF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:40 INY
    case 0xC0DBF0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DBF8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/schedule_overworld_task.asm:42 LDX @LOCAL00
    case 0xC0DBFB: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:43 TXA
    case 0xC0DBFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DBFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DBFF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/screen_transition.asm (source_named).
bool execute_overworld_screen_transition_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/screen_transition.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06890: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06892: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06893: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06894: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06895: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DF, 2); else cpu.execute_instruction<0x69>(0x00FFDF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC06895.
    case 0xC06897: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06898: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06899: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:15 TXY
    case 0xC0689A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:16 STY @LOCAL06
    case 0xC0689B: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/overworld/screen_transition.asm:17 STA @LOCAL05
    case 0xC0689D: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC0689F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001400, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC0689F.
    case 0xC068A1: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068A2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068A1.
    case 0xC068A3: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068A3.
    case 0xC068A5: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC068A4.
    case 0xC068A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC068A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/screen_transition.asm:19 LDA @LOCAL05
    case 0xC068A9: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068AB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068AE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068B0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC068B1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:21 CLC
    case 0xC068B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:22 ADC @VIRTUAL06
    case 0xC068B3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:23 STA @VIRTUAL06
    case 0xC068B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:24 STA @LOCAL04
    case 0xC068B7: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/overworld/screen_transition.asm:25 LDA @VIRTUAL06+2
    case 0xC068B9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/screen_transition.asm:26 STA @LOCAL04+2
    case 0xC068BB: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068BF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC068C3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/screen_transition.asm:28 LDA [@VIRTUAL0A] ;screen_transition_config::duration
    case 0xC068C5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/screen_transition.asm:29 AND #$00FF
    case 0xC068C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC068C7.
    case 0xC068C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:30 STA @VIRTUAL02
    case 0xC068CA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:31 CMP #>-1
    case 0xC068CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:31 CMP #>-1
    // Overlapping static entry reached from 0xC068CC.
    case 0xC068CE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/screen_transition.asm:32 BNE @NOT_MAX_DURATION
    case 0xC068CF: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/screen_transition.asm:33 LDA #900
    case 0xC068D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x000384, 3); return true;
    // src/overworld/screen_transition.asm:33 LDA #900
    // Overlapping static entry reached from 0xC068D1.
    case 0xC068D3: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    case 0xC068D4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC068D3.
    case 0xC068D5: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/overworld/screen_transition.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC068D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    case 0xC068D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    // Overlapping static entry reached from 0xC068D8.
    case 0xC068DA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:38 LDA [@VIRTUAL06],Y
    case 0xC068DB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC068DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:40 AND #$00FF
    case 0xC068DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC068DF.
    case 0xC068E1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/screen_transition.asm:41 ASL
    case 0xC068E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:42 ASL
    case 0xC068E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:43 TAX
    case 0xC068E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    case 0xC068E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    // Overlapping static entry reached from 0xC068E5.
    case 0xC068E7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:45 LDA [@VIRTUAL06],Y
    case 0xC068E8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:46 JSL UNKNOWN_C42631
    case 0xC068EA: cpu.execute_instruction<0x22>(0xC4256F, 4); return true;
    // src/overworld/screen_transition.asm:47 LDY @LOCAL06
    case 0xC068EE: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/overworld/screen_transition.asm:48 CPY #1
    case 0xC068F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:48 CPY #1
    // Overlapping static entry reached from 0xC068F0.
    case 0xC068F2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC068F3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC068F5: cpu.execute_instruction<0x4C>(0x006A00, 3); return true;
    // src/overworld/screen_transition.asm:50 JSL UNKNOWN_C0943C
    case 0xC068F8: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/overworld/screen_transition.asm:51 LDA #2
    case 0xC068FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/screen_transition.asm:51 LDA #2
    // Overlapping static entry reached from 0xC068FC.
    case 0xC068FE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:52 JSL UNKNOWN_C0DD2C
    case 0xC068FF: cpu.execute_instruction<0x22>(0xC0DCF4, 4); return true;
    // src/overworld/screen_transition.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC06903: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    case 0xC06905: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    // Overlapping static entry reached from 0xC06905.
    case 0xC06907: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:55 LDA [@VIRTUAL06],Y
    case 0xC06908: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:56 STA @LOCAL03
    case 0xC0690A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC0690C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:58 AND #$00FF
    case 0xC0690E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC0690E.
    case 0xC06910: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:59 BEQ @UNKNOWN2
    case 0xC06911: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC06913: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    case 0xC06915: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    // Overlapping static entry reached from 0xC06915.
    case 0xC06917: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:62 LDA [@VIRTUAL06],Y
    case 0xC06918: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC0691A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:64 AND #$00FF
    case 0xC0691C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC0691C.
    case 0xC0691E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/screen_transition.asm:65 TAX
    case 0xC0691F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:66 INX
    case 0xC06920: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:67 INX
    case 0xC06921: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:68 LDA @LOCAL03
    case 0xC06922: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:69 AND #$00FF
    case 0xC06924: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC06924.
    case 0xC06926: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:70 JSL UNKNOWN_C4A67E
    case 0xC06927: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0692B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC0692B.
    case 0xC0692D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC0692E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06930: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06931: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06933: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06934: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06936: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/screen_transition.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC06938: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0693A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0693C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0693E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC06940: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    case 0xC06942: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xC06942.
    case 0xC06944: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:76 STA @LOCAL01+2
    case 0xC06945: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC06947: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC06949: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0694B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:78 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC0694D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC0694F: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC06951: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC06953: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:79 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC06955: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC06957: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC06959: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0695B: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0695D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/screen_transition.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC0695F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    case 0xC06961: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06961.
    case 0xC06963: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:87 LDA [@VIRTUAL06],Y
    case 0xC06964: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC06966: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:89 AND #$00FF
    case 0xC06968: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC06968.
    case 0xC0696A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:90 JSL UNKNOWN_C4954C
    case 0xC0696B: cpu.execute_instruction<0x22>(0xC46B96, 4); return true;
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    case 0xC0696F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0696F.
    case 0xC06971: cpu.execute_instruction<0xFF>(0x2202A5, 4); return true;
    // src/overworld/screen_transition.asm:92 LDA @VIRTUAL02
    case 0xC06972: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    case 0xC06974: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06971.
    case 0xC06975: cpu.execute_instruction<0x31>(0x00006D, 2); return true;
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06975.
    case 0xC06977: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/overworld/screen_transition.asm:94 LDA #0
    case 0xC06978: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC06977.
    case 0xC06979: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC06978.
    case 0xC0697A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:95 STA @LOCAL02
    case 0xC0697B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:96 BRA @UNKNOWN5
    case 0xC0697D: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/overworld/screen_transition.asm:98 LDA PALETTE_UPLOAD_MODE
    case 0xC0697F: cpu.execute_instruction<0xAD>(0x000030, 3); return true;
    // src/overworld/screen_transition.asm:99 AND #$00FF
    case 0xC06982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC06982.
    case 0xC06984: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:100 BEQ @UNKNOWN4
    case 0xC06985: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:101 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06987: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/screen_transition.asm:103 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0698B: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/overworld/screen_transition.asm:104 JSL OAM_CLEAR
    case 0xC0698F: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/overworld/screen_transition.asm:105 JSL UNKNOWN_C4268A
    case 0xC06993: cpu.execute_instruction<0x22>(0xC425C8, 4); return true;
    // src/overworld/screen_transition.asm:106 JSL UNKNOWN_C426C7
    case 0xC06997: cpu.execute_instruction<0x22>(0xC42605, 4); return true;
    // src/overworld/screen_transition.asm:107 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0699B: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/overworld/screen_transition.asm:108 JSL UPDATE_SCREEN
    case 0xC0699F: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/screen_transition.asm:109 JSL UNKNOWN_C4A7B0
    case 0xC069A3: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/overworld/screen_transition.asm:110 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC069A7: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/screen_transition.asm:111 LDA @LOCAL02
    case 0xC069AB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:112 INC
    case 0xC069AD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:113 STA @LOCAL02
    case 0xC069AE: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:115 CMP @VIRTUAL02
    case 0xC069B0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:116 BCC @UNKNOWN3
    case 0xC069B2: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/overworld/screen_transition.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC069B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    case 0xC069B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC069B6.
    case 0xC069B8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:119 LDA [@VIRTUAL06],Y
    case 0xC069B9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC069BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:121 AND #>-1
    case 0xC069BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:121 AND #>-1
    // Overlapping static entry reached from 0xC069BD.
    case 0xC069BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:122 STA @VIRTUAL02
    case 0xC069C0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:123 LDA #50
    case 0xC069C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/overworld/screen_transition.asm:123 LDA #50
    // Overlapping static entry reached from 0xC069C2.
    case 0xC069C4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:124 CLC
    case 0xC069C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:125 SBC @VIRTUAL02
    case 0xC069C6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069C8: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069CA: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069CC: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC069CE: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:127 JSL UNKNOWN_C08726
    case 0xC069D0: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/overworld/screen_transition.asm:128 BRA @UNKNOWN9
    case 0xC069D4: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/overworld/screen_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC069D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:131 LDA #>-1
    case 0xC069D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    case 0xC069DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    // Overlapping static entry reached from 0xC069D8.
    case 0xC069DB: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    case 0xC069DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC069DC.
    case 0xC069DE: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/overworld/screen_transition.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC069DF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    case 0xC069E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC069E1.
    case 0xC069E3: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:136 JSL MEMSET16
    case 0xC069E4: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/screen_transition.asm:137 LDA #24
    case 0xC069E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/screen_transition.asm:137 LDA #24
    // Overlapping static entry reached from 0xC069E8.
    case 0xC069EA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:138 JSL UNKNOWN_C0856B
    case 0xC069EB: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/overworld/screen_transition.asm:139 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC069EF: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/screen_transition.asm:140 LDA #1
    case 0xC069F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:140 LDA #1
    // Overlapping static entry reached from 0xC069F3.
    case 0xC069F5: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/screen_transition.asm:141 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC069F6: cpu.execute_instruction<0x8D>(0x0049FC, 3); return true;
    // src/overworld/screen_transition.asm:143 JSL UNKNOWN_C09451
    case 0xC069F9: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/screen_transition.asm:144 JMP @UNKNOWN22
    case 0xC069FD: cpu.execute_instruction<0x4C>(0x006AC5, 3); return true;
    // src/overworld/screen_transition.asm:146 LDX #0
    case 0xC06A00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/screen_transition.asm:146 LDX #0
    // Overlapping static entry reached from 0xC06A00.
    case 0xC06A02: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/overworld/screen_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A03: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    case 0xC06A05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06A05.
    case 0xC06A07: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:149 LDA [@VIRTUAL06],Y
    case 0xC06A08: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC06A0A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:151 AND #$00FF
    case 0xC06A0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC06A0C.
    case 0xC06A0E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:152 STA @VIRTUAL02
    case 0xC06A0F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:153 LDA #50
    case 0xC06A11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/overworld/screen_transition.asm:153 LDA #50
    // Overlapping static entry reached from 0xC06A11.
    case 0xC06A13: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:154 CLC
    case 0xC06A14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:155 SBC @VIRTUAL02
    case 0xC06A15: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A17: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A19: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A1B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC06A1D: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/overworld/screen_transition.asm:157 LDX #1
    case 0xC06A1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:157 LDX #1
    // Overlapping static entry reached from 0xC06A1F.
    case 0xC06A21: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/overworld/screen_transition.asm:159 TXY
    case 0xC06A22: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:160 STY @LOCAL05
    case 0xC06A23: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/overworld/screen_transition.asm:161 BEQ @UNKNOWN14
    case 0xC06A25: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/screen_transition.asm:162 LDX #1
    case 0xC06A27: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:162 LDX #1
    // Overlapping static entry reached from 0xC06A27.
    case 0xC06A29: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/screen_transition.asm:163 TXA
    case 0xC06A2A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:164 JSL FADE_IN
    case 0xC06A2B: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/overworld/screen_transition.asm:165 BRA @UNKNOWN15
    case 0xC06A2F: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    case 0xC06A31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06A31.
    case 0xC06A33: cpu.execute_instruction<0xFF>(0xA020E2, 4); return true;
    // src/overworld/screen_transition.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A34: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    case 0xC06A36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06A33.
    case 0xC06A37: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06A36.
    case 0xC06A38: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:170 LDA [@VIRTUAL06],Y
    case 0xC06A39: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC06A3B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:172 AND #$00FF
    case 0xC06A3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC06A3D.
    case 0xC06A3F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:173 JSL UNKNOWN_C496E7
    case 0xC06A40: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/overworld/screen_transition.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A44: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    case 0xC06A46: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    // Overlapping static entry reached from 0xC06A46.
    case 0xC06A48: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:177 LDA [@VIRTUAL06],Y
    case 0xC06A49: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:178 STA @LOCAL03
    case 0xC06A4B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC06A4D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:180 AND #$00FF
    case 0xC06A4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:180 AND #$00FF
    // Overlapping static entry reached from 0xC06A4F.
    case 0xC06A51: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:181 BEQ @UNKNOWN16
    case 0xC06A52: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC06A54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    case 0xC06A56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    // Overlapping static entry reached from 0xC06A56.
    case 0xC06A58: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:184 LDA [@VIRTUAL06],Y
    case 0xC06A59: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC06A5B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:186 AND #$00FF
    case 0xC06A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC06A5D.
    case 0xC06A5F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/screen_transition.asm:187 TAX
    case 0xC06A60: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:188 LDA @LOCAL03
    case 0xC06A61: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:189 AND #$00FF
    case 0xC06A63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:189 AND #$00FF
    // Overlapping static entry reached from 0xC06A63.
    case 0xC06A65: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:190 JSL UNKNOWN_C4A67E
    case 0xC06A66: cpu.execute_instruction<0x22>(0xC47AE7, 4); return true;
    // src/overworld/screen_transition.asm:192 LDA #0
    case 0xC06A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/screen_transition.asm:192 LDA #0
    // Overlapping static entry reached from 0xC06A6A.
    case 0xC06A6C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:193 STA @LOCAL02
    case 0xC06A6D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:194 BRA @UNKNOWN21
    case 0xC06A6F: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/overworld/screen_transition.asm:196 LDY @LOCAL05
    case 0xC06A71: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/screen_transition.asm:197 BNE @UNKNOWN19
    case 0xC06A73: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/overworld/screen_transition.asm:198 LDA PALETTE_UPLOAD_MODE
    case 0xC06A75: cpu.execute_instruction<0xAD>(0x000030, 3); return true;
    // src/overworld/screen_transition.asm:199 AND #$00FF
    case 0xC06A78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC06A78.
    case 0xC06A7A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:200 BEQ @UNKNOWN18
    case 0xC06A7B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:201 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06A7D: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/screen_transition.asm:203 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC06A81: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/overworld/screen_transition.asm:205 JSL OAM_CLEAR
    case 0xC06A85: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/overworld/screen_transition.asm:206 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC06A89: cpu.execute_instruction<0x22>(0xC09445, 4); return true;
    // src/overworld/screen_transition.asm:207 JSL UNKNOWN_C4A7B0
    case 0xC06A8D: cpu.execute_instruction<0x22>(0xC47C19, 4); return true;
    // src/overworld/screen_transition.asm:208 JSL UPDATE_SCREEN
    case 0xC06A91: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/screen_transition.asm:209 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06A95: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/screen_transition.asm:210 LDA @LOCAL02
    case 0xC06A99: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:211 CMP #1
    case 0xC06A9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:211 CMP #1
    // Overlapping static entry reached from 0xC06A9B.
    case 0xC06A9D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/screen_transition.asm:212 BNE @UNKNOWN20
    case 0xC06A9E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:213 JSL UNKNOWN_C0943C
    case 0xC06AA0: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/overworld/screen_transition.asm:215 LDA @LOCAL02
    case 0xC06AA4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:216 INC
    case 0xC06AA6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:217 STA @LOCAL02
    case 0xC06AA7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC06AA9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    case 0xC06AAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06AAB.
    case 0xC06AAD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:221 LDA [@VIRTUAL06],Y
    case 0xC06AAE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC06AB0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:223 AND #$00FF
    case 0xC06AB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:223 AND #$00FF
    // Overlapping static entry reached from 0xC06AB2.
    case 0xC06AB4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:224 STA @VIRTUAL02
    case 0xC06AB5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:225 LDA @LOCAL02
    case 0xC06AB7: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:226 CMP @VIRTUAL02
    case 0xC06AB9: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:227 BCC @UNKNOWN17
    case 0xC06ABB: cpu.execute_instruction<0x90>(0x0000B4, 2); return true;
    // src/overworld/screen_transition.asm:228 LDY @LOCAL05
    case 0xC06ABD: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/screen_transition.asm:229 BNE @UNKNOWN22
    case 0xC06ABF: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:230 JSL UNKNOWN_C49740
    case 0xC06AC1: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // src/overworld/screen_transition.asm:232 LDA GIYGAS_PHASE
    case 0xC06AC5: cpu.execute_instruction<0xAD>(0x00AB7C, 3); return true;
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC06AC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC06AC8.
    case 0xC06ACA: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/screen_transition.asm:234 BCS @UNKNOWN23
    case 0xC06ACB: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:235 JSL UNKNOWN_C2EAAA
    case 0xC06ACD: cpu.execute_instruction<0x22>(0xC2E9C3, 4); return true;
    // src/overworld/screen_transition.asm:237 JSL UNKNOWN_C09451
    case 0xC06AD1: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/screen_transition.asm:238 STZ LADDER_STAIRS_TILE_Y
    case 0xC06AD5: cpu.execute_instruction<0x9C>(0x006130, 3); return true;
    // src/overworld/screen_transition.asm:239 STZ LADDER_STAIRS_TILE_X
    case 0xC06AD8: cpu.execute_instruction<0x9C>(0x00612E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC06ADB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC06ADC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/set_auto_sector_music_changes.asm (source_named).
bool execute_overworld_set_auto_sector_music_changes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/set_auto_sector_music_changes.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4D0E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/set_auto_sector_music_changes.asm:4 STA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4D0E6: cpu.execute_instruction<0x8D>(0x00B6FA, 3); return true;
    // src/overworld/set_auto_sector_music_changes.asm:5 RTL
    case 0xC4D0E9: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/set_party_tick_callbacks.asm (source_named).
bool execute_overworld_set_party_tick_callbacks_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/set_party_tick_callbacks.asm:3 ASL
    case 0xC42E83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:4 TAX
    case 0xC42E84: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:5 LDA $0E
    case 0xC42E85: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:6 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC42E87: cpu.execute_instruction<0x9D>(0x001070, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:7 LDA $10
    case 0xC42E8A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC42E8C: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:9 LDY #$0006
    case 0xC42E8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:9 LDY #$0006
    // Overlapping static entry reached from 0xC42E8F.
    case 0xC42E91: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:11 INX
    case 0xC42E92: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:12 INX
    case 0xC42E93: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:13 LDA $12
    case 0xC42E94: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:14 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC42E96: cpu.execute_instruction<0x9D>(0x001070, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:15 LDA $14
    case 0xC42E99: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:16 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC42E9B: cpu.execute_instruction<0x9D>(0x0010AC, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:17 DEY
    case 0xC42E9E: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:18 BNE @UNKNOWN0
    case 0xC42E9F: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:19 RTL
    case 0xC42EA1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/set_teleport_state.asm (source_named).
bool execute_overworld_set_teleport_state_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/set_teleport_state.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DD1B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD1D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD1E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DD20.
    case 0xC0DD22: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD24: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/set_teleport_state.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC0DD25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/set_teleport_state.asm:9 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0DD22.
    case 0xC0DD26: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/overworld/set_teleport_state.asm:10 STA @VIRTUAL00
    case 0xC0DD27: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/set_teleport_state.asm:11 LDA @PARAM01
    case 0xC0DD29: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/set_teleport_state.asm:12 STA @LOCAL00
    case 0xC0DD2B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/set_teleport_state.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0DD2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/set_teleport_state.asm:14 LDA @VIRTUAL00
    case 0xC0DD2F: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/set_teleport_state.asm:15 AND #$00FF
    case 0xC0DD31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/set_teleport_state.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC0DD31.
    case 0xC0DD33: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/set_teleport_state.asm:16 STA PSI_TELEPORT_DESTINATION
    case 0xC0DD34: cpu.execute_instruction<0x8D>(0x00A141, 3); return true;
    // src/overworld/set_teleport_state.asm:17 LDA @LOCAL00
    case 0xC0DD37: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/set_teleport_state.asm:18 AND #$00FF
    case 0xC0DD39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/set_teleport_state.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC0DD39.
    case 0xC0DD3B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/set_teleport_state.asm:19 STA PSI_TELEPORT_STYLE
    case 0xC0DD3C: cpu.execute_instruction<0x8D>(0x00A143, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/set_teleport_state.asm:20 END_C_FUNCTION
    case 0xC0DD3F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/set_teleport_state.asm:20 END_C_FUNCTION
    case 0xC0DD40: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/setup_vram.asm (source_named).
bool execute_overworld_setup_vram_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/setup_vram.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC00013: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/setup_vram.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Overlapping static entry reached from 0xC00011.
    case 0xC00014: cpu.execute_instruction<0x31>(0x0000A9, 2); return true;
    // src/overworld/setup_vram.asm:5 LDA #$0009
    case 0xC00015: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/overworld/setup_vram.asm:5 LDA #$0009
    // Overlapping static entry reached from 0xC00014.
    case 0xC00016: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x002200, 3); return true;
    // src/overworld/setup_vram.asm:5 LDA #$0009
    // Overlapping static entry reached from 0xC00015.
    case 0xC00017: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    case 0xC00018: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    // Overlapping static entry reached from 0xC00016.
    case 0xC00019: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    // Overlapping static entry reached from 0xC00019.
    case 0xC0001A: cpu.execute_instruction<0x8D>(0x00A0C0, 3); return true;
    // src/overworld/setup_vram.asm:7 LDY #$0000
    case 0xC0001C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/setup_vram.asm:7 LDY #$0000
    // Overlapping static entry reached from 0xC0001A.
    case 0xC0001D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/setup_vram.asm:7 LDY #$0000
    // Overlapping static entry reached from 0xC0001C.
    case 0xC0001E: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/setup_vram.asm:8 LDX #$3800
    case 0xC0001F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/overworld/setup_vram.asm:8 LDX #$3800
    // Overlapping static entry reached from 0xC0001F.
    case 0xC00021: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/setup_vram.asm:9 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC00022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/setup_vram.asm:9 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC00022.
    case 0xC00024: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:10 JSL SET_BG1_VRAM_LOCATION
    case 0xC00025: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/overworld/setup_vram.asm:11 LDY #$2000
    case 0xC00029: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/setup_vram.asm:11 LDY #$2000
    // Overlapping static entry reached from 0xC00029.
    case 0xC0002B: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/overworld/setup_vram.asm:12 LDX #$5800
    case 0xC0002C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/overworld/setup_vram.asm:12 LDX #$5800
    // Overlapping static entry reached from 0xC0002C.
    case 0xC0002E: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/overworld/setup_vram.asm:13 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC0002F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/setup_vram.asm:13 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC0002F.
    case 0xC00031: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:14 JSL SET_BG2_VRAM_LOCATION
    case 0xC00032: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/overworld/setup_vram.asm:15 LDY #$6000
    case 0xC00036: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/overworld/setup_vram.asm:15 LDY #$6000
    // Overlapping static entry reached from 0xC00036.
    case 0xC00038: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/setup_vram.asm:16 LDX #$7C00
    case 0xC00039: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/overworld/setup_vram.asm:16 LDX #$7C00
    // Overlapping static entry reached from 0xC00039.
    case 0xC0003B: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/overworld/setup_vram.asm:17 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC0003C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/setup_vram.asm:17 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC0003C.
    case 0xC0003E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:18 JSL SET_BG3_VRAM_LOCATION
    case 0xC0003F: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/overworld/setup_vram.asm:19 LDA #$0062
    case 0xC00043: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/overworld/setup_vram.asm:19 LDA #$0062
    // Overlapping static entry reached from 0xC00043.
    case 0xC00045: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:20 JSL SET_OAM_SIZE
    case 0xC00046: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // src/overworld/setup_vram.asm:21 RTL
    case 0xC0004A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/show_hp_alert.asm (source_named).
bool execute_overworld_show_hp_alert_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_hp_alert.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1D9B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1D9BD.
    case 0xC1D9BF: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1D9C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:12 TAY
    case 0xC1D9C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:13 STY @CHARID
    case 0xC1D9C3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/show_hp_alert.asm:26 JSL UNKNOWN_C0943C
    case 0xC1D9C5: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1D9C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1D9C9.
    case 0xC1D9CB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1D9CC: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    case 0xC1D9CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1D9CF.
    case 0xC1D9D1: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/show_hp_alert.asm:29 LDY @CHARID
    case 0xC1D9D2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/overworld/show_hp_alert.asm:30 TYA
    case 0xC1D9D4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:31 DEC
    case 0xC1D9D5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1D9D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1D9D6.
    case 0xC1D9D8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/show_hp_alert.asm:33 JSL MULT168
    case 0xC1D9D9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/show_hp_alert.asm:34 CLC
    case 0xC1D9DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1D9DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1D9DE.
    case 0xC1D9E0: cpu.execute_instruction<0x9C>(0x001220, 3); return true;
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    case 0xC1D9E1: cpu.execute_instruction<0x20>(0x00AB12, 3); return true;
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1D9E0.
    case 0xC1D9E3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0027EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1D9E4.
    case 0xC1D9E6: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9E7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1D9E6.
    case 0xC1D9E8: cpu.execute_instruction<0x0E>(0x00C9A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1D9E9.
    case 0xC1D9EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1D9EE: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/show_hp_alert.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC1D9F2: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/overworld/show_hp_alert.asm:39 JSL WINDOW_TICK
    case 0xC1D9F5: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/overworld/show_hp_alert.asm:40 JSL UNKNOWN_C09451
    case 0xC1D9F9: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/show_hp_alert.asm:45 PLD
    case 0xC1D9FD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:46 RTL
    case 0xC1D9FE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/show_town_map.asm (source_named).
bool execute_overworld_show_town_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_town_map.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1414F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/show_town_map.asm:4 LDX #$00CA
    case 0xC14151: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CA, 2); else cpu.execute_instruction<0xA2>(0x0000CA, 3); return true;
    // src/overworld/show_town_map.asm:4 LDX #$00CA
    // Overlapping static entry reached from 0xC14151.
    case 0xC14153: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/show_town_map.asm:5 LDA #$00FF
    case 0xC14154: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/overworld/show_town_map.asm:5 LDA #$00FF
    // Overlapping static entry reached from 0xC14154.
    case 0xC14156: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/show_town_map.asm:6 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC14157: cpu.execute_instruction<0x22>(0xC43479, 4); return true;
    // src/overworld/show_town_map.asm:7 CMP #$0000
    case 0xC1415B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/show_town_map.asm:7 CMP #$0000
    // Overlapping static entry reached from 0xC1415B.
    case 0xC1415D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/show_town_map.asm:8 BEQ @NO_TOWN_MAP
    case 0xC1415E: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/show_town_map.asm:9 JSL UNKNOWN_C0943C
    case 0xC14160: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/overworld/show_town_map.asm:10 JSL DISPLAY_TOWN_MAP
    case 0xC14164: cpu.execute_instruction<0x22>(0xC4A951, 4); return true;
    // src/overworld/show_town_map.asm:11 JSL UNKNOWN_C09451
    case 0xC14168: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/show_town_map.asm:13 RTL
    case 0xC1416C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn.asm (source_named).
bool execute_overworld_spawn_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC499F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC499F4.
    case 0xC499F6: cpu.execute_instruction<0xFF>(0xA5AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC499F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    case 0xC499F8: cpu.execute_instruction<0xAD>(0x009FA5, 3); return true;
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    // Overlapping static entry reached from 0xC499F6.
    case 0xC499FA: cpu.execute_instruction<0x9F>(0xAE0285, 4); return true;
    // src/overworld/spawn.asm:13 STA @VIRTUAL02
    case 0xC499FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn.asm:14 LDX RESPAWN_Y
    case 0xC499FD: cpu.execute_instruction<0xAE>(0x009FA7, 3); return true;
    // src/overworld/spawn.asm:14 LDX RESPAWN_Y
    // Overlapping static entry reached from 0xC499FA.
    case 0xC499FE: cpu.execute_instruction<0xA7>(0x00009F, 2); return true;
    // src/overworld/spawn.asm:15 STX @LOCAL03
    case 0xC49A00: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/spawn.asm:16 JSL UNKNOWN_C0943C
    case 0xC49A02: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/overworld/spawn.asm:17 JSR UNKNOWN_C4C2DE
    case 0xC49A06: cpu.execute_instruction<0x20>(0x0095B5, 3); return true;
    // src/overworld/spawn.asm:18 JSR UNKNOWN_C4C64D
    case 0xC49A09: cpu.execute_instruction<0x20>(0x009925, 3); return true;
    // src/overworld/spawn.asm:19 STA @VIRTUAL04
    case 0xC49A0C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/spawn.asm:20 CMP #0
    case 0xC49A0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn.asm:20 CMP #0
    // Overlapping static entry reached from 0xC49A0E.
    case 0xC49A10: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/spawn.asm:21 BEQ @UNKNOWN0
    case 0xC49A11: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/overworld/spawn.asm:22 LDY #0
    case 0xC49A13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/spawn.asm:22 LDY #0
    // Overlapping static entry reached from 0xC49A13.
    case 0xC49A15: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/spawn.asm:23 LDX #1
    case 0xC49A16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/spawn.asm:23 LDX #1
    // Overlapping static entry reached from 0xC49A16.
    case 0xC49A18: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/spawn.asm:24 LDA #2
    case 0xC49A19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/spawn.asm:24 LDA #2
    // Overlapping static entry reached from 0xC49A19.
    case 0xC49A1B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xC49A1C: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/overworld/spawn.asm:26 JSL UNKNOWN_C09451
    case 0xC49A20: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/spawn.asm:27 JMP @UNKNOWN9
    case 0xC49A24: cpu.execute_instruction<0x4C>(0x009B70, 3); return true;
    // src/overworld/spawn.asm:29 LDA #32
    case 0xC49A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/overworld/spawn.asm:29 LDA #32
    // Overlapping static entry reached from 0xC49A27.
    case 0xC49A29: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:30 JSL UNKNOWN_C4C58F
    case 0xC49A2A: cpu.execute_instruction<0x22>(0xC49867, 4); return true;
    // src/overworld/spawn.asm:31 LDA #2
    case 0xC49A2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/spawn.asm:31 LDA #2
    // Overlapping static entry reached from 0xC49A2E.
    case 0xC49A30: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:32 JSL UNKNOWN_C0AC0C
    case 0xC49A31: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/overworld/spawn.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC49A35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:34 LDA #$17
    case 0xC49A37: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    case 0xC49A39: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49A37.
    case 0xC49A3A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC49A3A.
    case 0xC49A3B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/spawn.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC49A3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    case 0xC49A3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC49A3E.
    case 0xC49A40: cpu.execute_instruction<0xFF>(0x46F48D, 4); return true;
    // src/overworld/spawn.asm:38 STA LOADED_MAP_TILE_COMBO
    case 0xC49A41: cpu.execute_instruction<0x8D>(0x0046F4, 3); return true;
    // src/overworld/spawn.asm:39 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC49A44: cpu.execute_instruction<0x8D>(0x00615A, 3); return true;
    // src/overworld/spawn.asm:40 STA CURRENT_MUSIC_TRACK
    case 0xC49A47: cpu.execute_instruction<0x8D>(0x00B6EC, 3); return true;
    // src/overworld/spawn.asm:41 LDA #1
    case 0xC49A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/spawn.asm:41 LDA #1
    // Overlapping static entry reached from 0xC49A4A.
    case 0xC49A4C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn.asm:42 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC49A4D: cpu.execute_instruction<0x8D>(0x0049FC, 3); return true;
    // src/overworld/spawn.asm:46 LDY #6
    case 0xC49A50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/spawn.asm:46 LDY #6
    // Overlapping static entry reached from 0xC49A50.
    case 0xC49A52: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/spawn.asm:47 LDX @LOCAL03
    case 0xC49A53: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/spawn.asm:48 LDA @VIRTUAL02
    case 0xC49A55: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn.asm:49 JSL INITIALIZE_MAP
    case 0xC49A57: cpu.execute_instruction<0x22>(0xC019C8, 4); return true;
    // src/overworld/spawn.asm:50 LDA GAME_STATE + game_state::party_members
    case 0xC49A5B: cpu.execute_instruction<0xAD>(0x009B20, 3); return true;
    // src/overworld/spawn.asm:51 AND #$00FF
    case 0xC49A5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/spawn.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC49A5E.
    case 0xC49A60: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/spawn.asm:52 DEC
    case 0xC49A61: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC49A62: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC49A62.
    case 0xC49A64: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:54 JSL MULT168
    case 0xC49A65: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/spawn.asm:55 CLC
    case 0xC49A69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC49A6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC49A6A.
    case 0xC49A6C: cpu.execute_instruction<0x9C>(0x004C8D, 3); return true;
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC49A6D: cpu.execute_instruction<0x8D>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC49A6C.
    case 0xC49A6F: cpu.execute_instruction<0x51>(0x0000A9, 2); return true;
    // src/overworld/spawn.asm:58 LDA #0
    case 0xC49A70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/spawn.asm:58 LDA #0
    // Overlapping static entry reached from 0xC49A6F.
    case 0xC49A71: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn.asm:58 LDA #0
    // Overlapping static entry reached from 0xC49A70.
    case 0xC49A72: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn.asm:59 STA @LOCAL02
    case 0xC49A73: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:60 BRA @UNKNOWN2
    case 0xC49A75: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/spawn.asm:62 CLC
    case 0xC49A77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn.asm:63 ADC CURRENT_PARTY_MEMBER_TICK
    case 0xC49A78: cpu.execute_instruction<0x6D>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:64 TAX
    case 0xC49A7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC49A7C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:66 STZ a:char_struct::afflictions,X
    case 0xC49A7E: cpu.execute_instruction<0x9E>(0x00000D, 3); return true;
    // src/overworld/spawn.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC49A81: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:68 LDA @LOCAL02
    case 0xC49A83: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn.asm:69 INC
    case 0xC49A85: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:70 STA @LOCAL02
    case 0xC49A86: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:72 CMP #6
    case 0xC49A88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/spawn.asm:72 CMP #6
    // Overlapping static entry reached from 0xC49A88.
    case 0xC49A8A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/spawn.asm:73 BCC @UNKNOWN1
    case 0xC49A8B: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/spawn.asm:74 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A8D: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:75 LDA a:char_struct::max_hp,X
    case 0xC49A90: cpu.execute_instruction<0xBD>(0x000009, 3); return true;
    // src/overworld/spawn.asm:76 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A93: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:77 STA a:char_struct::current_hp_target,X
    case 0xC49A96: cpu.execute_instruction<0x9D>(0x000046, 3); return true;
    // src/overworld/spawn.asm:78 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A99: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:79 STA a:char_struct::current_hp,X
    case 0xC49A9C: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/overworld/spawn.asm:80 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49A9F: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:81 STZ a:char_struct::current_pp_target,X
    case 0xC49AA2: cpu.execute_instruction<0x9E>(0x00004C, 3); return true;
    // src/overworld/spawn.asm:82 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC49AA5: cpu.execute_instruction<0xAE>(0x00514C, 3); return true;
    // src/overworld/spawn.asm:83 STZ a:char_struct::current_pp,X
    case 0xC49AA8: cpu.execute_instruction<0x9E>(0x00004A, 3); return true;
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    case 0xC49AAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E2, 2); else cpu.execute_instruction<0xA0>(0x009AE2, 3); return true;
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    // Overlapping static entry reached from 0xC49AAB.
    case 0xC49AAD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:85 STY @LOCAL01
    case 0xC49AAE: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB5: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC49AB8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49ABA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49ABC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49ABE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC49AC0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC49AC8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49ACA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC49ACA.
    case 0xC49ACC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49ACD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49ACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC49ACF.
    case 0xC49AD1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC49AD2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49AD4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49AD6: cpu.execute_instruction<0x25>(0x000006, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49AD8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49ADA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49ADC: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC49ADE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/spawn.asm:91 PHA
    case 0xC49AE0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/spawn.asm:92 LDA @VIRTUAL0A
    case 0xC49AE1: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/overworld/spawn.asm:93 PHA
    case 0xC49AE3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49AE4.
    case 0xC49AE6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AE7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC49AE9.
    case 0xC49AEB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC49AEC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AEE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AF0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AF2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC49AF4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/spawn.asm:96 JSL DIVISION32
    case 0xC49AF6: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC49AFE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/spawn.asm:98 CLC
    case 0xC49B00: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B01: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B03: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B07: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B09: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC49B0B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/spawn.asm:100 LDY @LOCAL01
    case 0xC49B0D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B11: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B14: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC49B16: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/spawn.asm:105 LDY #1
    case 0xC49B19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/spawn.asm:105 LDY #1
    // Overlapping static entry reached from 0xC49B19.
    case 0xC49B1B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/spawn.asm:106 STY @LOCAL03
    case 0xC49B1C: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/spawn.asm:107 BRA @UNKNOWN4
    case 0xC49B1E: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/spawn.asm:109 LDX #0
    case 0xC49B20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/spawn.asm:109 LDX #0
    // Overlapping static entry reached from 0xC49B20.
    case 0xC49B22: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/spawn.asm:110 TYA
    case 0xC49B23: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn.asm:111 JSL SET_EVENT_FLAG
    case 0xC49B24: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/overworld/spawn.asm:112 LDY @LOCAL03
    case 0xC49B28: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/spawn.asm:113 INY
    case 0xC49B2A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/spawn.asm:114 STY @LOCAL03
    case 0xC49B2B: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/spawn.asm:116 TYA
    case 0xC49B2D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn.asm:117 CLC
    case 0xC49B2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn.asm:118 SBC #10
    case 0xC49B2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/overworld/spawn.asm:118 SBC #10
    // Overlapping static entry reached from 0xC49B2F.
    case 0xC49B31: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B32: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B34: cpu.execute_instruction<0x10>(0x0000EA, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B36: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC49B38: cpu.execute_instruction<0x30>(0x0000E6, 2); return true;
    // src/overworld/spawn.asm:120 LDA #0
    case 0xC49B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/spawn.asm:120 LDA #0
    // Overlapping static entry reached from 0xC49B3A.
    case 0xC49B3C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn.asm:121 STA @LOCAL02
    case 0xC49B3D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:122 BRA @UNKNOWN8
    case 0xC49B3F: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/spawn.asm:124 ASL
    case 0xC49B41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:125 TAX
    case 0xC49B42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC49B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC49B43.
    case 0xC49B45: cpu.execute_instruction<0xFF>(0x2C9C9D, 4); return true;
    // src/overworld/spawn.asm:127 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC49B46: cpu.execute_instruction<0x9D>(0x002C9C, 3); return true;
    // src/overworld/spawn.asm:128 LDA @LOCAL02
    case 0xC49B49: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn.asm:129 INC
    case 0xC49B4B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:130 STA @LOCAL02
    case 0xC49B4C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    case 0xC49B4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC49B4E.
    case 0xC49B50: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/spawn.asm:133 BCC @UNKNOWN7
    case 0xC49B51: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/overworld/spawn.asm:134 JSL UNKNOWN_C064D4
    case 0xC49B53: cpu.execute_instruction<0x22>(0xC06702, 4); return true;
    // src/overworld/spawn.asm:135 STZ DAD_PHONE_QUEUED
    case 0xC49B57: cpu.execute_instruction<0x9C>(0x00A05C, 3); return true;
    // src/overworld/spawn.asm:136 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC49B5A: cpu.execute_instruction<0x9C>(0x0060DE, 3); return true;
    // src/overworld/spawn.asm:137 JSL SPAWN_BUZZ_BUZZ
    case 0xC49B5D: cpu.execute_instruction<0x22>(0xC06D4F, 4); return true;
    // src/overworld/spawn.asm:138 JSL OAM_CLEAR
    case 0xC49B61: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/overworld/spawn.asm:139 JSL UNKNOWN_C09451
    case 0xC49B65: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // src/overworld/spawn.asm:140 LDA #32
    case 0xC49B69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/overworld/spawn.asm:140 LDA #32
    // Overlapping static entry reached from 0xC49B69.
    case 0xC49B6B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:141 JSL UNKNOWN_C4C60E
    case 0xC49B6C: cpu.execute_instruction<0x22>(0xC498E6, 4); return true;
    // src/overworld/spawn.asm:143 LDA @VIRTUAL04
    case 0xC49B70: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC49B72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC49B73: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn_buzz_buzz.asm (source_named).
bool execute_overworld_spawn_buzz_buzz_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06D4F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D51: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC06D53.
    case 0xC06D55: cpu.execute_instruction<0xFF>(0x25A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06D56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x000425, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06D57.
    case 0xC06D59: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D5A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06D59.
    case 0xC06D5B: cpu.execute_instruction<0x0E>(0x00C5A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06D5C.
    case 0xC06D5E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D5F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06D61: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/spawn_buzz_buzz.asm:8 JSL UNKNOWN_EF0EE8
    case 0xC06D65: cpu.execute_instruction<0x22>(0xC4C981, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06D69: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06D6A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn_horizontal.asm (source_named).
bool execute_overworld_spawn_horizontal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_horizontal.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02A7B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A7D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A7E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC02A80.
    case 0xC02A82: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A84: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:14 STX @LOCAL05
    case 0xC02A85: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/overworld/spawn_horizontal.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xC02A82.
    case 0xC02A86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:15 TAY
    case 0xC02A87: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:16 STY @LOCAL04
    case 0xC02A88: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:17 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC02A8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/overworld/spawn_horizontal.asm:17 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC02A8A.
    case 0xC02A8C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_horizontal.asm:18 JSL GET_EVENT_FLAG
    case 0xC02A8D: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/spawn_horizontal.asm:19 CMP #0
    case 0xC02A91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:19 CMP #0
    // Overlapping static entry reached from 0xC02A91.
    case 0xC02A93: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:20 BNEL @RETURN
    case 0xC02A94: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:20 BNEL @RETURN
    case 0xC02A96: cpu.execute_instruction<0x4C>(0x002B63, 3); return true;
    // src/overworld/spawn_horizontal.asm:21 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC02A99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/overworld/spawn_horizontal.asm:21 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC02A99.
    case 0xC02A9B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_horizontal.asm:22 JSL GET_EVENT_FLAG
    case 0xC02A9C: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/spawn_horizontal.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02AF4.
    case 0xC02A9F: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    case 0xC02AA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    // Overlapping static entry reached from 0xC02A9F.
    case 0xC02AA1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    // Overlapping static entry reached from 0xC02AA0.
    case 0xC02AA2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:24 BNEL @RETURN
    case 0xC02AA3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:24 BNEL @RETURN
    case 0xC02AA5: cpu.execute_instruction<0x4C>(0x002B63, 3); return true;
    // src/overworld/spawn_horizontal.asm:25 LDA ENEMY_SPAWNS_ENABLED
    case 0xC02AA8: cpu.execute_instruction<0xAD>(0x004DE0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/spawn_horizontal.asm:26 BEQL @RETURN
    case 0xC02AAB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:26 BEQL @RETURN
    case 0xC02AAD: cpu.execute_instruction<0x4C>(0x002B63, 3); return true;
    // src/overworld/spawn_horizontal.asm:27 LDX @LOCAL05
    case 0xC02AB0: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/overworld/spawn_horizontal.asm:28 TXA
    case 0xC02AB2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:29 AND #$0007
    case 0xC02AB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/spawn_horizontal.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC02AB3.
    case 0xC02AB5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:30 BNEL @RETURN
    case 0xC02AB6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:30 BNEL @RETURN
    case 0xC02AB8: cpu.execute_instruction<0x4C>(0x002B63, 3); return true;
    // src/overworld/spawn_horizontal.asm:31 CPX #$FFF0
    case 0xC02ABB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000F0, 2); else cpu.execute_instruction<0xE0>(0x00FFF0, 3); return true;
    // src/overworld/spawn_horizontal.asm:31 CPX #$FFF0
    // Overlapping static entry reached from 0xC02ABB.
    case 0xC02ABD: cpu.execute_instruction<0xFF>(0xA20390, 4); return true;
    // src/overworld/spawn_horizontal.asm:32 BCC @UNKNOWN4
    case 0xC02ABE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    case 0xC02AC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    // Overlapping static entry reached from 0xC02ABD.
    case 0xC02AC1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    // Overlapping static entry reached from 0xC02AC0.
    case 0xC02AC2: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/overworld/spawn_horizontal.asm:35 CPX #MAP_HEIGHT_TILES8
    case 0xC02AC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000500, 3); return true;
    // src/overworld/spawn_horizontal.asm:35 CPX #MAP_HEIGHT_TILES8
    // Overlapping static entry reached from 0xC02AC3.
    case 0xC02AC5: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // src/overworld/spawn_horizontal.asm:36 BCC @UNKNOWN5
    case 0xC02AC6: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:36 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC02AC5.
    case 0xC02AC7: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/spawn_horizontal.asm:37 JMP @RETURN
    case 0xC02AC8: cpu.execute_instruction<0x4C>(0x002B63, 3); return true;
    // src/overworld/spawn_horizontal.asm:37 JMP @RETURN
    // Overlapping static entry reached from 0xC02AC7.
    case 0xC02AC9: cpu.execute_instruction<0x63>(0x00002B, 2); return true;
    // src/overworld/spawn_horizontal.asm:39 LDY @LOCAL04
    case 0xC02ACB: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:40 TYA
    case 0xC02ACD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:41 ASL
    case 0xC02ACE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:42 PHP
    case 0xC02ACF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:43 LSR
    case 0xC02AD0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:44 LSR
    case 0xC02AD1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:45 LSR
    case 0xC02AD2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:46 LSR
    case 0xC02AD3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:47 PLP
    case 0xC02AD4: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:48 BCC @UNKNOWN6
    case 0xC02AD5: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:50 ORA #$E000
    case 0xC02AD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/spawn_horizontal.asm:50 ORA #$E000
    // Overlapping static entry reached from 0xC02AD7.
    case 0xC02AD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x001485, 3); return true;
    // src/overworld/spawn_horizontal.asm:55 STA @LOCAL03
    case 0xC02ADA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn_horizontal.asm:55 STA @LOCAL03
    // Overlapping static entry reached from 0xC02AD9.
    case 0xC02ADB: cpu.execute_instruction<0x14>(0x00008A, 2); return true;
    // src/overworld/spawn_horizontal.asm:56 TXA
    case 0xC02ADC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:57 ASL
    case 0xC02ADD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:58 PHP
    case 0xC02ADE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:59 LSR
    case 0xC02ADF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:60 LSR
    case 0xC02AE0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:61 LSR
    case 0xC02AE1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:62 LSR
    case 0xC02AE2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:63 PLP
    case 0xC02AE3: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:64 BCC @UNKNOWN7
    case 0xC02AE4: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:66 ORA #$E000
    case 0xC02AE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/spawn_horizontal.asm:66 ORA #$E000
    // Overlapping static entry reached from 0xC02AE6.
    case 0xC02AE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x001285, 3); return true;
    // src/overworld/spawn_horizontal.asm:71 STA @LOCAL02
    case 0xC02AE9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:71 STA @LOCAL02
    // Overlapping static entry reached from 0xC02AE8.
    case 0xC02AEA: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/overworld/spawn_horizontal.asm:72 LDA @LOCAL03
    case 0xC02AEB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_horizontal.asm:72 LDA @LOCAL03
    // Overlapping static entry reached from 0xC02AEA.
    case 0xC02AEC: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:73 STA @VIRTUAL04
    case 0xC02AED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:73 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02AEC.
    case 0xC02AEE: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/overworld/spawn_horizontal.asm:74 BRA @UNKNOWN12
    case 0xC02AEF: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/overworld/spawn_horizontal.asm:74 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC02AEE.
    case 0xC02AF0: cpu.execute_instruction<0x61>(0x0000A5, 2); return true;
    // src/overworld/spawn_horizontal.asm:76 LDA @VIRTUAL04
    case 0xC02AF1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC02AF0.
    case 0xC02AF2: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:77 STA @LOCAL01
    case 0xC02AF3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/spawn_horizontal.asm:77 STA @LOCAL01
    // Overlapping static entry reached from 0xC02AF2.
    case 0xC02AF4: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    case 0xC02AF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02AF4.
    case 0xC02AF6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02AF5.
    case 0xC02AF7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_horizontal.asm:79 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02AF8: cpu.execute_instruction<0x8D>(0x004DE8, 3); return true;
    // src/overworld/spawn_horizontal.asm:80 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02AFB: cpu.execute_instruction<0x8D>(0x004DEA, 3); return true;
    // src/overworld/spawn_horizontal.asm:81 LDA #1
    case 0xC02AFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/spawn_horizontal.asm:81 LDA #1
    // Overlapping static entry reached from 0xC02AFE.
    case 0xC02B00: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:82 STA @VIRTUAL02
    case 0xC02B01: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:84 LDX @LOCAL02
    case 0xC02B03: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:85 LDA @VIRTUAL04
    case 0xC02B05: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:86 JSL UNKNOWN_C0263D
    case 0xC02B07: cpu.execute_instruction<0x22>(0xC0264B, 4); return true;
    // src/overworld/spawn_horizontal.asm:87 STA @LOCAL04
    case 0xC02B0B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:88 LDY @VIRTUAL04
    case 0xC02B0D: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:89 INY
    case 0xC02B0F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:90 STY @LOCAL00
    case 0xC02B10: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/spawn_horizontal.asm:91 LDX @LOCAL02
    case 0xC02B12: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:92 TYA
    case 0xC02B14: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:93 JSL UNKNOWN_C0263D
    case 0xC02B15: cpu.execute_instruction<0x22>(0xC0264B, 4); return true;
    // src/overworld/spawn_horizontal.asm:94 TAX
    case 0xC02B19: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:95 LDA @LOCAL04
    case 0xC02B1A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:96 BEQ @UNKNOWN11
    case 0xC02B1C: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/spawn_horizontal.asm:97 CPX @LOCAL04
    case 0xC02B1E: cpu.execute_instruction<0xE4>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:98 BNE @UNKNOWN11
    case 0xC02B20: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/spawn_horizontal.asm:99 LDA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02B22: cpu.execute_instruction<0xAD>(0x004DE8, 3); return true;
    // src/overworld/spawn_horizontal.asm:100 CLC
    case 0xC02B25: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:101 ADC #8
    case 0xC02B26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/spawn_horizontal.asm:101 ADC #8
    // Overlapping static entry reached from 0xC02B26.
    case 0xC02B28: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_horizontal.asm:102 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02B29: cpu.execute_instruction<0x8D>(0x004DE8, 3); return true;
    // src/overworld/spawn_horizontal.asm:103 LDY @LOCAL00
    case 0xC02B2C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/spawn_horizontal.asm:104 STY @VIRTUAL04
    case 0xC02B2E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:105 INC @VIRTUAL02
    case 0xC02B30: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:106 LDA @VIRTUAL02
    case 0xC02B32: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:107 CMP #6
    case 0xC02B34: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/spawn_horizontal.asm:107 CMP #6
    // Overlapping static entry reached from 0xC02B34.
    case 0xC02B36: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_horizontal.asm:108 BNE @UNKNOWN9
    case 0xC02B37: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/overworld/spawn_horizontal.asm:109 BRA @UNKNOWN11
    case 0xC02B39: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/spawn_horizontal.asm:111 LDY @LOCAL04
    case 0xC02B3B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:112 LDX @LOCAL02
    case 0xC02B3D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:113 LDA @LOCAL01
    case 0xC02B3F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/spawn_horizontal.asm:114 JSR UNKNOWN_C02668
    case 0xC02B41: cpu.execute_instruction<0x20>(0x002676, 3); return true;
    // src/overworld/spawn_horizontal.asm:116 LDX @VIRTUAL02
    case 0xC02B44: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:117 LDA @VIRTUAL02
    case 0xC02B46: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:118 DEC
    case 0xC02B48: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:119 STA @VIRTUAL02
    case 0xC02B49: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:120 CPX #0
    case 0xC02B4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:120 CPX #0
    // Overlapping static entry reached from 0xC02B4B.
    case 0xC02B4D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_horizontal.asm:121 BNE @UNKNOWN10
    case 0xC02B4E: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/overworld/spawn_horizontal.asm:122 INC @VIRTUAL04
    case 0xC02B50: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:124 LDA @LOCAL03
    case 0xC02B52: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_horizontal.asm:125 CLC
    case 0xC02B54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:126 ADC #5
    case 0xC02B55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/spawn_horizontal.asm:126 ADC #5
    // Overlapping static entry reached from 0xC02B55.
    case 0xC02B57: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/spawn_horizontal.asm:127 CLC
    case 0xC02B58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:128 SBC @VIRTUAL04
    case 0xC02B59: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B5B: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B5D: cpu.execute_instruction<0x10>(0x000092, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B5F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B61: cpu.execute_instruction<0x30>(0x00008E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_horizontal.asm:131 END_C_FUNCTION
    case 0xC02B63: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_horizontal.asm:131 END_C_FUNCTION
    case 0xC02B64: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn_vertical.asm (source_named).
bool execute_overworld_spawn_vertical_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_vertical.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02B65: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B67: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B68: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC02B6A.
    case 0xC02B6C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B6D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B6E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:14 TXY
    case 0xC02B6F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:15 STY @LOCAL05
    case 0xC02B70: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:16 TAX
    case 0xC02B72: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:17 STX @LOCAL04
    case 0xC02B73: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/spawn_vertical.asm:18 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC02B75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/overworld/spawn_vertical.asm:18 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC02B75.
    case 0xC02B77: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_vertical.asm:19 JSL GET_EVENT_FLAG
    case 0xC02B78: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/spawn_vertical.asm:20 CMP #0
    case 0xC02B7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:20 CMP #0
    // Overlapping static entry reached from 0xC02B7C.
    case 0xC02B7E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:21 BNEL @UNKNOWN14
    case 0xC02B7F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:21 BNEL @UNKNOWN14
    case 0xC02B81: cpu.execute_instruction<0x4C>(0x002C4C, 3); return true;
    // src/overworld/spawn_vertical.asm:22 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC02B84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/overworld/spawn_vertical.asm:22 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC02B84.
    case 0xC02B86: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    case 0xC02B87: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02BDD.
    case 0xC02B88: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02B88.
    case 0xC02B8A: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/overworld/spawn_vertical.asm:24 CMP #0
    case 0xC02B8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:24 CMP #0
    // Overlapping static entry reached from 0xC02B8A.
    case 0xC02B8C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_vertical.asm:24 CMP #0
    // Overlapping static entry reached from 0xC02B8B.
    case 0xC02B8D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:25 BNEL @UNKNOWN14
    case 0xC02B8E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:25 BNEL @UNKNOWN14
    case 0xC02B90: cpu.execute_instruction<0x4C>(0x002C4C, 3); return true;
    // src/overworld/spawn_vertical.asm:26 LDA ENEMY_SPAWNS_ENABLED
    case 0xC02B93: cpu.execute_instruction<0xAD>(0x004DE0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/spawn_vertical.asm:27 BEQL @UNKNOWN14
    case 0xC02B96: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:27 BEQL @UNKNOWN14
    case 0xC02B98: cpu.execute_instruction<0x4C>(0x002C4C, 3); return true;
    // src/overworld/spawn_vertical.asm:28 LDX @LOCAL04
    case 0xC02B9B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/spawn_vertical.asm:29 TXA
    case 0xC02B9D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:30 AND #$0007
    case 0xC02B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/spawn_vertical.asm:30 AND #$0007
    // Overlapping static entry reached from 0xC02B9E.
    case 0xC02BA0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:31 BNEL @UNKNOWN14
    case 0xC02BA1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:31 BNEL @UNKNOWN14
    case 0xC02BA3: cpu.execute_instruction<0x4C>(0x002C4C, 3); return true;
    // src/overworld/spawn_vertical.asm:32 CPX #$FFF0
    case 0xC02BA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000F0, 2); else cpu.execute_instruction<0xE0>(0x00FFF0, 3); return true;
    // src/overworld/spawn_vertical.asm:32 CPX #$FFF0
    // Overlapping static entry reached from 0xC02BA6.
    case 0xC02BA8: cpu.execute_instruction<0xFF>(0xA20390, 4); return true;
    // src/overworld/spawn_vertical.asm:33 BCC @UNKNOWN4
    case 0xC02BA9: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:34 LDX #0
    case 0xC02BAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:34 LDX #0
    // Overlapping static entry reached from 0xC02BA8.
    case 0xC02BAC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_vertical.asm:34 LDX #0
    // Overlapping static entry reached from 0xC02BAB.
    case 0xC02BAD: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/overworld/spawn_vertical.asm:36 CPX #MAP_WIDTH_TILES8
    case 0xC02BAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000400, 3); return true;
    // src/overworld/spawn_vertical.asm:36 CPX #MAP_WIDTH_TILES8
    // Overlapping static entry reached from 0xC02BAE.
    case 0xC02BB0: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/overworld/spawn_vertical.asm:37 BCC @UNKNOWN5
    case 0xC02BB1: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:37 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC02BB0.
    case 0xC02BB2: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/spawn_vertical.asm:38 JMP @UNKNOWN14
    case 0xC02BB3: cpu.execute_instruction<0x4C>(0x002C4C, 3); return true;
    // src/overworld/spawn_vertical.asm:38 JMP @UNKNOWN14
    // Overlapping static entry reached from 0xC02BB2.
    case 0xC02BB4: cpu.execute_instruction<0x4C>(0x008A2C, 3); return true;
    // src/overworld/spawn_vertical.asm:40 TXA
    case 0xC02BB6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:41 ASL
    case 0xC02BB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:42 PHP
    case 0xC02BB8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:43 LSR
    case 0xC02BB9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:44 LSR
    case 0xC02BBA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:45 LSR
    case 0xC02BBB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:46 LSR
    case 0xC02BBC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:47 PLP
    case 0xC02BBD: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:48 BCC @UNKNOWN6
    case 0xC02BBE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:50 ORA #$E000
    case 0xC02BC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/spawn_vertical.asm:50 ORA #$E000
    // Overlapping static entry reached from 0xC02BC0.
    case 0xC02BC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x001485, 3); return true;
    // src/overworld/spawn_vertical.asm:55 STA @LOCAL03
    case 0xC02BC3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:55 STA @LOCAL03
    // Overlapping static entry reached from 0xC02BC2.
    case 0xC02BC4: cpu.execute_instruction<0x14>(0x0000A4, 2); return true;
    // src/overworld/spawn_vertical.asm:56 LDY @LOCAL05
    case 0xC02BC5: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:56 LDY @LOCAL05
    // Overlapping static entry reached from 0xC02BC4.
    case 0xC02BC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:57 TYA
    case 0xC02BC7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:58 ASL
    case 0xC02BC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:59 PHP
    case 0xC02BC9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:60 LSR
    case 0xC02BCA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:61 LSR
    case 0xC02BCB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:62 LSR
    case 0xC02BCC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:63 LSR
    case 0xC02BCD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:64 PLP
    case 0xC02BCE: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:65 BCC @UNKNOWN7
    case 0xC02BCF: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:67 ORA #$E000
    case 0xC02BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/spawn_vertical.asm:67 ORA #$E000
    // Overlapping static entry reached from 0xC02BD1.
    case 0xC02BD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x001285, 3); return true;
    // src/overworld/spawn_vertical.asm:72 STA @LOCAL02
    case 0xC02BD4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/spawn_vertical.asm:72 STA @LOCAL02
    // Overlapping static entry reached from 0xC02BD3.
    case 0xC02BD5: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:73 STA @VIRTUAL04
    case 0xC02BD6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:73 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02BD5.
    case 0xC02BD7: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/overworld/spawn_vertical.asm:74 BRA @UNKNOWN12
    case 0xC02BD8: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/overworld/spawn_vertical.asm:74 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC02BD7.
    case 0xC02BD9: cpu.execute_instruction<0x61>(0x0000A5, 2); return true;
    // src/overworld/spawn_vertical.asm:76 LDA @VIRTUAL04
    case 0xC02BDA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC02BD9.
    case 0xC02BDB: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:77 STA @LOCAL01
    case 0xC02BDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/spawn_vertical.asm:77 STA @LOCAL01
    // Overlapping static entry reached from 0xC02BDB.
    case 0xC02BDD: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/overworld/spawn_vertical.asm:78 LDA #8
    case 0xC02BDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/overworld/spawn_vertical.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02BDD.
    case 0xC02BDF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02BDE.
    case 0xC02BE0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_vertical.asm:79 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02BE1: cpu.execute_instruction<0x8D>(0x004DE8, 3); return true;
    // src/overworld/spawn_vertical.asm:80 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02BE4: cpu.execute_instruction<0x8D>(0x004DEA, 3); return true;
    // src/overworld/spawn_vertical.asm:81 LDA #1
    case 0xC02BE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/spawn_vertical.asm:81 LDA #1
    // Overlapping static entry reached from 0xC02BE7.
    case 0xC02BE9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:82 STA @VIRTUAL02
    case 0xC02BEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:84 LDX @VIRTUAL04
    case 0xC02BEC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:85 LDA @LOCAL03
    case 0xC02BEE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:86 JSL UNKNOWN_C0263D
    case 0xC02BF0: cpu.execute_instruction<0x22>(0xC0264B, 4); return true;
    // src/overworld/spawn_vertical.asm:87 STA @LOCAL05
    case 0xC02BF4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:88 LDY @VIRTUAL04
    case 0xC02BF6: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:89 INY
    case 0xC02BF8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:90 STY @LOCAL00
    case 0xC02BF9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/spawn_vertical.asm:91 TYX
    case 0xC02BFB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:92 LDA @LOCAL03
    case 0xC02BFC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:93 JSL UNKNOWN_C0263D
    case 0xC02BFE: cpu.execute_instruction<0x22>(0xC0264B, 4); return true;
    // src/overworld/spawn_vertical.asm:94 TAX
    case 0xC02C02: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:95 LDA @LOCAL05
    case 0xC02C03: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:96 BEQ @UNKNOWN11
    case 0xC02C05: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/spawn_vertical.asm:97 CPX @LOCAL05
    case 0xC02C07: cpu.execute_instruction<0xE4>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:98 BNE @UNKNOWN11
    case 0xC02C09: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/spawn_vertical.asm:99 LDA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02C0B: cpu.execute_instruction<0xAD>(0x004DEA, 3); return true;
    // src/overworld/spawn_vertical.asm:100 CLC
    case 0xC02C0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:101 ADC #8
    case 0xC02C0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/spawn_vertical.asm:101 ADC #8
    // Overlapping static entry reached from 0xC02C0F.
    case 0xC02C11: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_vertical.asm:102 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02C12: cpu.execute_instruction<0x8D>(0x004DEA, 3); return true;
    // src/overworld/spawn_vertical.asm:103 LDY @LOCAL00
    case 0xC02C15: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/spawn_vertical.asm:104 STY @VIRTUAL04
    case 0xC02C17: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:105 INC @VIRTUAL02
    case 0xC02C19: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:106 LDA @VIRTUAL02
    case 0xC02C1B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:107 CMP #6
    case 0xC02C1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/spawn_vertical.asm:107 CMP #6
    // Overlapping static entry reached from 0xC02C1D.
    case 0xC02C1F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_vertical.asm:108 BNE @UNKNOWN9
    case 0xC02C20: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/overworld/spawn_vertical.asm:109 BRA @UNKNOWN11
    case 0xC02C22: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/spawn_vertical.asm:111 LDY @LOCAL05
    case 0xC02C24: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:112 LDX @LOCAL01
    case 0xC02C26: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/spawn_vertical.asm:113 LDA @LOCAL03
    case 0xC02C28: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:114 JSR UNKNOWN_C02668
    case 0xC02C2A: cpu.execute_instruction<0x20>(0x002676, 3); return true;
    // src/overworld/spawn_vertical.asm:116 LDX @VIRTUAL02
    case 0xC02C2D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:117 LDA @VIRTUAL02
    case 0xC02C2F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:118 DEC
    case 0xC02C31: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:119 STA @VIRTUAL02
    case 0xC02C32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:120 CPX #0
    case 0xC02C34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:120 CPX #0
    // Overlapping static entry reached from 0xC02C34.
    case 0xC02C36: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_vertical.asm:121 BNE @UNKNOWN10
    case 0xC02C37: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/overworld/spawn_vertical.asm:122 INC @VIRTUAL04
    case 0xC02C39: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:124 LDA @LOCAL02
    case 0xC02C3B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/spawn_vertical.asm:125 CLC
    case 0xC02C3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:126 ADC #5
    case 0xC02C3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/spawn_vertical.asm:126 ADC #5
    // Overlapping static entry reached from 0xC02C3E.
    case 0xC02C40: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:127 CLC
    case 0xC02C41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:128 SBC @VIRTUAL04
    case 0xC02C42: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C44: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C46: cpu.execute_instruction<0x10>(0x000092, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C48: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C4A: cpu.execute_instruction<0x30>(0x00008E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_vertical.asm:131 END_C_FUNCTION
    case 0xC02C4C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_vertical.asm:131 END_C_FUNCTION
    case 0xC02C4D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/talk_to.asm (source_named).
bool execute_overworld_talk_to_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/talk_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13864: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13866: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13867: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13868: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC13868.
    case 0xC1386A: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1386B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1386C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1386C.
    case 0xC1386E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1386F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13871: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13871.
    case 0xC13873: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13874: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13876.
    case 0xC13878: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13879: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/overworld/talk_to.asm:10 JSL FIND_NEARBY_TALKABLE_TPT_ENTRY
    case 0xC1387C: cpu.execute_instruction<0x22>(0xC046D9, 4); return true;
    // src/overworld/talk_to.asm:11 LDA INTERACTING_NPC_ID
    case 0xC13880: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC13883: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC13885: cpu.execute_instruction<0x4C>(0x00390E, 3); return true;
    // src/overworld/talk_to.asm:13 LDA INTERACTING_NPC_ID
    case 0xC13888: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    case 0xC1388B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1388B.
    case 0xC1388D: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC1388E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC13890: cpu.execute_instruction<0x4C>(0x00390E, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC1388D.
    case 0xC13891: cpu.execute_instruction<0x0E>(0x00AD39, 3); return true;
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    case 0xC13893: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13891.
    case 0xC13894: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    // Overlapping static entry reached from 0xC13894.
    case 0xC13895: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    case 0xC13896: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00FFFE, 3); return true;
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC13896.
    case 0xC13898: cpu.execute_instruction<0xFF>(0xAD0CD0, 4); return true;
    // src/overworld/talk_to.asm:18 BNE @UNKNOWN2
    case 0xC13899: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1389B: cpu.execute_instruction<0xAD>(0x006164, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13898.
    case 0xC1389C: cpu.execute_instruction<0x64>(0x000061, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC1389E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC138A0: cpu.execute_instruction<0xAD>(0x006166, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC138A3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/talk_to.asm:20 BRA @UNKNOWN4
    case 0xC138A5: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138A7.
    case 0xC138A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138A9.
    case 0xC138AB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138AB.
    case 0xC138AD: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC138AC.
    case 0xC138AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC138AF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC138B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/talk_to.asm:24 LDA INTERACTING_NPC_ID
    case 0xC138B9: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138BC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138C1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138C2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/talk_to.asm:26 CLC
    case 0xC138C4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:27 ADC @VIRTUAL06
    case 0xC138C5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:28 STA @VIRTUAL06
    case 0xC138C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:29 LDA [@VIRTUAL06]
    case 0xC138C9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:30 AND #$00FF
    case 0xC138CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/talk_to.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC138CB.
    case 0xC138CD: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    case 0xC138CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC138CE.
    case 0xC138D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/talk_to.asm:32 BEQ @UNKNOWN3
    case 0xC138D1: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    case 0xC138D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC138D3.
    case 0xC138D5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/talk_to.asm:34 BEQ @UNKNOWN4
    case 0xC138D6: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    case 0xC138D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC138D8.
    case 0xC138DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/talk_to.asm:36 BEQ @UNKNOWN4
    case 0xC138DB: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/overworld/talk_to.asm:37 BRA @UNKNOWN4
    case 0xC138DD: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/overworld/talk_to.asm:39 LDA INTERACTING_NPC_ENTITY
    case 0xC138DF: cpu.execute_instruction<0xAD>(0x0060EA, 3); return true;
    // src/overworld/talk_to.asm:40 JSL UNKNOWN_C042C2
    case 0xC138E2: cpu.execute_instruction<0x22>(0xC04549, 4); return true;
    // src/overworld/talk_to.asm:41 LDA INTERACTING_NPC_ID
    case 0xC138E6: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138E9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC138EF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/talk_to.asm:43 CLC
    case 0xC138F1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    case 0xC138F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC138F2.
    case 0xC138F4: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138F5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138F7: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138F9: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC138FB: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/talk_to.asm:46 CLC
    case 0xC138FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:47 ADC @VIRTUAL06
    case 0xC138FE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:48 STA @VIRTUAL06
    case 0xC13900: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13902: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13902.
    case 0xC13904: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13905: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13907: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13908: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1390A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1390C: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC1390E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13910: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13912: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13914: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC13916: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC13917: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/teleport.asm (source_named).
bool execute_overworld_teleport_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/teleport.asm:3 BEGIN_C_FUNCTION
    case 0xC1BB11: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BB13: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BB14: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BB15: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BB16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BB16.
    case 0xC1BB18: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BB19: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BB1A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/teleport.asm:11 STA @LOCAL03
    case 0xC1BB1B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/teleport.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC1BB18.
    case 0xC1BB1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:12 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BB1D: cpu.execute_instruction<0xAD>(0x00611E, 3); return true;
    // src/overworld/teleport.asm:13 STA @LOCAL02
    case 0xC1BB20: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/teleport.asm:14 LDA #1
    case 0xC1BB22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/teleport.asm:14 LDA #1
    // Overlapping static entry reached from 0xC1BB22.
    case 0xC1BB24: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/teleport.asm:15 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BB25: cpu.execute_instruction<0x8D>(0x00611E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BB28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00EB0B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BB28.
    case 0xC1BB2A: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BB2B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BB2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BB2D.
    case 0xC1BB2F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BB30: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:17 LDA @LOCAL03
    case 0xC1BB32: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BB34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BB35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BB36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:19 CLC
    case 0xC1BB37: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:20 ADC @VIRTUAL0A
    case 0xC1BB38: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:21 STA @VIRTUAL0A
    case 0xC1BB3A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:22 STA @LOCAL01
    case 0xC1BB3C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/teleport.asm:23 LDA @VIRTUAL0A+2
    case 0xC1BB3E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:24 STA @LOCAL01+2
    case 0xC1BB40: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/teleport.asm:25 LDY #1
    case 0xC1BB42: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/teleport.asm:25 LDY #1
    // Overlapping static entry reached from 0xC1BB42.
    case 0xC1BB44: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/teleport.asm:26 STY @LOCAL03
    case 0xC1BB45: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/overworld/teleport.asm:27 BRA @UNKNOWN1
    case 0xC1BB47: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/teleport.asm:29 LDX #0
    case 0xC1BB49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/teleport.asm:29 LDX #0
    // Overlapping static entry reached from 0xC1BB49.
    case 0xC1BB4B: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/teleport.asm:30 TYA
    case 0xC1BB4C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/teleport.asm:31 JSL SET_EVENT_FLAG
    case 0xC1BB4D: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/overworld/teleport.asm:32 LDY @LOCAL03
    case 0xC1BB51: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/overworld/teleport.asm:33 INY
    case 0xC1BB53: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/teleport.asm:34 STY @LOCAL03
    case 0xC1BB54: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/overworld/teleport.asm:36 CPY #10
    case 0xC1BB56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/overworld/teleport.asm:36 CPY #10
    // Overlapping static entry reached from 0xC1BB56.
    case 0xC1BB58: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/teleport.asm:37 BLTEQ @UNKNOWN0
    case 0xC1BB59: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/teleport.asm:37 BLTEQ @UNKNOWN0
    case 0xC1BB5B: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // src/overworld/teleport.asm:38 JSL UNKNOWN_C06B3D
    case 0xC1BB5D: cpu.execute_instruction<0x22>(0xC06D6B, 4); return true;
    // src/overworld/teleport.asm:39 LDA #teleport_destination::screen_transition
    case 0xC1BB61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/teleport.asm:39 LDA #teleport_destination::screen_transition
    // Overlapping static entry reached from 0xC1BB61.
    case 0xC1BB63: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB64: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB66: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB68: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB6A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/teleport.asm:41 CLC
    case 0xC1BB6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:42 ADC @VIRTUAL06
    case 0xC1BB6D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/teleport.asm:43 STA @VIRTUAL06
    case 0xC1BB6F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/teleport.asm:44 LDX #1
    case 0xC1BB71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:44 LDX #1
    // Overlapping static entry reached from 0xC1BB71.
    case 0xC1BB73: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:45 LDA [@VIRTUAL06]
    case 0xC1BB74: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:46 AND #$00FF
    case 0xC1BB76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1BB76.
    case 0xC1BB78: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:47 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC1BB79: cpu.execute_instruction<0x22>(0xC06ADD, 4); return true;
    // src/overworld/teleport.asm:48 JSL PLAY_SOUND
    case 0xC1BB7D: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/teleport.asm:49 LDA DISABLED_TRANSITIONS
    case 0xC1BB81: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/overworld/teleport.asm:50 BEQ @UNKNOWN2
    case 0xC1BB84: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:51 LDX #1
    case 0xC1BB86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:51 LDX #1
    // Overlapping static entry reached from 0xC1BB86.
    case 0xC1BB88: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/teleport.asm:52 TXA
    case 0xC1BB89: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:53 JSL FADE_OUT
    case 0xC1BB8A: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/teleport.asm:54 BRA @UNKNOWN3
    case 0xC1BB8E: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:56 LDX #1
    case 0xC1BB90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:56 LDX #1
    // Overlapping static entry reached from 0xC1BB90.
    case 0xC1BB92: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:57 LDA [@VIRTUAL06]
    case 0xC1BB93: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:58 AND #$00FF
    case 0xC1BB95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC1BB95.
    case 0xC1BB97: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:59 JSL SCREEN_TRANSITION
    case 0xC1BB98: cpu.execute_instruction<0x22>(0xC06890, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB9C: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BB9E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BBA0: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BBA2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/teleport.asm:62 LDA [@VIRTUAL06] ;teleport_destination::x_coord
    case 0xC1BBA4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:63 ASL
    case 0xC1BBA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:64 ASL
    case 0xC1BBA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:65 ASL
    case 0xC1BBA8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:66 STA @LOCAL03
    case 0xC1BBA9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/teleport.asm:67 LDY #teleport_destination::y_coord
    case 0xC1BBAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/teleport.asm:67 LDY #teleport_destination::y_coord
    // Overlapping static entry reached from 0xC1BBAB.
    case 0xC1BBAD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/teleport.asm:68 LDA [@VIRTUAL0A],Y
    case 0xC1BBAE: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:69 ASL
    case 0xC1BBB0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:70 ASL
    case 0xC1BBB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:71 ASL
    case 0xC1BBB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:72 STA @VIRTUAL04
    case 0xC1BBB3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/teleport.asm:73 LDA #teleport_destination::direction
    case 0xC1BBB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/teleport.asm:73 LDA #teleport_destination::direction
    // Overlapping static entry reached from 0xC1BBB5.
    case 0xC1BBB7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BBB8: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BBBA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BBBC: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BBBE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/teleport.asm:75 CLC
    case 0xC1BBC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:76 ADC @VIRTUAL06
    case 0xC1BBC1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/teleport.asm:77 STA @VIRTUAL06
    case 0xC1BBC3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/teleport.asm:78 LDA [@VIRTUAL06]
    case 0xC1BBC5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:79 AND #$00FF
    case 0xC1BBC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1BBC7.
    case 0xC1BBC9: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/teleport.asm:80 AND #$007F
    case 0xC1BBCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/overworld/teleport.asm:80 AND #$007F
    // Overlapping static entry reached from 0xC1BBCA.
    case 0xC1BBCC: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/teleport.asm:81 DEC
    case 0xC1BBCD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:82 STA @VIRTUAL02
    case 0xC1BBCE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/teleport.asm:83 LDX @VIRTUAL04
    case 0xC1BBD0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/teleport.asm:84 LDA @LOCAL03
    case 0xC1BBD2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/teleport.asm:85 JSL LOAD_MAP_AT_POSITION
    case 0xC1BBD4: cpu.execute_instruction<0x22>(0xC0140C, 4); return true;
    // src/overworld/teleport.asm:86 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC1BBD8: cpu.execute_instruction<0x9C>(0x002C8E, 3); return true;
    // src/overworld/teleport.asm:87 LDY @VIRTUAL02
    case 0xC1BBDB: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/teleport.asm:88 LDX @VIRTUAL04
    case 0xC1BBDD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/teleport.asm:89 LDA @LOCAL03
    case 0xC1BBDF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/teleport.asm:90 JSL UNKNOWN_C03FA9
    case 0xC1BBE1: cpu.execute_instruction<0x22>(0xC04230, 4); return true;
    // src/overworld/teleport.asm:91 LDA [@VIRTUAL06]
    case 0xC1BBE5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:92 AND #$00FF
    case 0xC1BBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:92 AND #$00FF
    // Overlapping static entry reached from 0xC1BBE7.
    case 0xC1BBE9: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/teleport.asm:93 AND #$0080
    case 0xC1BBEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/overworld/teleport.asm:93 AND #$0080
    // Overlapping static entry reached from 0xC1BBEA.
    case 0xC1BBEC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/teleport.asm:94 BEQ @UNKNOWN4
    case 0xC1BBED: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/teleport.asm:95 LDA @VIRTUAL02
    case 0xC1BBEF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/teleport.asm:96 JSL UNKNOWN_C052D4
    case 0xC1BBF1: cpu.execute_instruction<0x22>(0xC054F9, 4); return true;
    // src/overworld/teleport.asm:98 LDX @VIRTUAL04
    case 0xC1BBF5: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/teleport.asm:99 LDA @LOCAL03
    case 0xC1BBF7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/teleport.asm:100 JSL UNKNOWN_C068F4
    case 0xC1BBF9: cpu.execute_instruction<0x22>(0xC06B22, 4); return true;
    // src/overworld/teleport.asm:101 JSL UNKNOWN_C069AF
    case 0xC1BBFD: cpu.execute_instruction<0x22>(0xC06BDD, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BC01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BC01.
    case 0xC1BC03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BC04: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BC06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BC06.
    case 0xC1BC08: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BC09: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BC0B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BC0D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BC0F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BC11: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BC13: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BC15: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BC17: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BC19: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC1B: cpu.execute_instruction<0xAD>(0x009FA1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC1E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC20: cpu.execute_instruction<0xAD>(0x009FA3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC23: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/teleport.asm:106 CMP @VIRTUAL0A+2
    case 0xC1BC25: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:107 BNE @UNKNOWN5
    case 0xC1BC27: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/teleport.asm:108 LDA @VIRTUAL06
    case 0xC1BC29: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/teleport.asm:109 CMP @VIRTUAL0A
    case 0xC1BC2B: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:111 BEQ @UNKNOWN6
    case 0xC1BC2D: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC2F: cpu.execute_instruction<0xAD>(0x009FA1, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC32: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC34: cpu.execute_instruction<0xAD>(0x009FA3, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BC37: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/teleport.asm:113 PHA
    case 0xC1BC39: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BC3A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BC3C: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BC3F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BC41: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/overworld/teleport.asm:115 PLA
    case 0xC1BC44: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/teleport.asm:116 JSL UNKNOWN_C09279
    case 0xC1BC45: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BC49: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BC4B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BC4D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BC4F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BC51: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BC53: cpu.execute_instruction<0x8D>(0x009FA1, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BC56: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BC58: cpu.execute_instruction<0x8D>(0x009FA3, 3); return true;
    // src/overworld/teleport.asm:120 JSL UNKNOWN_C065A3
    case 0xC1BC5B: cpu.execute_instruction<0x22>(0xC067D1, 4); return true;
    // src/overworld/teleport.asm:121 LDA #teleport_destination::screen_transition
    case 0xC1BC5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/teleport.asm:121 LDA #teleport_destination::screen_transition
    // Overlapping static entry reached from 0xC1BC5F.
    case 0xC1BC61: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BC62: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BC64: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BC66: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BC68: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BC6A: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BC6C: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BC6E: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BC70: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/teleport.asm:124 CLC
    case 0xC1BC72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:125 ADC @VIRTUAL06
    case 0xC1BC73: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/teleport.asm:126 STA @VIRTUAL06
    case 0xC1BC75: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/teleport.asm:127 LDX #0
    case 0xC1BC77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/teleport.asm:127 LDX #0
    // Overlapping static entry reached from 0xC1BC77.
    case 0xC1BC79: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:128 LDA [@VIRTUAL06]
    case 0xC1BC7A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:129 AND #$00FF
    case 0xC1BC7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC1BC7C.
    case 0xC1BC7E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:130 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC1BC7F: cpu.execute_instruction<0x22>(0xC06ADD, 4); return true;
    // src/overworld/teleport.asm:131 JSL PLAY_SOUND
    case 0xC1BC83: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/overworld/teleport.asm:132 LDA DISABLED_TRANSITIONS
    case 0xC1BC87: cpu.execute_instruction<0xAD>(0x00B68A, 3); return true;
    // src/overworld/teleport.asm:133 BEQ @UNKNOWN7
    case 0xC1BC8A: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:134 LDX #1
    case 0xC1BC8C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:134 LDX #1
    // Overlapping static entry reached from 0xC1BC8C.
    case 0xC1BC8E: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/teleport.asm:135 TXA
    case 0xC1BC8F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:136 JSL FADE_IN
    case 0xC1BC90: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/overworld/teleport.asm:137 BRA @UNKNOWN8
    case 0xC1BC94: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:139 LDX #0
    case 0xC1BC96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/teleport.asm:139 LDX #0
    // Overlapping static entry reached from 0xC1BC96.
    case 0xC1BC98: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:140 LDA [@VIRTUAL06]
    case 0xC1BC99: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:141 AND #$00FF
    case 0xC1BC9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC1BC9B.
    case 0xC1BC9D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:142 JSL SCREEN_TRANSITION
    case 0xC1BC9E: cpu.execute_instruction<0x22>(0xC06890, 4); return true;
    // src/overworld/teleport.asm:144 LDA #.LOWORD(-1)
    case 0xC1BCA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/teleport.asm:144 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1BCA2.
    case 0xC1BCA4: cpu.execute_instruction<0xFF>(0x614A8D, 4); return true;
    // src/overworld/teleport.asm:145 STA STAIRS_DIRECTION
    case 0xC1BCA5: cpu.execute_instruction<0x8D>(0x00614A, 3); return true;
    // src/overworld/teleport.asm:146 JSL SPAWN_BUZZ_BUZZ
    case 0xC1BCA8: cpu.execute_instruction<0x22>(0xC06D4F, 4); return true;
    // src/overworld/teleport.asm:147 LDA @LOCAL02
    case 0xC1BCAC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/teleport.asm:148 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BCAE: cpu.execute_instruction<0x8D>(0x00611E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/teleport.asm:149 END_C_FUNCTION
    case 0xC1BCB1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/teleport.asm:149 END_C_FUNCTION
    case 0xC1BCB2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/test_your_sanctuary_display.asm (source_named).
bool execute_overworld_test_your_sanctuary_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B573: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B575: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B576: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B577: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B577.
    case 0xC4B579: cpu.execute_instruction<0xFF>(0xA9225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:7 END_STACK_VARS
    case 0xC4B57A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/test_your_sanctuary_display.asm:8 JSL INITIALIZE_YOUR_SANCTUARY_DISPLAY
    case 0xC4B57B: cpu.execute_instruction<0x22>(0xC4B0A9, 4); return true;
    // src/overworld/test_your_sanctuary_display.asm:8 JSL INITIALIZE_YOUR_SANCTUARY_DISPLAY
    // Overlapping static entry reached from 0xC4B579.
    case 0xC4B57D: cpu.execute_instruction<0xB0>(0x0000C4, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:9 LDX #0
    case 0xC4B57F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:9 LDX #0
    // Overlapping static entry reached from 0xC4B57F.
    case 0xC4B581: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:10 STX @LOCATION
    case 0xC4B582: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:12 STZ BG1_Y_POS
    case 0xC4B584: cpu.execute_instruction<0x9C>(0x000033, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:13 STZ BG1_X_POS
    case 0xC4B587: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:14 JSL UPDATE_SCREEN
    case 0xC4B58A: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/test_your_sanctuary_display.asm:15 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4B58E: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/test_your_sanctuary_display.asm:16 LDA PAD_STATE
    case 0xC4B592: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:17 AND #PAD::R_BUTTON
    case 0xC4B595: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x000010, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:17 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC4B5F7.
    case 0xC4B596: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:17 AND #PAD::R_BUTTON
    // Overlapping static entry reached from 0xC4B595.
    case 0xC4B597: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:18 BNE @UNKNOWN0
    case 0xC4B598: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:19 LDX @LOCATION
    case 0xC4B59A: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:20 TXA
    case 0xC4B59C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/test_your_sanctuary_display.asm:21 JSL DISPLAY_YOUR_SANCTUARY_LOCATION
    case 0xC4B59D: cpu.execute_instruction<0x22>(0xC4B4E8, 4); return true;
    // src/overworld/test_your_sanctuary_display.asm:22 JSL ENABLE_YOUR_SANCTUARY_DISPLAY
    case 0xC4B5A1: cpu.execute_instruction<0x22>(0xC4B0E1, 4); return true;
    // src/overworld/test_your_sanctuary_display.asm:23 LDX @LOCATION
    case 0xC4B5A5: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:24 INX
    case 0xC4B5A7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/test_your_sanctuary_display.asm:25 STX @LOCATION
    case 0xC4B5A8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:26 CPX #8
    case 0xC4B5AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000008, 2); else cpu.execute_instruction<0xE0>(0x000008, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:26 CPX #8
    // Overlapping static entry reached from 0xC4B5AA.
    case 0xC4B5AC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:27 BNE @UNKNOWN0
    case 0xC4B5AD: cpu.execute_instruction<0xD0>(0x0000D5, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:28 LDX #0
    case 0xC4B5AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/test_your_sanctuary_display.asm:28 LDX #0
    // Overlapping static entry reached from 0xC4B5AF.
    case 0xC4B5B1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:29 STX @LOCATION
    case 0xC4B5B2: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/test_your_sanctuary_display.asm:30 BRA @UNKNOWN0
    case 0xC4B5B4: cpu.execute_instruction<0x80>(0x0000CE, 2); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/update_party-jp.asm (source_named).
bool execute_overworld_update_party_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/update_party-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC036C7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036C9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B6, 2); else cpu.execute_instruction<0x69>(0x00FFB6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC036CB.
    case 0xC036CD: cpu.execute_instruction<0xFF>(0x54AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/update_party-jp.asm:15 END_STACK_VARS
    case 0xC036CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:16 LDA GAME_STATE+game_state::party_count
    case 0xC036CF: cpu.execute_instruction<0xAD>(0x009B54, 3); return true;
    // src/overworld/update_party-jp.asm:16 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC036CD.
    case 0xC036D1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:17 AND #$00FF
    case 0xC036D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party-jp.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC036D2.
    case 0xC036D4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party-jp.asm:18 STA @PARTY_COUNT
    case 0xC036D5: cpu.execute_instruction<0x85>(0x000048, 2); return true;
    // src/overworld/update_party-jp.asm:19 LDA #0
    case 0xC036D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/update_party-jp.asm:19 LDA #0
    // Overlapping static entry reached from 0xC036D7.
    case 0xC036D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party-jp.asm:20 STA @LOCAL08
    case 0xC036DA: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:21 BRA @UNKNOWN1
    case 0xC036DC: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // src/overworld/update_party-jp.asm:23 ASL
    case 0xC036DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:24 PHA
    case 0xC036DF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:25 LDA @LOCAL08
    case 0xC036E0: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:26 CLC
    case 0xC036E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:27 ADC #.LOWORD(GAME_STATE)
    case 0xC036E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:27 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC036E3.
    case 0xC036E5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:28 TAX
    case 0xC036E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:29 LDA a:game_state::player_controlled_party_members,X
    case 0xC036E7: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/overworld/update_party-jp.asm:30 AND #$00FF
    case 0xC036EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party-jp.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC036EA.
    case 0xC036EC: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/overworld/update_party-jp.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC036ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/update_party-jp.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC036ED.
    case 0xC036EF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/update_party-jp.asm:32 JSL MULT168
    case 0xC036F0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/update_party-jp.asm:33 TAX
    case 0xC036F4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:34 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC036F5: cpu.execute_instruction<0xBD>(0x009CBB, 3); return true;
    // src/overworld/update_party-jp.asm:35 PLX
    case 0xC036F8: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:36 STA @LOCAL00,X
    case 0xC036F9: cpu.execute_instruction<0x95>(0x00000E, 2); return true;
    // src/overworld/update_party-jp.asm:37 LDA @LOCAL08
    case 0xC036FB: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:38 INC
    case 0xC036FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:39 STA @LOCAL08
    case 0xC036FE: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:41 CMP @PARTY_COUNT
    case 0xC03700: cpu.execute_instruction<0xC5>(0x000048, 2); return true;
    // src/overworld/update_party-jp.asm:42 BCC @UNKNOWN0
    case 0xC03702: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // src/overworld/update_party-jp.asm:43 LDX #0
    case 0xC03704: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/update_party-jp.asm:43 LDX #0
    // Overlapping static entry reached from 0xC03704.
    case 0xC03706: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/update_party-jp.asm:44 STX @LOCAL07
    case 0xC03707: cpu.execute_instruction<0x86>(0x000044, 2); return true;
    // src/overworld/update_party-jp.asm:45 JMP @UNKNOWN6
    case 0xC03709: cpu.execute_instruction<0x4C>(0x003785, 3); return true;
    // src/overworld/update_party-jp.asm:47 TXA
    case 0xC0370C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:48 CLC
    case 0xC0370D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:49 ADC #.LOWORD(GAME_STATE)
    case 0xC0370E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:49 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0370E.
    case 0xC03710: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:50 TAX
    case 0xC03711: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:51 LDA a:game_state::unknown96,X
    case 0xC03712: cpu.execute_instruction<0xBD>(0x000093, 3); return true;
    // src/overworld/update_party-jp.asm:52 AND #$00FF
    case 0xC03715: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party-jp.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC03715.
    case 0xC03717: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party-jp.asm:53 STA @LOCAL06
    case 0xC03718: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:54 CMP #5
    case 0xC0371A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/overworld/update_party-jp.asm:54 CMP #5
    // Overlapping static entry reached from 0xC0371A.
    case 0xC0371C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/update_party-jp.asm:55 BCC @UNKNOWN3
    case 0xC0371D: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/overworld/update_party-jp.asm:56 CLC
    case 0xC0371F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:57 ADC #$0300
    case 0xC03720: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000300, 3); return true;
    // src/overworld/update_party-jp.asm:57 ADC #$0300
    // Overlapping static entry reached from 0xC03720.
    case 0xC03722: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/overworld/update_party-jp.asm:58 STA @LOCAL06
    case 0xC03723: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:58 STA @LOCAL06
    // Overlapping static entry reached from 0xC03722.
    case 0xC03724: cpu.execute_instruction<0x42>(0x000080, 2); return true;
    // src/overworld/update_party-jp.asm:59 BRA @UNKNOWN5
    case 0xC03725: cpu.execute_instruction<0x80>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:59 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC03724.
    case 0xC03726: cpu.execute_instruction<0x32>(0x0000A6, 2); return true;
    // src/overworld/update_party-jp.asm:61 LDX @LOCAL07
    case 0xC03727: cpu.execute_instruction<0xA6>(0x000044, 2); return true;
    // src/overworld/update_party-jp.asm:61 LDX @LOCAL07
    // Overlapping static entry reached from 0xC03726.
    case 0xC03728: cpu.execute_instruction<0x44>(0x000A8A, 3); return true;
    // src/overworld/update_party-jp.asm:62 TXA
    case 0xC03729: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:63 ASL
    case 0xC0372A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:64 CLC
    case 0xC0372B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:65 ADC #.LOWORD(GAME_STATE)
    case 0xC0372C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:65 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0372C.
    case 0xC0372E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:66 TAX
    case 0xC0372F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:67 LDA a:game_state::unknownA2,X
    case 0xC03730: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/overworld/update_party-jp.asm:68 ASL
    case 0xC03733: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:69 TAX
    case 0xC03734: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:70 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03735: cpu.execute_instruction<0xBD>(0x000E90, 3); return true;
    // src/overworld/update_party-jp.asm:71 LDY #.SIZEOF(char_struct)
    case 0xC03738: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/update_party-jp.asm:71 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03738.
    case 0xC0373A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/update_party-jp.asm:72 JSL MULT168
    case 0xC0373B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/update_party-jp.asm:73 TAX
    case 0xC0373F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:74 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC03740: cpu.execute_instruction<0xBD>(0x009C8C, 3); return true;
    // src/overworld/update_party-jp.asm:75 AND #$00FF
    case 0xC03743: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party-jp.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC03743.
    case 0xC03745: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/update_party-jp.asm:76 TAY
    case 0xC03746: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:77 CPY #1
    case 0xC03747: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/overworld/update_party-jp.asm:77 CPY #1
    // Overlapping static entry reached from 0xC03747.
    case 0xC03749: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/update_party-jp.asm:78 BEQ @UNKNOWN4
    case 0xC0374A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/update_party-jp.asm:79 CPY #2
    case 0xC0374C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x000002, 3); return true;
    // src/overworld/update_party-jp.asm:79 CPY #2
    // Overlapping static entry reached from 0xC0374C.
    case 0xC0374E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/update_party-jp.asm:80 BNE @UNKNOWN5
    case 0xC0374F: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/update_party-jp.asm:82 LDA @LOCAL06
    case 0xC03751: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:83 CLC
    case 0xC03753: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:84 ADC #$0100
    case 0xC03754: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/overworld/update_party-jp.asm:84 ADC #$0100
    // Overlapping static entry reached from 0xC03754.
    case 0xC03756: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/overworld/update_party-jp.asm:85 STA @LOCAL06
    case 0xC03757: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:85 STA @LOCAL06
    // Overlapping static entry reached from 0xC03756.
    case 0xC03758: cpu.execute_instruction<0x42>(0x0000A6, 2); return true;
    // src/overworld/update_party-jp.asm:87 LDX @LOCAL07
    case 0xC03759: cpu.execute_instruction<0xA6>(0x000044, 2); return true;
    // src/overworld/update_party-jp.asm:87 LDX @LOCAL07
    // Overlapping static entry reached from 0xC03758.
    case 0xC0375A: cpu.execute_instruction<0x44>(0x000A8A, 3); return true;
    // src/overworld/update_party-jp.asm:88 TXA
    case 0xC0375B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:89 ASL
    case 0xC0375C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:90 TAY
    case 0xC0375D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:91 LDA @LOCAL06
    case 0xC0375E: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:92 TYX
    case 0xC03760: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:93 STA @LOCAL01,X
    case 0xC03761: cpu.execute_instruction<0x95>(0x00001A, 2); return true;
    // src/overworld/update_party-jp.asm:94 TYA
    case 0xC03763: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:95 CLC
    case 0xC03764: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:96 ADC #.LOWORD(GAME_STATE)
    case 0xC03765: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:96 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03765.
    case 0xC03767: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:97 TAX
    case 0xC03768: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:98 LDA a:game_state::unknownA2,X
    case 0xC03769: cpu.execute_instruction<0xBD>(0x00009F, 3); return true;
    // src/overworld/update_party-jp.asm:99 TAX
    case 0xC0376C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:100 STX @LOCAL02,Y
    case 0xC0376D: cpu.execute_instruction<0x96>(0x000026, 2); return true;
    // src/overworld/update_party-jp.asm:101 LDX @LOCAL07
    case 0xC0376F: cpu.execute_instruction<0xA6>(0x000044, 2); return true;
    // src/overworld/update_party-jp.asm:102 TXA
    case 0xC03771: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:103 CLC
    case 0xC03772: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:104 ADC #.LOWORD(GAME_STATE)
    case 0xC03773: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:104 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03773.
    case 0xC03775: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:105 TAX
    case 0xC03776: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:106 LDA a:game_state::player_controlled_party_members,X
    case 0xC03777: cpu.execute_instruction<0xBD>(0x000099, 3); return true;
    // src/overworld/update_party-jp.asm:107 AND #$00FF
    case 0xC0377A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party-jp.asm:107 AND #$00FF
    // Overlapping static entry reached from 0xC0377A.
    case 0xC0377C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/update_party-jp.asm:108 TAX
    case 0xC0377D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:109 STX @LOCAL03,Y
    case 0xC0377E: cpu.execute_instruction<0x96>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:110 LDX @LOCAL07
    case 0xC03780: cpu.execute_instruction<0xA6>(0x000044, 2); return true;
    // src/overworld/update_party-jp.asm:111 INX
    case 0xC03782: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:112 STX @LOCAL07
    case 0xC03783: cpu.execute_instruction<0x86>(0x000044, 2); return true;
    // src/overworld/update_party-jp.asm:114 CPX @PARTY_COUNT
    case 0xC03785: cpu.execute_instruction<0xE4>(0x000048, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/update_party-jp.asm:115 BCCL @UNKNOWN2
    case 0xC03787: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/update_party-jp.asm:115 BCCL @UNKNOWN2
    case 0xC03789: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/update_party-jp.asm:115 BCCL @UNKNOWN2
    case 0xC0378B: cpu.execute_instruction<0x4C>(0x00370C, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/update_party-jp.asm:116 STZ_BADOPT @VIRTUAL04
    case 0xC0378E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/update_party-jp.asm:116 STZ_BADOPT @VIRTUAL04
    // Overlapping static entry reached from 0xC0378E.
    case 0xC03790: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/update_party-jp.asm:116 STZ_BADOPT @VIRTUAL04
    case 0xC03791: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/update_party-jp.asm:117 JMP @UNKNOWN12
    case 0xC03793: cpu.execute_instruction<0x4C>(0x003812, 3); return true;
    // src/overworld/update_party-jp.asm:119 LDX #0
    case 0xC03796: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/update_party-jp.asm:119 LDX #0
    // Overlapping static entry reached from 0xC03796.
    case 0xC03798: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/update_party-jp.asm:120 STX @LOCAL08
    case 0xC03799: cpu.execute_instruction<0x86>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:121 BRA @UNKNOWN11
    case 0xC0379B: cpu.execute_instruction<0x80>(0x000069, 2); return true;
    // src/overworld/update_party-jp.asm:123 TXA
    case 0xC0379D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:124 ASL
    case 0xC0379E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:125 TAY
    case 0xC0379F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:126 TYX
    case 0xC037A0: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:127 LDA @LOCAL01,X
    case 0xC037A1: cpu.execute_instruction<0xB5>(0x00001A, 2); return true;
    // src/overworld/update_party-jp.asm:128 STA @LOCAL05
    case 0xC037A3: cpu.execute_instruction<0x85>(0x000040, 2); return true;
    // src/overworld/update_party-jp.asm:129 STY @VIRTUAL02
    case 0xC037A5: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:130 INC @VIRTUAL02
    case 0xC037A7: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:131 INC @VIRTUAL02
    case 0xC037A9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:132 LDX @VIRTUAL02
    case 0xC037AB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:133 LDA @LOCAL01,X
    case 0xC037AD: cpu.execute_instruction<0xB5>(0x00001A, 2); return true;
    // src/overworld/update_party-jp.asm:134 STA @LOCAL04
    case 0xC037AF: cpu.execute_instruction<0x85>(0x00003E, 2); return true;
    // src/overworld/update_party-jp.asm:135 LDA @LOCAL05
    case 0xC037B1: cpu.execute_instruction<0xA5>(0x000040, 2); return true;
    // src/overworld/update_party-jp.asm:136 CMP @LOCAL04
    case 0xC037B3: cpu.execute_instruction<0xC5>(0x00003E, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/update_party-jp.asm:137 BLTEQ @UNKNOWN10
    case 0xC037B5: cpu.execute_instruction<0x90>(0x00004A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/update_party-jp.asm:137 BLTEQ @UNKNOWN10
    case 0xC037B7: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/overworld/update_party-jp.asm:138 LDX @LOCAL08
    case 0xC037B9: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:139 TXA
    case 0xC037BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:140 ASL
    case 0xC037BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:141 TAX
    case 0xC037BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:142 LDA @LOCAL04
    case 0xC037BE: cpu.execute_instruction<0xA5>(0x00003E, 2); return true;
    // src/overworld/update_party-jp.asm:143 STA @LOCAL01,X
    case 0xC037C0: cpu.execute_instruction<0x95>(0x00001A, 2); return true;
    // src/overworld/update_party-jp.asm:144 LDX @LOCAL08
    case 0xC037C2: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:145 TXA
    case 0xC037C4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:146 ASL
    case 0xC037C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:147 TAX
    case 0xC037C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:148 INX
    case 0xC037C7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:149 INX
    case 0xC037C8: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:150 LDA @LOCAL05
    case 0xC037C9: cpu.execute_instruction<0xA5>(0x000040, 2); return true;
    // src/overworld/update_party-jp.asm:151 STA @LOCAL01,X
    case 0xC037CB: cpu.execute_instruction<0x95>(0x00001A, 2); return true;
    // src/overworld/update_party-jp.asm:152 TYX
    case 0xC037CD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:153 LDA @LOCAL02,X
    case 0xC037CE: cpu.execute_instruction<0xB5>(0x000026, 2); return true;
    // src/overworld/update_party-jp.asm:154 STA @LOCAL05
    case 0xC037D0: cpu.execute_instruction<0x85>(0x000040, 2); return true;
    // src/overworld/update_party-jp.asm:155 LDX @LOCAL08
    case 0xC037D2: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:156 TXA
    case 0xC037D4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:157 ASL
    case 0xC037D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:158 PHA
    case 0xC037D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:159 LDX @VIRTUAL02
    case 0xC037D7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:160 LDA @LOCAL02,X
    case 0xC037D9: cpu.execute_instruction<0xB5>(0x000026, 2); return true;
    // src/overworld/update_party-jp.asm:161 PLX
    case 0xC037DB: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:162 STA @LOCAL02,X
    case 0xC037DC: cpu.execute_instruction<0x95>(0x000026, 2); return true;
    // src/overworld/update_party-jp.asm:163 LDX @LOCAL08
    case 0xC037DE: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:164 TXA
    case 0xC037E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:165 ASL
    case 0xC037E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:166 TAX
    case 0xC037E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:167 INX
    case 0xC037E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:168 INX
    case 0xC037E4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:169 LDA @LOCAL05
    case 0xC037E5: cpu.execute_instruction<0xA5>(0x000040, 2); return true;
    // src/overworld/update_party-jp.asm:170 STA @LOCAL02,X
    case 0xC037E7: cpu.execute_instruction<0x95>(0x000026, 2); return true;
    // src/overworld/update_party-jp.asm:171 LDX @LOCAL03,Y
    case 0xC037E9: cpu.execute_instruction<0xB6>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:172 TXY
    case 0xC037EB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:173 LDX @LOCAL08
    case 0xC037EC: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:174 TXA
    case 0xC037EE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:175 ASL
    case 0xC037EF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:176 PHA
    case 0xC037F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:177 LDX @VIRTUAL02
    case 0xC037F1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:178 LDA @LOCAL03,X
    case 0xC037F3: cpu.execute_instruction<0xB5>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:179 PLX
    case 0xC037F5: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:180 STA @LOCAL03,X
    case 0xC037F6: cpu.execute_instruction<0x95>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:181 LDX @LOCAL08
    case 0xC037F8: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:182 TXA
    case 0xC037FA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:183 ASL
    case 0xC037FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:184 TAX
    case 0xC037FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:185 INX
    case 0xC037FD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:186 INX
    case 0xC037FE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:187 STY @LOCAL03,X
    case 0xC037FF: cpu.execute_instruction<0x94>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:189 LDX @LOCAL08
    case 0xC03801: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:190 INX
    case 0xC03803: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:191 STX @LOCAL08
    case 0xC03804: cpu.execute_instruction<0x86>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:193 LDA @PARTY_COUNT
    case 0xC03806: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // src/overworld/update_party-jp.asm:194 DEC
    case 0xC03808: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:195 STA @VIRTUAL02
    case 0xC03809: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:196 TXA
    case 0xC0380B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:197 CMP @VIRTUAL02
    case 0xC0380C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:198 BCC @UNKNOWN9
    case 0xC0380E: cpu.execute_instruction<0x90>(0x00008D, 2); return true;
    // src/overworld/update_party-jp.asm:199 INC @VIRTUAL04
    case 0xC03810: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/update_party-jp.asm:201 LDA @PARTY_COUNT
    case 0xC03812: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // src/overworld/update_party-jp.asm:202 DEC
    case 0xC03814: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:203 STA @VIRTUAL02
    case 0xC03815: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:204 LDA @VIRTUAL04
    case 0xC03817: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/update_party-jp.asm:205 CMP @VIRTUAL02
    case 0xC03819: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/update_party-jp.asm:206 BCCL @UNKNOWN8
    case 0xC0381B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/update_party-jp.asm:206 BCCL @UNKNOWN8
    case 0xC0381D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/update_party-jp.asm:206 BCCL @UNKNOWN8
    case 0xC0381F: cpu.execute_instruction<0x4C>(0x003796, 3); return true;
    // src/overworld/update_party-jp.asm:207 LDA #0
    case 0xC03822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/update_party-jp.asm:207 LDA #0
    // Overlapping static entry reached from 0xC03822.
    case 0xC03824: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party-jp.asm:208 STA @LOCAL06
    case 0xC03825: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:209 BRA @UNKNOWN15
    case 0xC03827: cpu.execute_instruction<0x80>(0x00005D, 2); return true;
    // src/overworld/update_party-jp.asm:211 CLC
    case 0xC03829: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:212 ADC #.LOWORD(GAME_STATE)
    case 0xC0382A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:212 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC0382A.
    case 0xC0382C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:213 TAY
    case 0xC0382D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:214 LDA @LOCAL06
    case 0xC0382E: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:215 ASL
    case 0xC03830: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:216 STA @VIRTUAL02
    case 0xC03831: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:217 LDX @VIRTUAL02
    case 0xC03833: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:218 SEP #PROC_FLAGS::ACCUM8
    case 0xC03835: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/update_party-jp.asm:219 LDA @LOCAL01,X
    case 0xC03837: cpu.execute_instruction<0xB5>(0x00001A, 2); return true;
    // src/overworld/update_party-jp.asm:220 STA a:game_state::unknown96,Y
    case 0xC03839: cpu.execute_instruction<0x99>(0x000093, 3); return true;
    // src/overworld/update_party-jp.asm:221 REP #PROC_FLAGS::ACCUM8
    case 0xC0383C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/update_party-jp.asm:222 LDA @VIRTUAL02
    case 0xC0383E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:223 CLC
    case 0xC03840: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:224 ADC #.LOWORD(GAME_STATE)
    case 0xC03841: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/update_party-jp.asm:224 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03841.
    case 0xC03843: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:225 CLC
    case 0xC03844: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:226 ADC #game_state::unknownA2
    case 0xC03845: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009F, 2); else cpu.execute_instruction<0x69>(0x00009F, 3); return true;
    // src/overworld/update_party-jp.asm:226 ADC #game_state::unknownA2
    // Overlapping static entry reached from 0xC03845.
    case 0xC03847: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/update_party-jp.asm:227 TAX
    case 0xC03848: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:228 STX @LOCAL08
    case 0xC03849: cpu.execute_instruction<0x86>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:229 LDX @VIRTUAL02
    case 0xC0384B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:230 LDA @LOCAL02,X
    case 0xC0384D: cpu.execute_instruction<0xB5>(0x000026, 2); return true;
    // src/overworld/update_party-jp.asm:231 LDX @LOCAL08
    case 0xC0384F: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:232 STA __BSS_START__,X
    case 0xC03851: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/update_party-jp.asm:233 LDX @VIRTUAL02
    case 0xC03854: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:234 SEP #PROC_FLAGS::ACCUM8
    case 0xC03856: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/update_party-jp.asm:235 LDA @LOCAL03,X
    case 0xC03858: cpu.execute_instruction<0xB5>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:236 STA a:game_state::player_controlled_party_members,Y
    case 0xC0385A: cpu.execute_instruction<0x99>(0x000099, 3); return true;
    // src/overworld/update_party-jp.asm:237 REP #PROC_FLAGS::ACCUM8
    case 0xC0385D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/update_party-jp.asm:238 LDA @LOCAL06
    case 0xC0385F: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:239 ASL
    case 0xC03861: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:240 TAX
    case 0xC03862: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:241 LDA @LOCAL03,X
    case 0xC03863: cpu.execute_instruction<0xB5>(0x000032, 2); return true;
    // src/overworld/update_party-jp.asm:242 LDY #.SIZEOF(char_struct)
    case 0xC03865: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/update_party-jp.asm:242 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03865.
    case 0xC03867: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/update_party-jp.asm:243 JSL MULT168
    case 0xC03868: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/update_party-jp.asm:244 PHA
    case 0xC0386C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:245 LDX @VIRTUAL02
    case 0xC0386D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:246 LDA @LOCAL00,X
    case 0xC0386F: cpu.execute_instruction<0xB5>(0x00000E, 2); return true;
    // src/overworld/update_party-jp.asm:247 PLX
    case 0xC03871: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:248 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03872: cpu.execute_instruction<0x9D>(0x009CBB, 3); return true;
    // src/overworld/update_party-jp.asm:249 LDX @LOCAL08
    case 0xC03875: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/overworld/update_party-jp.asm:250 LDA __BSS_START__,X
    case 0xC03877: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party-jp.asm:251 ASL
    case 0xC0387A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:252 TAX
    case 0xC0387B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:253 LDA @VIRTUAL02
    case 0xC0387C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/update_party-jp.asm:254 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0387E: cpu.execute_instruction<0x9D>(0x000F80, 3); return true;
    // src/overworld/update_party-jp.asm:255 LDA @LOCAL06
    case 0xC03881: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:256 INC
    case 0xC03883: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/update_party-jp.asm:257 STA @LOCAL06
    case 0xC03884: cpu.execute_instruction<0x85>(0x000042, 2); return true;
    // src/overworld/update_party-jp.asm:259 CMP @PARTY_COUNT
    case 0xC03886: cpu.execute_instruction<0xC5>(0x000048, 2); return true;
    // src/overworld/update_party-jp.asm:260 BCC @UNKNOWN14
    case 0xC03888: cpu.execute_instruction<0x90>(0x00009F, 2); return true;
    // src/overworld/update_party-jp.asm:261 LDA GAME_STATE +game_state::unknownA2
    case 0xC0388A: cpu.execute_instruction<0xAD>(0x009B48, 3); return true;
    // src/overworld/update_party-jp.asm:262 STA GAME_STATE+game_state::current_party_members
    case 0xC0388D: cpu.execute_instruction<0x8D>(0x009B3A, 3); return true;
    // src/overworld/update_party-jp.asm:263 JSL UNKNOWN_C032EC
    case 0xC03890: cpu.execute_instruction<0x22>(0xC034C7, 4); return true;
    // src/overworld/update_party-jp.asm:264 JSL UNKNOWN_C02C3E
    case 0xC03894: cpu.execute_instruction<0x22>(0xC02E13, 4); return true;
    // src/overworld/update_party-jp.asm:265 JSL UNKNOWN_C47F87
    case 0xC03898: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/update_party-jp.asm:266 END_C_FUNCTION
    case 0xC0389C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/update_party-jp.asm:266 END_C_FUNCTION
    case 0xC0389D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/use_item.asm (source_named).
bool execute_overworld_use_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_item.asm:3 BEGIN_C_FUNCTION
    case 0xC1AE35: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE37: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE38: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE39: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D2, 2); else cpu.execute_instruction<0x69>(0x00FFD2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AE3A.
    case 0xC1AE3C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE3D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AE3E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    case 0xC1AE3F: cpu.execute_instruction<0x86>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    // Overlapping static entry reached from 0xC1AE3C.
    case 0xC1AE40: cpu.execute_instruction<0x2C>(0x000485, 3); return true;
    // src/overworld/use_item.asm:22 STA @VIRTUAL04
    case 0xC1AE41: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:23 STA @LOCAL09
    case 0xC1AE43: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE45.
    case 0xC1AE47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE48: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE4A.
    case 0xC1AE4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AE4D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE4F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE51: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE53: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AE55: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:26 LDA #0
    case 0xC1AE57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1AE57.
    case 0xC1AE59: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:27 STA @VIRTUAL02
    case 0xC1AE5A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:28 STA @LOCAL07
    case 0xC1AE5C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_item.asm:29 LDX @LOCAL0A
    case 0xC1AE5E: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:30 LDA @VIRTUAL04
    case 0xC1AE60: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_item.asm:31 JSL GET_CHARACTER_ITEM
    case 0xC1AE62: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // src/overworld/use_item.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AE66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:33 STA @VIRTUAL01
    case 0xC1AE68: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/overworld/use_item.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1AE6A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:35 LDA @VIRTUAL01
    case 0xC1AE6C: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:36 AND #$00FF
    case 0xC1AE6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1AE6E.
    case 0xC1AE70: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:37 STA @LOCAL06
    case 0xC1AE71: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE73.
    case 0xC1AE75: cpu.execute_instruction<0x70>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE75.
    case 0xC1AE77: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE77.
    case 0xC1AE79: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AE78.
    case 0xC1AE7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AE7B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:39 LDA @LOCAL06
    case 0xC1AE7D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE7F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE81: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE82: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AE86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:41 CLC
    case 0xC1AE87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:42 ADC @VIRTUAL06
    case 0xC1AE88: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_item.asm:43 STA @VIRTUAL06
    case 0xC1AE8A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/use_item.asm:44 STA @LOCAL05
    case 0xC1AE8C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:45 LDA @VIRTUAL06+2
    case 0xC1AE8E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/use_item.asm:46 STA @LOCAL05+2
    case 0xC1AE90: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_item.asm:47 LDY #item::type
    case 0xC1AE92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/overworld/use_item.asm:47 LDY #item::type
    // Overlapping static entry reached from 0xC1AE92.
    case 0xC1AE94: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:48 LDA [@LOCAL05],Y
    case 0xC1AE95: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:49 AND #$00FF
    case 0xC1AE97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC1AE97.
    case 0xC1AE99: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_item.asm:50 TAX
    case 0xC1AE9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:51 STX @LOCAL04
    case 0xC1AE9B: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/overworld/use_item.asm:52 TXA
    case 0xC1AE9D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AE9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AE9E.
    case 0xC1AEA0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:54 BEQ @UNKNOWN1
    case 0xC1AEA1: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    case 0xC1AEA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC1AEA3.
    case 0xC1AEA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:56 BEQ @UNKNOWN2
    case 0xC1AEA6: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AEA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AEA8.
    case 0xC1AEAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:58 BEQ @UNKNOWN3
    case 0xC1AEAB: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AEAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AEAD.
    case 0xC1AEAF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AEB0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AEB2: cpu.execute_instruction<0x4C>(0x00AF47, 3); return true;
    // src/overworld/use_item.asm:61 JMP @UNKNOWN18
    case 0xC1AEB5: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:63 LDA #1
    case 0xC1AEB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:63 LDA #1
    // Overlapping static entry reached from 0xC1AEB8.
    case 0xC1AEBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:64 STA @VIRTUAL02
    case 0xC1AEBB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:65 STA @LOCAL07
    case 0xC1AEBD: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AEBF.
    case 0xC1AEC1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEC2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AEC4.
    case 0xC1AEC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AEC7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:67 LDY #item::effect
    case 0xC1AEC9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:67 LDY #item::effect
    // Overlapping static entry reached from 0xC1AEC9.
    case 0xC1AECB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:68 LDA [@LOCAL05],Y
    case 0xC1AECC: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AECE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AED4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AED8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:71 CLC
    case 0xC1AED9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:72 ADC @VIRTUAL0A
    case 0xC1AEDA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:73 STA @VIRTUAL0A
    case 0xC1AEDC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEDE.
    case 0xC1AEE0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE4: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AEE8: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEEA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEEC: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEEE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEF0: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:76 JMP @UNKNOWN18
    case 0xC1AEF2: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00277A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF5.
    case 0xC1AEF7: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEF8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF7.
    case 0xC1AEF9: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEF9.
    case 0xC1AEFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEFA.
    case 0xC1AEFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1AEFD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AEFB.
    case 0xC1AEFE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AEFF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF01: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF03: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF05: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:80 JMP @UNKNOWN18
    case 0xC1AF07: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:82 LDA #1
    case 0xC1AF0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:82 LDA #1
    // Overlapping static entry reached from 0xC1AF0A.
    case 0xC1AF0C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:83 STA @VIRTUAL02
    case 0xC1AF0D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:84 STA @LOCAL07
    case 0xC1AF0F: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF11.
    case 0xC1AF13: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF14: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF16.
    case 0xC1AF18: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF19: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:86 LDY #item::effect
    case 0xC1AF1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:86 LDY #item::effect
    // Overlapping static entry reached from 0xC1AF1B.
    case 0xC1AF1D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:87 LDA [@LOCAL05],Y
    case 0xC1AF1E: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF20: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF22: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF23: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AF26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF27: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF28: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF29: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AF2A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:90 CLC
    case 0xC1AF2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:91 ADC @VIRTUAL0A
    case 0xC1AF2C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:92 STA @VIRTUAL0A
    case 0xC1AF2E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF30.
    case 0xC1AF32: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF33: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF35: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF36: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AF3A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF3E: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF42: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:95 JMP @UNKNOWN18
    case 0xC1AF44: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:97 LDY #item::flags
    case 0xC1AF47: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/overworld/use_item.asm:97 LDY #item::flags
    // Overlapping static entry reached from 0xC1AF47.
    case 0xC1AF49: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/use_item.asm:99 LDA @LOCAL09
    case 0xC1AF4A: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_item.asm:100 STA @VIRTUAL04
    case 0xC1AF4C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:102 LDX @VIRTUAL04
    case 0xC1AF4E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/use_item.asm:103 DEX
    case 0xC1AF50: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AF51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:105 LDA f:ITEM_USABLE_FLAGS,X
    case 0xC1AF53: cpu.execute_instruction<0xBF>(0xC436A9, 4); return true;
    // src/overworld/use_item.asm:106 AND [@LOCAL05],Y
    case 0xC1AF57: cpu.execute_instruction<0x37>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC1AF59: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:108 AND #$00FF
    case 0xC1AF5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC1AF5B.
    case 0xC1AF5D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:109 BNE @CHAR_CAN_USE_ITEM
    case 0xC1AF5E: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF60: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00293A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF60.
    case 0xC1AF62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000085, 2); else cpu.execute_instruction<0x29>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF62.
    case 0xC1AF64: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF64.
    case 0xC1AF66: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF65.
    case 0xC1AF67: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1AF68: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF6A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF6C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF6E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF70: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:112 JMP @UNKNOWN18
    case 0xC1AF72: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:114 LDX @LOCAL04
    case 0xC1AF75: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/overworld/use_item.asm:115 TXA
    case 0xC1AF77: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:116 AND #$000C
    case 0xC1AF78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/use_item.asm:116 AND #$000C
    // Overlapping static entry reached from 0xC1AF78.
    case 0xC1AF7A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:117 BEQ @UNKNOWN6
    case 0xC1AF7B: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/overworld/use_item.asm:118 CMP #4
    case 0xC1AF7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/use_item.asm:118 CMP #4
    // Overlapping static entry reached from 0xC1AF7D.
    case 0xC1AF7F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:119 BEQ @UNKNOWN7
    case 0xC1AF80: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/overworld/use_item.asm:120 CMP #8
    case 0xC1AF82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_item.asm:120 CMP #8
    // Overlapping static entry reached from 0xC1AF82.
    case 0xC1AF84: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:121 BEQ @UNKNOWN8
    case 0xC1AF85: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/overworld/use_item.asm:122 JMP @UNKNOWN18
    case 0xC1AF87: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:124 LDA #1
    case 0xC1AF8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:124 LDA #1
    // Overlapping static entry reached from 0xC1AF8A.
    case 0xC1AF8C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:125 STA @VIRTUAL02
    case 0xC1AF8D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:126 STA @LOCAL07
    case 0xC1AF8F: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF91.
    case 0xC1AF93: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF94: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AF96.
    case 0xC1AF98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AF99: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:128 LDY #item::effect
    case 0xC1AF9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:128 LDY #item::effect
    // Overlapping static entry reached from 0xC1AF9B.
    case 0xC1AF9D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:129 LDA [@LOCAL05],Y
    case 0xC1AF9E: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA3: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1AFA6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFA7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFA8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFA9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1AFAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:132 CLC
    case 0xC1AFAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:133 ADC @VIRTUAL0A
    case 0xC1AFAC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:134 STA @VIRTUAL0A
    case 0xC1AFAE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB0.
    case 0xC1AFB2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB3: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1AFBA: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFBC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFBE: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFC0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFC2: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:137 JMP @UNKNOWN18
    case 0xC1AFC4: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x002747, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFC7.
    case 0xC1AFC9: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFCA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFC9.
    case 0xC1AFCB: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFCB.
    case 0xC1AFCD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFCC.
    case 0xC1AFCE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1AFCF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFCD.
    case 0xC1AFD0: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD3: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AFD7: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:141 JMP @UNKNOWN18
    case 0xC1AFD9: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:143 TXA
    case 0xC1AFDC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:144 AND #$0003
    case 0xC1AFDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/use_item.asm:144 AND #$0003
    // Overlapping static entry reached from 0xC1AFDD.
    case 0xC1AFDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:145 BEQ @UNKNOWN10
    case 0xC1AFE0: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/use_item.asm:146 CMP #1
    case 0xC1AFE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:146 CMP #1
    // Overlapping static entry reached from 0xC1AFE2.
    case 0xC1AFE4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:147 BEQ @UNKNOWN10
    case 0xC1AFE5: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/overworld/use_item.asm:148 CMP #2
    case 0xC1AFE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/use_item.asm:148 CMP #2
    // Overlapping static entry reached from 0xC1AFE7.
    case 0xC1AFE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:149 BEQ @UNKNOWN11
    case 0xC1AFEA: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/overworld/use_item.asm:150 CMP #3
    case 0xC1AFEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/use_item.asm:150 CMP #3
    // Overlapping static entry reached from 0xC1AFEC.
    case 0xC1AFEE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1AFEF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1AFF1: cpu.execute_instruction<0x4C>(0x00B0B8, 3); return true;
    // src/overworld/use_item.asm:152 JMP @UNKNOWN18
    case 0xC1AFF4: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:154 LDA #1
    case 0xC1AFF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:154 LDA #1
    // Overlapping static entry reached from 0xC1AFF7.
    case 0xC1AFF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:155 STA @VIRTUAL02
    case 0xC1AFFA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:156 STA @LOCAL07
    case 0xC1AFFC: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AFFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AFFE.
    case 0xC1B000: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B001: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B003: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B003.
    case 0xC1B005: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B006: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:158 LDY #item::effect
    case 0xC1B008: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:158 LDY #item::effect
    // Overlapping static entry reached from 0xC1B008.
    case 0xC1B00A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:159 LDA [@LOCAL05],Y
    case 0xC1B00B: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B010: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B012: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B013: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B014: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B015: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B016: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B017: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:162 CLC
    case 0xC1B018: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:163 ADC @VIRTUAL0A
    case 0xC1B019: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:164 STA @VIRTUAL0A
    case 0xC1B01B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B01D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B01D.
    case 0xC1B01F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B020: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B022: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B023: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B025: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B027: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B029: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02B: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02F: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:167 JMP @UNKNOWN18
    case 0xC1B031: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:169 JSR UNKNOWN_C1AD7D
    case 0xC1B034: cpu.execute_instruction<0x20>(0x00AC39, 3); return true;
    // src/overworld/use_item.asm:170 TAX
    case 0xC1B037: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:171 LDA @LOCAL06
    case 0xC1B038: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/overworld/use_item.asm:172 STA @VIRTUAL02
    case 0xC1B03A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:173 TXA
    case 0xC1B03C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:174 CMP @VIRTUAL02
    case 0xC1B03D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/use_item.asm:175 BNE @UNKNOWN13
    case 0xC1B03F: cpu.execute_instruction<0xD0>(0x000062, 2); return true;
    // src/overworld/use_item.asm:176 LDA @LOCAL06
    case 0xC1B041: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    case 0xC1B043: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B0, 2); else cpu.execute_instruction<0xC9>(0x0000B0, 3); return true;
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    // Overlapping static entry reached from 0xC1B043.
    case 0xC1B045: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:178 BNE @UNKNOWN12
    case 0xC1B046: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:179 JSL UNKNOWN_C03C4B
    case 0xC1B048: cpu.execute_instruction<0x22>(0xC03EB2, 4); return true;
    // src/overworld/use_item.asm:180 CMP #0
    case 0xC1B04C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:180 CMP #0
    // Overlapping static entry reached from 0xC1B04C.
    case 0xC1B04E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:181 BEQ @UNKNOWN12
    case 0xC1B04F: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B051: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x002868, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B051.
    case 0xC1B053: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B054: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B056: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B056.
    case 0xC1B058: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B059: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B05B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B05D: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B05F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B061: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:184 JMP @UNKNOWN18
    case 0xC1B063: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:186 LDA #1
    case 0xC1B066: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:186 LDA #1
    // Overlapping static entry reached from 0xC1B066.
    case 0xC1B068: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:187 STA @VIRTUAL02
    case 0xC1B069: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:188 STA @LOCAL07
    case 0xC1B06B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B06D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B06D.
    case 0xC1B06F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B070: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B072: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B072.
    case 0xC1B074: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B075: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:190 LDY #item::effect
    case 0xC1B077: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:190 LDY #item::effect
    // Overlapping static entry reached from 0xC1B077.
    case 0xC1B079: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:191 LDA [@LOCAL05],Y
    case 0xC1B07A: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B07C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B07E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B07F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B081: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B082: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B083: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B084: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B085: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B086: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:194 CLC
    case 0xC1B087: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:195 ADC @VIRTUAL0A
    case 0xC1B088: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:196 STA @VIRTUAL0A
    case 0xC1B08A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B08C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B08C.
    case 0xC1B08E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B08F: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B091: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B092: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B094: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B096: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B098: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B09A: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B09C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B09E: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:199 JMP @UNKNOWN18
    case 0xC1B0A0: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x002747, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A3.
    case 0xC1B0A5: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A5.
    case 0xC1B0A7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A7.
    case 0xC1B0A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A8.
    case 0xC1B0AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B0AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0A9.
    case 0xC1B0AC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0AF: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0B3: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:203 JMP @UNKNOWN18
    case 0xC1B0B5: cpu.execute_instruction<0x4C>(0x00B152, 3); return true;
    // src/overworld/use_item.asm:205 LDA #1
    case 0xC1B0B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:205 LDA #1
    // Overlapping static entry reached from 0xC1B0B8.
    case 0xC1B0BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:206 STA @VIRTUAL02
    case 0xC1B0BB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:207 STA @LOCAL07
    case 0xC1B0BD: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_item.asm:208 JSR UNKNOWN_C1AD42
    case 0xC1B0BF: cpu.execute_instruction<0x20>(0x00ABFE, 3); return true;
    // src/overworld/use_item.asm:209 REP #PROC_FLAGS::ACCUM8
    case 0xC1B0C2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:210 AND #$00FF
    case 0xC1B0C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC1B0C4.
    case 0xC1B0C6: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/use_item.asm:211 CMP #1
    case 0xC1B0C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:211 CMP #1
    // Overlapping static entry reached from 0xC1B0C7.
    case 0xC1B0C9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:212 BEQ @UNKNOWN15
    case 0xC1B0CA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/use_item.asm:213 CMP #3
    case 0xC1B0CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/use_item.asm:213 CMP #3
    // Overlapping static entry reached from 0xC1B0CC.
    case 0xC1B0CE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:214 BNE @UNKNOWN16
    case 0xC1B0CF: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C1, 2); else cpu.execute_instruction<0xA9>(0x0089C1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D1.
    case 0xC1B0D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D3.
    case 0xC1B0D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D6.
    case 0xC1B0D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B0D9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:217 LDA INTERACTING_NPC_ID
    case 0xC1B0DB: cpu.execute_instruction<0xAD>(0x0060E8, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0DE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B0E4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/use_item.asm:219 CLC
    case 0xC1B0E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    case 0xC1B0E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    // Overlapping static entry reached from 0xC1B0E7.
    case 0xC1B0E9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:221 CLC
    case 0xC1B0EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:222 ADC @VIRTUAL0A
    case 0xC1B0EB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:223 STA @VIRTUAL0A
    case 0xC1B0ED: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0EF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0EF.
    case 0xC1B0F1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F2: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F5: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F9: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FD: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B101: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B103: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B103.
    case 0xC1B105: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B106: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B108: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B108.
    case 0xC1B10A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B10B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B10D: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B10F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B111: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B113: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:229 CMP @VIRTUAL0A+2
    case 0xC1B115: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:230 BNE @UNKNOWN17
    case 0xC1B117: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/use_item.asm:231 LDA @VIRTUAL06
    case 0xC1B119: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/use_item.asm:232 CMP @VIRTUAL0A
    case 0xC1B11B: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:234 BNE @UNKNOWN18
    case 0xC1B11D: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B11F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B11F.
    case 0xC1B121: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B122: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B124.
    case 0xC1B126: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B127: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:236 LDY #item::effect
    case 0xC1B129: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:236 LDY #item::effect
    // Overlapping static entry reached from 0xC1B129.
    case 0xC1B12B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:237 LDA [@LOCAL05],Y
    case 0xC1B12C: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B12E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B130: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B131: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B133: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B134: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B135: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B136: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B137: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B138: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:240 CLC
    case 0xC1B139: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:241 ADC @VIRTUAL0A
    case 0xC1B13A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:242 STA @VIRTUAL0A
    case 0xC1B13C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B13E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B13E.
    case 0xC1B140: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B141: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B143: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B144: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B146: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B148: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B14A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B14C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B14E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B150: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:246 LDA @LOCAL09
    case 0xC1B152: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_item.asm:247 STA @VIRTUAL04
    case 0xC1B154: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B156: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:249 STA @VIRTUAL00
    case 0xC1B158: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/use_item.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC1B15A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:251 LDA @LOCAL07
    case 0xC1B15C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/overworld/use_item.asm:252 STA @VIRTUAL02
    case 0xC1B15E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:253 BEQ @UNKNOWN20
    case 0xC1B160: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/overworld/use_item.asm:254 LDX @VIRTUAL04
    case 0xC1B162: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/use_item.asm:255 LDY #item::effect
    case 0xC1B164: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:255 LDY #item::effect
    // Overlapping static entry reached from 0xC1B164.
    case 0xC1B166: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:256 LDA [@LOCAL05],Y
    case 0xC1B167: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:257 JSR DETERMINE_TARGETTING
    case 0xC1B169: cpu.execute_instruction<0x20>(0x00AC70, 3); return true;
    // src/overworld/use_item.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B16C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:259 STA @VIRTUAL00
    case 0xC1B16E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/use_item.asm:260 REP #PROC_FLAGS::ACCUM8
    case 0xC1B170: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:261 LDA @VIRTUAL00
    case 0xC1B172: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:262 AND #$00FF
    case 0xC1B174: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC1B174.
    case 0xC1B176: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:263 BNE @UNKNOWN19
    case 0xC1B177: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/use_item.asm:264 LDA #0
    case 0xC1B179: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:264 LDA #0
    // Overlapping static entry reached from 0xC1B179.
    case 0xC1B17B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/use_item.asm:265 JMP @UNKNOWN43
    case 0xC1B17C: cpu.execute_instruction<0x4C>(0x00B47B, 3); return true;
    // src/overworld/use_item.asm:267 LDY #item::flags
    case 0xC1B17F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/overworld/use_item.asm:267 LDY #item::flags
    // Overlapping static entry reached from 0xC1B17F.
    case 0xC1B181: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:268 LDA [@LOCAL05],Y
    case 0xC1B182: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:269 AND #$00FF
    case 0xC1B184: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:269 AND #$00FF
    // Overlapping static entry reached from 0xC1B184.
    case 0xC1B186: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    case 0xC1B187: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    // Overlapping static entry reached from 0xC1B187.
    case 0xC1B189: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:271 BEQ @UNKNOWN20
    case 0xC1B18A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/use_item.asm:272 LDX @LOCAL0A
    case 0xC1B18C: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:273 LDA @VIRTUAL04
    case 0xC1B18E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_item.asm:274 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC1B190: cpu.execute_instruction<0x20>(0x008CCE, 3); return true;
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    case 0xC1B193: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC1B193.
    case 0xC1B195: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/use_item.asm:277 JSR CLOSE_WINDOW
    case 0xC1B196: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    case 0xC1B199: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC1B199.
    case 0xC1B19B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/use_item.asm:279 JSR CLOSE_WINDOW
    case 0xC1B19C: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    case 0xC1B19F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B19F.
    case 0xC1B1A1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/use_item.asm:281 LDA @VIRTUAL04
    case 0xC1B1A2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_item.asm:282 DEC
    case 0xC1B1A4: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    case 0xC1B1A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B1A5.
    case 0xC1B1A7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:284 JSL MULT168
    case 0xC1B1A8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/use_item.asm:285 CLC
    case 0xC1B1AC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B1AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B1AD.
    case 0xC1B1AF: cpu.execute_instruction<0x9C>(0x001220, 3); return true;
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    case 0xC1B1B0: cpu.execute_instruction<0x20>(0x00AB12, 3); return true;
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1B1AF.
    case 0xC1B1B2: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/overworld/use_item.asm:288 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B1B3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:289 LDA @VIRTUAL01
    case 0xC1B1B5: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:290 JSR UNKNOWN_C1ACF8
    case 0xC1B1B7: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B1BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B1BA.
    case 0xC1B1BC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B1BD: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:294 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC1B1C0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:294 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC1B1C2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:294 MOVE_INT1632 @VIRTUAL04, @VIRTUAL0A
    case 0xC1B1C4: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1C6: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1CA: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:295 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:300 JSR SET_WORKING_MEMORY
    case 0xC1B1CE: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:302 MOVE_INT1632 @LOCAL0A, @VIRTUAL0A
    case 0xC1B1D1: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:302 MOVE_INT1632 @LOCAL0A, @VIRTUAL0A
    case 0xC1B1D3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:302 MOVE_INT1632 @LOCAL0A, @VIRTUAL0A
    case 0xC1B1D5: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1D7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1D9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1DB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:303 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1B1DD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:308 JSR SET_ARGUMENT_MEMORY
    case 0xC1B1DF: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/overworld/use_item.asm:309 LDA @VIRTUAL00
    case 0xC1B1E2: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:310 AND #$00FF
    case 0xC1B1E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:310 AND #$00FF
    // Overlapping static entry reached from 0xC1B1E4.
    case 0xC1B1E6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_item.asm:311 TAY
    case 0xC1B1E7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_item.asm:312 CPY #>-1
    case 0xC1B1E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:312 CPY #>-1
    // Overlapping static entry reached from 0xC1B1E8.
    case 0xC1B1EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:313 BEQ @UNKNOWN21
    case 0xC1B1EB: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    case 0xC1B1ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B1ED.
    case 0xC1B1EF: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/use_item.asm:315 TYA
    case 0xC1B1F0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:316 DEC
    case 0xC1B1F1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    case 0xC1B1F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B1F2.
    case 0xC1B1F4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:318 JSL MULT168
    case 0xC1B1F5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/use_item.asm:320 CLC
    case 0xC1B1F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B1FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B1FA.
    case 0xC1B1FC: cpu.execute_instruction<0x9C>(0x006320, 3); return true;
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    case 0xC1B1FD: cpu.execute_instruction<0x20>(0x00AB63, 3); return true;
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1B1FC.
    case 0xC1B1FF: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B200: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B200.
    case 0xC1B202: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B203: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B205: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B205.
    case 0xC1B207: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B208: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B20A: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B20C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B20E: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B210: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:326 CMP @VIRTUAL0A+2
    case 0xC1B212: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:327 BNE @UNKNOWN22
    case 0xC1B214: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/use_item.asm:328 LDA @VIRTUAL06
    case 0xC1B216: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/use_item.asm:329 CMP @VIRTUAL0A
    case 0xC1B218: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:331 BNE @UNKNOWN23
    case 0xC1B21A: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B21C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x002712, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B21C.
    case 0xC1B21E: cpu.execute_instruction<0x27>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B21F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B21E.
    case 0xC1B220: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B221: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C9, 2); else cpu.execute_instruction<0xA9>(0x0000C9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B220.
    case 0xC1B222: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008500, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B221.
    case 0xC1B223: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B224: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B222.
    case 0xC1B225: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B226: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B228: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B22A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B22C: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:335 LDA @VIRTUAL02
    case 0xC1B22E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B230: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B232: cpu.execute_instruction<0x4C>(0x00B45E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B235: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B235.
    case 0xC1B237: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B238: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B23A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B23A.
    case 0xC1B23C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B23D: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B23F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B241: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B243: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B245: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:339 LDA #item::effect
    case 0xC1B247: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:339 LDA #item::effect
    // Overlapping static entry reached from 0xC1B247.
    case 0xC1B249: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:340 CLC
    case 0xC1B24A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:341 ADC @VIRTUAL0A
    case 0xC1B24B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:342 STA @VIRTUAL0A
    case 0xC1B24D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:343 STA @LOCAL02
    case 0xC1B24F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/use_item.asm:344 LDA @VIRTUAL0A+2
    case 0xC1B251: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:345 STA @LOCAL02+2
    case 0xC1B253: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B255: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B257: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B259: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B25B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:347 LDA [@VIRTUAL0A]
    case 0xC1B25D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B25F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B261: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B262: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B264: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B265: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:349 CLC
    case 0xC1B266: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    case 0xC1B267: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B267.
    case 0xC1B269: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:351 CLC
    case 0xC1B26A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:352 ADC @VIRTUAL06
    case 0xC1B26B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_item.asm:353 STA @VIRTUAL06
    case 0xC1B26D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B26F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B26F.
    case 0xC1B271: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B272: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B274: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B275: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B277: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B279: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B27B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B27B.
    case 0xC1B27D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B27E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B280: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B280.
    case 0xC1B282: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B283: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B285: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B287: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B289: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B28B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B28D: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B28F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B291: cpu.execute_instruction<0x4C>(0x00B45E, 3); return true;
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC1B294: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1B294.
    case 0xC1B296: cpu.execute_instruction<0xA1>(0x00008D, 2); return true;
    // src/overworld/use_item.asm:359 STA CURRENT_ATTACKER
    case 0xC1B297: cpu.execute_instruction<0x8D>(0x00AB72, 3); return true;
    // src/overworld/use_item.asm:359 STA CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC1B296.
    case 0xC1B298: cpu.execute_instruction<0x72>(0x0000AB, 2); return true;
    // src/overworld/use_item.asm:360 TAX
    case 0xC1B29A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:361 LDA @LOCAL09
    case 0xC1B29B: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_item.asm:362 STA @VIRTUAL04
    case 0xC1B29D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:363 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B29F: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // src/overworld/use_item.asm:364 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:365 LDA @VIRTUAL01
    case 0xC1B2A5: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:366 LDX CURRENT_ATTACKER
    case 0xC1B2A7: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/overworld/use_item.asm:367 STA __BSS_START__ + battler::current_action_argument,X
    case 0xC1B2AA: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/overworld/use_item.asm:368 REP #PROC_FLAGS::ACCUM8
    case 0xC1B2AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:369 LDA @LOCAL0A
    case 0xC1B2AF: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:370 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2B1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:371 LDX CURRENT_ATTACKER
    case 0xC1B2B3: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/overworld/use_item.asm:372 STA __BSS_START__ + battler::action_item_slot,X
    case 0xC1B2B6: cpu.execute_instruction<0x9D>(0x000007, 3); return true;
    // src/overworld/use_item.asm:373 REP #PROC_FLAGS::ACCUM8
    case 0xC1B2B9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2BB: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2BF: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B2C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B2C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:376 JSL DISPLAY_TEXT
    case 0xC1B2CB: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/use_item.asm:377 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2CF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:378 LDA @VIRTUAL01
    case 0xC1B2D1: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:379 JSR UNKNOWN_C1ACF8
    case 0xC1B2D3: cpu.execute_instruction<0x20>(0x00ABB4, 3); return true;
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    case 0xC1B2D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FC, 2); else cpu.execute_instruction<0xA2>(0x00A1FC, 3); return true;
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    // Overlapping static entry reached from 0xC1B2D6.
    case 0xC1B2D8: cpu.execute_instruction<0xA1>(0x00008E, 2); return true;
    // src/overworld/use_item.asm:382 STX CURRENT_TARGET
    case 0xC1B2D9: cpu.execute_instruction<0x8E>(0x00AB74, 3); return true;
    // src/overworld/use_item.asm:382 STX CURRENT_TARGET
    // Overlapping static entry reached from 0xC1B2D8.
    case 0xC1B2DA: cpu.execute_instruction<0x74>(0x0000AB, 2); return true;
    // src/overworld/use_item.asm:383 LDA @VIRTUAL00
    case 0xC1B2DC: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:384 AND #$00FF
    case 0xC1B2DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC1B2DE.
    case 0xC1B2E0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_item.asm:385 TAY
    case 0xC1B2E1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_item.asm:386 CPY #>-1
    case 0xC1B2E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:386 CPY #>-1
    // Overlapping static entry reached from 0xC1B2E2.
    case 0xC1B2E4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B2E5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B2E7: cpu.execute_instruction<0x4C>(0x00B3CC, 3); return true;
    // src/overworld/use_item.asm:388 LDY #0
    case 0xC1B2EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/use_item.asm:388 LDY #0
    // Overlapping static entry reached from 0xC1B2EA.
    case 0xC1B2EC: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/use_item.asm:389 STY @LOCAL06
    case 0xC1B2ED: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/overworld/use_item.asm:390 JMP @UNKNOWN33
    case 0xC1B2EF: cpu.execute_instruction<0x4C>(0x00B3B2, 3); return true;
    // src/overworld/use_item.asm:392 TYA
    case 0xC1B2F2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:393 CLC
    case 0xC1B2F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:395 ADC #.LOWORD(GAME_STATE)
    case 0xC1B2F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/overworld/use_item.asm:395 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1B2F4.
    case 0xC1B2F6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:396 CLC
    case 0xC1B2F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:397 ADC #game_state::party_members
    case 0xC1B2F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/overworld/use_item.asm:397 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC1B2F8.
    case 0xC1B2FA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:401 STA @VIRTUAL02
    case 0xC1B2FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    case 0xC1B2FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B2FD.
    case 0xC1B2FF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/use_item.asm:403 STX @LOCAL01
    case 0xC1B300: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/use_item.asm:404 LDX @VIRTUAL02
    case 0xC1B302: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/use_item.asm:405 LDA __BSS_START__,X
    case 0xC1B304: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_item.asm:406 AND #$00FF
    case 0xC1B307: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:406 AND #$00FF
    // Overlapping static entry reached from 0xC1B307.
    case 0xC1B309: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/use_item.asm:407 DEC
    case 0xC1B30A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    case 0xC1B30B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B30B.
    case 0xC1B30D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:409 JSL MULT168
    case 0xC1B30E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/use_item.asm:411 CLC
    case 0xC1B312: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B313: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B313.
    case 0xC1B315: cpu.execute_instruction<0x9C>(0x0012A6, 3); return true;
    // src/overworld/use_item.asm:413 LDX @LOCAL01
    case 0xC1B316: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/use_item.asm:414 JSR UNKNOWN_C1ACA1
    case 0xC1B318: cpu.execute_instruction<0x20>(0x00AB63, 3); return true;
    // src/overworld/use_item.asm:415 LDX CURRENT_TARGET
    case 0xC1B31B: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/overworld/use_item.asm:416 STX @LOCAL01
    case 0xC1B31E: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/use_item.asm:417 LDX @VIRTUAL02
    case 0xC1B320: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/use_item.asm:418 LDA __BSS_START__,X
    case 0xC1B322: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_item.asm:419 AND #$00FF
    case 0xC1B325: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:419 AND #$00FF
    // Overlapping static entry reached from 0xC1B325.
    case 0xC1B327: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/use_item.asm:420 LDX @LOCAL01
    case 0xC1B328: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/use_item.asm:421 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B32A: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B32E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B32E.
    case 0xC1B330: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B331: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B333: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B333.
    case 0xC1B335: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B336: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:423 LDY #item::effect
    case 0xC1B338: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/overworld/use_item.asm:423 LDY #item::effect
    // Overlapping static entry reached from 0xC1B338.
    case 0xC1B33A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:424 LDA [@LOCAL05],Y
    case 0xC1B33B: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B33D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B33F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B340: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B342: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B343: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:426 CLC
    case 0xC1B344: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:427 ADC #8
    case 0xC1B345: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_item.asm:427 ADC #8
    // Overlapping static entry reached from 0xC1B345.
    case 0xC1B347: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:428 CLC
    case 0xC1B348: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:429 ADC @VIRTUAL0A
    case 0xC1B349: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:430 STA @VIRTUAL0A
    case 0xC1B34B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B34D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B34D.
    case 0xC1B34F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B350: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B352: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B353: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B355: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B357: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/use_item.asm:432 PHA
    case 0xC1B359: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B35A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B35C: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B35F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B361: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/overworld/use_item.asm:434 PLA
    case 0xC1B364: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:435 JSL UNKNOWN_C09279
    case 0xC1B365: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/overworld/use_item.asm:436 LDA #0
    case 0xC1B369: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:436 LDA #0
    // Overlapping static entry reached from 0xC1B369.
    case 0xC1B36B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:437 STA @LOCAL0A
    case 0xC1B36C: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:438 BRA @UNKNOWN30
    case 0xC1B36E: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/overworld/use_item.asm:440 LDA @LOCAL0A
    case 0xC1B370: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:441 STA @VIRTUAL02
    case 0xC1B372: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:442 LDY @LOCAL06
    case 0xC1B374: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/overworld/use_item.asm:443 TYA
    case 0xC1B376: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    case 0xC1B377: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B377.
    case 0xC1B379: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:445 JSL MULT168
    case 0xC1B37A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/use_item.asm:446 CLC
    case 0xC1B37E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC1B37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC1B37F.
    case 0xC1B381: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/overworld/use_item.asm:448 CLC
    case 0xC1B382: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    case 0xC1B383: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B381.
    case 0xC1B384: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/overworld/use_item.asm:450 PHA
    case 0xC1B385: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/use_item.asm:451 LDA @LOCAL0A
    case 0xC1B386: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:452 CLC
    case 0xC1B388: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:453 ADC CURRENT_TARGET
    case 0xC1B389: cpu.execute_instruction<0x6D>(0x00AB74, 3); return true;
    // src/overworld/use_item.asm:454 TAX
    case 0xC1B38C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:455 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B38D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:456 LDA __BSS_START__ + battler::afflictions,X
    case 0xC1B38F: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:457 PLX
    case 0xC1B392: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:458 STA __BSS_START__,X
    case 0xC1B393: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_item.asm:459 REP #PROC_FLAGS::ACCUM8
    case 0xC1B396: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:460 LDA @LOCAL0A
    case 0xC1B398: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:461 INC
    case 0xC1B39A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:462 STA @LOCAL0A
    case 0xC1B39B: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:464 STA @VIRTUAL02
    case 0xC1B39D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:465 LDA #7
    case 0xC1B39F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/overworld/use_item.asm:465 LDA #7
    // Overlapping static entry reached from 0xC1B39F.
    case 0xC1B3A1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:466 CLC
    case 0xC1B3A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:467 SBC @VIRTUAL02
    case 0xC1B3A3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3A5: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3A7: cpu.execute_instruction<0x10>(0x0000C7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3A9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B3AB: cpu.execute_instruction<0x30>(0x0000C3, 2); return true;
    // src/overworld/use_item.asm:469 LDY @LOCAL06
    case 0xC1B3AD: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/overworld/use_item.asm:470 INY
    case 0xC1B3AF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_item.asm:471 STY @LOCAL06
    case 0xC1B3B0: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/overworld/use_item.asm:473 STY @VIRTUAL02
    case 0xC1B3B2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/use_item.asm:474 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1B3B4: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/overworld/use_item.asm:475 AND #$00FF
    case 0xC1B3B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:475 AND #$00FF
    // Overlapping static entry reached from 0xC1B3B7.
    case 0xC1B3B9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:476 CLC
    case 0xC1B3BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:477 SBC @VIRTUAL02
    case 0xC1B3BB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3BD: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3BF: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3C1: cpu.execute_instruction<0x4C>(0x00B2F2, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3C4: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B3C6: cpu.execute_instruction<0x4C>(0x00B2F2, 3); return true;
    // src/overworld/use_item.asm:479 JMP @UNKNOWN40
    case 0xC1B3C9: cpu.execute_instruction<0x4C>(0x00B458, 3); return true;
    // src/overworld/use_item.asm:481 TYA
    case 0xC1B3CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:482 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B3CD: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D5: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B3D7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:484 LDA [@VIRTUAL0A]
    case 0xC1B3D9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3DB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3DE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:486 CLC
    case 0xC1B3E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    case 0xC1B3E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B3E3.
    case 0xC1B3E5: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/overworld/use_item.asm:488 PHA
    case 0xC1B3E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3E7: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3E9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3EB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B3ED: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:490 PLA
    case 0xC1B3EF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:491 CLC
    case 0xC1B3F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:492 ADC @VIRTUAL0A
    case 0xC1B3F1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:493 STA @VIRTUAL0A
    case 0xC1B3F3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B3F5.
    case 0xC1B3F7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3F8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B3FF: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/use_item.asm:495 PHA
    case 0xC1B401: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B402: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B404: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B407: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B409: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/overworld/use_item.asm:497 PLA
    case 0xC1B40C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:498 JSL UNKNOWN_C09279
    case 0xC1B40D: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/overworld/use_item.asm:499 LDA #0
    case 0xC1B411: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:499 LDA #0
    // Overlapping static entry reached from 0xC1B411.
    case 0xC1B413: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:500 STA @LOCAL0A
    case 0xC1B414: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:501 BRA @UNKNOWN38
    case 0xC1B416: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/overworld/use_item.asm:503 LDA @LOCAL0A
    case 0xC1B418: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:504 STA @VIRTUAL02
    case 0xC1B41A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:505 LDA @VIRTUAL00
    case 0xC1B41C: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:506 AND #$00FF
    case 0xC1B41E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:506 AND #$00FF
    // Overlapping static entry reached from 0xC1B41E.
    case 0xC1B420: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/use_item.asm:507 DEC
    case 0xC1B421: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    case 0xC1B422: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B422.
    case 0xC1B424: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:509 JSL MULT168
    case 0xC1B425: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/overworld/use_item.asm:510 CLC
    case 0xC1B429: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1B42A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x009C8C, 3); return true;
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1B42A.
    case 0xC1B42C: cpu.execute_instruction<0x9C>(0x006518, 3); return true;
    // src/overworld/use_item.asm:512 CLC
    case 0xC1B42D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    case 0xC1B42E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B42C.
    case 0xC1B42F: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/overworld/use_item.asm:514 PHA
    case 0xC1B430: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/use_item.asm:515 LDA @LOCAL0A
    case 0xC1B431: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:516 CLC
    case 0xC1B433: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:517 ADC CURRENT_TARGET
    case 0xC1B434: cpu.execute_instruction<0x6D>(0x00AB74, 3); return true;
    // src/overworld/use_item.asm:518 TAX
    case 0xC1B437: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:519 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B438: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:520 LDA __BSS_START__+battler::afflictions,X
    case 0xC1B43A: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:521 PLX
    case 0xC1B43D: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:522 STA __BSS_START__,X
    case 0xC1B43E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_item.asm:523 REP #PROC_FLAGS::ACCUM8
    case 0xC1B441: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:524 LDA @LOCAL0A
    case 0xC1B443: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:525 INC
    case 0xC1B445: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:526 STA @LOCAL0A
    case 0xC1B446: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:528 STA @VIRTUAL02
    case 0xC1B448: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:529 LDA #7
    case 0xC1B44A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/overworld/use_item.asm:529 LDA #7
    // Overlapping static entry reached from 0xC1B44A.
    case 0xC1B44C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:530 CLC
    case 0xC1B44D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:531 SBC @VIRTUAL02
    case 0xC1B44E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B450: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B452: cpu.execute_instruction<0x10>(0x0000C4, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B454: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B456: cpu.execute_instruction<0x30>(0x0000C0, 2); return true;
    // src/overworld/use_item.asm:534 JSL UNKNOWN_C3EE4D
    case 0xC1B458: cpu.execute_instruction<0x22>(0xC3EA14, 4); return true;
    // src/overworld/use_item.asm:535 BRA @UNKNOWN42
    case 0xC1B45C: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B45E: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B460: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B462: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B464: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B466: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B468: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B46A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B46C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:539 JSL DISPLAY_TEXT
    case 0xC1B46E: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    case 0xC1B472: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B472.
    case 0xC1B474: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/use_item.asm:542 JSR CLOSE_WINDOW
    case 0xC1B475: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/overworld/use_item.asm:543 LDA #TRUE
    case 0xC1B478: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:543 LDA #TRUE
    // Overlapping static entry reached from 0xC1B478.
    case 0xC1B47A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B47B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B47C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/use_sound_stone.asm (source_named).
bool execute_overworld_use_sound_stone_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_sound_stone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC48137: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC48139: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x00FFCA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC4813C.
    case 0xC4813E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4813F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC48140: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    case 0xC48141: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    // Overlapping static entry reached from 0xC4813E.
    case 0xC48142: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    case 0xC48143: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC48142.
    case 0xC48144: cpu.execute_instruction<0x1F>(0x22C087, 4); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    case 0xC48147: cpu.execute_instruction<0x22>(0xC0ABA5, 4); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC48144.
    case 0xC48148: cpu.execute_instruction<0xA5>(0x0000AB, 2); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC48148.
    case 0xC4814A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x008222, 3); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC4814B: cpu.execute_instruction<0x22>(0xC2C882, 4); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4814A.
    case 0xC4814C: cpu.execute_instruction<0x82>(0x00C2C8, 3); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4814A.
    case 0xC4814D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4814D.
    case 0xC4814E: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4814F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4814E.
    case 0xC48150: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4814F.
    case 0xC48151: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48152: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48154: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC48154.
    case 0xC48156: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC48157: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC48159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00DD5D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC48159.
    case 0xC4815B: cpu.execute_instruction<0xDD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4815C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4815E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4815E.
    case 0xC48160: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC48161: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48163: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48165: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48167: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC48169: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/use_sound_stone.asm:32 JSL DECOMP
    case 0xC4816B: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4816F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48171: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48173: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48175: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48177: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC48177.
    case 0xC48179: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4817A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002C00, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4817A.
    case 0xC4817C: cpu.execute_instruction<0x2C>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4817D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4817F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC48181: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4817F.
    case 0xC48182: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC48182.
    case 0xC48184: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x000AA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC48185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00F80A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC48184.
    case 0xC48186: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC48185.
    case 0xC48187: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC48188: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4818A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4818A.
    case 0xC4818C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4818D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    case 0xC4818F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4818F.
    case 0xC48191: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC48192: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC48192.
    case 0xC48194: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    case 0xC48195: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC48194.
    case 0xC48196: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC48196.
    case 0xC48198: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001A22, 3); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    case 0xC48199: cpu.execute_instruction<0x22>(0xC45C1A, 4); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC48198.
    case 0xC4819A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC48198.
    case 0xC4819B: cpu.execute_instruction<0x5C>(0x04A0C4, 4); return true;
    // src/overworld/use_sound_stone.asm:40 LDY #4
    case 0xC4819D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/use_sound_stone.asm:40 LDY #4
    // Overlapping static entry reached from 0xC4819D.
    case 0xC4819F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    case 0xC481A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E5, 2); else cpu.execute_instruction<0xA2>(0x0000E5, 3); return true;
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    // Overlapping static entry reached from 0xC481A0.
    case 0xC481A2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    case 0xC481A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0000E4, 3); return true;
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    // Overlapping static entry reached from 0xC481A3.
    case 0xC481A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:43 JSL LOAD_BATTLE_BG
    case 0xC481A6: cpu.execute_instruction<0x22>(0xC2D0D5, 4); return true;
    // src/overworld/use_sound_stone.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC481AA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    case 0xC481AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    case 0xC481AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC481AC.
    case 0xC481AF: cpu.execute_instruction<0x0E>(0x0005A2, 3); return true;
    // src/overworld/use_sound_stone.asm:46 LDX #5
    case 0xC481B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_sound_stone.asm:46 LDX #5
    // Overlapping static entry reached from 0xC481B0.
    case 0xC481B2: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC481B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC481B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x00B5C3, 3); return true;
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC481B5.
    case 0xC481B7: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    case 0xC481B8: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    // Overlapping static entry reached from 0xC481B7.
    case 0xC481B9: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/overworld/use_sound_stone.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC481BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    case 0xC481BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    case 0xC481C0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC481BE.
    case 0xC481C1: cpu.execute_instruction<0x0E>(0x0005A2, 3); return true;
    // src/overworld/use_sound_stone.asm:52 LDX #5
    case 0xC481C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_sound_stone.asm:52 LDX #5
    // Overlapping static entry reached from 0xC481C2.
    case 0xC481C4: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC481C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC481C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x00B5C8, 3); return true;
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC481C7.
    case 0xC481C9: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    case 0xC481CA: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    // Overlapping static entry reached from 0xC481C9.
    case 0xC481CB: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/overworld/use_sound_stone.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC481CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:57 LDA #240
    case 0xC481D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x008DF0, 3); return true;
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    case 0xC481D2: cpu.execute_instruction<0x8D>(0x00B5C6, 3); return true;
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    // Overlapping static entry reached from 0xC481D0.
    case 0xC481D3: cpu.execute_instruction<0xC6>(0x0000B5, 2); return true;
    // src/overworld/use_sound_stone.asm:59 STA SOUND_STONE_SPRITEMAP_1 + spritemap::y_offset
    case 0xC481D5: cpu.execute_instruction<0x8D>(0x00B5C3, 3); return true;
    // src/overworld/use_sound_stone.asm:60 LDA #248
    case 0xC481D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x008DF8, 3); return true;
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    case 0xC481DA: cpu.execute_instruction<0x8D>(0x00B5CB, 3); return true;
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    // Overlapping static entry reached from 0xC481D8.
    case 0xC481DB: cpu.execute_instruction<0xCB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    // Overlapping static entry reached from 0xC481DB.
    case 0xC481DC: cpu.execute_instruction<0xB5>(0x00008D, 2); return true;
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    case 0xC481DD: cpu.execute_instruction<0x8D>(0x00B5C8, 3); return true;
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    // Overlapping static entry reached from 0xC481DC.
    case 0xC481DE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    // Overlapping static entry reached from 0xC481DE.
    case 0xC481DF: cpu.execute_instruction<0xB5>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:63 LDA #$81
    case 0xC481E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x008D81, 3); return true;
    // src/overworld/use_sound_stone.asm:63 LDA #$81
    // Overlapping static entry reached from 0xC481DF.
    case 0xC481E1: cpu.execute_instruction<0x81>(0x00008D, 2); return true;
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    case 0xC481E2: cpu.execute_instruction<0x8D>(0x00B5C7, 3); return true;
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    // Overlapping static entry reached from 0xC481E0.
    case 0xC481E3: cpu.execute_instruction<0xC7>(0x0000B5, 2); return true;
    // src/overworld/use_sound_stone.asm:65 LDA #$80
    case 0xC481E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    case 0xC481E7: cpu.execute_instruction<0x8D>(0x00B5CC, 3); return true;
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    // Overlapping static entry reached from 0xC481E5.
    case 0xC481E8: cpu.execute_instruction<0xCC>(0x00C2B5, 3); return true;
    // src/overworld/use_sound_stone.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC481EA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:67 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC481E8.
    case 0xC481EB: cpu.execute_instruction<0x20>(0x003264, 3); return true;
    // src/overworld/use_sound_stone.asm:68 STZ @LOCAL10
    case 0xC481EC: cpu.execute_instruction<0x64>(0x000032, 2); return true;
    // src/overworld/use_sound_stone.asm:69 LDY #0
    case 0xC481EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:69 LDY #0
    // Overlapping static entry reached from 0xC481EE.
    case 0xC481F0: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/use_sound_stone.asm:70 STY @LOCAL0F
    case 0xC481F1: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:71 BRA @UNKNOWN3
    case 0xC481F3: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/overworld/use_sound_stone.asm:73 TYX
    case 0xC481F5: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:74 LDA f:SOUND_STONE_MELODY_FLAGS,X
    case 0xC481F6: cpu.execute_instruction<0xBF>(0xC4812F, 4); return true;
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    case 0xC481FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC481FA.
    case 0xC481FC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:76 JSL GET_EVENT_FLAG
    case 0xC481FD: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/overworld/use_sound_stone.asm:77 CMP #0
    case 0xC48201: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:77 CMP #0
    // Overlapping static entry reached from 0xC48201.
    case 0xC48203: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_sound_stone.asm:78 BEQ @UNKNOWN1
    case 0xC48204: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/overworld/use_sound_stone.asm:79 LDY @LOCAL0F
    case 0xC48206: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:80 TYA
    case 0xC48208: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48209: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4820F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48211: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:82 TAX
    case 0xC48212: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:83 LDA #1
    case 0xC48213: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:83 LDA #1
    // Overlapping static entry reached from 0xC48213.
    case 0xC48215: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:84 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC48216: cpu.execute_instruction<0x9D>(0x00B553, 3); return true;
    // src/overworld/use_sound_stone.asm:85 INC @LOCAL10
    case 0xC48219: cpu.execute_instruction<0xE6>(0x000032, 2); return true;
    // src/overworld/use_sound_stone.asm:86 BRA @UNKNOWN2
    case 0xC4821B: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/use_sound_stone.asm:88 LDY @LOCAL0F
    case 0xC4821D: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:89 TYA
    case 0xC4821F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48220: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48222: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48223: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48225: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48226: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48228: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:91 TAX
    case 0xC48229: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:92 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4822A: cpu.execute_instruction<0x9E>(0x00B553, 3); return true;
    // src/overworld/use_sound_stone.asm:94 TYA
    case 0xC4822D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4822E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48230: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48231: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48233: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48234: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48236: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:96 TAX
    case 0xC48237: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:97 LDA #1
    case 0xC48238: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:97 LDA #1
    // Overlapping static entry reached from 0xC48238.
    case 0xC4823A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:98 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown2,X
    case 0xC4823B: cpu.execute_instruction<0x9D>(0x00B555, 3); return true;
    // src/overworld/use_sound_stone.asm:99 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_frame,X
    case 0xC4823E: cpu.execute_instruction<0x9E>(0x00B559, 3); return true;
    // src/overworld/use_sound_stone.asm:100 INY
    case 0xC48241: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:101 STY @LOCAL0F
    case 0xC48242: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:103 CPY #8
    case 0xC48244: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:103 CPY #8
    // Overlapping static entry reached from 0xC48244.
    case 0xC48246: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/use_sound_stone.asm:104 BCC @UNKNOWN0
    case 0xC48247: cpu.execute_instruction<0x90>(0x0000AC, 2); return true;
    // src/overworld/use_sound_stone.asm:105 JSL UNKNOWN_C08744
    case 0xC48249: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/overworld/use_sound_stone.asm:106 LDX #1
    case 0xC4824D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:106 LDX #1
    // Overlapping static entry reached from 0xC4824D.
    case 0xC4824F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/use_sound_stone.asm:107 TXA
    case 0xC48250: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:108 JSL FADE_IN
    case 0xC48251: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/overworld/use_sound_stone.asm:109 LDA #15
    case 0xC48255: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/overworld/use_sound_stone.asm:109 LDA #15
    // Overlapping static entry reached from 0xC48255.
    case 0xC48257: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:110 STA @LOCAL0E
    case 0xC48258: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:111 STZ @LOCAL0F
    case 0xC4825A: cpu.execute_instruction<0x64>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:112 LDA #60
    case 0xC4825C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/overworld/use_sound_stone.asm:112 LDA #60
    // Overlapping static entry reached from 0xC4825C.
    case 0xC4825E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:113 STA @LOCAL0D
    case 0xC4825F: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:114 STZ @LOCAL0C
    case 0xC48261: cpu.execute_instruction<0x64>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:115 STZ @LOCAL0B
    case 0xC48263: cpu.execute_instruction<0x64>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:116 LDA #0
    case 0xC48265: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:116 LDA #0
    // Overlapping static entry reached from 0xC48265.
    case 0xC48267: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:117 STA @VIRTUAL04
    case 0xC48268: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:118 STA @LOCAL0A
    case 0xC4826A: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:119 STA @VIRTUAL02
    case 0xC4826C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:120 STA @LOCAL09
    case 0xC4826E: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:122 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC48270: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/use_sound_stone.asm:123 LDA PAD_PRESS
    case 0xC48274: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/use_sound_stone.asm:124 STA @LOCAL08
    case 0xC48277: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:125 LDA @LOCAL0A
    case 0xC48279: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:126 STA @VIRTUAL04
    case 0xC4827B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:127 BNE @UNKNOWN5
    case 0xC4827D: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:128 DEC @LOCAL0D
    case 0xC4827F: cpu.execute_instruction<0xC6>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:129 LDA @LOCAL0D
    case 0xC48281: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:130 BNE @UNKNOWN5
    case 0xC48283: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    case 0xC48285: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC48285.
    case 0xC48287: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/overworld/use_sound_stone.asm:132 STA @VIRTUAL02
    case 0xC48288: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    case 0xC4828A: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    // Overlapping static entry reached from 0xC48287.
    case 0xC4828B: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    case 0xC4828C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4828B.
    case 0xC4828D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:135 STA @LOCAL0B
    case 0xC4828E: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:136 LDA #1
    case 0xC48290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:136 LDA #1
    // Overlapping static entry reached from 0xC48290.
    case 0xC48292: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:137 STA @VIRTUAL04
    case 0xC48293: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:138 STA @LOCAL0A
    case 0xC48295: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:140 LDA @LOCAL0C
    case 0xC48297: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:141 BEQ @UNKNOWN7
    case 0xC48299: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/use_sound_stone.asm:142 DEC @LOCAL0C
    case 0xC4829B: cpu.execute_instruction<0xC6>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:143 LDA @LOCAL0C
    case 0xC4829D: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC4829F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC482A1: cpu.execute_instruction<0x4C>(0x0085F6, 3); return true;
    // src/overworld/use_sound_stone.asm:145 JMP @UNKNOWN19
    case 0xC482A4: cpu.execute_instruction<0x4C>(0x008392, 3); return true;
    // src/overworld/use_sound_stone.asm:147 LDA @VIRTUAL04
    case 0xC482A7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC482A9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC482AB: cpu.execute_instruction<0x4C>(0x008392, 3); return true;
    // src/overworld/use_sound_stone.asm:149 LDA @VIRTUAL04
    case 0xC482AE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:150 DEC
    case 0xC482B0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:151 STA @VIRTUAL04
    case 0xC482B1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:152 STA @LOCAL0A
    case 0xC482B3: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:153 LDA @VIRTUAL04
    case 0xC482B5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC482B7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC482B9: cpu.execute_instruction<0x4C>(0x008369, 3); return true;
    // src/overworld/use_sound_stone.asm:155 LDA @LOCAL09
    case 0xC482BC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:156 STA @VIRTUAL02
    case 0xC482BE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:157 CMP #8
    case 0xC482C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:157 CMP #8
    // Overlapping static entry reached from 0xC482C0.
    case 0xC482C2: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/use_sound_stone.asm:158 BCS @UNKNOWN10
    case 0xC482C3: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:159 LDA @VIRTUAL02
    case 0xC482C5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482C7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:161 CLC
    case 0xC482D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    case 0xC482D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x00B553, 3); return true;
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    // Overlapping static entry reached from 0xC482D1.
    case 0xC482D3: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:163 TAX
    case 0xC482D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:164 LDA a:sound_stone_playback_state::state,X
    case 0xC482D5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:165 CMP #2
    case 0xC482D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:165 CMP #2
    // Overlapping static entry reached from 0xC482D8.
    case 0xC482DA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:166 BNE @UNKNOWN10
    case 0xC482DB: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:167 LDA #1
    case 0xC482DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:167 LDA #1
    // Overlapping static entry reached from 0xC482DD.
    case 0xC482DF: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:168 STA a:sound_stone_playback_state::state,X
    case 0xC482E0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:170 LDA @VIRTUAL02
    case 0xC482E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:171 CMP #8
    case 0xC482E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:171 CMP #8
    // Overlapping static entry reached from 0xC482E5.
    case 0xC482E7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:172 BNE @UNKNOWN14
    case 0xC482E8: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:173 LDA @LOCAL0B
    case 0xC482EA: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:174 INC
    case 0xC482EC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:175 STA @LOCAL07
    case 0xC482ED: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:176 BRA @UNKNOWN12
    case 0xC482EF: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC482F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:179 TAX
    case 0xC482FA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:180 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC482FB: cpu.execute_instruction<0xBD>(0x00B553, 3); return true;
    // src/overworld/use_sound_stone.asm:181 BNE @UNKNOWN13
    case 0xC482FE: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:182 LDA @LOCAL07
    case 0xC48300: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:183 INC
    case 0xC48302: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:184 STA @LOCAL07
    case 0xC48303: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:186 CMP #8
    case 0xC48305: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:186 CMP #8
    // Overlapping static entry reached from 0xC48305.
    case 0xC48307: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/use_sound_stone.asm:187 BCC @UNKNOWN11
    case 0xC48308: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/overworld/use_sound_stone.asm:189 LDA @LOCAL07
    case 0xC4830A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:190 CMP #8
    case 0xC4830C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:190 CMP #8
    // Overlapping static entry reached from 0xC4830C.
    case 0xC4830E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:191 BNE @UNKNOWN14
    case 0xC4830F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/use_sound_stone.asm:192 LDA #150
    case 0xC48311: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x000096, 3); return true;
    // src/overworld/use_sound_stone.asm:192 LDA #150
    // Overlapping static entry reached from 0xC48311.
    case 0xC48313: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:193 STA @LOCAL0C
    case 0xC48314: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:195 INC @LOCAL0B
    case 0xC48316: cpu.execute_instruction<0xE6>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:196 LDA @LOCAL0B
    case 0xC48318: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:197 CMP #8
    case 0xC4831A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:197 CMP #8
    // Overlapping static entry reached from 0xC4831A.
    case 0xC4831C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/use_sound_stone.asm:198 BCS @UNKNOWN17
    case 0xC4831D: cpu.execute_instruction<0xB0>(0x000045, 2); return true;
    // src/overworld/use_sound_stone.asm:199 LDA @LOCAL0B
    case 0xC4831F: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:200 STA @VIRTUAL02
    case 0xC48321: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:201 STA @LOCAL09
    case 0xC48323: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:202 LDA @VIRTUAL02
    case 0xC48325: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48327: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48329: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4832F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:204 CLC
    case 0xC48330: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    case 0xC48331: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000053, 2); else cpu.execute_instruction<0x69>(0x00B553, 3); return true;
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    // Overlapping static entry reached from 0xC48331.
    case 0xC48333: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:206 TAX
    case 0xC48334: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:207 LDA __BSS_START__,X
    case 0xC48335: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:208 BEQ @UNKNOWN15
    case 0xC48338: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:209 LDA #2
    case 0xC4833A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:209 LDA #2
    // Overlapping static entry reached from 0xC4833A.
    case 0xC4833C: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:210 STA __BSS_START__,X
    case 0xC4833D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:211 BRA @UNKNOWN16
    case 0xC48340: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/use_sound_stone.asm:213 LDA #8
    case 0xC48342: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:213 LDA #8
    // Overlapping static entry reached from 0xC48342.
    case 0xC48344: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:214 STA @VIRTUAL02
    case 0xC48345: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:215 STA @LOCAL09
    case 0xC48347: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:217 LDA @VIRTUAL02
    case 0xC48349: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:218 ASL
    case 0xC4834B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:219 TAX
    case 0xC4834C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:220 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC4834D: cpu.execute_instruction<0xBF>(0xC4811D, 4); return true;
    // src/overworld/use_sound_stone.asm:221 STA @VIRTUAL04
    case 0xC48351: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:222 STA @LOCAL0A
    case 0xC48353: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:223 LDX @VIRTUAL02
    case 0xC48355: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:224 LDA f:SOUND_STONE_MUSIC,X
    case 0xC48357: cpu.execute_instruction<0xBF>(0xC48114, 4); return true;
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    case 0xC4835B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC4835B.
    case 0xC4835D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:226 JSL CHANGE_MUSIC
    case 0xC4835E: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/overworld/use_sound_stone.asm:227 BRA @UNKNOWN18
    case 0xC48362: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/use_sound_stone.asm:229 LDA #150
    case 0xC48364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x000096, 3); return true;
    // src/overworld/use_sound_stone.asm:229 LDA #150
    // Overlapping static entry reached from 0xC48364.
    case 0xC48366: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:230 STA @LOCAL0C
    case 0xC48367: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:232 LDA @LOCAL09
    case 0xC48369: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:233 STA @VIRTUAL02
    case 0xC4836B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:234 CMP #8
    case 0xC4836D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:234 CMP #8
    // Overlapping static entry reached from 0xC4836D.
    case 0xC4836F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/use_sound_stone.asm:235 BCS @UNKNOWN19
    case 0xC48370: cpu.execute_instruction<0xB0>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:236 LDA @VIRTUAL02
    case 0xC48372: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:237 ASL
    case 0xC48374: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:238 TAX
    case 0xC48375: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:239 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC48376: cpu.execute_instruction<0xBF>(0xC4811D, 4); return true;
    // src/overworld/use_sound_stone.asm:240 SEC
    case 0xC4837A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:241 SBC #9
    case 0xC4837B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000009, 2); else cpu.execute_instruction<0xE9>(0x000009, 3); return true;
    // src/overworld/use_sound_stone.asm:241 SBC #9
    // Overlapping static entry reached from 0xC4837B.
    case 0xC4837D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:242 STA @VIRTUAL02
    case 0xC4837E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:243 LDA @LOCAL0A
    case 0xC48380: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:244 STA @VIRTUAL04
    case 0xC48382: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:245 CMP @VIRTUAL02
    case 0xC48384: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:246 BNE @UNKNOWN19
    case 0xC48386: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:247 LDA @LOCAL10
    case 0xC48388: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/overworld/use_sound_stone.asm:248 CLC
    case 0xC4838A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:249 ADC #8
    case 0xC4838B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:249 ADC #8
    // Overlapping static entry reached from 0xC4838B.
    case 0xC4838D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:250 JSL UNKNOWN_C0AC0C
    case 0xC4838E: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/overworld/use_sound_stone.asm:252 JSL OAM_CLEAR
    case 0xC48392: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    case 0xC48396: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    // Overlapping static entry reached from 0xC48396.
    case 0xC48398: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:254 JSL UNKNOWN_C088A5
    case 0xC48399: cpu.execute_instruction<0x22>(0xC08897, 4); return true;
    // src/overworld/use_sound_stone.asm:255 STZ @LOCAL06
    case 0xC4839D: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:256 JMP @UNKNOWN27
    case 0xC4839F: cpu.execute_instruction<0x4C>(0x00858F, 3); return true;
    // src/overworld/use_sound_stone.asm:258 LDA @LOCAL06
    case 0xC483A2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483AA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC483AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:260 STA @LOCAL05
    case 0xC483AD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:260 STA @LOCAL05
    // Overlapping static entry reached from 0xC48427.
    case 0xC483AE: cpu.execute_instruction<0x1C>(0x00BDAA, 3); return true;
    // src/overworld/use_sound_stone.asm:261 TAX
    case 0xC483AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:262 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC483B0: cpu.execute_instruction<0xBD>(0x00B553, 3); return true;
    // src/overworld/use_sound_stone.asm:262 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    // Overlapping static entry reached from 0xC483AE.
    case 0xC483B1: cpu.execute_instruction<0x53>(0x0000B5, 2); return true;
    // src/overworld/use_sound_stone.asm:263 CMP #1
    case 0xC483B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:263 CMP #1
    // Overlapping static entry reached from 0xC483B3.
    case 0xC483B5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_sound_stone.asm:264 BEQ @UNKNOWN21
    case 0xC483B6: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:265 CMP #2
    case 0xC483B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:265 CMP #2
    // Overlapping static entry reached from 0xC483B8.
    case 0xC483BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_sound_stone.asm:266 BEQ @UNKNOWN22
    case 0xC483BB: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/overworld/use_sound_stone.asm:267 JMP @UNKNOWN26
    case 0xC483BD: cpu.execute_instruction<0x4C>(0x00858D, 3); return true;
    // src/overworld/use_sound_stone.asm:269 LDX @LOCAL06
    case 0xC483C0: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:270 SEP #PROC_FLAGS::ACCUM8
    case 0xC483C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:271 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC483C4: cpu.execute_instruction<0xBF>(0xC480F4, 4); return true;
    // src/overworld/use_sound_stone.asm:272 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC483C8: cpu.execute_instruction<0x8D>(0x00B5C4, 3); return true;
    // src/overworld/use_sound_stone.asm:273 LDA #$30
    case 0xC483CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x008D30, 3); return true;
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC483CD: cpu.execute_instruction<0x8D>(0x00B5C5, 3); return true;
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC483CB.
    case 0xC483CE: cpu.execute_instruction<0xC5>(0x0000B5, 2); return true;
    // src/overworld/use_sound_stone.asm:275 LDX @LOCAL06
    case 0xC483D0: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:276 REP #PROC_FLAGS::ACCUM8
    case 0xC483D2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:277 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC483D4: cpu.execute_instruction<0xBF>(0xC480EC, 4); return true;
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    case 0xC483D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC483D8.
    case 0xC483DA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_sound_stone.asm:279 TAY
    case 0xC483DB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:280 LDX @LOCAL06
    case 0xC483DC: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:281 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC483DE: cpu.execute_instruction<0xBF>(0xC480E4, 4); return true;
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    case 0xC483E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC483E2.
    case 0xC483E4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:283 TAX
    case 0xC483E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC483E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x00B5C3, 3); return true;
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC483E6.
    case 0xC483E8: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    case 0xC483E9: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC483E8.
    case 0xC483EA: cpu.execute_instruction<0xC6>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC483EA.
    case 0xC483EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00004C, 2); else cpu.execute_instruction<0xC0>(0x008D4C, 3); return true;
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    case 0xC483ED: cpu.execute_instruction<0x4C>(0x00858D, 3); return true;
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC483EC.
    case 0xC483EE: cpu.execute_instruction<0x8D>(0x00A585, 3); return true;
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC483EC.
    case 0xC483EF: cpu.execute_instruction<0x85>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    case 0xC483F0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    // Overlapping static entry reached from 0xC483EF.
    case 0xC483F1: cpu.execute_instruction<0x1C>(0x006918, 3); return true;
    // src/overworld/use_sound_stone.asm:289 CLC
    case 0xC483F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC483F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005D, 2); else cpu.execute_instruction<0x69>(0x00B55D, 3); return true;
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC483F1.
    case 0xC483F4: cpu.execute_instruction<0x5D>(0x00AAB5, 3); return true;
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC483F3.
    case 0xC483F5: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:291 TAX
    case 0xC483F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:292 LDA __BSS_START__,X
    case 0xC483F7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:293 CLC
    case 0xC483FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    case 0xC483FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CD, 2); else cpu.execute_instruction<0x69>(0x000CCD, 3); return true;
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    // Overlapping static entry reached from 0xC483FB.
    case 0xC483FD: cpu.execute_instruction<0x0C>(0x00009D, 3); return true;
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    case 0xC483FE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC483FD.
    case 0xC48400: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:296 LDA @LOCAL05
    case 0xC48401: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:297 CLC
    case 0xC48403: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    case 0xC48404: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000055, 2); else cpu.execute_instruction<0x69>(0x00B555, 3); return true;
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    // Overlapping static entry reached from 0xC48404.
    case 0xC48406: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:299 TAX
    case 0xC48407: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:300 LDA __BSS_START__,X
    case 0xC48408: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:301 TAY
    case 0xC4840B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:302 DEY
    case 0xC4840C: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:303 TYA
    case 0xC4840D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:304 STA __BSS_START__,X
    case 0xC4840E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:305 BNE @UNKNOWN23
    case 0xC48411: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/overworld/use_sound_stone.asm:306 LDA #2
    case 0xC48413: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:306 LDA #2
    // Overlapping static entry reached from 0xC48413.
    case 0xC48415: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:307 STA __BSS_START__,X
    case 0xC48416: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:308 LDA @LOCAL05
    case 0xC48419: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:309 CLC
    case 0xC4841B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    case 0xC4841C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000059, 2); else cpu.execute_instruction<0x69>(0x00B559, 3); return true;
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    // Overlapping static entry reached from 0xC4841C.
    case 0xC4841E: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:311 TAX
    case 0xC4841F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:312 STX @LOCAL07
    case 0xC48420: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:313 LDA @LOCAL05
    case 0xC48422: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:314 PHA
    case 0xC48424: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC48425: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0080C0, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC48425.
    case 0xC48427: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC48428: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4842A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC4842A.
    case 0xC4842C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4842D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:316 LDA @LOCAL06
    case 0xC4842F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:317 ASL
    case 0xC48431: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:318 ASL
    case 0xC48432: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:319 CLC
    case 0xC48433: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:320 ADC @VIRTUAL06
    case 0xC48434: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:321 STA @VIRTUAL06
    case 0xC48436: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC48438: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC484B2.
    case 0xC48439: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC48438.
    case 0xC4843A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4843B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4843D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4843E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC48440: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC48442: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:323 LDA __BSS_START__,X
    case 0xC48444: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:324 CLC
    case 0xC48447: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:325 ADC @VIRTUAL06
    case 0xC48448: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:326 STA @VIRTUAL06
    case 0xC4844A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:327 LDA [@VIRTUAL06]
    case 0xC4844C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    case 0xC4844E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC4844E.
    case 0xC48450: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/overworld/use_sound_stone.asm:329 PLX
    case 0xC48451: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:330 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_position_1,X
    case 0xC48452: cpu.execute_instruction<0x9D>(0x00B55B, 3); return true;
    // src/overworld/use_sound_stone.asm:331 LDX @LOCAL07
    case 0xC48455: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:332 LDA __BSS_START__,X
    case 0xC48457: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:333 INC
    case 0xC4845A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:334 STA __BSS_START__,X
    case 0xC4845B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:335 LDA @LOCAL05
    case 0xC4845E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:336 CLC
    case 0xC48460: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    case 0xC48461: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000057, 2); else cpu.execute_instruction<0x69>(0x00B557, 3); return true;
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    // Overlapping static entry reached from 0xC48461.
    case 0xC48463: cpu.execute_instruction<0xB5>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:338 TAX
    case 0xC48464: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:339 LDA __BSS_START__,X
    case 0xC48465: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:340 STA @VIRTUAL02
    case 0xC48468: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:341 LDA #2
    case 0xC4846A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:341 LDA #2
    // Overlapping static entry reached from 0xC4846A.
    case 0xC4846C: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/overworld/use_sound_stone.asm:342 SEC
    case 0xC4846D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:343 SBC @VIRTUAL02
    case 0xC4846E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:344 STA __BSS_START__,X
    case 0xC48470: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:346 LDA @LOCAL06
    case 0xC48473: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48475: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48477: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC48478: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4847A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4847B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4847D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:348 STA @LOCAL07
    case 0xC4847E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:349 PHA
    case 0xC48480: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:350 LDX @LOCAL06
    case 0xC48481: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:351 SEP #PROC_FLAGS::ACCUM8
    case 0xC48483: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:352 LDA f:SOUND_STONE_UNKNOWN5,X
    case 0xC48485: cpu.execute_instruction<0xBF>(0xC48104, 4); return true;
    // src/overworld/use_sound_stone.asm:353 PLX
    case 0xC48489: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:354 CLC
    case 0xC4848A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:355 ADC SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown4,X
    case 0xC4848B: cpu.execute_instruction<0x7D>(0x00B557, 3); return true;
    // src/overworld/use_sound_stone.asm:356 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC4848E: cpu.execute_instruction<0x8D>(0x00B5C9, 3); return true;
    // src/overworld/use_sound_stone.asm:357 LDX @LOCAL06
    case 0xC48491: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:358 LDA f:SOUND_STONE_UNKNOWN6,X
    case 0xC48493: cpu.execute_instruction<0xBF>(0xC4810C, 4); return true;
    // src/overworld/use_sound_stone.asm:359 ASL
    case 0xC48497: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:360 CLC
    case 0xC48498: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:361 ADC #$31
    case 0xC48499: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x008D31, 3); return true;
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC4849B: cpu.execute_instruction<0x8D>(0x00B5CA, 3); return true;
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC48499.
    case 0xC4849C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC4849C.
    case 0xC4849D: cpu.execute_instruction<0xB5>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:363 REP #PROC_FLAGS::ACCUM8
    case 0xC4849E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:363 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4849D.
    case 0xC4849F: cpu.execute_instruction<0x20>(0x0020A5, 3); return true;
    // src/overworld/use_sound_stone.asm:364 LDA @LOCAL07
    case 0xC484A0: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:365 CLC
    case 0xC484A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    case 0xC484A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005B, 2); else cpu.execute_instruction<0x69>(0x00B55B, 3); return true;
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    // Overlapping static entry reached from 0xC484A3.
    case 0xC484A5: cpu.execute_instruction<0xB5>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    case 0xC484A6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    // Overlapping static entry reached from 0xC484A5.
    case 0xC484A7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:368 LDA (@LOCAL04)
    case 0xC484A8: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:369 TAY
    case 0xC484AA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC484AB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC484AD: cpu.execute_instruction<0x4C>(0x008555, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0080E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC484B0.
    case 0xC484B2: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC484B5.
    case 0xC484B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC484B8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_sound_stone.asm:372 LDA @LOCAL06
    case 0xC484BA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:373 CLC
    case 0xC484BC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:374 ADC @VIRTUAL0A
    case 0xC484BD: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:375 STA @VIRTUAL0A
    case 0xC484BF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:376 LDA @LOCAL07
    case 0xC484C1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:377 CLC
    case 0xC484C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC484C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005D, 2); else cpu.execute_instruction<0x69>(0x00B55D, 3); return true;
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC484C4.
    case 0xC484C6: cpu.execute_instruction<0xB5>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    case 0xC484C7: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    // Overlapping static entry reached from 0xC484C6.
    case 0xC484C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x0080EC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC484C9.
    case 0xC484CB: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC484CE.
    case 0xC484D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC484D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:381 LDA @LOCAL06
    case 0xC484D3: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:382 CLC
    case 0xC484D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:383 ADC @VIRTUAL06
    case 0xC484D6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:384 STA @VIRTUAL06
    case 0xC484D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:385 LDA (@LOCAL03)
    case 0xC484DA: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:386 XBA
    case 0xC484DC: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    case 0xC484DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC484DD.
    case 0xC484DF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:388 TAX
    case 0xC484E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:389 TYA
    case 0xC484E1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:390 JSL COSINE_SINE
    case 0xC484E2: cpu.execute_instruction<0x22>(0xC0B3EA, 4); return true;
    // src/overworld/use_sound_stone.asm:391 STA @LOCAL02
    case 0xC484E6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:392 LDA (@LOCAL03)
    case 0xC484E8: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:393 XBA
    case 0xC484EA: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    case 0xC484EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    // Overlapping static entry reached from 0xC484EB.
    case 0xC484ED: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:395 TAX
    case 0xC484EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:396 LDA (@LOCAL04)
    case 0xC484EF: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:397 JSL COSINE
    case 0xC484F1: cpu.execute_instruction<0x22>(0xC0B3DF, 4); return true;
    // src/overworld/use_sound_stone.asm:398 STA @VIRTUAL02
    case 0xC484F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:399 LDA [@VIRTUAL06]
    case 0xC484F7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    case 0xC484F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    // Overlapping static entry reached from 0xC484F9.
    case 0xC484FB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:401 CLC
    case 0xC484FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:402 ADC @VIRTUAL02
    case 0xC484FD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:403 TAY
    case 0xC484FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:404 LDA [@VIRTUAL0A]
    case 0xC48500: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    case 0xC48502: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    // Overlapping static entry reached from 0xC48502.
    case 0xC48504: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:406 CLC
    case 0xC48505: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:407 ADC @LOCAL02
    case 0xC48506: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:408 TAX
    case 0xC48508: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC48509: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x00B5C8, 3); return true;
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC48509.
    case 0xC4850B: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    case 0xC4850C: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4850B.
    case 0xC4850D: cpu.execute_instruction<0xC6>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4850D.
    case 0xC4850F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000B2, 2); else cpu.execute_instruction<0xC0>(0x0018B2, 3); return true;
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    case 0xC48510: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    // Overlapping static entry reached from 0xC4850F.
    case 0xC48511: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:412 XBA
    case 0xC48512: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    case 0xC48513: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC48513.
    case 0xC48515: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:414 CLC
    case 0xC48516: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:415 ADC #128
    case 0xC48517: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/overworld/use_sound_stone.asm:415 ADC #128
    // Overlapping static entry reached from 0xC48517.
    case 0xC48519: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    case 0xC4851A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    // Overlapping static entry reached from 0xC4851A.
    case 0xC4851C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:417 TAX
    case 0xC4851D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:418 LDA (@LOCAL04)
    case 0xC4851E: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:419 JSL COSINE_SINE
    case 0xC48520: cpu.execute_instruction<0x22>(0xC0B3EA, 4); return true;
    // src/overworld/use_sound_stone.asm:420 STA @LOCAL02
    case 0xC48524: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:421 LDA (@LOCAL03)
    case 0xC48526: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:422 XBA
    case 0xC48528: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    case 0xC48529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    // Overlapping static entry reached from 0xC48529.
    case 0xC4852B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:424 CLC
    case 0xC4852C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:425 ADC #128
    case 0xC4852D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/overworld/use_sound_stone.asm:425 ADC #128
    // Overlapping static entry reached from 0xC4852D.
    case 0xC4852F: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    case 0xC48530: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    // Overlapping static entry reached from 0xC48530.
    case 0xC48532: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:427 TAX
    case 0xC48533: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:428 LDA (@LOCAL04)
    case 0xC48534: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:429 JSL COSINE
    case 0xC48536: cpu.execute_instruction<0x22>(0xC0B3DF, 4); return true;
    // src/overworld/use_sound_stone.asm:430 STA @VIRTUAL02
    case 0xC4853A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:431 LDA [@VIRTUAL06]
    case 0xC4853C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    case 0xC4853E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    // Overlapping static entry reached from 0xC4853E.
    case 0xC48540: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:433 CLC
    case 0xC48541: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:434 ADC @VIRTUAL02
    case 0xC48542: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:435 TAY
    case 0xC48544: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:436 LDA [@VIRTUAL0A]
    case 0xC48545: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    case 0xC48547: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    // Overlapping static entry reached from 0xC48547.
    case 0xC48549: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:438 CLC
    case 0xC4854A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:439 ADC @LOCAL02
    case 0xC4854B: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:440 TAX
    case 0xC4854D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC4854E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x00B5C8, 3); return true;
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC4854E.
    case 0xC48550: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    case 0xC48551: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC48550.
    case 0xC48552: cpu.execute_instruction<0xC6>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC48552.
    case 0xC48554: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A6, 2); else cpu.execute_instruction<0xC0>(0x001EA6, 3); return true;
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    case 0xC48555: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    // Overlapping static entry reached from 0xC48554.
    case 0xC48556: cpu.execute_instruction<0x1E>(0x0020E2, 3); return true;
    // src/overworld/use_sound_stone.asm:445 SEP #PROC_FLAGS::ACCUM8
    case 0xC48557: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:446 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC48559: cpu.execute_instruction<0xBF>(0xC480F4, 4); return true;
    // src/overworld/use_sound_stone.asm:447 CLC
    case 0xC4855D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:448 ADC #128
    case 0xC4855E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x008D80, 3); return true;
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC48560: cpu.execute_instruction<0x8D>(0x00B5C4, 3); return true;
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    // Overlapping static entry reached from 0xC4855E.
    case 0xC48561: cpu.execute_instruction<0xC4>(0x0000B5, 2); return true;
    // src/overworld/use_sound_stone.asm:450 LDX @LOCAL06
    case 0xC48563: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:451 LDA f:SOUND_STONE_UNKNOWN4,X
    case 0xC48565: cpu.execute_instruction<0xBF>(0xC480FC, 4); return true;
    // src/overworld/use_sound_stone.asm:452 ASL
    case 0xC48569: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:453 CLC
    case 0xC4856A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:454 ADC #$30
    case 0xC4856B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x008D30, 3); return true;
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC4856D: cpu.execute_instruction<0x8D>(0x00B5C5, 3); return true;
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC4856B.
    case 0xC4856E: cpu.execute_instruction<0xC5>(0x0000B5, 2); return true;
    // src/overworld/use_sound_stone.asm:456 LDX @LOCAL06
    case 0xC48570: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:457 REP #PROC_FLAGS::ACCUM8
    case 0xC48572: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:458 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC48574: cpu.execute_instruction<0xBF>(0xC480EC, 4); return true;
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    case 0xC48578: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    // Overlapping static entry reached from 0xC48578.
    case 0xC4857A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_sound_stone.asm:460 TAY
    case 0xC4857B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:461 LDX @LOCAL06
    case 0xC4857C: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:462 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC4857E: cpu.execute_instruction<0xBF>(0xC480E4, 4); return true;
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    case 0xC48582: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    // Overlapping static entry reached from 0xC48582.
    case 0xC48584: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:464 TAX
    case 0xC48585: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC48586: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x00B5C3, 3); return true;
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC48586.
    case 0xC48588: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    case 0xC48589: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC48588.
    case 0xC4858A: cpu.execute_instruction<0xC6>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4858A.
    case 0xC4858C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E6, 2); else cpu.execute_instruction<0xC0>(0x001EE6, 3); return true;
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    case 0xC4858D: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    // Overlapping static entry reached from 0xC4858C.
    case 0xC4858E: cpu.execute_instruction<0x1E>(0x001EA5, 3); return true;
    // src/overworld/use_sound_stone.asm:470 LDA @LOCAL06
    case 0xC4858F: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:471 CMP #8
    case 0xC48591: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:471 CMP #8
    // Overlapping static entry reached from 0xC48591.
    case 0xC48593: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC48594: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC48596: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC48598: cpu.execute_instruction<0x4C>(0x0083A2, 3); return true;
    // src/overworld/use_sound_stone.asm:473 DEC @LOCAL0E
    case 0xC4859B: cpu.execute_instruction<0xC6>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:474 LDA @LOCAL0E
    case 0xC4859D: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:475 BNE @UNKNOWN29
    case 0xC4859F: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/overworld/use_sound_stone.asm:476 LDA #15
    case 0xC485A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/overworld/use_sound_stone.asm:476 LDA #15
    // Overlapping static entry reached from 0xC485A1.
    case 0xC485A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:477 STA @LOCAL0E
    case 0xC485A4: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:478 LDA @LOCAL0F
    case 0xC485A6: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:479 INC
    case 0xC485A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    case 0xC485A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    // Overlapping static entry reached from 0xC485A9.
    case 0xC485AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:481 STA @LOCAL0F
    case 0xC485AC: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:483 LDA @LOCAL0F
    case 0xC485AE: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:484 SEP #PROC_FLAGS::ACCUM8
    case 0xC485B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:485 ASL
    case 0xC485B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:486 CLC
    case 0xC485B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:487 ADC #64
    case 0xC485B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x008D40, 3); return true;
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC485B6: cpu.execute_instruction<0x8D>(0x00B5C9, 3); return true;
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    // Overlapping static entry reached from 0xC485B4.
    case 0xC485B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B5, 2); else cpu.execute_instruction<0xC9>(0x00A9B5, 3); return true;
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    case 0xC485B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x008D3B, 3); return true;
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    // Overlapping static entry reached from 0xC485B7.
    case 0xC485BA: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC485BB: cpu.execute_instruction<0x8D>(0x00B5CA, 3); return true;
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC485B9.
    case 0xC485BC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC485BC.
    case 0xC485BD: cpu.execute_instruction<0xB5>(0x0000A0, 2); return true;
    // src/overworld/use_sound_stone.asm:491 LDY #112
    case 0xC485BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000070, 2); else cpu.execute_instruction<0xA0>(0x000070, 3); return true;
    // src/overworld/use_sound_stone.asm:491 LDY #112
    // Overlapping static entry reached from 0xC485BD.
    case 0xC485BF: cpu.execute_instruction<0x70>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:491 LDY #112
    // Overlapping static entry reached from 0xC485BE.
    case 0xC485C0: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/use_sound_stone.asm:492 LDX #128
    case 0xC485C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC485F0.
    case 0xC485C2: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC485C1.
    case 0xC485C3: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC485C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC485C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x00B5C8, 3); return true;
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC485C6.
    case 0xC485C8: cpu.execute_instruction<0xB5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    case 0xC485C9: cpu.execute_instruction<0x22>(0xC08CC6, 4); return true;
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC485C8.
    case 0xC485CA: cpu.execute_instruction<0xC6>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC485CA.
    case 0xC485CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x001722, 3); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    case 0xC485CD: cpu.execute_instruction<0x22>(0xC08B17, 4); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC485CC.
    case 0xC485CE: cpu.execute_instruction<0x17>(0x00008B, 2); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC485CC.
    case 0xC485CF: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC485CF.
    case 0xC485D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/overworld/use_sound_stone.asm:497 LDX #0
    case 0xC485D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC485D0.
    case 0xC485D2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC485D1.
    case 0xC485D3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC485D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC485D4.
    case 0xC485D6: cpu.execute_instruction<0xAF>(0xC8E722, 4); return true;
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    case 0xC485D7: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC485D6.
    case 0xC485DA: cpu.execute_instruction<0xC2>(0x0000A2, 2); return true;
    // src/overworld/use_sound_stone.asm:500 LDX #1
    case 0xC485DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC485DA.
    case 0xC485DC: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC485DB.
    case 0xC485DD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC485DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00B020, 3); return true;
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC485DE.
    case 0xC485E0: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    case 0xC485E1: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC485E0.
    case 0xC485E2: cpu.execute_instruction<0xE7>(0x0000C8, 2); return true;
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC485E2.
    case 0xC485E4: cpu.execute_instruction<0xC2>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    case 0xC485E5: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    // Overlapping static entry reached from 0xC485E4.
    case 0xC485E6: cpu.execute_instruction<0x34>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC485E7: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC485E6.
    case 0xC485E8: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC485E9: cpu.execute_instruction<0x4C>(0x008270, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC485E8.
    case 0xC485EA: cpu.execute_instruction<0x70>(0x000082, 2); return true;
    // src/overworld/use_sound_stone.asm:505 LDA @LOCAL08
    case 0xC485EC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    case 0xC485EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0080C0, 3); return true;
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    // Overlapping static entry reached from 0xC485EE.
    case 0xC485F0: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC485F1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC485F3: cpu.execute_instruction<0x4C>(0x008270, 3); return true;
    // src/overworld/use_sound_stone.asm:509 LDX #1
    case 0xC485F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:509 LDX #1
    // Overlapping static entry reached from 0xC485F6.
    case 0xC485F8: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/use_sound_stone.asm:510 TXA
    case 0xC485F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:511 JSL FADE_OUT
    case 0xC485FA: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/use_sound_stone.asm:512 BRA @UNKNOWN33
    case 0xC485FE: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:514 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC48600: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/overworld/use_sound_stone.asm:516 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC48604: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    case 0xC48607: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC48607.
    case 0xC48609: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:518 BNE @UNKNOWN32
    case 0xC4860A: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/overworld/use_sound_stone.asm:519 JSL UNKNOWN_C08726
    case 0xC4860C: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/overworld/use_sound_stone.asm:520 LDA #1
    case 0xC48610: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:520 LDA #1
    // Overlapping static entry reached from 0xC48610.
    case 0xC48612: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:521 JSL UNKNOWN_C0AFCD
    case 0xC48613: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // src/overworld/use_sound_stone.asm:522 JSL RELOAD_MAP
    case 0xC48617: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/overworld/use_sound_stone.asm:523 LDX #1
    case 0xC4861B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:523 LDX #1
    // Overlapping static entry reached from 0xC4861B.
    case 0xC4861D: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/use_sound_stone.asm:524 TXA
    case 0xC4861E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:525 JSL FADE_IN
    case 0xC4861F: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC48623: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC48624: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/velocity_store.asm (source_named).
bool execute_overworld_velocity_store_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/velocity_store.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02C4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C51: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC02C52.
    case 0xC02C54: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC02C55: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:9 LDY #0
    case 0xC02C56: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/velocity_store.asm:9 LDY #0
    // Overlapping static entry reached from 0xC02C56.
    case 0xC02C58: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/velocity_store.asm:10 STY @LOCAL02
    case 0xC02C59: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:11 JMP @UNKNOWN1
    case 0xC02C5B: cpu.execute_instruction<0x4C>(0x002E07, 3); return true;
    // src/overworld/velocity_store.asm:13 TYA
    case 0xC02C5E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:14 ASL
    case 0xC02C5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:15 ASL
    case 0xC02C60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:16 TAX
    case 0xC02C61: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A6, 2); else cpu.execute_instruction<0xA9>(0x00E0A6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02C62.
    case 0xC02C64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C65: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02C64.
    case 0xC02C66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02C67.
    case 0xC02C69: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC02C6A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/velocity_store.asm:18 TXA
    case 0xC02C6C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:19 CLC
    case 0xC02C6D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:20 ADC @VIRTUAL0A
    case 0xC02C6E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/velocity_store.asm:21 STA @VIRTUAL0A
    case 0xC02C70: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C72: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC02C72.
    case 0xC02C74: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C75: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C77: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C78: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C7A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02C7C: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C7E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C80: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C82: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02C84: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC02C86.
    case 0xC02C88: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC02C8B.
    case 0xC02C8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC02C8E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:25 LDY @LOCAL02
    case 0xC02C90: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:26 TYA
    case 0xC02C92: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:27 ASL
    case 0xC02C93: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:28 ASL
    case 0xC02C94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:29 ASL
    case 0xC02C95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:30 ASL
    case 0xC02C96: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:31 ASL
    case 0xC02C97: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:32 STA @LOCAL01
    case 0xC02C98: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:33 CLC
    case 0xC02C9A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC02C9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006C, 2); else cpu.execute_instruction<0x69>(0x00516C, 3); return true;
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC02C9B.
    case 0xC02C9D: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:35 TAY
    case 0xC02C9E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02C9F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CA1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CA4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CA6: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:37 LDA @LOCAL01
    case 0xC02CA9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:38 CLC
    case 0xC02CAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC02CAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00515C, 3); return true;
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC02CAC.
    case 0xC02CAE: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:40 TAY
    case 0xC02CAF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CB7: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:42 LDA @LOCAL01
    case 0xC02CBA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:43 CLC
    case 0xC02CBC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC02CBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000034, 2); else cpu.execute_instruction<0x69>(0x005334, 3); return true;
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC02CBD.
    case 0xC02CBF: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:45 TAY
    case 0xC02CC0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CC8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:47 LDA @LOCAL01
    case 0xC02CCB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:48 CLC
    case 0xC02CCD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC02CCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000024, 2); else cpu.execute_instruction<0x69>(0x005324, 3); return true;
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC02CCE.
    case 0xC02CD0: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:50 TAY
    case 0xC02CD1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CD9: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CDC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CE0: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02CE2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:53 LDA @LOCAL01
    case 0xC02CE4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:54 CLC
    case 0xC02CE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC02CE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00002C, 2); else cpu.execute_instruction<0x69>(0x00532C, 3); return true;
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC02CE7.
    case 0xC02CE9: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:56 TAY
    case 0xC02CEA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CED: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CF0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CF2: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:58 LDA @LOCAL01
    case 0xC02CF5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:59 CLC
    case 0xC02CF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC02CF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000064, 2); else cpu.execute_instruction<0x69>(0x005164, 3); return true;
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC02CF8.
    case 0xC02CFA: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:61 TAY
    case 0xC02CFB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CFC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02CFE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D01: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D03: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D06: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D08: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D0A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02D0C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:64 SEC
    case 0xC02D0E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02D0F.
    case 0xC02D11: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D12: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02D16.
    case 0xC02D18: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D19: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02D1B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:66 LDA @LOCAL01
    case 0xC02D1D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:67 CLC
    case 0xC02D1F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC02D20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00531C, 3); return true;
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC02D20.
    case 0xC02D22: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:69 TAY
    case 0xC02D23: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D24: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D26: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D2B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:71 LDA @LOCAL01
    case 0xC02D2E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:72 CLC
    case 0xC02D30: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC02D31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000074, 2); else cpu.execute_instruction<0x69>(0x005174, 3); return true;
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC02D31.
    case 0xC02D33: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:74 TAY
    case 0xC02D34: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D35: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D37: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D3A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D3C: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DE, 2); else cpu.execute_instruction<0xA9>(0x00E0DE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02D3F.
    case 0xC02D41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D42: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02D41.
    case 0xC02D43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC02D44.
    case 0xC02D46: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC02D47: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/velocity_store.asm:77 TXA
    case 0xC02D49: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:78 CLC
    case 0xC02D4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:79 ADC @VIRTUAL0A
    case 0xC02D4B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/velocity_store.asm:80 STA @VIRTUAL0A
    case 0xC02D4D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC02D4F.
    case 0xC02D51: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D52: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D54: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D55: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC02D59: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D5B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D5D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D5F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC02D61: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/velocity_store.asm:83 LDA @LOCAL01
    case 0xC02D63: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:84 CLC
    case 0xC02D65: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC02D66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x005330, 3); return true;
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC02D66.
    case 0xC02D68: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:86 TAY
    case 0xC02D69: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D6A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D6C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D6F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D71: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:88 LDA @LOCAL01
    case 0xC02D74: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:89 CLC
    case 0xC02D76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC02D77: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x005328, 3); return true;
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC02D77.
    case 0xC02D79: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:91 TAY
    case 0xC02D7A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D7B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D7D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D80: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D82: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:93 LDA @LOCAL01
    case 0xC02D85: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:94 CLC
    case 0xC02D87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC02D88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000068, 2); else cpu.execute_instruction<0x69>(0x005168, 3); return true;
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC02D88.
    case 0xC02D8A: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:96 TAY
    case 0xC02D8B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D8C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D8E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D91: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D93: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:98 LDA @LOCAL01
    case 0xC02D96: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:99 CLC
    case 0xC02D98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC02D99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x005160, 3); return true;
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC02D99.
    case 0xC02D9B: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:101 TAY
    case 0xC02D9C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D9D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02D9F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DA2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DA4: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DA7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DA9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DAB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC02DAD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:104 SEC
    case 0xC02DAF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02DB0.
    case 0xC02DB2: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB3: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC02DB7.
    case 0xC02DB9: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DBA: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC02DBC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:106 LDA @LOCAL01
    case 0xC02DBE: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:107 CLC
    case 0xC02DC0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC02DC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000038, 2); else cpu.execute_instruction<0x69>(0x005338, 3); return true;
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC02DC1.
    case 0xC02DC3: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:109 TAY
    case 0xC02DC4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DC5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DC7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DCA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DCC: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:111 LDA @LOCAL01
    case 0xC02DCF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:112 CLC
    case 0xC02DD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC02DD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x005320, 3); return true;
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC02DD2.
    case 0xC02DD4: cpu.execute_instruction<0x53>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:114 TAY
    case 0xC02DD5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DD6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DD8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DDB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DDD: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:116 LDA @LOCAL01
    case 0xC02DE0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:117 CLC
    case 0xC02DE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC02DE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000070, 2); else cpu.execute_instruction<0x69>(0x005170, 3); return true;
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC02DE3.
    case 0xC02DE5: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:119 TAY
    case 0xC02DE6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DE7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DE9: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DEC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DEE: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:121 LDA @LOCAL01
    case 0xC02DF1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:122 CLC
    case 0xC02DF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC02DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000078, 2); else cpu.execute_instruction<0x69>(0x005178, 3); return true;
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC02DF4.
    case 0xC02DF6: cpu.execute_instruction<0x51>(0x0000A8, 2); return true;
    // src/overworld/velocity_store.asm:124 TAY
    case 0xC02DF7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DF8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DFA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DFD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC02DFF: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:126 LDY @LOCAL02
    case 0xC02E02: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:127 INY
    case 0xC02E04: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:128 STY @LOCAL02
    case 0xC02E05: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:130 CPY #14
    case 0xC02E07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000E, 2); else cpu.execute_instruction<0xC0>(0x00000E, 3); return true;
    // src/overworld/velocity_store.asm:130 CPY #14
    // Overlapping static entry reached from 0xC02E07.
    case 0xC02E09: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC02E0A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC02E0C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC02E0E: cpu.execute_instruction<0x4C>(0x002C5E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC02E11: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC02E12: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
