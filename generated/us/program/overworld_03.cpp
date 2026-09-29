// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/overworld/refresh_map_at_position.asm (source_named).
bool execute_overworld_refresh_map_at_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/refresh_map_at_position.asm:3 BEGIN_C_FUNCTION
    case 0xC01558: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC0155A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC0155B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC0155C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC0155D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC0155D.
    case 0xC0155F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01560: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/refresh_map_at_position.asm:11 END_STACK_VARS
    case 0xC01561: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:12 STX @LOCAL03
    case 0xC01562: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:12 STX @LOCAL03
    // Overlapping static entry reached from 0xC0155F.
    case 0xC01563: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/overworld/refresh_map_at_position.asm:13 STA @LOCAL02
    case 0xC01564: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:13 STA @LOCAL02
    // Overlapping static entry reached from 0xC01563.
    case 0xC01565: cpu.execute_instruction<0x12>(0x00008D, 2); return true;
    // src/overworld/refresh_map_at_position.asm:14 STA BG2_X_POS
    case 0xC01566: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/overworld/refresh_map_at_position.asm:14 STA BG2_X_POS
    // Overlapping static entry reached from 0xC01565.
    case 0xC01567: cpu.execute_instruction<0x35>(0x000000, 2); return true;
    // src/overworld/refresh_map_at_position.asm:15 LDA @LOCAL02
    case 0xC01569: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:16 STA BG1_X_POS
    case 0xC0156B: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/overworld/refresh_map_at_position.asm:17 LDA @LOCAL03
    case 0xC0156E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:18 STA BG2_Y_POS
    case 0xC01570: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/overworld/refresh_map_at_position.asm:19 LDA @LOCAL03
    case 0xC01573: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:20 STA BG1_Y_POS
    case 0xC01575: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/overworld/refresh_map_at_position.asm:21 LDA @LOCAL02
    case 0xC01578: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:22 AND #$8000
    case 0xC0157A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:22 AND #$8000
    // Overlapping static entry reached from 0xC0157A.
    case 0xC0157C: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:23 BEQ @UNKNOWN0
    case 0xC0157D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/refresh_map_at_position.asm:24 LDA @LOCAL02
    case 0xC0157F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:25 LSR
    case 0xC01581: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:26 LSR
    case 0xC01582: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:27 LSR
    case 0xC01583: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:28 ORA #$E000
    case 0xC01584: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:28 ORA #$E000
    // Overlapping static entry reached from 0xC01584.
    case 0xC01586: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000485, 3); return true;
    // src/overworld/refresh_map_at_position.asm:29 STA @VIRTUAL04
    case 0xC01587: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:29 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC01586.
    case 0xC01588: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/overworld/refresh_map_at_position.asm:30 BRA @UNKNOWN1
    case 0xC01589: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/refresh_map_at_position.asm:30 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC01588.
    case 0xC0158A: cpu.execute_instruction<0x07>(0x0000A5, 2); return true;
    // src/overworld/refresh_map_at_position.asm:32 LDA @LOCAL02
    case 0xC0158B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:32 LDA @LOCAL02
    // Overlapping static entry reached from 0xC0158A.
    case 0xC0158C: cpu.execute_instruction<0x12>(0x00004A, 2); return true;
    // src/overworld/refresh_map_at_position.asm:33 LSR
    case 0xC0158D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:34 LSR
    case 0xC0158E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:35 LSR
    case 0xC0158F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:36 STA @VIRTUAL04
    case 0xC01590: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:38 LDA @LOCAL03
    case 0xC01592: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:39 AND #$8000
    case 0xC01594: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:39 AND #$8000
    // Overlapping static entry reached from 0xC01594.
    case 0xC01596: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:40 BEQ @UNKNOWN2
    case 0xC01597: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/overworld/refresh_map_at_position.asm:41 LDA @LOCAL03
    case 0xC01599: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:42 LSR
    case 0xC0159B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:43 LSR
    case 0xC0159C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:44 LSR
    case 0xC0159D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:45 ORA #$E000
    case 0xC0159E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00E000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:45 ORA #$E000
    // Overlapping static entry reached from 0xC0159E.
    case 0xC015A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000285, 3); return true;
    // src/overworld/refresh_map_at_position.asm:46 STA @VIRTUAL02
    case 0xC015A1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:46 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC015A0.
    case 0xC015A2: cpu.execute_instruction<0x02>(0x00004C, 2); return true;
    // src/overworld/refresh_map_at_position.asm:47 JMP @UNKNOWN5
    case 0xC015A3: cpu.execute_instruction<0x4C>(0x00165D, 3); return true;
    // src/overworld/refresh_map_at_position.asm:47 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC015B2.
    case 0xC015A4: cpu.execute_instruction<0x5D>(0x00A516, 3); return true;
    // src/overworld/refresh_map_at_position.asm:49 LDA @LOCAL03
    case 0xC015A6: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:49 LDA @LOCAL03
    // Overlapping static entry reached from 0xC015A4.
    case 0xC015A7: cpu.execute_instruction<0x14>(0x00004A, 2); return true;
    // src/overworld/refresh_map_at_position.asm:50 LSR
    case 0xC015A8: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:51 LSR
    case 0xC015A9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:52 LSR
    case 0xC015AA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:53 STA @VIRTUAL02
    case 0xC015AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:54 JMP @UNKNOWN5
    case 0xC015AD: cpu.execute_instruction<0x4C>(0x00165D, 3); return true;
    // src/overworld/refresh_map_at_position.asm:56 AND #$8000
    case 0xC015B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:56 AND #$8000
    // Overlapping static entry reached from 0xC015B0.
    case 0xC015B2: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:57 BEQ @UNKNOWN4
    case 0xC015B3: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/overworld/refresh_map_at_position.asm:58 LDA SCREEN_LEFT_X
    case 0xC015B5: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:59 INC
    case 0xC015B8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:60 STA @LOCAL01
    case 0xC015B9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:61 STA SCREEN_LEFT_X
    case 0xC015BB: cpu.execute_instruction<0x8D>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:62 LDA @VIRTUAL02
    case 0xC015BE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:63 SEC
    case 0xC015C0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:64 SBC #16
    case 0xC015C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:64 SBC #16
    // Overlapping static entry reached from 0xC015C1.
    case 0xC015C3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:65 TAY
    case 0xC015C4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:66 STY @LOCAL00
    case 0xC015C5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:67 TYX
    case 0xC015C7: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:68 LDA @LOCAL01
    case 0xC015C8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:69 CLC
    case 0xC015CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:70 ADC #41
    case 0xC015CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:70 ADC #41
    // Overlapping static entry reached from 0xC015CB.
    case 0xC015CD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:71 JSR LOAD_MAP_COLUMN
    case 0xC015CE: cpu.execute_instruction<0x20>(0x000BDC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:72 LDY @LOCAL00
    case 0xC015D1: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:73 TYX
    case 0xC015D3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:74 LDA SCREEN_LEFT_X
    case 0xC015D4: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:75 CLC
    case 0xC015D7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:76 ADC #41
    case 0xC015D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:76 ADC #41
    // Overlapping static entry reached from 0xC015D8.
    case 0xC015DA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:77 JSR LOAD_COLLISION_COLUMN
    case 0xC015DB: cpu.execute_instruction<0x20>(0x000D7E, 3); return true;
    // src/overworld/refresh_map_at_position.asm:78 LDX @VIRTUAL02
    case 0xC015DE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:79 LDA SCREEN_LEFT_X
    case 0xC015E0: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:80 CLC
    case 0xC015E3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:81 ADC #32
    case 0xC015E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/overworld/refresh_map_at_position.asm:81 ADC #32
    // Overlapping static entry reached from 0xC015E4.
    case 0xC015E6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:82 JSR UNKNOWN_C00FCB
    case 0xC015E7: cpu.execute_instruction<0x20>(0x000FCB, 3); return true;
    // src/overworld/refresh_map_at_position.asm:83 LDX @VIRTUAL02
    case 0xC015EA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:84 DEX
    case 0xC015EC: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:85 LDA SCREEN_LEFT_X
    case 0xC015ED: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:86 CLC
    case 0xC015F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:87 ADC #34
    case 0xC015F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000022, 2); else cpu.execute_instruction<0x69>(0x000022, 3); return true;
    // src/overworld/refresh_map_at_position.asm:87 ADC #34
    // Overlapping static entry reached from 0xC015F1.
    case 0xC015F3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:88 JSL UNKNOWN_C025CF
    case 0xC015F4: cpu.execute_instruction<0x22>(0xC025CF, 4); return true;
    // src/overworld/refresh_map_at_position.asm:89 LDA @VIRTUAL02
    case 0xC015F8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:90 SEC
    case 0xC015FA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:91 SBC #8
    case 0xC015FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:91 SBC #8
    // Overlapping static entry reached from 0xC015FB.
    case 0xC015FD: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:92 TAX
    case 0xC015FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:93 LDA SCREEN_LEFT_X
    case 0xC015FF: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:94 CLC
    case 0xC01602: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:95 ADC #40
    case 0xC01603: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/overworld/refresh_map_at_position.asm:95 ADC #40
    // Overlapping static entry reached from 0xC01603.
    case 0xC01605: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:96 JSL SPAWN_VERTICAL
    case 0xC01606: cpu.execute_instruction<0x22>(0xC02B55, 4); return true;
    // src/overworld/refresh_map_at_position.asm:97 BRA @UNKNOWN5
    case 0xC0160A: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/overworld/refresh_map_at_position.asm:99 LDA SCREEN_LEFT_X
    case 0xC0160C: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:100 DEC
    case 0xC0160F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:101 STA @LOCAL00
    case 0xC01610: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:102 STA SCREEN_LEFT_X
    case 0xC01612: cpu.execute_instruction<0x8D>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:103 LDA @VIRTUAL02
    case 0xC01615: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:104 SEC
    case 0xC01617: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:105 SBC #16
    case 0xC01618: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:105 SBC #16
    // Overlapping static entry reached from 0xC01618.
    case 0xC0161A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:106 TAY
    case 0xC0161B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:107 STY @LOCAL01
    case 0xC0161C: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:108 TYX
    case 0xC0161E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:109 LDA @LOCAL00
    case 0xC0161F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:110 SEC
    case 0xC01621: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:111 SBC #16
    case 0xC01622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:111 SBC #16
    // Overlapping static entry reached from 0xC01622.
    case 0xC01624: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:112 JSR LOAD_MAP_COLUMN
    case 0xC01625: cpu.execute_instruction<0x20>(0x000BDC, 3); return true;
    // src/overworld/refresh_map_at_position.asm:113 LDY @LOCAL01
    case 0xC01628: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:114 TYX
    case 0xC0162A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:115 LDA SCREEN_LEFT_X
    case 0xC0162B: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:116 SEC
    case 0xC0162E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:117 SBC #16
    case 0xC0162F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:117 SBC #16
    // Overlapping static entry reached from 0xC0162F.
    case 0xC01631: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/overworld/refresh_map_at_position.asm:118 JSR LOAD_COLLISION_COLUMN
    case 0xC01632: cpu.execute_instruction<0x20>(0x000D7E, 3); return true;
    // src/overworld/refresh_map_at_position.asm:119 LDX @VIRTUAL02
    case 0xC01635: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:120 LDA SCREEN_LEFT_X
    case 0xC01637: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:121 DEC
    case 0xC0163A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:122 JSR UNKNOWN_C00FCB
    case 0xC0163B: cpu.execute_instruction<0x20>(0x000FCB, 3); return true;
    // src/overworld/refresh_map_at_position.asm:123 LDX @VIRTUAL02
    case 0xC0163E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:124 DEX
    case 0xC01640: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:125 LDA SCREEN_LEFT_X
    case 0xC01641: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:126 DEC
    case 0xC01644: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:127 DEC
    case 0xC01645: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:128 DEC
    case 0xC01646: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:129 JSL UNKNOWN_C025CF
    case 0xC01647: cpu.execute_instruction<0x22>(0xC025CF, 4); return true;
    // src/overworld/refresh_map_at_position.asm:130 LDA @VIRTUAL02
    case 0xC0164B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/refresh_map_at_position.asm:131 SEC
    case 0xC0164D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:132 SBC #8
    case 0xC0164E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:132 SBC #8
    // Overlapping static entry reached from 0xC0164E.
    case 0xC01650: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:133 TAX
    case 0xC01651: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:134 LDA SCREEN_LEFT_X
    case 0xC01652: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:135 SEC
    case 0xC01655: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:136 SBC #8
    case 0xC01656: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:136 SBC #8
    // Overlapping static entry reached from 0xC01656.
    case 0xC01658: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:137 JSL SPAWN_VERTICAL
    case 0xC01659: cpu.execute_instruction<0x22>(0xC02B55, 4); return true;
    // src/overworld/refresh_map_at_position.asm:139 LDA SCREEN_LEFT_X
    case 0xC0165D: cpu.execute_instruction<0xAD>(0x004374, 3); return true;
    // src/overworld/refresh_map_at_position.asm:139 LDA SCREEN_LEFT_X
    // Overlapping static entry reached from 0xC0166D.
    case 0xC0165F: cpu.execute_instruction<0x43>(0x000038, 2); return true;
    // src/overworld/refresh_map_at_position.asm:140 SEC
    case 0xC01660: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:141 SBC @VIRTUAL04
    case 0xC01661: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/refresh_map_at_position.asm:142 BNEL @UNKNOWN3
    case 0xC01663: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/refresh_map_at_position.asm:142 BNEL @UNKNOWN3
    case 0xC01665: cpu.execute_instruction<0x4C>(0x0015B0, 3); return true;
    // src/overworld/refresh_map_at_position.asm:143 JMP @UNKNOWN9
    case 0xC01668: cpu.execute_instruction<0x4C>(0x00171A, 3); return true;
    // src/overworld/refresh_map_at_position.asm:145 AND #$8000
    case 0xC0166B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/overworld/refresh_map_at_position.asm:145 AND #$8000
    // Overlapping static entry reached from 0xC0166B.
    case 0xC0166D: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/overworld/refresh_map_at_position.asm:146 BEQ @UNKNOWN8
    case 0xC0166E: cpu.execute_instruction<0xF0>(0x00005A, 2); return true;
    // src/overworld/refresh_map_at_position.asm:147 LDA SCREEN_TOP_Y
    case 0xC01670: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:148 INC
    case 0xC01673: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:149 STA @LOCAL01
    case 0xC01674: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:150 STA SCREEN_TOP_Y
    case 0xC01676: cpu.execute_instruction<0x8D>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:151 LDA @VIRTUAL04
    case 0xC01679: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:152 SEC
    case 0xC0167B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:153 SBC #16
    case 0xC0167C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:153 SBC #16
    // Overlapping static entry reached from 0xC0167C.
    case 0xC0167E: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:154 TAY
    case 0xC0167F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:155 STY @LOCAL00
    case 0xC01680: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:156 LDA @LOCAL01
    case 0xC01682: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:157 CLC
    case 0xC01684: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:158 ADC #41
    case 0xC01685: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:158 ADC #41
    // Overlapping static entry reached from 0xC01685.
    case 0xC01687: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:159 TAX
    case 0xC01688: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:160 TYA
    case 0xC01689: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:161 JSR LOAD_MAP_ROW
    case 0xC0168A: cpu.execute_instruction<0x20>(0x000AC5, 3); return true;
    // src/overworld/refresh_map_at_position.asm:162 LDA SCREEN_TOP_Y
    case 0xC0168D: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:163 CLC
    case 0xC01690: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:164 ADC #41
    case 0xC01691: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x000029, 3); return true;
    // src/overworld/refresh_map_at_position.asm:164 ADC #41
    // Overlapping static entry reached from 0xC01691.
    case 0xC01693: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:165 TAX
    case 0xC01694: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:166 LDY @LOCAL00
    case 0xC01695: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:167 TYA
    case 0xC01697: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:168 JSR LOAD_COLLISION_ROW
    case 0xC01698: cpu.execute_instruction<0x20>(0x000CF3, 3); return true;
    // src/overworld/refresh_map_at_position.asm:169 LDA SCREEN_TOP_Y
    case 0xC0169B: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:170 CLC
    case 0xC0169E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:171 ADC #28
    case 0xC0169F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001C, 2); else cpu.execute_instruction<0x69>(0x00001C, 3); return true;
    // src/overworld/refresh_map_at_position.asm:171 ADC #28
    // Overlapping static entry reached from 0xC0169F.
    case 0xC016A1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:172 TAX
    case 0xC016A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:173 LDA @VIRTUAL04
    case 0xC016A3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:174 JSR UNKNOWN_C00E16
    case 0xC016A5: cpu.execute_instruction<0x20>(0x000E16, 3); return true;
    // src/overworld/refresh_map_at_position.asm:175 LDA SCREEN_TOP_Y
    case 0xC016A8: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:175 LDA SCREEN_TOP_Y
    // Overlapping static entry reached from 0xC0B60F.
    case 0xC016A9: cpu.execute_instruction<0x76>(0x000043, 2); return true;
    // src/overworld/refresh_map_at_position.asm:176 CLC
    case 0xC016AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:177 ADC #29
    case 0xC016AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001D, 2); else cpu.execute_instruction<0x69>(0x00001D, 3); return true;
    // src/overworld/refresh_map_at_position.asm:177 ADC #29
    // Overlapping static entry reached from 0xC016AC.
    case 0xC016AE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:178 TAX
    case 0xC016AF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:179 LDA @VIRTUAL04
    case 0xC016B0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:180 JSL UNKNOWN_C0255C
    case 0xC016B2: cpu.execute_instruction<0x22>(0xC0255C, 4); return true;
    // src/overworld/refresh_map_at_position.asm:181 LDA SCREEN_TOP_Y
    case 0xC016B6: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:182 CLC
    case 0xC016B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:183 ADC #36
    case 0xC016BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000024, 2); else cpu.execute_instruction<0x69>(0x000024, 3); return true;
    // src/overworld/refresh_map_at_position.asm:183 ADC #36
    // Overlapping static entry reached from 0xC016BA.
    case 0xC016BC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:184 TAX
    case 0xC016BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:185 LDA @VIRTUAL04
    case 0xC016BE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:186 SEC
    case 0xC016C0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:187 SBC #8
    case 0xC016C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:187 SBC #8
    // Overlapping static entry reached from 0xC016C1.
    case 0xC016C3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:188 JSL SPAWN_HORIZONTAL
    case 0xC016C4: cpu.execute_instruction<0x22>(0xC02A6B, 4); return true;
    // src/overworld/refresh_map_at_position.asm:189 BRA @UNKNOWN9
    case 0xC016C8: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/overworld/refresh_map_at_position.asm:191 LDA SCREEN_TOP_Y
    case 0xC016CA: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:192 DEC
    case 0xC016CD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:193 STA @LOCAL01
    case 0xC016CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:194 STA SCREEN_TOP_Y
    case 0xC016D0: cpu.execute_instruction<0x8D>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:195 LDA @VIRTUAL04
    case 0xC016D3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:196 SEC
    case 0xC016D5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:197 SBC #16
    case 0xC016D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:197 SBC #16
    // Overlapping static entry reached from 0xC016D6.
    case 0xC016D8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/refresh_map_at_position.asm:198 TAY
    case 0xC016D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:199 STY @LOCAL00
    case 0xC016DA: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:200 LDA @LOCAL01
    case 0xC016DC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/refresh_map_at_position.asm:201 SEC
    case 0xC016DE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:202 SBC #16
    case 0xC016DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:202 SBC #16
    // Overlapping static entry reached from 0xC016DF.
    case 0xC016E1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:203 TAX
    case 0xC016E2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:204 TYA
    case 0xC016E3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:205 JSR LOAD_MAP_ROW
    case 0xC016E4: cpu.execute_instruction<0x20>(0x000AC5, 3); return true;
    // src/overworld/refresh_map_at_position.asm:206 LDA SCREEN_TOP_Y
    case 0xC016E7: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:207 SEC
    case 0xC016EA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:208 SBC #16
    case 0xC016EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/refresh_map_at_position.asm:208 SBC #16
    // Overlapping static entry reached from 0xC016EB.
    case 0xC016ED: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:209 TAX
    case 0xC016EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:210 LDY @LOCAL00
    case 0xC016EF: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/refresh_map_at_position.asm:211 TYA
    case 0xC016F1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:212 JSR LOAD_COLLISION_ROW
    case 0xC016F2: cpu.execute_instruction<0x20>(0x000CF3, 3); return true;
    // src/overworld/refresh_map_at_position.asm:213 LDX SCREEN_TOP_Y
    case 0xC016F5: cpu.execute_instruction<0xAE>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:214 DEX
    case 0xC016F8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:215 LDA @VIRTUAL04
    case 0xC016F9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:216 JSR UNKNOWN_C00E16
    case 0xC016FB: cpu.execute_instruction<0x20>(0x000E16, 3); return true;
    // src/overworld/refresh_map_at_position.asm:217 LDX SCREEN_TOP_Y
    case 0xC016FE: cpu.execute_instruction<0xAE>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:218 DEX
    case 0xC01701: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:219 LDA @VIRTUAL04
    case 0xC01702: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:220 JSL UNKNOWN_C0255C
    case 0xC01704: cpu.execute_instruction<0x22>(0xC0255C, 4); return true;
    // src/overworld/refresh_map_at_position.asm:221 LDA SCREEN_TOP_Y
    case 0xC01708: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:222 SEC
    case 0xC0170B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:223 SBC #8
    case 0xC0170C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:223 SBC #8
    // Overlapping static entry reached from 0xC0170C.
    case 0xC0170E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/refresh_map_at_position.asm:224 TAX
    case 0xC0170F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:225 LDA @VIRTUAL04
    case 0xC01710: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/refresh_map_at_position.asm:226 SEC
    case 0xC01712: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:227 SBC #8
    case 0xC01713: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/overworld/refresh_map_at_position.asm:227 SBC #8
    // Overlapping static entry reached from 0xC01713.
    case 0xC01715: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/refresh_map_at_position.asm:228 JSL SPAWN_HORIZONTAL
    case 0xC01716: cpu.execute_instruction<0x22>(0xC02A6B, 4); return true;
    // src/overworld/refresh_map_at_position.asm:230 LDA SCREEN_TOP_Y
    case 0xC0171A: cpu.execute_instruction<0xAD>(0x004376, 3); return true;
    // src/overworld/refresh_map_at_position.asm:231 SEC
    case 0xC0171D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/refresh_map_at_position.asm:232 SBC @VIRTUAL02
    case 0xC0171E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/refresh_map_at_position.asm:233 BNEL @UNKNOWN7
    case 0xC01720: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/refresh_map_at_position.asm:233 BNEL @UNKNOWN7
    case 0xC01722: cpu.execute_instruction<0x4C>(0x00166B, 3); return true;
    // src/overworld/refresh_map_at_position.asm:234 LDA @LOCAL02
    case 0xC01725: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/refresh_map_at_position.asm:235 STA BG12_POSITION_X_COPY
    case 0xC01727: cpu.execute_instruction<0x8D>(0x004386, 3); return true;
    // src/overworld/refresh_map_at_position.asm:236 LDA @LOCAL03
    case 0xC0172A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/refresh_map_at_position.asm:237 STA BG12_POSITION_Y_COPY
    case 0xC0172C: cpu.execute_instruction<0x8D>(0x004388, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/refresh_map_at_position.asm:238 END_C_FUNCTION
    case 0xC0172F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/refresh_map_at_position.asm:238 END_C_FUNCTION
    case 0xC01730: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reload_hotspots.asm (source_named).
bool execute_overworld_reload_hotspots_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_hotspots.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC07213: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07215: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07216: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC07217: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC07217.
    case 0xC07219: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_hotspots.asm:6 END_STACK_VARS
    case 0xC0721A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:7 LDA #0
    case 0xC0721B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/reload_hotspots.asm:7 LDA #0
    // Overlapping static entry reached from 0xC0721B.
    case 0xC0721D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_hotspots.asm:8 STA @VIRTUAL02
    case 0xC0721E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:9 JMP @UNKNOWN3
    case 0xC07220: cpu.execute_instruction<0x4C>(0x0072C1, 3); return true;
    // src/overworld/reload_hotspots.asm:11 LDA @VIRTUAL02
    case 0xC07223: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:12 CLC
    case 0xC07225: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:13 ADC #.LOWORD(GAME_STATE)
    case 0xC07226: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/overworld/reload_hotspots.asm:13 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC07226.
    case 0xC07228: cpu.execute_instruction<0x97>(0x0000A8, 2); return true;
    // src/overworld/reload_hotspots.asm:14 TAY
    case 0xC07229: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC0722A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/reload_hotspots.asm:16 LDA __BSS_START__ + game_state::active_hotspot_modes,Y
    case 0xC0722C: cpu.execute_instruction<0xB9>(0x0000C8, 3); return true;
    // src/overworld/reload_hotspots.asm:17 STA @LOCAL00
    case 0xC0722F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/reload_hotspots.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC07231: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_hotspots.asm:19 AND #$00FF
    case 0xC07233: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_hotspots.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC07233.
    case 0xC07235: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/reload_hotspots.asm:20 BEQL @UNKNOWN2
    case 0xC07236: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/reload_hotspots.asm:20 BEQL @UNKNOWN2
    case 0xC07238: cpu.execute_instruction<0x4C>(0x0072BF, 3); return true;
    // src/overworld/reload_hotspots.asm:21 LDA @VIRTUAL02
    case 0xC0723B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0723D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC0723F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07240: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07242: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07243: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:22 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(active_hotspot)
    case 0xC07245: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:23 CLC
    case 0xC07246: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:24 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    case 0xC07247: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x005E3C, 3); return true;
    // src/overworld/reload_hotspots.asm:24 ADC #.LOWORD(ACTIVE_HOTSPOTS)
    // Overlapping static entry reached from 0xC07247.
    case 0xC07249: cpu.execute_instruction<0x5E>(0x00A9AA, 3); return true;
    // src/overworld/reload_hotspots.asm:25 TAX
    case 0xC0724A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0724B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x00F2FB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07249.
    case 0xC0724C: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0724B.
    case 0xC0724D: cpu.execute_instruction<0xF2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC0724E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0724D.
    case 0xC0724F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07250: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC0724F.
    case 0xC07251: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    // Overlapping static entry reached from 0xC07250.
    case 0xC07252: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/reload_hotspots.asm:26 LOADPTR MAP_HOTSPOTS, @VIRTUAL06
    case 0xC07253: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/reload_hotspots.asm:27 LDA __BSS_START__+game_state::active_hotspot_ids,Y
    case 0xC07255: cpu.execute_instruction<0xB9>(0x0000CA, 3); return true;
    // src/overworld/reload_hotspots.asm:28 AND #$00FF
    case 0xC07258: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_hotspots.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC07258.
    case 0xC0725A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0725B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0725C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:29 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0725D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:30 CLC
    case 0xC0725E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:31 ADC @VIRTUAL06
    case 0xC0725F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/reload_hotspots.asm:32 STA @VIRTUAL06
    case 0xC07261: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/reload_hotspots.asm:33 LDA @LOCAL00
    case 0xC07263: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/reload_hotspots.asm:34 AND #$00FF
    case 0xC07265: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_hotspots.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC07265.
    case 0xC07267: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/reload_hotspots.asm:35 STA __BSS_START__,X
    case 0xC07268: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0726B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0726D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0726F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/reload_hotspots.asm:36 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC07271: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/reload_hotspots.asm:37 LDA [@VIRTUAL0A]
    case 0xC07273: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07275: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07276: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:38 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07277: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:39 STA a:active_hotspot::x1,X
    case 0xC07278: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:40 LDY #predefined_hotspot::x2
    case 0xC0727B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/reload_hotspots.asm:40 LDY #predefined_hotspot::x2
    // Overlapping static entry reached from 0xC0727B.
    case 0xC0727D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/reload_hotspots.asm:41 LDA [@VIRTUAL06],Y
    case 0xC0727E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07280: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07281: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:42 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07282: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:43 STA a:active_hotspot::x2,X
    case 0xC07283: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/overworld/reload_hotspots.asm:44 LDY #predefined_hotspot::y1
    case 0xC07286: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:44 LDY #predefined_hotspot::y1
    // Overlapping static entry reached from 0xC07286.
    case 0xC07288: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/reload_hotspots.asm:45 LDA [@VIRTUAL06],Y
    case 0xC07289: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0728B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0728C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:46 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC0728D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:47 STA a:active_hotspot::y1,X
    case 0xC0728E: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/overworld/reload_hotspots.asm:48 LDY #predefined_hotspot::y2
    case 0xC07291: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/reload_hotspots.asm:48 LDY #predefined_hotspot::y2
    // Overlapping static entry reached from 0xC07291.
    case 0xC07293: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/reload_hotspots.asm:49 LDA [@VIRTUAL06],Y
    case 0xC07294: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07296: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07297: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:50 OPTIMIZED_MULT @VIRTUAL04, 8
    case 0xC07298: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:51 STA a:active_hotspot::y2,X
    case 0xC07299: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/overworld/reload_hotspots.asm:52 LDA @VIRTUAL02
    case 0xC0729C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:53 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0729E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/overworld/reload_hotspots.asm:53 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC0729F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:54 CLC
    case 0xC072A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:60 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    case 0xC072A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C1, 2); else cpu.execute_instruction<0x69>(0x0098C1, 3); return true;
    // src/overworld/reload_hotspots.asm:60 ADC #.LOWORD(GAME_STATE) + game_state::active_hotspot_pointers
    // Overlapping static entry reached from 0xC072A1.
    case 0xC072A3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:62 TAY
    case 0xC072A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072A5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072AA: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/reload_hotspots.asm:63 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC072AD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/reload_hotspots.asm:64 TXA
    case 0xC072AF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:65 CLC
    case 0xC072B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_hotspots.asm:66 ADC #active_hotspot::pointer
    case 0xC072B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000A, 2); else cpu.execute_instruction<0x69>(0x00000A, 3); return true;
    // src/overworld/reload_hotspots.asm:66 ADC #active_hotspot::pointer
    // Overlapping static entry reached from 0xC072B1.
    case 0xC072B3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/reload_hotspots.asm:67 TAY
    case 0xC072B4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072B7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072BA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/reload_hotspots.asm:68 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC072BC: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:70 INC @VIRTUAL02
    case 0xC072BF: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:72 LDA @VIRTUAL02
    case 0xC072C1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_hotspots.asm:73 CMP #2
    case 0xC072C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/reload_hotspots.asm:73 CMP #2
    // Overlapping static entry reached from 0xC072C3.
    case 0xC072C5: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC072C6: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC072C8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/reload_hotspots.asm:74 BCCL @UNKNOWN0
    case 0xC072CA: cpu.execute_instruction<0x4C>(0x007223, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_hotspots.asm:75 END_C_FUNCTION
    case 0xC072CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_hotspots.asm:75 END_C_FUNCTION
    case 0xC072CE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reload_map.asm (source_named).
bool execute_overworld_reload_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_map.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC018F3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC018F5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC018F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC018F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC018F7.
    case 0xC018F9: cpu.execute_instruction<0xFF>(0xFFA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_map.asm:7 END_STACK_VARS
    case 0xC018FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:8 LDA #.LOWORD(-1)
    case 0xC018FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/reload_map.asm:8 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC018FB.
    case 0xC018FD: cpu.execute_instruction<0xFF>(0x43708D, 4); return true;
    // src/overworld/reload_map.asm:9 STA LOADED_MAP_PALETTE
    case 0xC018FE: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // src/overworld/reload_map.asm:10 STA LOADED_MAP_TILE_COMBO
    case 0xC01901: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/overworld/reload_map.asm:11 LDA SCREEN_X_PIXELS
    case 0xC01904: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/overworld/reload_map.asm:12 AND #$FFF8
    case 0xC01907: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/overworld/reload_map.asm:12 AND #$FFF8
    // Overlapping static entry reached from 0xC01907.
    case 0xC01909: cpu.execute_instruction<0xFF>(0x43808D, 4); return true;
    // src/overworld/reload_map.asm:13 STA SCREEN_X_PIXELS
    case 0xC0190A: cpu.execute_instruction<0x8D>(0x004380, 3); return true;
    // src/overworld/reload_map.asm:14 LDA SCREEN_Y_PIXELS
    case 0xC0190D: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/overworld/reload_map.asm:15 AND #$FFF8
    case 0xC01910: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F8, 2); else cpu.execute_instruction<0x29>(0x00FFF8, 3); return true;
    // src/overworld/reload_map.asm:15 AND #$FFF8
    // Overlapping static entry reached from 0xC01910.
    case 0xC01912: cpu.execute_instruction<0xFF>(0x43828D, 4); return true;
    // src/overworld/reload_map.asm:16 STA SCREEN_Y_PIXELS
    case 0xC01913: cpu.execute_instruction<0x8D>(0x004382, 3); return true;
    // src/overworld/reload_map.asm:17 JSL UNKNOWN_C08726
    case 0xC01916: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/overworld/reload_map.asm:18 LDA #.LOWORD(-1)
    case 0xC0191A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/reload_map.asm:18 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0191A.
    case 0xC0191C: cpu.execute_instruction<0xFF>(0x5DD48D, 4); return true;
    // src/overworld/reload_map.asm:19 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC0191D: cpu.execute_instruction<0x8D>(0x005DD4, 3); return true;
    // src/overworld/reload_map.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    case 0xC01920: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000077, 2); else cpu.execute_instruction<0xA9>(0x009877, 3); return true;
    // src/overworld/reload_map.asm:20 LDA #.LOWORD(GAME_STATE) + game_state::leader_x_coord
    // Overlapping static entry reached from 0xC01920.
    case 0xC01922: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:21 STA @VIRTUAL04
    case 0xC01923: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:22 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    case 0xC01925: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00987B, 3); return true;
    // src/overworld/reload_map.asm:22 LDA #.LOWORD(GAME_STATE) + game_state::leader_y_coord
    // Overlapping static entry reached from 0xC01925.
    case 0xC01927: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:23 STA @VIRTUAL02
    case 0xC01928: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map.asm:24 LDX @VIRTUAL02
    case 0xC0192A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/reload_map.asm:25 LDA __BSS_START__,X
    case 0xC0192C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:26 TAX
    case 0xC0192F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:27 STX @LOCAL01
    case 0xC01930: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/overworld/reload_map.asm:28 LDX @VIRTUAL04
    case 0xC01932: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:29 LDA __BSS_START__,X
    case 0xC01934: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:30 LDX @LOCAL01
    case 0xC01937: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/reload_map.asm:31 JSL UNKNOWN_C068F4
    case 0xC01939: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/overworld/reload_map.asm:32 LDA #$9
    case 0xC0193D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/overworld/reload_map.asm:32 LDA #$9
    // Overlapping static entry reached from 0xC0193D.
    case 0xC0193F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:33 JSL UNKNOWN_C08D79
    case 0xC01940: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/overworld/reload_map.asm:34 LDY #$0000
    case 0xC01944: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:34 LDY #$0000
    // Overlapping static entry reached from 0xC01944.
    case 0xC01946: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/reload_map.asm:35 LDX #$3800
    case 0xC01947: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x003800, 3); return true;
    // src/overworld/reload_map.asm:35 LDX #$3800
    // Overlapping static entry reached from 0xC01947.
    case 0xC01949: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:36 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC0194A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/reload_map.asm:36 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC0194A.
    case 0xC0194C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:37 JSL SET_BG1_VRAM_LOCATION
    case 0xC0194D: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/overworld/reload_map.asm:38 LDY #$2000
    case 0xC01951: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // src/overworld/reload_map.asm:38 LDY #$2000
    // Overlapping static entry reached from 0xC01951.
    case 0xC01953: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // src/overworld/reload_map.asm:39 LDX #$5800
    case 0xC01954: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/overworld/reload_map.asm:39 LDX #$5800
    // Overlapping static entry reached from 0xC01954.
    case 0xC01956: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:40 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    case 0xC01957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/reload_map.asm:40 LDA #BG_TILEMAP_SIZE::HORIZONTAL
    // Overlapping static entry reached from 0xC01957.
    case 0xC01959: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:41 JSL SET_BG2_VRAM_LOCATION
    case 0xC0195A: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
    // src/overworld/reload_map.asm:42 LDY #$6000
    case 0xC0195E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/overworld/reload_map.asm:42 LDY #$6000
    // Overlapping static entry reached from 0xC0195E.
    case 0xC01960: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:43 LDX #$7C00
    case 0xC01961: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/overworld/reload_map.asm:43 LDX #$7C00
    // Overlapping static entry reached from 0xC01961.
    case 0xC01963: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/overworld/reload_map.asm:44 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC01964: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:44 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC01964.
    case 0xC01966: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:45 JSL SET_BG3_VRAM_LOCATION
    case 0xC01967: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/overworld/reload_map.asm:46 LDA #$62
    case 0xC0196B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/overworld/reload_map.asm:46 LDA #$62
    // Overlapping static entry reached from 0xC0196B.
    case 0xC0196D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:47 JSL SET_OAM_SIZE
    case 0xC0196E: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/overworld/reload_map.asm:48 LDX @VIRTUAL02
    case 0xC01972: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/reload_map.asm:49 LDA __BSS_START__,X
    case 0xC01974: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:50 TAX
    case 0xC01977: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:51 STX @LOCAL00
    case 0xC01978: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/reload_map.asm:52 LDX @VIRTUAL04
    case 0xC0197A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:53 LDA __BSS_START__,X
    case 0xC0197C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/reload_map.asm:54 LDX @LOCAL00
    case 0xC0197F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/reload_map.asm:55 JSL RELOAD_MAP_AT_POSITION
    case 0xC01981: cpu.execute_instruction<0x22>(0xC012ED, 4); return true;
    // src/overworld/reload_map.asm:56 LDA GAME_STATE+game_state::walking_style
    case 0xC01985: cpu.execute_instruction<0xAD>(0x009883, 3); return true;
    // src/overworld/reload_map.asm:57 CMP #WALKING_STYLE::BICYCLE
    case 0xC01988: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/reload_map.asm:57 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC01988.
    case 0xC0198A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/reload_map.asm:58 BNE @UNKNOWN0
    case 0xC0198B: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/overworld/reload_map.asm:59 LDA #MUSIC::BICYCLE
    case 0xC0198D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/overworld/reload_map.asm:59 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC0198D.
    case 0xC0198F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/reload_map.asm:60 JSL CHANGE_MUSIC
    case 0xC01990: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/overworld/reload_map.asm:61 BRA @UNKNOWN1
    case 0xC01994: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:63 JSL UNKNOWN_C069AF
    case 0xC01996: cpu.execute_instruction<0x22>(0xC069AF, 4); return true;
    // src/overworld/reload_map.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC0199A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/reload_map.asm:66 LDA #$17
    case 0xC0199C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    case 0xC0199E: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0199C.
    case 0xC0199F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/reload_map.asm:67 STA TM_MIRROR
    // Overlapping static entry reached from 0xC0199F.
    case 0xC019A0: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/reload_map.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC019A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map.asm:69 LDA DEBUG
    case 0xC019A3: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/overworld/reload_map.asm:70 BEQ @UNKNOWN2
    case 0xC019A6: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/reload_map.asm:71 JSL UNKNOWN_EFD9F3
    case 0xC019A8: cpu.execute_instruction<0x22>(0xEFD9F3, 4); return true;
    // src/overworld/reload_map.asm:73 JSL UNKNOWN_C08744
    case 0xC019AC: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_map.asm:74 END_C_FUNCTION
    case 0xC019B0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_map.asm:74 END_C_FUNCTION
    case 0xC019B1: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reload_map_at_position.asm (source_named).
bool execute_overworld_reload_map_at_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/reload_map_at_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC012ED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC012EF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC012F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC012F1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC012F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC012F2.
    case 0xC012F4: cpu.execute_instruction<0xFF>(0x8D685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC012F5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/reload_map_at_position.asm:11 END_STACK_VARS
    case 0xC012F6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:12 STA SCREEN_X_PIXELS
    case 0xC012F7: cpu.execute_instruction<0x8D>(0x004380, 3); return true;
    // src/overworld/reload_map_at_position.asm:12 STA SCREEN_X_PIXELS
    // Overlapping static entry reached from 0xC012F4.
    case 0xC012F8: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/overworld/reload_map_at_position.asm:13 STA SCREEN_X_PIXELS_COPY
    case 0xC012FA: cpu.execute_instruction<0x8D>(0x00437C, 3); return true;
    // src/overworld/reload_map_at_position.asm:14 STX SCREEN_Y_PIXELS
    case 0xC012FD: cpu.execute_instruction<0x8E>(0x004382, 3); return true;
    // src/overworld/reload_map_at_position.asm:15 STX SCREEN_Y_PIXELS_COPY
    case 0xC01300: cpu.execute_instruction<0x8E>(0x00437E, 3); return true;
    // src/overworld/reload_map_at_position.asm:16 LSR
    case 0xC01303: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:17 LSR
    case 0xC01304: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:18 LSR
    case 0xC01305: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:19 TAY
    case 0xC01306: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:20 STY @LOCAL03
    case 0xC01307: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:21 TXA
    case 0xC01309: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:22 LSR
    case 0xC0130A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:23 LSR
    case 0xC0130B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:24 LSR
    case 0xC0130C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:25 STA @VIRTUAL02
    case 0xC0130D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:26 LDA #.LOWORD(-1)
    case 0xC0130F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/reload_map_at_position.asm:26 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC0130F.
    case 0xC01311: cpu.execute_instruction<0xFF>(0x43708D, 4); return true;
    // src/overworld/reload_map_at_position.asm:27 STA LOADED_MAP_PALETTE
    case 0xC01312: cpu.execute_instruction<0x8D>(0x004370, 3); return true;
    // src/overworld/reload_map_at_position.asm:28 STA LOADED_MAP_TILE_COMBO
    case 0xC01315: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/overworld/reload_map_at_position.asm:29 LDA @VIRTUAL02
    case 0xC01318: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:30 LSR
    case 0xC0131A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:31 LSR
    case 0xC0131B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:32 LSR
    case 0xC0131C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:33 LSR
    case 0xC0131D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:34 TAX
    case 0xC0131E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:35 TYA
    case 0xC0131F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:36 LSR
    case 0xC01320: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:37 LSR
    case 0xC01321: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:38 LSR
    case 0xC01322: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:39 LSR
    case 0xC01323: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:40 LSR
    case 0xC01324: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:41 JSR LOAD_MAP_AT_SECTOR
    case 0xC01325: cpu.execute_instruction<0x20>(0x0008C3, 3); return true;
    // src/overworld/reload_map_at_position.asm:42 LDY @LOCAL03
    case 0xC01328: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:43 TYA
    case 0xC0132A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:44 SEC
    case 0xC0132B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:45 SBC #16
    case 0xC0132C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000010, 2); else cpu.execute_instruction<0xE9>(0x000010, 3); return true;
    // src/overworld/reload_map_at_position.asm:45 SBC #16
    // Overlapping static entry reached from 0xC0132C.
    case 0xC0132E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:46 STA @LOCAL02
    case 0xC0132F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/reload_map_at_position.asm:47 LDA @VIRTUAL02
    case 0xC01331: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:48 SEC
    case 0xC01333: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:49 SBC #14
    case 0xC01334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000E, 2); else cpu.execute_instruction<0xE9>(0x00000E, 3); return true;
    // src/overworld/reload_map_at_position.asm:49 SBC #14
    // Overlapping static entry reached from 0xC01334.
    case 0xC01336: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:50 STA @LOCAL01
    case 0xC01337: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/reload_map_at_position.asm:51 TYA
    case 0xC01339: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:52 SEC
    case 0xC0133A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:53 SBC #32
    case 0xC0133B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/reload_map_at_position.asm:53 SBC #32
    // Overlapping static entry reached from 0xC0133B.
    case 0xC0133D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:54 STA @VIRTUAL04
    case 0xC0133E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/reload_map_at_position.asm:55 LDA @VIRTUAL02
    case 0xC01340: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:56 SEC
    case 0xC01342: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:57 SBC #32
    case 0xC01343: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000020, 2); else cpu.execute_instruction<0xE9>(0x000020, 3); return true;
    // src/overworld/reload_map_at_position.asm:57 SBC #32
    // Overlapping static entry reached from 0xC01343.
    case 0xC01345: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/reload_map_at_position.asm:58 STA @VIRTUAL02
    case 0xC01346: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:59 STA @LOCAL00
    case 0xC01348: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/reload_map_at_position.asm:60 LDX #0
    case 0xC0134A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/reload_map_at_position.asm:60 LDX #0
    // Overlapping static entry reached from 0xC0134A.
    case 0xC0134C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/reload_map_at_position.asm:61 BRA @UNKNOWN1
    case 0xC0134D: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/reload_map_at_position.asm:63 SEP #PROC_FLAGS::ACCUM8
    case 0xC0134F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:64 LDA #>-1
    case 0xC01351: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x009DFF, 3); return true;
    // src/overworld/reload_map_at_position.asm:65 STA LOADED_COLUMNS_Y,X
    case 0xC01353: cpu.execute_instruction<0x9D>(0x0043C0, 3); return true;
    // src/overworld/reload_map_at_position.asm:65 STA LOADED_COLUMNS_Y,X
    // Overlapping static entry reached from 0xC01351.
    case 0xC01354: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000043, 2); else cpu.execute_instruction<0xC0>(0x009D43, 3); return true;
    // src/overworld/reload_map_at_position.asm:66 STA LOADED_COLUMNS_X,X
    case 0xC01356: cpu.execute_instruction<0x9D>(0x0043B0, 3); return true;
    // src/overworld/reload_map_at_position.asm:66 STA LOADED_COLUMNS_X,X
    // Overlapping static entry reached from 0xC01354.
    case 0xC01357: cpu.execute_instruction<0xB0>(0x000043, 2); return true;
    // src/overworld/reload_map_at_position.asm:67 STA LOADED_ROWS_Y,X
    case 0xC01359: cpu.execute_instruction<0x9D>(0x0043A0, 3); return true;
    // src/overworld/reload_map_at_position.asm:68 STA LOADED_ROWS_X,X
    case 0xC0135C: cpu.execute_instruction<0x9D>(0x004390, 3); return true;
    // src/overworld/reload_map_at_position.asm:69 INX
    case 0xC0135F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:71 CPX #16
    case 0xC01360: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/reload_map_at_position.asm:71 CPX #16
    // Overlapping static entry reached from 0xC01360.
    case 0xC01362: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/reload_map_at_position.asm:72 BCC @UNKNOWN0
    case 0xC01363: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/reload_map_at_position.asm:73 LDY #0
    case 0xC01365: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/reload_map_at_position.asm:73 LDY #0
    // Overlapping static entry reached from 0xC01365.
    case 0xC01367: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/reload_map_at_position.asm:74 STY @LOCAL03
    case 0xC01368: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:75 BRA @UNKNOWN3
    case 0xC0136A: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/reload_map_at_position.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC0136C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:78 LDA @LOCAL00
    case 0xC0136E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/reload_map_at_position.asm:79 STA @VIRTUAL02
    case 0xC01370: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:80 STY @VIRTUAL02
    case 0xC01372: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:81 CLC
    case 0xC01374: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:82 ADC @VIRTUAL02
    case 0xC01375: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:83 TAX
    case 0xC01377: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:84 LDA @VIRTUAL04
    case 0xC01378: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/reload_map_at_position.asm:85 JSR LOAD_MAP_ROW
    case 0xC0137A: cpu.execute_instruction<0x20>(0x000AC5, 3); return true;
    // src/overworld/reload_map_at_position.asm:86 LDY @LOCAL03
    case 0xC0137D: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:87 INY
    case 0xC0137F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:88 STY @LOCAL03
    case 0xC01380: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:90 CPY #60
    case 0xC01382: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/reload_map_at_position.asm:90 CPY #60
    // Overlapping static entry reached from 0xC01382.
    case 0xC01384: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/reload_map_at_position.asm:91 BCC @UNKNOWN2
    case 0xC01385: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/reload_map_at_position.asm:92 LDY #0
    case 0xC01387: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/reload_map_at_position.asm:92 LDY #0
    // Overlapping static entry reached from 0xC01387.
    case 0xC01389: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/reload_map_at_position.asm:93 STY @LOCAL03
    case 0xC0138A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:94 BRA @UNKNOWN5
    case 0xC0138C: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/overworld/reload_map_at_position.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC0138E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:97 LDA @LOCAL00
    case 0xC01390: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/reload_map_at_position.asm:98 STA @VIRTUAL02
    case 0xC01392: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:99 STY @VIRTUAL02
    case 0xC01394: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:100 CLC
    case 0xC01396: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:101 ADC @VIRTUAL02
    case 0xC01397: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/reload_map_at_position.asm:102 TAX
    case 0xC01399: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:103 LDA @VIRTUAL04
    case 0xC0139A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/reload_map_at_position.asm:104 JSR LOAD_COLLISION_ROW
    case 0xC0139C: cpu.execute_instruction<0x20>(0x000CF3, 3); return true;
    // src/overworld/reload_map_at_position.asm:105 LDY @LOCAL03
    case 0xC0139F: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:106 INY
    case 0xC013A1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:107 STY @LOCAL03
    case 0xC013A2: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:109 CPY #60
    case 0xC013A4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00003C, 2); else cpu.execute_instruction<0xC0>(0x00003C, 3); return true;
    // src/overworld/reload_map_at_position.asm:109 CPY #60
    // Overlapping static entry reached from 0xC013A4.
    case 0xC013A6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/reload_map_at_position.asm:110 BCC @UNKNOWN4
    case 0xC013A7: cpu.execute_instruction<0x90>(0x0000E5, 2); return true;
    // src/overworld/reload_map_at_position.asm:111 LDY #.LOWORD(-1)
    case 0xC013A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/overworld/reload_map_at_position.asm:111 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC013A9.
    case 0xC013AB: cpu.execute_instruction<0xFF>(0x801484, 4); return true;
    // src/overworld/reload_map_at_position.asm:112 STY @LOCAL03
    case 0xC013AC: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:113 BRA @UNKNOWN7
    case 0xC013AE: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/reload_map_at_position.asm:113 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC013AB.
    case 0xC013AF: cpu.execute_instruction<0x11>(0x0000C2, 2); return true;
    // src/overworld/reload_map_at_position.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC013B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:115 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC013AF.
    case 0xC013B1: cpu.execute_instruction<0x20>(0x001898, 3); return true;
    // src/overworld/reload_map_at_position.asm:116 TYA
    case 0xC013B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:117 CLC
    case 0xC013B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:118 ADC @LOCAL01
    case 0xC013B4: cpu.execute_instruction<0x65>(0x000010, 2); return true;
    // src/overworld/reload_map_at_position.asm:119 TAX
    case 0xC013B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:120 LDA @LOCAL02
    case 0xC013B7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/reload_map_at_position.asm:121 JSR UNKNOWN_C00E16
    case 0xC013B9: cpu.execute_instruction<0x20>(0x000E16, 3); return true;
    // src/overworld/reload_map_at_position.asm:122 LDY @LOCAL03
    case 0xC013BC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:123 INY
    case 0xC013BE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:124 STY @LOCAL03
    case 0xC013BF: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/reload_map_at_position.asm:126 CPY #31
    case 0xC013C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001F, 2); else cpu.execute_instruction<0xC0>(0x00001F, 3); return true;
    // src/overworld/reload_map_at_position.asm:126 CPY #31
    // Overlapping static entry reached from 0xC013C1.
    case 0xC013C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/reload_map_at_position.asm:127 BNE @UNKNOWN6
    case 0xC013C4: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/overworld/reload_map_at_position.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC013C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/reload_map_at_position.asm:130 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC013C8: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/reload_map_at_position.asm:131 AND #$00FF
    case 0xC013CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/reload_map_at_position.asm:131 AND #$00FF
    // Overlapping static entry reached from 0xC013CB.
    case 0xC013CD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/reload_map_at_position.asm:132 BNE @UNKNOWN8
    case 0xC013CE: cpu.execute_instruction<0xD0>(0x0000F6, 2); return true;
    // src/overworld/reload_map_at_position.asm:133 LDA SCREEN_X_PIXELS
    case 0xC013D0: cpu.execute_instruction<0xAD>(0x004380, 3); return true;
    // src/overworld/reload_map_at_position.asm:134 SEC
    case 0xC013D3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:135 SBC #128
    case 0xC013D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/overworld/reload_map_at_position.asm:135 SBC #128
    // Overlapping static entry reached from 0xC013D4.
    case 0xC013D6: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/reload_map_at_position.asm:136 STA BG2_X_POS
    case 0xC013D7: cpu.execute_instruction<0x8D>(0x000035, 3); return true;
    // src/overworld/reload_map_at_position.asm:137 STA BG1_X_POS
    case 0xC013DA: cpu.execute_instruction<0x8D>(0x000031, 3); return true;
    // src/overworld/reload_map_at_position.asm:138 LDA SCREEN_Y_PIXELS
    case 0xC013DD: cpu.execute_instruction<0xAD>(0x004382, 3); return true;
    // src/overworld/reload_map_at_position.asm:139 SEC
    case 0xC013E0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/reload_map_at_position.asm:140 SBC #112
    case 0xC013E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000070, 2); else cpu.execute_instruction<0xE9>(0x000070, 3); return true;
    // src/overworld/reload_map_at_position.asm:140 SBC #112
    // Overlapping static entry reached from 0xC013E1.
    case 0xC013E3: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/reload_map_at_position.asm:141 STA BG2_Y_POS
    case 0xC013E4: cpu.execute_instruction<0x8D>(0x000037, 3); return true;
    // src/overworld/reload_map_at_position.asm:142 STA BG1_Y_POS
    case 0xC013E7: cpu.execute_instruction<0x8D>(0x000033, 3); return true;
    // src/overworld/reload_map_at_position.asm:143 LDA @LOCAL02
    case 0xC013EA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/reload_map_at_position.asm:144 STA SCREEN_LEFT_X
    case 0xC013EC: cpu.execute_instruction<0x8D>(0x004374, 3); return true;
    // src/overworld/reload_map_at_position.asm:145 LDA @LOCAL01
    case 0xC013EF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/reload_map_at_position.asm:146 STA SCREEN_TOP_Y
    case 0xC013F1: cpu.execute_instruction<0x8D>(0x004376, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/reload_map_at_position.asm:147 END_C_FUNCTION
    case 0xC013F4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/reload_map_at_position.asm:147 END_C_FUNCTION
    case 0xC013F5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/replace_block.asm (source_named).
bool execute_overworld_replace_block_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/replace_block.asm:3 BEGIN_C_FUNCTION
    case 0xC0067E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00680: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00681: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00682: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00683: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC00683.
    case 0xC00685: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00686: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/replace_block.asm:8 END_STACK_VARS
    case 0xC00687: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:9 TXY
    case 0xC00688: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:10 STA @LOCAL00
    case 0xC00689: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0068B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC0068B.
    case 0xC0068D: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC0068E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC00690: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC00690.
    case 0xC00692: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/replace_block.asm:11 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC00693: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/replace_block.asm:12 LDA @LOCAL00
    case 0xC00695: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00697: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00698: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC00699: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0069A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/replace_block.asm:13 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC0069B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0069C: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC0069E: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006A0: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/replace_block.asm:14 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC006A2: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/overworld/replace_block.asm:15 CLC
    case 0xC006A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:16 ADC @VIRTUAL0A
    case 0xC006A5: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:17 STA @VIRTUAL0A
    case 0xC006A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:17 STA @VIRTUAL0A
    // Overlapping static entry reached from 0xC006FD.
    case 0xC006A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:18 TYA
    case 0xC006A9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/overworld/replace_block.asm:19 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC006AE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:20 CLC
    case 0xC006AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:21 ADC @VIRTUAL06
    case 0xC006B0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:22 STA @VIRTUAL06
    case 0xC006B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:23 LDX #0
    case 0xC006B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/replace_block.asm:23 LDX #0
    // Overlapping static entry reached from 0xC006B4.
    case 0xC006B6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/overworld/replace_block.asm:24 BRA @UNKNOWN1
    case 0xC006B7: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/replace_block.asm:26 LDA [@VIRTUAL06]
    case 0xC006B9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:27 STA [@VIRTUAL0A]
    case 0xC006BB: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:28 INC @VIRTUAL06
    case 0xC006BD: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:29 INC @VIRTUAL06
    case 0xC006BF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:30 INC @VIRTUAL0A
    case 0xC006C1: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:31 INC @VIRTUAL0A
    case 0xC006C3: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:32 INX
    case 0xC006C5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:34 CPX #16
    case 0xC006C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/overworld/replace_block.asm:34 CPX #16
    // Overlapping static entry reached from 0xC006C6.
    case 0xC006C8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/replace_block.asm:35 BCC @UNKNOWN0
    case 0xC006C9: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00F800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC006CB.
    case 0xC006CD: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006CE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC006D0.
    case 0xC006D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/replace_block.asm:36 LOADPTR TILE_COLLISION_BUFFER, @VIRTUAL0A
    case 0xC006D3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/replace_block.asm:37 LDA @LOCAL00
    case 0xC006D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/replace_block.asm:38 ASL
    case 0xC006D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006D8: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006DA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006DC: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/replace_block.asm:39 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC006DE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/replace_block.asm:40 CLC
    case 0xC006E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:41 ADC @VIRTUAL06
    case 0xC006E1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:42 STA @VIRTUAL06
    case 0xC006E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/replace_block.asm:43 TYA
    case 0xC006E5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:44 ASL
    case 0xC006E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:45 CLC
    case 0xC006E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/replace_block.asm:46 ADC @VIRTUAL0A
    case 0xC006E8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:47 STA @VIRTUAL0A
    case 0xC006EA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:48 LDA [@VIRTUAL0A]
    case 0xC006EC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/replace_block.asm:49 STA [@VIRTUAL06]
    case 0xC006EE: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/replace_block.asm:50 END_C_FUNCTION
    case 0xC006F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/replace_block.asm:50 END_C_FUNCTION
    case 0xC006F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/reset_mushroomized_walking.asm (source_named).
bool execute_overworld_reset_mushroomized_walking_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/reset_mushroomized_walking.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC02C83: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/reset_mushroomized_walking.asm:4 STZ MUSHROOMIZED_WALKING_FLAG
    case 0xC02C85: cpu.execute_instruction<0x9C>(0x005DA0, 3); return true;
    // src/overworld/reset_mushroomized_walking.asm:5 RTL
    case 0xC02C88: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/schedule_overworld_task.asm (source_named).
bool execute_overworld_schedule_overworld_task_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/schedule_overworld_task.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DBE6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBE8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBE9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DBEB.
    case 0xC0DBED: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/schedule_overworld_task.asm:10 END_STACK_VARS
    case 0xC0DBEF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:11 TAY
    case 0xC0DBF0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF5: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:12 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC0DBF7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    case 0xC0DBF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x009E3C, 3); return true;
    // src/overworld/schedule_overworld_task.asm:13 LDA #.LOWORD(OVERWORLD_TASKS)
    // Overlapping static entry reached from 0xC0DBF9.
    case 0xC0DBFB: cpu.execute_instruction<0x9E>(0x001085, 3); return true;
    // src/overworld/schedule_overworld_task.asm:14 STA @LOCAL01
    case 0xC0DBFC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    case 0xC0DBFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/schedule_overworld_task.asm:15 LDX #0
    // Overlapping static entry reached from 0xC0DBFE.
    case 0xC0DC00: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/schedule_overworld_task.asm:16 STX @LOCAL00
    case 0xC0DC01: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:17 BRA @UNKNOWN1
    case 0xC0DC03: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/overworld/schedule_overworld_task.asm:19 TAX
    case 0xC0DC05: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:20 LDA a:overworld_task::frames_left,X
    case 0xC0DC06: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/schedule_overworld_task.asm:21 BEQ @UNKNOWN2
    case 0xC0DC09: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/overworld/schedule_overworld_task.asm:22 LDA @LOCAL01
    case 0xC0DC0B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:23 CLC
    case 0xC0DC0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    case 0xC0DC0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/overworld/schedule_overworld_task.asm:24 ADC #.SIZEOF(overworld_task)
    // Overlapping static entry reached from 0xC0DC0E.
    case 0xC0DC10: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/schedule_overworld_task.asm:25 STA @LOCAL01
    case 0xC0DC11: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:26 LDX @LOCAL00
    case 0xC0DC13: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:27 INX
    case 0xC0DC15: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:28 STX @LOCAL00
    case 0xC0DC16: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    case 0xC0DC18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/overworld/schedule_overworld_task.asm:30 CPX #4
    // Overlapping static entry reached from 0xC0DC18.
    case 0xC0DC1A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/schedule_overworld_task.asm:31 BCC @UNKNOWN0
    case 0xC0DC1B: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/overworld/schedule_overworld_task.asm:33 LDA @LOCAL01
    case 0xC0DC1D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:34 TAX
    case 0xC0DC1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:35 TYA
    case 0xC0DC20: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:36 STA a:overworld_task::frames_left,X
    case 0xC0DC21: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/schedule_overworld_task.asm:37 LDA @LOCAL01
    case 0xC0DC24: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/schedule_overworld_task.asm:38 TAY
    case 0xC0DC26: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:39 INY ;overworld_task::function
    case 0xC0DC27: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/schedule_overworld_task.asm:40 INY
    case 0xC0DC28: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC29: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC2B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC2E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/schedule_overworld_task.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC0DC30: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/schedule_overworld_task.asm:42 LDX @LOCAL00
    case 0xC0DC33: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/overworld/schedule_overworld_task.asm:43 TXA
    case 0xC0DC35: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DC36: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/schedule_overworld_task.asm:44 END_C_FUNCTION
    case 0xC0DC37: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/screen_transition.asm (source_named).
bool execute_overworld_screen_transition_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/screen_transition.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06662: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06664: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06665: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06666: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC06667: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DF, 2); else cpu.execute_instruction<0x69>(0x00FFDF, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC06667.
    case 0xC06669: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC0666A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/screen_transition.asm:14 END_STACK_VARS
    case 0xC0666B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:15 TXY
    case 0xC0666C: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:16 STY @LOCAL06
    case 0xC0666D: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/overworld/screen_transition.asm:17 STA @LOCAL05
    case 0xC0666F: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001400, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06671.
    case 0xC06673: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06674: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06673.
    case 0xC06675: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0000D0, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06675.
    case 0xC06677: cpu.execute_instruction<0xD0>(0x000000, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC06676.
    case 0xC06678: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:18 MOVE_INT_CONSTANT SCREEN_TRANSITION_CONFIG_TABLE, @VIRTUAL06
    case 0xC06679: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/screen_transition.asm:19 LDA @LOCAL05
    case 0xC0667B: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC0667D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC0667F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06680: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06682: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/screen_transition.asm:20 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(screen_transition_config)
    case 0xC06683: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:21 CLC
    case 0xC06684: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:22 ADC @VIRTUAL06
    case 0xC06685: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:23 STA @VIRTUAL06
    case 0xC06687: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:24 STA @LOCAL04
    case 0xC06689: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/overworld/screen_transition.asm:25 LDA @VIRTUAL06+2
    case 0xC0668B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/screen_transition.asm:26 STA @LOCAL04+2
    case 0xC0668D: cpu.execute_instruction<0x85>(0x00001B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC0668F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06691: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06693: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:27 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC06695: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/screen_transition.asm:28 LDA [@VIRTUAL0A] ;screen_transition_config::duration
    case 0xC06697: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/screen_transition.asm:29 AND #$00FF
    case 0xC06699: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC06699.
    case 0xC0669B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:30 STA @VIRTUAL02
    case 0xC0669C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:31 CMP #>-1
    case 0xC0669E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:31 CMP #>-1
    // Overlapping static entry reached from 0xC0669E.
    case 0xC066A0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/screen_transition.asm:32 BNE @NOT_MAX_DURATION
    case 0xC066A1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/screen_transition.asm:33 LDA #900
    case 0xC066A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x000384, 3); return true;
    // src/overworld/screen_transition.asm:33 LDA #900
    // Overlapping static entry reached from 0xC066A3.
    case 0xC066A5: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    case 0xC066A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:34 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC066A5.
    case 0xC066A7: cpu.execute_instruction<0x02>(0x0000E2, 2); return true;
    // src/overworld/screen_transition.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC066A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    case 0xC066AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/screen_transition.asm:37 LDY #screen_transition_config::direction
    // Overlapping static entry reached from 0xC066AA.
    case 0xC066AC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:38 LDA [@VIRTUAL06],Y
    case 0xC066AD: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC066AF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:40 AND #$00FF
    case 0xC066B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC066B1.
    case 0xC066B3: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/overworld/screen_transition.asm:41 ASL
    case 0xC066B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:42 ASL
    case 0xC066B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:43 TAX
    case 0xC066B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    case 0xC066B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/overworld/screen_transition.asm:44 LDY #screen_transition_config::unknown5
    // Overlapping static entry reached from 0xC066B7.
    case 0xC066B9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:45 LDA [@VIRTUAL06],Y
    case 0xC066BA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:46 JSL UNKNOWN_C42631
    case 0xC066BC: cpu.execute_instruction<0x22>(0xC42631, 4); return true;
    // src/overworld/screen_transition.asm:47 LDY @LOCAL06
    case 0xC066C0: cpu.execute_instruction<0xA4>(0x00001F, 2); return true;
    // src/overworld/screen_transition.asm:48 CPY #1
    case 0xC066C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000001, 2); else cpu.execute_instruction<0xC0>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:48 CPY #1
    // Overlapping static entry reached from 0xC066C2.
    case 0xC066C4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC066C5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/screen_transition.asm:49 BNEL @UNKNOWN10
    case 0xC066C7: cpu.execute_instruction<0x4C>(0x0067D2, 3); return true;
    // src/overworld/screen_transition.asm:50 JSL UNKNOWN_C0943C
    case 0xC066CA: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/overworld/screen_transition.asm:51 LDA #2
    case 0xC066CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/screen_transition.asm:51 LDA #2
    // Overlapping static entry reached from 0xC066CE.
    case 0xC066D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:52 JSL UNKNOWN_C0DD2C
    case 0xC066D1: cpu.execute_instruction<0x22>(0xC0DD2C, 4); return true;
    // src/overworld/screen_transition.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC066D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    case 0xC066D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:54 LDY #screen_transition_config::animation_id
    // Overlapping static entry reached from 0xC066D7.
    case 0xC066D9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:55 LDA [@VIRTUAL06],Y
    case 0xC066DA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:56 STA @LOCAL03
    case 0xC066DC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:57 REP #PROC_FLAGS::ACCUM8
    case 0xC066DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:58 AND #$00FF
    case 0xC066E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC066E0.
    case 0xC066E2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:59 BEQ @UNKNOWN2
    case 0xC066E3: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC066E5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    case 0xC066E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/screen_transition.asm:61 LDY #screen_transition_config::animation_flags
    // Overlapping static entry reached from 0xC066E7.
    case 0xC066E9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:62 LDA [@VIRTUAL06],Y
    case 0xC066EA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:63 REP #PROC_FLAGS::ACCUM8
    case 0xC066EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:64 AND #$00FF
    case 0xC066EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC066EE.
    case 0xC066F0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/screen_transition.asm:65 TAX
    case 0xC066F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:66 INX
    case 0xC066F2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:67 INX
    case 0xC066F3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:68 LDA @LOCAL03
    case 0xC066F4: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:69 AND #$00FF
    case 0xC066F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC066F6.
    case 0xC066F8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:70 JSL UNKNOWN_C4A67E
    case 0xC066F9: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC066FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC066FD.
    case 0xC066FF: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06700: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06702: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06703: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06705: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06706: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/overworld/screen_transition.asm:72 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC06708: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/overworld/screen_transition.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC0670A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0670C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC0670E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC06710: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:74 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC06712: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    case 0xC06714: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/screen_transition.asm:75 LDA #^__BSS_START__
    // Overlapping static entry reached from 0xC06714.
    case 0xC06716: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:76 STA @LOCAL01+2
    case 0xC06717: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC06719: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0671B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0671D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:81 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC0671F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06721: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06723: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06725: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC06727: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC06729: cpu.execute_instruction<0xA5>(0x000019, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0672B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0672D: cpu.execute_instruction<0xA5>(0x00001B, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/screen_transition.asm:84 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC0672F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/screen_transition.asm:85 SEP #PROC_FLAGS::ACCUM8
    case 0xC06731: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    case 0xC06733: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/screen_transition.asm:86 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06733.
    case 0xC06735: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:87 LDA [@VIRTUAL06],Y
    case 0xC06736: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC06738: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:89 AND #$00FF
    case 0xC0673A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC0673A.
    case 0xC0673C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:90 JSL UNKNOWN_C4954C
    case 0xC0673D: cpu.execute_instruction<0x22>(0xC4954C, 4); return true;
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    case 0xC06741: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/overworld/screen_transition.asm:91 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06741.
    case 0xC06743: cpu.execute_instruction<0xFF>(0x2202A5, 4); return true;
    // src/overworld/screen_transition.asm:92 LDA @VIRTUAL02
    case 0xC06744: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    case 0xC06746: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06743.
    case 0xC06747: cpu.execute_instruction<0xE7>(0x000096, 2); return true;
    // src/overworld/screen_transition.asm:93 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC06747.
    case 0xC06749: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/overworld/screen_transition.asm:94 LDA #0
    case 0xC0674A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC06749.
    case 0xC0674B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/screen_transition.asm:94 LDA #0
    // Overlapping static entry reached from 0xC0674A.
    case 0xC0674C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:95 STA @LOCAL02
    case 0xC0674D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:96 BRA @UNKNOWN5
    case 0xC0674F: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/overworld/screen_transition.asm:98 LDA PALETTE_UPLOAD_MODE
    case 0xC06751: cpu.execute_instruction<0xAD>(0x000030, 3); return true;
    // src/overworld/screen_transition.asm:99 AND #$00FF
    case 0xC06754: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC06754.
    case 0xC06756: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:100 BEQ @UNKNOWN4
    case 0xC06757: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:101 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06759: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/screen_transition.asm:103 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC0675D: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/overworld/screen_transition.asm:104 JSL OAM_CLEAR
    case 0xC06761: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/overworld/screen_transition.asm:105 JSL UNKNOWN_C4268A
    case 0xC06765: cpu.execute_instruction<0x22>(0xC4268A, 4); return true;
    // src/overworld/screen_transition.asm:106 JSL UNKNOWN_C426C7
    case 0xC06769: cpu.execute_instruction<0x22>(0xC426C7, 4); return true;
    // src/overworld/screen_transition.asm:107 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0676D: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/overworld/screen_transition.asm:108 JSL UPDATE_SCREEN
    case 0xC06771: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/overworld/screen_transition.asm:109 JSL UNKNOWN_C4A7B0
    case 0xC06775: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/overworld/screen_transition.asm:110 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06779: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/screen_transition.asm:111 LDA @LOCAL02
    case 0xC0677D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:112 INC
    case 0xC0677F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:113 STA @LOCAL02
    case 0xC06780: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:115 CMP @VIRTUAL02
    case 0xC06782: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:116 BCC @UNKNOWN3
    case 0xC06784: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/overworld/screen_transition.asm:117 SEP #PROC_FLAGS::ACCUM8
    case 0xC06786: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    case 0xC06788: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/screen_transition.asm:118 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC06788.
    case 0xC0678A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:119 LDA [@VIRTUAL06],Y
    case 0xC0678B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:120 REP #PROC_FLAGS::ACCUM8
    case 0xC0678D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:121 AND #>-1
    case 0xC0678F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:121 AND #>-1
    // Overlapping static entry reached from 0xC0678F.
    case 0xC06791: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:122 STA @VIRTUAL02
    case 0xC06792: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:123 LDA #50
    case 0xC06794: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/overworld/screen_transition.asm:123 LDA #50
    // Overlapping static entry reached from 0xC06794.
    case 0xC06796: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:124 CLC
    case 0xC06797: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:125 SBC @VIRTUAL02
    case 0xC06798: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC0679A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC0679C: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC0679E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:126 BRANCHLTEQS @UNKNOWN8
    case 0xC067A0: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:127 JSL UNKNOWN_C08726
    case 0xC067A2: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/overworld/screen_transition.asm:128 BRA @UNKNOWN9
    case 0xC067A6: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/overworld/screen_transition.asm:130 SEP #PROC_FLAGS::ACCUM8
    case 0xC067A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:131 LDA #>-1
    case 0xC067AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    case 0xC067AC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/screen_transition.asm:132 STA @LOCAL00
    // Overlapping static entry reached from 0xC067AA.
    case 0xC067AD: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    case 0xC067AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/overworld/screen_transition.asm:133 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC067AE.
    case 0xC067B0: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/overworld/screen_transition.asm:134 REP #PROC_FLAGS::ACCUM8
    case 0xC067B1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    case 0xC067B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/overworld/screen_transition.asm:135 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC067B3.
    case 0xC067B5: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:136 JSL MEMSET16
    case 0xC067B6: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/overworld/screen_transition.asm:137 LDA #24
    case 0xC067BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/overworld/screen_transition.asm:137 LDA #24
    // Overlapping static entry reached from 0xC067BA.
    case 0xC067BC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:138 JSL UNKNOWN_C0856B
    case 0xC067BD: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/overworld/screen_transition.asm:139 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC067C1: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/screen_transition.asm:140 LDA #1
    case 0xC067C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:140 LDA #1
    // Overlapping static entry reached from 0xC067C5.
    case 0xC067C7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/screen_transition.asm:141 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC067C8: cpu.execute_instruction<0x8D>(0x004676, 3); return true;
    // src/overworld/screen_transition.asm:143 JSL UNKNOWN_C09451
    case 0xC067CB: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/screen_transition.asm:144 JMP @UNKNOWN22
    case 0xC067CF: cpu.execute_instruction<0x4C>(0x006897, 3); return true;
    // src/overworld/screen_transition.asm:146 LDX #0
    case 0xC067D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/screen_transition.asm:146 LDX #0
    // Overlapping static entry reached from 0xC067D2.
    case 0xC067D4: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/overworld/screen_transition.asm:147 SEP #PROC_FLAGS::ACCUM8
    case 0xC067D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    case 0xC067D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/overworld/screen_transition.asm:148 LDY #screen_transition_config::fade_style
    // Overlapping static entry reached from 0xC067D7.
    case 0xC067D9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:149 LDA [@VIRTUAL06],Y
    case 0xC067DA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC067DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:151 AND #$00FF
    case 0xC067DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:151 AND #$00FF
    // Overlapping static entry reached from 0xC067DE.
    case 0xC067E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:152 STA @VIRTUAL02
    case 0xC067E1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:153 LDA #50
    case 0xC067E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000032, 2); else cpu.execute_instruction<0xA9>(0x000032, 3); return true;
    // src/overworld/screen_transition.asm:153 LDA #50
    // Overlapping static entry reached from 0xC067E3.
    case 0xC067E5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:154 CLC
    case 0xC067E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:155 SBC @VIRTUAL02
    case 0xC067E7: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067E9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067EB: cpu.execute_instruction<0x10>(0x000007, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067ED: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/screen_transition.asm:156 BRANCHLTEQS @UNKNOWN13
    case 0xC067EF: cpu.execute_instruction<0x30>(0x000003, 2); return true;
    // src/overworld/screen_transition.asm:157 LDX #1
    case 0xC067F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:157 LDX #1
    // Overlapping static entry reached from 0xC067F1.
    case 0xC067F3: cpu.execute_instruction<0x00>(0x00009B, 2); return true;
    // src/overworld/screen_transition.asm:159 TXY
    case 0xC067F4: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:160 STY @LOCAL05
    case 0xC067F5: cpu.execute_instruction<0x84>(0x00001D, 2); return true;
    // src/overworld/screen_transition.asm:161 BEQ @UNKNOWN14
    case 0xC067F7: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/screen_transition.asm:162 LDX #1
    case 0xC067F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:162 LDX #1
    // Overlapping static entry reached from 0xC067F9.
    case 0xC067FB: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/screen_transition.asm:163 TXA
    case 0xC067FC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:164 JSL FADE_IN
    case 0xC067FD: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/screen_transition.asm:165 BRA @UNKNOWN15
    case 0xC06801: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    case 0xC06803: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/overworld/screen_transition.asm:167 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC06803.
    case 0xC06805: cpu.execute_instruction<0xFF>(0xA020E2, 4); return true;
    // src/overworld/screen_transition.asm:168 SEP #PROC_FLAGS::ACCUM8
    case 0xC06806: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    case 0xC06808: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06805.
    case 0xC06809: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:169 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC06808.
    case 0xC0680A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:170 LDA [@VIRTUAL06],Y
    case 0xC0680B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:171 REP #PROC_FLAGS::ACCUM8
    case 0xC0680D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:172 AND #$00FF
    case 0xC0680F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC0680F.
    case 0xC06811: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:173 JSL UNKNOWN_C496E7
    case 0xC06812: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/overworld/screen_transition.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC06816: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    case 0xC06818: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000009, 2); else cpu.execute_instruction<0xA0>(0x000009, 3); return true;
    // src/overworld/screen_transition.asm:176 LDY #screen_transition_config::secondary_animation_id
    // Overlapping static entry reached from 0xC06818.
    case 0xC0681A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:177 LDA [@VIRTUAL06],Y
    case 0xC0681B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:178 STA @LOCAL03
    case 0xC0681D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:179 REP #PROC_FLAGS::ACCUM8
    case 0xC0681F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:180 AND #$00FF
    case 0xC06821: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:180 AND #$00FF
    // Overlapping static entry reached from 0xC06821.
    case 0xC06823: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:181 BEQ @UNKNOWN16
    case 0xC06824: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:182 SEP #PROC_FLAGS::ACCUM8
    case 0xC06826: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    case 0xC06828: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/overworld/screen_transition.asm:183 LDY #screen_transition_config::secondary_animation_flags
    // Overlapping static entry reached from 0xC06828.
    case 0xC0682A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:184 LDA [@VIRTUAL06],Y
    case 0xC0682B: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC0682D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:186 AND #$00FF
    case 0xC0682F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:186 AND #$00FF
    // Overlapping static entry reached from 0xC0682F.
    case 0xC06831: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/screen_transition.asm:187 TAX
    case 0xC06832: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:188 LDA @LOCAL03
    case 0xC06833: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/screen_transition.asm:189 AND #$00FF
    case 0xC06835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:189 AND #$00FF
    // Overlapping static entry reached from 0xC06835.
    case 0xC06837: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/screen_transition.asm:190 JSL UNKNOWN_C4A67E
    case 0xC06838: cpu.execute_instruction<0x22>(0xC4A67E, 4); return true;
    // src/overworld/screen_transition.asm:192 LDA #0
    case 0xC0683C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/screen_transition.asm:192 LDA #0
    // Overlapping static entry reached from 0xC0683C.
    case 0xC0683E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:193 STA @LOCAL02
    case 0xC0683F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:194 BRA @UNKNOWN21
    case 0xC06841: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/overworld/screen_transition.asm:196 LDY @LOCAL05
    case 0xC06843: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/screen_transition.asm:197 BNE @UNKNOWN19
    case 0xC06845: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/overworld/screen_transition.asm:198 LDA PALETTE_UPLOAD_MODE
    case 0xC06847: cpu.execute_instruction<0xAD>(0x000030, 3); return true;
    // src/overworld/screen_transition.asm:199 AND #$00FF
    case 0xC0684A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:199 AND #$00FF
    // Overlapping static entry reached from 0xC0684A.
    case 0xC0684C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/screen_transition.asm:200 BEQ @UNKNOWN18
    case 0xC0684D: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:201 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC0684F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/screen_transition.asm:203 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC06853: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/overworld/screen_transition.asm:205 JSL OAM_CLEAR
    case 0xC06857: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/overworld/screen_transition.asm:206 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC0685B: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/overworld/screen_transition.asm:207 JSL UNKNOWN_C4A7B0
    case 0xC0685F: cpu.execute_instruction<0x22>(0xC4A7B0, 4); return true;
    // src/overworld/screen_transition.asm:208 JSL UPDATE_SCREEN
    case 0xC06863: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/overworld/screen_transition.asm:209 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC06867: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/screen_transition.asm:210 LDA @LOCAL02
    case 0xC0686B: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:211 CMP #1
    case 0xC0686D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/screen_transition.asm:211 CMP #1
    // Overlapping static entry reached from 0xC0686D.
    case 0xC0686F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/screen_transition.asm:212 BNE @UNKNOWN20
    case 0xC06870: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:213 JSL UNKNOWN_C0943C
    case 0xC06872: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/overworld/screen_transition.asm:215 LDA @LOCAL02
    case 0xC06876: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:216 INC
    case 0xC06878: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/screen_transition.asm:217 STA @LOCAL02
    case 0xC06879: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:219 SEP #PROC_FLAGS::ACCUM8
    case 0xC0687B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    case 0xC0687D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/overworld/screen_transition.asm:220 LDY #screen_transition_config::secondary_duration
    // Overlapping static entry reached from 0xC0687D.
    case 0xC0687F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/screen_transition.asm:221 LDA [@VIRTUAL06],Y
    case 0xC06880: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/overworld/screen_transition.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC06882: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/screen_transition.asm:223 AND #$00FF
    case 0xC06884: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/screen_transition.asm:223 AND #$00FF
    // Overlapping static entry reached from 0xC06884.
    case 0xC06886: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/screen_transition.asm:224 STA @VIRTUAL02
    case 0xC06887: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:225 LDA @LOCAL02
    case 0xC06889: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/screen_transition.asm:226 CMP @VIRTUAL02
    case 0xC0688B: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/screen_transition.asm:227 BCC @UNKNOWN17
    case 0xC0688D: cpu.execute_instruction<0x90>(0x0000B4, 2); return true;
    // src/overworld/screen_transition.asm:228 LDY @LOCAL05
    case 0xC0688F: cpu.execute_instruction<0xA4>(0x00001D, 2); return true;
    // src/overworld/screen_transition.asm:229 BNE @UNKNOWN22
    case 0xC06891: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:230 JSL UNKNOWN_C49740
    case 0xC06893: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // src/overworld/screen_transition.asm:232 LDA GIYGAS_PHASE
    case 0xC06897: cpu.execute_instruction<0xAD>(0x00A97A, 3); return true;
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    case 0xC0689A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/screen_transition.asm:233 CMP #GIYGAS_PHASES::START_PRAYING
    // Overlapping static entry reached from 0xC0689A.
    case 0xC0689C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/screen_transition.asm:234 BCS @UNKNOWN23
    case 0xC0689D: cpu.execute_instruction<0xB0>(0x000004, 2); return true;
    // src/overworld/screen_transition.asm:235 JSL UNKNOWN_C2EAAA
    case 0xC0689F: cpu.execute_instruction<0x22>(0xC2EAAA, 4); return true;
    // src/overworld/screen_transition.asm:237 JSL UNKNOWN_C09451
    case 0xC068A3: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/screen_transition.asm:238 STZ LADDER_STAIRS_TILE_Y
    case 0xC068A7: cpu.execute_instruction<0x9C>(0x005DAA, 3); return true;
    // src/overworld/screen_transition.asm:239 STZ LADDER_STAIRS_TILE_X
    case 0xC068AA: cpu.execute_instruction<0x9C>(0x005DA8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC068AD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/screen_transition.asm:240 END_C_FUNCTION
    case 0xC068AE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/set_auto_sector_music_changes.asm (source_named).
bool execute_overworld_set_auto_sector_music_changes_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/set_auto_sector_music_changes.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4FD45: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/set_auto_sector_music_changes.asm:4 STA ENABLE_AUTO_SECTOR_MUSIC_CHANGES
    case 0xC4FD47: cpu.execute_instruction<0x8D>(0x00B549, 3); return true;
    // src/overworld/set_auto_sector_music_changes.asm:5 RTL
    case 0xC4FD4A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/set_party_tick_callbacks.asm (source_named).
bool execute_overworld_set_party_tick_callbacks_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/set_party_tick_callbacks.asm:3 ASL
    case 0xC42F45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:4 TAX
    case 0xC42F46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:5 LDA $0E
    case 0xC42F47: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:6 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC42F49: cpu.execute_instruction<0x9D>(0x00107A, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:7 LDA $10
    case 0xC42F4C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:8 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC42F4E: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:9 LDY #$0006
    case 0xC42F51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:9 LDY #$0006
    // Overlapping static entry reached from 0xC42F51.
    case 0xC42F53: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:11 INX
    case 0xC42F54: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:12 INX
    case 0xC42F55: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:13 LDA $12
    case 0xC42F56: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:14 STA ENTITY_TICK_CALLBACK_LOW,X
    case 0xC42F58: cpu.execute_instruction<0x9D>(0x00107A, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:15 LDA $14
    case 0xC42F5B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:16 STA ENTITY_TICK_CALLBACK_HIGH,X
    case 0xC42F5D: cpu.execute_instruction<0x9D>(0x0010B6, 3); return true;
    // src/overworld/set_party_tick_callbacks.asm:17 DEY
    case 0xC42F60: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/set_party_tick_callbacks.asm:18 BNE @UNKNOWN0
    case 0xC42F61: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/overworld/set_party_tick_callbacks.asm:19 RTL
    case 0xC42F63: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/set_teleport_state.asm (source_named).
bool execute_overworld_set_teleport_state_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/set_teleport_state.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC0DD53: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD55: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD56: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD57: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD58: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC0DD58.
    case 0xC0DD5A: cpu.execute_instruction<0xFF>(0xE2685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD5B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/set_teleport_state.asm:8 END_STACK_VARS
    case 0xC0DD5C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/set_teleport_state.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC0DD5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/set_teleport_state.asm:9 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC0DD5A.
    case 0xC0DD5E: cpu.execute_instruction<0x20>(0x000085, 3); return true;
    // src/overworld/set_teleport_state.asm:10 STA @VIRTUAL00
    case 0xC0DD5F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/set_teleport_state.asm:11 LDA @PARAM01
    case 0xC0DD61: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // src/overworld/set_teleport_state.asm:12 STA @LOCAL00
    case 0xC0DD63: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/overworld/set_teleport_state.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC0DD65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/set_teleport_state.asm:14 LDA @VIRTUAL00
    case 0xC0DD67: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/set_teleport_state.asm:15 AND #$00FF
    case 0xC0DD69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/set_teleport_state.asm:15 AND #$00FF
    // Overlapping static entry reached from 0xC0DD69.
    case 0xC0DD6B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/set_teleport_state.asm:16 STA PSI_TELEPORT_DESTINATION
    case 0xC0DD6C: cpu.execute_instruction<0x8D>(0x009F3F, 3); return true;
    // src/overworld/set_teleport_state.asm:17 LDA @LOCAL00
    case 0xC0DD6F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/overworld/set_teleport_state.asm:18 AND #$00FF
    case 0xC0DD71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/set_teleport_state.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC0DD71.
    case 0xC0DD73: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/set_teleport_state.asm:19 STA PSI_TELEPORT_STYLE
    case 0xC0DD74: cpu.execute_instruction<0x8D>(0x009F41, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/set_teleport_state.asm:20 END_C_FUNCTION
    case 0xC0DD77: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/set_teleport_state.asm:20 END_C_FUNCTION
    case 0xC0DD78: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/setup_vram.asm (source_named).
bool execute_overworld_setup_vram_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/setup_vram.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC00013: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/setup_vram.asm:5 LDA #$0009
    case 0xC00015: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/overworld/setup_vram.asm:5 LDA #$0009
    // Overlapping static entry reached from 0xC00015.
    case 0xC00017: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:6 JSL UNKNOWN_C08D79
    case 0xC00018: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/overworld/setup_vram.asm:7 LDY #$0000
    case 0xC0001C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
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
    case 0xC00025: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
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
    case 0xC00032: cpu.execute_instruction<0x22>(0xC08DDE, 4); return true;
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
    case 0xC0003F: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/overworld/setup_vram.asm:19 LDA #$0062
    case 0xC00043: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000062, 2); else cpu.execute_instruction<0xA9>(0x000062, 3); return true;
    // src/overworld/setup_vram.asm:19 LDA #$0062
    // Overlapping static entry reached from 0xC00043.
    case 0xC00045: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/setup_vram.asm:20 JSL SET_OAM_SIZE
    case 0xC00046: cpu.execute_instruction<0x22>(0xC08D92, 4); return true;
    // src/overworld/setup_vram.asm:21 RTL
    case 0xC0004A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/show_hp_alert.asm (source_named).
bool execute_overworld_show_hp_alert_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_hp_alert.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1DBBB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBBD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBBE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBBF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009E, 2); else cpu.execute_instruction<0x69>(0x00FF9E, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DBC0.
    case 0xC1DBC2: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBC3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/show_hp_alert.asm:11 END_STACK_VARS
    case 0xC1DBC4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:12 TAY
    case 0xC1DBC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:13 STY @CHARID
    case 0xC1DBC6: cpu.execute_instruction<0x84>(0x000060, 2); return true;
    // src/overworld/show_hp_alert.asm:15 LDA CURRENT_ATTACKER
    case 0xC1DBC8: cpu.execute_instruction<0xAD>(0x00A970, 3); return true;
    // src/overworld/show_hp_alert.asm:16 STA $02
    case 0xC1DBCB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/show_hp_alert.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DBCD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/show_hp_alert.asm:18 STZ $20
    case 0xC1DBCF: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/overworld/show_hp_alert.asm:19 STY $12
    case 0xC1DBD1: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/overworld/show_hp_alert.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1DBD3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/show_hp_alert.asm:21 TDC
    case 0xC1DBD5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:22 CLC
    case 0xC1DBD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:23 ADC #$0012
    case 0xC1DBD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x000012, 3); return true;
    // src/overworld/show_hp_alert.asm:23 ADC #$0012
    // Overlapping static entry reached from 0xC1DBD7.
    case 0xC1DBD9: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/show_hp_alert.asm:24 STA CURRENT_ATTACKER
    case 0xC1DBDA: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/overworld/show_hp_alert.asm:26 JSL UNKNOWN_C0943C
    case 0xC1DBDD: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1DBE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1DBE1.
    case 0xC1DBE3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/show_hp_alert.asm:27 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1DBE4: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    case 0xC1DBE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/show_hp_alert.asm:28 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1DBE7.
    case 0xC1DBE9: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/overworld/show_hp_alert.asm:29 LDY @CHARID
    case 0xC1DBEA: cpu.execute_instruction<0xA4>(0x000060, 2); return true;
    // src/overworld/show_hp_alert.asm:30 TYA
    case 0xC1DBEC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:31 DEC
    case 0xC1DBED: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    case 0xC1DBEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/show_hp_alert.asm:32 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1DBEE.
    case 0xC1DBF0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/show_hp_alert.asm:33 JSL MULT168
    case 0xC1DBF1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/show_hp_alert.asm:34 CLC
    case 0xC1DBF5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1DBF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/overworld/show_hp_alert.asm:35 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1DBF6.
    case 0xC1DBF8: cpu.execute_instruction<0x99>(0x004A20, 3); return true;
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    case 0xC1DBF9: cpu.execute_instruction<0x20>(0x00AC4A, 3); return true;
    // src/overworld/show_hp_alert.asm:36 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1DBF8.
    case 0xC1DBFB: cpu.execute_instruction<0xAC>(0x00AFA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DBFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x00C7AF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1DBFC.
    case 0xC1DBFE: cpu.execute_instruction<0xC7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DBFF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1DBFE.
    case 0xC1DC00: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DC01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    // Overlapping static entry reached from 0xC1DC01.
    case 0xC1DC03: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DC04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/show_hp_alert.asm:37 DISPLAY_TEXT_PTR MSG_SYS_MAP_CRITICAL_SITUATION
    case 0xC1DC06: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/show_hp_alert.asm:38 JSR CLOSE_FOCUS_WINDOW
    case 0xC1DC0A: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // src/overworld/show_hp_alert.asm:39 JSL WINDOW_TICK
    case 0xC1DC0D: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/overworld/show_hp_alert.asm:40 JSL UNKNOWN_C09451
    case 0xC1DC11: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/show_hp_alert.asm:42 LDA $02
    case 0xC1DC15: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/show_hp_alert.asm:43 STA CURRENT_ATTACKER
    case 0xC1DC17: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/overworld/show_hp_alert.asm:45 PLD
    case 0xC1DC1A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/overworld/show_hp_alert.asm:46 RTL
    case 0xC1DC1B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/show_town_map.asm (source_named).
bool execute_overworld_show_town_map_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/overworld/show_town_map.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC13CE5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/overworld/show_town_map.asm:4 LDX #$00CA
    case 0xC13CE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CA, 2); else cpu.execute_instruction<0xA2>(0x0000CA, 3); return true;
    // src/overworld/show_town_map.asm:4 LDX #$00CA
    // Overlapping static entry reached from 0xC13CE7.
    case 0xC13CE9: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/show_town_map.asm:5 LDA #$00FF
    case 0xC13CEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/overworld/show_town_map.asm:5 LDA #$00FF
    // Overlapping static entry reached from 0xC13CEA.
    case 0xC13CEC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/show_town_map.asm:6 JSL FIND_ITEM_IN_INVENTORY2
    case 0xC13CED: cpu.execute_instruction<0x22>(0xC45683, 4); return true;
    // src/overworld/show_town_map.asm:7 CMP #$0000
    case 0xC13CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/show_town_map.asm:7 CMP #$0000
    // Overlapping static entry reached from 0xC13CF1.
    case 0xC13CF3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/show_town_map.asm:8 BEQ @NO_TOWN_MAP
    case 0xC13CF4: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/show_town_map.asm:9 JSL UNKNOWN_C0943C
    case 0xC13CF6: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/overworld/show_town_map.asm:10 JSL DISPLAY_TOWN_MAP
    case 0xC13CFA: cpu.execute_instruction<0x22>(0xC4D681, 4); return true;
    // src/overworld/show_town_map.asm:11 JSL UNKNOWN_C09451
    case 0xC13CFE: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/show_town_map.asm:13 RTL
    case 0xC13D02: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn.asm (source_named).
bool execute_overworld_spawn_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn.asm:4 BEGIN_C_FUNCTION_FAR
    case 0xC4C718: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C71C.
    case 0xC4C71E: cpu.execute_instruction<0xFF>(0x1FAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn.asm:11 END_STACK_VARS
    case 0xC4C71F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    case 0xC4C720: cpu.execute_instruction<0xAD>(0x009D1F, 3); return true;
    // src/overworld/spawn.asm:12 LDA RESPAWN_X
    // Overlapping static entry reached from 0xC4C71E.
    case 0xC4C722: cpu.execute_instruction<0x9D>(0x000285, 3); return true;
    // src/overworld/spawn.asm:13 STA @VIRTUAL02
    case 0xC4C723: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn.asm:14 LDX RESPAWN_Y
    case 0xC4C725: cpu.execute_instruction<0xAE>(0x009D21, 3); return true;
    // src/overworld/spawn.asm:15 STX @LOCAL03
    case 0xC4C728: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/spawn.asm:16 JSL UNKNOWN_C0943C
    case 0xC4C72A: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/overworld/spawn.asm:17 JSR UNKNOWN_C4C2DE
    case 0xC4C72E: cpu.execute_instruction<0x20>(0x00C2DE, 3); return true;
    // src/overworld/spawn.asm:18 JSR UNKNOWN_C4C64D
    case 0xC4C731: cpu.execute_instruction<0x20>(0x00C64D, 3); return true;
    // src/overworld/spawn.asm:19 STA @VIRTUAL04
    case 0xC4C734: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/spawn.asm:20 CMP #0
    case 0xC4C736: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn.asm:20 CMP #0
    // Overlapping static entry reached from 0xC4C736.
    case 0xC4C738: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/spawn.asm:21 BEQ @UNKNOWN0
    case 0xC4C739: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/overworld/spawn.asm:22 LDY #0
    case 0xC4C73B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/spawn.asm:22 LDY #0
    // Overlapping static entry reached from 0xC4C73B.
    case 0xC4C73D: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/spawn.asm:23 LDX #1
    case 0xC4C73E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/spawn.asm:23 LDX #1
    // Overlapping static entry reached from 0xC4C73E.
    case 0xC4C740: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/spawn.asm:24 LDA #2
    case 0xC4C741: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/spawn.asm:24 LDA #2
    // Overlapping static entry reached from 0xC4C741.
    case 0xC4C743: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:25 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4C744: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/overworld/spawn.asm:26 JSL UNKNOWN_C09451
    case 0xC4C748: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/spawn.asm:27 JMP @UNKNOWN9
    case 0xC4C74C: cpu.execute_instruction<0x4C>(0x00C8A0, 3); return true;
    // src/overworld/spawn.asm:29 LDA #32
    case 0xC4C74F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/overworld/spawn.asm:29 LDA #32
    // Overlapping static entry reached from 0xC4C74F.
    case 0xC4C751: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:30 JSL UNKNOWN_C4C58F
    case 0xC4C752: cpu.execute_instruction<0x22>(0xC4C58F, 4); return true;
    // src/overworld/spawn.asm:31 LDA #2
    case 0xC4C756: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/spawn.asm:31 LDA #2
    // Overlapping static entry reached from 0xC4C756.
    case 0xC4C758: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:32 JSL UNKNOWN_C0AC0C
    case 0xC4C759: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/overworld/spawn.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C75D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:34 LDA #$17
    case 0xC4C75F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    case 0xC4C761: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C75F.
    case 0xC4C762: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:35 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C762.
    case 0xC4C763: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/spawn.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC4C764: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    case 0xC4C766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/spawn.asm:37 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C766.
    case 0xC4C768: cpu.execute_instruction<0xFF>(0x436E8D, 4); return true;
    // src/overworld/spawn.asm:38 STA LOADED_MAP_TILE_COMBO
    case 0xC4C769: cpu.execute_instruction<0x8D>(0x00436E, 3); return true;
    // src/overworld/spawn.asm:39 STA CURRENT_MAP_MUSIC_TRACK
    case 0xC4C76C: cpu.execute_instruction<0x8D>(0x005DD4, 3); return true;
    // src/overworld/spawn.asm:40 STA CURRENT_MUSIC_TRACK
    case 0xC4C76F: cpu.execute_instruction<0x8D>(0x00B53B, 3); return true;
    // src/overworld/spawn.asm:41 LDA #1
    case 0xC4C772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/spawn.asm:41 LDA #1
    // Overlapping static entry reached from 0xC4C772.
    case 0xC4C774: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn.asm:42 STA WIPE_PALETTES_ON_MAP_LOAD
    case 0xC4C775: cpu.execute_instruction<0x8D>(0x004676, 3); return true;
    // src/overworld/spawn.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C778: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/spawn.asm:46 LDY #6
    case 0xC4C77C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/overworld/spawn.asm:46 LDY #6
    // Overlapping static entry reached from 0xC4C77C.
    case 0xC4C77E: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/spawn.asm:47 LDX @LOCAL03
    case 0xC4C77F: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/spawn.asm:48 LDA @VIRTUAL02
    case 0xC4C781: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn.asm:49 JSL INITIALIZE_MAP
    case 0xC4C783: cpu.execute_instruction<0x22>(0xC019B2, 4); return true;
    // src/overworld/spawn.asm:50 LDA GAME_STATE + game_state::party_members
    case 0xC4C787: cpu.execute_instruction<0xAD>(0x00986F, 3); return true;
    // src/overworld/spawn.asm:51 AND #$00FF
    case 0xC4C78A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/spawn.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC4C78A.
    case 0xC4C78C: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/spawn.asm:52 DEC
    case 0xC4C78D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    case 0xC4C78E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/spawn.asm:53 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC4C78E.
    case 0xC4C790: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:54 JSL MULT168
    case 0xC4C791: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/spawn.asm:55 CLC
    case 0xC4C795: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC4C796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/overworld/spawn.asm:56 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC4C796.
    case 0xC4C798: cpu.execute_instruction<0x99>(0x00C68D, 3); return true;
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    case 0xC4C799: cpu.execute_instruction<0x8D>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:57 STA CURRENT_PARTY_MEMBER_TICK
    // Overlapping static entry reached from 0xC4C798.
    case 0xC4C79B: cpu.execute_instruction<0x4D>(0x0000A9, 3); return true;
    // src/overworld/spawn.asm:58 LDA #0
    case 0xC4C79C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/spawn.asm:58 LDA #0
    // Overlapping static entry reached from 0xC4C79C.
    case 0xC4C79E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn.asm:59 STA @LOCAL02
    case 0xC4C79F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:60 BRA @UNKNOWN2
    case 0xC4C7A1: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/overworld/spawn.asm:62 CLC
    case 0xC4C7A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn.asm:63 ADC CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7A4: cpu.execute_instruction<0x6D>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:64 TAX
    case 0xC4C7A7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn.asm:65 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C7A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:66 STZ a:char_struct::afflictions,X
    case 0xC4C7AA: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/overworld/spawn.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4C7AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/spawn.asm:68 LDA @LOCAL02
    case 0xC4C7AF: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn.asm:69 INC
    case 0xC4C7B1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:70 STA @LOCAL02
    case 0xC4C7B2: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:72 CMP #6
    case 0xC4C7B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/spawn.asm:72 CMP #6
    // Overlapping static entry reached from 0xC4C7B4.
    case 0xC4C7B6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/spawn.asm:73 BCC @UNKNOWN1
    case 0xC4C7B7: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/overworld/spawn.asm:74 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7B9: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:75 LDA a:char_struct::max_hp,X
    case 0xC4C7BC: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/overworld/spawn.asm:76 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7BF: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:77 STA a:char_struct::current_hp_target,X
    case 0xC4C7C2: cpu.execute_instruction<0x9D>(0x000047, 3); return true;
    // src/overworld/spawn.asm:78 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7C5: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:79 STA a:char_struct::current_hp,X
    case 0xC4C7C8: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/overworld/spawn.asm:80 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7CB: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:81 STZ a:char_struct::current_pp_target,X
    case 0xC4C7CE: cpu.execute_instruction<0x9E>(0x00004D, 3); return true;
    // src/overworld/spawn.asm:82 LDX CURRENT_PARTY_MEMBER_TICK
    case 0xC4C7D1: cpu.execute_instruction<0xAE>(0x004DC6, 3); return true;
    // src/overworld/spawn.asm:83 STZ a:char_struct::current_pp,X
    case 0xC4C7D4: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    case 0xC4C7D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000031, 2); else cpu.execute_instruction<0xA0>(0x009831, 3); return true;
    // src/overworld/spawn.asm:84 LDY #.LOWORD(GAME_STATE) + game_state::money_carried
    // Overlapping static entry reached from 0xC4C7D7.
    case 0xC4C7D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn.asm:85 STY @LOCAL01
    case 0xC4C7DA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7DC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7E1: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/overworld/spawn.asm:86 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4C7E4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7EA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:87 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C7EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7F0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7F2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:88 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4C7F4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C7F6.
    case 0xC4C7F8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C7FB.
    case 0xC4C7FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:89 MOVE_INT_CONSTANT 1, @VIRTUAL06
    case 0xC4C7FE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C800: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C802: cpu.execute_instruction<0x25>(0x000006, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C804: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C806: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C808: cpu.execute_instruction<0x25>(0x000008, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/overworld/spawn.asm:90 AND_INT_ASSIGN @VIRTUAL0A, @VIRTUAL06
    case 0xC4C80A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/spawn.asm:91 PHA
    case 0xC4C80C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/spawn.asm:92 LDA @VIRTUAL0A
    case 0xC4C80D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/overworld/spawn.asm:93 PHA
    case 0xC4C80F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C810: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C810.
    case 0xC4C812: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C813: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4C815.
    case 0xC4C817: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/spawn.asm:94 MOVE_INT_CONSTANT 2, @VIRTUAL0A
    case 0xC4C818: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C81A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C81C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C81E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/spawn.asm:95 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4C820: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/spawn.asm:96 JSL DIVISION32
    case 0xC4C822: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C826: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C827: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C829: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/overworld/spawn.asm:97 PULL32 @VIRTUAL0A
    case 0xC4C82A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/spawn.asm:98 CLC
    case 0xC4C82C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C82D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C82F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C831: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C833: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C835: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/overworld/spawn.asm:99 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC4C837: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/spawn.asm:100 LDY @LOCAL01
    case 0xC4C839: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C83B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C83D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C840: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/spawn.asm:101 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4C842: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/spawn.asm:103 JSL UNKNOWN_C07B52
    case 0xC4C845: cpu.execute_instruction<0x22>(0xC07B52, 4); return true;
    // src/overworld/spawn.asm:105 LDY #1
    case 0xC4C849: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/spawn.asm:105 LDY #1
    // Overlapping static entry reached from 0xC4C849.
    case 0xC4C84B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/spawn.asm:106 STY @LOCAL03
    case 0xC4C84C: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/spawn.asm:107 BRA @UNKNOWN4
    case 0xC4C84E: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/spawn.asm:109 LDX #0
    case 0xC4C850: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/spawn.asm:109 LDX #0
    // Overlapping static entry reached from 0xC4C850.
    case 0xC4C852: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/spawn.asm:110 TYA
    case 0xC4C853: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn.asm:111 JSL SET_EVENT_FLAG
    case 0xC4C854: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/overworld/spawn.asm:112 LDY @LOCAL03
    case 0xC4C858: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/spawn.asm:113 INY
    case 0xC4C85A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/spawn.asm:114 STY @LOCAL03
    case 0xC4C85B: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/spawn.asm:116 TYA
    case 0xC4C85D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn.asm:117 CLC
    case 0xC4C85E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn.asm:118 SBC #10
    case 0xC4C85F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00000A, 2); else cpu.execute_instruction<0xE9>(0x00000A, 3); return true;
    // src/overworld/spawn.asm:118 SBC #10
    // Overlapping static entry reached from 0xC4C85F.
    case 0xC4C861: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C862: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C864: cpu.execute_instruction<0x10>(0x0000EA, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C866: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/overworld/spawn.asm:119 BRANCHLTEQS @UNKNOWN3
    case 0xC4C868: cpu.execute_instruction<0x30>(0x0000E6, 2); return true;
    // src/overworld/spawn.asm:120 LDA #0
    case 0xC4C86A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/spawn.asm:120 LDA #0
    // Overlapping static entry reached from 0xC4C86A.
    case 0xC4C86C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn.asm:121 STA @LOCAL02
    case 0xC4C86D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:122 BRA @UNKNOWN8
    case 0xC4C86F: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/spawn.asm:124 ASL
    case 0xC4C871: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:125 TAX
    case 0xC4C872: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    case 0xC4C873: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/spawn.asm:126 LDA #ENTITY_COLLISION_NO_OBJECT
    // Overlapping static entry reached from 0xC4C873.
    case 0xC4C875: cpu.execute_instruction<0xFF>(0x289E9D, 4); return true;
    // src/overworld/spawn.asm:127 STA ENTITY_COLLIDED_OBJECTS,X
    case 0xC4C876: cpu.execute_instruction<0x9D>(0x00289E, 3); return true;
    // src/overworld/spawn.asm:128 LDA @LOCAL02
    case 0xC4C879: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn.asm:129 INC
    case 0xC4C87B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/spawn.asm:130 STA @LOCAL02
    case 0xC4C87C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    case 0xC4C87E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/overworld/spawn.asm:132 CMP #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4C87E.
    case 0xC4C880: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/spawn.asm:133 BCC @UNKNOWN7
    case 0xC4C881: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/overworld/spawn.asm:134 JSL UNKNOWN_C064D4
    case 0xC4C883: cpu.execute_instruction<0x22>(0xC064D4, 4); return true;
    // src/overworld/spawn.asm:135 STZ DAD_PHONE_QUEUED
    case 0xC4C887: cpu.execute_instruction<0x9C>(0x009E56, 3); return true;
    // src/overworld/spawn.asm:136 STZ PLAYER_INTANGIBILITY_FRAMES
    case 0xC4C88A: cpu.execute_instruction<0x9C>(0x005D58, 3); return true;
    // src/overworld/spawn.asm:137 JSL SPAWN_BUZZ_BUZZ
    case 0xC4C88D: cpu.execute_instruction<0x22>(0xC06B21, 4); return true;
    // src/overworld/spawn.asm:138 JSL OAM_CLEAR
    case 0xC4C891: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/overworld/spawn.asm:139 JSL UNKNOWN_C09451
    case 0xC4C895: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // src/overworld/spawn.asm:140 LDA #32
    case 0xC4C899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/overworld/spawn.asm:140 LDA #32
    // Overlapping static entry reached from 0xC4C899.
    case 0xC4C89B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn.asm:141 JSL UNKNOWN_C4C60E
    case 0xC4C89C: cpu.execute_instruction<0x22>(0xC4C60E, 4); return true;
    // src/overworld/spawn.asm:143 LDA @VIRTUAL04
    case 0xC4C8A0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC4C8A2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn.asm:144 END_C_FUNCTION
    case 0xC4C8A3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn_buzz_buzz.asm (source_named).
bool execute_overworld_spawn_buzz_buzz_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC06B21: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B23: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B24: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC06B25.
    case 0xC06B27: cpu.execute_instruction<0xFF>(0x35A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:6 END_STACK_VARS
    case 0xC06B28: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x00EA35, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06B29.
    case 0xC06B2B: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B2C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C5, 2); else cpu.execute_instruction<0xA9>(0x0000C5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    // Overlapping static entry reached from 0xC06B2E.
    case 0xC06B30: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B31: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:7 DISPLAY_TEXT_PTR MSG_EVT_BUNBUNBUN
    case 0xC06B33: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/spawn_buzz_buzz.asm:8 JSL UNKNOWN_EF0EE8
    case 0xC06B37: cpu.execute_instruction<0x22>(0xEF0EE8, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06B3B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_buzz_buzz.asm:9 END_C_FUNCTION
    case 0xC06B3C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn_horizontal.asm (source_named).
bool execute_overworld_spawn_horizontal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_horizontal.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02A6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A6D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A6E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A6F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC02A70.
    case 0xC02A72: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A73: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/spawn_horizontal.asm:13 END_STACK_VARS
    case 0xC02A74: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:14 STX @LOCAL05
    case 0xC02A75: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/overworld/spawn_horizontal.asm:14 STX @LOCAL05
    // Overlapping static entry reached from 0xC02A72.
    case 0xC02A76: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:15 TAY
    case 0xC02A77: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:16 STY @LOCAL04
    case 0xC02A78: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:17 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC02A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/overworld/spawn_horizontal.asm:17 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC02A7A.
    case 0xC02A7C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_horizontal.asm:18 JSL GET_EVENT_FLAG
    case 0xC02A7D: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/spawn_horizontal.asm:19 CMP #0
    case 0xC02A81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:19 CMP #0
    // Overlapping static entry reached from 0xC02A81.
    case 0xC02A83: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:20 BNEL @RETURN
    case 0xC02A84: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:20 BNEL @RETURN
    case 0xC02A86: cpu.execute_instruction<0x4C>(0x002B53, 3); return true;
    // src/overworld/spawn_horizontal.asm:21 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC02A89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/overworld/spawn_horizontal.asm:21 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC02A89.
    case 0xC02A8B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_horizontal.asm:22 JSL GET_EVENT_FLAG
    case 0xC02A8C: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/spawn_horizontal.asm:22 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02AE4.
    case 0xC02A8F: cpu.execute_instruction<0xC2>(0x0000C9, 2); return true;
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    case 0xC02A90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    // Overlapping static entry reached from 0xC02A8F.
    case 0xC02A91: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_horizontal.asm:23 CMP #0
    // Overlapping static entry reached from 0xC02A90.
    case 0xC02A92: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:24 BNEL @RETURN
    case 0xC02A93: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:24 BNEL @RETURN
    case 0xC02A95: cpu.execute_instruction<0x4C>(0x002B53, 3); return true;
    // src/overworld/spawn_horizontal.asm:25 LDA ENEMY_SPAWNS_ENABLED
    case 0xC02A98: cpu.execute_instruction<0xAD>(0x004A5A, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/spawn_horizontal.asm:26 BEQL @RETURN
    case 0xC02A9B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:26 BEQL @RETURN
    case 0xC02A9D: cpu.execute_instruction<0x4C>(0x002B53, 3); return true;
    // src/overworld/spawn_horizontal.asm:27 LDX @LOCAL05
    case 0xC02AA0: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/overworld/spawn_horizontal.asm:28 TXA
    case 0xC02AA2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:29 AND #$0007
    case 0xC02AA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/spawn_horizontal.asm:29 AND #$0007
    // Overlapping static entry reached from 0xC02AA3.
    case 0xC02AA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_horizontal.asm:30 BNEL @RETURN
    case 0xC02AA6: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_horizontal.asm:30 BNEL @RETURN
    case 0xC02AA8: cpu.execute_instruction<0x4C>(0x002B53, 3); return true;
    // src/overworld/spawn_horizontal.asm:31 CPX #$FFF0
    case 0xC02AAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000F0, 2); else cpu.execute_instruction<0xE0>(0x00FFF0, 3); return true;
    // src/overworld/spawn_horizontal.asm:31 CPX #$FFF0
    // Overlapping static entry reached from 0xC02AAB.
    case 0xC02AAD: cpu.execute_instruction<0xFF>(0xA20390, 4); return true;
    // src/overworld/spawn_horizontal.asm:32 BCC @UNKNOWN4
    case 0xC02AAE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    case 0xC02AB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    // Overlapping static entry reached from 0xC02AAD.
    case 0xC02AB1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_horizontal.asm:33 LDX #0
    // Overlapping static entry reached from 0xC02AB0.
    case 0xC02AB2: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/overworld/spawn_horizontal.asm:35 CPX #MAP_HEIGHT_TILES8
    case 0xC02AB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000500, 3); return true;
    // src/overworld/spawn_horizontal.asm:35 CPX #MAP_HEIGHT_TILES8
    // Overlapping static entry reached from 0xC02AB3.
    case 0xC02AB5: cpu.execute_instruction<0x05>(0x000090, 2); return true;
    // src/overworld/spawn_horizontal.asm:36 BCC @UNKNOWN5
    case 0xC02AB6: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:36 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC02AB5.
    case 0xC02AB7: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/spawn_horizontal.asm:37 JMP @RETURN
    case 0xC02AB8: cpu.execute_instruction<0x4C>(0x002B53, 3); return true;
    // src/overworld/spawn_horizontal.asm:37 JMP @RETURN
    // Overlapping static entry reached from 0xC02AB7.
    case 0xC02AB9: cpu.execute_instruction<0x53>(0x00002B, 2); return true;
    // src/overworld/spawn_horizontal.asm:39 LDY @LOCAL04
    case 0xC02ABB: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:40 TYA
    case 0xC02ABD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:41 ASL
    case 0xC02ABE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:42 PHP
    case 0xC02ABF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:43 LSR
    case 0xC02AC0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:44 LSR
    case 0xC02AC1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:45 LSR
    case 0xC02AC2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:46 LSR
    case 0xC02AC3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:47 PLP
    case 0xC02AC4: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:48 BCC @UNKNOWN6
    case 0xC02AC5: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:52 ORA #$F000
    case 0xC02AC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/overworld/spawn_horizontal.asm:52 ORA #$F000
    // Overlapping static entry reached from 0xC02AC7.
    case 0xC02AC9: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:55 STA @LOCAL03
    case 0xC02ACA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn_horizontal.asm:55 STA @LOCAL03
    // Overlapping static entry reached from 0xC02AC9.
    case 0xC02ACB: cpu.execute_instruction<0x14>(0x00008A, 2); return true;
    // src/overworld/spawn_horizontal.asm:56 TXA
    case 0xC02ACC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:57 ASL
    case 0xC02ACD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:58 PHP
    case 0xC02ACE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:59 LSR
    case 0xC02ACF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:60 LSR
    case 0xC02AD0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:61 LSR
    case 0xC02AD1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:62 LSR
    case 0xC02AD2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:63 PLP
    case 0xC02AD3: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:64 BCC @UNKNOWN7
    case 0xC02AD4: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_horizontal.asm:68 ORA #$F000
    case 0xC02AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/overworld/spawn_horizontal.asm:68 ORA #$F000
    // Overlapping static entry reached from 0xC02AD6.
    case 0xC02AD8: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:71 STA @LOCAL02
    case 0xC02AD9: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:71 STA @LOCAL02
    // Overlapping static entry reached from 0xC02AD8.
    case 0xC02ADA: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/overworld/spawn_horizontal.asm:72 LDA @LOCAL03
    case 0xC02ADB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_horizontal.asm:72 LDA @LOCAL03
    // Overlapping static entry reached from 0xC02ADA.
    case 0xC02ADC: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:73 STA @VIRTUAL04
    case 0xC02ADD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:73 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02ADC.
    case 0xC02ADE: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/overworld/spawn_horizontal.asm:74 BRA @UNKNOWN12
    case 0xC02ADF: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/overworld/spawn_horizontal.asm:74 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC02ADE.
    case 0xC02AE0: cpu.execute_instruction<0x61>(0x0000A5, 2); return true;
    // src/overworld/spawn_horizontal.asm:76 LDA @VIRTUAL04
    case 0xC02AE1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC02AE0.
    case 0xC02AE2: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:77 STA @LOCAL01
    case 0xC02AE3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/spawn_horizontal.asm:77 STA @LOCAL01
    // Overlapping static entry reached from 0xC02AE2.
    case 0xC02AE4: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    case 0xC02AE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02AE4.
    case 0xC02AE6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02AE5.
    case 0xC02AE7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_horizontal.asm:79 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02AE8: cpu.execute_instruction<0x8D>(0x004A62, 3); return true;
    // src/overworld/spawn_horizontal.asm:80 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02AEB: cpu.execute_instruction<0x8D>(0x004A64, 3); return true;
    // src/overworld/spawn_horizontal.asm:81 LDA #1
    case 0xC02AEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/spawn_horizontal.asm:81 LDA #1
    // Overlapping static entry reached from 0xC02AEE.
    case 0xC02AF0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn_horizontal.asm:82 STA @VIRTUAL02
    case 0xC02AF1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:84 LDX @LOCAL02
    case 0xC02AF3: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:85 LDA @VIRTUAL04
    case 0xC02AF5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:86 JSL UNKNOWN_C0263D
    case 0xC02AF7: cpu.execute_instruction<0x22>(0xC0263D, 4); return true;
    // src/overworld/spawn_horizontal.asm:87 STA @LOCAL04
    case 0xC02AFB: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:88 LDY @VIRTUAL04
    case 0xC02AFD: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:89 INY
    case 0xC02AFF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:90 STY @LOCAL00
    case 0xC02B00: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/spawn_horizontal.asm:91 LDX @LOCAL02
    case 0xC02B02: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:92 TYA
    case 0xC02B04: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:93 JSL UNKNOWN_C0263D
    case 0xC02B05: cpu.execute_instruction<0x22>(0xC0263D, 4); return true;
    // src/overworld/spawn_horizontal.asm:94 TAX
    case 0xC02B09: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:95 LDA @LOCAL04
    case 0xC02B0A: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:96 BEQ @UNKNOWN11
    case 0xC02B0C: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/spawn_horizontal.asm:97 CPX @LOCAL04
    case 0xC02B0E: cpu.execute_instruction<0xE4>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:98 BNE @UNKNOWN11
    case 0xC02B10: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/spawn_horizontal.asm:99 LDA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02B12: cpu.execute_instruction<0xAD>(0x004A62, 3); return true;
    // src/overworld/spawn_horizontal.asm:100 CLC
    case 0xC02B15: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:101 ADC #8
    case 0xC02B16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/spawn_horizontal.asm:101 ADC #8
    // Overlapping static entry reached from 0xC02B16.
    case 0xC02B18: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_horizontal.asm:102 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02B19: cpu.execute_instruction<0x8D>(0x004A62, 3); return true;
    // src/overworld/spawn_horizontal.asm:103 LDY @LOCAL00
    case 0xC02B1C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/spawn_horizontal.asm:104 STY @VIRTUAL04
    case 0xC02B1E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:105 INC @VIRTUAL02
    case 0xC02B20: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:106 LDA @VIRTUAL02
    case 0xC02B22: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:107 CMP #6
    case 0xC02B24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/spawn_horizontal.asm:107 CMP #6
    // Overlapping static entry reached from 0xC02B24.
    case 0xC02B26: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_horizontal.asm:108 BNE @UNKNOWN9
    case 0xC02B27: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/overworld/spawn_horizontal.asm:109 BRA @UNKNOWN11
    case 0xC02B29: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/spawn_horizontal.asm:111 LDY @LOCAL04
    case 0xC02B2B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/overworld/spawn_horizontal.asm:112 LDX @LOCAL02
    case 0xC02B2D: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/spawn_horizontal.asm:113 LDA @LOCAL01
    case 0xC02B2F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/overworld/spawn_horizontal.asm:114 JSR UNKNOWN_C02668
    case 0xC02B31: cpu.execute_instruction<0x20>(0x002668, 3); return true;
    // src/overworld/spawn_horizontal.asm:116 LDX @VIRTUAL02
    case 0xC02B34: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:117 LDA @VIRTUAL02
    case 0xC02B36: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:118 DEC
    case 0xC02B38: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:119 STA @VIRTUAL02
    case 0xC02B39: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_horizontal.asm:120 CPX #0
    case 0xC02B3B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/spawn_horizontal.asm:120 CPX #0
    // Overlapping static entry reached from 0xC02B3B.
    case 0xC02B3D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_horizontal.asm:121 BNE @UNKNOWN10
    case 0xC02B3E: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/overworld/spawn_horizontal.asm:122 INC @VIRTUAL04
    case 0xC02B40: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:124 LDA @LOCAL03
    case 0xC02B42: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_horizontal.asm:125 CLC
    case 0xC02B44: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:126 ADC #5
    case 0xC02B45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/spawn_horizontal.asm:126 ADC #5
    // Overlapping static entry reached from 0xC02B45.
    case 0xC02B47: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/spawn_horizontal.asm:127 CLC
    case 0xC02B48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_horizontal.asm:128 SBC @VIRTUAL04
    case 0xC02B49: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/overworld/spawn_horizontal.asm:128 SBC @VIRTUAL04
    // Overlapping static entry reached from 0xC02BC3.
    case 0xC02B4A: cpu.execute_instruction<0x04>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B4B: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    // Overlapping static entry reached from 0xC02B4A.
    case 0xC02B4C: cpu.execute_instruction<0x04>(0x000010, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B4D: cpu.execute_instruction<0x10>(0x000092, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    // Overlapping static entry reached from 0xC02B4C.
    case 0xC02B4E: cpu.execute_instruction<0x92>(0x000080, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B4F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    // Overlapping static entry reached from 0xC02B4E.
    case 0xC02B50: cpu.execute_instruction<0x02>(0x000030, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/spawn_horizontal.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02B51: cpu.execute_instruction<0x30>(0x00008E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_horizontal.asm:131 END_C_FUNCTION
    case 0xC02B53: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_horizontal.asm:131 END_C_FUNCTION
    case 0xC02B54: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/spawn_vertical.asm (source_named).
bool execute_overworld_spawn_vertical_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/spawn_vertical.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC02B55: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B57: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B58: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B59: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC02B5A.
    case 0xC02B5C: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B5D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/spawn_vertical.asm:13 END_STACK_VARS
    case 0xC02B5E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:14 TXY
    case 0xC02B5F: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:15 STY @LOCAL05
    case 0xC02B60: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:16 TAX
    case 0xC02B62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:17 STX @LOCAL04
    case 0xC02B63: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/overworld/spawn_vertical.asm:18 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    case 0xC02B65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/overworld/spawn_vertical.asm:18 LDA #EVENT_FLAG::FLG_SYS_MONSTER_OFF
    // Overlapping static entry reached from 0xC02B65.
    case 0xC02B67: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_vertical.asm:19 JSL GET_EVENT_FLAG
    case 0xC02B68: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/spawn_vertical.asm:20 CMP #0
    case 0xC02B6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:20 CMP #0
    // Overlapping static entry reached from 0xC02B6C.
    case 0xC02B6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:21 BNEL @UNKNOWN14
    case 0xC02B6F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:21 BNEL @UNKNOWN14
    case 0xC02B71: cpu.execute_instruction<0x4C>(0x002C3C, 3); return true;
    // src/overworld/spawn_vertical.asm:22 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    case 0xC02B74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x000049, 3); return true;
    // src/overworld/spawn_vertical.asm:22 LDA #EVENT_FLAG::FLG_WIN_GIEGU
    // Overlapping static entry reached from 0xC02B74.
    case 0xC02B76: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    case 0xC02B77: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02BCD.
    case 0xC02B78: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:23 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC02B78.
    case 0xC02B79: cpu.execute_instruction<0x16>(0x0000C2, 2); return true;
    // src/overworld/spawn_vertical.asm:24 CMP #0
    case 0xC02B7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:24 CMP #0
    // Overlapping static entry reached from 0xC02B7B.
    case 0xC02B7D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:25 BNEL @UNKNOWN14
    case 0xC02B7E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:25 BNEL @UNKNOWN14
    case 0xC02B80: cpu.execute_instruction<0x4C>(0x002C3C, 3); return true;
    // src/overworld/spawn_vertical.asm:26 LDA ENEMY_SPAWNS_ENABLED
    case 0xC02B83: cpu.execute_instruction<0xAD>(0x004A5A, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/spawn_vertical.asm:27 BEQL @UNKNOWN14
    case 0xC02B86: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:27 BEQL @UNKNOWN14
    case 0xC02B88: cpu.execute_instruction<0x4C>(0x002C3C, 3); return true;
    // src/overworld/spawn_vertical.asm:28 LDX @LOCAL04
    case 0xC02B8B: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/overworld/spawn_vertical.asm:29 TXA
    case 0xC02B8D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:30 AND #$0007
    case 0xC02B8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/overworld/spawn_vertical.asm:30 AND #$0007
    // Overlapping static entry reached from 0xC02B8E.
    case 0xC02B90: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/spawn_vertical.asm:31 BNEL @UNKNOWN14
    case 0xC02B91: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/spawn_vertical.asm:31 BNEL @UNKNOWN14
    case 0xC02B93: cpu.execute_instruction<0x4C>(0x002C3C, 3); return true;
    // src/overworld/spawn_vertical.asm:32 CPX #$FFF0
    case 0xC02B96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000F0, 2); else cpu.execute_instruction<0xE0>(0x00FFF0, 3); return true;
    // src/overworld/spawn_vertical.asm:32 CPX #$FFF0
    // Overlapping static entry reached from 0xC02B96.
    case 0xC02B98: cpu.execute_instruction<0xFF>(0xA20390, 4); return true;
    // src/overworld/spawn_vertical.asm:33 BCC @UNKNOWN4
    case 0xC02B99: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:34 LDX #0
    case 0xC02B9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:34 LDX #0
    // Overlapping static entry reached from 0xC02B98.
    case 0xC02B9C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/spawn_vertical.asm:34 LDX #0
    // Overlapping static entry reached from 0xC02B9B.
    case 0xC02B9D: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/overworld/spawn_vertical.asm:36 CPX #MAP_WIDTH_TILES8
    case 0xC02B9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000400, 3); return true;
    // src/overworld/spawn_vertical.asm:36 CPX #MAP_WIDTH_TILES8
    // Overlapping static entry reached from 0xC02B9E.
    case 0xC02BA0: cpu.execute_instruction<0x04>(0x000090, 2); return true;
    // src/overworld/spawn_vertical.asm:37 BCC @UNKNOWN5
    case 0xC02BA1: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:37 BCC @UNKNOWN5
    // Overlapping static entry reached from 0xC02BA0.
    case 0xC02BA2: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // src/overworld/spawn_vertical.asm:38 JMP @UNKNOWN14
    case 0xC02BA3: cpu.execute_instruction<0x4C>(0x002C3C, 3); return true;
    // src/overworld/spawn_vertical.asm:38 JMP @UNKNOWN14
    // Overlapping static entry reached from 0xC02BA2.
    case 0xC02BA4: cpu.execute_instruction<0x3C>(0x008A2C, 3); return true;
    // src/overworld/spawn_vertical.asm:40 TXA
    case 0xC02BA6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:41 ASL
    case 0xC02BA7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:42 PHP
    case 0xC02BA8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:43 LSR
    case 0xC02BA9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:44 LSR
    case 0xC02BAA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:45 LSR
    case 0xC02BAB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:46 LSR
    case 0xC02BAC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:47 PLP
    case 0xC02BAD: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:48 BCC @UNKNOWN6
    case 0xC02BAE: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:52 ORA #$F000
    case 0xC02BB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/overworld/spawn_vertical.asm:52 ORA #$F000
    // Overlapping static entry reached from 0xC02BB0.
    case 0xC02BB2: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:55 STA @LOCAL03
    case 0xC02BB3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:55 STA @LOCAL03
    // Overlapping static entry reached from 0xC02BB2.
    case 0xC02BB4: cpu.execute_instruction<0x14>(0x0000A4, 2); return true;
    // src/overworld/spawn_vertical.asm:56 LDY @LOCAL05
    case 0xC02BB5: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:56 LDY @LOCAL05
    // Overlapping static entry reached from 0xC02BB4.
    case 0xC02BB6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:57 TYA
    case 0xC02BB7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:58 ASL
    case 0xC02BB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:59 PHP
    case 0xC02BB9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:60 LSR
    case 0xC02BBA: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:61 LSR
    case 0xC02BBB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:62 LSR
    case 0xC02BBC: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:63 LSR
    case 0xC02BBD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:64 PLP
    case 0xC02BBE: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:65 BCC @UNKNOWN7
    case 0xC02BBF: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/overworld/spawn_vertical.asm:69 ORA #$F000
    case 0xC02BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00F000, 3); return true;
    // src/overworld/spawn_vertical.asm:69 ORA #$F000
    // Overlapping static entry reached from 0xC02BC1.
    case 0xC02BC3: cpu.execute_instruction<0xF0>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:72 STA @LOCAL02
    case 0xC02BC4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/spawn_vertical.asm:72 STA @LOCAL02
    // Overlapping static entry reached from 0xC02BC3.
    case 0xC02BC5: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:73 STA @VIRTUAL04
    case 0xC02BC6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:73 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC02BC5.
    case 0xC02BC7: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/overworld/spawn_vertical.asm:74 BRA @UNKNOWN12
    case 0xC02BC8: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/overworld/spawn_vertical.asm:74 BRA @UNKNOWN12
    // Overlapping static entry reached from 0xC02BC7.
    case 0xC02BC9: cpu.execute_instruction<0x61>(0x0000A5, 2); return true;
    // src/overworld/spawn_vertical.asm:76 LDA @VIRTUAL04
    case 0xC02BCA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:76 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC02BC9.
    case 0xC02BCB: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:77 STA @LOCAL01
    case 0xC02BCC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/spawn_vertical.asm:77 STA @LOCAL01
    // Overlapping static entry reached from 0xC02BCB.
    case 0xC02BCD: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/overworld/spawn_vertical.asm:78 LDA #8
    case 0xC02BCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/overworld/spawn_vertical.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02BCD.
    case 0xC02BCF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:78 LDA #8
    // Overlapping static entry reached from 0xC02BCE.
    case 0xC02BD0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_vertical.asm:79 STA ENEMY_SPAWN_RANGE_WIDTH
    case 0xC02BD1: cpu.execute_instruction<0x8D>(0x004A62, 3); return true;
    // src/overworld/spawn_vertical.asm:80 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02BD4: cpu.execute_instruction<0x8D>(0x004A64, 3); return true;
    // src/overworld/spawn_vertical.asm:81 LDA #1
    case 0xC02BD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/spawn_vertical.asm:81 LDA #1
    // Overlapping static entry reached from 0xC02BD7.
    case 0xC02BD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/spawn_vertical.asm:82 STA @VIRTUAL02
    case 0xC02BDA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:84 LDX @VIRTUAL04
    case 0xC02BDC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:85 LDA @LOCAL03
    case 0xC02BDE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:86 JSL UNKNOWN_C0263D
    case 0xC02BE0: cpu.execute_instruction<0x22>(0xC0263D, 4); return true;
    // src/overworld/spawn_vertical.asm:87 STA @LOCAL05
    case 0xC02BE4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:88 LDY @VIRTUAL04
    case 0xC02BE6: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:89 INY
    case 0xC02BE8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:90 STY @LOCAL00
    case 0xC02BE9: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/overworld/spawn_vertical.asm:91 TYX
    case 0xC02BEB: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:92 LDA @LOCAL03
    case 0xC02BEC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:93 JSL UNKNOWN_C0263D
    case 0xC02BEE: cpu.execute_instruction<0x22>(0xC0263D, 4); return true;
    // src/overworld/spawn_vertical.asm:94 TAX
    case 0xC02BF2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:95 LDA @LOCAL05
    case 0xC02BF3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:96 BEQ @UNKNOWN11
    case 0xC02BF5: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/overworld/spawn_vertical.asm:97 CPX @LOCAL05
    case 0xC02BF7: cpu.execute_instruction<0xE4>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:98 BNE @UNKNOWN11
    case 0xC02BF9: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // src/overworld/spawn_vertical.asm:99 LDA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02BFB: cpu.execute_instruction<0xAD>(0x004A64, 3); return true;
    // src/overworld/spawn_vertical.asm:100 CLC
    case 0xC02BFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:101 ADC #8
    case 0xC02BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/spawn_vertical.asm:101 ADC #8
    // Overlapping static entry reached from 0xC02BFF.
    case 0xC02C01: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/spawn_vertical.asm:102 STA ENEMY_SPAWN_RANGE_HEIGHT
    case 0xC02C02: cpu.execute_instruction<0x8D>(0x004A64, 3); return true;
    // src/overworld/spawn_vertical.asm:103 LDY @LOCAL00
    case 0xC02C05: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/overworld/spawn_vertical.asm:104 STY @VIRTUAL04
    case 0xC02C07: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:105 INC @VIRTUAL02
    case 0xC02C09: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:106 LDA @VIRTUAL02
    case 0xC02C0B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:107 CMP #6
    case 0xC02C0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/overworld/spawn_vertical.asm:107 CMP #6
    // Overlapping static entry reached from 0xC02C0D.
    case 0xC02C0F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_vertical.asm:108 BNE @UNKNOWN9
    case 0xC02C10: cpu.execute_instruction<0xD0>(0x0000CA, 2); return true;
    // src/overworld/spawn_vertical.asm:109 BRA @UNKNOWN11
    case 0xC02C12: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/overworld/spawn_vertical.asm:111 LDY @LOCAL05
    case 0xC02C14: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:112 LDX @LOCAL01
    case 0xC02C16: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/overworld/spawn_vertical.asm:113 LDA @LOCAL03
    case 0xC02C18: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/overworld/spawn_vertical.asm:114 JSR UNKNOWN_C02668
    case 0xC02C1A: cpu.execute_instruction<0x20>(0x002668, 3); return true;
    // src/overworld/spawn_vertical.asm:116 LDX @VIRTUAL02
    case 0xC02C1D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:117 LDA @VIRTUAL02
    case 0xC02C1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:118 DEC
    case 0xC02C21: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:119 STA @VIRTUAL02
    case 0xC02C22: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/spawn_vertical.asm:120 CPX #0
    case 0xC02C24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/overworld/spawn_vertical.asm:120 CPX #0
    // Overlapping static entry reached from 0xC02C24.
    case 0xC02C26: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/spawn_vertical.asm:121 BNE @UNKNOWN10
    case 0xC02C27: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/overworld/spawn_vertical.asm:122 INC @VIRTUAL04
    case 0xC02C29: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/spawn_vertical.asm:124 LDA @LOCAL02
    case 0xC02C2B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/spawn_vertical.asm:125 CLC
    case 0xC02C2D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:126 ADC #5
    case 0xC02C2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x000005, 3); return true;
    // src/overworld/spawn_vertical.asm:126 ADC #5
    // Overlapping static entry reached from 0xC02C2E.
    case 0xC02C30: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/spawn_vertical.asm:127 CLC
    case 0xC02C31: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/spawn_vertical.asm:128 SBC @VIRTUAL04
    case 0xC02C32: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C34: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C36: cpu.execute_instruction<0x10>(0x000092, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C38: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/spawn_vertical.asm:129 BRANCHGTS @UNKNOWN8
    case 0xC02C3A: cpu.execute_instruction<0x30>(0x00008E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/spawn_vertical.asm:131 END_C_FUNCTION
    case 0xC02C3C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/spawn_vertical.asm:131 END_C_FUNCTION
    case 0xC02C3D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/talk_to.asm (source_named).
bool execute_overworld_talk_to_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/talk_to.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13187: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC13189: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1318A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1318B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1318B.
    case 0xC1318D: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/talk_to.asm:7 END_STACK_VARS
    case 0xC1318E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1318F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1318F.
    case 0xC13191: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13192: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13194: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13194.
    case 0xC13196: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:8 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13197: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC13199: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC13199.
    case 0xC1319B: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/talk_to.asm:9 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1319C: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/overworld/talk_to.asm:10 JSL FIND_NEARBY_TALKABLE_TPT_ENTRY
    case 0xC1319F: cpu.execute_instruction<0x22>(0xC04452, 4); return true;
    // src/overworld/talk_to.asm:11 LDA INTERACTING_NPC_ID
    case 0xC131A3: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC131A6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:12 BEQL @UNKNOWN4
    case 0xC131A8: cpu.execute_instruction<0x4C>(0x003231, 3); return true;
    // src/overworld/talk_to.asm:13 LDA INTERACTING_NPC_ID
    case 0xC131AB: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    case 0xC131AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/overworld/talk_to.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC131AE.
    case 0xC131B0: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC131B1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    case 0xC131B3: cpu.execute_instruction<0x4C>(0x003231, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/talk_to.asm:15 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC131B0.
    case 0xC131B4: cpu.execute_instruction<0x31>(0x000032, 2); return true;
    // src/overworld/talk_to.asm:16 LDA INTERACTING_NPC_ID
    case 0xC131B6: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    case 0xC131B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00FFFE, 3); return true;
    // src/overworld/talk_to.asm:17 CMP #.LOWORD(-2)
    // Overlapping static entry reached from 0xC131B9.
    case 0xC131BB: cpu.execute_instruction<0xFF>(0xAD0CD0, 4); return true;
    // src/overworld/talk_to.asm:18 BNE @UNKNOWN2
    case 0xC131BC: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131BE: cpu.execute_instruction<0xAD>(0x005DDE, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC131BB.
    case 0xC131BF: cpu.execute_instruction<0xDE>(0x00855D, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    // Overlapping static entry reached from 0xC131BF.
    case 0xC131C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131C3: cpu.execute_instruction<0xAD>(0x005DE0, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:19 MOVE_INT MAP_OBJECT_TEXT, @VIRTUAL0A
    case 0xC131C6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/talk_to.asm:20 BRA @UNKNOWN4
    case 0xC131C8: cpu.execute_instruction<0x80>(0x000067, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CA.
    case 0xC131CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CC.
    case 0xC131CE: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CE.
    case 0xC131D0: cpu.execute_instruction<0xCF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC131CF.
    case 0xC131D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/talk_to.asm:22 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL06
    case 0xC131D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC131DA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/talk_to.asm:24 LDA INTERACTING_NPC_ID
    case 0xC131DC: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131DF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:25 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC131E5: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/talk_to.asm:26 CLC
    case 0xC131E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:27 ADC @VIRTUAL06
    case 0xC131E8: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:28 STA @VIRTUAL06
    case 0xC131EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:29 LDA [@VIRTUAL06]
    case 0xC131EC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:30 AND #$00FF
    case 0xC131EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/talk_to.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC131EE.
    case 0xC131F0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    case 0xC131F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/talk_to.asm:31 CMP #NPC_TYPE::PERSON
    // Overlapping static entry reached from 0xC131F1.
    case 0xC131F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/talk_to.asm:32 BEQ @UNKNOWN3
    case 0xC131F4: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    case 0xC131F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/talk_to.asm:33 CMP #NPC_TYPE::ITEM_BOX
    // Overlapping static entry reached from 0xC131F6.
    case 0xC131F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/talk_to.asm:34 BEQ @UNKNOWN4
    case 0xC131F9: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    case 0xC131FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/talk_to.asm:35 CMP #NPC_TYPE::OBJECT
    // Overlapping static entry reached from 0xC131FB.
    case 0xC131FD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/talk_to.asm:36 BEQ @UNKNOWN4
    case 0xC131FE: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/overworld/talk_to.asm:37 BRA @UNKNOWN4
    case 0xC13200: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/overworld/talk_to.asm:39 LDA INTERACTING_NPC_ENTITY
    case 0xC13202: cpu.execute_instruction<0xAD>(0x005D64, 3); return true;
    // src/overworld/talk_to.asm:40 JSL UNKNOWN_C042C2
    case 0xC13205: cpu.execute_instruction<0x22>(0xC042C2, 4); return true;
    // src/overworld/talk_to.asm:41 LDA INTERACTING_NPC_ID
    case 0xC13209: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1320C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1320E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1320F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13210: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13211: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/talk_to.asm:42 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC13212: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/talk_to.asm:43 CLC
    case 0xC13214: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    case 0xC13215: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/overworld/talk_to.asm:44 ADC #npc_config::text_pointer
    // Overlapping static entry reached from 0xC13215.
    case 0xC13217: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC13218: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC1321A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC1321C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/talk_to.asm:45 MOVE_INTX @LOCAL00, @VIRTUAL06
    case 0xC1321E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/talk_to.asm:46 CLC
    case 0xC13220: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/talk_to.asm:47 ADC @VIRTUAL06
    case 0xC13221: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/talk_to.asm:48 STA @VIRTUAL06
    case 0xC13223: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13225: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13225.
    case 0xC13227: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC13228: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/talk_to.asm:49 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC1322F: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13231: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13233: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13235: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/talk_to.asm:51 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC13237: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC13239: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/talk_to.asm:52 END_C_FUNCTION
    case 0xC1323A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/teleport.asm (source_named).
bool execute_overworld_teleport_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/teleport.asm:3 BEGIN_C_FUNCTION
    case 0xC1BCAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCAD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCAE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCAF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x00FFE6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1BCB0.
    case 0xC1BCB2: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCB3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/teleport.asm:10 END_STACK_VARS
    case 0xC1BCB4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/teleport.asm:11 STA @LOCAL03
    case 0xC1BCB5: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/teleport.asm:11 STA @LOCAL03
    // Overlapping static entry reached from 0xC1BCB2.
    case 0xC1BCB6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:12 LDA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BCB7: cpu.execute_instruction<0xAD>(0x005D98, 3); return true;
    // src/overworld/teleport.asm:13 STA @LOCAL02
    case 0xC1BCBA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/teleport.asm:14 LDA #1
    case 0xC1BCBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/teleport.asm:14 LDA #1
    // Overlapping static entry reached from 0xC1BCBC.
    case 0xC1BCBE: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/overworld/teleport.asm:15 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BCBF: cpu.execute_instruction<0x8D>(0x005D98, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AB, 2); else cpu.execute_instruction<0xA9>(0x00EBAB, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BCC2.
    case 0xC1BCC4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCC5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1BCC7.
    case 0xC1BCC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/teleport.asm:16 LOADPTR TELEPORT_DESTINATION_TABLE, @VIRTUAL0A
    case 0xC1BCCA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:17 LDA @LOCAL03
    case 0xC1BCCC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:545 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BCCE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:546 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BCCF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:547 ASL
    // Macro caller: src/overworld/teleport.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(teleport_destination)
    case 0xC1BCD0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:19 CLC
    case 0xC1BCD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:20 ADC @VIRTUAL0A
    case 0xC1BCD2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:21 STA @VIRTUAL0A
    case 0xC1BCD4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:22 STA @LOCAL01
    case 0xC1BCD6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/teleport.asm:23 LDA @VIRTUAL0A+2
    case 0xC1BCD8: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:24 STA @LOCAL01+2
    case 0xC1BCDA: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/teleport.asm:25 LDY #1
    case 0xC1BCDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/overworld/teleport.asm:25 LDY #1
    // Overlapping static entry reached from 0xC1BCDC.
    case 0xC1BCDE: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/teleport.asm:26 STY @LOCAL03
    case 0xC1BCDF: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/overworld/teleport.asm:27 BRA @UNKNOWN1
    case 0xC1BCE1: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/overworld/teleport.asm:29 LDX #0
    case 0xC1BCE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/teleport.asm:29 LDX #0
    // Overlapping static entry reached from 0xC1BCE3.
    case 0xC1BCE5: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/teleport.asm:30 TYA
    case 0xC1BCE6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/teleport.asm:31 JSL SET_EVENT_FLAG
    case 0xC1BCE7: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/overworld/teleport.asm:32 LDY @LOCAL03
    case 0xC1BCEB: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/overworld/teleport.asm:33 INY
    case 0xC1BCED: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/teleport.asm:34 STY @LOCAL03
    case 0xC1BCEE: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/overworld/teleport.asm:36 CPY #10
    case 0xC1BCF0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/overworld/teleport.asm:36 CPY #10
    // Overlapping static entry reached from 0xC1BCF0.
    case 0xC1BCF2: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/teleport.asm:37 BLTEQ @UNKNOWN0
    case 0xC1BCF3: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/teleport.asm:37 BLTEQ @UNKNOWN0
    case 0xC1BCF5: cpu.execute_instruction<0xF0>(0x0000EC, 2); return true;
    // src/overworld/teleport.asm:38 JSL UNKNOWN_C06B3D
    case 0xC1BCF7: cpu.execute_instruction<0x22>(0xC06B3D, 4); return true;
    // src/overworld/teleport.asm:39 LDA #teleport_destination::screen_transition
    case 0xC1BCFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/teleport.asm:39 LDA #teleport_destination::screen_transition
    // Overlapping static entry reached from 0xC1BCFB.
    case 0xC1BCFD: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BCFE: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD00: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD02: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:40 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD04: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/teleport.asm:41 CLC
    case 0xC1BD06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:42 ADC @VIRTUAL06
    case 0xC1BD07: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/teleport.asm:43 STA @VIRTUAL06
    case 0xC1BD09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/teleport.asm:44 LDX #1
    case 0xC1BD0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:44 LDX #1
    // Overlapping static entry reached from 0xC1BD0B.
    case 0xC1BD0D: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:45 LDA [@VIRTUAL06]
    case 0xC1BD0E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:46 AND #$00FF
    case 0xC1BD10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC1BD10.
    case 0xC1BD12: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:47 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC1BD13: cpu.execute_instruction<0x22>(0xC068AF, 4); return true;
    // src/overworld/teleport.asm:48 JSL PLAY_SOUND
    case 0xC1BD17: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/teleport.asm:49 LDA DISABLED_TRANSITIONS
    case 0xC1BD1B: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/overworld/teleport.asm:50 BEQ @UNKNOWN2
    case 0xC1BD1E: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:51 LDX #1
    case 0xC1BD20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:51 LDX #1
    // Overlapping static entry reached from 0xC1BD20.
    case 0xC1BD22: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/teleport.asm:52 TXA
    case 0xC1BD23: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:53 JSL FADE_OUT
    case 0xC1BD24: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/overworld/teleport.asm:54 BRA @UNKNOWN3
    case 0xC1BD28: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:56 LDX #1
    case 0xC1BD2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:56 LDX #1
    // Overlapping static entry reached from 0xC1BD2A.
    case 0xC1BD2C: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:57 LDA [@VIRTUAL06]
    case 0xC1BD2D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:58 AND #$00FF
    case 0xC1BD2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:58 AND #$00FF
    // Overlapping static entry reached from 0xC1BD2F.
    case 0xC1BD31: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:59 JSL SCREEN_TRANSITION
    case 0xC1BD32: cpu.execute_instruction<0x22>(0xC06662, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD36: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD3A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:61 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD3C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/teleport.asm:62 LDA [@VIRTUAL06] ;teleport_destination::x_coord
    case 0xC1BD3E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:63 ASL
    case 0xC1BD40: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:64 ASL
    case 0xC1BD41: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:65 ASL
    case 0xC1BD42: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:66 STA @LOCAL03
    case 0xC1BD43: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/teleport.asm:67 LDY #teleport_destination::y_coord
    case 0xC1BD45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/overworld/teleport.asm:67 LDY #teleport_destination::y_coord
    // Overlapping static entry reached from 0xC1BD45.
    case 0xC1BD47: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/teleport.asm:68 LDA [@VIRTUAL0A],Y
    case 0xC1BD48: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:69 ASL
    case 0xC1BD4A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:70 ASL
    case 0xC1BD4B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:71 ASL
    case 0xC1BD4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:72 STA @VIRTUAL04
    case 0xC1BD4D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/teleport.asm:73 LDA #teleport_destination::direction
    case 0xC1BD4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/overworld/teleport.asm:73 LDA #teleport_destination::direction
    // Overlapping static entry reached from 0xC1BD4F.
    case 0xC1BD51: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD52: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD54: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD56: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:74 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BD58: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/teleport.asm:75 CLC
    case 0xC1BD5A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:76 ADC @VIRTUAL06
    case 0xC1BD5B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/teleport.asm:77 STA @VIRTUAL06
    case 0xC1BD5D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/teleport.asm:78 LDA [@VIRTUAL06]
    case 0xC1BD5F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:79 AND #$00FF
    case 0xC1BD61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC1BD61.
    case 0xC1BD63: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/teleport.asm:80 AND #$007F
    case 0xC1BD64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/overworld/teleport.asm:80 AND #$007F
    // Overlapping static entry reached from 0xC1BD64.
    case 0xC1BD66: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/teleport.asm:81 DEC
    case 0xC1BD67: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:82 STA @VIRTUAL02
    case 0xC1BD68: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/teleport.asm:83 LDX @VIRTUAL04
    case 0xC1BD6A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/teleport.asm:84 LDA @LOCAL03
    case 0xC1BD6C: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/teleport.asm:85 JSL LOAD_MAP_AT_POSITION
    case 0xC1BD6E: cpu.execute_instruction<0x22>(0xC013F6, 4); return true;
    // src/overworld/teleport.asm:86 STZ PLAYER_HAS_MOVED_SINCE_MAP_LOAD
    case 0xC1BD72: cpu.execute_instruction<0x9C>(0x002890, 3); return true;
    // src/overworld/teleport.asm:87 LDY @VIRTUAL02
    case 0xC1BD75: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/overworld/teleport.asm:88 LDX @VIRTUAL04
    case 0xC1BD77: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/teleport.asm:89 LDA @LOCAL03
    case 0xC1BD79: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/teleport.asm:90 JSL UNKNOWN_C03FA9
    case 0xC1BD7B: cpu.execute_instruction<0x22>(0xC03FA9, 4); return true;
    // src/overworld/teleport.asm:91 LDA [@VIRTUAL06]
    case 0xC1BD7F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:92 AND #$00FF
    case 0xC1BD81: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:92 AND #$00FF
    // Overlapping static entry reached from 0xC1BD81.
    case 0xC1BD83: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/teleport.asm:93 AND #$0080
    case 0xC1BD84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/overworld/teleport.asm:93 AND #$0080
    // Overlapping static entry reached from 0xC1BD84.
    case 0xC1BD86: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/teleport.asm:94 BEQ @UNKNOWN4
    case 0xC1BD87: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/overworld/teleport.asm:95 LDA @VIRTUAL02
    case 0xC1BD89: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/teleport.asm:96 JSL UNKNOWN_C052D4
    case 0xC1BD8B: cpu.execute_instruction<0x22>(0xC052D4, 4); return true;
    // src/overworld/teleport.asm:98 LDX @VIRTUAL04
    case 0xC1BD8F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/teleport.asm:99 LDA @LOCAL03
    case 0xC1BD91: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/overworld/teleport.asm:100 JSL UNKNOWN_C068F4
    case 0xC1BD93: cpu.execute_instruction<0x22>(0xC068F4, 4); return true;
    // src/overworld/teleport.asm:101 JSL UNKNOWN_C069AF
    case 0xC1BD97: cpu.execute_instruction<0x22>(0xC069AF, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BD9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BD9B.
    case 0xC1BD9D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BD9E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BDA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1BDA0.
    case 0xC1BDA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/teleport.asm:102 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1BDA3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDA5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDA7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDA9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1BDAB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDAD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDAF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDB1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:104 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1BDB3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDB5: cpu.execute_instruction<0xAD>(0x009D1B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDBA: cpu.execute_instruction<0xAD>(0x009D1D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:105 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDBD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/teleport.asm:106 CMP @VIRTUAL0A+2
    case 0xC1BDBF: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:107 BNE @UNKNOWN5
    case 0xC1BDC1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/teleport.asm:108 LDA @VIRTUAL06
    case 0xC1BDC3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/teleport.asm:109 CMP @VIRTUAL0A
    case 0xC1BDC5: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:111 BEQ @UNKNOWN6
    case 0xC1BDC7: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDC9: cpu.execute_instruction<0xAD>(0x009D1B, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDCC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDCE: cpu.execute_instruction<0xAD>(0x009D1D, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:112 MOVE_INT POST_TELEPORT_CALLBACK, @VIRTUAL06
    case 0xC1BDD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/teleport.asm:113 PHA
    case 0xC1BDD3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDD4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDD6: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDD9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:114 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1BDDB: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/overworld/teleport.asm:115 PLA
    case 0xC1BDDE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/teleport.asm:116 JSL UNKNOWN_C09279
    case 0xC1BDDF: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE7: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:117 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC1BDE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDEB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDED: cpu.execute_instruction<0x8D>(0x009D1B, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDF0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/teleport.asm:118 MOVE_INT @VIRTUAL06, POST_TELEPORT_CALLBACK
    case 0xC1BDF2: cpu.execute_instruction<0x8D>(0x009D1D, 3); return true;
    // src/overworld/teleport.asm:120 JSL UNKNOWN_C065A3
    case 0xC1BDF5: cpu.execute_instruction<0x22>(0xC065A3, 4); return true;
    // src/overworld/teleport.asm:121 LDA #teleport_destination::screen_transition
    case 0xC1BDF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/overworld/teleport.asm:121 LDA #teleport_destination::screen_transition
    // Overlapping static entry reached from 0xC1BDF9.
    case 0xC1BDFB: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BDFC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BDFE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BE00: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:122 MOVE_INTX @LOCAL01, @VIRTUAL0A
    case 0xC1BE02: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE04: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE06: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE08: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/overworld/teleport.asm:123 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC1BE0A: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/overworld/teleport.asm:124 CLC
    case 0xC1BE0C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/teleport.asm:125 ADC @VIRTUAL06
    case 0xC1BE0D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/teleport.asm:126 STA @VIRTUAL06
    case 0xC1BE0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/teleport.asm:127 LDX #0
    case 0xC1BE11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/teleport.asm:127 LDX #0
    // Overlapping static entry reached from 0xC1BE11.
    case 0xC1BE13: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:128 LDA [@VIRTUAL06]
    case 0xC1BE14: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:129 AND #$00FF
    case 0xC1BE16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC1BE16.
    case 0xC1BE18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:130 JSL GET_SCREEN_TRANSITION_SOUND_EFFECT
    case 0xC1BE19: cpu.execute_instruction<0x22>(0xC068AF, 4); return true;
    // src/overworld/teleport.asm:131 JSL PLAY_SOUND
    case 0xC1BE1D: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/overworld/teleport.asm:132 LDA DISABLED_TRANSITIONS
    case 0xC1BE21: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/overworld/teleport.asm:133 BEQ @UNKNOWN7
    case 0xC1BE24: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/overworld/teleport.asm:134 LDX #1
    case 0xC1BE26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/teleport.asm:134 LDX #1
    // Overlapping static entry reached from 0xC1BE26.
    case 0xC1BE28: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/teleport.asm:135 TXA
    case 0xC1BE29: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/teleport.asm:136 JSL FADE_IN
    case 0xC1BE2A: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/teleport.asm:137 BRA @UNKNOWN8
    case 0xC1BE2E: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/overworld/teleport.asm:139 LDX #0
    case 0xC1BE30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/teleport.asm:139 LDX #0
    // Overlapping static entry reached from 0xC1BE30.
    case 0xC1BE32: cpu.execute_instruction<0x00>(0x0000A7, 2); return true;
    // src/overworld/teleport.asm:140 LDA [@VIRTUAL06]
    case 0xC1BE33: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/teleport.asm:141 AND #$00FF
    case 0xC1BE35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/teleport.asm:141 AND #$00FF
    // Overlapping static entry reached from 0xC1BE35.
    case 0xC1BE37: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/teleport.asm:142 JSL SCREEN_TRANSITION
    case 0xC1BE38: cpu.execute_instruction<0x22>(0xC06662, 4); return true;
    // src/overworld/teleport.asm:144 LDA #.LOWORD(-1)
    case 0xC1BE3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/teleport.asm:144 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1BE3C.
    case 0xC1BE3E: cpu.execute_instruction<0xFF>(0x5DC48D, 4); return true;
    // src/overworld/teleport.asm:145 STA STAIRS_DIRECTION
    case 0xC1BE3F: cpu.execute_instruction<0x8D>(0x005DC4, 3); return true;
    // src/overworld/teleport.asm:146 JSL SPAWN_BUZZ_BUZZ
    case 0xC1BE42: cpu.execute_instruction<0x22>(0xC06B21, 4); return true;
    // src/overworld/teleport.asm:147 LDA @LOCAL02
    case 0xC1BE46: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/overworld/teleport.asm:148 STA OVERWORLD_STATUS_SUPPRESSION
    case 0xC1BE48: cpu.execute_instruction<0x8D>(0x005D98, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/teleport.asm:149 END_C_FUNCTION
    case 0xC1BE4B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/teleport.asm:149 END_C_FUNCTION
    case 0xC1BE4C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/test_your_sanctuary_display.asm (source_named).
bool execute_overworld_test_your_sanctuary_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4E366: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/test_your_sanctuary_display.asm:32 END_C_FUNCTION
    case 0xC4E368: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/update_party.asm (source_named).
bool execute_overworld_update_party_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/update_party.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC034D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034D9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x00FFB2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC034DA.
    case 0xC034DC: cpu.execute_instruction<0xFF>(0xA3AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/update_party.asm:17 END_STACK_VARS
    case 0xC034DD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:18 LDA GAME_STATE+game_state::party_count
    case 0xC034DE: cpu.execute_instruction<0xAD>(0x0098A3, 3); return true;
    // src/overworld/update_party.asm:18 LDA GAME_STATE+game_state::party_count
    // Overlapping static entry reached from 0xC034DC.
    case 0xC034E0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/update_party.asm:19 AND #$00FF
    case 0xC034E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party.asm:19 AND #$00FF
    // Overlapping static entry reached from 0xC034E1.
    case 0xC034E3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party.asm:20 STA @PARTY_COUNT
    case 0xC034E4: cpu.execute_instruction<0x85>(0x00004C, 2); return true;
    // src/overworld/update_party.asm:21 LDA #0
    case 0xC034E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/update_party.asm:21 LDA #0
    // Overlapping static entry reached from 0xC034E6.
    case 0xC034E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party.asm:22 STA @LOCAL0A
    case 0xC034E9: cpu.execute_instruction<0x85>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:23 BRA @UNKNOWN1
    case 0xC034EB: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/overworld/update_party.asm:25 ASL
    case 0xC034ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:26 PHA
    case 0xC034EE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party.asm:27 LDA @LOCAL0A
    case 0xC034EF: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:28 TAX
    case 0xC034F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:29 LDA GAME_STATE+game_state::player_controlled_party_members,X
    case 0xC034F2: cpu.execute_instruction<0xBD>(0x009891, 3); return true;
    // src/overworld/update_party.asm:30 AND #$00FF
    case 0xC034F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC034F5.
    case 0xC034F7: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/overworld/update_party.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC034F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/update_party.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC034F8.
    case 0xC034FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/update_party.asm:32 JSL MULT168
    case 0xC034FB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/update_party.asm:33 TAX
    case 0xC034FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:34 LDA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC03500: cpu.execute_instruction<0xBD>(0x009A0B, 3); return true;
    // src/overworld/update_party.asm:35 PLX
    case 0xC03503: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:36 STA @LOCAL00,X
    case 0xC03504: cpu.execute_instruction<0x95>(0x00000E, 2); return true;
    // src/overworld/update_party.asm:37 LDA @LOCAL0A
    case 0xC03506: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:38 INC
    case 0xC03508: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:39 STA @LOCAL0A
    case 0xC03509: cpu.execute_instruction<0x85>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:41 CMP @PARTY_COUNT
    case 0xC0350B: cpu.execute_instruction<0xC5>(0x00004C, 2); return true;
    // src/overworld/update_party.asm:42 BCC @UNKNOWN0
    case 0xC0350D: cpu.execute_instruction<0x90>(0x0000DE, 2); return true;
    // src/overworld/update_party.asm:43 LDY #0
    case 0xC0350F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/update_party.asm:43 LDY #0
    // Overlapping static entry reached from 0xC0350F.
    case 0xC03511: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/update_party.asm:44 STY @LOCAL09
    case 0xC03512: cpu.execute_instruction<0x84>(0x000048, 2); return true;
    // src/overworld/update_party.asm:45 BRA @UNKNOWN6
    case 0xC03514: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/overworld/update_party.asm:47 LDA GAME_STATE + game_state::unknown96,Y
    case 0xC03516: cpu.execute_instruction<0xB9>(0x00988B, 3); return true;
    // src/overworld/update_party.asm:48 AND #$00FF
    case 0xC03519: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC03519.
    case 0xC0351B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party.asm:49 STA @LOCAL08
    case 0xC0351C: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party.asm:50 CMP #5
    case 0xC0351E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/overworld/update_party.asm:50 CMP #5
    // Overlapping static entry reached from 0xC0351E.
    case 0xC03520: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/update_party.asm:51 BCC @UNKNOWN3
    case 0xC03521: cpu.execute_instruction<0x90>(0x000008, 2); return true;
    // src/overworld/update_party.asm:52 CLC
    case 0xC03523: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:53 ADC #$0300
    case 0xC03524: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000300, 3); return true;
    // src/overworld/update_party.asm:53 ADC #$0300
    // Overlapping static entry reached from 0xC03524.
    case 0xC03526: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/overworld/update_party.asm:54 STA @LOCAL08
    case 0xC03527: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party.asm:54 STA @LOCAL08
    // Overlapping static entry reached from 0xC03526.
    case 0xC03528: cpu.execute_instruction<0x46>(0x000080, 2); return true;
    // src/overworld/update_party.asm:55 BRA @UNKNOWN5
    case 0xC03529: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/overworld/update_party.asm:55 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC03528.
    case 0xC0352A: cpu.execute_instruction<0x2C>(0x000A98, 3); return true;
    // src/overworld/update_party.asm:57 TYA
    case 0xC0352B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/update_party.asm:58 ASL
    case 0xC0352C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:59 TAX
    case 0xC0352D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:60 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC0352E: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/overworld/update_party.asm:61 ASL
    case 0xC03531: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:62 TAX
    case 0xC03532: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:63 LDA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC03533: cpu.execute_instruction<0xBD>(0x000E9A, 3); return true;
    // src/overworld/update_party.asm:64 LDY #.SIZEOF(char_struct)
    case 0xC03536: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/update_party.asm:64 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03536.
    case 0xC03538: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/update_party.asm:65 JSL MULT168
    case 0xC03539: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/update_party.asm:66 TAX
    case 0xC0353D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:67 LDA PARTY_CHARACTERS+char_struct::afflictions,X
    case 0xC0353E: cpu.execute_instruction<0xBD>(0x0099DC, 3); return true;
    // src/overworld/update_party.asm:68 AND #$00FF
    case 0xC03541: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC03541.
    case 0xC03543: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/update_party.asm:69 TAX
    case 0xC03544: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:70 CPX #1
    case 0xC03545: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/overworld/update_party.asm:70 CPX #1
    // Overlapping static entry reached from 0xC03545.
    case 0xC03547: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/update_party.asm:71 BEQ @UNKNOWN4
    case 0xC03548: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/update_party.asm:72 CPX #2
    case 0xC0354A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/overworld/update_party.asm:72 CPX #2
    // Overlapping static entry reached from 0xC0354A.
    case 0xC0354C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/update_party.asm:73 BNE @UNKNOWN5
    case 0xC0354D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/overworld/update_party.asm:75 LDA @LOCAL08
    case 0xC0354F: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party.asm:76 CLC
    case 0xC03551: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:77 ADC #$0100
    case 0xC03552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/overworld/update_party.asm:77 ADC #$0100
    // Overlapping static entry reached from 0xC03552.
    case 0xC03554: cpu.execute_instruction<0x01>(0x000085, 2); return true;
    // src/overworld/update_party.asm:78 STA @LOCAL08
    case 0xC03555: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party.asm:78 STA @LOCAL08
    // Overlapping static entry reached from 0xC03554.
    case 0xC03556: cpu.execute_instruction<0x46>(0x0000A4, 2); return true;
    // src/overworld/update_party.asm:80 LDY @LOCAL09
    case 0xC03557: cpu.execute_instruction<0xA4>(0x000048, 2); return true;
    // src/overworld/update_party.asm:80 LDY @LOCAL09
    // Overlapping static entry reached from 0xC03556.
    case 0xC03558: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party.asm:81 TYA
    case 0xC03559: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/update_party.asm:82 ASL
    case 0xC0355A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:83 TAX
    case 0xC0355B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:84 LDA @LOCAL08
    case 0xC0355C: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party.asm:85 STA @LOCAL01,X
    case 0xC0355E: cpu.execute_instruction<0x95>(0x00001A, 2); return true;
    // src/overworld/update_party.asm:86 LDA GAME_STATE + game_state::unknownA2,X
    case 0xC03560: cpu.execute_instruction<0xBD>(0x009897, 3); return true;
    // src/overworld/update_party.asm:87 STA @LOCAL02,X
    case 0xC03563: cpu.execute_instruction<0x95>(0x000026, 2); return true;
    // src/overworld/update_party.asm:88 LDA GAME_STATE + game_state::player_controlled_party_members,Y
    case 0xC03565: cpu.execute_instruction<0xB9>(0x009891, 3); return true;
    // src/overworld/update_party.asm:89 AND #$00FF
    case 0xC03568: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/update_party.asm:89 AND #$00FF
    // Overlapping static entry reached from 0xC03568.
    case 0xC0356A: cpu.execute_instruction<0x00>(0x000095, 2); return true;
    // src/overworld/update_party.asm:90 STA @LOCAL03,X
    case 0xC0356B: cpu.execute_instruction<0x95>(0x000032, 2); return true;
    // src/overworld/update_party.asm:91 INY
    case 0xC0356D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/update_party.asm:92 STY @LOCAL09
    case 0xC0356E: cpu.execute_instruction<0x84>(0x000048, 2); return true;
    // src/overworld/update_party.asm:94 CPY @PARTY_COUNT
    case 0xC03570: cpu.execute_instruction<0xC4>(0x00004C, 2); return true;
    // src/overworld/update_party.asm:95 BCC @UNKNOWN2
    case 0xC03572: cpu.execute_instruction<0x90>(0x0000A2, 2); return true;
    // src/overworld/update_party.asm:96 STZ @LOCAL07
    case 0xC03574: cpu.execute_instruction<0x64>(0x000044, 2); return true;
    // src/overworld/update_party.asm:97 JMP @UNKNOWN12
    case 0xC03576: cpu.execute_instruction<0x4C>(0x00360D, 3); return true;
    // src/overworld/update_party.asm:99 STZ @LOCAL06
    case 0xC03579: cpu.execute_instruction<0x64>(0x000042, 2); return true;
    // src/overworld/update_party.asm:100 JMP @UNKNOWN10
    case 0xC0357B: cpu.execute_instruction<0x4C>(0x0035FF, 3); return true;
    // src/overworld/update_party.asm:102 LDA @LOCAL06
    case 0xC0357E: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // src/overworld/update_party.asm:103 ASL
    case 0xC03580: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:104 STA @VIRTUAL02
    case 0xC03581: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/update_party.asm:105 TDC
    case 0xC03583: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:106 CLC
    case 0xC03584: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:107 ADC #@LOCAL01
    case 0xC03585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/overworld/update_party.asm:107 ADC #@LOCAL01
    // Overlapping static entry reached from 0xC03585.
    case 0xC03587: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:108 CLC
    case 0xC03588: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:109 ADC @VIRTUAL02
    case 0xC03589: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/update_party.asm:110 TAY
    case 0xC0358B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party.asm:111 LDA __BSS_START__,Y
    case 0xC0358C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/update_party.asm:112 STA @LOCAL08
    case 0xC0358F: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party.asm:113 LDA @VIRTUAL02
    case 0xC03591: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/update_party.asm:114 STA @VIRTUAL04
    case 0xC03593: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/update_party.asm:115 INC @VIRTUAL04
    case 0xC03595: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/update_party.asm:116 INC @VIRTUAL04
    case 0xC03597: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/overworld/update_party.asm:117 TDC
    case 0xC03599: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:118 CLC
    case 0xC0359A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:119 ADC #@LOCAL01
    case 0xC0359B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/overworld/update_party.asm:119 ADC #@LOCAL01
    // Overlapping static entry reached from 0xC0359B.
    case 0xC0359D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:120 CLC
    case 0xC0359E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:121 ADC @VIRTUAL04
    case 0xC0359F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/update_party.asm:122 TAX
    case 0xC035A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:123 LDA __BSS_START__,X
    case 0xC035A2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party.asm:124 STA @LOCAL0A
    case 0xC035A5: cpu.execute_instruction<0x85>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:125 LDA @LOCAL08
    case 0xC035A7: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party.asm:126 CMP @LOCAL0A
    case 0xC035A9: cpu.execute_instruction<0xC5>(0x00004A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/overworld/update_party.asm:127 BLTEQ @UNKNOWN9
    case 0xC035AB: cpu.execute_instruction<0x90>(0x000050, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/overworld/update_party.asm:127 BLTEQ @UNKNOWN9
    case 0xC035AD: cpu.execute_instruction<0xF0>(0x00004E, 2); return true;
    // src/overworld/update_party.asm:128 LDA @LOCAL0A
    case 0xC035AF: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:129 STA __BSS_START__,Y
    case 0xC035B1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/update_party.asm:130 LDA @LOCAL08
    case 0xC035B4: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party.asm:131 STA __BSS_START__,X
    case 0xC035B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/update_party.asm:132 TDC
    case 0xC035B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:133 CLC
    case 0xC035BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:134 ADC #@LOCAL02
    case 0xC035BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/overworld/update_party.asm:134 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC035BB.
    case 0xC035BD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:135 CLC
    case 0xC035BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:136 ADC @VIRTUAL02
    case 0xC035BF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/update_party.asm:137 TAY
    case 0xC035C1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party.asm:138 LDA __BSS_START__,Y
    case 0xC035C2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/update_party.asm:139 STA @LOCAL05
    case 0xC035C5: cpu.execute_instruction<0x85>(0x000040, 2); return true;
    // src/overworld/update_party.asm:140 TDC
    case 0xC035C7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:141 CLC
    case 0xC035C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:142 ADC #@LOCAL02
    case 0xC035C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x000026, 3); return true;
    // src/overworld/update_party.asm:142 ADC #@LOCAL02
    // Overlapping static entry reached from 0xC035C9.
    case 0xC035CB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:143 CLC
    case 0xC035CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:144 ADC @VIRTUAL04
    case 0xC035CD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/update_party.asm:145 TAX
    case 0xC035CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:146 LDA __BSS_START__,X
    case 0xC035D0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party.asm:147 STA __BSS_START__,Y
    case 0xC035D3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/update_party.asm:148 LDA @LOCAL05
    case 0xC035D6: cpu.execute_instruction<0xA5>(0x000040, 2); return true;
    // src/overworld/update_party.asm:149 STA __BSS_START__,X
    case 0xC035D8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/update_party.asm:150 TDC
    case 0xC035DB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:151 CLC
    case 0xC035DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:152 ADC #@LOCAL03
    case 0xC035DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/overworld/update_party.asm:152 ADC #@LOCAL03
    // Overlapping static entry reached from 0xC035DD.
    case 0xC035DF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:153 CLC
    case 0xC035E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:154 ADC @VIRTUAL02
    case 0xC035E1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/update_party.asm:155 TAY
    case 0xC035E3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party.asm:156 LDA __BSS_START__,Y
    case 0xC035E4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/overworld/update_party.asm:157 STA @LOCAL0A
    case 0xC035E7: cpu.execute_instruction<0x85>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:158 TDC
    case 0xC035E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:159 CLC
    case 0xC035EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:160 ADC #@LOCAL03
    case 0xC035EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/overworld/update_party.asm:160 ADC #@LOCAL03
    // Overlapping static entry reached from 0xC035EB.
    case 0xC035ED: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:161 CLC
    case 0xC035EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:162 ADC @VIRTUAL04
    case 0xC035EF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/update_party.asm:163 TAX
    case 0xC035F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:164 LDA __BSS_START__,X
    case 0xC035F2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party.asm:165 STA __BSS_START__,Y
    case 0xC035F5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/overworld/update_party.asm:166 LDA @LOCAL0A
    case 0xC035F8: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/overworld/update_party.asm:167 STA __BSS_START__,X
    case 0xC035FA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/update_party.asm:169 INC @LOCAL06
    case 0xC035FD: cpu.execute_instruction<0xE6>(0x000042, 2); return true;
    // src/overworld/update_party.asm:171 LDA @PARTY_COUNT
    case 0xC035FF: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // src/overworld/update_party.asm:172 DEC
    case 0xC03601: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:173 CMP @LOCAL06
    case 0xC03602: cpu.execute_instruction<0xC5>(0x000042, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/update_party.asm:174 BGTL @UNKNOWN8
    case 0xC03604: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/update_party.asm:174 BGTL @UNKNOWN8
    case 0xC03606: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/update_party.asm:174 BGTL @UNKNOWN8
    case 0xC03608: cpu.execute_instruction<0x4C>(0x00357E, 3); return true;
    // src/overworld/update_party.asm:175 INC @LOCAL07
    case 0xC0360B: cpu.execute_instruction<0xE6>(0x000044, 2); return true;
    // src/overworld/update_party.asm:177 LDA @PARTY_COUNT
    case 0xC0360D: cpu.execute_instruction<0xA5>(0x00004C, 2); return true;
    // src/overworld/update_party.asm:178 DEC
    case 0xC0360F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:179 CMP @LOCAL07
    case 0xC03610: cpu.execute_instruction<0xC5>(0x000044, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/overworld/update_party.asm:180 BGTL @UNKNOWN7
    case 0xC03612: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/overworld/update_party.asm:180 BGTL @UNKNOWN7
    case 0xC03614: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/overworld/update_party.asm:180 BGTL @UNKNOWN7
    case 0xC03616: cpu.execute_instruction<0x4C>(0x003579, 3); return true;
    // src/overworld/update_party.asm:181 LDA #0
    case 0xC03619: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/update_party.asm:181 LDA #0
    // Overlapping static entry reached from 0xC03619.
    case 0xC0361B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/update_party.asm:182 STA @LOCAL08
    case 0xC0361C: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party.asm:183 BRA @UNKNOWN15
    case 0xC0361E: cpu.execute_instruction<0x80>(0x000063, 2); return true;
    // src/overworld/update_party.asm:185 CLC
    case 0xC03620: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:186 ADC #.LOWORD(GAME_STATE)
    case 0xC03621: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F5, 2); else cpu.execute_instruction<0x69>(0x0097F5, 3); return true;
    // src/overworld/update_party.asm:186 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC03621.
    case 0xC03623: cpu.execute_instruction<0x97>(0x0000A8, 2); return true;
    // src/overworld/update_party.asm:187 TAY
    case 0xC03624: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/update_party.asm:188 LDA @LOCAL08
    case 0xC03625: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party.asm:189 ASL
    case 0xC03627: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:190 STA @VIRTUAL04
    case 0xC03628: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/update_party.asm:191 LDX @VIRTUAL04
    case 0xC0362A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/update_party.asm:192 SEP #PROC_FLAGS::ACCUM8
    case 0xC0362C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/update_party.asm:193 LDA @LOCAL01,X
    case 0xC0362E: cpu.execute_instruction<0xB5>(0x00001A, 2); return true;
    // src/overworld/update_party.asm:194 STA __BSS_START__ + game_state::unknown96,Y
    case 0xC03630: cpu.execute_instruction<0x99>(0x000096, 3); return true;
    // src/overworld/update_party.asm:195 REP #PROC_FLAGS::ACCUM8
    case 0xC03633: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/update_party.asm:196 LDA @VIRTUAL04
    case 0xC03635: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/update_party.asm:197 CLC
    case 0xC03637: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:198 ADC #.LOWORD(GAME_STATE) + game_state::unknownA2
    case 0xC03638: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000097, 2); else cpu.execute_instruction<0x69>(0x009897, 3); return true;
    // src/overworld/update_party.asm:198 ADC #.LOWORD(GAME_STATE) + game_state::unknownA2
    // Overlapping static entry reached from 0xC03638.
    case 0xC0363A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/update_party.asm:199 TAX
    case 0xC0363B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:200 STX @LOCAL04
    case 0xC0363C: cpu.execute_instruction<0x86>(0x00003E, 2); return true;
    // src/overworld/update_party.asm:201 LDX @VIRTUAL04
    case 0xC0363E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/update_party.asm:202 LDA @LOCAL02,X
    case 0xC03640: cpu.execute_instruction<0xB5>(0x000026, 2); return true;
    // src/overworld/update_party.asm:203 LDX @LOCAL04
    case 0xC03642: cpu.execute_instruction<0xA6>(0x00003E, 2); return true;
    // src/overworld/update_party.asm:204 STA __BSS_START__,X
    case 0xC03644: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/update_party.asm:205 TDC
    case 0xC03647: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/overworld/update_party.asm:206 CLC
    case 0xC03648: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:207 ADC #@LOCAL03
    case 0xC03649: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/overworld/update_party.asm:207 ADC #@LOCAL03
    // Overlapping static entry reached from 0xC03649.
    case 0xC0364B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/update_party.asm:208 CLC
    case 0xC0364C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/update_party.asm:209 ADC @VIRTUAL04
    case 0xC0364D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/update_party.asm:210 STA @VIRTUAL02
    case 0xC0364F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/update_party.asm:211 LDX @VIRTUAL02
    case 0xC03651: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC03653: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/update_party.asm:213 LDA __BSS_START__,X
    case 0xC03655: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party.asm:214 STA __BSS_START__ + game_state::player_controlled_party_members,Y
    case 0xC03658: cpu.execute_instruction<0x99>(0x00009C, 3); return true;
    // src/overworld/update_party.asm:215 LDX @VIRTUAL02
    case 0xC0365B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/update_party.asm:216 REP #PROC_FLAGS::ACCUM8
    case 0xC0365D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/update_party.asm:217 LDA __BSS_START__,X
    case 0xC0365F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party.asm:218 LDY #.SIZEOF(char_struct)
    case 0xC03662: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/update_party.asm:218 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC03662.
    case 0xC03664: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/update_party.asm:219 JSL MULT168
    case 0xC03665: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/update_party.asm:220 PHA
    case 0xC03669: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/update_party.asm:221 LDX @VIRTUAL04
    case 0xC0366A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/update_party.asm:222 LDA @LOCAL00,X
    case 0xC0366C: cpu.execute_instruction<0xB5>(0x00000E, 2); return true;
    // src/overworld/update_party.asm:223 PLX
    case 0xC0366E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:224 STA PARTY_CHARACTERS+char_struct::position_index,X
    case 0xC0366F: cpu.execute_instruction<0x9D>(0x009A0B, 3); return true;
    // src/overworld/update_party.asm:225 LDX @LOCAL04
    case 0xC03672: cpu.execute_instruction<0xA6>(0x00003E, 2); return true;
    // src/overworld/update_party.asm:226 LDA __BSS_START__,X
    case 0xC03674: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/update_party.asm:227 ASL
    case 0xC03677: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:228 TAX
    case 0xC03678: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/update_party.asm:229 LDA @VIRTUAL04
    case 0xC03679: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/update_party.asm:230 STA ENTITY_SCRIPT_VAR5_TABLE,X
    case 0xC0367B: cpu.execute_instruction<0x9D>(0x000F8A, 3); return true;
    // src/overworld/update_party.asm:231 LDA @LOCAL08
    case 0xC0367E: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // src/overworld/update_party.asm:232 INC
    case 0xC03680: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/update_party.asm:233 STA @LOCAL08
    case 0xC03681: cpu.execute_instruction<0x85>(0x000046, 2); return true;
    // src/overworld/update_party.asm:235 CMP @PARTY_COUNT
    case 0xC03683: cpu.execute_instruction<0xC5>(0x00004C, 2); return true;
    // src/overworld/update_party.asm:236 BCC @UNKNOWN14
    case 0xC03685: cpu.execute_instruction<0x90>(0x000099, 2); return true;
    // src/overworld/update_party.asm:237 LDA GAME_STATE +game_state::unknownA2
    case 0xC03687: cpu.execute_instruction<0xAD>(0x009897, 3); return true;
    // src/overworld/update_party.asm:238 STA GAME_STATE+game_state::current_party_members
    case 0xC0368A: cpu.execute_instruction<0x8D>(0x009889, 3); return true;
    // src/overworld/update_party.asm:239 JSL UNKNOWN_C032EC
    case 0xC0368D: cpu.execute_instruction<0x22>(0xC032EC, 4); return true;
    // src/overworld/update_party.asm:240 JSL UNKNOWN_C02C3E
    case 0xC03691: cpu.execute_instruction<0x22>(0xC02C3E, 4); return true;
    // src/overworld/update_party.asm:241 JSL UNKNOWN_C47F87
    case 0xC03695: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/update_party.asm:242 END_C_FUNCTION
    case 0xC03699: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/update_party.asm:242 END_C_FUNCTION
    case 0xC0369A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/use_item.asm (source_named).
bool execute_overworld_use_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_item.asm:3 BEGIN_C_FUNCTION
    case 0xC1AF74: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF76: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF77: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF78: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D2, 2); else cpu.execute_instruction<0x69>(0x00FFD2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC1AF79.
    case 0xC1AF7B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF7C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_item.asm:20 END_STACK_VARS
    case 0xC1AF7D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    case 0xC1AF7E: cpu.execute_instruction<0x86>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:21 STX @LOCAL0A
    // Overlapping static entry reached from 0xC1AF7B.
    case 0xC1AF7F: cpu.execute_instruction<0x2C>(0x000485, 3); return true;
    // src/overworld/use_item.asm:22 STA @VIRTUAL04
    case 0xC1AF80: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:23 STA @LOCAL09
    case 0xC1AF82: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF84.
    case 0xC1AF86: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF87: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AF89.
    case 0xC1AF8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1AF8C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF90: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF92: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:25 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1AF94: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:26 LDA #0
    case 0xC1AF96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:26 LDA #0
    // Overlapping static entry reached from 0xC1AF96.
    case 0xC1AF98: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:27 STA @VIRTUAL02
    case 0xC1AF99: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:28 STA @LOCAL07
    case 0xC1AF9B: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_item.asm:29 LDX @LOCAL0A
    case 0xC1AF9D: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:30 LDA @VIRTUAL04
    case 0xC1AF9F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_item.asm:31 JSL GET_CHARACTER_ITEM
    case 0xC1AFA1: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // src/overworld/use_item.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1AFA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:33 STA @VIRTUAL01
    case 0xC1AFA7: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/overworld/use_item.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1AFA9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:35 LDA @VIRTUAL01
    case 0xC1AFAB: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:36 AND #$00FF
    case 0xC1AFAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC1AFAD.
    case 0xC1AFAF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:37 STA @LOCAL06
    case 0xC1AFB0: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x005000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB2.
    case 0xC1AFB4: cpu.execute_instruction<0x50>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFB5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB4.
    case 0xC1AFB6: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB6.
    case 0xC1AFB8: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1AFB7.
    case 0xC1AFB9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:38 LOADPTR ITEM_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC1AFBA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:39 LDA @LOCAL06
    case 0xC1AFBC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AFBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC1AFBE.
    case 0xC1AFC0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/overworld/use_item.asm:40 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1AFC1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/use_item.asm:41 CLC
    case 0xC1AFC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:42 ADC @VIRTUAL06
    case 0xC1AFC6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_item.asm:43 STA @VIRTUAL06
    case 0xC1AFC8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/use_item.asm:44 STA @LOCAL05
    case 0xC1AFCA: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:45 LDA @VIRTUAL06+2
    case 0xC1AFCC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/overworld/use_item.asm:46 STA @LOCAL05+2
    case 0xC1AFCE: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_item.asm:47 LDY #item::type
    case 0xC1AFD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000019, 2); else cpu.execute_instruction<0xA0>(0x000019, 3); return true;
    // src/overworld/use_item.asm:47 LDY #item::type
    // Overlapping static entry reached from 0xC1AFD0.
    case 0xC1AFD2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:48 LDA [@LOCAL05],Y
    case 0xC1AFD3: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:49 AND #$00FF
    case 0xC1AFD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC1AFD5.
    case 0xC1AFD7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_item.asm:50 TAX
    case 0xC1AFD8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:51 STX @LOCAL04
    case 0xC1AFD9: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/overworld/use_item.asm:52 TXA
    case 0xC1AFDB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AFDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000030, 2); else cpu.execute_instruction<0x29>(0x000030, 3); return true;
    // src/overworld/use_item.asm:53 AND #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AFDC.
    case 0xC1AFDE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:54 BEQ @UNKNOWN1
    case 0xC1AFDF: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    case 0xC1AFE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/overworld/use_item.asm:55 CMP #ITEM_FLAGS::TRANSFORM
    // Overlapping static entry reached from 0xC1AFE1.
    case 0xC1AFE3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:56 BEQ @UNKNOWN2
    case 0xC1AFE4: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AFE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/overworld/use_item.asm:57 CMP #ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AFE6.
    case 0xC1AFE8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:58 BEQ @UNKNOWN3
    case 0xC1AFE9: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    case 0xC1AFEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/overworld/use_item.asm:59 CMP #ITEM_FLAGS::TRANSFORM | ITEM_FLAGS::CANNOT_GIVE
    // Overlapping static entry reached from 0xC1AFEB.
    case 0xC1AFED: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AFEE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:60 BEQL @UNKNOWN4
    case 0xC1AFF0: cpu.execute_instruction<0x4C>(0x00B085, 3); return true;
    // src/overworld/use_item.asm:61 JMP @UNKNOWN18
    case 0xC1AFF3: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:63 LDA #1
    case 0xC1AFF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:63 LDA #1
    // Overlapping static entry reached from 0xC1AFF6.
    case 0xC1AFF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:64 STA @VIRTUAL02
    case 0xC1AFF9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:65 STA @LOCAL07
    case 0xC1AFFB: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1AFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1AFFD.
    case 0xC1AFFF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B000: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B002.
    case 0xC1B004: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:66 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B005: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:67 LDY #item::effect
    case 0xC1B007: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:67 LDY #item::effect
    // Overlapping static entry reached from 0xC1B007.
    case 0xC1B009: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:68 LDA [@LOCAL05],Y
    case 0xC1B00A: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B00F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B011: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B012: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B013: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B014: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B015: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:70 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B016: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:71 CLC
    case 0xC1B017: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:72 ADC @VIRTUAL0A
    case 0xC1B018: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:73 STA @VIRTUAL0A
    case 0xC1B01A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B01C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B01C.
    case 0xC1B01E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B01F: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B021: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B022: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B024: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:74 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B026: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B028: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02A: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:75 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B02E: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:76 JMP @UNKNOWN18
    case 0xC1B030: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B033: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000042, 2); else cpu.execute_instruction<0xA9>(0x00C742, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B033.
    case 0xC1B035: cpu.execute_instruction<0xC7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B036: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B035.
    case 0xC1B037: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B038: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B037.
    case 0xC1B039: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B038.
    case 0xC1B03A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:78 LOADPTR MSG_SYS_GOODS_EQUIP, @VIRTUAL06
    case 0xC1B03B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B03D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B03F: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B041: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:79 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B043: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:80 JMP @UNKNOWN18
    case 0xC1B045: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:82 LDA #1
    case 0xC1B048: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:82 LDA #1
    // Overlapping static entry reached from 0xC1B048.
    case 0xC1B04A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:83 STA @VIRTUAL02
    case 0xC1B04B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:84 STA @LOCAL07
    case 0xC1B04D: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B04F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B04F.
    case 0xC1B051: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B052: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B054: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B054.
    case 0xC1B056: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:85 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B057: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:86 LDY #item::effect
    case 0xC1B059: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:86 LDY #item::effect
    // Overlapping static entry reached from 0xC1B059.
    case 0xC1B05B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:87 LDA [@LOCAL05],Y
    case 0xC1B05C: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B05E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B060: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B061: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B063: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:88 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B064: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B065: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B066: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B067: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:89 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B068: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:90 CLC
    case 0xC1B069: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:91 ADC @VIRTUAL0A
    case 0xC1B06A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:92 STA @VIRTUAL0A
    case 0xC1B06C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B06E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B06E.
    case 0xC1B070: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B071: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B073: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B074: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B076: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:93 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B078: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B07A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B07C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B07E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:94 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B080: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:95 JMP @UNKNOWN18
    case 0xC1B082: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:97 LDY #item::flags
    case 0xC1B085: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/overworld/use_item.asm:97 LDY #item::flags
    // Overlapping static entry reached from 0xC1B085.
    case 0xC1B087: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/use_item.asm:102 LDX @VIRTUAL04
    case 0xC1B088: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/use_item.asm:103 DEX
    case 0xC1B08A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:104 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B08B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:105 LDA f:ITEM_USABLE_FLAGS,X
    case 0xC1B08D: cpu.execute_instruction<0xBF>(0xC458AB, 4); return true;
    // src/overworld/use_item.asm:106 AND [@LOCAL05],Y
    case 0xC1B091: cpu.execute_instruction<0x37>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:107 REP #PROC_FLAGS::ACCUM8
    case 0xC1B093: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:108 AND #$00FF
    case 0xC1B095: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:108 AND #$00FF
    // Overlapping static entry reached from 0xC1B095.
    case 0xC1B097: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:109 BNE @CHAR_CAN_USE_ITEM
    case 0xC1B098: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B09A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x007EE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B09A.
    case 0xC1B09C: cpu.execute_instruction<0x7E>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B09D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B09F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B09F.
    case 0xC1B0A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:110 LOADPTR MSG_SYS_GOODS_USE_NG_USER, @VIRTUAL06
    case 0xC1B0A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0A6: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:111 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0AA: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:112 JMP @UNKNOWN18
    case 0xC1B0AC: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:114 LDX @LOCAL04
    case 0xC1B0AF: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/overworld/use_item.asm:115 TXA
    case 0xC1B0B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:116 AND #$000C
    case 0xC1B0B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/overworld/use_item.asm:116 AND #$000C
    // Overlapping static entry reached from 0xC1B0B2.
    case 0xC1B0B4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:117 BEQ @UNKNOWN6
    case 0xC1B0B5: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/overworld/use_item.asm:118 CMP #4
    case 0xC1B0B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/overworld/use_item.asm:118 CMP #4
    // Overlapping static entry reached from 0xC1B0B7.
    case 0xC1B0B9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:119 BEQ @UNKNOWN7
    case 0xC1B0BA: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/overworld/use_item.asm:120 CMP #8
    case 0xC1B0BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_item.asm:120 CMP #8
    // Overlapping static entry reached from 0xC1B0BC.
    case 0xC1B0BE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:121 BEQ @UNKNOWN8
    case 0xC1B0BF: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // src/overworld/use_item.asm:122 JMP @UNKNOWN18
    case 0xC1B0C1: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:124 LDA #1
    case 0xC1B0C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:124 LDA #1
    // Overlapping static entry reached from 0xC1B0C4.
    case 0xC1B0C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:125 STA @VIRTUAL02
    case 0xC1B0C7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:126 STA @LOCAL07
    case 0xC1B0C9: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0CB.
    case 0xC1B0CD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0CE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B0D0.
    case 0xC1B0D2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:127 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B0D3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:128 LDY #item::effect
    case 0xC1B0D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:128 LDY #item::effect
    // Overlapping static entry reached from 0xC1B0D5.
    case 0xC1B0D7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:129 LDA [@LOCAL05],Y
    case 0xC1B0D8: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B0E0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:131 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B0E4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:132 CLC
    case 0xC1B0E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:133 ADC @VIRTUAL0A
    case 0xC1B0E6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:134 STA @VIRTUAL0A
    case 0xC1B0E8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B0EA.
    case 0xC1B0EC: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0ED: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0EF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F0: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:135 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B0F4: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0F8: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:136 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B0FC: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:137 JMP @UNKNOWN18
    case 0xC1B0FE: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F1, 2); else cpu.execute_instruction<0xA9>(0x00C6F1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B101.
    case 0xC1B103: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B104: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B103.
    case 0xC1B105: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B105.
    case 0xC1B107: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B106.
    case 0xC1B108: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:139 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B109: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B10B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B10D: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B10F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:140 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B111: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:141 JMP @UNKNOWN18
    case 0xC1B113: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:143 TXA
    case 0xC1B116: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:144 AND #$0003
    case 0xC1B117: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/use_item.asm:144 AND #$0003
    // Overlapping static entry reached from 0xC1B117.
    case 0xC1B119: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:145 BEQ @UNKNOWN10
    case 0xC1B11A: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/overworld/use_item.asm:146 CMP #1
    case 0xC1B11C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:146 CMP #1
    // Overlapping static entry reached from 0xC1B11C.
    case 0xC1B11E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:147 BEQ @UNKNOWN10
    case 0xC1B11F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/overworld/use_item.asm:148 CMP #2
    case 0xC1B121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/use_item.asm:148 CMP #2
    // Overlapping static entry reached from 0xC1B121.
    case 0xC1B123: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:149 BEQ @UNKNOWN11
    case 0xC1B124: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/overworld/use_item.asm:150 CMP #3
    case 0xC1B126: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/use_item.asm:150 CMP #3
    // Overlapping static entry reached from 0xC1B126.
    case 0xC1B128: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1B129: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:151 BEQL @UNKNOWN14
    case 0xC1B12B: cpu.execute_instruction<0x4C>(0x00B1F2, 3); return true;
    // src/overworld/use_item.asm:152 JMP @UNKNOWN18
    case 0xC1B12E: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:154 LDA #1
    case 0xC1B131: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:154 LDA #1
    // Overlapping static entry reached from 0xC1B131.
    case 0xC1B133: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:155 STA @VIRTUAL02
    case 0xC1B134: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:156 STA @LOCAL07
    case 0xC1B136: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B138: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B138.
    case 0xC1B13A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B13B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B13D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B13D.
    case 0xC1B13F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:157 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B140: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:158 LDY #item::effect
    case 0xC1B142: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:158 LDY #item::effect
    // Overlapping static entry reached from 0xC1B142.
    case 0xC1B144: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:159 LDA [@LOCAL05],Y
    case 0xC1B145: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B147: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B149: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B14A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B14C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B14D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B14E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B14F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B150: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:161 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B151: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:162 CLC
    case 0xC1B152: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:163 ADC @VIRTUAL0A
    case 0xC1B153: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:164 STA @VIRTUAL0A
    case 0xC1B155: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B157: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B157.
    case 0xC1B159: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B15F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:165 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B161: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B163: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B165: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B167: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:166 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B169: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:167 JMP @UNKNOWN18
    case 0xC1B16B: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:169 JSR UNKNOWN_C1AD7D
    case 0xC1B16E: cpu.execute_instruction<0x20>(0x00AD7D, 3); return true;
    // src/overworld/use_item.asm:170 TAX
    case 0xC1B171: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:171 LDA @LOCAL06
    case 0xC1B172: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/overworld/use_item.asm:172 STA @VIRTUAL02
    case 0xC1B174: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:173 TXA
    case 0xC1B176: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:174 CMP @VIRTUAL02
    case 0xC1B177: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/use_item.asm:175 BNE @UNKNOWN13
    case 0xC1B179: cpu.execute_instruction<0xD0>(0x000062, 2); return true;
    // src/overworld/use_item.asm:176 LDA @LOCAL06
    case 0xC1B17B: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    case 0xC1B17D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000B0, 2); else cpu.execute_instruction<0xC9>(0x0000B0, 3); return true;
    // src/overworld/use_item.asm:177 CMP #ITEM::BICYCLE
    // Overlapping static entry reached from 0xC1B17D.
    case 0xC1B17F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:178 BNE @UNKNOWN12
    case 0xC1B180: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:179 JSL UNKNOWN_C03C4B
    case 0xC1B182: cpu.execute_instruction<0x22>(0xC03C4B, 4); return true;
    // src/overworld/use_item.asm:180 CMP #0
    case 0xC1B186: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:180 CMP #0
    // Overlapping static entry reached from 0xC1B186.
    case 0xC1B188: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:181 BEQ @UNKNOWN12
    case 0xC1B189: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B18B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000033, 2); else cpu.execute_instruction<0xA9>(0x00C833, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B18B.
    case 0xC1B18D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B18E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B190: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B190.
    case 0xC1B192: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:182 LOADPTR MSG_SYS_BICYCLE_ATARI_HERE, @VIRTUAL06
    case 0xC1B193: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B195: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B197: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B199: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:183 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B19B: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:184 JMP @UNKNOWN18
    case 0xC1B19D: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:186 LDA #1
    case 0xC1B1A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:186 LDA #1
    // Overlapping static entry reached from 0xC1B1A0.
    case 0xC1B1A2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:187 STA @VIRTUAL02
    case 0xC1B1A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:188 STA @LOCAL07
    case 0xC1B1A5: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B1A7.
    case 0xC1B1A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1AA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B1AC.
    case 0xC1B1AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:189 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B1AF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:190 LDY #item::effect
    case 0xC1B1B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:190 LDY #item::effect
    // Overlapping static entry reached from 0xC1B1B1.
    case 0xC1B1B3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:191 LDA [@LOCAL05],Y
    case 0xC1B1B4: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1B8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1B9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:192 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B1BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1BF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:193 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B1C0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:194 CLC
    case 0xC1B1C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:195 ADC @VIRTUAL0A
    case 0xC1B1C2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:196 STA @VIRTUAL0A
    case 0xC1B1C4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1C6.
    case 0xC1B1C8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1C9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1CB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1CC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:197 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B1D0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D4: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:198 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1D8: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:199 JMP @UNKNOWN18
    case 0xC1B1DA: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F1, 2); else cpu.execute_instruction<0xA9>(0x00C6F1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1DD.
    case 0xC1B1DF: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1E0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1DF.
    case 0xC1B1E1: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1E1.
    case 0xC1B1E3: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B1E2.
    case 0xC1B1E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:201 LOADPTR MSG_SYS_GOODS_USE_NG_HERE, @VIRTUAL06
    case 0xC1B1E5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1E9: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:202 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B1ED: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:203 JMP @UNKNOWN18
    case 0xC1B1EF: cpu.execute_instruction<0x4C>(0x00B28C, 3); return true;
    // src/overworld/use_item.asm:205 LDA #1
    case 0xC1B1F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:205 LDA #1
    // Overlapping static entry reached from 0xC1B1F2.
    case 0xC1B1F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:206 STA @VIRTUAL02
    case 0xC1B1F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:207 STA @LOCAL07
    case 0xC1B1F7: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_item.asm:208 JSR UNKNOWN_C1AD42
    case 0xC1B1F9: cpu.execute_instruction<0x20>(0x00AD42, 3); return true;
    // src/overworld/use_item.asm:209 REP #PROC_FLAGS::ACCUM8
    case 0xC1B1FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:210 AND #$00FF
    case 0xC1B1FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC1B1FE.
    case 0xC1B200: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/overworld/use_item.asm:211 CMP #1
    case 0xC1B201: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:211 CMP #1
    // Overlapping static entry reached from 0xC1B201.
    case 0xC1B203: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:212 BEQ @UNKNOWN15
    case 0xC1B204: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/overworld/use_item.asm:213 CMP #3
    case 0xC1B206: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/overworld/use_item.asm:213 CMP #3
    // Overlapping static entry reached from 0xC1B206.
    case 0xC1B208: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:214 BNE @UNKNOWN16
    case 0xC1B209: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B20B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x008985, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B20B.
    case 0xC1B20D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B20E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B20D.
    case 0xC1B20F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0000CF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B210.
    case 0xC1B212: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:216 LOADPTR NPC_CONFIG_TABLE, @VIRTUAL0A
    case 0xC1B213: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:217 LDA INTERACTING_NPC_ID
    case 0xC1B215: cpu.execute_instruction<0xAD>(0x005D62, 3); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B218: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/overworld/use_item.asm:218 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(npc_config)
    case 0xC1B21E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/overworld/use_item.asm:219 CLC
    case 0xC1B220: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    case 0xC1B221: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/overworld/use_item.asm:220 ADC #npc_config::text_pointer2
    // Overlapping static entry reached from 0xC1B221.
    case 0xC1B223: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:221 CLC
    case 0xC1B224: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:222 ADC @VIRTUAL0A
    case 0xC1B225: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:223 STA @VIRTUAL0A
    case 0xC1B227: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B229: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B229.
    case 0xC1B22B: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B22C: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B22E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B22F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B231: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:224 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B233: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B235: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B237: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B239: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:225 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B23B: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B23D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B23D.
    case 0xC1B23F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B240: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B242.
    case 0xC1B244: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:227 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B245: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B247: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B249: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B24B: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:228 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B24D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:229 CMP @VIRTUAL0A+2
    case 0xC1B24F: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:230 BNE @UNKNOWN17
    case 0xC1B251: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/use_item.asm:231 LDA @VIRTUAL06
    case 0xC1B253: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/use_item.asm:232 CMP @VIRTUAL0A
    case 0xC1B255: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:234 BNE @UNKNOWN18
    case 0xC1B257: cpu.execute_instruction<0xD0>(0x000033, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B259.
    case 0xC1B25B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B25C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B25E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B25E.
    case 0xC1B260: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:235 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B261: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:236 LDY #item::effect
    case 0xC1B263: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:236 LDY #item::effect
    // Overlapping static entry reached from 0xC1B263.
    case 0xC1B265: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:237 LDA [@LOCAL05],Y
    case 0xC1B266: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B268: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:238 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B26E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:508 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B26F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:509 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B270: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:510 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B271: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:511 INC
    // Macro caller: src/overworld/use_item.asm:239 OPTIMIZED_ADD battle_action::description_text_pointer
    case 0xC1B272: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:240 CLC
    case 0xC1B273: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:241 ADC @VIRTUAL0A
    case 0xC1B274: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:242 STA @VIRTUAL0A
    case 0xC1B276: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B278: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B278.
    case 0xC1B27A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B27B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B27D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B27E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B280: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:243 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B282: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B284: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B286: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B288: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:244 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B28A: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:246 LDA @LOCAL09
    case 0xC1B28C: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_item.asm:247 STA @VIRTUAL04
    case 0xC1B28E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B290: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:249 STA @VIRTUAL00
    case 0xC1B292: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/use_item.asm:250 REP #PROC_FLAGS::ACCUM8
    case 0xC1B294: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:251 LDA @LOCAL07
    case 0xC1B296: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/overworld/use_item.asm:252 STA @VIRTUAL02
    case 0xC1B298: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:253 BEQ @UNKNOWN20
    case 0xC1B29A: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/overworld/use_item.asm:254 LDX @VIRTUAL04
    case 0xC1B29C: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/overworld/use_item.asm:255 LDY #item::effect
    case 0xC1B29E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:255 LDY #item::effect
    // Overlapping static entry reached from 0xC1B29E.
    case 0xC1B2A0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:256 LDA [@LOCAL05],Y
    case 0xC1B2A1: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:257 JSR DETERMINE_TARGETTING
    case 0xC1B2A3: cpu.execute_instruction<0x20>(0x00ADB4, 3); return true;
    // src/overworld/use_item.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2A6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:259 STA @VIRTUAL00
    case 0xC1B2A8: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/overworld/use_item.asm:260 REP #PROC_FLAGS::ACCUM8
    case 0xC1B2AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:261 LDA @VIRTUAL00
    case 0xC1B2AC: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:262 AND #$00FF
    case 0xC1B2AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC1B2AE.
    case 0xC1B2B0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_item.asm:263 BNE @UNKNOWN19
    case 0xC1B2B1: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/use_item.asm:264 LDA #0
    case 0xC1B2B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:264 LDA #0
    // Overlapping static entry reached from 0xC1B2B3.
    case 0xC1B2B5: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/overworld/use_item.asm:265 JMP @UNKNOWN43
    case 0xC1B2B6: cpu.execute_instruction<0x4C>(0x00B5B4, 3); return true;
    // src/overworld/use_item.asm:267 LDY #item::flags
    case 0xC1B2B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/overworld/use_item.asm:267 LDY #item::flags
    // Overlapping static entry reached from 0xC1B2B9.
    case 0xC1B2BB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:268 LDA [@LOCAL05],Y
    case 0xC1B2BC: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // src/overworld/use_item.asm:269 AND #$00FF
    case 0xC1B2BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:269 AND #$00FF
    // Overlapping static entry reached from 0xC1B2BE.
    case 0xC1B2C0: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    case 0xC1B2C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/overworld/use_item.asm:270 AND #ITEM_FLAGS::CONSUMED_ON_USE
    // Overlapping static entry reached from 0xC1B2C1.
    case 0xC1B2C3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:271 BEQ @UNKNOWN20
    case 0xC1B2C4: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/overworld/use_item.asm:272 LDX @LOCAL0A
    case 0xC1B2C6: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:273 LDA @VIRTUAL04
    case 0xC1B2C8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_item.asm:274 JSR REMOVE_ITEM_FROM_INVENTORY
    case 0xC1B2CA: cpu.execute_instruction<0x20>(0x008C27, 3); return true;
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    case 0xC1B2CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/overworld/use_item.asm:276 LDA #WINDOW::INVENTORY_MENU
    // Overlapping static entry reached from 0xC1B2CD.
    case 0xC1B2CF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:277 JSR CLOSE_WINDOW
    case 0xC1B2D0: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    case 0xC1B2D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_item.asm:278 LDA #WINDOW::INVENTORY
    // Overlapping static entry reached from 0xC1B2D4.
    case 0xC1B2D6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:279 JSR CLOSE_WINDOW
    case 0xC1B2D7: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    case 0xC1B2DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_item.asm:280 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B2DB.
    case 0xC1B2DD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/use_item.asm:281 LDA @VIRTUAL04
    case 0xC1B2DE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_item.asm:282 DEC
    case 0xC1B2E0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    case 0xC1B2E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/use_item.asm:283 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B2E1.
    case 0xC1B2E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:284 JSL MULT168
    case 0xC1B2E4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/use_item.asm:285 CLC
    case 0xC1B2E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B2E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/overworld/use_item.asm:286 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B2E9.
    case 0xC1B2EB: cpu.execute_instruction<0x99>(0x004A20, 3); return true;
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    case 0xC1B2EC: cpu.execute_instruction<0x20>(0x00AC4A, 3); return true;
    // src/overworld/use_item.asm:287 JSR UNKNOWN_C1AC4A
    // Overlapping static entry reached from 0xC1B2EB.
    case 0xC1B2EE: cpu.execute_instruction<0xAC>(0x0020E2, 3); return true;
    // src/overworld/use_item.asm:288 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B2EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:289 LDA @VIRTUAL01
    case 0xC1B2F1: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:290 JSR UNKNOWN_C1ACF8
    case 0xC1B2F3: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B2F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B2F6.
    case 0xC1B2F8: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/overworld/use_item.asm:292 CREATE_WINDOW_NEAR #WINDOW::TEXT_STANDARD
    case 0xC1B2F9: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:297 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC1B2FC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:297 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC1B2FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:297 MOVE_INT1632 @VIRTUAL04, @VIRTUAL06
    case 0xC1B300: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B302: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B304: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B306: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:298 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B308: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:300 JSR SET_WORKING_MEMORY
    case 0xC1B30A: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/overworld/use_item.asm:305 MOVE_INT1632 @LOCAL0A, @VIRTUAL06
    case 0xC1B30D: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/overworld/use_item.asm:305 MOVE_INT1632 @LOCAL0A, @VIRTUAL06
    case 0xC1B30F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/overworld/use_item.asm:305 MOVE_INT1632 @LOCAL0A, @VIRTUAL06
    case 0xC1B311: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B313: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B315: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B317: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:306 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B319: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:308 JSR SET_ARGUMENT_MEMORY
    case 0xC1B31B: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/overworld/use_item.asm:309 LDA @VIRTUAL00
    case 0xC1B31E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:310 AND #$00FF
    case 0xC1B320: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:310 AND #$00FF
    // Overlapping static entry reached from 0xC1B320.
    case 0xC1B322: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_item.asm:311 TAY
    case 0xC1B323: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_item.asm:312 CPY #>-1
    case 0xC1B324: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:312 CPY #>-1
    // Overlapping static entry reached from 0xC1B324.
    case 0xC1B326: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_item.asm:313 BEQ @UNKNOWN21
    case 0xC1B327: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    case 0xC1B329: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_item.asm:314 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B329.
    case 0xC1B32B: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/overworld/use_item.asm:315 TYA
    case 0xC1B32C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:316 DEC
    case 0xC1B32D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    case 0xC1B32E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/use_item.asm:317 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B32E.
    case 0xC1B330: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:318 JSL MULT168
    case 0xC1B331: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/use_item.asm:320 CLC
    case 0xC1B335: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B336: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/overworld/use_item.asm:321 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B336.
    case 0xC1B338: cpu.execute_instruction<0x99>(0x00A120, 3); return true;
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    case 0xC1B339: cpu.execute_instruction<0x20>(0x00ACA1, 3); return true;
    // src/overworld/use_item.asm:322 JSR UNKNOWN_C1ACA1
    // Overlapping static entry reached from 0xC1B338.
    case 0xC1B33B: cpu.execute_instruction<0xAC>(0x0000A9, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B33C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B33C.
    case 0xC1B33E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B33F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B341: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B341.
    case 0xC1B343: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:324 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B344: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B346: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B348: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B34A: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:325 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B34C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:326 CMP @VIRTUAL0A+2
    case 0xC1B34E: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:327 BNE @UNKNOWN22
    case 0xC1B350: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/overworld/use_item.asm:328 LDA @VIRTUAL06
    case 0xC1B352: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/overworld/use_item.asm:329 CMP @VIRTUAL0A
    case 0xC1B354: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:331 BNE @UNKNOWN23
    case 0xC1B356: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B358: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x00C6B6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B358.
    case 0xC1B35A: cpu.execute_instruction<0xC6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B35B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B35A.
    case 0xC1B35C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B35D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B35C.
    case 0xC1B35E: cpu.execute_instruction<0xC7>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B35D.
    case 0xC1B35F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:332 LOADPTR MSG_SYS_GOODS_USE_NG, @VIRTUAL06
    case 0xC1B360: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B362: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B364: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B366: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:333 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC1B368: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_item.asm:335 LDA @VIRTUAL02
    case 0xC1B36A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B36C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:336 BEQL @UNKNOWN41
    case 0xC1B36E: cpu.execute_instruction<0x4C>(0x00B596, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B371: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B371.
    case 0xC1B373: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B374: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B376: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    // Overlapping static entry reached from 0xC1B376.
    case 0xC1B378: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:337 LOADPTR BATTLE_ACTION_TABLE, @LOCAL03
    case 0xC1B379: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B37B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B37D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B37F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:338 MOVE_INT @LOCAL05, @VIRTUAL0A
    case 0xC1B381: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:339 LDA #item::effect
    case 0xC1B383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001D, 2); else cpu.execute_instruction<0xA9>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:339 LDA #item::effect
    // Overlapping static entry reached from 0xC1B383.
    case 0xC1B385: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:340 CLC
    case 0xC1B386: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:341 ADC @VIRTUAL0A
    case 0xC1B387: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:342 STA @VIRTUAL0A
    case 0xC1B389: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:343 STA @LOCAL02
    case 0xC1B38B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/use_item.asm:344 LDA @VIRTUAL0A+2
    case 0xC1B38D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:345 STA @LOCAL02+2
    case 0xC1B38F: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B391: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B393: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B395: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:346 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC1B397: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_item.asm:347 LDA [@VIRTUAL0A]
    case 0xC1B399: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B39B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B39D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B39E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:348 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B3A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:349 CLC
    case 0xC1B3A2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    case 0xC1B3A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_item.asm:350 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B3A3.
    case 0xC1B3A5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:351 CLC
    case 0xC1B3A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:352 ADC @VIRTUAL06
    case 0xC1B3A7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_item.asm:353 STA @VIRTUAL06
    case 0xC1B3A9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B3AB.
    case 0xC1B3AD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3AE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:354 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1B3B5: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B3B7.
    case 0xC1B3B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3BA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B3BC.
    case 0xC1B3BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/use_item.asm:355 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1B3BF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C3: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C5: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/overworld/use_item.asm:356 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1B3C9: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B3CB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_item.asm:357 BEQL @UNKNOWN41
    case 0xC1B3CD: cpu.execute_instruction<0x4C>(0x00B596, 3); return true;
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC1B3D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AC, 2); else cpu.execute_instruction<0xA9>(0x009FAC, 3); return true;
    // src/overworld/use_item.asm:358 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC1B3D0.
    case 0xC1B3D2: cpu.execute_instruction<0x9F>(0xA9708D, 4); return true;
    // src/overworld/use_item.asm:359 STA CURRENT_ATTACKER
    case 0xC1B3D3: cpu.execute_instruction<0x8D>(0x00A970, 3); return true;
    // src/overworld/use_item.asm:360 TAX
    case 0xC1B3D6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:361 LDA @LOCAL09
    case 0xC1B3D7: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_item.asm:362 STA @VIRTUAL04
    case 0xC1B3D9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_item.asm:363 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B3DB: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // src/overworld/use_item.asm:364 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B3DF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:365 LDA @VIRTUAL01
    case 0xC1B3E1: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:366 LDX CURRENT_ATTACKER
    case 0xC1B3E3: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/overworld/use_item.asm:367 STA __BSS_START__ + battler::current_action_argument,X
    case 0xC1B3E6: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/overworld/use_item.asm:368 REP #PROC_FLAGS::ACCUM8
    case 0xC1B3E9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:369 LDA @LOCAL0A
    case 0xC1B3EB: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:370 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B3ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:371 LDX CURRENT_ATTACKER
    case 0xC1B3EF: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/overworld/use_item.asm:372 STA __BSS_START__ + battler::action_item_slot,X
    case 0xC1B3F2: cpu.execute_instruction<0x9D>(0x000007, 3); return true;
    // src/overworld/use_item.asm:373 REP #PROC_FLAGS::ACCUM8
    case 0xC1B3F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3F7: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3FB: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:374 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B3FD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B3FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B401: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B403: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:375 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B405: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:376 JSL DISPLAY_TEXT
    case 0xC1B407: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/use_item.asm:377 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B40B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:378 LDA @VIRTUAL01
    case 0xC1B40D: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/overworld/use_item.asm:379 JSR UNKNOWN_C1ACF8
    case 0xC1B40F: cpu.execute_instruction<0x20>(0x00ACF8, 3); return true;
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    case 0xC1B412: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FA, 2); else cpu.execute_instruction<0xA2>(0x009FFA, 3); return true;
    // src/overworld/use_item.asm:381 LDX #.LOWORD(BATTLERS_TABLE) + .SIZEOF(battler)
    // Overlapping static entry reached from 0xC1B412.
    case 0xC1B414: cpu.execute_instruction<0x9F>(0xA9728E, 4); return true;
    // src/overworld/use_item.asm:382 STX CURRENT_TARGET
    case 0xC1B415: cpu.execute_instruction<0x8E>(0x00A972, 3); return true;
    // src/overworld/use_item.asm:383 LDA @VIRTUAL00
    case 0xC1B418: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:384 AND #$00FF
    case 0xC1B41A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC1B41A.
    case 0xC1B41C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_item.asm:385 TAY
    case 0xC1B41D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_item.asm:386 CPY #>-1
    case 0xC1B41E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:386 CPY #>-1
    // Overlapping static entry reached from 0xC1B41E.
    case 0xC1B420: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B421: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_item.asm:387 BNEL @UNKNOWN36
    case 0xC1B423: cpu.execute_instruction<0x4C>(0x00B504, 3); return true;
    // src/overworld/use_item.asm:388 LDY #0
    case 0xC1B426: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/use_item.asm:388 LDY #0
    // Overlapping static entry reached from 0xC1B426.
    case 0xC1B428: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/use_item.asm:389 STY @LOCAL06
    case 0xC1B429: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/overworld/use_item.asm:390 JMP @UNKNOWN33
    case 0xC1B42B: cpu.execute_instruction<0x4C>(0x00B4EA, 3); return true;
    // src/overworld/use_item.asm:392 TYA
    case 0xC1B42E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:393 CLC
    case 0xC1B42F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:399 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC1B430: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/overworld/use_item.asm:399 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC1B430.
    case 0xC1B432: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:401 STA @VIRTUAL02
    case 0xC1B433: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    case 0xC1B435: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_item.asm:402 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC1B435.
    case 0xC1B437: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/overworld/use_item.asm:403 STX @LOCAL01
    case 0xC1B438: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/use_item.asm:404 LDX @VIRTUAL02
    case 0xC1B43A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/use_item.asm:405 LDA __BSS_START__,X
    case 0xC1B43C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_item.asm:406 AND #$00FF
    case 0xC1B43F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:406 AND #$00FF
    // Overlapping static entry reached from 0xC1B43F.
    case 0xC1B441: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/use_item.asm:407 DEC
    case 0xC1B442: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    case 0xC1B443: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/use_item.asm:408 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B443.
    case 0xC1B445: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:409 JSL MULT168
    case 0xC1B446: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/use_item.asm:411 CLC
    case 0xC1B44A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC1B44B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/overworld/use_item.asm:412 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC1B44B.
    case 0xC1B44D: cpu.execute_instruction<0x99>(0x0012A6, 3); return true;
    // src/overworld/use_item.asm:413 LDX @LOCAL01
    case 0xC1B44E: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/use_item.asm:414 JSR UNKNOWN_C1ACA1
    case 0xC1B450: cpu.execute_instruction<0x20>(0x00ACA1, 3); return true;
    // src/overworld/use_item.asm:415 LDX CURRENT_TARGET
    case 0xC1B453: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/overworld/use_item.asm:416 STX @LOCAL01
    case 0xC1B456: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/overworld/use_item.asm:417 LDX @VIRTUAL02
    case 0xC1B458: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/use_item.asm:418 LDA __BSS_START__,X
    case 0xC1B45A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_item.asm:419 AND #$00FF
    case 0xC1B45D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:419 AND #$00FF
    // Overlapping static entry reached from 0xC1B45D.
    case 0xC1B45F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/overworld/use_item.asm:420 LDX @LOCAL01
    case 0xC1B460: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/overworld/use_item.asm:421 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B462: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B466: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000068, 2); else cpu.execute_instruction<0xA9>(0x007B68, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B466.
    case 0xC1B468: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B469: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B46B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1B46B.
    case 0xC1B46D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_item.asm:422 LOADPTR BATTLE_ACTION_TABLE, @VIRTUAL0A
    case 0xC1B46E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:423 LDY #item::effect
    case 0xC1B470: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:423 LDY #item::effect
    // Overlapping static entry reached from 0xC1B470.
    case 0xC1B472: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/overworld/use_item.asm:424 LDA [@LOCAL05],Y
    case 0xC1B473: cpu.execute_instruction<0xB7>(0x00001E, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B475: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B477: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B478: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B47A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:425 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B47B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:426 CLC
    case 0xC1B47C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:427 ADC #8
    case 0xC1B47D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_item.asm:427 ADC #8
    // Overlapping static entry reached from 0xC1B47D.
    case 0xC1B47F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:428 CLC
    case 0xC1B480: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:429 ADC @VIRTUAL0A
    case 0xC1B481: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:430 STA @VIRTUAL0A
    case 0xC1B483: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B485: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B485.
    case 0xC1B487: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B488: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:431 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B48F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/use_item.asm:432 PHA
    case 0xC1B491: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B492: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B494: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B497: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:433 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B499: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/overworld/use_item.asm:434 PLA
    case 0xC1B49C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:435 JSL UNKNOWN_C09279
    case 0xC1B49D: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/overworld/use_item.asm:436 LDA #0
    case 0xC1B4A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:436 LDA #0
    // Overlapping static entry reached from 0xC1B4A1.
    case 0xC1B4A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:437 STA @LOCAL0A
    case 0xC1B4A4: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:438 BRA @UNKNOWN30
    case 0xC1B4A6: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/overworld/use_item.asm:440 LDA @LOCAL0A
    case 0xC1B4A8: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:441 STA @VIRTUAL02
    case 0xC1B4AA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:442 LDY @LOCAL06
    case 0xC1B4AC: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/overworld/use_item.asm:443 TYA
    case 0xC1B4AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    case 0xC1B4AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/use_item.asm:444 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B4AF.
    case 0xC1B4B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:445 JSL MULT168
    case 0xC1B4B2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/use_item.asm:446 CLC
    case 0xC1B4B6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    case 0xC1B4B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/overworld/use_item.asm:447 ADC #.LOWORD(PARTY_CHARACTERS) + char_struct::afflictions
    // Overlapping static entry reached from 0xC1B4B7.
    case 0xC1B4B9: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/overworld/use_item.asm:448 CLC
    case 0xC1B4BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    case 0xC1B4BB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_item.asm:449 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B4B9.
    case 0xC1B4BC: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/overworld/use_item.asm:450 PHA
    case 0xC1B4BD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/use_item.asm:451 LDA @LOCAL0A
    case 0xC1B4BE: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:452 CLC
    case 0xC1B4C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:453 ADC CURRENT_TARGET
    case 0xC1B4C1: cpu.execute_instruction<0x6D>(0x00A972, 3); return true;
    // src/overworld/use_item.asm:454 TAX
    case 0xC1B4C4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:455 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B4C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:456 LDA __BSS_START__ + battler::afflictions,X
    case 0xC1B4C7: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:457 PLX
    case 0xC1B4CA: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:458 STA __BSS_START__,X
    case 0xC1B4CB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_item.asm:459 REP #PROC_FLAGS::ACCUM8
    case 0xC1B4CE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:460 LDA @LOCAL0A
    case 0xC1B4D0: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:461 INC
    case 0xC1B4D2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:462 STA @LOCAL0A
    case 0xC1B4D3: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:464 STA @VIRTUAL02
    case 0xC1B4D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:465 LDA #7
    case 0xC1B4D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/overworld/use_item.asm:465 LDA #7
    // Overlapping static entry reached from 0xC1B4D7.
    case 0xC1B4D9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:466 CLC
    case 0xC1B4DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:467 SBC @VIRTUAL02
    case 0xC1B4DB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4DD: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4DF: cpu.execute_instruction<0x10>(0x0000C7, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4E1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:468 BRANCHGTS @UNKNOWN29
    case 0xC1B4E3: cpu.execute_instruction<0x30>(0x0000C3, 2); return true;
    // src/overworld/use_item.asm:469 LDY @LOCAL06
    case 0xC1B4E5: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/overworld/use_item.asm:470 INY
    case 0xC1B4E7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_item.asm:471 STY @LOCAL06
    case 0xC1B4E8: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/overworld/use_item.asm:473 STY @VIRTUAL02
    case 0xC1B4EA: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/overworld/use_item.asm:474 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1B4EC: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/overworld/use_item.asm:475 AND #$00FF
    case 0xC1B4EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:475 AND #$00FF
    // Overlapping static entry reached from 0xC1B4EF.
    case 0xC1B4F1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:476 CLC
    case 0xC1B4F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:477 SBC @VIRTUAL02
    case 0xC1B4F3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4F5: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4F7: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4F9: cpu.execute_instruction<0x4C>(0x00B42E, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4FC: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/overworld/use_item.asm:478 JUMPGTS @UNKNOWN28
    case 0xC1B4FE: cpu.execute_instruction<0x4C>(0x00B42E, 3); return true;
    // src/overworld/use_item.asm:479 JMP @UNKNOWN40
    case 0xC1B501: cpu.execute_instruction<0x4C>(0x00B590, 3); return true;
    // src/overworld/use_item.asm:481 TYA
    case 0xC1B504: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_item.asm:482 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC1B505: cpu.execute_instruction<0x22>(0xC2B930, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B509: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B50B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B50D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:483 MOVE_INT @LOCAL02, @VIRTUAL0A
    case 0xC1B50F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:484 LDA [@VIRTUAL0A]
    case 0xC1B511: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B513: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B515: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B516: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B518: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/overworld/use_item.asm:485 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC1B519: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:486 CLC
    case 0xC1B51A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    case 0xC1B51B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_item.asm:487 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC1B51B.
    case 0xC1B51D: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/overworld/use_item.asm:488 PHA
    case 0xC1B51E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B51F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B521: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B523: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:489 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1B525: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_item.asm:490 PLA
    case 0xC1B527: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:491 CLC
    case 0xC1B528: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:492 ADC @VIRTUAL0A
    case 0xC1B529: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_item.asm:493 STA @VIRTUAL0A
    case 0xC1B52B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B52D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1B52D.
    case 0xC1B52F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B530: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B532: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B533: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B535: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_item.asm:494 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1B537: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/use_item.asm:495 PHA
    case 0xC1B539: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B53A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B53C: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B53F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:496 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1B541: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/overworld/use_item.asm:497 PLA
    case 0xC1B544: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_item.asm:498 JSL UNKNOWN_C09279
    case 0xC1B545: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/overworld/use_item.asm:499 LDA #0
    case 0xC1B549: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_item.asm:499 LDA #0
    // Overlapping static entry reached from 0xC1B549.
    case 0xC1B54B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_item.asm:500 STA @LOCAL0A
    case 0xC1B54C: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:501 BRA @UNKNOWN38
    case 0xC1B54E: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // src/overworld/use_item.asm:503 LDA @LOCAL0A
    case 0xC1B550: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:504 STA @VIRTUAL02
    case 0xC1B552: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:505 LDA @VIRTUAL00
    case 0xC1B554: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/overworld/use_item.asm:506 AND #$00FF
    case 0xC1B556: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_item.asm:506 AND #$00FF
    // Overlapping static entry reached from 0xC1B556.
    case 0xC1B558: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/overworld/use_item.asm:507 DEC
    case 0xC1B559: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    case 0xC1B55A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/overworld/use_item.asm:508 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1B55A.
    case 0xC1B55C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:509 JSL MULT168
    case 0xC1B55D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/overworld/use_item.asm:510 CLC
    case 0xC1B561: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    case 0xC1B562: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x0099DC, 3); return true;
    // src/overworld/use_item.asm:511 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::afflictions
    // Overlapping static entry reached from 0xC1B562.
    case 0xC1B564: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/overworld/use_item.asm:512 CLC
    case 0xC1B565: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    case 0xC1B566: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_item.asm:513 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC1B564.
    case 0xC1B567: cpu.execute_instruction<0x02>(0x000048, 2); return true;
    // src/overworld/use_item.asm:514 PHA
    case 0xC1B568: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/use_item.asm:515 LDA @LOCAL0A
    case 0xC1B569: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:516 CLC
    case 0xC1B56B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:517 ADC CURRENT_TARGET
    case 0xC1B56C: cpu.execute_instruction<0x6D>(0x00A972, 3); return true;
    // src/overworld/use_item.asm:518 TAX
    case 0xC1B56F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:519 SEP #PROC_FLAGS::ACCUM8
    case 0xC1B570: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:520 LDA __BSS_START__+battler::afflictions,X
    case 0xC1B572: cpu.execute_instruction<0xBD>(0x00001D, 3); return true;
    // src/overworld/use_item.asm:521 PLX
    case 0xC1B575: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_item.asm:522 STA __BSS_START__,X
    case 0xC1B576: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_item.asm:523 REP #PROC_FLAGS::ACCUM8
    case 0xC1B579: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_item.asm:524 LDA @LOCAL0A
    case 0xC1B57B: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:525 INC
    case 0xC1B57D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_item.asm:526 STA @LOCAL0A
    case 0xC1B57E: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_item.asm:528 STA @VIRTUAL02
    case 0xC1B580: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_item.asm:529 LDA #7
    case 0xC1B582: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/overworld/use_item.asm:529 LDA #7
    // Overlapping static entry reached from 0xC1B582.
    case 0xC1B584: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_item.asm:530 CLC
    case 0xC1B585: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_item.asm:531 SBC @VIRTUAL02
    case 0xC1B586: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B588: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B58A: cpu.execute_instruction<0x10>(0x0000C4, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B58C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/overworld/use_item.asm:532 BRANCHGTS @UNKNOWN37
    case 0xC1B58E: cpu.execute_instruction<0x30>(0x0000C0, 2); return true;
    // src/overworld/use_item.asm:534 JSL UNKNOWN_C3EE4D
    case 0xC1B590: cpu.execute_instruction<0x22>(0xC3EE4D, 4); return true;
    // src/overworld/use_item.asm:535 BRA @UNKNOWN42
    case 0xC1B594: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B596: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B598: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B59A: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:537 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC1B59C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B59E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B5A0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B5A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_item.asm:538 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1B5A4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_item.asm:539 JSL DISPLAY_TEXT
    case 0xC1B5A6: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    case 0xC1B5AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:541 LDA #WINDOW::TEXT_STANDARD
    // Overlapping static entry reached from 0xC1B5AA.
    case 0xC1B5AC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_item.asm:542 JSR CLOSE_WINDOW
    case 0xC1B5AD: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/overworld/use_item.asm:543 LDA #TRUE
    case 0xC1B5B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_item.asm:543 LDA #TRUE
    // Overlapping static entry reached from 0xC1B5B1.
    case 0xC1B5B3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B5B4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/overworld/use_item.asm:545 END_C_FUNCTION
    case 0xC1B5B5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/use_sound_stone.asm (source_named).
bool execute_overworld_use_sound_stone_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/use_sound_stone.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4ACCE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CA, 2); else cpu.execute_instruction<0x69>(0x00FFCA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC4ACD3.
    case 0xC4ACD5: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/overworld/use_sound_stone.asm:24 END_STACK_VARS
    case 0xC4ACD7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    case 0xC4ACD8: cpu.execute_instruction<0x85>(0x000034, 2); return true;
    // src/overworld/use_sound_stone.asm:25 STA @LOCAL11
    // Overlapping static entry reached from 0xC4ACD5.
    case 0xC4ACD9: cpu.execute_instruction<0x34>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    case 0xC4ACDA: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC4ACD9.
    case 0xC4ACDB: cpu.execute_instruction<0x26>(0x000087, 2); return true;
    // src/overworld/use_sound_stone.asm:26 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC4ACDB.
    case 0xC4ACDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00C622, 3); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    case 0xC4ACDE: cpu.execute_instruction<0x22>(0xC0ABC6, 4); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC4ACDD.
    case 0xC4ACDF: cpu.execute_instruction<0xC6>(0x0000AB, 2); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC4ACDD.
    case 0xC4ACE0: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:27 JSL STOP_MUSIC
    // Overlapping static entry reached from 0xC4ACE0.
    case 0xC4ACE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00C822, 3); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    case 0xC4ACE2: cpu.execute_instruction<0x22>(0xC2C8C8, 4); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4ACE1.
    case 0xC4ACE3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4ACE1.
    case 0xC4ACE4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:28 JSL LOAD_ENEMY_BATTLE_SPRITES
    // Overlapping static entry reached from 0xC4ACE4.
    case 0xC4ACE5: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ACE5.
    case 0xC4ACE7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ACE6.
    case 0xC4ACE8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACE9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4ACEB.
    case 0xC4ACED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:29 LOADPTR BUFFER, @VIRTUAL06
    case 0xC4ACEE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005D, 2); else cpu.execute_instruction<0xA9>(0x00DD5D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4ACF0.
    case 0xC4ACF2: cpu.execute_instruction<0xDD>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    // Overlapping static entry reached from 0xC4ACF5.
    case 0xC4ACF7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:30 LOADPTR SOUND_STONE_GFX, @LOCAL00
    case 0xC4ACF8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4ACFA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4ACFC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4ACFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:31 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4AD00: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/overworld/use_sound_stone.asm:32 JSL DECOMP
    case 0xC4AD02: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD06: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD0C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x002000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD0E.
    case 0xC4AD10: cpu.execute_instruction<0x20>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002C00, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD11.
    case 0xC4AD13: cpu.execute_instruction<0x2C>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    case 0xC4AD18: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD16.
    case 0xC4AD19: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/overworld/use_sound_stone.asm:33 COPY_TO_VRAM1P @VIRTUAL06, VRAM::SOUND_STONE_GFX, $2C00, 0
    // Overlapping static entry reached from 0xC4AD19.
    case 0xC4AD1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0006A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x00F806, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AD1B.
    case 0xC4AD1D: cpu.execute_instruction<0x06>(0x0000F8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AD1C.
    case 0xC4AD1E: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD1F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    // Overlapping static entry reached from 0xC4AD21.
    case 0xC4AD23: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:35 LOADPTR SOUND_STONE_PALETTE, @LOCAL00
    case 0xC4AD24: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    case 0xC4AD26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/overworld/use_sound_stone.asm:36 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4AD26.
    case 0xC4AD28: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    case 0xC4AD29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000300, 3); return true;
    // src/overworld/use_sound_stone.asm:37 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 8
    // Overlapping static entry reached from 0xC4AD29.
    case 0xC4AD2B: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    case 0xC4AD2C: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4AD2B.
    case 0xC4AD2D: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/overworld/use_sound_stone.asm:38 JSL MEMCPY16
    // Overlapping static entry reached from 0xC4AD2D.
    case 0xC4AD2F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x008722, 3); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    case 0xC4AD30: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4AD2F.
    case 0xC4AD31: cpu.execute_instruction<0x87>(0x00007F, 2); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4AD2F.
    case 0xC4AD32: cpu.execute_instruction<0x7F>(0x04A0C4, 4); return true;
    // src/overworld/use_sound_stone.asm:39 JSL UNKNOWN_C47F87
    // Overlapping static entry reached from 0xC4AD31.
    case 0xC4AD33: cpu.execute_instruction<0xC4>(0x0000A0, 2); return true;
    // src/overworld/use_sound_stone.asm:40 LDY #4
    case 0xC4AD34: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/overworld/use_sound_stone.asm:40 LDY #4
    // Overlapping static entry reached from 0xC4AD33.
    case 0xC4AD35: cpu.execute_instruction<0x04>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:40 LDY #4
    // Overlapping static entry reached from 0xC4AD34.
    case 0xC4AD36: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    case 0xC4AD37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E5, 2); else cpu.execute_instruction<0xA2>(0x0000E5, 3); return true;
    // src/overworld/use_sound_stone.asm:41 LDX #BATTLEBG_LAYER::SOUNDSTONE2
    // Overlapping static entry reached from 0xC4AD37.
    case 0xC4AD39: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    case 0xC4AD3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x0000E4, 3); return true;
    // src/overworld/use_sound_stone.asm:42 LDA #BATTLEBG_LAYER::SOUNDSTONE1
    // Overlapping static entry reached from 0xC4AD3A.
    case 0xC4AD3C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:43 JSL LOAD_BATTLE_BG
    case 0xC4AD3D: cpu.execute_instruction<0x22>(0xC2D121, 4); return true;
    // src/overworld/use_sound_stone.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD41: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/use_sound_stone.asm:45 STZ_BADOPT @LOCAL00
    case 0xC4AD43: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/use_sound_stone.asm:46 LDX #5
    case 0xC4AD45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_sound_stone.asm:46 LDX #5
    // Overlapping static entry reached from 0xC4AD45.
    case 0xC4AD47: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC4AD4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x00B3EE, 3); return true;
    // src/overworld/use_sound_stone.asm:48 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC4AD4A.
    case 0xC4AD4C: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    case 0xC4AD4D: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/overworld/use_sound_stone.asm:49 JSL MEMSET16
    // Overlapping static entry reached from 0xC4AD4C.
    case 0xC4AD4E: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/overworld/use_sound_stone.asm:50 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD51: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/overworld/use_sound_stone.asm:51 STZ_BADOPT @LOCAL00
    case 0xC4AD53: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/overworld/use_sound_stone.asm:52 LDX #5
    case 0xC4AD55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/overworld/use_sound_stone.asm:52 LDX #5
    // Overlapping static entry reached from 0xC4AD55.
    case 0xC4AD57: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC4AD5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x00B3F3, 3); return true;
    // src/overworld/use_sound_stone.asm:54 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC4AD5A.
    case 0xC4AD5C: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    case 0xC4AD5D: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/overworld/use_sound_stone.asm:55 JSL MEMSET16
    // Overlapping static entry reached from 0xC4AD5C.
    case 0xC4AD5E: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/overworld/use_sound_stone.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AD61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:57 LDA #240
    case 0xC4AD63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x008DF0, 3); return true;
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    case 0xC4AD65: cpu.execute_instruction<0x8D>(0x00B3F1, 3); return true;
    // src/overworld/use_sound_stone.asm:58 STA SOUND_STONE_SPRITEMAP_1 + spritemap::x_offset
    // Overlapping static entry reached from 0xC4AD63.
    case 0xC4AD66: cpu.execute_instruction<0xF1>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:59 STA SOUND_STONE_SPRITEMAP_1 + spritemap::y_offset
    case 0xC4AD68: cpu.execute_instruction<0x8D>(0x00B3EE, 3); return true;
    // src/overworld/use_sound_stone.asm:60 LDA #248
    case 0xC4AD6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x008DF8, 3); return true;
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    case 0xC4AD6D: cpu.execute_instruction<0x8D>(0x00B3F6, 3); return true;
    // src/overworld/use_sound_stone.asm:61 STA SOUND_STONE_SPRITEMAP_2 + spritemap::x_offset
    // Overlapping static entry reached from 0xC4AD6B.
    case 0xC4AD6E: cpu.execute_instruction<0xF6>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:62 STA SOUND_STONE_SPRITEMAP_2 + spritemap::y_offset
    case 0xC4AD70: cpu.execute_instruction<0x8D>(0x00B3F3, 3); return true;
    // src/overworld/use_sound_stone.asm:63 LDA #$81
    case 0xC4AD73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x008D81, 3); return true;
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    case 0xC4AD75: cpu.execute_instruction<0x8D>(0x00B3F2, 3); return true;
    // src/overworld/use_sound_stone.asm:64 STA SOUND_STONE_SPRITEMAP_1 + spritemap::special_flags
    // Overlapping static entry reached from 0xC4AD73.
    case 0xC4AD76: cpu.execute_instruction<0xF2>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:65 LDA #$80
    case 0xC4AD78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x008D80, 3); return true;
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    case 0xC4AD7A: cpu.execute_instruction<0x8D>(0x00B3F7, 3); return true;
    // src/overworld/use_sound_stone.asm:66 STA SOUND_STONE_SPRITEMAP_2 + spritemap::special_flags
    // Overlapping static entry reached from 0xC4AD78.
    case 0xC4AD7B: cpu.execute_instruction<0xF7>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4AD7D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:68 STZ @LOCAL10
    case 0xC4AD7F: cpu.execute_instruction<0x64>(0x000032, 2); return true;
    // src/overworld/use_sound_stone.asm:69 LDY #0
    case 0xC4AD81: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:69 LDY #0
    // Overlapping static entry reached from 0xC4AD81.
    case 0xC4AD83: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/use_sound_stone.asm:70 STY @LOCAL0F
    case 0xC4AD84: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:71 BRA @UNKNOWN3
    case 0xC4AD86: cpu.execute_instruction<0x80>(0x00004F, 2); return true;
    // src/overworld/use_sound_stone.asm:73 TYX
    case 0xC4AD88: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:74 LDA f:SOUND_STONE_MELODY_FLAGS,X
    case 0xC4AD89: cpu.execute_instruction<0xBF>(0xC4ACC6, 4); return true;
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    case 0xC4AD8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:75 AND #$00FF
    // Overlapping static entry reached from 0xC4AD8D.
    case 0xC4AD8F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:76 JSL GET_EVENT_FLAG
    case 0xC4AD90: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/overworld/use_sound_stone.asm:77 CMP #0
    case 0xC4AD94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:77 CMP #0
    // Overlapping static entry reached from 0xC4AD94.
    case 0xC4AD96: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_sound_stone.asm:78 BEQ @UNKNOWN1
    case 0xC4AD97: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/overworld/use_sound_stone.asm:79 LDY @LOCAL0F
    case 0xC4AD99: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:80 TYA
    case 0xC4AD9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AD9C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AD9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AD9F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADA1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADA2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:81 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADA4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:82 TAX
    case 0xC4ADA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:83 LDA #1
    case 0xC4ADA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:83 LDA #1
    // Overlapping static entry reached from 0xC4ADA6.
    case 0xC4ADA8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:84 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4ADA9: cpu.execute_instruction<0x9D>(0x00B37E, 3); return true;
    // src/overworld/use_sound_stone.asm:85 INC @LOCAL10
    case 0xC4ADAC: cpu.execute_instruction<0xE6>(0x000032, 2); return true;
    // src/overworld/use_sound_stone.asm:86 BRA @UNKNOWN2
    case 0xC4ADAE: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/overworld/use_sound_stone.asm:88 LDY @LOCAL0F
    case 0xC4ADB0: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:89 TYA
    case 0xC4ADB2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADB9: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:90 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADBB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:91 TAX
    case 0xC4ADBC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:92 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4ADBD: cpu.execute_instruction<0x9E>(0x00B37E, 3); return true;
    // src/overworld/use_sound_stone.asm:94 TYA
    case 0xC4ADC0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC4: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:95 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4ADC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:96 TAX
    case 0xC4ADCA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:97 LDA #1
    case 0xC4ADCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:97 LDA #1
    // Overlapping static entry reached from 0xC4ADCB.
    case 0xC4ADCD: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:98 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown2,X
    case 0xC4ADCE: cpu.execute_instruction<0x9D>(0x00B380, 3); return true;
    // src/overworld/use_sound_stone.asm:99 STZ SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_frame,X
    case 0xC4ADD1: cpu.execute_instruction<0x9E>(0x00B384, 3); return true;
    // src/overworld/use_sound_stone.asm:100 INY
    case 0xC4ADD4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:101 STY @LOCAL0F
    case 0xC4ADD5: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:103 CPY #8
    case 0xC4ADD7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000008, 2); else cpu.execute_instruction<0xC0>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:103 CPY #8
    // Overlapping static entry reached from 0xC4ADD7.
    case 0xC4ADD9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/use_sound_stone.asm:104 BCC @UNKNOWN0
    case 0xC4ADDA: cpu.execute_instruction<0x90>(0x0000AC, 2); return true;
    // src/overworld/use_sound_stone.asm:105 JSL UNKNOWN_C08744
    case 0xC4ADDC: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/overworld/use_sound_stone.asm:106 LDX #1
    case 0xC4ADE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:106 LDX #1
    // Overlapping static entry reached from 0xC4ADE0.
    case 0xC4ADE2: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/use_sound_stone.asm:107 TXA
    case 0xC4ADE3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:108 JSL FADE_IN
    case 0xC4ADE4: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/overworld/use_sound_stone.asm:109 LDA #15
    case 0xC4ADE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/overworld/use_sound_stone.asm:109 LDA #15
    // Overlapping static entry reached from 0xC4ADE8.
    case 0xC4ADEA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:110 STA @LOCAL0E
    case 0xC4ADEB: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:111 STZ @LOCAL0F
    case 0xC4ADED: cpu.execute_instruction<0x64>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:112 LDA #60
    case 0xC4ADEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/overworld/use_sound_stone.asm:112 LDA #60
    // Overlapping static entry reached from 0xC4ADEF.
    case 0xC4ADF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:113 STA @LOCAL0D
    case 0xC4ADF2: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:114 STZ @LOCAL0C
    case 0xC4ADF4: cpu.execute_instruction<0x64>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:115 STZ @LOCAL0B
    case 0xC4ADF6: cpu.execute_instruction<0x64>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:116 LDA #0
    case 0xC4ADF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:116 LDA #0
    // Overlapping static entry reached from 0xC4ADF8.
    case 0xC4ADFA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:117 STA @VIRTUAL04
    case 0xC4ADFB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:118 STA @LOCAL0A
    case 0xC4ADFD: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:119 STA @VIRTUAL02
    case 0xC4ADFF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:120 STA @LOCAL09
    case 0xC4AE01: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:122 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4AE03: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/use_sound_stone.asm:123 LDA PAD_PRESS
    case 0xC4AE07: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/overworld/use_sound_stone.asm:124 STA @LOCAL08
    case 0xC4AE0A: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:125 LDA @LOCAL0A
    case 0xC4AE0C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:126 STA @VIRTUAL04
    case 0xC4AE0E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:127 BNE @UNKNOWN5
    case 0xC4AE10: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:128 DEC @LOCAL0D
    case 0xC4AE12: cpu.execute_instruction<0xC6>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:129 LDA @LOCAL0D
    case 0xC4AE14: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:130 BNE @UNKNOWN5
    case 0xC4AE16: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    case 0xC4AE18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/overworld/use_sound_stone.asm:131 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4AE18.
    case 0xC4AE1A: cpu.execute_instruction<0xFF>(0x850285, 4); return true;
    // src/overworld/use_sound_stone.asm:132 STA @VIRTUAL02
    case 0xC4AE1B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    case 0xC4AE1D: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:133 STA @LOCAL09
    // Overlapping static entry reached from 0xC4AE1A.
    case 0xC4AE1E: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    case 0xC4AE1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:134 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4AE1E.
    case 0xC4AE20: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:135 STA @LOCAL0B
    case 0xC4AE21: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:136 LDA #1
    case 0xC4AE23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:136 LDA #1
    // Overlapping static entry reached from 0xC4AE23.
    case 0xC4AE25: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:137 STA @VIRTUAL04
    case 0xC4AE26: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:138 STA @LOCAL0A
    case 0xC4AE28: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:140 LDA @LOCAL0C
    case 0xC4AE2A: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:141 BEQ @UNKNOWN7
    case 0xC4AE2C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/overworld/use_sound_stone.asm:142 DEC @LOCAL0C
    case 0xC4AE2E: cpu.execute_instruction<0xC6>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:143 LDA @LOCAL0C
    case 0xC4AE30: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC4AE32: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:144 BEQL @UNKNOWN31
    case 0xC4AE34: cpu.execute_instruction<0x4C>(0x00B189, 3); return true;
    // src/overworld/use_sound_stone.asm:145 JMP @UNKNOWN19
    case 0xC4AE37: cpu.execute_instruction<0x4C>(0x00AF25, 3); return true;
    // src/overworld/use_sound_stone.asm:147 LDA @VIRTUAL04
    case 0xC4AE3A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC4AE3C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:148 BEQL @UNKNOWN19
    case 0xC4AE3E: cpu.execute_instruction<0x4C>(0x00AF25, 3); return true;
    // src/overworld/use_sound_stone.asm:149 LDA @VIRTUAL04
    case 0xC4AE41: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:150 DEC
    case 0xC4AE43: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:151 STA @VIRTUAL04
    case 0xC4AE44: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:152 STA @LOCAL0A
    case 0xC4AE46: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:153 LDA @VIRTUAL04
    case 0xC4AE48: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC4AE4A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:154 BNEL @UNKNOWN18
    case 0xC4AE4C: cpu.execute_instruction<0x4C>(0x00AEFC, 3); return true;
    // src/overworld/use_sound_stone.asm:155 LDA @LOCAL09
    case 0xC4AE4F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:156 STA @VIRTUAL02
    case 0xC4AE51: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:157 CMP #8
    case 0xC4AE53: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:157 CMP #8
    // Overlapping static entry reached from 0xC4AE53.
    case 0xC4AE55: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/use_sound_stone.asm:158 BCS @UNKNOWN10
    case 0xC4AE56: cpu.execute_instruction<0xB0>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:159 LDA @VIRTUAL02
    case 0xC4AE58: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE60: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:160 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:161 CLC
    case 0xC4AE63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    case 0xC4AE64: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00B37E, 3); return true;
    // src/overworld/use_sound_stone.asm:162 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE)
    // Overlapping static entry reached from 0xC4AE64.
    case 0xC4AE66: cpu.execute_instruction<0xB3>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:163 TAX
    case 0xC4AE67: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:164 LDA a:sound_stone_playback_state::state,X
    case 0xC4AE68: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:165 CMP #2
    case 0xC4AE6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:165 CMP #2
    // Overlapping static entry reached from 0xC4AE6B.
    case 0xC4AE6D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:166 BNE @UNKNOWN10
    case 0xC4AE6E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:167 LDA #1
    case 0xC4AE70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:167 LDA #1
    // Overlapping static entry reached from 0xC4AE70.
    case 0xC4AE72: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:168 STA a:sound_stone_playback_state::state,X
    case 0xC4AE73: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:170 LDA @VIRTUAL02
    case 0xC4AE76: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:171 CMP #8
    case 0xC4AE78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:171 CMP #8
    // Overlapping static entry reached from 0xC4AE78.
    case 0xC4AE7A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:172 BNE @UNKNOWN14
    case 0xC4AE7B: cpu.execute_instruction<0xD0>(0x00002C, 2); return true;
    // src/overworld/use_sound_stone.asm:173 LDA @LOCAL0B
    case 0xC4AE7D: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:174 INC
    case 0xC4AE7F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:175 STA @LOCAL07
    case 0xC4AE80: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:176 BRA @UNKNOWN12
    case 0xC4AE82: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE84: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE87: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE8A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:178 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AE8C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:179 TAX
    case 0xC4AE8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:180 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4AE8E: cpu.execute_instruction<0xBD>(0x00B37E, 3); return true;
    // src/overworld/use_sound_stone.asm:181 BNE @UNKNOWN13
    case 0xC4AE91: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:182 LDA @LOCAL07
    case 0xC4AE93: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:183 INC
    case 0xC4AE95: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:184 STA @LOCAL07
    case 0xC4AE96: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:186 CMP #8
    case 0xC4AE98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:186 CMP #8
    // Overlapping static entry reached from 0xC4AE98.
    case 0xC4AE9A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/overworld/use_sound_stone.asm:187 BCC @UNKNOWN11
    case 0xC4AE9B: cpu.execute_instruction<0x90>(0x0000E7, 2); return true;
    // src/overworld/use_sound_stone.asm:189 LDA @LOCAL07
    case 0xC4AE9D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:190 CMP #8
    case 0xC4AE9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:190 CMP #8
    // Overlapping static entry reached from 0xC4AE9F.
    case 0xC4AEA1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:191 BNE @UNKNOWN14
    case 0xC4AEA2: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/overworld/use_sound_stone.asm:192 LDA #150
    case 0xC4AEA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x000096, 3); return true;
    // src/overworld/use_sound_stone.asm:192 LDA #150
    // Overlapping static entry reached from 0xC4AEA4.
    case 0xC4AEA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:193 STA @LOCAL0C
    case 0xC4AEA7: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:195 INC @LOCAL0B
    case 0xC4AEA9: cpu.execute_instruction<0xE6>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:196 LDA @LOCAL0B
    case 0xC4AEAB: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:197 CMP #8
    case 0xC4AEAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:197 CMP #8
    // Overlapping static entry reached from 0xC4AEAD.
    case 0xC4AEAF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/use_sound_stone.asm:198 BCS @UNKNOWN17
    case 0xC4AEB0: cpu.execute_instruction<0xB0>(0x000045, 2); return true;
    // src/overworld/use_sound_stone.asm:199 LDA @LOCAL0B
    case 0xC4AEB2: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/overworld/use_sound_stone.asm:200 STA @VIRTUAL02
    case 0xC4AEB4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:201 STA @LOCAL09
    case 0xC4AEB6: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:202 LDA @VIRTUAL02
    case 0xC4AEB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEBF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEC0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:203 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AEC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:204 CLC
    case 0xC4AEC3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    case 0xC4AEC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x00B37E, 3); return true;
    // src/overworld/use_sound_stone.asm:205 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::state
    // Overlapping static entry reached from 0xC4AEC4.
    case 0xC4AEC6: cpu.execute_instruction<0xB3>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:206 TAX
    case 0xC4AEC7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:207 LDA __BSS_START__,X
    case 0xC4AEC8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:208 BEQ @UNKNOWN15
    case 0xC4AECB: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:209 LDA #2
    case 0xC4AECD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:209 LDA #2
    // Overlapping static entry reached from 0xC4AECD.
    case 0xC4AECF: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:210 STA __BSS_START__,X
    case 0xC4AED0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:211 BRA @UNKNOWN16
    case 0xC4AED3: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/overworld/use_sound_stone.asm:213 LDA #8
    case 0xC4AED5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:213 LDA #8
    // Overlapping static entry reached from 0xC4AED5.
    case 0xC4AED7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:214 STA @VIRTUAL02
    case 0xC4AED8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:215 STA @LOCAL09
    case 0xC4AEDA: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:217 LDA @VIRTUAL02
    case 0xC4AEDC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:218 ASL
    case 0xC4AEDE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:219 TAX
    case 0xC4AEDF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:220 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC4AEE0: cpu.execute_instruction<0xBF>(0xC4ACB4, 4); return true;
    // src/overworld/use_sound_stone.asm:221 STA @VIRTUAL04
    case 0xC4AEE4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:222 STA @LOCAL0A
    case 0xC4AEE6: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:223 LDX @VIRTUAL02
    case 0xC4AEE8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:224 LDA f:SOUND_STONE_MUSIC,X
    case 0xC4AEEA: cpu.execute_instruction<0xBF>(0xC4ACAB, 4); return true;
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    case 0xC4AEEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC4AEEE.
    case 0xC4AEF0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:226 JSL CHANGE_MUSIC
    case 0xC4AEF1: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/overworld/use_sound_stone.asm:227 BRA @UNKNOWN18
    case 0xC4AEF5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/overworld/use_sound_stone.asm:229 LDA #150
    case 0xC4AEF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000096, 2); else cpu.execute_instruction<0xA9>(0x000096, 3); return true;
    // src/overworld/use_sound_stone.asm:229 LDA #150
    // Overlapping static entry reached from 0xC4AEF7.
    case 0xC4AEF9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:230 STA @LOCAL0C
    case 0xC4AEFA: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/overworld/use_sound_stone.asm:232 LDA @LOCAL09
    case 0xC4AEFC: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/overworld/use_sound_stone.asm:233 STA @VIRTUAL02
    case 0xC4AEFE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:234 CMP #8
    case 0xC4AF00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:234 CMP #8
    // Overlapping static entry reached from 0xC4AF00.
    case 0xC4AF02: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/overworld/use_sound_stone.asm:235 BCS @UNKNOWN19
    case 0xC4AF03: cpu.execute_instruction<0xB0>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:236 LDA @VIRTUAL02
    case 0xC4AF05: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:237 ASL
    case 0xC4AF07: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:238 TAX
    case 0xC4AF08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:239 LDA f:SOUND_STONE_UNKNOWN7,X
    case 0xC4AF09: cpu.execute_instruction<0xBF>(0xC4ACB4, 4); return true;
    // src/overworld/use_sound_stone.asm:240 SEC
    case 0xC4AF0D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:241 SBC #9
    case 0xC4AF0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000009, 2); else cpu.execute_instruction<0xE9>(0x000009, 3); return true;
    // src/overworld/use_sound_stone.asm:241 SBC #9
    // Overlapping static entry reached from 0xC4AF0E.
    case 0xC4AF10: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:242 STA @VIRTUAL02
    case 0xC4AF11: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:243 LDA @LOCAL0A
    case 0xC4AF13: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/overworld/use_sound_stone.asm:244 STA @VIRTUAL04
    case 0xC4AF15: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:244 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4AF61.
    case 0xC4AF16: cpu.execute_instruction<0x04>(0x0000C5, 2); return true;
    // src/overworld/use_sound_stone.asm:245 CMP @VIRTUAL02
    case 0xC4AF17: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:245 CMP @VIRTUAL02
    // Overlapping static entry reached from 0xC4AF16.
    case 0xC4AF18: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:246 BNE @UNKNOWN19
    case 0xC4AF19: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:247 LDA @LOCAL10
    case 0xC4AF1B: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/overworld/use_sound_stone.asm:248 CLC
    case 0xC4AF1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:249 ADC #8
    case 0xC4AF1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:249 ADC #8
    // Overlapping static entry reached from 0xC4AF1E.
    case 0xC4AF20: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:250 JSL UNKNOWN_C0AC0C
    case 0xC4AF21: cpu.execute_instruction<0x22>(0xC0AC0C, 4); return true;
    // src/overworld/use_sound_stone.asm:252 JSL OAM_CLEAR
    case 0xC4AF25: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    case 0xC4AF29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/overworld/use_sound_stone.asm:253 LDA #^SOUND_STONE_SPRITEMAP_1
    // Overlapping static entry reached from 0xC4AF29.
    case 0xC4AF2B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:254 JSL UNKNOWN_C088A5
    case 0xC4AF2C: cpu.execute_instruction<0x22>(0xC088A5, 4); return true;
    // src/overworld/use_sound_stone.asm:255 STZ @LOCAL06
    case 0xC4AF30: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:256 JMP @UNKNOWN27
    case 0xC4AF32: cpu.execute_instruction<0x4C>(0x00B122, 3); return true;
    // src/overworld/use_sound_stone.asm:258 LDA @LOCAL06
    case 0xC4AF35: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF37: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF39: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:259 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4AF3F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:260 STA @LOCAL05
    case 0xC4AF40: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:261 TAX
    case 0xC4AF42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:262 LDA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::state,X
    case 0xC4AF43: cpu.execute_instruction<0xBD>(0x00B37E, 3); return true;
    // src/overworld/use_sound_stone.asm:263 CMP #1
    case 0xC4AF46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:263 CMP #1
    // Overlapping static entry reached from 0xC4AF46.
    case 0xC4AF48: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_sound_stone.asm:264 BEQ @UNKNOWN21
    case 0xC4AF49: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:265 CMP #2
    case 0xC4AF4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:265 CMP #2
    // Overlapping static entry reached from 0xC4AF4B.
    case 0xC4AF4D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/overworld/use_sound_stone.asm:266 BEQ @UNKNOWN22
    case 0xC4AF4E: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/overworld/use_sound_stone.asm:267 JMP @UNKNOWN26
    case 0xC4AF50: cpu.execute_instruction<0x4C>(0x00B120, 3); return true;
    // src/overworld/use_sound_stone.asm:269 LDX @LOCAL06
    case 0xC4AF53: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:270 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AF55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:271 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC4AF57: cpu.execute_instruction<0xBF>(0xC4AC8B, 4); return true;
    // src/overworld/use_sound_stone.asm:272 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC4AF5B: cpu.execute_instruction<0x8D>(0x00B3EF, 3); return true;
    // src/overworld/use_sound_stone.asm:273 LDA #$30
    case 0xC4AF5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x008D30, 3); return true;
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC4AF60: cpu.execute_instruction<0x8D>(0x00B3F0, 3); return true;
    // src/overworld/use_sound_stone.asm:274 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC4AF5E.
    case 0xC4AF61: cpu.execute_instruction<0xF0>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:275 LDX @LOCAL06
    case 0xC4AF63: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:276 REP #PROC_FLAGS::ACCUM8
    case 0xC4AF65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:277 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC4AF67: cpu.execute_instruction<0xBF>(0xC4AC83, 4); return true;
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    case 0xC4AF6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:278 AND #$00FF
    // Overlapping static entry reached from 0xC4AF6B.
    case 0xC4AF6D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_sound_stone.asm:279 TAY
    case 0xC4AF6E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:280 LDX @LOCAL06
    case 0xC4AF6F: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:281 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC4AF71: cpu.execute_instruction<0xBF>(0xC4AC7B, 4); return true;
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    case 0xC4AF75: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:282 AND #$00FF
    // Overlapping static entry reached from 0xC4AF75.
    case 0xC4AF77: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:283 TAX
    case 0xC4AF78: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC4AF79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x00B3EE, 3); return true;
    // src/overworld/use_sound_stone.asm:284 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC4AF79.
    case 0xC4AF7B: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    case 0xC4AF7C: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4AF7B.
    case 0xC4AF7D: cpu.execute_instruction<0xD5>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:285 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4AF7D.
    case 0xC4AF7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00004C, 2); else cpu.execute_instruction<0xC0>(0x00204C, 3); return true;
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    case 0xC4AF80: cpu.execute_instruction<0x4C>(0x00B120, 3); return true;
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC4AF7F.
    case 0xC4AF81: cpu.execute_instruction<0x20>(0x00A5B1, 3); return true;
    // src/overworld/use_sound_stone.asm:286 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC4AF7F.
    case 0xC4AF82: cpu.execute_instruction<0xB1>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    case 0xC4AF83: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:288 LDA @LOCAL05
    // Overlapping static entry reached from 0xC4AF82.
    case 0xC4AF84: cpu.execute_instruction<0x1C>(0x006918, 3); return true;
    // src/overworld/use_sound_stone.asm:289 CLC
    case 0xC4AF85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC4AF86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000088, 2); else cpu.execute_instruction<0x69>(0x00B388, 3); return true;
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC4AF84.
    case 0xC4AF87: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:290 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC4AF86.
    case 0xC4AF88: cpu.execute_instruction<0xB3>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:291 TAX
    case 0xC4AF89: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:292 LDA __BSS_START__,X
    case 0xC4AF8A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:293 CLC
    case 0xC4AF8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    case 0xC4AF8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CD, 2); else cpu.execute_instruction<0x69>(0x000CCD, 3); return true;
    // src/overworld/use_sound_stone.asm:294 ADC #65540 / 20 ;65536/20, but rounded up
    // Overlapping static entry reached from 0xC4AF8E.
    case 0xC4AF90: cpu.execute_instruction<0x0C>(0x00009D, 3); return true;
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    case 0xC4AF91: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:295 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4AF90.
    case 0xC4AF93: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/use_sound_stone.asm:296 LDA @LOCAL05
    case 0xC4AF94: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:297 CLC
    case 0xC4AF96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    case 0xC4AF97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x00B380, 3); return true;
    // src/overworld/use_sound_stone.asm:298 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown2
    // Overlapping static entry reached from 0xC4AF97.
    case 0xC4AF99: cpu.execute_instruction<0xB3>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:299 TAX
    case 0xC4AF9A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:300 LDA __BSS_START__,X
    case 0xC4AF9B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:301 TAY
    case 0xC4AF9E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:302 DEY
    case 0xC4AF9F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:303 TYA
    case 0xC4AFA0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:304 STA __BSS_START__,X
    case 0xC4AFA1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:305 BNE @UNKNOWN23
    case 0xC4AFA4: cpu.execute_instruction<0xD0>(0x000060, 2); return true;
    // src/overworld/use_sound_stone.asm:306 LDA #2
    case 0xC4AFA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:306 LDA #2
    // Overlapping static entry reached from 0xC4AFA6.
    case 0xC4AFA8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/overworld/use_sound_stone.asm:307 STA __BSS_START__,X
    case 0xC4AFA9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:308 LDA @LOCAL05
    case 0xC4AFAC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:309 CLC
    case 0xC4AFAE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    case 0xC4AFAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000084, 2); else cpu.execute_instruction<0x69>(0x00B384, 3); return true;
    // src/overworld/use_sound_stone.asm:310 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_frame
    // Overlapping static entry reached from 0xC4AFAF.
    case 0xC4AFB1: cpu.execute_instruction<0xB3>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:311 TAX
    case 0xC4AFB2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:312 STX @LOCAL07
    case 0xC4AFB3: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:313 LDA @LOCAL05
    case 0xC4AFB5: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:314 PHA
    case 0xC4AFB7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000057, 2); else cpu.execute_instruction<0xA9>(0x00AC57, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFB8.
    case 0xC4AFBA: cpu.execute_instruction<0xAC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFBD.
    case 0xC4AFBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:315 LOADPTR UNKNOWN_C4AC57, @VIRTUAL06
    case 0xC4AFC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:316 LDA @LOCAL06
    case 0xC4AFC2: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:317 ASL
    case 0xC4AFC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:318 ASL
    case 0xC4AFC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:319 CLC
    case 0xC4AFC6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:320 ADC @VIRTUAL06
    case 0xC4AFC7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:321 STA @VIRTUAL06
    case 0xC4AFC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AFCB.
    case 0xC4AFCD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFCE: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/use_sound_stone.asm:322 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC4AFD5: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:323 LDA __BSS_START__,X
    case 0xC4AFD7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:324 CLC
    case 0xC4AFDA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:325 ADC @VIRTUAL06
    case 0xC4AFDB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:326 STA @VIRTUAL06
    case 0xC4AFDD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:327 LDA [@VIRTUAL06]
    case 0xC4AFDF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    case 0xC4AFE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:328 AND #$00FF
    // Overlapping static entry reached from 0xC4AFE1.
    case 0xC4AFE3: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/overworld/use_sound_stone.asm:329 PLX
    case 0xC4AFE4: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:330 STA SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::orbit_sprite_position_1,X
    case 0xC4AFE5: cpu.execute_instruction<0x9D>(0x00B386, 3); return true;
    // src/overworld/use_sound_stone.asm:331 LDX @LOCAL07
    case 0xC4AFE8: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:332 LDA __BSS_START__,X
    case 0xC4AFEA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:333 INC
    case 0xC4AFED: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:334 STA __BSS_START__,X
    case 0xC4AFEE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:335 LDA @LOCAL05
    case 0xC4AFF1: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/overworld/use_sound_stone.asm:336 CLC
    case 0xC4AFF3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    case 0xC4AFF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000082, 2); else cpu.execute_instruction<0x69>(0x00B382, 3); return true;
    // src/overworld/use_sound_stone.asm:337 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::unknown4
    // Overlapping static entry reached from 0xC4AFF4.
    case 0xC4AFF6: cpu.execute_instruction<0xB3>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:338 TAX
    case 0xC4AFF7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:339 LDA __BSS_START__,X
    case 0xC4AFF8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:340 STA @VIRTUAL02
    case 0xC4AFFB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:341 LDA #2
    case 0xC4AFFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/overworld/use_sound_stone.asm:341 LDA #2
    // Overlapping static entry reached from 0xC4AFFD.
    case 0xC4AFFF: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/overworld/use_sound_stone.asm:342 SEC
    case 0xC4B000: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:343 SBC @VIRTUAL02
    case 0xC4B001: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:344 STA __BSS_START__,X
    case 0xC4B003: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:346 LDA @LOCAL06
    case 0xC4B006: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B008: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B00E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/overworld/use_sound_stone.asm:347 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(sound_stone_playback_state)
    case 0xC4B010: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:348 STA @LOCAL07
    case 0xC4B011: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:349 PHA
    case 0xC4B013: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:350 LDX @LOCAL06
    case 0xC4B014: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:351 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B016: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:352 LDA f:SOUND_STONE_UNKNOWN5,X
    case 0xC4B018: cpu.execute_instruction<0xBF>(0xC4AC9B, 4); return true;
    // src/overworld/use_sound_stone.asm:353 PLX
    case 0xC4B01C: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:354 CLC
    case 0xC4B01D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:355 ADC SOUND_STONE_PLAYBACK_STATE + sound_stone_playback_state::unknown4,X
    case 0xC4B01E: cpu.execute_instruction<0x7D>(0x00B382, 3); return true;
    // src/overworld/use_sound_stone.asm:356 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC4B021: cpu.execute_instruction<0x8D>(0x00B3F4, 3); return true;
    // src/overworld/use_sound_stone.asm:357 LDX @LOCAL06
    case 0xC4B024: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:358 LDA f:SOUND_STONE_UNKNOWN6,X
    case 0xC4B026: cpu.execute_instruction<0xBF>(0xC4ACA3, 4); return true;
    // src/overworld/use_sound_stone.asm:359 ASL
    case 0xC4B02A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:360 CLC
    case 0xC4B02B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:361 ADC #$31
    case 0xC4B02C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x008D31, 3); return true;
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC4B02E: cpu.execute_instruction<0x8D>(0x00B3F5, 3); return true;
    // src/overworld/use_sound_stone.asm:362 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC4B02C.
    case 0xC4B02F: cpu.execute_instruction<0xF5>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:363 REP #PROC_FLAGS::ACCUM8
    case 0xC4B031: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:364 LDA @LOCAL07
    case 0xC4B033: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:365 CLC
    case 0xC4B035: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    case 0xC4B036: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000086, 2); else cpu.execute_instruction<0x69>(0x00B386, 3); return true;
    // src/overworld/use_sound_stone.asm:366 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_1
    // Overlapping static entry reached from 0xC4B036.
    case 0xC4B038: cpu.execute_instruction<0xB3>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    case 0xC4B039: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:367 STA @LOCAL04
    // Overlapping static entry reached from 0xC4B038.
    case 0xC4B03A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:368 LDA (@LOCAL04)
    case 0xC4B03B: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:369 TAY
    case 0xC4B03D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC4B03E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:370 BEQL @UNKNOWN25
    case 0xC4B040: cpu.execute_instruction<0x4C>(0x00B0E8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B043: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00AC7B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B043.
    case 0xC4B045: cpu.execute_instruction<0xAC>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B046: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B048: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B048.
    case 0xC4B04A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:371 LOADPTR SOUND_STONE_UNKNOWN, @VIRTUAL0A
    case 0xC4B04B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/use_sound_stone.asm:372 LDA @LOCAL06
    case 0xC4B04D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:373 CLC
    case 0xC4B04F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:374 ADC @VIRTUAL0A
    case 0xC4B050: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:375 STA @VIRTUAL0A
    case 0xC4B052: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:376 LDA @LOCAL07
    case 0xC4B054: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:377 CLC
    case 0xC4B056: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    case 0xC4B057: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000088, 2); else cpu.execute_instruction<0x69>(0x00B388, 3); return true;
    // src/overworld/use_sound_stone.asm:378 ADC #.LOWORD(SOUND_STONE_PLAYBACK_STATE) + sound_stone_playback_state::orbit_sprite_position_2
    // Overlapping static entry reached from 0xC4B057.
    case 0xC4B059: cpu.execute_instruction<0xB3>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    case 0xC4B05A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:379 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B059.
    case 0xC4B05B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B05C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00AC83, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B05C.
    case 0xC4B05E: cpu.execute_instruction<0xAC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B05F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B061: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B061.
    case 0xC4B063: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/use_sound_stone.asm:380 LOADPTR SOUND_STONE_UNKNOWN2, @VIRTUAL06
    case 0xC4B064: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/use_sound_stone.asm:381 LDA @LOCAL06
    case 0xC4B066: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:382 CLC
    case 0xC4B068: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:383 ADC @VIRTUAL06
    case 0xC4B069: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:384 STA @VIRTUAL06
    case 0xC4B06B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:385 LDA (@LOCAL03)
    case 0xC4B06D: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:386 XBA
    case 0xC4B06F: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    case 0xC4B070: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:387 AND #$00FF
    // Overlapping static entry reached from 0xC4B070.
    case 0xC4B072: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:388 TAX
    case 0xC4B073: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:389 TYA
    case 0xC4B074: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:390 JSL COSINE_SINE
    case 0xC4B075: cpu.execute_instruction<0x22>(0xC0B40B, 4); return true;
    // src/overworld/use_sound_stone.asm:391 STA @LOCAL02
    case 0xC4B079: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:392 LDA (@LOCAL03)
    case 0xC4B07B: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:393 XBA
    case 0xC4B07D: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    case 0xC4B07E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:394 AND #$00FF
    // Overlapping static entry reached from 0xC4B07E.
    case 0xC4B080: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:395 TAX
    case 0xC4B081: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:396 LDA (@LOCAL04)
    case 0xC4B082: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:397 JSL COSINE
    case 0xC4B084: cpu.execute_instruction<0x22>(0xC0B400, 4); return true;
    // src/overworld/use_sound_stone.asm:398 STA @VIRTUAL02
    case 0xC4B088: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:399 LDA [@VIRTUAL06]
    case 0xC4B08A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    case 0xC4B08C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:400 AND #$00FF
    // Overlapping static entry reached from 0xC4B08C.
    case 0xC4B08E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:401 CLC
    case 0xC4B08F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:402 ADC @VIRTUAL02
    case 0xC4B090: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:403 TAY
    case 0xC4B092: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:404 LDA [@VIRTUAL0A]
    case 0xC4B093: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    case 0xC4B095: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:405 AND #$00FF
    // Overlapping static entry reached from 0xC4B095.
    case 0xC4B097: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:406 CLC
    case 0xC4B098: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:407 ADC @LOCAL02
    case 0xC4B099: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:408 TAX
    case 0xC4B09B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC4B09C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x00B3F3, 3); return true;
    // src/overworld/use_sound_stone.asm:409 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC4B09C.
    case 0xC4B09E: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    case 0xC4B09F: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B09E.
    case 0xC4B0A0: cpu.execute_instruction<0xD5>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:410 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B0A0.
    case 0xC4B0A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000B2, 2); else cpu.execute_instruction<0xC0>(0x0018B2, 3); return true;
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    case 0xC4B0A3: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:411 LDA (@LOCAL03)
    // Overlapping static entry reached from 0xC4B0A2.
    case 0xC4B0A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:412 XBA
    case 0xC4B0A5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    case 0xC4B0A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:413 AND #$00FF
    // Overlapping static entry reached from 0xC4B0A6.
    case 0xC4B0A8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:414 CLC
    case 0xC4B0A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:415 ADC #128
    case 0xC4B0AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/overworld/use_sound_stone.asm:415 ADC #128
    // Overlapping static entry reached from 0xC4B0AA.
    case 0xC4B0AC: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    case 0xC4B0AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:416 AND #$00FF
    // Overlapping static entry reached from 0xC4B0AD.
    case 0xC4B0AF: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:417 TAX
    case 0xC4B0B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:418 LDA (@LOCAL04)
    case 0xC4B0B1: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:419 JSL COSINE_SINE
    case 0xC4B0B3: cpu.execute_instruction<0x22>(0xC0B40B, 4); return true;
    // src/overworld/use_sound_stone.asm:419 JSL COSINE_SINE
    // Overlapping static entry reached from 0xC4B101.
    case 0xC4B0B6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x001685, 3); return true;
    // src/overworld/use_sound_stone.asm:420 STA @LOCAL02
    case 0xC4B0B7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:420 STA @LOCAL02
    // Overlapping static entry reached from 0xC4B0B6.
    case 0xC4B0B8: cpu.execute_instruction<0x16>(0x0000B2, 2); return true;
    // src/overworld/use_sound_stone.asm:421 LDA (@LOCAL03)
    case 0xC4B0B9: cpu.execute_instruction<0xB2>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:421 LDA (@LOCAL03)
    // Overlapping static entry reached from 0xC4B0B8.
    case 0xC4B0BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:422 XBA
    case 0xC4B0BB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    case 0xC4B0BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:423 AND #$00FF
    // Overlapping static entry reached from 0xC4B0BC.
    case 0xC4B0BE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:424 CLC
    case 0xC4B0BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:425 ADC #128
    case 0xC4B0C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/overworld/use_sound_stone.asm:425 ADC #128
    // Overlapping static entry reached from 0xC4B0C0.
    case 0xC4B0C2: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    case 0xC4B0C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:426 AND #$00FF
    // Overlapping static entry reached from 0xC4B0C3.
    case 0xC4B0C5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:427 TAX
    case 0xC4B0C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:428 LDA (@LOCAL04)
    case 0xC4B0C7: cpu.execute_instruction<0xB2>(0x00001A, 2); return true;
    // src/overworld/use_sound_stone.asm:429 JSL COSINE
    case 0xC4B0C9: cpu.execute_instruction<0x22>(0xC0B400, 4); return true;
    // src/overworld/use_sound_stone.asm:430 STA @VIRTUAL02
    case 0xC4B0CD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:431 LDA [@VIRTUAL06]
    case 0xC4B0CF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    case 0xC4B0D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:432 AND #$00FF
    // Overlapping static entry reached from 0xC4B0D1.
    case 0xC4B0D3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:433 CLC
    case 0xC4B0D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:434 ADC @VIRTUAL02
    case 0xC4B0D5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/overworld/use_sound_stone.asm:435 TAY
    case 0xC4B0D7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:436 LDA [@VIRTUAL0A]
    case 0xC4B0D8: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    case 0xC4B0DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:437 AND #$00FF
    // Overlapping static entry reached from 0xC4B0DA.
    case 0xC4B0DC: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/overworld/use_sound_stone.asm:438 CLC
    case 0xC4B0DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:439 ADC @LOCAL02
    case 0xC4B0DE: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/overworld/use_sound_stone.asm:440 TAX
    case 0xC4B0E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    case 0xC4B0E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x00B3F3, 3); return true;
    // src/overworld/use_sound_stone.asm:441 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC4B0E1.
    case 0xC4B0E3: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    case 0xC4B0E4: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B0E3.
    case 0xC4B0E5: cpu.execute_instruction<0xD5>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:442 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B0E5.
    case 0xC4B0E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A6, 2); else cpu.execute_instruction<0xC0>(0x001EA6, 3); return true;
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    case 0xC4B0E8: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:444 LDX @LOCAL06
    // Overlapping static entry reached from 0xC4B0E7.
    case 0xC4B0E9: cpu.execute_instruction<0x1E>(0x0020E2, 3); return true;
    // src/overworld/use_sound_stone.asm:445 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B0EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:446 LDA f:SOUND_STONE_UNKNOWN3,X
    case 0xC4B0EC: cpu.execute_instruction<0xBF>(0xC4AC8B, 4); return true;
    // src/overworld/use_sound_stone.asm:447 CLC
    case 0xC4B0F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:448 ADC #128
    case 0xC4B0F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x008D80, 3); return true;
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    case 0xC4B0F3: cpu.execute_instruction<0x8D>(0x00B3EF, 3); return true;
    // src/overworld/use_sound_stone.asm:449 STA SOUND_STONE_SPRITEMAP_1 + spritemap::tile
    // Overlapping static entry reached from 0xC4B0F1.
    case 0xC4B0F4: cpu.execute_instruction<0xEF>(0x1EA6B3, 4); return true;
    // src/overworld/use_sound_stone.asm:450 LDX @LOCAL06
    case 0xC4B0F6: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:451 LDA f:SOUND_STONE_UNKNOWN4,X
    case 0xC4B0F8: cpu.execute_instruction<0xBF>(0xC4AC93, 4); return true;
    // src/overworld/use_sound_stone.asm:452 ASL
    case 0xC4B0FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:453 CLC
    case 0xC4B0FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:454 ADC #$30
    case 0xC4B0FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x008D30, 3); return true;
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    case 0xC4B100: cpu.execute_instruction<0x8D>(0x00B3F0, 3); return true;
    // src/overworld/use_sound_stone.asm:455 STA SOUND_STONE_SPRITEMAP_1 + spritemap::flags
    // Overlapping static entry reached from 0xC4B0FE.
    case 0xC4B101: cpu.execute_instruction<0xF0>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:456 LDX @LOCAL06
    case 0xC4B103: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:457 REP #PROC_FLAGS::ACCUM8
    case 0xC4B105: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:458 LDA f:SOUND_STONE_UNKNOWN2,X
    case 0xC4B107: cpu.execute_instruction<0xBF>(0xC4AC83, 4); return true;
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    case 0xC4B10B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:459 AND #$00FF
    // Overlapping static entry reached from 0xC4B10B.
    case 0xC4B10D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/overworld/use_sound_stone.asm:460 TAY
    case 0xC4B10E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:461 LDX @LOCAL06
    case 0xC4B10F: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:462 LDA f:SOUND_STONE_UNKNOWN,X
    case 0xC4B111: cpu.execute_instruction<0xBF>(0xC4AC7B, 4); return true;
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    case 0xC4B115: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:463 AND #$00FF
    // Overlapping static entry reached from 0xC4B115.
    case 0xC4B117: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/overworld/use_sound_stone.asm:464 TAX
    case 0xC4B118: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    case 0xC4B119: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x00B3EE, 3); return true;
    // src/overworld/use_sound_stone.asm:465 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_1)
    // Overlapping static entry reached from 0xC4B119.
    case 0xC4B11B: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    case 0xC4B11C: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B11B.
    case 0xC4B11D: cpu.execute_instruction<0xD5>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:466 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B11D.
    case 0xC4B11F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E6, 2); else cpu.execute_instruction<0xC0>(0x001EE6, 3); return true;
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    case 0xC4B120: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:468 INC @LOCAL06
    // Overlapping static entry reached from 0xC4B11F.
    case 0xC4B121: cpu.execute_instruction<0x1E>(0x001EA5, 3); return true;
    // src/overworld/use_sound_stone.asm:470 LDA @LOCAL06
    case 0xC4B122: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/overworld/use_sound_stone.asm:471 CMP #8
    case 0xC4B124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/overworld/use_sound_stone.asm:471 CMP #8
    // Overlapping static entry reached from 0xC4B124.
    case 0xC4B126: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC4B127: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC4B129: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:472 BCCL @UNKNOWN20
    case 0xC4B12B: cpu.execute_instruction<0x4C>(0x00AF35, 3); return true;
    // src/overworld/use_sound_stone.asm:473 DEC @LOCAL0E
    case 0xC4B12E: cpu.execute_instruction<0xC6>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:474 LDA @LOCAL0E
    case 0xC4B130: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:475 BNE @UNKNOWN29
    case 0xC4B132: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/overworld/use_sound_stone.asm:476 LDA #15
    case 0xC4B134: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00000F, 3); return true;
    // src/overworld/use_sound_stone.asm:476 LDA #15
    // Overlapping static entry reached from 0xC4B134.
    case 0xC4B136: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:477 STA @LOCAL0E
    case 0xC4B137: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/overworld/use_sound_stone.asm:478 LDA @LOCAL0F
    case 0xC4B139: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:479 INC
    case 0xC4B13B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    case 0xC4B13C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/overworld/use_sound_stone.asm:480 AND #$0003
    // Overlapping static entry reached from 0xC4B13C.
    case 0xC4B13E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/overworld/use_sound_stone.asm:481 STA @LOCAL0F
    case 0xC4B13F: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:483 LDA @LOCAL0F
    case 0xC4B141: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/overworld/use_sound_stone.asm:484 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B143: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:485 ASL
    case 0xC4B145: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:486 CLC
    case 0xC4B146: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:487 ADC #64
    case 0xC4B147: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x008D40, 3); return true;
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    case 0xC4B149: cpu.execute_instruction<0x8D>(0x00B3F4, 3); return true;
    // src/overworld/use_sound_stone.asm:488 STA SOUND_STONE_SPRITEMAP_2 + spritemap::tile
    // Overlapping static entry reached from 0xC4B147.
    case 0xC4B14A: cpu.execute_instruction<0xF4>(0x00A9B3, 3); return true;
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    case 0xC4B14C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x008D3B, 3); return true;
    // src/overworld/use_sound_stone.asm:489 LDA #$3B
    // Overlapping static entry reached from 0xC4B14A.
    case 0xC4B14D: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    case 0xC4B14E: cpu.execute_instruction<0x8D>(0x00B3F5, 3); return true;
    // src/overworld/use_sound_stone.asm:490 STA SOUND_STONE_SPRITEMAP_2 + spritemap::flags
    // Overlapping static entry reached from 0xC4B14C.
    case 0xC4B14F: cpu.execute_instruction<0xF5>(0x0000B3, 2); return true;
    // src/overworld/use_sound_stone.asm:491 LDY #112
    case 0xC4B151: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000070, 2); else cpu.execute_instruction<0xA0>(0x000070, 3); return true;
    // src/overworld/use_sound_stone.asm:491 LDY #112
    // Overlapping static entry reached from 0xC4B151.
    case 0xC4B153: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/overworld/use_sound_stone.asm:492 LDX #128
    case 0xC4B154: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000080, 3); return true;
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC4B183.
    case 0xC4B155: cpu.execute_instruction<0x80>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:492 LDX #128
    // Overlapping static entry reached from 0xC4B154.
    case 0xC4B156: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/overworld/use_sound_stone.asm:493 REP #PROC_FLAGS::ACCUM8
    case 0xC4B157: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    case 0xC4B159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F3, 2); else cpu.execute_instruction<0xA9>(0x00B3F3, 3); return true;
    // src/overworld/use_sound_stone.asm:494 LDA #.LOWORD(SOUND_STONE_SPRITEMAP_2)
    // Overlapping static entry reached from 0xC4B159.
    case 0xC4B15B: cpu.execute_instruction<0xB3>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    case 0xC4B15C: cpu.execute_instruction<0x22>(0xC08CD5, 4); return true;
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B15B.
    case 0xC4B15D: cpu.execute_instruction<0xD5>(0x00008C, 2); return true;
    // src/overworld/use_sound_stone.asm:495 JSL UNKNOWN_C08CD5
    // Overlapping static entry reached from 0xC4B15D.
    case 0xC4B15F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x002622, 3); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    case 0xC4B160: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC4B15F.
    case 0xC4B161: cpu.execute_instruction<0x26>(0x00008B, 2); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC4B15F.
    case 0xC4B162: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:496 JSL UPDATE_SCREEN
    // Overlapping static entry reached from 0xC4B162.
    case 0xC4B163: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/overworld/use_sound_stone.asm:497 LDX #0
    case 0xC4B164: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC4B163.
    case 0xC4B165: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:497 LDX #0
    // Overlapping static entry reached from 0xC4B164.
    case 0xC4B166: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC4B167: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x00ADD4, 3); return true;
    // src/overworld/use_sound_stone.asm:498 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC4B167.
    case 0xC4B169: cpu.execute_instruction<0xAD>(0x002D22, 3); return true;
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    case 0xC4B16A: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/overworld/use_sound_stone.asm:499 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC4B169.
    case 0xC4B16C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C2, 2); else cpu.execute_instruction<0xC9>(0x00A2C2, 3); return true;
    // src/overworld/use_sound_stone.asm:500 LDX #1
    case 0xC4B16E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC4B16C.
    case 0xC4B16F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/overworld/use_sound_stone.asm:500 LDX #1
    // Overlapping static entry reached from 0xC4B16E.
    case 0xC4B170: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC4B171: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00AE4B, 3); return true;
    // src/overworld/use_sound_stone.asm:501 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC4B171.
    case 0xC4B173: cpu.execute_instruction<0xAE>(0x002D22, 3); return true;
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    case 0xC4B174: cpu.execute_instruction<0x22>(0xC2C92D, 4); return true;
    // src/overworld/use_sound_stone.asm:502 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC4B173.
    case 0xC4B176: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000C2, 2); else cpu.execute_instruction<0xC9>(0x00A5C2, 3); return true;
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    case 0xC4B178: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // src/overworld/use_sound_stone.asm:503 LDA @LOCAL11
    // Overlapping static entry reached from 0xC4B176.
    case 0xC4B179: cpu.execute_instruction<0x34>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC4B17A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC4B179.
    case 0xC4B17B: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    case 0xC4B17C: cpu.execute_instruction<0x4C>(0x00AE03, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:504 BEQL @UNKNOWN4
    // Overlapping static entry reached from 0xC4B17B.
    case 0xC4B17D: cpu.execute_instruction<0x03>(0x0000AE, 2); return true;
    // src/overworld/use_sound_stone.asm:505 LDA @LOCAL08
    case 0xC4B17F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    case 0xC4B181: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000C0, 2); else cpu.execute_instruction<0x29>(0x0080C0, 3); return true;
    // src/overworld/use_sound_stone.asm:506 AND #$80C0
    // Overlapping static entry reached from 0xC4B181.
    case 0xC4B183: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC4B184: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/overworld/use_sound_stone.asm:507 BEQL @UNKNOWN4
    case 0xC4B186: cpu.execute_instruction<0x4C>(0x00AE03, 3); return true;
    // src/overworld/use_sound_stone.asm:509 LDX #1
    case 0xC4B189: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:509 LDX #1
    // Overlapping static entry reached from 0xC4B189.
    case 0xC4B18B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/use_sound_stone.asm:510 TXA
    case 0xC4B18C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:511 JSL FADE_OUT
    case 0xC4B18D: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/overworld/use_sound_stone.asm:512 BRA @UNKNOWN33
    case 0xC4B191: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/overworld/use_sound_stone.asm:514 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4B193: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/overworld/use_sound_stone.asm:516 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC4B197: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    case 0xC4B19A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/overworld/use_sound_stone.asm:517 AND #$00FF
    // Overlapping static entry reached from 0xC4B19A.
    case 0xC4B19C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/overworld/use_sound_stone.asm:518 BNE @UNKNOWN32
    case 0xC4B19D: cpu.execute_instruction<0xD0>(0x0000F4, 2); return true;
    // src/overworld/use_sound_stone.asm:519 JSL UNKNOWN_C08726
    case 0xC4B19F: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/overworld/use_sound_stone.asm:520 LDA #1
    case 0xC4B1A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:520 LDA #1
    // Overlapping static entry reached from 0xC4B1A3.
    case 0xC4B1A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/overworld/use_sound_stone.asm:521 JSL UNKNOWN_C0AFCD
    case 0xC4B1A6: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // src/overworld/use_sound_stone.asm:522 JSL RELOAD_MAP
    case 0xC4B1AA: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/overworld/use_sound_stone.asm:523 LDX #1
    case 0xC4B1AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/overworld/use_sound_stone.asm:523 LDX #1
    // Overlapping static entry reached from 0xC4B1AE.
    case 0xC4B1B0: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/overworld/use_sound_stone.asm:524 TXA
    case 0xC4B1B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/use_sound_stone.asm:525 JSL FADE_IN
    case 0xC4B1B2: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC4B1B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/use_sound_stone.asm:526 END_C_FUNCTION
    case 0xC4B1B7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/overworld/velocity_store.asm (source_named).
bool execute_overworld_velocity_store_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/overworld/velocity_store.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC430EC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430EE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430EF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC430F0.
    case 0xC430F2: cpu.execute_instruction<0xFF>(0x00A05B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/overworld/velocity_store.asm:8 END_STACK_VARS
    case 0xC430F3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:9 LDY #0
    case 0xC430F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/overworld/velocity_store.asm:9 LDY #0
    // Overlapping static entry reached from 0xC430F4.
    case 0xC430F6: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/overworld/velocity_store.asm:10 STY @LOCAL02
    case 0xC430F7: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:11 JMP @UNKNOWN1
    case 0xC430F9: cpu.execute_instruction<0x4C>(0x0032A5, 3); return true;
    // src/overworld/velocity_store.asm:13 TYA
    case 0xC430FC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:14 ASL
    case 0xC430FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:15 ASL
    case 0xC430FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:16 TAX
    case 0xC430FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43100: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BC, 2); else cpu.execute_instruction<0xA9>(0x00E0BC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43100.
    case 0xC43102: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43103: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43102.
    case 0xC43104: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43105: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC43105.
    case 0xC43107: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:17 LOADPTR MOVEMENT_SPEEDS, @VIRTUAL0A
    case 0xC43108: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/velocity_store.asm:18 TXA
    case 0xC4310A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:19 CLC
    case 0xC4310B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:20 ADC @VIRTUAL0A
    case 0xC4310C: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/velocity_store.asm:21 STA @VIRTUAL0A
    case 0xC4310E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43110: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC43110.
    case 0xC43112: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43113: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43115: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43116: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC43118: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:22 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4311A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4311C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4311E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43120: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC43122: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC43124: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC43124.
    case 0xC43126: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC43127: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC43129: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC43129.
    case 0xC4312B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:24 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4312C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:25 LDY @LOCAL02
    case 0xC4312E: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:26 TYA
    case 0xC43130: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:27 ASL
    case 0xC43131: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:28 ASL
    case 0xC43132: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:29 ASL
    case 0xC43133: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:30 ASL
    case 0xC43134: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:31 ASL
    case 0xC43135: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:32 STA @LOCAL01
    case 0xC43136: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:33 CLC
    case 0xC43138: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC43139: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E6, 2); else cpu.execute_instruction<0x69>(0x004DE6, 3); return true;
    // src/overworld/velocity_store.asm:34 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC43139.
    case 0xC4313B: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:35 TAY
    case 0xC4313C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4313D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4313B.
    case 0xC4313E: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4313F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4313E.
    case 0xC43140: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43142: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:36 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43144: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:37 LDA @LOCAL01
    case 0xC43147: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:38 CLC
    case 0xC43149: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC4314A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x004DD6, 3); return true;
    // src/overworld/velocity_store.asm:39 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC4314A.
    case 0xC4314C: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:40 TAY
    case 0xC4314D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4314E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4314C.
    case 0xC4314F: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43150: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4314F.
    case 0xC43151: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43153: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:41 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43155: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:42 LDA @LOCAL01
    case 0xC43158: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:43 CLC
    case 0xC4315A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC4315B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x004FAE, 3); return true;
    // src/overworld/velocity_store.asm:44 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC4315B.
    case 0xC4315D: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:45 TAY
    case 0xC4315E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4315F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43161: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43164: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:46 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43166: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:47 LDA @LOCAL01
    case 0xC43169: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:48 CLC
    case 0xC4316B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC4316C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009E, 2); else cpu.execute_instruction<0x69>(0x004F9E, 3); return true;
    // src/overworld/velocity_store.asm:49 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC4316C.
    case 0xC4316E: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:50 TAY
    case 0xC4316F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43170: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43172: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43175: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:51 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43177: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4317A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4317C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4317E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:52 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43180: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:53 LDA @LOCAL01
    case 0xC43182: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:54 CLC
    case 0xC43184: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    case 0xC43185: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A6, 2); else cpu.execute_instruction<0x69>(0x004FA6, 3); return true;
    // src/overworld/velocity_store.asm:55 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down
    // Overlapping static entry reached from 0xC43185.
    case 0xC43187: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:56 TAY
    case 0xC43188: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43189: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4318B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4318E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:57 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43190: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:58 LDA @LOCAL01
    case 0xC43193: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:59 CLC
    case 0xC43195: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    case 0xC43196: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x004DDE, 3); return true;
    // src/overworld/velocity_store.asm:60 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::right
    // Overlapping static entry reached from 0xC43196.
    case 0xC43198: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:61 TAY
    case 0xC43199: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4319A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43198.
    case 0xC4319B: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4319C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4319B.
    case 0xC4319D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4319F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431A1: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431A4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431A8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:63 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC431AA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:64 SEC
    case 0xC431AC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC431AD.
    case 0xC431AF: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B0: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC431B4.
    case 0xC431B6: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B7: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:65 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC431B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:66 LDA @LOCAL01
    case 0xC431BB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:67 CLC
    case 0xC431BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    case 0xC431BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000096, 2); else cpu.execute_instruction<0x69>(0x004F96, 3); return true;
    // src/overworld/velocity_store.asm:68 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up
    // Overlapping static entry reached from 0xC431BE.
    case 0xC431C0: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:69 TAY
    case 0xC431C1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:70 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431C9: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:71 LDA @LOCAL01
    case 0xC431CC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:72 CLC
    case 0xC431CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    case 0xC431CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x004DEE, 3); return true;
    // src/overworld/velocity_store.asm:73 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::left
    // Overlapping static entry reached from 0xC431CF.
    case 0xC431D1: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:74 TAY
    case 0xC431D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC431D1.
    case 0xC431D4: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431D5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC431D4.
    case 0xC431D6: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:75 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC431DA: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x00E0F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431DD.
    case 0xC431DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000085, 2); else cpu.execute_instruction<0xE0>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431DF.
    case 0xC431E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC431E2.
    case 0xC431E4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/overworld/velocity_store.asm:76 LOADPTR MOVEMENT_SPEEDS_DIAGONAL, @VIRTUAL0A
    case 0xC431E5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/overworld/velocity_store.asm:77 TXA
    case 0xC431E7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:78 CLC
    case 0xC431E8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:79 ADC @VIRTUAL0A
    case 0xC431E9: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/overworld/velocity_store.asm:80 STA @VIRTUAL0A
    case 0xC431EB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC431ED.
    case 0xC431EF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F0: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/overworld/velocity_store.asm:81 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC431F7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:82 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC431FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/overworld/velocity_store.asm:83 LDA @LOCAL01
    case 0xC43201: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:84 CLC
    case 0xC43203: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC43204: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AA, 2); else cpu.execute_instruction<0x69>(0x004FAA, 3); return true;
    // src/overworld/velocity_store.asm:85 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC43204.
    case 0xC43206: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:86 TAY
    case 0xC43207: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43208: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4320A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4320D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:87 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4320F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:88 LDA @LOCAL01
    case 0xC43212: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:89 CLC
    case 0xC43214: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC43215: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A2, 2); else cpu.execute_instruction<0x69>(0x004FA2, 3); return true;
    // src/overworld/velocity_store.asm:90 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC43215.
    case 0xC43217: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:91 TAY
    case 0xC43218: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43219: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4321B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4321E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43220: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:92 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC46B31.
    case 0xC43222: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/overworld/velocity_store.asm:93 LDA @LOCAL01
    case 0xC43223: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:94 CLC
    case 0xC43225: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    case 0xC43226: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x004DE2, 3); return true;
    // src/overworld/velocity_store.asm:95 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_right
    // Overlapping static entry reached from 0xC43226.
    case 0xC43228: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:96 TAY
    case 0xC43229: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4322A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43228.
    case 0xC4322B: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4322C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4322B.
    case 0xC4322D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4322F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:97 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43231: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:98 LDA @LOCAL01
    case 0xC43234: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:99 CLC
    case 0xC43236: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC43237: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DA, 2); else cpu.execute_instruction<0x69>(0x004DDA, 3); return true;
    // src/overworld/velocity_store.asm:100 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC43237.
    case 0xC43239: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:101 TAY
    case 0xC4323A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4323B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43239.
    case 0xC4323C: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4323D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC4323C.
    case 0xC4323E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43240: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:102 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43242: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43245: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43247: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC43249: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:103 MOVE_INT @LOCAL00, @VIRTUAL06
    case 0xC4324B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:104 SEC
    case 0xC4324D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC4324E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1020 LDA #.LOWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC4324E.
    case 0xC43250: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1021 SBC var
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43251: cpu.execute_instruction<0xE5>(0x000006, 2); return true;
    // include/macros.asm:1022 STA dest
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43253: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43255: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1023 LDA #.HIWORD(constant)
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    // Overlapping static entry reached from 0xC43255.
    case 0xC43257: cpu.execute_instruction<0x00>(0x0000E5, 2); return true;
    // include/macros.asm:1024 SBC var+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC43258: cpu.execute_instruction<0xE5>(0x000008, 2); return true;
    // include/macros.asm:1025 STA dest+2
    // Macro caller: src/overworld/velocity_store.asm:105 NEGATE_INT_ASSIGN @VIRTUAL06
    case 0xC4325A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/overworld/velocity_store.asm:106 LDA @LOCAL01
    case 0xC4325C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:107 CLC
    case 0xC4325E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC4325F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B2, 2); else cpu.execute_instruction<0x69>(0x004FB2, 3); return true;
    // src/overworld/velocity_store.asm:108 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC4325F.
    case 0xC43261: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:109 TAY
    case 0xC43262: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43263: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43265: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43268: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:110 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4326A: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:111 LDA @LOCAL01
    case 0xC4326D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:112 CLC
    case 0xC4326F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    case 0xC43270: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00009A, 2); else cpu.execute_instruction<0x69>(0x004F9A, 3); return true;
    // src/overworld/velocity_store.asm:113 ADC #.LOWORD(VERTICAL_MOVEMENT_SPEEDS) + movement_speeds::up_right
    // Overlapping static entry reached from 0xC43270.
    case 0xC43272: cpu.execute_instruction<0x4F>(0x06A5A8, 4); return true;
    // src/overworld/velocity_store.asm:114 TAY
    case 0xC43273: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43274: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43276: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43279: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:115 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4327B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:116 LDA @LOCAL01
    case 0xC4327E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:117 CLC
    case 0xC43280: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    case 0xC43281: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x004DEA, 3); return true;
    // src/overworld/velocity_store.asm:118 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::down_left
    // Overlapping static entry reached from 0xC43281.
    case 0xC43283: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:119 TAY
    case 0xC43284: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43285: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43283.
    case 0xC43286: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43287: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43286.
    case 0xC43288: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4328A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:120 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4328C: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:121 LDA @LOCAL01
    case 0xC4328F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/overworld/velocity_store.asm:122 CLC
    case 0xC43291: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    case 0xC43292: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x004DF2, 3); return true;
    // src/overworld/velocity_store.asm:123 ADC #.LOWORD(HORIZONTAL_MOVEMENT_SPEEDS) + movement_speeds::up_left
    // Overlapping static entry reached from 0xC43292.
    case 0xC43294: cpu.execute_instruction<0x4D>(0x00A5A8, 3); return true;
    // src/overworld/velocity_store.asm:124 TAY
    case 0xC43295: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43296: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43294.
    case 0xC43297: cpu.execute_instruction<0x06>(0x000099, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC43298: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    // Overlapping static entry reached from 0xC43297.
    case 0xC43299: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4329B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/overworld/velocity_store.asm:125 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4329D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/overworld/velocity_store.asm:126 LDY @LOCAL02
    case 0xC432A0: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:127 INY
    case 0xC432A2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/overworld/velocity_store.asm:128 STY @LOCAL02
    case 0xC432A3: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/overworld/velocity_store.asm:130 CPY #14
    case 0xC432A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000E, 2); else cpu.execute_instruction<0xC0>(0x00000E, 3); return true;
    // src/overworld/velocity_store.asm:130 CPY #14
    // Overlapping static entry reached from 0xC432A5.
    case 0xC432A7: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC432A8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC432AA: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/overworld/velocity_store.asm:131 BCCL @UNKNOWN0
    case 0xC432AC: cpu.execute_instruction<0x4C>(0x0030FC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC432AF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/overworld/velocity_store.asm:132 END_C_FUNCTION
    case 0xC432B0: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
