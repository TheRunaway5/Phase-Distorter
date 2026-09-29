// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/text/ccs/activate_hotspot.asm (source_named).
bool execute_text_ccs_activate_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/activate_hotspot.asm:3 BEGIN_C_FUNCTION
    case 0xC1739C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1739E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1739F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC173A1.
    case 0xC173A3: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC173A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    case 0xC173A6: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC173A3.
    case 0xC173A7: cpu.execute_instruction<0x13>(0x0000A9, 2); return true;
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    case 0xC173A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC173A7.
    case 0xC173A9: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC173A8.
    case 0xC173AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/activate_hotspot.asm:14 CLC
    case 0xC173AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173AC: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173AF: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173B1: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173B3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC173B5: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/activate_hotspot.asm:17 TXA
    case 0xC173B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC173B8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173BA: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/activate_hotspot.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC173BD: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/activate_hotspot.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC173C0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173C2: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    case 0xC173C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009C, 2); else cpu.execute_instruction<0xA9>(0x00739C, 3); return true;
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC173C5.
    case 0xC173C7: cpu.execute_instruction<0x73>(0x00004C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    case 0xC173C8: cpu.execute_instruction<0x4C>(0x0074B1, 3); return true;
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC173C7.
    case 0xC173C9: cpu.execute_instruction<0xB1>(0x000074, 2); return true;
    // src/text/ccs/activate_hotspot.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC173CB: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    case 0xC173CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC173CE.
    case 0xC173D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/activate_hotspot.asm:28 BEQ @UNKNOWN3
    case 0xC173D1: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC173D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173D7: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173D9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC173DB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:31 BRA @UNKNOWN4
    case 0xC173DD: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/activate_hotspot.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC173DF: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC173E2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:36 LDA @VIRTUAL06
    case 0xC173E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/activate_hotspot.asm:37 STA @VIRTUAL00
    case 0xC173E6: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/activate_hotspot.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC173E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:39 LDA CC_ARGUMENT_STORAGE+1
    case 0xC173EA: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    case 0xC173ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC173ED.
    case 0xC173EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/activate_hotspot.asm:41 BEQ @UNKNOWN5
    case 0xC173F0: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC173F2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173F6: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173F8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC173FA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:44 BRA @UNKNOWN6
    case 0xC173FC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/activate_hotspot.asm:46 JSR GET_WORKING_MEMORY
    case 0xC173FE: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/activate_hotspot.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC17401: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:49 LDA @VIRTUAL06
    case 0xC17403: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/activate_hotspot.asm:50 STA @LOCAL01
    case 0xC17405: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/activate_hotspot.asm:51 LDX @LOCAL02
    case 0xC17407: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/text/ccs/activate_hotspot.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC17409: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:53 TXA
    case 0xC1740B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1740C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1740E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/activate_hotspot.asm:55 SEP #PROC_FLAGS::INDEX8
    case 0xC17410: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/activate_hotspot.asm:56 LDY #24
    case 0xC17412: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x002218, 3); return true;
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    case 0xC17414: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17412.
    case 0xC17415: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17415.
    case 0xC17416: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC17418: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1741A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1741B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1741D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:59 LDY #16
    case 0xC1741E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC17420: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1741E.
    case 0xC17421: cpu.execute_instruction<0x20>(0x0072AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17422: cpu.execute_instruction<0xAD>(0x009A72, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC17421.
    case 0xC17424: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17425: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17427: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC17429: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC1742B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC1742D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:63 JSL ASL32_ENTRY2
    case 0xC1742F: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17433: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17435: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17436: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC17438: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:65 LDY #8
    case 0xC17439: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC1743B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC17439.
    case 0xC1743C: cpu.execute_instruction<0x20>(0x0071AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1743D: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC1743C.
    case 0xC1743F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17440: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17442: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17444: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17446: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC17448: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:69 JSL ASL32_ENTRY2
    case 0xC1744A: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC1744E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC17450: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC17452: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC17454: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC17456: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17458: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1745B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1745D: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1745F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17461: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC17463: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17465: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17467: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17469: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1746B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1746D: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1746F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17471: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17472: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17474: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC17475: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17477: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17479: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1747B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1747D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1747F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17481: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17483: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17484: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17486: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17487: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17489: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1748B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1748D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1748F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17491: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17493: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17495: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17497: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17499: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1749B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/activate_hotspot.asm:80 LDA @LOCAL01
    case 0xC1749D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    case 0xC1749F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1749F.
    case 0xC174A1: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/ccs/activate_hotspot.asm:82 REP #PROC_FLAGS::INDEX8
    case 0xC174A2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/activate_hotspot.asm:83 TAX
    case 0xC174A4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:84 LDA @VIRTUAL00
    case 0xC174A5: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    case 0xC174A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC174A7.
    case 0xC174A9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/activate_hotspot.asm:86 JSL ACTIVATE_HOTSPOT
    case 0xC174AA: cpu.execute_instruction<0x22>(0xC07507, 4); return true;
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    case 0xC174AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    // Overlapping static entry reached from 0xC174AE.
    case 0xC174B0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC174B1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC174B2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/atm_decrease.asm (source_named).
bool execute_text_ccs_atm_decrease_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/atm_decrease.asm:3 BEGIN_C_FUNCTION
    case 0xC15FEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15FEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15FED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15FEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15FEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15FEF.
    case 0xC15FF1: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15FF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15FF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:11 TXA
    case 0xC15FF4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:12 STA @LOCAL01
    case 0xC15FF5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/atm_decrease.asm:13 LDA #3
    case 0xC15FF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/atm_decrease.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15FF7.
    case 0xC15FF9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/atm_decrease.asm:14 CLC
    case 0xC15FFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15FFB: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15FFE: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16000: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16002: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16004: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/atm_decrease.asm:17 LDA @LOCAL01
    case 0xC16006: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/atm_decrease.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16008: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1600A: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/atm_decrease.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1600D: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/atm_decrease.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16010: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16012: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/atm_decrease.asm:23 LDA #.LOWORD(CC_1D_07)
    case 0xC16015: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x005FEA, 3); return true;
    // src/text/ccs/atm_decrease.asm:23 LDA #.LOWORD(CC_1D_07)
    // Overlapping static entry reached from 0xC16015.
    case 0xC16017: cpu.execute_instruction<0x5F>(0x60D94C, 4); return true;
    // src/text/ccs/atm_decrease.asm:24 JMP @UNKNOWN5
    case 0xC16018: cpu.execute_instruction<0x4C>(0x0060D9, 3); return true;
    // src/text/ccs/atm_decrease.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC1601B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/atm_decrease.asm:27 LDY #24
    case 0xC1601D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1601F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1601D.
    case 0xC16020: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16021: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16020.
    case 0xC16022: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16023: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16022.
    case 0xC16024: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:29 JSL ASL32_ENTRY2
    case 0xC16025: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC16029: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC1602B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC1602C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC1602E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:31 LDY #16
    case 0xC1602F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/atm_decrease.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC16031: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1602F.
    case 0xC16032: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16033: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16032.
    case 0xC16035: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16036: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16038: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1603A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1603C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_decrease.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1603E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:35 JSL ASL32_ENTRY2
    case 0xC16040: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC16044: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC16046: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC16047: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC16049: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:37 LDY #8
    case 0xC1604A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/atm_decrease.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC1604C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1604A.
    case 0xC1604D: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1604E: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1604D.
    case 0xC16050: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16051: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16053: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16055: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16057: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_decrease.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC16059: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:41 JSL ASL32_ENTRY2
    case 0xC1605B: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1605F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16061: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16063: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16065: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/atm_decrease.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC16067: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16069: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1606C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1606E: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16070: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16072: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_decrease.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC16074: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16076: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16078: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1607A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1607C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1607E: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16080: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC16082: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC16083: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC16085: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC16086: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16088: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1608A: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1608C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1608E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16090: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16092: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC16094: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC16095: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC16097: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC16098: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1609A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1609C: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1609E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC160A0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC160A2: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC160A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC160A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC160A6.
    case 0xC160A8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC160A9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC160AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC160AB.
    case 0xC160AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC160AE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC160B0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC160B2: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC160B4: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC160B6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC160B8: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/atm_decrease.asm:53 BNE @ARG_IS_NONZERO
    case 0xC160BA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/atm_decrease.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC160BC: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160BF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160C3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/atm_decrease.asm:57 JSL WITHDRAW_FROM_ATM
    case 0xC160C7: cpu.execute_instruction<0x22>(0xC22783, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC160D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/atm_decrease.asm:59 JSR SET_WORKING_MEMORY
    case 0xC160D3: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/atm_decrease.asm:60 LDA #NULL
    case 0xC160D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/atm_decrease.asm:60 LDA #NULL
    // Overlapping static entry reached from 0xC160D6.
    case 0xC160D8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/atm_decrease.asm:62 END_C_FUNCTION
    case 0xC160D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/atm_decrease.asm:62 END_C_FUNCTION
    case 0xC160DA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/atm_increase.asm (source_named).
bool execute_text_ccs_atm_increase_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/atm_increase.asm:3 BEGIN_C_FUNCTION
    case 0xC15F04: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F06: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F07: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15F09.
    case 0xC15F0B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15F0D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:11 TXA
    case 0xC15F0E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:12 STA @LOCAL01
    case 0xC15F0F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/atm_increase.asm:13 LDA #3
    case 0xC15F11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/atm_increase.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15F11.
    case 0xC15F13: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/atm_increase.asm:14 CLC
    case 0xC15F14: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15F15: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F18: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F1A: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F1C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15F1E: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/atm_increase.asm:17 LDA @LOCAL01
    case 0xC15F20: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/atm_increase.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15F24: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/atm_increase.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15F27: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/atm_increase.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15F2A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15F2C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/atm_increase.asm:23 LDA #.LOWORD(CC_1D_06)
    case 0xC15F2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x005F04, 3); return true;
    // src/text/ccs/atm_increase.asm:23 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC15F2F.
    case 0xC15F31: cpu.execute_instruction<0x5F>(0x5FE84C, 4); return true;
    // src/text/ccs/atm_increase.asm:24 JMP @UNKNOWN5
    case 0xC15F32: cpu.execute_instruction<0x4C>(0x005FE8, 3); return true;
    // src/text/ccs/atm_increase.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15F35: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/atm_increase.asm:27 LDY #24
    case 0xC15F37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15F39: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F37.
    case 0xC15F3A: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15F3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F3A.
    case 0xC15F3C: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15F3D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F3C.
    case 0xC15F3E: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:29 JSL ASL32_ENTRY2
    case 0xC15F3F: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F43: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F45: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F46: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15F48: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:31 LDY #16
    case 0xC15F49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/atm_increase.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F4B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15F49.
    case 0xC15F4C: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F4D: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F4C.
    case 0xC15F4F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F50: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F52: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F54: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15F56: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_increase.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15F58: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:35 JSL ASL32_ENTRY2
    case 0xC15F5A: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F60: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F61: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15F63: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:37 LDY #8
    case 0xC15F64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/atm_increase.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F66: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15F64.
    case 0xC15F67: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F68: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15F67.
    case 0xC15F6A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F6D: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F6F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15F71: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_increase.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15F73: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:41 JSL ASL32_ENTRY2
    case 0xC15F75: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F79: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F7B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F7D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15F7F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/atm_increase.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15F81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F83: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F86: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F88: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F8A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15F8C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_increase.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15F8E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F90: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F92: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F94: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F96: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F98: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15F9A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15F9C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15F9D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15F9F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15FA0: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA4: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FA8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FAA: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FAC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FAE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FAF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FB1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15FB2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FB4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FB6: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FBA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FBC: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15FBE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15FC0.
    case 0xC15FC2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15FC5.
    case 0xC15FC7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15FC8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FCA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FCC: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FCE: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FD0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15FD2: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/atm_increase.asm:53 BNE @ARG_IS_NONZERO
    case 0xC15FD4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/atm_increase.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15FD6: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FD9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FDB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FDD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15FDF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/atm_increase.asm:57 JSL DEPOSIT_INTO_ATM
    case 0xC15FE1: cpu.execute_instruction<0x22>(0xC226E9, 4); return true;
    // src/text/ccs/atm_increase.asm:58 LDA #NULL
    case 0xC15FE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/atm_increase.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15FE5.
    case 0xC15FE7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/atm_increase.asm:60 END_C_FUNCTION
    case 0xC15FE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/atm_increase.asm:60 END_C_FUNCTION
    case 0xC15FE9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/call.asm (source_named).
bool execute_text_ccs_call_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/call.asm:3 BEGIN_C_FUNCTION
    case 0xC147F8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC147FA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC147FB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC147FC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC147FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC147FD.
    case 0xC147FF: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC14800: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC14801: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/call.asm:11 TXA
    case 0xC14802: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/call.asm:12 STA @LOCAL01
    case 0xC14803: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/call.asm:13 LDA #3
    case 0xC14805: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/call.asm:13 LDA #3
    // Overlapping static entry reached from 0xC14805.
    case 0xC14807: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/call.asm:14 CLC
    case 0xC14808: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/call.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14809: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1480C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1480E: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC14810: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC14812: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/call.asm:17 LDA @LOCAL01
    case 0xC14814: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/call.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC14816: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14818: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/call.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1481B: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/call.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1481E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14820: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/call.asm:23 LDA #.LOWORD(CC_08)
    case 0xC14823: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x0047F8, 3); return true;
    // src/text/ccs/call.asm:23 LDA #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC14823.
    case 0xC14825: cpu.execute_instruction<0x47>(0x00004C, 2); return true;
    // src/text/ccs/call.asm:24 JMP @UNKNOWN3
    case 0xC14826: cpu.execute_instruction<0x4C>(0x0048C3, 3); return true;
    // src/text/ccs/call.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC14825.
    case 0xC14827: cpu.execute_instruction<0xC3>(0x000048, 2); return true;
    // src/text/ccs/call.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC14829: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/call.asm:27 LDY #24
    case 0xC1482B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1482D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1482B.
    case 0xC1482E: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1482F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1482E.
    case 0xC14830: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC14831: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC14830.
    case 0xC14832: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/call.asm:29 JSL ASL32_ENTRY2
    case 0xC14833: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC14837: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC14839: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC1483A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC1483C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/call.asm:31 LDY #16
    case 0xC1483D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/call.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1483F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1483D.
    case 0xC14840: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14841: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC14840.
    case 0xC14843: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14844: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14846: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14848: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1484A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/call.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1484C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:35 JSL ASL32_ENTRY2
    case 0xC1484E: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14852: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14854: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14855: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14857: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/call.asm:37 LDY #8
    case 0xC14858: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/call.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC1485A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14858.
    case 0xC1485B: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1485C: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1485B.
    case 0xC1485E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1485F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14861: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14863: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14865: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/call.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC14867: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:41 JSL ASL32_ENTRY2
    case 0xC14869: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1486D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1486F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14871: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14873: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/call.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC14875: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14877: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1487A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1487C: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1487E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14880: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/call.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC14882: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14884: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14886: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14888: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1488A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1488C: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1488E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC14890: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC14891: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC14893: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC14894: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14896: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14898: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1489A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1489C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1489E: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148A0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC148A2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC148A3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC148A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC148A6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148AA: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148B0: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC148B2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148B4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148B8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148BA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/call.asm:52 JSL DISPLAY_TEXT
    case 0xC148BC: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/text/ccs/call.asm:53 LDA #NULL
    case 0xC148C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/call.asm:53 LDA #NULL
    // Overlapping static entry reached from 0xC148C0.
    case 0xC148C2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/call.asm:55 END_C_FUNCTION
    case 0xC148C3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/call.asm:55 END_C_FUNCTION
    case 0xC148C4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/check_equal.asm (source_named).
bool execute_text_ccs_check_equal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/check_equal.asm:3 BEGIN_C_FUNCTION
    case 0xC1495C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC1495E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC1495F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC14960: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC14961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14961.
    case 0xC14963: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC14964: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC14965: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/check_equal.asm:11 STX @VIRTUAL02
    case 0xC14966: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/check_equal.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14963.
    case 0xC14967: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/check_equal.asm:12 LDA #0
    case 0xC14968: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_equal.asm:12 LDA #0
    // Overlapping static entry reached from 0xC14968.
    case 0xC1496A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_equal.asm:13 STA @LOCAL01
    case 0xC1496B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/check_equal.asm:14 JSR GET_WORKING_MEMORY
    case 0xC1496D: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/check_equal.asm:15 LDA @VIRTUAL06
    case 0xC14970: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/check_equal.asm:16 CMP @VIRTUAL02
    case 0xC14972: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/check_equal.asm:17 BNE @UNKNOWN0
    case 0xC14974: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/check_equal.asm:18 LDA #1
    case 0xC14976: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/check_equal.asm:18 LDA #1
    // Overlapping static entry reached from 0xC14976.
    case 0xC14978: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_equal.asm:19 STA @LOCAL01
    case 0xC14979: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1497B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1497D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1497F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC14981: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC14983: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14985: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14987: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14989: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1498B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/check_equal.asm:23 JSR SET_WORKING_MEMORY
    case 0xC1498D: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/check_equal.asm:24 LDA #NULL
    case 0xC14990: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_equal.asm:24 LDA #NULL
    // Overlapping static entry reached from 0xC14990.
    case 0xC14992: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/check_equal.asm:25 END_C_FUNCTION
    case 0xC14993: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/check_equal.asm:25 END_C_FUNCTION
    case 0xC14994: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/check_not_equal.asm (source_named).
bool execute_text_ccs_check_not_equal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/check_not_equal.asm:3 BEGIN_C_FUNCTION
    case 0xC14995: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14997: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14998: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14999: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC1499A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1499A.
    case 0xC1499C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC1499D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC1499E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/check_not_equal.asm:11 STX @VIRTUAL02
    case 0xC1499F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/check_not_equal.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1499C.
    case 0xC149A0: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/check_not_equal.asm:12 LDA #0
    case 0xC149A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_not_equal.asm:12 LDA #0
    // Overlapping static entry reached from 0xC149A1.
    case 0xC149A3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_not_equal.asm:13 STA @LOCAL01
    case 0xC149A4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/check_not_equal.asm:14 JSR GET_WORKING_MEMORY
    case 0xC149A6: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/check_not_equal.asm:15 LDA @VIRTUAL06
    case 0xC149A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/check_not_equal.asm:16 CMP @VIRTUAL02
    case 0xC149AB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/check_not_equal.asm:17 BEQ @UNKNOWN0
    case 0xC149AD: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/check_not_equal.asm:18 LDA #1
    case 0xC149AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/check_not_equal.asm:18 LDA #1
    // Overlapping static entry reached from 0xC149AF.
    case 0xC149B1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_not_equal.asm:19 STA @LOCAL01
    case 0xC149B2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC149B4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC149B6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC149B8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC149BA: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC149BC: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149BE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149C0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149C2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC149C4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/check_not_equal.asm:23 JSR SET_WORKING_MEMORY
    case 0xC149C6: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/check_not_equal.asm:24 LDA #NULL
    case 0xC149C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_not_equal.asm:24 LDA #NULL
    // Overlapping static entry reached from 0xC149C9.
    case 0xC149CB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/check_not_equal.asm:25 END_C_FUNCTION
    case 0xC149CC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/check_not_equal.asm:25 END_C_FUNCTION
    case 0xC149CD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/clear_event_flag.asm (source_named).
bool execute_text_ccs_clear_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/clear_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC146CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC146D4.
    case 0xC146D6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC146D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/clear_event_flag.asm:10 TXA
    case 0xC146D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/clear_event_flag.asm:11 STA @LOCAL00
    case 0xC146DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/clear_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146DC: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/clear_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC146DF: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/clear_event_flag.asm:14 LDA @LOCAL00
    case 0xC146E1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/clear_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC146E3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/clear_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146E5: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/clear_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC146E8: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/clear_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC146EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/clear_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146ED: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/clear_event_flag.asm:20 LDA #.LOWORD(CC_05)
    case 0xC146F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CF, 2); else cpu.execute_instruction<0xA9>(0x0046CF, 3); return true;
    // src/text/ccs/clear_event_flag.asm:20 LDA #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC146F0.
    case 0xC146F2: cpu.execute_instruction<0x46>(0x000080, 2); return true;
    // src/text/ccs/clear_event_flag.asm:21 BRA @UNKNOWN1
    case 0xC146F3: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/ccs/clear_event_flag.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC146F2.
    case 0xC146F4: cpu.execute_instruction<0x20>(0x0010E2, 3); return true;
    // src/text/ccs/clear_event_flag.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC146F5: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/clear_event_flag.asm:24 LDY #8
    case 0xC146F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/clear_event_flag.asm:25 LDA @LOCAL00
    case 0xC146F9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/clear_event_flag.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC146F7.
    case 0xC146FA: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/clear_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC146FB: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/clear_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC146FA.
    case 0xC146FD: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/clear_event_flag.asm:27 STA @VIRTUAL02
    case 0xC146FF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/clear_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC14701: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/clear_event_flag.asm:29 AND #$00FF
    case 0xC14704: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/clear_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC14704.
    case 0xC14706: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/clear_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC14707: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/clear_event_flag.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC14709: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/clear_event_flag.asm:32 LDX #0
    case 0xC1470B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/clear_event_flag.asm:32 LDX #0
    // Overlapping static entry reached from 0xC1470B.
    case 0xC1470D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/clear_event_flag.asm:33 JSL SET_EVENT_FLAG
    case 0xC1470E: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/text/ccs/clear_event_flag.asm:34 LDA #NULL
    case 0xC14712: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/clear_event_flag.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC14712.
    case 0xC14714: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/clear_event_flag.asm:36 END_C_FUNCTION
    case 0xC14715: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/clear_event_flag.asm:36 END_C_FUNCTION
    case 0xC14716: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/clear_line-jp.asm (source_named).
bool execute_text_ccs_clear_line_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/clear_line-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC111C9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/clear_line-jp.asm:4 LDA CURRENT_FOCUS_WINDOW
    case 0xC111CB: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/ccs/clear_line-jp.asm:5 JSR UNKNOWN_C43739
    case 0xC111CE: cpu.execute_instruction<0x20>(0x000F41, 3); return true;
    // src/text/ccs/clear_line-jp.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC111D1: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/ccs/clear_line-jp.asm:7 ASL
    case 0xC111D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/clear_line-jp.asm:8 TAX
    case 0xC111D5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/clear_line-jp.asm:9 LDA OPEN_WINDOW_TABLE,X
    case 0xC111D6: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/ccs/clear_line-jp.asm:10 LDY #.SIZEOF(window_stats)
    case 0xC111D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/ccs/clear_line-jp.asm:10 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC111D9.
    case 0xC111DB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/clear_line-jp.asm:11 JSL MULT168
    case 0xC111DC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/clear_line-jp.asm:12 TAX
    case 0xC111E0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/clear_line-jp.asm:13 LDA WINDOW_STATS+16,X
    case 0xC111E1: cpu.execute_instruction<0xBD>(0x0089D2, 3); return true;
    // src/text/ccs/clear_line-jp.asm:14 TAX
    case 0xC111E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/clear_line-jp.asm:15 LDA #NULL
    case 0xC111E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/clear_line-jp.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC111E5.
    case 0xC111E7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/clear_line-jp.asm:16 JSR UNKNOWN_C438A5
    case 0xC111E8: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/ccs/clear_line-jp.asm:17 RTS
    case 0xC111EB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/copy_to_argmem.asm (source_named).
bool execute_text_ccs_copy_to_argmem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/copy_to_argmem.asm:3 BEGIN_C_FUNCTION
    case 0xC149F3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC149F5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC149F6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC149F7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC149F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC149F8.
    case 0xC149FA: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC149FB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC149FC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/copy_to_argmem.asm:10 CPX #0
    case 0xC149FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/copy_to_argmem.asm:10 CPX #0
    // Overlapping static entry reached from 0xC149FA.
    case 0xC149FE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:10 CPX #0
    // Overlapping static entry reached from 0xC149FD.
    case 0xC149FF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:11 BEQ @UNKNOWN0
    case 0xC14A00: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:12 JSR GET_SECONDARY_MEMORY
    case 0xC14A02: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/copy_to_argmem.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC14A05: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/copy_to_argmem.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC14A07: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:14 BRA @UNKNOWN1
    case 0xC14A09: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:16 JSR GET_WORKING_MEMORY
    case 0xC14A0B: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A0E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A10: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A12: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A14: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:19 JSR SET_ARGUMENT_MEMORY
    case 0xC14A16: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/copy_to_argmem.asm:20 LDA #NULL
    case 0xC14A19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/copy_to_argmem.asm:20 LDA #NULL
    // Overlapping static entry reached from 0xC14A19.
    case 0xC14A1B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/copy_to_argmem.asm:21 END_C_FUNCTION
    case 0xC14A1C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/copy_to_argmem.asm:21 END_C_FUNCTION
    case 0xC14A1D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_entity_sprite.asm (source_named).
bool execute_text_ccs_create_entity_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC169C3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC169C8.
    case 0xC169CA: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169CB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC169CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    case 0xC169CD: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC169CA.
    case 0xC169CE: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    case 0xC169CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    // Overlapping static entry reached from 0xC169CF.
    case 0xC169D1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:13 CLC
    case 0xC169D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169D3: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169D6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169D8: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169DA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC169DC: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:16 LDA @VIRTUAL02
    case 0xC169DE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC169E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169E2: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC169E5: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC169E8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169EA: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    case 0xC169ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0069C3, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC169ED.
    case 0xC169EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x006180, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    case 0xC169F0: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC169EF.
    case 0xC169F1: cpu.execute_instruction<0x61>(0x0000E2, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    case 0xC169F2: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC169F1.
    case 0xC169F3: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    case 0xC169F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    // Overlapping static entry reached from 0xC169F3.
    case 0xC169F5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    case 0xC169F6: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC169F4.
    case 0xC169F7: cpu.execute_instruction<0x6F>(0xFF299A, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    case 0xC169F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC169F9.
    case 0xC169FB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:29 JSL ASL16_ENTRY2
    case 0xC169FC: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:30 STA @VIRTUAL04
    case 0xC16A00: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC16A02: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    case 0xC16A05: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16A05.
    case 0xC16A07: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:33 ORA @VIRTUAL04
    case 0xC16A08: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:34 REP #PROC_FLAGS::INDEX8
    case 0xC16A0A: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:35 TAY
    case 0xC16A0C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:36 STY @LOCAL01
    case 0xC16A0D: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:37 SEP #PROC_FLAGS::INDEX8
    case 0xC16A0F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:38 LDY #8
    case 0xC16A11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16A13: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    // Overlapping static entry reached from 0xC16A11.
    case 0xC16A14: cpu.execute_instruction<0x71>(0x00009A, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    case 0xC16A16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC16A16.
    case 0xC16A18: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:41 JSL ASL16_ENTRY2
    case 0xC16A19: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:42 STA @VIRTUAL04
    case 0xC16A1D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16A1F: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    case 0xC16A22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC16A22.
    case 0xC16A24: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:45 ORA @VIRTUAL04
    case 0xC16A25: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:46 STA @LOCAL00
    case 0xC16A27: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:47 LDA @VIRTUAL02
    case 0xC16A29: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    case 0xC16A2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC16A2B.
    case 0xC16A2D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:49 BNE @UNKNOWN3
    case 0xC16A2E: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:50 LDA @LOCAL00
    case 0xC16A30: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC16A32: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:52 TAX
    case 0xC16A34: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:53 LDY @LOCAL01
    case 0xC16A35: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:54 TYA
    case 0xC16A37: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:55 JSL UNKNOWN_C06578
    case 0xC16A38: cpu.execute_instruction<0x22>(0xC067A6, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:56 BRA @UNKNOWN4
    case 0xC16A3C: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:58 LDA @LOCAL00
    case 0xC16A3E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:59 REP #PROC_FLAGS::INDEX8
    case 0xC16A40: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:60 TAX
    case 0xC16A42: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:61 LDY @LOCAL01
    case 0xC16A43: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:62 TYA
    case 0xC16A45: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:63 JSL CREATE_PREPARED_ENTITY_SPRITE
    case 0xC16A46: cpu.execute_instruction<0x22>(0xC44275, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:64 LDX @VIRTUAL02
    case 0xC16A4A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:65 JSL UNKNOWN_C4C91A
    case 0xC16A4C: cpu.execute_instruction<0x22>(0xC49BEA, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    case 0xC16A50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC16A50.
    case 0xC16A52: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC16A53: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC16A54: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_entity_tpt.asm (source_named).
bool execute_text_ccs_create_entity_tpt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_tpt.asm:3 BEGIN_C_FUNCTION
    case 0xC16788: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1678D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1678D.
    case 0xC1678F: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16790: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16791: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:11 TXY
    case 0xC16792: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:12 STY @LOCAL01
    case 0xC16793: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    case 0xC16795: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16795.
    case 0xC16797: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:14 CLC
    case 0xC16798: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16799: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1679C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1679E: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC167A0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC167A2: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:17 TYA
    case 0xC167A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC167A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167A7: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC167AA: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC167AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167AF: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    case 0xC167B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000088, 2); else cpu.execute_instruction<0xA9>(0x006788, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC167B2.
    case 0xC167B4: cpu.execute_instruction<0x67>(0x000080, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    case 0xC167B5: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC167B4.
    case 0xC167B6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC167B7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:27 LDY #8
    case 0xC167B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC167BB: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC167B9.
    case 0xC167BC: cpu.execute_instruction<0x6F>(0xFF299A, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    case 0xC167BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC167BE.
    case 0xC167C0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:30 JSL ASL16_ENTRY2
    case 0xC167C1: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:31 STA @VIRTUAL02
    case 0xC167C5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC167C7: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    case 0xC167CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC167CA.
    case 0xC167CC: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:34 ORA @VIRTUAL02
    case 0xC167CD: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:35 STA @LOCAL00
    case 0xC167CF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC167D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:37 LDA #8
    case 0xC167D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00A808, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:38 TAY
    case 0xC167D5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC167D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:40 LDA CC_ARGUMENT_STORAGE+3
    case 0xC167D8: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    case 0xC167DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC167DB.
    case 0xC167DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:42 JSL ASL16_ENTRY2
    case 0xC167DE: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:43 STA @VIRTUAL02
    case 0xC167E2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:44 LDA CC_ARGUMENT_STORAGE+2
    case 0xC167E4: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    case 0xC167E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC167E7.
    case 0xC167E9: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:46 ORA @VIRTUAL02
    case 0xC167EA: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:47 REP #PROC_FLAGS::INDEX8
    case 0xC167EC: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:48 TAX
    case 0xC167EE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:49 LDA @LOCAL00
    case 0xC167EF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:50 JSL CREATE_PREPARED_ENTITY_NPC
    case 0xC167F1: cpu.execute_instruction<0x22>(0xC44223, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:51 LDY @LOCAL01
    case 0xC167F5: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:52 TYX
    case 0xC167F7: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:53 JSL UNKNOWN_C4C91A
    case 0xC167F8: cpu.execute_instruction<0x22>(0xC49BEA, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    case 0xC167FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC167FC.
    case 0xC167FE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC167FF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC16800: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_floating_sprite_at_character.asm (source_named).
bool execute_text_ccs_create_floating_sprite_at_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:3 BEGIN_C_FUNCTION
    case 0xC168EC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168EE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168EF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC168F1.
    case 0xC168F3: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC168F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:10 TXA
    case 0xC168F6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:11 STA @LOCAL00
    case 0xC168F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:12 LDA #1
    case 0xC168F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC168F9.
    case 0xC168FB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:13 CLC
    case 0xC168FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168FD: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16900: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16902: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16904: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16906: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:16 LDA @LOCAL00
    case 0xC16908: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1690A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1690C: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1690F: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16912: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16914: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:22 LDA #.LOWORD(CC_1F_1C)
    case 0xC16917: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EC, 2); else cpu.execute_instruction<0xA9>(0x0068EC, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:22 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC16917.
    case 0xC16919: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:23 BRA @UNKNOWN7
    case 0xC1691A: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1691C: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    case 0xC1691F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1691F.
    case 0xC16921: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16922: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC16924: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16926: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16929: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1692B: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1692D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1692F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC16931: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:32 JSR GET_WORKING_MEMORY
    case 0xC16933: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC16936: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:35 LDA @VIRTUAL06
    case 0xC16938: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:36 STA @VIRTUAL00
    case 0xC1693A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC1693C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:38 LDA @LOCAL00
    case 0xC1693E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:39 BEQ @ARG_2_IS_ZERO
    case 0xC16940: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16942: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16944: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:41 BRA @ARG_2_IS_NONZERO
    case 0xC16946: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC16948: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:45 LDA @VIRTUAL06
    case 0xC1694B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:46 TAX
    case 0xC1694D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:47 LDA @VIRTUAL00
    case 0xC1694E: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:48 AND #$00FF
    case 0xC16950: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC16950.
    case 0xC16952: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:49 JSL UNKNOWN_C4B4FE
    case 0xC16953: cpu.execute_instruction<0x22>(0xC4896B, 4); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:50 LDA #NULL
    case 0xC16957: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:50 LDA #NULL
    // Overlapping static entry reached from 0xC16957.
    case 0xC16959: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:52 END_C_FUNCTION
    case 0xC1695A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:52 END_C_FUNCTION
    case 0xC1695B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_floating_sprite_at_sprite_entity.asm (source_named).
bool execute_text_ccs_create_floating_sprite_at_sprite_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC175A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175A7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175A9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC175AA.
    case 0xC175AC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175AD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175AE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:10 STX @LOCAL00
    case 0xC175AF: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC175AC.
    case 0xC175B0: cpu.execute_instruction<0x0E>(0x0002A9, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:11 LDA #2
    case 0xC175B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:11 LDA #2
    // Overlapping static entry reached from 0xC175B1.
    case 0xC175B3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:12 CLC
    case 0xC175B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC175B5: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC175B8: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC175BA: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC175BC: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC175BE: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:15 TXA
    case 0xC175C0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC175C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC175C3: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC175C6: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC175C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC175CB: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:21 LDA #.LOWORD(CC_1F_F3)
    case 0xC175CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A5, 2); else cpu.execute_instruction<0xA9>(0x0075A5, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:21 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC175CE.
    case 0xC175D0: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:22 BRA @UNKNOWN3
    case 0xC175D1: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC175D0.
    case 0xC175D2: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC175D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:25 LDA #8
    case 0xC175D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC175D7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC175D5.
    case 0xC175D8: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:27 TAY
    case 0xC175D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC175DA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:29 LDA CC_ARGUMENT_STORAGE+1
    case 0xC175DC: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:30 AND #$00FF
    case 0xC175DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC175DF.
    case 0xC175E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:31 JSL ASL16_ENTRY2
    case 0xC175E2: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:32 STA @VIRTUAL02
    case 0xC175E6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC175E8: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:34 AND #$00FF
    case 0xC175EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC175EB.
    case 0xC175ED: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:35 ORA @VIRTUAL02
    case 0xC175EE: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC175F0: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:37 LDX @LOCAL00
    case 0xC175F2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:38 JSL UNKNOWN_C4B54A
    case 0xC175F4: cpu.execute_instruction<0x22>(0xC489B7, 4); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:39 LDA #NULL
    case 0xC175F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC175F8.
    case 0xC175FA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:41 END_C_FUNCTION
    case 0xC175FB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:41 END_C_FUNCTION
    case 0xC175FC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_floating_sprite_at_tpt_entity.asm (source_named).
bool execute_text_ccs_create_floating_sprite_at_tpt_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16851: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16853: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16854: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16855: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16856: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16856.
    case 0xC16858: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16859: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC1685A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:10 STX @LOCAL00
    case 0xC1685B: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC16858.
    case 0xC1685C: cpu.execute_instruction<0x0E>(0x0002A9, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:11 LDA #2
    case 0xC1685D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:11 LDA #2
    // Overlapping static entry reached from 0xC1685D.
    case 0xC1685F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:12 CLC
    case 0xC16860: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16861: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16864: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16866: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16868: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1686A: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:15 TXA
    case 0xC1686C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1686D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1686F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16872: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16875: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16877: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:21 LDA #.LOWORD(CC_1F_1A)
    case 0xC1687A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x006851, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:21 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC1687A.
    case 0xC1687C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:22 BRA @UNKNOWN3
    case 0xC1687D: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC1687F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:25 LDA #8
    case 0xC16881: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16883: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16881.
    case 0xC16884: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:27 TAY
    case 0xC16885: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC16886: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:29 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16888: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:30 AND #$00FF
    case 0xC1688B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1688B.
    case 0xC1688D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:31 JSL ASL16_ENTRY2
    case 0xC1688E: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:32 STA @VIRTUAL02
    case 0xC16892: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC16894: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:34 AND #$00FF
    case 0xC16897: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC16897.
    case 0xC16899: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:35 ORA @VIRTUAL02
    case 0xC1689A: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC1689C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:37 LDX @LOCAL00
    case 0xC1689E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:38 JSL UNKNOWN_C4B524
    case 0xC168A0: cpu.execute_instruction<0x22>(0xC48991, 4); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:39 LDA #NULL
    case 0xC168A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC168A4.
    case 0xC168A6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:41 END_C_FUNCTION
    case 0xC168A7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:41 END_C_FUNCTION
    case 0xC168A8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_number_selector.asm (source_named).
bool execute_text_ccs_create_number_selector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_number_selector.asm:3 BEGIN_C_FUNCTION
    case 0xC148C5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148C7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148C9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC148CA.
    case 0xC148CC: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148CD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC148CE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_number_selector.asm:11 TXA
    case 0xC148CF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_number_selector.asm:12 JSR NUM_SELECT_PROMPT
    case 0xC148D0: cpu.execute_instruction<0x20>(0x0015D6, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148D3.
    case 0xC148D5: cpu.execute_instruction<0xFF>(0xA90A85, 4); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148D6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148D5.
    case 0xC148D9: cpu.execute_instruction<0xFF>(0x0C85FF, 4); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148D8.
    case 0xC148DA: cpu.execute_instruction<0xFF>(0xA50C85, 4); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC148DB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC148DA.
    case 0xC148DE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148DF: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148E1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC148E5: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/create_number_selector.asm:15 BNE @UNKNOWN1
    case 0xC148E7: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC148E9.
    case 0xC148EB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148EC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC148EE.
    case 0xC148F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC148F1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC148F9: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148FB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148FD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC148FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14901: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/create_number_selector.asm:19 JSR SET_WORKING_MEMORY
    case 0xC14903: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC14906: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC14908: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1490A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC1490C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1490E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14910: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14912: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14914: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/create_number_selector.asm:22 JSR SET_ARGUMENT_MEMORY
    case 0xC14916: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/create_number_selector.asm:23 BRA @UNKNOWN2
    case 0xC14919: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1491B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1491D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1491F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14921: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/create_number_selector.asm:26 JSR SET_WORKING_MEMORY
    case 0xC14923: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/create_number_selector.asm:28 LDA #NULL
    case 0xC14926: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_number_selector.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC14926.
    case 0xC14928: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_number_selector.asm:29 END_C_FUNCTION
    case 0xC14929: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_number_selector.asm:29 END_C_FUNCTION
    case 0xC1492A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deactivate_hotspot.asm (source_named).
bool execute_text_ccs_deactivate_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deactivate_hotspot.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC174B3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC174B5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC174B6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC174B7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC174B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC174B8.
    case 0xC174BA: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC174BB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC174BC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deactivate_hotspot.asm:9 TXA
    case 0xC174BD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deactivate_hotspot.asm:10 BEQ @UNKNOWN0
    case 0xC174BE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC174C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC174C2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:12 BRA @UNKNOWN1
    case 0xC174C4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC174C6: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/deactivate_hotspot.asm:16 LDA @VIRTUAL06
    case 0xC174C9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:17 JSL DISABLE_HOTSPOT
    case 0xC174CB: cpu.execute_instruction<0x22>(0xC07413, 4); return true;
    // src/text/ccs/deactivate_hotspot.asm:18 LDA #NULL
    case 0xC174CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deactivate_hotspot.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC174CF.
    case 0xC174D1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:19 PLD
    case 0xC174D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deactivate_hotspot.asm:20 RTS
    case 0xC174D3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_entity_sprite.asm (source_named).
bool execute_text_ccs_delete_entity_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16ABA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16ABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16ABF.
    case 0xC16AC1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16AC2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16AC3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    case 0xC16AC4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16AC1.
    case 0xC16AC5: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    case 0xC16AC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16AC6.
    case 0xC16AC8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:12 CLC
    case 0xC16AC9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16ACA: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16ACD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16ACF: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16AD1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16AD3: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:15 LDA @VIRTUAL02
    case 0xC16AD5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16AD7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16AD9: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16ADC: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16ADF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16AE1: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    case 0xC16AE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x006ABA, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC16AE4.
    case 0xC16AE6: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:22 BRA @UNKNOWN3
    case 0xC16AE7: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC16AE9: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:25 LDY #8
    case 0xC16AEB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16AED: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16AEB.
    case 0xC16AEE: cpu.execute_instruction<0x6F>(0xFF299A, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    case 0xC16AF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16AF0.
    case 0xC16AF2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:28 JSL ASL16_ENTRY2
    case 0xC16AF3: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:29 STA @VIRTUAL04
    case 0xC16AF7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC16AF9: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    case 0xC16AFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16AFC.
    case 0xC16AFE: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:32 ORA @VIRTUAL04
    case 0xC16AFF: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:33 REP #PROC_FLAGS::INDEX8
    case 0xC16B01: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:34 TAY
    case 0xC16B03: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:35 STY @LOCAL00
    case 0xC16B04: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:36 TYA
    case 0xC16B06: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:37 JSL UNKNOWN_C46028
    case 0xC16B07: cpu.execute_instruction<0x22>(0xC43D76, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:38 LDX @VIRTUAL02
    case 0xC16B0B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:39 JSL UNKNOWN_C4C91A
    case 0xC16B0D: cpu.execute_instruction<0x22>(0xC49BEA, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:40 LDX @VIRTUAL02
    case 0xC16B11: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:41 LDY @LOCAL00
    case 0xC16B13: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:42 TYA
    case 0xC16B15: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:43 JSL UNKNOWN_C46125
    case 0xC16B16: cpu.execute_instruction<0x22>(0xC43E85, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    case 0xC16B1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    // Overlapping static entry reached from 0xC16B1A.
    case 0xC16B1C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC16B1D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC16B1E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_entity_tpt.asm (source_named).
bool execute_text_ccs_delete_entity_tpt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:3 BEGIN_C_FUNCTION
    case 0xC16A55: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC16A57: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC16A58: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC16A59: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC16A5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16A5A.
    case 0xC16A5C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC16A5D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC16A5E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:10 STX @VIRTUAL02
    case 0xC16A5F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16A5C.
    case 0xC16A60: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:11 LDA #2
    case 0xC16A61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16A61.
    case 0xC16A63: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:12 CLC
    case 0xC16A64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A65: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16A68: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16A6A: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16A6C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16A6E: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:15 LDA @VIRTUAL02
    case 0xC16A70: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A72: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A74: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC16A77: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16A7A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A7C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:21 LDA #.LOWORD(CC_1F_1E)
    case 0xC16A7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000055, 2); else cpu.execute_instruction<0xA9>(0x006A55, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:21 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC16A7F.
    case 0xC16A81: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:22 BRA @UNKNOWN3
    case 0xC16A82: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC16A84: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:25 LDY #8
    case 0xC16A86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:26 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16A88: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16A86.
    case 0xC16A89: cpu.execute_instruction<0x6F>(0xFF299A, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:27 AND #$00FF
    case 0xC16A8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16A8B.
    case 0xC16A8D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:28 JSL ASL16_ENTRY2
    case 0xC16A8E: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:29 STA @VIRTUAL04
    case 0xC16A92: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC16A94: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:31 AND #$00FF
    case 0xC16A97: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16A97.
    case 0xC16A99: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:32 ORA @VIRTUAL04
    case 0xC16A9A: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:33 REP #PROC_FLAGS::INDEX8
    case 0xC16A9C: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:34 TAY
    case 0xC16A9E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:35 STY @LOCAL00
    case 0xC16A9F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:36 TYA
    case 0xC16AA1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:37 JSL UNKNOWN_C4605A
    case 0xC16AA2: cpu.execute_instruction<0x22>(0xC43DA8, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:38 LDX @VIRTUAL02
    case 0xC16AA6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:39 JSL UNKNOWN_C4C91A
    case 0xC16AA8: cpu.execute_instruction<0x22>(0xC49BEA, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:40 LDX @VIRTUAL02
    case 0xC16AAC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:41 LDY @LOCAL00
    case 0xC16AAE: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:42 TYA
    case 0xC16AB0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:43 JSL UNKNOWN_C460CE
    case 0xC16AB1: cpu.execute_instruction<0x22>(0xC43E2E, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:44 LDA #NULL
    case 0xC16AB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:44 LDA #NULL
    // Overlapping static entry reached from 0xC16AB5.
    case 0xC16AB7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:46 END_C_FUNCTION
    case 0xC16AB8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:46 END_C_FUNCTION
    case 0xC16AB9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_floating_sprite_at_character.asm (source_named).
bool execute_text_ccs_delete_floating_sprite_at_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/delete_floating_sprite_at_character.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1695C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC1695E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC1695F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC16960: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC16961: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16961.
    case 0xC16963: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC16964: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC16965: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:9 TXA
    case 0xC16966: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:10 BEQ @ARG_IS_ZERO
    case 0xC16967: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC16969: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC1696B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:12 BRA @ARG_IS_NONZERO
    case 0xC1696D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:14 JSR GET_WORKING_MEMORY
    case 0xC1696F: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:16 LDA @VIRTUAL06
    case 0xC16972: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:17 JSL UNKNOWN_C4B519
    case 0xC16974: cpu.execute_instruction<0x22>(0xC48986, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:18 LDA #NULL
    case 0xC16978: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC16978.
    case 0xC1697A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:19 PLD
    case 0xC1697B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:20 RTS
    case 0xC1697C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm (source_named).
bool execute_text_ccs_delete_floating_sprite_at_sprite_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC175FD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC175FF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17600: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17601: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17602: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17602.
    case 0xC17604: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17605: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17606: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:10 TXA
    case 0xC17607: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:11 STA @LOCAL00
    case 0xC17608: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1760A: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:13 BNE @UNKNOWN0
    case 0xC1760D: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:14 LDA @LOCAL00
    case 0xC1760F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC17611: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17613: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC17616: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC17619: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1761B: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:20 LDA #.LOWORD(CC_1F_F4)
    case 0xC1761E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0075FD, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:20 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC1761E.
    case 0xC17620: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:21 BRA @UNKNOWN1
    case 0xC17621: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC17620.
    case 0xC17622: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC17623: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:24 LDY #8
    case 0xC17625: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:25 LDA @LOCAL00
    case 0xC17627: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17625.
    case 0xC17628: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC17629: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC17628.
    case 0xC1762B: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:27 STA @VIRTUAL02
    case 0xC1762D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC1762F: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:29 AND #$00FF
    case 0xC17632: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC17632.
    case 0xC17634: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:30 ORA @VIRTUAL02
    case 0xC17635: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:31 JSL UNKNOWN_C4B565
    case 0xC17637: cpu.execute_instruction<0x22>(0xC489D2, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:32 LDA #NULL
    case 0xC1763B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC1763B.
    case 0xC1763D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:34 END_C_FUNCTION
    case 0xC1763E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:34 END_C_FUNCTION
    case 0xC1763F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm (source_named).
bool execute_text_ccs_delete_floating_sprite_at_tpt_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC168A9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC168AB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC168AC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC168AD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC168AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC168AE.
    case 0xC168B0: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC168B1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC168B2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:10 TXA
    case 0xC168B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:11 STA @LOCAL00
    case 0xC168B4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168B6: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:13 BNE @UNKNOWN0
    case 0xC168B9: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:14 LDA @LOCAL00
    case 0xC168BB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC168BD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168BF: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC168C2: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC168C5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168C7: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_1B)
    case 0xC168CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x0068A9, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_1B)
    // Overlapping static entry reached from 0xC168CA.
    case 0xC168CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:21 BRA @UNKNOWN1
    case 0xC168CD: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC168CF: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:24 LDY #8
    case 0xC168D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:25 LDA @LOCAL00
    case 0xC168D3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC168D1.
    case 0xC168D4: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC168D5: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC168D4.
    case 0xC168D7: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:27 STA @VIRTUAL02
    case 0xC168D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC168DB: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:29 AND #$00FF
    case 0xC168DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC168DE.
    case 0xC168E0: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:30 ORA @VIRTUAL02
    case 0xC168E1: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:31 JSL UNKNOWN_C4B53F
    case 0xC168E3: cpu.execute_instruction<0x22>(0xC489AC, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:32 LDA #NULL
    case 0xC168E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC168E7.
    case 0xC168E9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC168EA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC168EB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_hp_by_amount.asm (source_named).
bool execute_text_ccs_deplete_hp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_hp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14E9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E9F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14EA0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14EA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14EA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14EA2.
    case 0xC14EA4: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14EA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14EA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14EA7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14EA4.
    case 0xC14EA8: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:10 LDA #$0001
    case 0xC14EA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14EA9.
    case 0xC14EAB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:11 CLC
    case 0xC14EAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14EAD: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14EB0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14EB2: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14EB4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14EB6: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14EB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14EBA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14EBC: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14EBF: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14EC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14EC4: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_03)
    case 0xC14EC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x004E9D, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_03)
    // Overlapping static entry reached from 0xC14EC7.
    case 0xC14EC9: cpu.execute_instruction<0x4E>(0x001C80, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14ECA: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14ECC: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:24 AND #$00FF
    case 0xC14ECF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14ECF.
    case 0xC14ED1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:25 TAX
    case 0xC14ED2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14ED3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:27 TXA
    case 0xC14ED5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14ED6: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14ED8: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14EDB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:33 LDY #$0001
    case 0xC14EDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14EDD.
    case 0xC14EDF: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14EE0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:35 JSR REDUCE_HP_AMTPERCENT
    case 0xC14EE2: cpu.execute_instruction<0x20>(0x008FBB, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:36 LDA #NULL
    case 0xC14EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14EE5.
    case 0xC14EE7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:38 PLD
    case 0xC14EE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:39 RTS
    case 0xC14EE9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_hp_by_percent.asm (source_named).
bool execute_text_ccs_deplete_hp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_hp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14E03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14E05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14E06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14E07: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14E08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14E08.
    case 0xC14E0A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14E0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14E0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14E0D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14E0A.
    case 0xC14E0E: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:10 LDA #$0001
    case 0xC14E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14E0F.
    case 0xC14E11: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:11 CLC
    case 0xC14E12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E13: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E16: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E18: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E1A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E1C: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14E1E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E20: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E22: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14E25: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14E28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E2A: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_01)
    case 0xC14E2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004E03, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC14E2D.
    case 0xC14E2F: cpu.execute_instruction<0x4E>(0x001C80, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14E30: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14E32: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:24 AND #$00FF
    case 0xC14E35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14E35.
    case 0xC14E37: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:25 TAX
    case 0xC14E38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14E39: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:27 TXA
    case 0xC14E3B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14E3C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14E3E: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14E41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:33 LDY #$0000
    case 0xC14E43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14E43.
    case 0xC14E45: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14E46: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:35 JSR REDUCE_HP_AMTPERCENT
    case 0xC14E48: cpu.execute_instruction<0x20>(0x008FBB, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:36 LDA #NULL
    case 0xC14E4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14E4B.
    case 0xC14E4D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:38 PLD
    case 0xC14E4E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:39 RTS
    case 0xC14E4F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_pp_by_amount.asm (source_named).
bool execute_text_ccs_deplete_pp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_pp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14FD1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14FD3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14FD4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14FD5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14FD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14FD6.
    case 0xC14FD8: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14FD9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14FDA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14FDB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14FD8.
    case 0xC14FDC: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:10 LDA #$0001
    case 0xC14FDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14FDD.
    case 0xC14FDF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:11 CLC
    case 0xC14FE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FE1: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14FE4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14FE6: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14FE8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14FEA: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14FEC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14FEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FF0: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14FF3: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14FF6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FF8: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:20 LDA #.LOWORD(CC_1E_07)
    case 0xC14FFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x004FD1, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:20 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC14FFB.
    case 0xC14FFD: cpu.execute_instruction<0x4F>(0xAD1C80, 4); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14FFE: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC15000: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14FFD.
    case 0xC15001: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    case 0xC15003: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC15001.
    case 0xC15004: cpu.execute_instruction<0xFF>(0xF0AA00, 4); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC15003.
    case 0xC15005: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:25 TAX
    case 0xC15006: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC15007: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:26 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC15004.
    case 0xC15008: cpu.execute_instruction<0x03>(0x00008A, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:27 TXA
    case 0xC15009: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC1500A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC1500C: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC1500F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:33 LDY #$0001
    case 0xC15011: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC15011.
    case 0xC15013: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC15014: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:35 JSR REDUCE_PP_AMTPERCENT
    case 0xC15016: cpu.execute_instruction<0x20>(0x00906D, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:36 LDA #NULL
    case 0xC15019: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC15019.
    case 0xC1501B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:38 PLD
    case 0xC1501C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:39 RTS
    case 0xC1501D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_pp_by_percent.asm (source_named).
bool execute_text_ccs_deplete_pp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_pp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14F37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F39: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14F3C.
    case 0xC14F3E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F3F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14F40: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14F41: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14F3E.
    case 0xC14F42: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:10 LDA #$0001
    case 0xC14F43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14F43.
    case 0xC14F45: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:11 CLC
    case 0xC14F46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F47: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F4A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F4C: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F4E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F50: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14F52: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14F54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F56: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14F59: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14F5C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F5E: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_05)
    case 0xC14F61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x004F37, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC14F61.
    case 0xC14F63: cpu.execute_instruction<0x4F>(0xAD1C80, 4); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14F64: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14F66: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14F63.
    case 0xC14F67: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    case 0xC14F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14F67.
    case 0xC14F6A: cpu.execute_instruction<0xFF>(0xF0AA00, 4); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14F69.
    case 0xC14F6B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:25 TAX
    case 0xC14F6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14F6D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:26 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC14F6A.
    case 0xC14F6E: cpu.execute_instruction<0x03>(0x00008A, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:27 TXA
    case 0xC14F6F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14F70: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14F72: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14F75: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:33 LDY #$0000
    case 0xC14F77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14F77.
    case 0xC14F79: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14F7A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:35 JSR REDUCE_PP_AMTPERCENT
    case 0xC14F7C: cpu.execute_instruction<0x20>(0x00906D, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:36 LDA #NULL
    case 0xC14F7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14F7F.
    case 0xC14F81: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:38 PLD
    case 0xC14F82: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:39 RTS
    case 0xC14F83: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/display_battle_animation.asm (source_named).
bool execute_text_ccs_display_battle_animation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/display_battle_animation.asm:3 BEGIN_C_FUNCTION
    case 0xC17640: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17642: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17643: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17644: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17645: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17645.
    case 0xC17647: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17648: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC17649: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    case 0xC1764A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC17647.
    case 0xC1764B: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    case 0xC1764C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1764B.
    case 0xC1764D: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1764C.
    case 0xC1764E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/display_battle_animation.asm:13 CLC
    case 0xC1764F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17650: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17653: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17655: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17657: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17659: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/display_battle_animation.asm:16 TXA
    case 0xC1765B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1765C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/display_battle_animation.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1765E: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/display_battle_animation.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17661: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/display_battle_animation.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC17664: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/display_battle_animation.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17666: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    case 0xC17669: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x007640, 3); return true;
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC17669.
    case 0xC1766B: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    case 0xC1766C: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC1766B.
    case 0xC1766D: cpu.execute_instruction<0x2F>(0x003E20, 4); return true;
    // src/text/ccs/display_battle_animation.asm:25 JSR GET_BLINKING_PROMPT
    case 0xC1766E: cpu.execute_instruction<0x20>(0x00003E, 3); return true;
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    case 0xC17671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    // Overlapping static entry reached from 0xC17671.
    case 0xC17673: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/display_battle_animation.asm:27 BEQ @UNKNOWN4
    case 0xC17674: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/ccs/display_battle_animation.asm:28 LDX @LOCAL01
    case 0xC17676: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/display_battle_animation.asm:29 DEX
    case 0xC17678: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC17679: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    case 0xC1767C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1767C.
    case 0xC1767E: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/ccs/display_battle_animation.asm:32 DEC
    case 0xC1767F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:33 JSL UNKNOWN_C3FAC9
    case 0xC17680: cpu.execute_instruction<0x22>(0xC3F60E, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17684: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC17684.
    case 0xC17686: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17687: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17689: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1768B: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1768D: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1768F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17691: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17693: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17695: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/display_battle_animation.asm:36 JSR SET_WORKING_MEMORY
    case 0xC17697: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    case 0xC1769A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    // Overlapping static entry reached from 0xC1769A.
    case 0xC1769C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1769D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1769E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/display_shop_menu.asm (source_named).
bool execute_text_ccs_display_shop_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/display_shop_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC152B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC152B7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC152B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC152B9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC152BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC152BA.
    case 0xC152BC: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC152BD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC152BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:13 CPX #$00000
    case 0xC152BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/display_shop_menu.asm:13 CPX #$00000
    // Overlapping static entry reached from 0xC152BC.
    case 0xC152C0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/display_shop_menu.asm:13 CPX #$00000
    // Overlapping static entry reached from 0xC152BF.
    case 0xC152C1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/display_shop_menu.asm:21 BEQ @UNKNOWN0
    case 0xC152C2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/display_shop_menu.asm:22 TXA
    case 0xC152C4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:23 BRA @UNKNOWN1
    case 0xC152C5: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/display_shop_menu.asm:25 JSR GET_ARGUMENT_MEMORY
    case 0xC152C7: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/display_shop_menu.asm:26 LDA @VIRTUAL06
    case 0xC152CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/display_shop_menu.asm:28 JSR UNKNOWN_C19DB5
    case 0xC152CC: cpu.execute_instruction<0x20>(0x009DBD, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/display_shop_menu.asm:29 STORE_INT1632 $06
    case 0xC152CF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:29 STORE_INT1632 $06
    case 0xC152D1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC152D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC152D5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC152D7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC152D9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/display_shop_menu.asm:31 JSR SET_WORKING_MEMORY
    case 0xC152DB: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/display_shop_menu.asm:39 LDA #NULL
    case 0xC152DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/display_shop_menu.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC152DE.
    case 0xC152E0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/display_shop_menu.asm:40 PLD
    case 0xC152E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:41 RTS
    case 0xC152E2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/dummy_1F_18.asm (source_named).
bool execute_text_ccs_dummy_1f_18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/dummy_1F_18.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16801: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:4 LDA #$0006
    case 0xC16803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:4 LDA #$0006
    // Overlapping static entry reached from 0xC16803.
    case 0xC16805: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:5 CLC
    case 0xC16806: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_18.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16807: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1680A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1680C: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1680E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16810: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:8 TXA
    case 0xC16812: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_18.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC16813: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16815: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC16818: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC1681B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1681D: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:14 LDA #.LOWORD(CC_1F_18)
    case 0xC16820: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x006801, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:14 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC16820.
    case 0xC16822: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_18.asm:15 BRA @UNKNOWN3
    case 0xC16823: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    case 0xC16825: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC16825.
    case 0xC16827: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:19 RTS
    case 0xC16828: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/dummy_1F_19.asm (source_named).
bool execute_text_ccs_dummy_1f_19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/dummy_1F_19.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16829: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:4 LDA #$0006
    case 0xC1682B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:4 LDA #$0006
    // Overlapping static entry reached from 0xC1682B.
    case 0xC1682D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:5 CLC
    case 0xC1682E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_19.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1682F: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16832: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16834: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16836: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16838: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:8 TXA
    case 0xC1683A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_19.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC1683B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1683D: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC16840: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC16843: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16845: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:14 LDA #.LOWORD(CC_1F_19)
    case 0xC16848: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000029, 2); else cpu.execute_instruction<0xA9>(0x006829, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:14 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC16848.
    case 0xC1684A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_19.asm:15 BRA @UNKNOWN3
    case 0xC1684B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    case 0xC1684D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC1684D.
    case 0xC1684F: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:19 RTS
    case 0xC16850: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/enable_blinking_triangle.asm (source_named).
bool execute_text_ccs_enable_blinking_triangle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/enable_blinking_triangle.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16C76: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/enable_blinking_triangle.asm:4 TXA
    case 0xC16C78: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/enable_blinking_triangle.asm:5 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC16C79: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // src/text/ccs/enable_blinking_triangle.asm:6 LDA #NULL
    case 0xC16C7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/enable_blinking_triangle.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC16C7C.
    case 0xC16C7E: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/enable_blinking_triangle.asm:7 RTS
    case 0xC16C7F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/equip_character_from_inventory.asm (source_named).
bool execute_text_ccs_equip_character_from_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC15AB8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15ABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15ABD.
    case 0xC15ABF: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15AC0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15AC1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:11 TXY
    case 0xC15AC2: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:12 STY @LOCAL01
    case 0xC15AC3: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    case 0xC15AC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15AC5.
    case 0xC15AC7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:14 CLC
    case 0xC15AC8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15AC9: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15ACC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15ACE: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15AD0: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15AD2: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:17 TYA
    case 0xC15AD4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15AD5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15AD7: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15ADA: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15ADD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15ADF: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    case 0xC15AE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B8, 2); else cpu.execute_instruction<0xA9>(0x005AB8, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC15AE2.
    case 0xC15AE4: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:24 BRA @UNKNOWN7
    case 0xC15AE5: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15AE7: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    case 0xC15AEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15AEA.
    case 0xC15AEC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:28 TAX
    case 0xC15AED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:29 BEQ @UNKNOWN3
    case 0xC15AEE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:30 TXA
    case 0xC15AF0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:31 BRA @UNKNOWN4
    case 0xC15AF1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15AF3: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:34 LDA @VIRTUAL06
    case 0xC15AF6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:36 STA @VIRTUAL02
    case 0xC15AF8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:37 LDY @LOCAL01
    case 0xC15AFA: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:38 BEQ @UNKNOWN5
    case 0xC15AFC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:39 TYA
    case 0xC15AFE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:40 BRA @UNKNOWN6
    case 0xC15AFF: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15B01: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:43 LDA @VIRTUAL06
    case 0xC15B04: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:45 TAX
    case 0xC15B06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:46 LDA @VIRTUAL02
    case 0xC15B07: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:47 JSR EQUIP_ITEM
    case 0xC15B09: cpu.execute_instruction<0x20>(0x00911F, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15B0C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15B0E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B10: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B12: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B14: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15B16: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC15B18: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    case 0xC15B1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC15B1B.
    case 0xC15B1D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC15B1E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC15B1F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/escargo_express_store.asm (source_named).
bool execute_text_ccs_escargo_express_store_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/escargo_express_store.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC163A3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC163A5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC163A6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC163A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC163A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC163A8.
    case 0xC163AA: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC163AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC163AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/escargo_express_store.asm:9 CPX #$0000
    case 0xC163AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/escargo_express_store.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC163AA.
    case 0xC163AE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/escargo_express_store.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC163AD.
    case 0xC163AF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/escargo_express_store.asm:10 BEQ @ARG_IS_ZERO
    case 0xC163B0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/escargo_express_store.asm:11 TXA
    case 0xC163B2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/escargo_express_store.asm:12 BRA @ARG_IS_NONZERO
    case 0xC163B3: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/escargo_express_store.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC163B5: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/escargo_express_store.asm:15 LDA @VIRTUAL06
    case 0xC163B8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/escargo_express_store.asm:17 JSR ESCARGO_EXPRESS_STORE
    case 0xC163BA: cpu.execute_instruction<0x20>(0x009214, 3); return true;
    // src/text/ccs/escargo_express_store.asm:18 LDA #NULL
    case 0xC163BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/escargo_express_store.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC163BD.
    case 0xC163BF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/escargo_express_store.asm:19 PLD
    case 0xC163C0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/escargo_express_store.asm:20 RTS
    case 0xC163C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/force_text_alignment-jp.asm (source_named).
bool execute_text_ccs_force_text_alignment_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/force_text_alignment-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1492B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:4 LDA #$0001
    case 0xC1492D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC1492D.
    case 0xC1492F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:5 CLC
    case 0xC14930: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment-jp.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14931: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC14934: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC14936: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC14938: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/force_text_alignment-jp.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1493A: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:8 TXA
    case 0xC1493C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment-jp.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC1493D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1493F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC14942: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC14945: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14947: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:14 LDA #.LOWORD(CC_18_05)
    case 0xC1494A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00492B, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:14 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC1494A.
    case 0xC1494C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x000C80, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:15 BRA @UNKNOWN5
    case 0xC1494D: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:15 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC1494C.
    case 0xC1494E: cpu.execute_instruction<0x0C>(0x006EAD, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:17 LDA CC_ARGUMENT_STORAGE
    case 0xC1494F: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:17 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1494E.
    case 0xC14951: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment-jp.asm:18 AND #$00FF
    case 0xC14952: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:18 AND #$00FF
    // Overlapping static entry reached from 0xC14952.
    case 0xC14954: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:19 JSR UNKNOWN_C438A5
    case 0xC14955: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:21 LDA #NULL
    case 0xC14958: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/force_text_alignment-jp.asm:21 LDA #NULL
    // Overlapping static entry reached from 0xC14958.
    case 0xC1495A: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/force_text_alignment-jp.asm:23 RTS
    case 0xC1495B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_character_number.asm (source_named).
bool execute_text_ccs_get_character_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_character_number.asm:3 BEGIN_C_FUNCTION
    case 0xC14B23: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14B25: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14B26: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14B27: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14B28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14B28.
    case 0xC14B2A: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14B2B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14B2C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_character_number.asm:10 CPX #0
    case 0xC14B2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_character_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14B2A.
    case 0xC14B2E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_character_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14B2D.
    case 0xC14B2F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_character_number.asm:11 BEQ @UNKNOWN0
    case 0xC14B30: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_character_number.asm:12 TXA
    case 0xC14B32: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_character_number.asm:13 BRA @UNKNOWN1
    case 0xC14B33: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_character_number.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14B35: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_character_number.asm:16 LDA @VIRTUAL06
    case 0xC14B38: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_character_number.asm:18 JSR UNKNOWN_C190E6
    case 0xC14B3A: cpu.execute_instruction<0x20>(0x0091A0, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_character_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC14B3D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_character_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC14B3F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14B41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14B43: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14B45: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14B47: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_character_number.asm:21 JSR SET_WORKING_MEMORY
    case 0xC14B49: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_character_number.asm:22 LDA #NULL
    case 0xC14B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_character_number.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC14B4C.
    case 0xC14B4E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_character_number.asm:23 END_C_FUNCTION
    case 0xC14B4F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_character_number.asm:23 END_C_FUNCTION
    case 0xC14B50: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_character_status.asm (source_named).
bool execute_text_ccs_get_character_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC153E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC153E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC153E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC153E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC153E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC153E8.
    case 0xC153EA: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC153EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC153EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:12 LDA #1
    case 0xC153ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_character_status.asm:12 LDA #1
    // Overlapping static entry reached from 0xC153EA.
    case 0xC153EE: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/get_character_status.asm:12 LDA #1
    // Overlapping static entry reached from 0xC153ED.
    case 0xC153EF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_character_status.asm:13 CLC
    case 0xC153F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC153F1: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC153F4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC153F6: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC153F8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC153FA: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/get_character_status.asm:16 TXA
    case 0xC153FC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC153FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_character_status.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC153FF: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/get_character_status.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15402: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/get_character_status.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15405: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_character_status.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15407: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/get_character_status.asm:22 LDA #.LOWORD(CC_19_16)
    case 0xC1540A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E3, 2); else cpu.execute_instruction<0xA9>(0x0053E3, 3); return true;
    // src/text/ccs/get_character_status.asm:22 LDA #.LOWORD(CC_19_16)
    // Overlapping static entry reached from 0xC1540A.
    case 0xC1540C: cpu.execute_instruction<0x53>(0x000080, 2); return true;
    // src/text/ccs/get_character_status.asm:23 BRA @UNKNOWN6
    case 0xC1540D: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/get_character_status.asm:23 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC1540C.
    case 0xC1540E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1540F: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/get_character_status.asm:26 AND #$00FF
    case 0xC15412: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_character_status.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15412.
    case 0xC15414: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/get_character_status.asm:27 STA @LOCAL02
    case 0xC15415: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/get_character_status.asm:28 CPX #0
    case 0xC15417: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_character_status.asm:28 CPX #0
    // Overlapping static entry reached from 0xC15417.
    case 0xC15419: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_character_status.asm:29 BEQ @UNKNOWN3
    case 0xC1541A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/get_character_status.asm:30 STX @LOCAL01
    case 0xC1541C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/get_character_status.asm:31 BRA @UNKNOWN4
    case 0xC1541E: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/get_character_status.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC15420: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_character_status.asm:34 LDA @VIRTUAL06
    case 0xC15423: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_character_status.asm:35 TAX
    case 0xC15425: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:36 STX @LOCAL01
    case 0xC15426: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/get_character_status.asm:38 LDA @LOCAL02
    case 0xC15428: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/get_character_status.asm:39 BNE @UNKNOWN5
    case 0xC1542A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/get_character_status.asm:40 JSR GET_WORKING_MEMORY
    case 0xC1542C: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/get_character_status.asm:41 LDA @VIRTUAL06
    case 0xC1542F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_character_status.asm:43 LDX @LOCAL01
    case 0xC15431: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/get_character_status.asm:44 JSL CHECK_STATUS_GROUP
    case 0xC15433: cpu.execute_instruction<0x22>(0xC436AD, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_character_status.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC15437: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_character_status.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC15439: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1543B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1543D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1543F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15441: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_character_status.asm:47 JSR SET_WORKING_MEMORY
    case 0xC15443: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_character_status.asm:48 LDA #NULL
    case 0xC15446: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_character_status.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC15446.
    case 0xC15448: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_character_status.asm:50 END_C_FUNCTION
    case 0xC15449: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_character_status.asm:50 END_C_FUNCTION
    case 0xC1544A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_direction_from_character_to_entity.asm (source_named).
bool execute_text_ccs_get_direction_from_character_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16B1F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B21: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B22: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B23: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B24: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16B24.
    case 0xC16B26: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B27: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC16B28: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:11 TXA
    case 0xC16B29: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:12 STA @LOCAL01
    case 0xC16B2A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    case 0xC16B2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    // Overlapping static entry reached from 0xC16B2C.
    case 0xC16B2E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:14 CLC
    case 0xC16B2F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B30: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B33: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B35: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B37: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16B39: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:17 LDA @LOCAL01
    case 0xC16B3B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B3D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B3F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16B42: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16B45: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16B47: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    case 0xC16B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x006B1F, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC16B4A.
    case 0xC16B4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:24 BRA @UNKNOWN7
    case 0xC16B4D: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B4F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC16B51: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:28 STA @VIRTUAL00
    case 0xC16B54: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16B56: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:30 LDA @VIRTUAL00
    case 0xC16B58: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    case 0xC16B5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16B5A.
    case 0xC16B5C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:32 BEQ @ARG_1_IS_ZERO
    case 0xC16B5D: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B5F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B61: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B63: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B65: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B67: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16B69: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:35 BRA @ARG_1_IS_NONZERO
    case 0xC16B6B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:37 JSR GET_WORKING_MEMORY
    case 0xC16B6D: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC16B70: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:40 LDA @VIRTUAL06
    case 0xC16B72: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:41 STA @VIRTUAL01
    case 0xC16B74: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:42 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16B76: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:43 STA @VIRTUAL00
    case 0xC16B79: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC16B7B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:45 LDY #8
    case 0xC16B7D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00C208, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC16B7F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16B7D.
    case 0xC16B80: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:47 LDA @LOCAL01
    case 0xC16B81: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:48 JSL ASL16_ENTRY2
    case 0xC16B83: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:49 STA @VIRTUAL02
    case 0xC16B87: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16B89: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    case 0xC16B8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC16B8C.
    case 0xC16B8E: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:52 ORA @VIRTUAL02
    case 0xC16B8F: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:53 BEQ @ARG_2_IS_ZERO
    case 0xC16B91: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16B93: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16B95: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:55 BRA @ARG_2_IS_NONZERO
    case 0xC16B97: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC16B99: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:59 LDA @VIRTUAL06
    case 0xC16B9C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:60 REP #PROC_FLAGS::INDEX8
    case 0xC16B9E: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:61 TAY
    case 0xC16BA0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:62 LDA @VIRTUAL00
    case 0xC16BA1: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    case 0xC16BA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC16BA3.
    case 0xC16BA5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:64 TAX
    case 0xC16BA6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:65 DEX
    case 0xC16BA7: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:66 LDA @VIRTUAL01
    case 0xC16BA8: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    case 0xC16BAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC16BAA.
    case 0xC16BAC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:68 JSL UNKNOWN_C462E4
    case 0xC16BAD: cpu.execute_instruction<0x22>(0xC44040, 4); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:69 INC
    case 0xC16BB1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16BB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16BB4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BB6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BB8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BBA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16BBC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:72 JSR SET_ARGUMENT_MEMORY
    case 0xC16BBE: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    case 0xC16BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    // Overlapping static entry reached from 0xC16BC1.
    case 0xC16BC3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16BC4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16BC5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm (source_named).
bool execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16CFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16CFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16CFF.
    case 0xC16D01: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16D02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16D03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:11 TXA
    case 0xC16D04: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16D05: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    case 0xC16D07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16D07.
    case 0xC16D09: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:14 CLC
    case 0xC16D0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D0B: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D0E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D10: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D12: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16D14: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16D16: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D18: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D1A: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16D1D: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16D20: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16D22: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    case 0xC16D25: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x006CFA, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC16D25.
    case 0xC16D27: cpu.execute_instruction<0x6C>(0x00A84C, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16D28: cpu.execute_instruction<0x4C>(0x006DA8, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D2B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:27 LDA #8
    case 0xC16D2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC16D2F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16D2D.
    case 0xC16D30: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:29 TAY
    case 0xC16D31: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC16D32: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16D34: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    case 0xC16D37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16D37.
    case 0xC16D39: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16D3A: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC16D3E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC16D40: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    case 0xC16D43: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16D43.
    case 0xC16D45: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16D46: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16D48: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:39 TAX
    case 0xC16D4A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16D4B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:41 TXA
    case 0xC16D4D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16D4E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16D50: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC16D52: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC16D54: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC16D57: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC16D59: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC16D5B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16D5D: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC16D60: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC16D62: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:53 LDY #8
    case 0xC16D64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00C208, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC16D66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16D64.
    case 0xC16D67: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC16D68: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC16D6A: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC16D6E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16D70: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    case 0xC16D73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC16D73.
    case 0xC16D75: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC16D76: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC16D78: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16D7A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16D7C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC16D7E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC16D80: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC16D83: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC16D85: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:69 TAY
    case 0xC16D87: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC16D88: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    case 0xC16D8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC16D8A.
    case 0xC16D8C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:72 TAX
    case 0xC16D8D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:73 DEX
    case 0xC16D8E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC16D8F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:75 JSL UNKNOWN_C462C9
    case 0xC16D91: cpu.execute_instruction<0x22>(0xC44025, 4); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:76 INC
    case 0xC16D95: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16D96: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16D98: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16D9A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16D9C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16D9E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16DA0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC16DA2: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    case 0xC16DA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC16DA5.
    case 0xC16DA7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16DA8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16DA9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm (source_named).
bool execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16BC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16BCB.
    case 0xC16BCD: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16BCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:11 TXA
    case 0xC16BD0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16BD1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    case 0xC16BD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16BD3.
    case 0xC16BD5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:14 CLC
    case 0xC16BD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BD7: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BDA: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BDC: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BDE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16BE0: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16BE2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16BE4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BE6: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16BE9: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16BEC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16BEE: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    case 0xC16BF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x006BC6, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC16BF1.
    case 0xC16BF3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16BF4: cpu.execute_instruction<0x4C>(0x006C74, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16BF7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:27 LDA #8
    case 0xC16BF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC16BFB: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16BF9.
    case 0xC16BFC: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:29 TAY
    case 0xC16BFD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC16BFE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16C00: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    case 0xC16C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16C03.
    case 0xC16C05: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16C06: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC16C0A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC16C0C: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    case 0xC16C0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16C0F.
    case 0xC16C11: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16C12: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16C14: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:39 TAX
    case 0xC16C16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16C17: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:41 TXA
    case 0xC16C19: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16C1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16C1C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC16C1E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC16C20: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC16C23: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC16C25: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C27: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16C29: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC16C2C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC16C2E: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:53 LDY #8
    case 0xC16C30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00C208, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC16C32: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16C30.
    case 0xC16C33: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC16C34: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC16C36: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC16C3A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16C3C: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    case 0xC16C3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC16C3F.
    case 0xC16C41: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC16C42: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC16C44: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16C46: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16C48: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC16C4A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC16C4C: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC16C4F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC16C51: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:69 TAY
    case 0xC16C53: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC16C54: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    case 0xC16C56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC16C56.
    case 0xC16C58: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:72 TAX
    case 0xC16C59: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:73 DEX
    case 0xC16C5A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC16C5B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:75 JSL UNKNOWN_C462AE
    case 0xC16C5D: cpu.execute_instruction<0x22>(0xC4400A, 4); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:76 INC
    case 0xC16C61: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16C62: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16C64: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C66: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C68: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C6A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16C6C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC16C6E: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    case 0xC16C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC16C71.
    case 0xC16C73: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16C74: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16C75: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_event_flag.asm (source_named).
bool execute_text_ccs_get_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC14781: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14783: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14784: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14785: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14786: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14786.
    case 0xC14788: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14789: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC1478A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_event_flag.asm:11 TXA
    case 0xC1478B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_event_flag.asm:12 STA @LOCAL01
    case 0xC1478C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_event_flag.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1478E: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/get_event_flag.asm:14 BNE @UNKNOWN0
    case 0xC14791: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/get_event_flag.asm:15 LDA @LOCAL01
    case 0xC14793: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_event_flag.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14795: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_event_flag.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14797: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/get_event_flag.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC1479A: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/get_event_flag.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1479D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_event_flag.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1479F: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/get_event_flag.asm:21 LDA #.LOWORD(CC_07)
    case 0xC147A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x004781, 3); return true;
    // src/text/ccs/get_event_flag.asm:21 LDA #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC147A2.
    case 0xC147A4: cpu.execute_instruction<0x47>(0x000080, 2); return true;
    // src/text/ccs/get_event_flag.asm:22 BRA @UNKNOWN2
    case 0xC147A5: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/text/ccs/get_event_flag.asm:22 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC147A4.
    case 0xC147A6: cpu.execute_instruction<0x31>(0x0000E2, 2); return true;
    // src/text/ccs/get_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC147A7: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC147A6.
    case 0xC147A8: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/get_event_flag.asm:25 LDY #8
    case 0xC147A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/get_event_flag.asm:25 LDY #8
    // Overlapping static entry reached from 0xC147A8.
    case 0xC147AA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/get_event_flag.asm:26 LDA @LOCAL01
    case 0xC147AB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_event_flag.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC147A9.
    case 0xC147AC: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/get_event_flag.asm:27 JSL ASL16_ENTRY2
    case 0xC147AD: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/get_event_flag.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC147AC.
    case 0xC147AE: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/get_event_flag.asm:28 STA @VIRTUAL02
    case 0xC147B1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_event_flag.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC147B3: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/get_event_flag.asm:30 AND #$00FF
    case 0xC147B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_event_flag.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC147B6.
    case 0xC147B8: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_event_flag.asm:31 ORA @VIRTUAL02
    case 0xC147B9: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_event_flag.asm:32 JSL GET_EVENT_FLAG
    case 0xC147BB: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC147BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC147BF.
    case 0xC147C1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC147C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC147C4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC147C6: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC147C8: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC147CA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC147CC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC147CE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC147D0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_event_flag.asm:35 JSR SET_WORKING_MEMORY
    case 0xC147D2: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_event_flag.asm:36 LDA #NULL
    case 0xC147D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_event_flag.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC147D5.
    case 0xC147D7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_event_flag.asm:38 END_C_FUNCTION
    case 0xC147D8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_event_flag.asm:38 END_C_FUNCTION
    case 0xC147D9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_exp_for_next_level.asm (source_named).
bool execute_text_ccs_get_exp_for_next_level_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:3 BEGIN_C_FUNCTION
    case 0xC1563E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15640: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15641: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15642: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15643: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15643.
    case 0xC15645: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15646: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15647: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_exp_for_next_level.asm:10 CPX #0
    case 0xC15648: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15645.
    case 0xC15649: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15648.
    case 0xC1564A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:11 BEQ @ARG_IS_ZERO
    case 0xC1564B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:12 TXA
    case 0xC1564D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_exp_for_next_level.asm:13 BRA @ARG_IS_NONZERO
    case 0xC1564E: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC15650: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:16 LDA @VIRTUAL06
    case 0xC15653: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:18 JSL GET_REQUIRED_EXP
    case 0xC15655: cpu.execute_instruction<0x22>(0xC43779, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15659: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1565B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1565D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1565F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:20 JSR SET_WORKING_MEMORY
    case 0xC15661: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:21 LDA #NULL
    case 0xC15664: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:21 LDA #NULL
    // Overlapping static entry reached from 0xC15664.
    case 0xC15666: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:22 END_C_FUNCTION
    case 0xC15667: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:22 END_C_FUNCTION
    case 0xC15668: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_item_number.asm (source_named).
bool execute_text_ccs_get_item_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_number.asm:3 BEGIN_C_FUNCTION
    case 0xC15BFA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15BFF.
    case 0xC15C01: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15C02: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15C03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:11 TXY
    case 0xC15C04: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:12 STY @LOCAL01
    case 0xC15C05: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/get_item_number.asm:13 LDA #1
    case 0xC15C07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_item_number.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15C07.
    case 0xC15C09: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_item_number.asm:14 CLC
    case 0xC15C0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C0B: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C0E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C10: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C12: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C14: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/get_item_number.asm:17 TYA
    case 0xC15C16: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15C17: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_item_number.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C19: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/get_item_number.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15C1C: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/get_item_number.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15C1F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_item_number.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C21: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/get_item_number.asm:23 LDA #.LOWORD(CC_19_19)
    case 0xC15C24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x005BFA, 3); return true;
    // src/text/ccs/get_item_number.asm:23 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC15C24.
    case 0xC15C26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:24 BRA @UNKNOWN7
    case 0xC15C27: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/get_item_number.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15C29: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/get_item_number.asm:27 AND #$00FF
    case 0xC15C2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_item_number.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15C2C.
    case 0xC15C2E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_item_number.asm:28 TAX
    case 0xC15C2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:29 BEQ @ARG_IS_ZERO
    case 0xC15C30: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_number.asm:30 TXA
    case 0xC15C32: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:31 BRA @ARG_IS_NONZERO
    case 0xC15C33: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_number.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15C35: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/get_item_number.asm:34 LDA @VIRTUAL06
    case 0xC15C38: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_item_number.asm:36 STA @VIRTUAL02
    case 0xC15C3A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_item_number.asm:37 LDY @LOCAL01
    case 0xC15C3C: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/get_item_number.asm:38 BEQ @UNKNOWN5
    case 0xC15C3E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_number.asm:39 TYA
    case 0xC15C40: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:40 BRA @UNKNOWN6
    case 0xC15C41: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_number.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15C43: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_item_number.asm:43 LDA @VIRTUAL06
    case 0xC15C46: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_item_number.asm:45 TAX
    case 0xC15C48: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:46 LDA @VIRTUAL02
    case 0xC15C49: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/get_item_number.asm:47 JSL GET_CHARACTER_ITEM
    case 0xC15C4B: cpu.execute_instruction<0x22>(0xC3E537, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15C4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15C51: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C53: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C55: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C57: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C59: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_number.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC15C5B: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC15C5E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC15C60: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC15C62: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C64: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C66: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C68: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C6A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_number.asm:53 JSR SET_WORKING_MEMORY
    case 0xC15C6C: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_item_number.asm:54 LDA #NULL
    case 0xC15C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_item_number.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC15C6F.
    case 0xC15C71: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_number.asm:56 END_C_FUNCTION
    case 0xC15C72: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_number.asm:56 END_C_FUNCTION
    case 0xC15C73: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_item_price.asm (source_named).
bool execute_text_ccs_get_item_price_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_price.asm:3 BEGIN_C_FUNCTION
    case 0xC152E3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC152E5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC152E6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC152E7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC152E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC152E8.
    case 0xC152EA: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC152EB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC152EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:10 CPX #0
    case 0xC152ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_item_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC152EA.
    case 0xC152EE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_item_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC152ED.
    case 0xC152EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_item_price.asm:11 BEQ @UNKNOWN0
    case 0xC152F0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_price.asm:12 TXA
    case 0xC152F2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:13 BRA @UNKNOWN1
    case 0xC152F3: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_price.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC152F5: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_item_price.asm:16 LDA @VIRTUAL06
    case 0xC152F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC152FA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC152FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC152FD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC152FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC15300: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC15301: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:19 CLC
    case 0xC15302: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:20 ADC #item::cost
    case 0xC15303: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/text/ccs/get_item_price.asm:20 ADC #item::cost
    // Overlapping static entry reached from 0xC15303.
    case 0xC15305: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_item_price.asm:21 TAX
    case 0xC15306: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC15307: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_price.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC1530B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_price.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC1530D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1530F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15311: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15313: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15315: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_price.asm:25 JSR SET_WORKING_MEMORY
    case 0xC15317: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_item_price.asm:26 LDA #NULL
    case 0xC1531A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_item_price.asm:26 LDA #NULL
    // Overlapping static entry reached from 0xC1531A.
    case 0xC1531C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_price.asm:27 END_C_FUNCTION
    case 0xC1531D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_price.asm:27 END_C_FUNCTION
    case 0xC1531E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_item_sell_price.asm (source_named).
bool execute_text_ccs_get_item_sell_price_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_sell_price.asm:3 BEGIN_C_FUNCTION
    case 0xC1531F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC15321: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC15322: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC15323: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC15324: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15324.
    case 0xC15326: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC15327: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC15328: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:10 CPX #0
    case 0xC15329: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15326.
    case 0xC1532A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC15329.
    case 0xC1532B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:11 BEQ @UNKNOWN0
    case 0xC1532C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:12 TXA
    case 0xC1532E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:13 BRA @UNKNOWN1
    case 0xC1532F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC15331: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:16 LDA @VIRTUAL06
    case 0xC15334: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC15336: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC15338: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC15339: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1533B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1533C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC1533D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:19 CLC
    case 0xC1533E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:20 ADC #item::cost
    case 0xC1533F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000B, 2); else cpu.execute_instruction<0x69>(0x00000B, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:20 ADC #item::cost
    // Overlapping static entry reached from 0xC1533F.
    case 0xC15341: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:21 TAX
    case 0xC15342: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC15343: cpu.execute_instruction<0xBF>(0xD57000, 4); return true;
    // src/text/ccs/get_item_sell_price.asm:23 LSR
    case 0xC15347: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_sell_price.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC15348: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_sell_price.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC1534A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1534C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1534E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15350: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15352: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:26 JSR SET_WORKING_MEMORY
    case 0xC15354: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:27 LDA #NULL
    case 0xC15357: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:27 LDA #NULL
    // Overlapping static entry reached from 0xC15357.
    case 0xC15359: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_sell_price.asm:28 END_C_FUNCTION
    case 0xC1535A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_sell_price.asm:28 END_C_FUNCTION
    case 0xC1535B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_letter_from_character_name.asm (source_named).
bool execute_text_ccs_get_letter_from_character_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:3 BEGIN_C_FUNCTION
    case 0xC14BCC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BCE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BCF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14BD1.
    case 0xC14BD3: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC14BD5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    case 0xC14BD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14BD3.
    case 0xC14BD7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14BD6.
    case 0xC14BD8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:11 BEQ @UNKNOWN0
    case 0xC14BD9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:12 TXA
    case 0xC14BDB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:13 BRA @UNKNOWN1
    case 0xC14BDC: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14BDE: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:16 LDA @VIRTUAL06
    case 0xC14BE1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:18 JSL GET_PARTY_CHARACTER_NAME
    case 0xC14BE3: cpu.execute_instruction<0x22>(0xC22172, 4); return true;
    // src/text/ccs/get_letter_from_character_name.asm:19 JSR GET_SECONDARY_MEMORY
    case 0xC14BE7: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:20 STA @VIRTUAL02
    case 0xC14BEA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:21 LDA #1
    case 0xC14BEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:21 LDA #1
    // Overlapping static entry reached from 0xC14BEC.
    case 0xC14BEE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:22 SEC
    case 0xC14BEF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:23 SBC @VIRTUAL02
    case 0xC14BF0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:24 EOR #$FFFF
    case 0xC14BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:24 EOR #$FFFF
    // Overlapping static entry reached from 0xC14BF2.
    case 0xC14BF4: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/text/ccs/get_letter_from_character_name.asm:25 INC
    case 0xC14BF5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:26 CLC
    case 0xC14BF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:27 ADC @VIRTUAL06
    case 0xC14BF7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:27 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC14BF4.
    case 0xC14BF8: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:28 STA @VIRTUAL06
    case 0xC14BF9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:28 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC14BF8.
    case 0xC14BFA: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC14BFB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:29 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14BFA.
    case 0xC14BFC: cpu.execute_instruction<0x20>(0x0006A7, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:30 LDA [@VIRTUAL06]
    case 0xC14BFD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14BFF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14C01: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14C03: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14C05: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC14C07: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C09: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C0B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C0D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C0F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:34 JSR SET_WORKING_MEMORY
    case 0xC14C11: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:35 LDA #NULL
    case 0xC14C14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC14C14.
    case 0xC14C16: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:36 END_C_FUNCTION
    case 0xC14C17: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:36 END_C_FUNCTION
    case 0xC14C18: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_letter_from_stat.asm (source_named).
bool execute_text_ccs_get_letter_from_stat_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:3 BEGIN_C_FUNCTION
    case 0xC14C19: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14C1B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14C1C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14C1D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14C1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14C1E.
    case 0xC14C20: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14C21: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14C22: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:11 TXA
    case 0xC14C23: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:12 STA @LOCAL01
    case 0xC14C24: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14C26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x003305, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14C26.
    case 0xC14C28: cpu.execute_instruction<0x33>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14C29: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14C28.
    case 0xC14C2A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14C2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14C2A.
    case 0xC14C2C: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14C2B.
    case 0xC14C2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14C2E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:14 LDA @LOCAL01
    case 0xC14C30: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:15 STA @VIRTUAL04
    case 0xC14C32: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:16 ASL
    case 0xC14C34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:17 ADC @VIRTUAL04
    case 0xC14C35: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:18 STA @LOCAL01
    case 0xC14C37: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:19 JSR GET_SECONDARY_MEMORY
    case 0xC14C39: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:20 STA @VIRTUAL02
    case 0xC14C3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:21 LDA @LOCAL01
    case 0xC14C3E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14C40: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14C42: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14C44: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14C46: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:23 CLC
    case 0xC14C48: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:24 ADC @VIRTUAL0A
    case 0xC14C49: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:25 STA @VIRTUAL0A
    case 0xC14C4B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:26 LDA [@VIRTUAL0A]
    case 0xC14C4D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:27 AND #$00FF
    case 0xC14C4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14C4F.
    case 0xC14C51: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:28 CMP @VIRTUAL02
    case 0xC14C52: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:29 BCS @UNKNOWN0
    case 0xC14C54: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:30 LDA #0
    case 0xC14C56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:30 LDA #0
    // Overlapping static entry reached from 0xC14C56.
    case 0xC14C58: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:31 BRA @UNKNOWN1
    case 0xC14C59: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:33 JSR GET_SECONDARY_MEMORY
    case 0xC14C5B: cpu.execute_instruction<0x20>(0x000603, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:34 STA @VIRTUAL02
    case 0xC14C5E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:35 LDA @LOCAL01
    case 0xC14C60: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:36 INC
    case 0xC14C62: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:37 CLC
    case 0xC14C63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:38 ADC @VIRTUAL06
    case 0xC14C64: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:39 STA @VIRTUAL06
    case 0xC14C66: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:40 LDA [@VIRTUAL06]
    case 0xC14C68: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:41 CLC
    case 0xC14C6A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:42 ADC @VIRTUAL02
    case 0xC14C6B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:43 TAX
    case 0xC14C6D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:44 DEX
    case 0xC14C6E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:45 LDA __BSS_START__,X
    case 0xC14C6F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:46 AND #$00FF
    case 0xC14C72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC14C72.
    case 0xC14C74: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14C75: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14C77: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14C79: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14C7B: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C7D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C7F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C81: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C83: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:50 JSR SET_WORKING_MEMORY
    case 0xC14C85: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:51 LDA #NULL
    case 0xC14C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC14C88.
    case 0xC14C8A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:52 END_C_FUNCTION
    case 0xC14C8B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:52 END_C_FUNCTION
    case 0xC14C8C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_random_number.asm (source_named).
bool execute_text_ccs_get_random_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_random_number.asm:3 BEGIN_C_FUNCTION
    case 0xC1646F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC16471: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC16472: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC16473: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC16474: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16474.
    case 0xC16476: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC16477: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC16478: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_random_number.asm:10 CPX #0
    case 0xC16479: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_random_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC16476.
    case 0xC1647A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_random_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC16479.
    case 0xC1647B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_random_number.asm:11 BEQ @ARG_IS_ZERO
    case 0xC1647C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_random_number.asm:12 TXA
    case 0xC1647E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_random_number.asm:13 BRA @ARG_IS_NONZERO
    case 0xC1647F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_random_number.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC16481: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/get_random_number.asm:16 LDA @VIRTUAL06
    case 0xC16484: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_random_number.asm:18 JSL RAND_MOD
    case 0xC16486: cpu.execute_instruction<0x22>(0xC43CC9, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_random_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1648A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_random_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1648C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1648E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16490: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16492: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16494: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_random_number.asm:21 JSR SET_WORKING_MEMORY
    case 0xC16496: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/get_random_number.asm:22 LDA #NULL
    case 0xC16499: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_random_number.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC16499.
    case 0xC1649B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_random_number.asm:23 END_C_FUNCTION
    case 0xC1649C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_random_number.asm:23 END_C_FUNCTION
    case 0xC1649D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/give_item_to_character.asm (source_named).
bool execute_text_ccs_give_item_to_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/give_item_to_character.asm:3 BEGIN_C_FUNCTION
    case 0xC1501E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC15020: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC15021: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC15022: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC15023: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15023.
    case 0xC15025: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC15026: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC15027: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:12 LDA #1
    case 0xC15028: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/give_item_to_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15025.
    case 0xC15029: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/give_item_to_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15028.
    case 0xC1502A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/give_item_to_character.asm:13 CLC
    case 0xC1502B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1502C: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1502F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15031: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15033: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15035: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/give_item_to_character.asm:16 TXA
    case 0xC15037: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15038: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1503A: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/give_item_to_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1503D: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/give_item_to_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15040: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15042: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/give_item_to_character.asm:22 LDA #.LOWORD(CC_1D_00)
    case 0xC15045: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00501E, 3); return true;
    // src/text/ccs/give_item_to_character.asm:22 LDA #.LOWORD(CC_1D_00)
    // Overlapping static entry reached from 0xC15045.
    case 0xC15047: cpu.execute_instruction<0x50>(0x000080, 2); return true;
    // src/text/ccs/give_item_to_character.asm:23 BRA @UNKNOWN6
    case 0xC15048: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/give_item_to_character.asm:23 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15047.
    case 0xC15049: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1504A: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/give_item_to_character.asm:26 AND #$00FF
    case 0xC1504D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/give_item_to_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1504D.
    case 0xC1504F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/give_item_to_character.asm:27 STA @LOCAL02
    case 0xC15050: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character.asm:28 CPX #0
    case 0xC15052: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character.asm:28 CPX #0
    // Overlapping static entry reached from 0xC15052.
    case 0xC15054: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/give_item_to_character.asm:29 BEQ @UNKNOWN3
    case 0xC15055: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/give_item_to_character.asm:30 STX @LOCAL01
    case 0xC15057: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character.asm:31 BRA @UNKNOWN4
    case 0xC15059: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/give_item_to_character.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC1505B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/give_item_to_character.asm:34 LDA @VIRTUAL06
    case 0xC1505E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character.asm:35 TAX
    case 0xC15060: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:36 STX @LOCAL01
    case 0xC15061: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character.asm:38 LDA @LOCAL02
    case 0xC15063: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character.asm:39 BNE @UNKNOWN5
    case 0xC15065: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/give_item_to_character.asm:40 JSR GET_WORKING_MEMORY
    case 0xC15067: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/give_item_to_character.asm:41 LDA @VIRTUAL06
    case 0xC1506A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character.asm:43 LDX @LOCAL01
    case 0xC1506C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character.asm:44 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC1506E: cpu.execute_instruction<0x22>(0xC18C69, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC15072: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC15074: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15076: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15078: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1507A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1507C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/give_item_to_character.asm:47 JSR SET_WORKING_MEMORY
    case 0xC1507E: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/give_item_to_character.asm:48 LDA #NULL
    case 0xC15081: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC15081.
    case 0xC15083: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/give_item_to_character.asm:50 END_C_FUNCTION
    case 0xC15084: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/give_item_to_character.asm:50 END_C_FUNCTION
    case 0xC15085: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/give_item_to_character_2.asm (source_named).
bool execute_text_ccs_give_item_to_character_2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC158D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC158D9.
    case 0xC158DB: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158DC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC158DD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    case 0xC158DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC158DB.
    case 0xC158DF: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC158DE.
    case 0xC158E0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:14 CLC
    case 0xC158E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158E2: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158E5: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158E7: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158E9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC158EB: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:17 TXA
    case 0xC158ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC158EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158F0: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC158F3: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC158F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC158F8: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    case 0xC158FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D4, 2); else cpu.execute_instruction<0xA9>(0x0058D4, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC158FB.
    case 0xC158FD: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:24 BRA @UNKNOWN6
    case 0xC158FE: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15900: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    case 0xC15903: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15903.
    case 0xC15905: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:28 STA @LOCAL03
    case 0xC15906: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    case 0xC15908: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    // Overlapping static entry reached from 0xC15908.
    case 0xC1590A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:30 BEQ @UNKNOWN3
    case 0xC1590B: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:31 STX @LOCAL02
    case 0xC1590D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:32 BRA @UNKNOWN4
    case 0xC1590F: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC15911: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:35 LDA @VIRTUAL06
    case 0xC15914: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:36 TAX
    case 0xC15916: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:37 STX @LOCAL02
    case 0xC15917: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:39 LDA @LOCAL03
    case 0xC15919: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:40 BNE @UNKNOWN5
    case 0xC1591B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:41 JSR GET_WORKING_MEMORY
    case 0xC1591D: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:42 LDA @VIRTUAL06
    case 0xC15920: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:44 LDX @LOCAL02
    case 0xC15922: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:45 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC15924: cpu.execute_instruction<0x22>(0xC18C69, 4); return true;
    // src/text/ccs/give_item_to_character_2.asm:46 TAX
    case 0xC15928: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:47 STX @LOCAL01
    case 0xC15929: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:48 TXA
    case 0xC1592B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:49 JSL UNKNOWN_C22351
    case 0xC1592C: cpu.execute_instruction<0x22>(0xC221EF, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15930: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC15932: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15934: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15936: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15938: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1593A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC1593C: cpu.execute_instruction<0x20>(0x00068C, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:53 LDX @LOCAL01
    case 0xC1593F: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:54 TXA
    case 0xC15941: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15942: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC15944: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15946: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15948: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1594A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1594C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:57 JSR SET_WORKING_MEMORY
    case 0xC1594E: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    case 0xC15951: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15951.
    case 0xC15953: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC15954: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC15955: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/halt.asm (source_named).
bool execute_text_ccs_halt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/halt.asm:3 BEGIN_C_FUNCTION
    case 0xC1036B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1036D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1036E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1036F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10370: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC10370.
    case 0xC10372: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10373: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10374: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    case 0xC10375: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC10372.
    case 0xC10376: cpu.execute_instruction<0x14>(0x0000A8, 2); return true;
    // src/text/ccs/halt.asm:13 TAY
    case 0xC10377: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:14 STY @LOCAL01
    case 0xC10378: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:15 BRA @UNKNOWN1
    case 0xC1037A: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/text/ccs/halt.asm:17 LDA DEBUG
    case 0xC1037C: cpu.execute_instruction<0xAD>(0x0046F2, 3); return true;
    // src/text/ccs/halt.asm:18 BEQ @UNKNOWN1
    case 0xC1037F: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:18 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC17DC3.
    case 0xC10380: cpu.execute_instruction<0x10>(0x0000AD, 2); return true;
    // src/text/ccs/halt.asm:19 LDA PAD_PRESS
    case 0xC10381: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:19 LDA PAD_PRESS
    // Overlapping static entry reached from 0xC10380.
    case 0xC10382: cpu.execute_instruction<0x6D>(0x002900, 3); return true;
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10384: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x008010, 3); return true;
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10382.
    case 0xC10385: cpu.execute_instruction<0x10>(0x000080, 2); return true;
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10384.
    case 0xC10386: cpu.execute_instruction<0x80>(0x0000C9, 2); return true;
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10387: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x008010, 3); return true;
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10387.
    case 0xC10389: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/text/ccs/halt.asm:22 BNE @UNKNOWN1
    case 0xC1038A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/halt.asm:23 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC1038C: cpu.execute_instruction<0x9C>(0x00993D, 3); return true;
    // src/text/ccs/halt.asm:24 BRA @UNKNOWN2
    case 0xC1038F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/halt.asm:26 LDA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10391: cpu.execute_instruction<0xAD>(0x00993D, 3); return true;
    // src/text/ccs/halt.asm:27 BNE @UNKNOWN0
    case 0xC10394: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/text/ccs/halt.asm:29 JSR CLEAR_INSTANT_PRINTING
    case 0xC10396: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/ccs/halt.asm:30 JSL WINDOW_TICK
    case 0xC10399: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/ccs/halt.asm:31 LDX @LOCAL02
    case 0xC1039D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/halt.asm:32 BNE @UNKNOWN3
    case 0xC1039F: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/ccs/halt.asm:33 LDA BLINKING_TRIANGLE_FLAG
    case 0xC103A1: cpu.execute_instruction<0xAD>(0x009945, 3); return true;
    // src/text/ccs/halt.asm:34 BEQ @UNKNOWN3
    case 0xC103A4: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/halt.asm:35 LDA TEXT_SPEED_BASED_WAIT
    case 0xC103A6: cpu.execute_instruction<0xAD>(0x009943, 3); return true;
    // src/text/ccs/halt.asm:36 BEQ @UNKNOWN3
    case 0xC103A9: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/ccs/halt.asm:37 LDA #0
    case 0xC103AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/halt.asm:37 LDA #0
    // Overlapping static entry reached from 0xC103AB.
    case 0xC103AD: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:38 JSR UNKNOWN_C100FE
    case 0xC103AE: cpu.execute_instruction<0x20>(0x000303, 3); return true;
    // src/text/ccs/halt.asm:39 JMP @UNKNOWN14
    case 0xC103B1: cpu.execute_instruction<0x4C>(0x0004D2, 3); return true;
    // src/text/ccs/halt.asm:41 LDA BLINKING_TRIANGLE_FLAG
    case 0xC103B4: cpu.execute_instruction<0xAD>(0x009945, 3); return true;
    // src/text/ccs/halt.asm:42 BEQ @UNKNOWN4
    case 0xC103B7: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:43 JSL PAUSE_MUSIC
    case 0xC103B9: cpu.execute_instruction<0x22>(0xC1341D, 4); return true;
    // src/text/ccs/halt.asm:45 LDA CURRENT_FOCUS_WINDOW
    case 0xC103BD: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/ccs/halt.asm:46 ASL
    case 0xC103C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:47 TAX
    case 0xC103C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:48 LDA OPEN_WINDOW_TABLE,X
    case 0xC103C2: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC103C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC103C5.
    case 0xC103C7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/halt.asm:50 JSL MULT168
    case 0xC103C8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/halt.asm:51 CLC
    case 0xC103CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC103CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC103CD.
    case 0xC103CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    case 0xC103D0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC103CF.
    case 0xC103D1: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/text/ccs/halt.asm:54 LDY @LOCAL01
    case 0xC103D2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:55 BNE @UNKNOWN7
    case 0xC103D4: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/text/ccs/halt.asm:56 BRA @UNKNOWN6
    case 0xC103D6: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:58 JSL UNKNOWN_C12E42
    case 0xC103D8: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/text/ccs/halt.asm:60 LDA PAD_PRESS
    case 0xC103DC: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC103DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC103DF.
    case 0xC103E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00F4F0, 3); return true;
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    case 0xC103E2: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC103E1.
    case 0xC103E3: cpu.execute_instruction<0xF4>(0x00CE4C, 3); return true;
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    case 0xC103E4: cpu.execute_instruction<0x4C>(0x0004CE, 3); return true;
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC103E3.
    case 0xC103E6: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x00E3F8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103E6.
    case 0xC103E8: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103E7.
    case 0xC103E9: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103EA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103E9.
    case 0xC103EB: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC103EC.
    case 0xC103EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC103EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:66 LDX @VIRTUAL02
    case 0xC103F1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:67 LDA a:window_stats::window_y,X
    case 0xC103F3: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/ccs/halt.asm:68 LDX @VIRTUAL02
    case 0xC103F6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:69 CLC
    case 0xC103F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:70 ADC a:window_stats::height,X
    case 0xC103F9: cpu.execute_instruction<0x7D>(0x00000C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC103FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10400: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:72 STA @VIRTUAL04
    case 0xC10401: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:73 LDX @VIRTUAL02
    case 0xC10403: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:74 LDA a:window_stats::window_x,X
    case 0xC10405: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/ccs/halt.asm:75 LDX @VIRTUAL02
    case 0xC10408: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:76 CLC
    case 0xC1040A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:77 ADC a:window_stats::width,X
    case 0xC1040B: cpu.execute_instruction<0x7D>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:78 CLC
    case 0xC1040E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:79 ADC @VIRTUAL04
    case 0xC1040F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:80 CLC
    case 0xC10411: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC10412: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC10412.
    case 0xC10414: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/ccs/halt.asm:82 TAY
    case 0xC10415: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:83 LDX #2
    case 0xC10416: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/halt.asm:83 LDX #2
    // Overlapping static entry reached from 0xC10416.
    case 0xC10418: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/ccs/halt.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC10419: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:85 LDA #0
    case 0xC1041B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    case 0xC1041D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1041B.
    case 0xC1041E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1041E.
    case 0xC10420: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x000FA2, 3); return true;
    // src/text/ccs/halt.asm:88 LDX #15
    case 0xC10421: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000F, 2); else cpu.execute_instruction<0xA2>(0x00000F, 3); return true;
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC10420.
    case 0xC10422: cpu.execute_instruction<0x0F>(0x128600, 4); return true;
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC10421.
    case 0xC10423: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:89 STX @LOCAL01
    case 0xC10424: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:90 BRA @UNKNOWN9
    case 0xC10426: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/halt.asm:92 LDA PAD_PRESS
    case 0xC10428: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1042B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1042B.
    case 0xC1042D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0062D0, 3); return true;
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    case 0xC1042E: cpu.execute_instruction<0xD0>(0x000062, 2); return true;
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    // Overlapping static entry reached from 0xC1042D.
    case 0xC1042F: cpu.execute_instruction<0x62>(0x005E22, 3); return true;
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    case 0xC10430: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC1042F.
    case 0xC10432: cpu.execute_instruction<0x35>(0x0000C1, 2); return true;
    // src/text/ccs/halt.asm:96 LDX @LOCAL01
    case 0xC10434: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:97 DEX
    case 0xC10436: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:98 STX @LOCAL01
    case 0xC10437: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:100 BNE @UNKNOWN8
    case 0xC10439: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1043B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x00E3FA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1043B.
    case 0xC1043D: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1043E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1043D.
    case 0xC1043F: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC10440: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10440.
    case 0xC10442: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC10443: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:102 LDX @VIRTUAL02
    case 0xC10445: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:103 LDA a:window_stats::window_y,X
    case 0xC10447: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/ccs/halt.asm:104 LDX @VIRTUAL02
    case 0xC1044A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:105 CLC
    case 0xC1044C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:106 ADC a:window_stats::height,X
    case 0xC1044D: cpu.execute_instruction<0x7D>(0x00000C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10451: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10452: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10453: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10454: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:108 STA @VIRTUAL04
    case 0xC10455: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:109 LDX @VIRTUAL02
    case 0xC10457: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:110 LDA a:window_stats::window_x,X
    case 0xC10459: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/ccs/halt.asm:111 LDX @VIRTUAL02
    case 0xC1045C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:112 CLC
    case 0xC1045E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:113 ADC a:window_stats::width,X
    case 0xC1045F: cpu.execute_instruction<0x7D>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:114 CLC
    case 0xC10462: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:115 ADC @VIRTUAL04
    case 0xC10463: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:116 CLC
    case 0xC10465: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC10466: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC10466.
    case 0xC10468: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/ccs/halt.asm:118 TAY
    case 0xC10469: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:119 LDX #2
    case 0xC1046A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/halt.asm:119 LDX #2
    // Overlapping static entry reached from 0xC1046A.
    case 0xC1046C: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/ccs/halt.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC1046D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:121 LDA #0
    case 0xC1046F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    case 0xC10471: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1046F.
    case 0xC10472: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC10472.
    case 0xC10474: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x000AA2, 3); return true;
    // src/text/ccs/halt.asm:124 LDX #10
    case 0xC10475: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10474.
    case 0xC10476: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10475.
    case 0xC10477: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:125 STX @LOCAL01
    case 0xC10478: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:126 BRA @UNKNOWN11
    case 0xC1047A: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/halt.asm:128 LDA PAD_PRESS
    case 0xC1047C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1047F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1047F.
    case 0xC10481: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x004AD0, 3); return true;
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    case 0xC10482: cpu.execute_instruction<0xD0>(0x00004A, 2); return true;
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC10481.
    case 0xC10483: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:131 JSL UNKNOWN_C12E42
    case 0xC10484: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/text/ccs/halt.asm:132 LDX @LOCAL01
    case 0xC10488: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:133 DEX
    case 0xC1048A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:134 STX @LOCAL01
    case 0xC1048B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:136 BNE @UNKNOWN10
    case 0xC1048D: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/text/ccs/halt.asm:137 JMP @UNKNOWN7
    case 0xC1048F: cpu.execute_instruction<0x4C>(0x0003E7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10492: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x00E3FC, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10492.
    case 0xC10494: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10495: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10494.
    case 0xC10496: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10497: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10497.
    case 0xC10499: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC1049A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:140 LDX @VIRTUAL02
    case 0xC1049C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:141 LDA a:window_stats::window_y,X
    case 0xC1049E: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/ccs/halt.asm:142 LDX @VIRTUAL02
    case 0xC104A1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:143 CLC
    case 0xC104A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:144 ADC a:window_stats::height,X
    case 0xC104A4: cpu.execute_instruction<0x7D>(0x00000C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC104AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:146 PHA
    case 0xC104AC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:147 LDX @VIRTUAL02
    case 0xC104AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:148 LDA a:window_stats::window_x,X
    case 0xC104AF: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/ccs/halt.asm:149 LDX @VIRTUAL02
    case 0xC104B2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:150 CLC
    case 0xC104B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:151 ADC a:window_stats::width,X
    case 0xC104B5: cpu.execute_instruction<0x7D>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:152 PLY
    case 0xC104B8: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:153 STY @VIRTUAL02
    case 0xC104B9: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:154 CLC
    case 0xC104BB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:155 ADC @VIRTUAL02
    case 0xC104BC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:156 CLC
    case 0xC104BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC104BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC104BF.
    case 0xC104C1: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/ccs/halt.asm:158 TAY
    case 0xC104C2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:159 LDX #2
    case 0xC104C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/halt.asm:159 LDX #2
    // Overlapping static entry reached from 0xC104C3.
    case 0xC104C5: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/ccs/halt.asm:160 SEP #PROC_FLAGS::ACCUM8
    case 0xC104C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:161 LDA #0
    case 0xC104C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    case 0xC104CA: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC104C8.
    case 0xC104CB: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC104CB.
    case 0xC104CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x003522, 3); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    case 0xC104CE: cpu.execute_instruction<0x22>(0xC13435, 4); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC104CD.
    case 0xC104CF: cpu.execute_instruction<0x35>(0x000034, 2); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC104CD.
    case 0xC104D0: cpu.execute_instruction<0x34>(0x0000C1, 2); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC104CF.
    case 0xC104D1: cpu.execute_instruction<0xC1>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC104D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC104D3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_experience.asm (source_named).
bool execute_text_ccs_increase_character_experience_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_experience.asm:3 BEGIN_C_FUNCTION
    case 0xC176CB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC176CD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC176CE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC176CF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC176D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC176D0.
    case 0xC176D2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC176D3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC176D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:11 TXA
    case 0xC176D5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:12 STA @LOCAL01
    case 0xC176D6: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/increase_character_experience.asm:13 LDA #4
    case 0xC176D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/increase_character_experience.asm:13 LDA #4
    // Overlapping static entry reached from 0xC176D8.
    case 0xC176DA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_experience.asm:14 CLC
    case 0xC176DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC176DC: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC176DF: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC176E1: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC176E3: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC176E5: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/increase_character_experience.asm:17 LDA @LOCAL01
    case 0xC176E7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/increase_character_experience.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC176E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC176EB: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_experience.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC176EE: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_experience.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC176F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC176F3: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_experience.asm:23 LDA #.LOWORD(CC_1E_09)
    case 0xC176F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CB, 2); else cpu.execute_instruction<0xA9>(0x0076CB, 3); return true;
    // src/text/ccs/increase_character_experience.asm:23 LDA #.LOWORD(CC_1E_09)
    // Overlapping static entry reached from 0xC176F6.
    case 0xC176F8: cpu.execute_instruction<0x76>(0x00004C, 2); return true;
    // src/text/ccs/increase_character_experience.asm:24 JMP @UNKNOWN3
    case 0xC176F9: cpu.execute_instruction<0x4C>(0x0077A1, 3); return true;
    // src/text/ccs/increase_character_experience.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC176F8.
    case 0xC176FA: cpu.execute_instruction<0xA1>(0x000077, 2); return true;
    // src/text/ccs/increase_character_experience.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC176FC: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/increase_character_experience.asm:27 LDY #24
    case 0xC176FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC17700: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC176FE.
    case 0xC17701: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC17702: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC17701.
    case 0xC17703: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC17704: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC17703.
    case 0xC17705: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:29 JSL ASL32_ENTRY2
    case 0xC17706: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1770A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1770C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1770D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1770F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:31 LDY #16
    case 0xC17710: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/increase_character_experience.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC17712: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC17710.
    case 0xC17713: cpu.execute_instruction<0x20>(0x0071AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17714: cpu.execute_instruction<0xAD>(0x009A71, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC17713.
    case 0xC17716: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17717: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17719: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1771B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1771D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/increase_character_experience.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1771F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:35 JSL ASL32_ENTRY2
    case 0xC17721: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC17725: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC17727: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC17728: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC1772A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:37 LDY #8
    case 0xC1772B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/increase_character_experience.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC1772D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1772B.
    case 0xC1772E: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1772F: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1772E.
    case 0xC17731: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17732: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17734: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17736: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC17738: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/increase_character_experience.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC1773A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:41 JSL ASL32_ENTRY2
    case 0xC1773C: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17740: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17742: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17744: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC17746: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/increase_character_experience.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC17748: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1774A: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1774D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1774F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17751: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC17753: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/increase_character_experience.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC17755: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17757: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17759: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1775B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1775D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1775F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17761: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC17763: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC17764: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC17766: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC17767: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17769: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1776B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1776D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1776F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17771: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17773: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC17775: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC17776: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC17778: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC17779: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1777B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1777D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1777F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17781: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17783: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17785: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17787: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17789: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1778B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1778D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/increase_character_experience.asm:52 REP #PROC_FLAGS::INDEX8
    case 0xC1778F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/increase_character_experience.asm:53 LDX #1
    case 0xC17791: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/increase_character_experience.asm:53 LDX #1
    // Overlapping static entry reached from 0xC17791.
    case 0xC17793: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/text/ccs/increase_character_experience.asm:54 LDA CC_ARGUMENT_STORAGE
    case 0xC17794: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_experience.asm:55 AND #$00FF
    case 0xC17797: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_experience.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC17797.
    case 0xC17799: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_experience.asm:56 JSL GAIN_EXP
    case 0xC1779A: cpu.execute_instruction<0x22>(0xC1D7E4, 4); return true;
    // src/text/ccs/increase_character_experience.asm:57 LDA #NULL
    case 0xC1779E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_experience.asm:57 LDA #NULL
    // Overlapping static entry reached from 0xC1779E.
    case 0xC177A0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_experience.asm:59 END_C_FUNCTION
    case 0xC177A1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_experience.asm:59 END_C_FUNCTION
    case 0xC177A2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_guts.asm (source_named).
bool execute_text_ccs_increase_character_guts_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_guts.asm:3 BEGIN_C_FUNCTION
    case 0xC17804: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17806: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17807: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17808: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17809: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17809.
    case 0xC1780B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC1780C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC1780D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:10 TXA
    case 0xC1780E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:11 STA @LOCAL00
    case 0xC1780F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_guts.asm:12 LDA #1
    case 0xC17811: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_guts.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17811.
    case 0xC17813: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_guts.asm:13 CLC
    case 0xC17814: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17815: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17818: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1781A: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1781C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1781E: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_guts.asm:16 LDA @LOCAL00
    case 0xC17820: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_guts.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17822: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17824: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_guts.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17827: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_guts.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1782A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1782C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_guts.asm:22 LDA #.LOWORD(CC_1E_0B)
    case 0xC1782F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x007804, 3); return true;
    // src/text/ccs/increase_character_guts.asm:22 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC1782F.
    case 0xC17831: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:23 BRA @UNKNOWN3
    case 0xC17832: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_guts.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17834: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_guts.asm:26 AND #$00FF
    case 0xC17837: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_guts.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC17837.
    case 0xC17839: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_guts.asm:27 TAX
    case 0xC1783A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:28 DEC
    case 0xC1783B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1783C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/increase_character_guts.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1783C.
    case 0xC1783E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_guts.asm:30 JSL MULT168
    case 0xC1783F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/increase_character_guts.asm:31 CLC
    case 0xC17843: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    case 0xC17844: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x009CD6, 3); return true;
    // src/text/ccs/increase_character_guts.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    // Overlapping static entry reached from 0xC17844.
    case 0xC17846: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/text/ccs/increase_character_guts.asm:33 TAY
    case 0xC17847: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:34 LDA @LOCAL00
    case 0xC17848: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_guts.asm:34 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17846.
    case 0xC17849: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/text/ccs/increase_character_guts.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1784A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:36 STA @VIRTUAL00
    case 0xC1784C: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_guts.asm:37 LDA __BSS_START__,Y
    case 0xC1784E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_guts.asm:38 CLC
    case 0xC17851: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:39 ADC @VIRTUAL00
    case 0xC17852: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_guts.asm:40 STA __BSS_START__,Y
    case 0xC17854: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_guts.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17857: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:42 TXA
    case 0xC17859: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:43 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC1785A: cpu.execute_instruction<0x22>(0xC21A48, 4); return true;
    // src/text/ccs/increase_character_guts.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC1785E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:45 LDA #NULL
    case 0xC17860: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_guts.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17860.
    case 0xC17862: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_guts.asm:47 END_C_FUNCTION
    case 0xC17863: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_guts.asm:47 END_C_FUNCTION
    case 0xC17864: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_iq.asm (source_named).
bool execute_text_ccs_increase_character_iq_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_iq.asm:3 BEGIN_C_FUNCTION
    case 0xC177A3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC177A5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC177A6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC177A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC177A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC177A8.
    case 0xC177AA: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC177AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC177AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:10 TXA
    case 0xC177AD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:11 STA @LOCAL00
    case 0xC177AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_iq.asm:12 LDA #1
    case 0xC177B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_iq.asm:12 LDA #1
    // Overlapping static entry reached from 0xC177B0.
    case 0xC177B2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_iq.asm:13 CLC
    case 0xC177B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC177B4: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC177B7: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC177B9: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC177BB: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC177BD: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_iq.asm:16 LDA @LOCAL00
    case 0xC177BF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_iq.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC177C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC177C3: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_iq.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC177C6: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_iq.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC177C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC177CB: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_iq.asm:22 LDA #.LOWORD(CC_1E_0A)
    case 0xC177CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A3, 2); else cpu.execute_instruction<0xA9>(0x0077A3, 3); return true;
    // src/text/ccs/increase_character_iq.asm:22 LDA #.LOWORD(CC_1E_0A)
    // Overlapping static entry reached from 0xC177CE.
    case 0xC177D0: cpu.execute_instruction<0x77>(0x000080, 2); return true;
    // src/text/ccs/increase_character_iq.asm:23 BRA @UNKNOWN3
    case 0xC177D1: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_iq.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC177D0.
    case 0xC177D2: cpu.execute_instruction<0x2F>(0x9A6EAD, 4); return true;
    // src/text/ccs/increase_character_iq.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC177D3: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_iq.asm:26 AND #$00FF
    case 0xC177D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_iq.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC177D6.
    case 0xC177D8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_iq.asm:27 TAX
    case 0xC177D9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:28 DEC
    case 0xC177DA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC177DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/increase_character_iq.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC177DB.
    case 0xC177DD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_iq.asm:30 JSL MULT168
    case 0xC177DE: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/increase_character_iq.asm:31 CLC
    case 0xC177E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    case 0xC177E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x009CD8, 3); return true;
    // src/text/ccs/increase_character_iq.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    // Overlapping static entry reached from 0xC177E3.
    case 0xC177E5: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/text/ccs/increase_character_iq.asm:33 TAY
    case 0xC177E6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:34 LDA @LOCAL00
    case 0xC177E7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_iq.asm:34 LDA @LOCAL00
    // Overlapping static entry reached from 0xC177E5.
    case 0xC177E8: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/text/ccs/increase_character_iq.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC177E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:36 STA @VIRTUAL00
    case 0xC177EB: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_iq.asm:37 LDA __BSS_START__,Y
    case 0xC177ED: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_iq.asm:38 CLC
    case 0xC177F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:39 ADC @VIRTUAL00
    case 0xC177F1: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_iq.asm:40 STA __BSS_START__,Y
    case 0xC177F3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_iq.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC177F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:42 TXA
    case 0xC177F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:43 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC177F9: cpu.execute_instruction<0x22>(0xC21C12, 4); return true;
    // src/text/ccs/increase_character_iq.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC177FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:45 LDA #NULL
    case 0xC177FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_iq.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC177FF.
    case 0xC17801: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_iq.asm:47 END_C_FUNCTION
    case 0xC17802: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_iq.asm:47 END_C_FUNCTION
    case 0xC17803: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_luck.asm (source_named).
bool execute_text_ccs_increase_character_luck_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_luck.asm:3 BEGIN_C_FUNCTION
    case 0xC17927: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC17929: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1792C.
    case 0xC1792E: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC1792F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC17930: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:10 TXA
    case 0xC17931: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:11 STA @LOCAL00
    case 0xC17932: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_luck.asm:12 LDA #1
    case 0xC17934: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_luck.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17934.
    case 0xC17936: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_luck.asm:13 CLC
    case 0xC17937: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17938: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1793B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1793D: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1793F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17941: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_luck.asm:16 LDA @LOCAL00
    case 0xC17943: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_luck.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17945: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17947: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_luck.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1794A: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_luck.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1794D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1794F: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_luck.asm:22 LDA #.LOWORD(CC_1E_0E)
    case 0xC17952: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x007927, 3); return true;
    // src/text/ccs/increase_character_luck.asm:22 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC17952.
    case 0xC17954: cpu.execute_instruction<0x79>(0x002F80, 3); return true;
    // src/text/ccs/increase_character_luck.asm:23 BRA @UNKNOWN3
    case 0xC17955: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_luck.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17957: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_luck.asm:26 AND #$00FF
    case 0xC1795A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_luck.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1795A.
    case 0xC1795C: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_luck.asm:27 TAX
    case 0xC1795D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:28 DEC
    case 0xC1795E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1795F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/increase_character_luck.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1795F.
    case 0xC17961: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_luck.asm:30 JSL MULT168
    case 0xC17962: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/increase_character_luck.asm:31 CLC
    case 0xC17966: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC17967: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D9, 2); else cpu.execute_instruction<0x69>(0x009CD9, 3); return true;
    // src/text/ccs/increase_character_luck.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC17967.
    case 0xC17969: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/text/ccs/increase_character_luck.asm:33 TAY
    case 0xC1796A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:34 LDA @LOCAL00
    case 0xC1796B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_luck.asm:34 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17969.
    case 0xC1796C: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/text/ccs/increase_character_luck.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1796D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:36 STA @VIRTUAL00
    case 0xC1796F: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_luck.asm:37 LDA __BSS_START__,Y
    case 0xC17971: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_luck.asm:38 CLC
    case 0xC17974: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:39 ADC @VIRTUAL00
    case 0xC17975: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_luck.asm:40 STA __BSS_START__,Y
    case 0xC17977: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_luck.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC1797A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:42 TXA
    case 0xC1797C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:43 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC1797D: cpu.execute_instruction<0x22>(0xC21AFA, 4); return true;
    // src/text/ccs/increase_character_luck.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC17981: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:45 LDA #NULL
    case 0xC17983: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_luck.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17983.
    case 0xC17985: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_luck.asm:47 END_C_FUNCTION
    case 0xC17986: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_luck.asm:47 END_C_FUNCTION
    case 0xC17987: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_speed.asm (source_named).
bool execute_text_ccs_increase_character_speed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_speed.asm:3 BEGIN_C_FUNCTION
    case 0xC17865: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC17867: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC17868: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC17869: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC1786A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1786A.
    case 0xC1786C: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC1786D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC1786E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:10 TXA
    case 0xC1786F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:11 STA @LOCAL00
    case 0xC17870: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_speed.asm:12 LDA #1
    case 0xC17872: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_speed.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17872.
    case 0xC17874: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_speed.asm:13 CLC
    case 0xC17875: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17876: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17879: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1787B: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1787D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1787F: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_speed.asm:16 LDA @LOCAL00
    case 0xC17881: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_speed.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17883: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17885: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_speed.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17888: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_speed.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1788B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1788D: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_speed.asm:22 LDA #.LOWORD(CC_1E_0C)
    case 0xC17890: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000065, 2); else cpu.execute_instruction<0xA9>(0x007865, 3); return true;
    // src/text/ccs/increase_character_speed.asm:22 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC17890.
    case 0xC17892: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:23 BRA @UNKNOWN3
    case 0xC17893: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_speed.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17895: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_speed.asm:26 AND #$00FF
    case 0xC17898: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_speed.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC17898.
    case 0xC1789A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_speed.asm:27 TAX
    case 0xC1789B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:28 DEC
    case 0xC1789C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1789D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/increase_character_speed.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1789D.
    case 0xC1789F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_speed.asm:30 JSL MULT168
    case 0xC178A0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/increase_character_speed.asm:31 CLC
    case 0xC178A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    case 0xC178A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D5, 2); else cpu.execute_instruction<0x69>(0x009CD5, 3); return true;
    // src/text/ccs/increase_character_speed.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    // Overlapping static entry reached from 0xC178A5.
    case 0xC178A7: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/text/ccs/increase_character_speed.asm:33 TAY
    case 0xC178A8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:34 LDA @LOCAL00
    case 0xC178A9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_speed.asm:34 LDA @LOCAL00
    // Overlapping static entry reached from 0xC178A7.
    case 0xC178AA: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/text/ccs/increase_character_speed.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC178AB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:36 STA @VIRTUAL00
    case 0xC178AD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_speed.asm:37 LDA __BSS_START__,Y
    case 0xC178AF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_speed.asm:38 CLC
    case 0xC178B2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:39 ADC @VIRTUAL00
    case 0xC178B3: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_speed.asm:40 STA __BSS_START__,Y
    case 0xC178B5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_speed.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC178B8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:42 TXA
    case 0xC178BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:43 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC178BB: cpu.execute_instruction<0x22>(0xC21996, 4); return true;
    // src/text/ccs/increase_character_speed.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC178BF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:45 LDA #NULL
    case 0xC178C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_speed.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC178C1.
    case 0xC178C3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_speed.asm:47 END_C_FUNCTION
    case 0xC178C4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_speed.asm:47 END_C_FUNCTION
    case 0xC178C5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_vitality.asm (source_named).
bool execute_text_ccs_increase_character_vitality_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_vitality.asm:3 BEGIN_C_FUNCTION
    case 0xC178C6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC178C8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC178C9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC178CA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC178CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC178CB.
    case 0xC178CD: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC178CE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC178CF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:10 TXA
    case 0xC178D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:11 STA @LOCAL00
    case 0xC178D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:12 LDA #1
    case 0xC178D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:12 LDA #1
    // Overlapping static entry reached from 0xC178D3.
    case 0xC178D5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:13 CLC
    case 0xC178D6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178D7: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC178DA: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC178DC: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC178DE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC178E0: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:16 LDA @LOCAL00
    case 0xC178E2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC178E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178E6: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC178E9: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC178EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178EE: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:22 LDA #.LOWORD(CC_1E_0D)
    case 0xC178F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x0078C6, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:22 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC178F1.
    case 0xC178F3: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:23 BRA @UNKNOWN3
    case 0xC178F4: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC178F6: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:26 AND #$00FF
    case 0xC178F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC178F9.
    case 0xC178FB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:27 TAX
    case 0xC178FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:28 DEC
    case 0xC178FD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC178FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC178FE.
    case 0xC17900: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:30 JSL MULT168
    case 0xC17901: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/ccs/increase_character_vitality.asm:31 CLC
    case 0xC17905: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC17906: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D7, 2); else cpu.execute_instruction<0x69>(0x009CD7, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC17906.
    case 0xC17908: cpu.execute_instruction<0x9C>(0x00A5A8, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:33 TAY
    case 0xC17909: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:34 LDA @LOCAL00
    case 0xC1790A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:34 LDA @LOCAL00
    // Overlapping static entry reached from 0xC17908.
    case 0xC1790B: cpu.execute_instruction<0x0E>(0x0020E2, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1790C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:36 STA @VIRTUAL00
    case 0xC1790E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:37 LDA __BSS_START__,Y
    case 0xC17910: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:38 CLC
    case 0xC17913: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:39 ADC @VIRTUAL00
    case 0xC17914: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:40 STA __BSS_START__,Y
    case 0xC17916: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17919: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:42 TXA
    case 0xC1791B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:43 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1791C: cpu.execute_instruction<0x22>(0xC21BFA, 4); return true;
    // src/text/ccs/increase_character_vitality.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC17920: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:45 LDA #NULL
    case 0xC17922: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17922.
    case 0xC17924: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:47 END_C_FUNCTION
    case 0xC17925: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_vitality.asm:47 END_C_FUNCTION
    case 0xC17926: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/inflict_character_status.asm (source_named).
bool execute_text_ccs_inflict_character_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/inflict_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC1544B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC1544D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC1544E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC1544F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15450: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15450.
    case 0xC15452: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15453: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15454: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:12 STX @VIRTUAL02
    case 0xC15455: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/inflict_character_status.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC15452.
    case 0xC15456: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/inflict_character_status.asm:13 LDA #2
    case 0xC15457: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/inflict_character_status.asm:13 LDA #2
    // Overlapping static entry reached from 0xC15457.
    case 0xC15459: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/inflict_character_status.asm:14 CLC
    case 0xC1545A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1545B: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1545E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15460: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15462: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15464: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/inflict_character_status.asm:17 LDA @VIRTUAL02
    case 0xC15466: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/inflict_character_status.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15468: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/inflict_character_status.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1546A: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1546D: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/inflict_character_status.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15470: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/inflict_character_status.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15472: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    case 0xC15475: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00544B, 3); return true;
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC15475.
    case 0xC15477: cpu.execute_instruction<0x54>(0x004480, 3); return true;
    // src/text/ccs/inflict_character_status.asm:24 BRA @UNKNOWN7
    case 0xC15478: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/inflict_character_status.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1547A: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    case 0xC1547D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1547D.
    case 0xC1547F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/inflict_character_status.asm:28 TAY
    case 0xC15480: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:29 STY @LOCAL02
    case 0xC15481: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC15483: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    case 0xC15486: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC15486.
    case 0xC15488: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/inflict_character_status.asm:32 TAX
    case 0xC15489: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:33 BEQ @UNKNOWN3
    case 0xC1548A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/inflict_character_status.asm:34 STX @LOCAL01
    case 0xC1548C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/inflict_character_status.asm:35 BRA @UNKNOWN4
    case 0xC1548E: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/inflict_character_status.asm:37 JSR GET_ARGUMENT_MEMORY
    case 0xC15490: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/inflict_character_status.asm:38 LDA @VIRTUAL06
    case 0xC15493: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/inflict_character_status.asm:39 TAX
    case 0xC15495: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:40 STX @LOCAL01
    case 0xC15496: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/inflict_character_status.asm:42 LDY @LOCAL02
    case 0xC15498: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/inflict_character_status.asm:43 BEQ @UNKNOWN5
    case 0xC1549A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/inflict_character_status.asm:44 TYA
    case 0xC1549C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:45 BRA @UNKNOWN6
    case 0xC1549D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/inflict_character_status.asm:47 JSR GET_WORKING_MEMORY
    case 0xC1549F: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/inflict_character_status.asm:48 LDA @VIRTUAL06
    case 0xC154A2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/inflict_character_status.asm:50 LDY @VIRTUAL02
    case 0xC154A4: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/ccs/inflict_character_status.asm:51 LDX @LOCAL01
    case 0xC154A6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/inflict_character_status.asm:52 JSL INFLICT_STATUS_NONBATTLE
    case 0xC154A8: cpu.execute_instruction<0x22>(0xC436FC, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC154AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC154AE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC154B0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC154B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC154B4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC154B6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/inflict_character_status.asm:55 JSR SET_WORKING_MEMORY
    case 0xC154B8: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/inflict_character_status.asm:56 LDA #NULL
    case 0xC154BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/inflict_character_status.asm:56 LDA #NULL
    // Overlapping static entry reached from 0xC154BB.
    case 0xC154BD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/inflict_character_status.asm:58 END_C_FUNCTION
    case 0xC154BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/inflict_character_status.asm:58 END_C_FUNCTION
    case 0xC154BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump.asm (source_named).
bool execute_text_ccs_jump_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump.asm:3 BEGIN_C_FUNCTION
    case 0xC14525: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14527: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14528: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14529: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1452A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1452A.
    case 0xC1452C: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1452D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1452E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:10 TAY
    case 0xC1452F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:11 STY @LOCAL00
    case 0xC14530: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump.asm:12 LDA #3
    case 0xC14532: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/jump.asm:12 LDA #3
    // Overlapping static entry reached from 0xC14532.
    case 0xC14534: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/jump.asm:13 CLC
    case 0xC14535: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14536: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14539: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1453B: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1453D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1453F: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/jump.asm:16 TXA
    case 0xC14541: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14542: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14544: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/jump.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14547: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/jump.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1454A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1454C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/jump.asm:22 LDA #.LOWORD(CC_0A)
    case 0xC1454F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x004525, 3); return true;
    // src/text/ccs/jump.asm:22 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC1454F.
    case 0xC14551: cpu.execute_instruction<0x45>(0x00004C, 2); return true;
    // src/text/ccs/jump.asm:23 JMP @UNKNOWN3
    case 0xC14552: cpu.execute_instruction<0x4C>(0x0045F0, 3); return true;
    // src/text/ccs/jump.asm:23 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC14551.
    case 0xC14553: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/text/ccs/jump.asm:25 TXA
    case 0xC14555: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump.asm:26 STORE_INT1632 @VIRTUAL06
    case 0xC14556: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:26 STORE_INT1632 @VIRTUAL06
    case 0xC14558: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/jump.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC1455A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/jump.asm:28 LDY #24
    case 0xC1455C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x002218, 3); return true;
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    case 0xC1455E: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC1455C.
    case 0xC1455F: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC1455F.
    case 0xC14560: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14562: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14564: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14565: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14567: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:31 LDY #16
    case 0xC14568: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/jump.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1456A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14568.
    case 0xC1456B: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1456C: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1456B.
    case 0xC1456E: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1456F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14571: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14573: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14575: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/jump.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC14577: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:35 JSL ASL32_ENTRY2
    case 0xC14579: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1457D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1457F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC14580: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC14582: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:37 LDY #8
    case 0xC14583: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/jump.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC14585: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14583.
    case 0xC14586: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14587: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14586.
    case 0xC14589: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1458A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1458C: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1458E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14590: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/jump.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC14592: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:41 JSL ASL32_ENTRY2
    case 0xC14594: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14598: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1459A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1459C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1459E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/jump.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC145A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A2: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A7: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145A9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC145AB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/jump.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC145AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B1: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B7: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC145BF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C3: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145C9: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145CE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145D0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC145D1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D5: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145D9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145DB: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC145DD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC145DF: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/jump.asm:52 LDY @LOCAL00
    case 0xC145E1: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145E5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC145EA: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump.asm:54 LDA #NULL
    case 0xC145ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC145ED.
    case 0xC145EF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump.asm:56 END_C_FUNCTION
    case 0xC145F0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump.asm:56 END_C_FUNCTION
    case 0xC145F1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump_event_flag.asm (source_named).
bool execute_text_ccs_jump_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC14717: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC14719: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC1471A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC1471B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC1471C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1471C.
    case 0xC1471E: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC1471F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC14720: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:10 TAY
    case 0xC14721: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:11 STY @LOCAL00
    case 0xC14722: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14724: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/jump_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC14727: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/ccs/jump_event_flag.asm:14 TXA
    case 0xC14729: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC1472A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1472C: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/jump_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC1472F: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/jump_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14732: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14734: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/jump_event_flag.asm:20 LDA #.LOWORD(CC_06)
    case 0xC14737: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x004717, 3); return true;
    // src/text/ccs/jump_event_flag.asm:20 LDA #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC14737.
    case 0xC14739: cpu.execute_instruction<0x47>(0x000080, 2); return true;
    // src/text/ccs/jump_event_flag.asm:21 BRA @UNKNOWN2
    case 0xC1473A: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/text/ccs/jump_event_flag.asm:21 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC14739.
    case 0xC1473B: cpu.execute_instruction<0x43>(0x00008A, 2); return true;
    // src/text/ccs/jump_event_flag.asm:23 TXA
    case 0xC1473C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC1473D: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/jump_event_flag.asm:25 LDY #8
    case 0xC1473F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x002208, 3); return true;
    // src/text/ccs/jump_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC14741: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/jump_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1473F.
    case 0xC14742: cpu.execute_instruction<0x20>(0x00C092, 3); return true;
    // src/text/ccs/jump_event_flag.asm:27 STA @VIRTUAL02
    case 0xC14745: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/jump_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC14747: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/jump_event_flag.asm:29 AND #$00FF
    case 0xC1474A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/jump_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1474A.
    case 0xC1474C: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/jump_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC1474D: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/jump_event_flag.asm:31 JSL GET_EVENT_FLAG
    case 0xC1474F: cpu.execute_instruction<0x22>(0xC214D0, 4); return true;
    // src/text/ccs/jump_event_flag.asm:32 CMP #0
    case 0xC14753: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/jump_event_flag.asm:32 CMP #0
    // Overlapping static entry reached from 0xC14753.
    case 0xC14755: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/jump_event_flag.asm:33 BEQ @UNKNOWN1
    case 0xC14756: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/ccs/jump_event_flag.asm:34 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14758: cpu.execute_instruction<0x9C>(0x009A7E, 3); return true;
    // src/text/ccs/jump_event_flag.asm:35 LDA #.LOWORD(CC_0A)
    case 0xC1475B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x004525, 3); return true;
    // src/text/ccs/jump_event_flag.asm:35 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC1475B.
    case 0xC1475D: cpu.execute_instruction<0x45>(0x000080, 2); return true;
    // src/text/ccs/jump_event_flag.asm:36 BRA @UNKNOWN2
    case 0xC1475E: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/text/ccs/jump_event_flag.asm:36 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1475D.
    case 0xC1475F: cpu.execute_instruction<0x1F>(0xB90EA4, 4); return true;
    // src/text/ccs/jump_event_flag.asm:38 LDY @LOCAL00
    case 0xC14760: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14762: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1475F.
    case 0xC14763: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14765: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14767: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1476A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_event_flag.asm:40 LDA #4
    case 0xC1476C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/jump_event_flag.asm:40 LDA #4
    // Overlapping static entry reached from 0xC1476C.
    case 0xC1476E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/jump_event_flag.asm:41 CLC
    case 0xC1476F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:42 ADC @VIRTUAL06
    case 0xC14770: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_event_flag.asm:43 STA @VIRTUAL06
    case 0xC14772: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_event_flag.asm:44 STA __BSS_START__,Y
    case 0xC14774: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_event_flag.asm:45 LDA @VIRTUAL06+2
    case 0xC14777: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_event_flag.asm:46 STA __BSS_START__+2,Y
    case 0xC14779: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_event_flag.asm:47 LDA #NULL
    case 0xC1477C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump_event_flag.asm:47 LDA #NULL
    // Overlapping static entry reached from 0xC1477C.
    case 0xC1477E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_event_flag.asm:49 END_C_FUNCTION
    case 0xC1477F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_event_flag.asm:49 END_C_FUNCTION
    case 0xC14780: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump_multi.asm (source_named).
bool execute_text_ccs_jump_multi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_multi.asm:3 BEGIN_C_FUNCTION
    case 0xC145F2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC145F4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC145F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC145F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC145F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC145F7.
    case 0xC145F9: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC145FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC145FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:11 TXY
    case 0xC145FC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:12 STY @LOCAL01
    case 0xC145FD: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/jump_multi.asm:13 TAX
    case 0xC145FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:14 STX @LOCAL00
    case 0xC14600: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:15 JSR GET_WORKING_MEMORY
    case 0xC14602: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC14605: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC14605.
    case 0xC14607: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC14608: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1460A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1460A.
    case 0xC1460C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1460D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1460F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14611: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14613: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14615: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC14617: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi.asm:18 BEQ @UNKNOWN1
    case 0xC14619: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/text/ccs/jump_multi.asm:19 JSR GET_WORKING_MEMORY
    case 0xC1461B: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/jump_multi.asm:20 LDY @LOCAL01
    case 0xC1461E: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/jump_multi.asm:21 TYA
    case 0xC14620: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC14621: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC14623: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi.asm:23 CLC
    case 0xC14625: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:24 LDA @VIRTUAL06
    case 0xC14626: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:25 SBC @VIRTUAL0A
    case 0xC14628: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi.asm:26 LDA @VIRTUAL06+2
    case 0xC1462A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:27 SBC @VIRTUAL0A+2
    case 0xC1462C: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi.asm:28 BCS @UNKNOWN1
    case 0xC1462E: cpu.execute_instruction<0xB0>(0x000030, 2); return true;
    // src/text/ccs/jump_multi.asm:29 LDX @LOCAL00
    case 0xC14630: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:30 TXY
    case 0xC14632: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:31 STY @LOCAL00
    case 0xC14633: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:32 JSR GET_WORKING_MEMORY
    case 0xC14635: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/jump_multi.asm:33 LDA @VIRTUAL06
    case 0xC14638: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:34 DEC
    case 0xC1463A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:35 ASL
    case 0xC1463B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:36 ASL
    case 0xC1463C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:37 PHA
    case 0xC1463D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:38 LDY @LOCAL00
    case 0xC1463E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14640: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14643: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14645: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14648: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:40 PLA
    case 0xC1464A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:41 CLC
    case 0xC1464B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:42 ADC @VIRTUAL06
    case 0xC1464C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:43 STA @VIRTUAL06
    case 0xC1464E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:44 STA __BSS_START__,Y
    case 0xC14650: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_multi.asm:45 LDA @VIRTUAL06+2
    case 0xC14653: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:46 STA __BSS_START__+2,Y
    case 0xC14655: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi.asm:47 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14658: cpu.execute_instruction<0x9C>(0x009A7E, 3); return true;
    // src/text/ccs/jump_multi.asm:48 LDA #.LOWORD(CC_0A)
    case 0xC1465B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x004525, 3); return true;
    // src/text/ccs/jump_multi.asm:48 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC1465B.
    case 0xC1465D: cpu.execute_instruction<0x45>(0x000080, 2); return true;
    // src/text/ccs/jump_multi.asm:49 BRA @UNKNOWN2
    case 0xC1465E: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/text/ccs/jump_multi.asm:49 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1465D.
    case 0xC1465F: cpu.execute_instruction<0x25>(0x0000A6, 2); return true;
    // src/text/ccs/jump_multi.asm:51 LDX @LOCAL00
    case 0xC14660: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:51 LDX @LOCAL00
    // Overlapping static entry reached from 0xC1465F.
    case 0xC14661: cpu.execute_instruction<0x0E>(0x00B99B, 3); return true;
    // src/text/ccs/jump_multi.asm:52 TXY
    case 0xC14662: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14663: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC14661.
    case 0xC14664: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14666: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14668: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1466B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:54 LDY @LOCAL01
    case 0xC1466D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/jump_multi.asm:55 TYA
    case 0xC1466F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:56 ASL
    case 0xC14670: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:57 ASL
    case 0xC14671: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:58 CLC
    case 0xC14672: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:59 ADC @VIRTUAL06
    case 0xC14673: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:60 STA @VIRTUAL06
    case 0xC14675: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:61 TXY
    case 0xC14677: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC14678: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1467A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1467D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1467F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi.asm:63 LDA #NULL
    case 0xC14682: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump_multi.asm:63 LDA #NULL
    // Overlapping static entry reached from 0xC14682.
    case 0xC14684: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_multi.asm:65 END_C_FUNCTION
    case 0xC14685: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_multi.asm:65 END_C_FUNCTION
    case 0xC14686: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump_multi2.asm (source_named).
bool execute_text_ccs_jump_multi2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_multi2.asm:3 BEGIN_C_FUNCTION
    case 0xC16587: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC16589: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1658A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1658B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1658C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1658C.
    case 0xC1658E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1658F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC16590: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:11 STX @LOCAL01
    case 0xC16591: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1658E.
    case 0xC16592: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/jump_multi2.asm:12 TAY
    case 0xC16593: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:13 STY @LOCAL00
    case 0xC16594: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi2.asm:14 JSR GET_WORKING_MEMORY
    case 0xC16596: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC16599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC16599.
    case 0xC1659B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1659C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1659E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1659E.
    case 0xC165A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC165A1: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC165A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC165A5: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC165A7: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC165A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC165AB: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi2.asm:17 BEQ @UNKNOWN1
    case 0xC165AD: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/text/ccs/jump_multi2.asm:18 JSR GET_WORKING_MEMORY
    case 0xC165AF: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/jump_multi2.asm:19 LDX @LOCAL01
    case 0xC165B2: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:20 TXA
    case 0xC165B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:21 STORE_INT1632 @VIRTUAL0A
    case 0xC165B5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:21 STORE_INT1632 @VIRTUAL0A
    case 0xC165B7: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi2.asm:22 CLC
    case 0xC165B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:23 LDA @VIRTUAL06
    case 0xC165BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:24 SBC @VIRTUAL0A
    case 0xC165BC: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi2.asm:25 LDA @VIRTUAL06+2
    case 0xC165BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:26 SBC @VIRTUAL0A+2
    case 0xC165C0: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi2.asm:27 BCS @UNKNOWN1
    case 0xC165C2: cpu.execute_instruction<0xB0>(0x00003F, 2); return true;
    // src/text/ccs/jump_multi2.asm:28 JSR GET_WORKING_MEMORY
    case 0xC165C4: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/jump_multi2.asm:29 LDA @VIRTUAL06
    case 0xC165C7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:30 STA @VIRTUAL02
    case 0xC165C9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/jump_multi2.asm:31 LDX @LOCAL01
    case 0xC165CB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:32 TXA
    case 0xC165CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:33 SEC
    case 0xC165CE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:34 SBC @VIRTUAL02
    case 0xC165CF: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/ccs/jump_multi2.asm:35 STA ONGOSUB_OFFSET
    case 0xC165D1: cpu.execute_instruction<0x8D>(0x009A89, 3); return true;
    // src/text/ccs/jump_multi2.asm:36 LDY @LOCAL00
    case 0xC165D4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi2.asm:37 STY @LOCAL01
    case 0xC165D6: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:38 JSR GET_WORKING_MEMORY
    case 0xC165D8: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/jump_multi2.asm:39 LDA @VIRTUAL06
    case 0xC165DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:40 DEC
    case 0xC165DD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:41 ASL
    case 0xC165DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:42 ASL
    case 0xC165DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:43 PHA
    case 0xC165E0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:44 LDY @LOCAL01
    case 0xC165E1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC165E3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC165E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC165E8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC165EB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:46 PLA
    case 0xC165ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:47 CLC
    case 0xC165EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:48 ADC @VIRTUAL06
    case 0xC165EF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:49 STA @VIRTUAL06
    case 0xC165F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:50 STA __BSS_START__,Y
    case 0xC165F3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_multi2.asm:51 LDA @VIRTUAL06+2
    case 0xC165F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:52 STA __BSS_START__+2,Y
    case 0xC165F8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi2.asm:53 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165FB: cpu.execute_instruction<0x9C>(0x009A7E, 3); return true;
    // src/text/ccs/jump_multi2.asm:54 LDA #.LOWORD(UNKNOWN_C1621F)
    case 0xC165FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00649E, 3); return true;
    // src/text/ccs/jump_multi2.asm:54 LDA #.LOWORD(UNKNOWN_C1621F)
    // Overlapping static entry reached from 0xC165FE.
    case 0xC16600: cpu.execute_instruction<0x64>(0x000080, 2); return true;
    // src/text/ccs/jump_multi2.asm:55 BRA @UNKNOWN2
    case 0xC16601: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/jump_multi2.asm:55 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC16600.
    case 0xC16602: cpu.execute_instruction<0x21>(0x0000A4, 2); return true;
    // src/text/ccs/jump_multi2.asm:57 LDY @LOCAL00
    case 0xC16603: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi2.asm:57 LDY @LOCAL00
    // Overlapping static entry reached from 0xC16602.
    case 0xC16604: cpu.execute_instruction<0x0E>(0x0000B9, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16605: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC16604.
    case 0xC16607: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16608: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1660A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1660D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:59 LDX @LOCAL01
    case 0xC1660F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:60 TXA
    case 0xC16611: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:61 ASL
    case 0xC16612: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:62 ASL
    case 0xC16613: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:63 CLC
    case 0xC16614: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:64 ADC @VIRTUAL06
    case 0xC16615: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:65 STA @VIRTUAL06
    case 0xC16617: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:66 STA __BSS_START__,Y
    case 0xC16619: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_multi2.asm:67 LDA @VIRTUAL06+2
    case 0xC1661C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:68 STA __BSS_START__+2,Y
    case 0xC1661E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi2.asm:69 LDA #NULL
    case 0xC16621: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump_multi2.asm:69 LDA #NULL
    // Overlapping static entry reached from 0xC16621.
    case 0xC16623: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_multi2.asm:71 END_C_FUNCTION
    case 0xC16624: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_multi2.asm:71 END_C_FUNCTION
    case 0xC16625: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/learn_special_psi.asm (source_named).
bool execute_text_ccs_learn_special_psi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/learn_special_psi.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15ED7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    case 0xC15ED9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC15ED9.
    case 0xC15EDB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/learn_special_psi.asm:5 CLC
    case 0xC15EDC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/learn_special_psi.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15EDD: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE2: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15EE6: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/learn_special_psi.asm:8 TXA
    case 0xC15EE8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/learn_special_psi.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC15EE9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/learn_special_psi.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15EEB: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/learn_special_psi.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC15EEE: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/learn_special_psi.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC15EF1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/learn_special_psi.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15EF3: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    case 0xC15EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D7, 2); else cpu.execute_instruction<0xA9>(0x005ED7, 3); return true;
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC15EF6.
    case 0xC15EF8: cpu.execute_instruction<0x5E>(0x000880, 3); return true;
    // src/text/ccs/learn_special_psi.asm:15 BRA @UNKNOWN3
    case 0xC15EF9: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/learn_special_psi.asm:17 TXA
    case 0xC15EFB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/learn_special_psi.asm:18 JSL LEARN_SPECIAL_PSI
    case 0xC15EFC: cpu.execute_instruction<0x22>(0xC22694, 4); return true;
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    case 0xC15F00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    // Overlapping static entry reached from 0xC15F00.
    case 0xC15F02: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/learn_special_psi.asm:21 RTS
    case 0xC15F03: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/load_string.asm (source_named).
bool execute_text_ccs_load_string_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/load_string.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17B68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/load_string.asm:4 TXA
    case 0xC17B6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/load_string.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC17B6B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/load_string.asm:6 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B6D: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/load_string.asm:7 STA TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC17B70: cpu.execute_instruction<0x9D>(0x009A8B, 3); return true;
    // src/text/ccs/load_string.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC17B73: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/load_string.asm:9 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17B75: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    case 0xC17B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FA, 2); else cpu.execute_instruction<0xA9>(0x007AFA, 3); return true;
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    // Overlapping static entry reached from 0xC17B78.
    case 0xC17B7A: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/ccs/load_string.asm:11 RTS
    case 0xC17B7B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/open_window.asm (source_named).
bool execute_text_ccs_open_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/open_window.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC147E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/open_window.asm:4 TXA
    case 0xC147E6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/open_window.asm:5 JSR CREATE_WINDOW
    case 0xC147E7: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/text/ccs/open_window.asm:6 LDA #NULL
    case 0xC147EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/open_window.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC147EA.
    case 0xC147EC: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/open_window.asm:7 RTS
    case 0xC147ED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_member_add.asm (source_named).
bool execute_text_ccs_party_member_add_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/party_member_add.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC161F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC161F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC161F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC161F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC161F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC161F5.
    case 0xC161F7: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC161F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC161F9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_member_add.asm:9 CPX #$0000
    case 0xC161FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/party_member_add.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC161F7.
    case 0xC161FB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/party_member_add.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC161FA.
    case 0xC161FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/party_member_add.asm:10 BEQ @ARG_IS_ZERO
    case 0xC161FD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/party_member_add.asm:11 TXA
    case 0xC161FF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_member_add.asm:12 BRA @ARG_IS_NONZERO
    case 0xC16200: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/party_member_add.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC16202: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/party_member_add.asm:15 LDA @VIRTUAL06
    case 0xC16205: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/party_member_add.asm:17 JSL ADD_CHAR_TO_PARTY
    case 0xC16207: cpu.execute_instruction<0x22>(0xC227C4, 4); return true;
    // src/text/ccs/party_member_add.asm:18 LDA #NULL
    case 0xC1620B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_member_add.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1620B.
    case 0xC1620D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/party_member_add.asm:19 PLD
    case 0xC1620E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/party_member_add.asm:20 RTS
    case 0xC1620F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_member_remove.asm (source_named).
bool execute_text_ccs_party_member_remove_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/party_member_remove.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16210: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC16212: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC16213: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC16214: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC16215: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16215.
    case 0xC16217: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC16218: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC16219: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_member_remove.asm:9 CPX #$0000
    case 0xC1621A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/party_member_remove.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC16217.
    case 0xC1621B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/party_member_remove.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC1621A.
    case 0xC1621C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/party_member_remove.asm:10 BEQ @ARG_IS_ZERO
    case 0xC1621D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/party_member_remove.asm:11 TXA
    case 0xC1621F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_member_remove.asm:12 BRA @ARG_IS_NONZERO
    case 0xC16220: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/party_member_remove.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC16222: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/party_member_remove.asm:15 LDA @VIRTUAL06
    case 0xC16225: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/party_member_remove.asm:17 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC16227: cpu.execute_instruction<0x22>(0xC228B3, 4); return true;
    // src/text/ccs/party_member_remove.asm:18 LDA #NULL
    case 0xC1622B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_member_remove.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC16281.
    case 0xC1622C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/party_member_remove.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1622B.
    case 0xC1622D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/party_member_remove.asm:19 PLD
    case 0xC1622E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/party_member_remove.asm:20 RTS
    case 0xC1622F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_selection_menu.asm (source_named).
bool execute_text_ccs_party_selection_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/party_selection_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC14A81: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14A83: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14A84: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14A85: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14A86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14A86.
    case 0xC14A88: cpu.execute_instruction<0xFF>(0xAD685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14A89: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14A8A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A8B: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14A88.
    case 0xC14A8C: cpu.execute_instruction<0x7E>(0x00C99A, 3); return true;
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    case 0xC14A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14A8C.
    case 0xC14A8F: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14A8E.
    case 0xC14A90: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/ccs/party_selection_menu.asm:12 BCS @UNKNOWN0
    case 0xC14A91: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/text/ccs/party_selection_menu.asm:13 TXA
    case 0xC14A93: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC14A94: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A96: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/party_selection_menu.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC14A99: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/party_selection_menu.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC14A9C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A9E: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/party_selection_menu.asm:19 LDA #.LOWORD(CC_1A_01)
    case 0xC14AA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x004A81, 3); return true;
    // src/text/ccs/party_selection_menu.asm:19 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC14AA1.
    case 0xC14AA3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:20 BRA @UNKNOWN1
    case 0xC14AA4: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/party_selection_menu.asm:22 LDY #1
    case 0xC14AA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/party_selection_menu.asm:22 LDY #1
    // Overlapping static entry reached from 0xC14AA6.
    case 0xC14AA8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/ccs/party_selection_menu.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    case 0xC14AA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x009A6E, 3); return true;
    // src/text/ccs/party_selection_menu.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    // Overlapping static entry reached from 0xC14AA9.
    case 0xC14AAB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:24 JSR UNKNOWN_C1244C
    case 0xC14AAC: cpu.execute_instruction<0x20>(0x002B2D, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/party_selection_menu.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC14AAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC14AB1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14AB3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14AB5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14AB7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14AB9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/party_selection_menu.asm:27 JSR SET_WORKING_MEMORY
    case 0xC14ABB: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/party_selection_menu.asm:28 LDA #NULL
    case 0xC14ABE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_selection_menu.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC14ABE.
    case 0xC14AC0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/party_selection_menu.asm:30 END_C_FUNCTION
    case 0xC14AC1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/party_selection_menu.asm:30 END_C_FUNCTION
    case 0xC14AC2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_selection_menu_uncancellable.asm (source_named).
bool execute_text_ccs_party_selection_menu_uncancellable_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:3 BEGIN_C_FUNCTION
    case 0xC14A3F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14A41: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14A42: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14A43: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14A44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14A44.
    case 0xC14A46: cpu.execute_instruction<0xFF>(0xAD685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14A47: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14A48: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A49: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14A46.
    case 0xC14A4A: cpu.execute_instruction<0x7E>(0x00C99A, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:11 CMP #16
    case 0xC14A4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14A4A.
    case 0xC14A4D: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14A4C.
    case 0xC14A4E: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:12 BCS @UNKNOWN0
    case 0xC14A4F: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:13 TXA
    case 0xC14A51: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC14A52: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A54: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC14A57: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC14A5A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A5C: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:19 LDA #.LOWORD(CC_1A_00)
    case 0xC14A5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x004A3F, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:19 LDA #.LOWORD(CC_1A_00)
    // Overlapping static entry reached from 0xC14A5F.
    case 0xC14A61: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:20 BRA @UNKNOWN1
    case 0xC14A62: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:22 LDY #0
    case 0xC14A64: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:22 LDY #0
    // Overlapping static entry reached from 0xC14A64.
    case 0xC14A66: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    case 0xC14A67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006E, 2); else cpu.execute_instruction<0xA9>(0x009A6E, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    // Overlapping static entry reached from 0xC14A67.
    case 0xC14A69: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:24 JSR UNKNOWN_C1244C
    case 0xC14A6A: cpu.execute_instruction<0x20>(0x002B2D, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC14A6D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC14A6F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A71: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A73: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A75: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14A77: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:27 JSR SET_WORKING_MEMORY
    case 0xC14A79: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:28 LDA #NULL
    case 0xC14A7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC14A7C.
    case 0xC14A7E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:30 END_C_FUNCTION
    case 0xC14A7F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:30 END_C_FUNCTION
    case 0xC14A80: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/pause.asm (source_named).
bool execute_text_ccs_pause_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/pause.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC152AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/pause.asm:4 TXA
    case 0xC152AD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/pause.asm:5 JSR UNKNOWN_C100D6
    case 0xC152AE: cpu.execute_instruction<0x20>(0x0002DC, 3); return true;
    // src/text/ccs/pause.asm:6 LDA #NULL
    case 0xC152B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/pause.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC152B1.
    case 0xC152B3: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/pause.asm:7 RTS
    case 0xC152B4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/play_music.asm (source_named).
bool execute_text_ccs_play_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/play_music.asm:3 BEGIN_C_FUNCTION
    case 0xC14B51: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14B53: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14B54: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14B55: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14B56: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14B56.
    case 0xC14B58: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14B59: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14B5A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:10 TXA
    case 0xC14B5B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:11 STA @LOCAL00
    case 0xC14B5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/play_music.asm:12 LDA #1
    case 0xC14B5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/play_music.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14B5E.
    case 0xC14B60: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/play_music.asm:13 CLC
    case 0xC14B61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B62: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14B65: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14B67: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14B69: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14B6B: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/play_music.asm:16 LDA @LOCAL00
    case 0xC14B6D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/play_music.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14B6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/play_music.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B71: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/play_music.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14B74: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/play_music.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14B77: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/play_music.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B79: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/play_music.asm:22 LDA #.LOWORD(CC_1F_00)
    case 0xC14B7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x004B51, 3); return true;
    // src/text/ccs/play_music.asm:22 LDA #.LOWORD(CC_1F_00)
    // Overlapping static entry reached from 0xC14B7C.
    case 0xC14B7E: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:23 BRA @UNKNOWN5
    case 0xC14B7F: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/ccs/play_music.asm:25 LDA @LOCAL00
    case 0xC14B81: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/play_music.asm:26 BEQ @UNKNOWN3
    case 0xC14B83: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/play_music.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xC14B85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/play_music.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xC14B87: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/play_music.asm:28 BRA @UNKNOWN4
    case 0xC14B89: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/play_music.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14B8B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/play_music.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC14B8E: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/play_music.asm:33 AND #$00FF
    case 0xC14B91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/play_music.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC14B91.
    case 0xC14B93: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/play_music.asm:34 TAX
    case 0xC14B94: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:35 LDA @VIRTUAL06
    case 0xC14B95: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/play_music.asm:36 JSL UNKNOWN_C216AD
    case 0xC14B97: cpu.execute_instruction<0x22>(0xC21555, 4); return true;
    // src/text/ccs/play_music.asm:37 LDA #NULL
    case 0xC14B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/play_music.asm:37 LDA #NULL
    // Overlapping static entry reached from 0xC14B9B.
    case 0xC14B9D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/play_music.asm:39 END_C_FUNCTION
    case 0xC14B9E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/play_music.asm:39 END_C_FUNCTION
    case 0xC14B9F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/play_sfx.asm (source_named).
bool execute_text_ccs_play_sfx_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/play_sfx.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14BAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC14BAD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC14BAE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC14BAF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC14BB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14BB0.
    case 0xC14BB2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC14BB3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC14BB4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/play_sfx.asm:9 TXA
    case 0xC14BB5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/play_sfx.asm:10 BEQ @UNKNOWN0
    case 0xC14BB6: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/play_sfx.asm:11 STORE_INT1632 $06
    case 0xC14BB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/play_sfx.asm:11 STORE_INT1632 $06
    case 0xC14BBA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/play_sfx.asm:12 BRA @UNKNOWN1
    case 0xC14BBC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/play_sfx.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC14BBE: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/play_sfx.asm:16 LDA @VIRTUAL06
    case 0xC14BC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/play_sfx.asm:17 JSL PLAY_SOUND_AND_UNKNOWN
    case 0xC14BC3: cpu.execute_instruction<0x22>(0xC21578, 4); return true;
    // src/text/ccs/play_sfx.asm:18 LDA #NULL
    case 0xC14BC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/play_sfx.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC14BC7.
    case 0xC14BC9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/play_sfx.asm:19 PLD
    case 0xC14BCA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/play_sfx.asm:20 RTS
    case 0xC14BCB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_character.asm (source_named).
bool execute_text_ccs_print_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_character.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14C8D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14C8F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14C90: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14C91: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14C92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14C92.
    case 0xC14C94: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14C95: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14C96: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_character.asm:9 CPX #$0000
    case 0xC14C97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_character.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14C94.
    case 0xC14C98: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_character.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14C97.
    case 0xC14C99: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_character.asm:10 BEQ @UNKNOWN0
    case 0xC14C9A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_character.asm:11 TXA
    case 0xC14C9C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_character.asm:12 BRA @UNKNOWN1
    case 0xC14C9D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_character.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC14C9F: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_character.asm:15 LDA @VIRTUAL06
    case 0xC14CA2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_character.asm:17 JSR PRINT_LETTER
    case 0xC14CA4: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/ccs/print_character.asm:18 LDA #NULL
    case 0xC14CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_character.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC14CA7.
    case 0xC14CA9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_character.asm:19 PLD
    case 0xC14CAA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_character.asm:20 RTS
    case 0xC14CAB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_character_name-jp.asm (source_named).
bool execute_text_ccs_print_character_name_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_character_name-jp.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC153C4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    case 0xC153C6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    case 0xC153C7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    case 0xC153C8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    case 0xC153C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC153C9.
    case 0xC153CB: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    case 0xC153CC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_character_name-jp.asm:8 END_STACK_VARS
    case 0xC153CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_character_name-jp.asm:9 CPX #$0000
    case 0xC153CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_character_name-jp.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC153CB.
    case 0xC153CF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_character_name-jp.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC153CE.
    case 0xC153D0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_character_name-jp.asm:10 BEQ @UNKNOWN1
    case 0xC153D1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_character_name-jp.asm:11 TXA
    case 0xC153D3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_character_name-jp.asm:12 BRA @UNKNOWN2
    case 0xC153D4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_character_name-jp.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC153D6: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_character_name-jp.asm:15 LDA @VIRTUAL06
    case 0xC153D9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_character_name-jp.asm:17 JSR UNKNOWN_C1931B
    case 0xC153DB: cpu.execute_instruction<0x20>(0x00940D, 3); return true;
    // src/text/ccs/print_character_name-jp.asm:18 LDA #NULL
    case 0xC153DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_character_name-jp.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC153DE.
    case 0xC153E0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_character_name-jp.asm:19 PLD
    case 0xC153E1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_character_name-jp.asm:20 RTS
    case 0xC153E2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_horizontal_strings.asm (source_named).
bool execute_text_ccs_print_horizontal_strings_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_horizontal_strings.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC149CE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC149D0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC149D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC149D2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC149D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC149D3.
    case 0xC149D5: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC149D6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC149D7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_horizontal_strings.asm:9 CPX #$0000
    case 0xC149D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC149D5.
    case 0xC149D9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC149D8.
    case 0xC149DA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:10 BEQ @UNKNOWN0
    case 0xC149DB: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:11 TXA
    case 0xC149DD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_horizontal_strings.asm:12 BRA @UNKNOWN1
    case 0xC149DE: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC149E0: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:15 LDA @VIRTUAL06
    case 0xC149E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:17 LDY #$0000
    case 0xC149E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC149E5.
    case 0xC149E7: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:18 LDX #$0001
    case 0xC149E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:18 LDX #$0001
    // Overlapping static entry reached from 0xC149E8.
    case 0xC149EA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:19 JSR UNKNOWN_C1180D
    case 0xC149EB: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:20 LDA #NULL
    case 0xC149EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:20 LDA #NULL
    // Overlapping static entry reached from 0xC149EE.
    case 0xC149F0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:21 PLD
    case 0xC149F1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_horizontal_strings.asm:22 RTS
    case 0xC149F2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_item_name.asm (source_named).
bool execute_text_ccs_print_item_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_item_name.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14AC3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC14AC5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC14AC6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC14AC7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC14AC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14AC8.
    case 0xC14ACA: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC14ACB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC14ACC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_item_name.asm:9 CPX #$0000
    case 0xC14ACD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_item_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14ACA.
    case 0xC14ACE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_item_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14ACD.
    case 0xC14ACF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_item_name.asm:10 BEQ @UNKNOWN0
    case 0xC14AD0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_item_name.asm:11 TXA
    case 0xC14AD2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_item_name.asm:12 BRA @UNKNOWN1
    case 0xC14AD3: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_item_name.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC14AD5: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_item_name.asm:15 LDA @VIRTUAL06
    case 0xC14AD8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_item_name.asm:17 JSR UNKNOWN_C19216
    case 0xC14ADA: cpu.execute_instruction<0x20>(0x009309, 3); return true;
    // src/text/ccs/print_item_name.asm:18 LDA #NULL
    case 0xC14ADD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_item_name.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC14ADD.
    case 0xC14ADF: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_item_name.asm:19 PLD
    case 0xC14AE0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_item_name.asm:20 RTS
    case 0xC14AE1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_money_amount.asm (source_named).
bool execute_text_ccs_print_money_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_money_amount.asm:3 BEGIN_C_FUNCTION
    case 0xC157EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC157F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC157F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC157F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC157F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC157F4.
    case 0xC157F6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC157F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC157F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:11 TXA
    case 0xC157F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:12 STA @LOCAL01
    case 0xC157FA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/print_money_amount.asm:13 LDA #3
    case 0xC157FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/print_money_amount.asm:13 LDA #3
    // Overlapping static entry reached from 0xC157FC.
    case 0xC157FE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/print_money_amount.asm:14 CLC
    case 0xC157FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15800: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15803: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15805: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15807: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15809: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/print_money_amount.asm:17 LDA @LOCAL01
    case 0xC1580B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/print_money_amount.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1580D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1580F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/print_money_amount.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15812: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/print_money_amount.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15815: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15817: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/print_money_amount.asm:23 LDA #.LOWORD(CC_1C_0B)
    case 0xC1581A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0057EF, 3); return true;
    // src/text/ccs/print_money_amount.asm:23 LDA #.LOWORD(CC_1C_0B)
    // Overlapping static entry reached from 0xC1581A.
    case 0xC1581C: cpu.execute_instruction<0x57>(0x00004C, 2); return true;
    // src/text/ccs/print_money_amount.asm:24 JMP @UNKNOWN5
    case 0xC1581D: cpu.execute_instruction<0x4C>(0x0058D2, 3); return true;
    // src/text/ccs/print_money_amount.asm:24 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC1581C.
    case 0xC1581E: cpu.execute_instruction<0xD2>(0x000058, 2); return true;
    // src/text/ccs/print_money_amount.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15820: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/print_money_amount.asm:27 LDY #24
    case 0xC15822: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15824: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15822.
    case 0xC15825: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15826: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15825.
    case 0xC15827: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15828: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15827.
    case 0xC15829: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:29 JSL ASL32_ENTRY2
    case 0xC1582A: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC1582E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC15830: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC15831: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC15833: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:31 LDY #16
    case 0xC15834: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/print_money_amount.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15836: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15834.
    case 0xC15837: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15838: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15837.
    case 0xC1583A: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1583B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1583D: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1583F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15841: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_money_amount.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15843: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:35 JSL ASL32_ENTRY2
    case 0xC15845: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC15849: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC1584B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC1584C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC1584E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:37 LDY #8
    case 0xC1584F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/print_money_amount.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15851: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1584F.
    case 0xC15852: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15853: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15852.
    case 0xC15855: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15856: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15858: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1585A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1585C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_money_amount.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC1585E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:41 JSL ASL32_ENTRY2
    case 0xC15860: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15864: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15866: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15868: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1586A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/print_money_amount.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC1586C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1586E: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15871: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15873: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15875: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15877: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_money_amount.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15879: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1587B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1587D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1587F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15881: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15883: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15885: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC15887: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC15888: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC1588A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC1588B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1588D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1588F: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15891: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15893: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15895: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15897: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC15899: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC1589A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC1589C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC1589D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1589F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC158A1: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC158A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC158A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC158A7: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC158A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC158AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC158AB.
    case 0xC158AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC158AE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC158B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC158B0.
    case 0xC158B2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC158B3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC158B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC158B7: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC158B9: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC158BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC158BD: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/print_money_amount.asm:53 BNE @UNKNOWN4
    case 0xC158BF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/print_money_amount.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC158C1: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC158C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC158C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC158C8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC158CA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/print_money_amount.asm:58 JSR UNKNOWN_C11404
    case 0xC158CC: cpu.execute_instruction<0x20>(0x001404, 3); return true;
    // src/text/ccs/print_money_amount.asm:62 LDA #NULL
    case 0xC158CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_money_amount.asm:62 LDA #NULL
    // Overlapping static entry reached from 0xC158CF.
    case 0xC158D1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_money_amount.asm:64 END_C_FUNCTION
    case 0xC158D2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_money_amount.asm:64 END_C_FUNCTION
    case 0xC158D3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_number.asm (source_named).
bool execute_text_ccs_print_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_number.asm:3 BEGIN_C_FUNCTION
    case 0xC15669: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC1566B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC1566C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC1566D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC1566E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1566E.
    case 0xC15670: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC15671: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC15672: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:11 TXA
    case 0xC15673: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:12 STA @LOCAL01
    case 0xC15674: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/print_number.asm:13 LDA #3
    case 0xC15676: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/print_number.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15676.
    case 0xC15678: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/print_number.asm:14 CLC
    case 0xC15679: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1567A: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1567D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1567F: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15681: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15683: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/print_number.asm:17 LDA @LOCAL01
    case 0xC15685: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/print_number.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15687: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15689: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/print_number.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1568C: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/print_number.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1568F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15691: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/print_number.asm:23 LDA #.LOWORD(CC_1C_0A)
    case 0xC15694: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000069, 2); else cpu.execute_instruction<0xA9>(0x005669, 3); return true;
    // src/text/ccs/print_number.asm:23 LDA #.LOWORD(CC_1C_0A)
    // Overlapping static entry reached from 0xC15694.
    case 0xC15696: cpu.execute_instruction<0x56>(0x00004C, 2); return true;
    // src/text/ccs/print_number.asm:24 JMP @UNKNOWN5
    case 0xC15697: cpu.execute_instruction<0x4C>(0x00574C, 3); return true;
    // src/text/ccs/print_number.asm:24 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC15696.
    case 0xC15698: cpu.execute_instruction<0x4C>(0x00E257, 3); return true;
    // src/text/ccs/print_number.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC1569A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/print_number.asm:27 LDY #24
    case 0xC1569C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1569E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1569C.
    case 0xC1569F: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC156A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1569F.
    case 0xC156A1: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC156A2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC156A1.
    case 0xC156A3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:29 JSL ASL32_ENTRY2
    case 0xC156A4: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC156A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC156AA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC156AB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC156AD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:31 LDY #16
    case 0xC156AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/print_number.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC156B0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC156AE.
    case 0xC156B1: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC156B2: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC156B1.
    case 0xC156B4: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC156B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC156B7: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC156B9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC156BB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_number.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC156BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:35 JSL ASL32_ENTRY2
    case 0xC156BF: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC156C3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC156C5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC156C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC156C8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:37 LDY #8
    case 0xC156C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/print_number.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC156CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC156C9.
    case 0xC156CC: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC156CD: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC156CC.
    case 0xC156CF: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC156D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC156D2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC156D4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC156D6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_number.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC156D8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:41 JSL ASL32_ENTRY2
    case 0xC156DA: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC156DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC156E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC156E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC156E4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/print_number.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC156E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC156E8: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC156EB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC156ED: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC156EF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC156F1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_number.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC156F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC156F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC156F7: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC156F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC156FB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC156FD: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC156FF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC15701: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC15702: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC15704: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC15705: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15707: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15709: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1570B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1570D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1570F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15711: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC15713: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC15714: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC15716: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC15717: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15719: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1571B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1571D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1571F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15721: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15723: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15725: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15725.
    case 0xC15727: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15728: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1572A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1572A.
    case 0xC1572C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1572D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1572F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15731: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15733: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15735: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15737: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/print_number.asm:53 BNE @UNKNOWN4
    case 0xC15739: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/print_number.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC1573B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1573E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15740: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15742: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15744: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/print_number.asm:57 JSR PRINT_NUMBER
    case 0xC15746: cpu.execute_instruction<0x20>(0x001344, 3); return true;
    // src/text/ccs/print_number.asm:58 LDA #NULL
    case 0xC15749: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_number.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15749.
    case 0xC1574B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_number.asm:60 END_C_FUNCTION
    case 0xC1574C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_number.asm:60 END_C_FUNCTION
    case 0xC1574D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_psi_name.asm (source_named).
bool execute_text_ccs_print_psi_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_psi_name.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16450: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC16452: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC16453: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC16454: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC16455: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16455.
    case 0xC16457: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC16458: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC16459: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_psi_name.asm:9 CPX #$0000
    case 0xC1645A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_psi_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC16457.
    case 0xC1645B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_psi_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC1645A.
    case 0xC1645C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_psi_name.asm:10 BEQ @ARG_IS_ZERO
    case 0xC1645D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_psi_name.asm:11 TXA
    case 0xC1645F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_psi_name.asm:12 BRA @ARG_IS_NONZERO
    case 0xC16460: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_psi_name.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC16462: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_psi_name.asm:15 LDA @VIRTUAL06
    case 0xC16465: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_psi_name.asm:17 JSR UNKNOWN_C1CA06
    case 0xC16467: cpu.execute_instruction<0x20>(0x00C810, 3); return true;
    // src/text/ccs/print_psi_name.asm:18 LDA #NULL
    case 0xC1646A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_psi_name.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1646A.
    case 0xC1646C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_psi_name.asm:19 PLD
    case 0xC1646D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_psi_name.asm:20 RTS
    case 0xC1646E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_special_graphics.asm (source_named).
bool execute_text_ccs_print_special_graphics_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_special_graphics.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC147DA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/print_special_graphics.asm:4 TXA
    case 0xC147DC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_special_graphics.asm:5 JSR UNKNOWN_C10EE3
    case 0xC147DD: cpu.execute_instruction<0x20>(0x0014C4, 3); return true;
    // src/text/ccs/print_special_graphics.asm:6 LDA #NULL
    case 0xC147E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_special_graphics.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC147E0.
    case 0xC147E2: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/print_special_graphics.asm:7 RTS
    case 0xC147E3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_stat.asm (source_named).
bool execute_text_ccs_print_stat_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_stat.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC144F2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC144F4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC144F5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC144F6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC144F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC144F7.
    case 0xC144F9: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC144FA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC144FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_stat.asm:9 CPX #$0000
    case 0xC144FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_stat.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC144F9.
    case 0xC144FD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_stat.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC144FC.
    case 0xC144FE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_stat.asm:10 BEQ @UNKNOWN0
    case 0xC144FF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_stat.asm:11 TXA
    case 0xC14501: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_stat.asm:12 BRA @UNKNOWN1
    case 0xC14502: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_stat.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC14504: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_stat.asm:15 LDA @VIRTUAL06
    case 0xC14507: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_stat.asm:17 JSR UNKNOWN_C19249
    case 0xC14509: cpu.execute_instruction<0x20>(0x00933C, 3); return true;
    // src/text/ccs/print_stat.asm:18 LDA #NULL
    case 0xC1450C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_stat.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1450C.
    case 0xC1450E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_stat.asm:19 PLD
    case 0xC1450F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_stat.asm:20 RTS
    case 0xC14510: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_teleport_destination_name.asm (source_named).
bool execute_text_ccs_print_teleport_destination_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:3 BEGIN_C_FUNCTION
    case 0xC14AE2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14AE7.
    case 0xC14AE9: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AEA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC14AEB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    case 0xC14AEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC14AE9.
    case 0xC14AED: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC14AEC.
    case 0xC14AEE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:12 BEQ @UNKNOWN0
    case 0xC14AEF: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:13 TXA
    case 0xC14AF1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:14 STA @LOCAL01
    case 0xC14AF2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:15 BRA @UNKNOWN1
    case 0xC14AF4: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:17 JSR GET_ARGUMENT_MEMORY
    case 0xC14AF6: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:18 LDA @VIRTUAL06
    case 0xC14AF9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:19 STA @LOCAL01
    case 0xC14AFB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14AFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00899E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14AFD.
    case 0xC14AFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14B00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14AFF.
    case 0xC14B01: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14B02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14B01.
    case 0xC14B03: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14B02.
    case 0xC14B04: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14B05: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:22 LDA @LOCAL01
    case 0xC14B07: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:589 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:590 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:591 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B0B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:592 ASL
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14B0C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:24 CLC
    case 0xC14B0D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:25 ADC @VIRTUAL06
    case 0xC14B0E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:26 STA @VIRTUAL06
    case 0xC14B10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:27 STA @LOCAL00
    case 0xC14B12: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:28 LDA @VIRTUAL06+2
    case 0xC14B14: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:29 STA @LOCAL00+2
    case 0xC14B16: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    case 0xC14B18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC14B18.
    case 0xC14B1A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:32 JSR PRINT_STRING
    case 0xC14B1B: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    case 0xC14B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14B1E.
    case 0xC14B20: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14B21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14B22: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_vertical_strings.asm (source_named).
bool execute_text_ccs_print_vertical_strings_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_vertical_strings.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15E26: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15E28: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15E29: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15E2A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15E2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC15E2B.
    case 0xC15E2D: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15E2E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15E2F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:9 CPX #$0000
    case 0xC15E30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15E2D.
    case 0xC15E31: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15E30.
    case 0xC15E32: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:10 BEQ @ARG_IS_ZERO
    case 0xC15E33: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:11 TXA
    case 0xC15E35: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:12 BRA @ARG_IS_NONZERO
    case 0xC15E36: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC15E38: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:15 LDA @VIRTUAL06
    case 0xC15E3B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:17 LDY #$0000
    case 0xC15E3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC15E3D.
    case 0xC15E3F: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:18 TYX
    case 0xC15E40: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:19 JSR UNKNOWN_C1180D
    case 0xC15E41: cpu.execute_instruction<0x20>(0x001FA6, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:20 LDA #NULL
    case 0xC15E44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:20 LDA #NULL
    // Overlapping static entry reached from 0xC15E44.
    case 0xC15E46: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:21 PLD
    case 0xC15E47: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:22 RTS
    case 0xC15E48: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_hp_by_amount.asm (source_named).
bool execute_text_ccs_recover_hp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_hp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14E50: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E52: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E53: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E54: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14E55.
    case 0xC14E57: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E58: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14E59: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14E5A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14E57.
    case 0xC14E5B: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:10 LDA #$0001
    case 0xC14E5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14E5C.
    case 0xC14E5E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:11 CLC
    case 0xC14E5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E60: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E63: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E65: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E67: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14E69: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14E6B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14E6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E6F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14E72: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14E75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14E77: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_02)
    case 0xC14E7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x004E50, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC14E7A.
    case 0xC14E7C: cpu.execute_instruction<0x4E>(0x001C80, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14E7D: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14E7F: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:24 AND #$00FF
    case 0xC14E82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14E82.
    case 0xC14E84: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:25 TAX
    case 0xC14E85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14E86: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:27 TXA
    case 0xC14E88: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14E89: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14E8B: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14E8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:33 LDY #$0001
    case 0xC14E90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14E90.
    case 0xC14E92: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14E93: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:35 JSR RECOVER_HP_AMTPERCENT
    case 0xC14E95: cpu.execute_instruction<0x20>(0x009014, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:36 LDA #NULL
    case 0xC14E98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14E98.
    case 0xC14E9A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:38 PLD
    case 0xC14E9B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:39 RTS
    case 0xC14E9C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_hp_by_percent.asm (source_named).
bool execute_text_ccs_recover_hp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_hp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14DB6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14DB8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14DB9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14DBA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14DBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14DBB.
    case 0xC14DBD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14DBE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14DBF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14DC0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14DBD.
    case 0xC14DC1: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:10 LDA #$0001
    case 0xC14DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14DC2.
    case 0xC14DC4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:11 CLC
    case 0xC14DC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14DC6: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14DC9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14DCB: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14DCD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14DCF: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14DD1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14DD3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14DD5: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14DD8: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14DDB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14DDD: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_00)
    case 0xC14DE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x004DB6, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC14DE0.
    case 0xC14DE2: cpu.execute_instruction<0x4D>(0x001C80, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14DE3: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14DE5: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    case 0xC14DE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14DE8.
    case 0xC14DEA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:25 TAX
    case 0xC14DEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14DEC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:27 TXA
    case 0xC14DEE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14DEF: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14DF1: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14DF4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:33 LDY #$0000
    case 0xC14DF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14DF6.
    case 0xC14DF8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14DF9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:35 JSR RECOVER_HP_AMTPERCENT
    case 0xC14DFB: cpu.execute_instruction<0x20>(0x009014, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:36 LDA #NULL
    case 0xC14DFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14DFE.
    case 0xC14E00: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:38 PLD
    case 0xC14E01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:39 RTS
    case 0xC14E02: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_pp_by_amount.asm (source_named).
bool execute_text_ccs_recover_pp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:3 BEGIN_C_FUNCTION
    case 0xC14F84: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F86: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F87: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F88: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14F89.
    case 0xC14F8B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F8C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14F8D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:10 STX @LOCAL00
    case 0xC14F8E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC14F8B.
    case 0xC14F8F: cpu.execute_instruction<0x0E>(0x0001A9, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:11 LDA #1
    case 0xC14F90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:11 LDA #1
    // Overlapping static entry reached from 0xC14F90.
    case 0xC14F92: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:12 CLC
    case 0xC14F93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F94: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F97: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F99: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F9B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14F9D: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:15 TXA
    case 0xC14F9F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14FA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FA2: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14FA5: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14FA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14FAA: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:21 LDA #.LOWORD(CC_1E_06)
    case 0xC14FAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x004F84, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:21 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC14FAD.
    case 0xC14FAF: cpu.execute_instruction<0x4F>(0xAD1D80, 4); return true;
    // src/text/ccs/recover_pp_by_amount.asm:22 BRA @UNKNOWN5
    case 0xC14FB0: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:24 LDA CC_ARGUMENT_STORAGE
    case 0xC14FB2: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:24 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14FAF.
    case 0xC14FB3: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    case 0xC14FB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC14FB3.
    case 0xC14FB6: cpu.execute_instruction<0xFF>(0x05F000, 4); return true;
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC14FB5.
    case 0xC14FB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14FB8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:27 AND #$00FF
    case 0xC14FBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14FBA.
    case 0xC14FBC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14FBD: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14FBF: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14FC2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:33 LDY #1
    case 0xC14FC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:33 LDY #1
    // Overlapping static entry reached from 0xC14FC4.
    case 0xC14FC6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:34 LDX @LOCAL00
    case 0xC14FC7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:35 JSR RECOVER_PP_AMTPERCENT
    case 0xC14FC9: cpu.execute_instruction<0x20>(0x0090C6, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:36 LDA #NULL
    case 0xC14FCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14FCC.
    case 0xC14FCE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:38 END_C_FUNCTION
    case 0xC14FCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:38 END_C_FUNCTION
    case 0xC14FD0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_pp_by_percent.asm (source_named).
bool execute_text_ccs_recover_pp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_pp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14EEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14EEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14EED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14EEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14EEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14EEF.
    case 0xC14EF1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14EF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14EF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14EF4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14EF1.
    case 0xC14EF5: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:10 LDA #$0001
    case 0xC14EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14EF6.
    case 0xC14EF8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:11 CLC
    case 0xC14EF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14EFA: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14EFD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14EFF: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F01: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14F03: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14F05: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14F07: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F09: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14F0C: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14F0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14F11: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_04)
    case 0xC14F14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x004EEA, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_04)
    // Overlapping static entry reached from 0xC14F14.
    case 0xC14F16: cpu.execute_instruction<0x4E>(0x001C80, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14F17: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14F19: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:24 AND #$00FF
    case 0xC14F1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14F1C.
    case 0xC14F1E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:25 TAX
    case 0xC14F1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14F20: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:27 TXA
    case 0xC14F22: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14F23: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14F25: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14F28: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:33 LDY #$0000
    case 0xC14F2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14F2A.
    case 0xC14F2C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14F2D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:35 JSR RECOVER_PP_AMTPERCENT
    case 0xC14F2F: cpu.execute_instruction<0x20>(0x0090C6, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:36 LDA #NULL
    case 0xC14F32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14F32.
    case 0xC14F34: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:38 PLD
    case 0xC14F35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:39 RTS
    case 0xC14F36: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/screen_reload_pointer.asm (source_named).
bool execute_text_ccs_screen_reload_pointer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:3 BEGIN_C_FUNCTION
    case 0xC17067: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC17069: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1706C.
    case 0xC1706E: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC1706F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC17070: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:11 TXA
    case 0xC17071: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:12 STA @LOCAL01
    case 0xC17072: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:13 LDA #3
    case 0xC17074: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:13 LDA #3
    // Overlapping static entry reached from 0xC17074.
    case 0xC17076: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:14 CLC
    case 0xC17077: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17078: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1707B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1707D: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1707F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17081: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:17 LDA @LOCAL01
    case 0xC17083: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC17085: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17087: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1708A: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1708D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1708F: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC170AD.
    case 0xC17091: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:23 LDA #.LOWORD(CC_1F_63)
    case 0xC17092: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000067, 2); else cpu.execute_instruction<0xA9>(0x007067, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:23 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC17092.
    case 0xC17094: cpu.execute_instruction<0x70>(0x00004C, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:24 JMP @UNKNOWN3
    case 0xC17095: cpu.execute_instruction<0x4C>(0x00713C, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC17094.
    case 0xC17096: cpu.execute_instruction<0x3C>(0x00E271, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC17098: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC17096.
    case 0xC17099: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:27 LDY #24
    case 0xC1709A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:27 LDY #24
    // Overlapping static entry reached from 0xC17099.
    case 0xC1709B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1709C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1709A.
    case 0xC1709D: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1709E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1709D.
    case 0xC1709F: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC170A0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1709F.
    case 0xC170A1: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:29 JSL ASL32_ENTRY2
    case 0xC170A2: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170A9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC170AB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:31 LDY #16
    case 0xC170AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:31 LDY #16
    // Overlapping static entry reached from 0xC1456B.
    case 0xC170AD: cpu.execute_instruction<0x10>(0x0000E2, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC170AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC170AC.
    case 0xC170AF: cpu.execute_instruction<0x20>(0x0070AD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B0: cpu.execute_instruction<0xAD>(0x009A70, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC170AF.
    case 0xC170B2: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B5: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC170B9: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC170BB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:35 JSL ASL32_ENTRY2
    case 0xC170BD: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC170C6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:37 LDY #8
    case 0xC170C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC170C9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC170C7.
    case 0xC170CA: cpu.execute_instruction<0x20>(0x006FAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170CB: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC170CA.
    case 0xC170CD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170D0: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170D2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC170D4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC170D6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:41 JSL ASL32_ENTRY2
    case 0xC170D8: cpu.execute_instruction<0x22>(0xC09228, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170DC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170E0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC170E2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC170E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170E6: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170EB: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170ED: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC170EF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC170F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F5: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170FB: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC170FD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC170FF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC17100: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC17102: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC17103: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17105: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17107: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17109: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1710B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1710D: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1710F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17111: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17112: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17114: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC17115: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17117: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17119: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1711B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1711D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1711F: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17121: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:51 LDA #$00FF
    case 0xC17123: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:51 LDA #$00FF
    // Overlapping static entry reached from 0xC17123.
    case 0xC17125: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:52 JSL UNKNOWN_C46594
    case 0xC17126: cpu.execute_instruction<0x22>(0xC44302, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1712A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1712C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1712E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17130: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:54 LDA #10
    case 0xC17132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:54 LDA #10
    // Overlapping static entry reached from 0xC17132.
    case 0xC17134: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:55 JSL UNKNOWN_C064E3
    case 0xC17135: cpu.execute_instruction<0x22>(0xC06711, 4); return true;
    // src/text/ccs/screen_reload_pointer.asm:56 LDA #NULL
    case 0xC17139: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:56 LDA #NULL
    // Overlapping static entry reached from 0xC17139.
    case 0xC1713B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:58 END_C_FUNCTION
    case 0xC1713C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:58 END_C_FUNCTION
    case 0xC1713D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_argmem.asm (source_named).
bool execute_text_ccs_set_argmem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_argmem.asm:3 BEGIN_C_FUNCTION
    case 0xC15E49: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15E4E.
    case 0xC15E50: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E51: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15E52: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:12 TXA
    case 0xC15E53: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:13 STA @LOCAL02
    case 0xC15E54: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:14 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E56: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/set_argmem.asm:15 BNE @UNKNOWN0
    case 0xC15E59: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:16 LDA @LOCAL02
    case 0xC15E5B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15E5D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E5F: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_argmem.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15E62: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_argmem.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15E65: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15E67: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_argmem.asm:22 LDA #.LOWORD(CC_1D_15)
    case 0xC15E6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000049, 2); else cpu.execute_instruction<0xA9>(0x005E49, 3); return true;
    // src/text/ccs/set_argmem.asm:22 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC15E6A.
    case 0xC15E6C: cpu.execute_instruction<0x5E>(0x004480, 3); return true;
    // src/text/ccs/set_argmem.asm:23 BRA @UNKNOWN2
    case 0xC15E6D: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/set_argmem.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC15E6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:26 LDA #8
    case 0xC15E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/set_argmem.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC15E73: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_argmem.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC15E71.
    case 0xC15E74: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/set_argmem.asm:28 TAY
    case 0xC15E75: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC15E76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:30 LDA @LOCAL02
    case 0xC15E78: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:31 JSL ASL16_ENTRY2
    case 0xC15E7A: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_argmem.asm:32 STA @VIRTUAL02
    case 0xC15E7E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_argmem.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC15E80: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_argmem.asm:34 AND #$00FF
    case 0xC15E83: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_argmem.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC15E83.
    case 0xC15E85: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_argmem.asm:35 ORA @VIRTUAL02
    case 0xC15E86: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_argmem.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC15E88: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_argmem.asm:37 TAX
    case 0xC15E8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:38 STX @LOCAL01
    case 0xC15E8B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/set_argmem.asm:39 BNE @UNKNOWN1
    case 0xC15E8D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/set_argmem.asm:40 JSR GET_ARGUMENT_MEMORY
    case 0xC15E8F: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_argmem.asm:42 JSL UNKNOWN_C226F0
    case 0xC15E92: cpu.execute_instruction<0x22>(0xC225AB, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:43 STORE_INT1632 @VIRTUAL0A
    case 0xC15E96: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:43 STORE_INT1632 @VIRTUAL0A
    case 0xC15E98: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/text/ccs/set_argmem.asm:44 LDX @LOCAL01
    case 0xC15E9A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/set_argmem.asm:45 TXA
    case 0xC15E9C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:46 STORE_INT1632 @VIRTUAL06
    case 0xC15E9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:46 STORE_INT1632 @VIRTUAL06
    case 0xC15E9F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_argmem.asm:47 JSL MULT32
    case 0xC15EA1: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EA5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EA7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EA9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15EAB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/set_argmem.asm:49 JSR SET_WORKING_MEMORY
    case 0xC15EAD: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/ccs/set_argmem.asm:50 LDA #NULL
    case 0xC15EB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_argmem.asm:50 LDA #NULL
    // Overlapping static entry reached from 0xC15EB0.
    case 0xC15EB2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_argmem.asm:52 END_C_FUNCTION
    case 0xC15EB3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_argmem.asm:52 END_C_FUNCTION
    case 0xC15EB4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_direction.asm (source_named).
bool execute_text_ccs_set_character_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC1667C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC1667E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC1667F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16680: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16681: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16681.
    case 0xC16683: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16684: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16685: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:10 TXA
    case 0xC16686: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:11 STA @LOCAL00
    case 0xC16687: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_character_direction.asm:12 LDA #1
    case 0xC16689: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_direction.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16689.
    case 0xC1668B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_direction.asm:13 CLC
    case 0xC1668C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1668D: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16690: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16692: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16694: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16696: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/set_character_direction.asm:16 LDA @LOCAL00
    case 0xC16698: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_character_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1669A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1669C: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC1669F: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC166A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC166A4: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_direction.asm:22 LDA #.LOWORD(CC_1F_13)
    case 0xC166A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00667C, 3); return true;
    // src/text/ccs/set_character_direction.asm:22 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC166A7.
    case 0xC166A9: cpu.execute_instruction<0x66>(0x000080, 2); return true;
    // src/text/ccs/set_character_direction.asm:23 BRA @UNKNOWN7
    case 0xC166AA: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/set_character_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC166A9.
    case 0xC166AB: cpu.execute_instruction<0x3F>(0x9A6EAD, 4); return true;
    // src/text/ccs/set_character_direction.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC166AC: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_direction.asm:26 AND #$00FF
    case 0xC166AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_direction.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC166AF.
    case 0xC166B1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/set_character_direction.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC166B2: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/ccs/set_character_direction.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC166B4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166B6: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166B9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166BB: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166BD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166BF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/set_character_direction.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC166C1: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_character_direction.asm:32 JSR GET_WORKING_MEMORY
    case 0xC166C3: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/set_character_direction.asm:32 JSR GET_WORKING_MEMORY
    // Overlapping static entry reached from 0xC1671A.
    case 0xC166C5: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/text/ccs/set_character_direction.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC166C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:34 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC166C5.
    case 0xC166C7: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // src/text/ccs/set_character_direction.asm:35 LDA @VIRTUAL06
    case 0xC166C8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_character_direction.asm:36 STA @VIRTUAL00
    case 0xC166CA: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/set_character_direction.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC166CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:38 LDA @LOCAL00
    case 0xC166CE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_character_direction.asm:39 BEQ @ARG_2_IS_ZERO
    case 0xC166D0: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_character_direction.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC166D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_character_direction.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC166D4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_character_direction.asm:41 BRA @ARG_2_IS_NONZERO
    case 0xC166D6: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_character_direction.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC166D8: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_character_direction.asm:45 LDA @VIRTUAL06
    case 0xC166DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_character_direction.asm:46 TAX
    case 0xC166DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:47 DEX
    case 0xC166DE: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:48 LDA @VIRTUAL00
    case 0xC166DF: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/set_character_direction.asm:49 AND #$00FF
    case 0xC166E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_direction.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC166E1.
    case 0xC166E3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_character_direction.asm:50 JSL UNKNOWN_C46363
    case 0xC166E4: cpu.execute_instruction<0x22>(0xC440BF, 4); return true;
    // src/text/ccs/set_character_direction.asm:51 LDA #NULL
    case 0xC166E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_direction.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC166E8.
    case 0xC166EA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_direction.asm:53 END_C_FUNCTION
    case 0xC166EB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_direction.asm:53 END_C_FUNCTION
    case 0xC166EC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_invisibility.asm (source_named).
bool execute_text_ccs_set_character_invisibility_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_invisibility.asm:3 BEGIN_C_FUNCTION
    case 0xC16F45: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F47: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F48: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F49: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F4A.
    case 0xC16F4C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F4D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16F4E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    case 0xC16F4F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16F4C.
    case 0xC16F50: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    case 0xC16F51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16F50.
    case 0xC16F52: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16F51.
    case 0xC16F53: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:13 CLC
    case 0xC16F54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F55: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F58: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F5A: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F5C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16F5E: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:16 TXA
    case 0xC16F60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16F61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F63: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16F66: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16F69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16F6B: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    case 0xC16F6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x006F45, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC16F6E.
    case 0xC16F70: cpu.execute_instruction<0x6F>(0xAD1E80, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:23 BRA @UNKNOWN3
    case 0xC16F71: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16F73: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16F70.
    case 0xC16F74: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    case 0xC16F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16F74.
    case 0xC16F77: cpu.execute_instruction<0xFF>(0x84A800, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16F76.
    case 0xC16F78: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:27 TAY
    case 0xC16F79: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:28 STY @LOCAL00
    case 0xC16F7A: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:28 STY @LOCAL00
    // Overlapping static entry reached from 0xC16F77.
    case 0xC16F7B: cpu.execute_instruction<0x0E>(0x002298, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:29 TYA
    case 0xC16F7C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    case 0xC16F7D: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    // Overlapping static entry reached from 0xC16F7B.
    case 0xC16F7E: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    // Overlapping static entry reached from 0xC16F7E.
    case 0xC16F7F: cpu.execute_instruction<0x3D>(0x00A6C4, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:31 LDX @LOCAL01
    case 0xC16F81: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:31 LDX @LOCAL01
    // Overlapping static entry reached from 0xC16F7F.
    case 0xC16F82: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    case 0xC16F83: cpu.execute_instruction<0x22>(0xC49BEA, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16F82.
    case 0xC16F84: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16F84.
    case 0xC16F85: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16F85.
    case 0xC16F86: cpu.execute_instruction<0xC4>(0x0000A4, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:33 LDY @LOCAL00
    case 0xC16F87: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:33 LDY @LOCAL00
    // Overlapping static entry reached from 0xC16F86.
    case 0xC16F88: cpu.execute_instruction<0x0E>(0x002298, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:34 TYA
    case 0xC16F89: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    case 0xC16F8A: cpu.execute_instruction<0x22>(0xC4415A, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    // Overlapping static entry reached from 0xC16F88.
    case 0xC16F8B: cpu.execute_instruction<0x5A>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    // Overlapping static entry reached from 0xC16F8B.
    case 0xC16F8C: cpu.execute_instruction<0x41>(0x0000C4, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    case 0xC16F8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16F8E.
    case 0xC16F90: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16F91: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16F92: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_level.asm (source_named).
bool execute_text_ccs_set_character_level_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_character_level.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16C80: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C82: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C83: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C84: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C85: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16C85.
    case 0xC16C87: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C88: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16C89: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    case 0xC16C8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16C87.
    case 0xC16C8B: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16C8A.
    case 0xC16C8C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_level.asm:10 CLC
    case 0xC16C8D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:11 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C8E: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C91: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C93: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C95: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16C97: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_character_level.asm:13 TXA
    case 0xC16C99: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC16C9A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16C9C: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_level.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC16C9F: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_level.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC16CA2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CA4: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    case 0xC16CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x006C80, 3); return true;
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC16CA7.
    case 0xC16CA9: cpu.execute_instruction<0x6C>(0x004C80, 3); return true;
    // src/text/ccs/set_character_level.asm:20 BRA @UNKNOWN8
    case 0xC16CAA: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/text/ccs/set_character_level.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC16CAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC16CAE: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_level.asm:24 STA @VIRTUAL00
    case 0xC16CB1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/set_character_level.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC16CB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:26 TXA
    case 0xC16CB5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16CB6: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC16CB8.
    case 0xC16CBA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CBB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CBD: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CBF: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16CC1: cpu.execute_instruction<0xC6>(0x00000C, 2); return true;
    // src/text/ccs/set_character_level.asm:29 BRA @ARG_1_IS_NONZERO2
    case 0xC16CC3: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/ccs/set_character_level.asm:31 JSR GET_ARGUMENT_MEMORY
    case 0xC16CC5: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CCA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CCC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16CCE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/set_character_level.asm:34 LDA @VIRTUAL00
    case 0xC16CD0: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    case 0xC16CD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16CD2.
    case 0xC16CD4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/set_character_level.asm:36 BEQ @ARG_2_IS_ZERO
    case 0xC16CD5: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/set_character_level.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC16CD7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CD9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    // Overlapping static entry reached from 0xC16D30.
    case 0xC16CDA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CDB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CDD: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CDF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16CE1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/set_character_level.asm:39 BRA @ARG_2_IS_NONZERO
    case 0xC16CE3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_character_level.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16CE5: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    case 0xC16CE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    // Overlapping static entry reached from 0xC16CE8.
    case 0xC16CEA: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/ccs/set_character_level.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC16CEB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:45 LDA @VIRTUAL0A
    case 0xC16CED: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/text/ccs/set_character_level.asm:46 TAX
    case 0xC16CEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:47 LDA @VIRTUAL06
    case 0xC16CF0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_character_level.asm:48 JSR RESET_CHAR_LEVEL_ONE
    case 0xC16CF2: cpu.execute_instruction<0x20>(0x00D6CB, 3); return true;
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    case 0xC16CF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    // Overlapping static entry reached from 0xC16CF5.
    case 0xC16CF7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_character_level.asm:51 PLD
    case 0xC16CF8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:52 RTS
    case 0xC16CF9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_visibility.asm (source_named).
bool execute_text_ccs_set_character_visibility_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_visibility.asm:3 BEGIN_C_FUNCTION
    case 0xC16F93: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16F95: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16F96: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16F97: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16F98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16F98.
    case 0xC16F9A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16F9B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_visibility.asm:10 END_STACK_VARS
    case 0xC16F9C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:11 STX @LOCAL01
    case 0xC16F9D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_character_visibility.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16F9A.
    case 0xC16F9E: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_character_visibility.asm:12 LDA #1
    case 0xC16F9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_visibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16F9E.
    case 0xC16FA0: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/set_character_visibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16F9F.
    case 0xC16FA1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_visibility.asm:13 CLC
    case 0xC16FA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FA3: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16FA6: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16FA8: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16FAA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16FAC: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_visibility.asm:15 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC14586.
    case 0xC16FAD: cpu.execute_instruction<0x13>(0x00008A, 2); return true;
    // src/text/ccs/set_character_visibility.asm:16 TXA
    case 0xC16FAE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16FAF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_visibility.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FB1: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_visibility.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16FB4: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_visibility.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16FB7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_visibility.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16FB9: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_character_visibility.asm:22 LDA #.LOWORD(CC_1F_EC)
    case 0xC16FBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000093, 2); else cpu.execute_instruction<0xA9>(0x006F93, 3); return true;
    // src/text/ccs/set_character_visibility.asm:22 LDA #.LOWORD(CC_1F_EC)
    // Overlapping static entry reached from 0xC16FBC.
    case 0xC16FBE: cpu.execute_instruction<0x6F>(0xAD1E80, 4); return true;
    // src/text/ccs/set_character_visibility.asm:23 BRA @UNKNOWN3
    case 0xC16FBF: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/text/ccs/set_character_visibility.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16FC1: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_character_visibility.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC16FBE.
    case 0xC16FC2: cpu.execute_instruction<0x6E>(0x00299A, 3); return true;
    // src/text/ccs/set_character_visibility.asm:26 AND #$00FF
    case 0xC16FC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_visibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16FC2.
    case 0xC16FC5: cpu.execute_instruction<0xFF>(0x84A800, 4); return true;
    // src/text/ccs/set_character_visibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16FC4.
    case 0xC16FC6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/set_character_visibility.asm:27 TAY
    case 0xC16FC7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:28 STY @LOCAL00
    case 0xC16FC8: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_character_visibility.asm:28 STY @LOCAL00
    // Overlapping static entry reached from 0xC17047.
    case 0xC16FC9: cpu.execute_instruction<0x0E>(0x002298, 3); return true;
    // src/text/ccs/set_character_visibility.asm:29 TYA
    case 0xC16FCA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:30 JSL UNKNOWN_C4608C
    case 0xC16FCB: cpu.execute_instruction<0x22>(0xC43DDA, 4); return true;
    // src/text/ccs/set_character_visibility.asm:30 JSL UNKNOWN_C4608C
    // Overlapping static entry reached from 0xC16FC9.
    case 0xC16FCC: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:30 JSL UNKNOWN_C4608C
    // Overlapping static entry reached from 0xC16FCC.
    case 0xC16FCD: cpu.execute_instruction<0x3D>(0x00A6C4, 3); return true;
    // src/text/ccs/set_character_visibility.asm:31 LDX @LOCAL01
    case 0xC16FCF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_character_visibility.asm:31 LDX @LOCAL01
    // Overlapping static entry reached from 0xC16FCD.
    case 0xC16FD0: cpu.execute_instruction<0x10>(0x000022, 2); return true;
    // src/text/ccs/set_character_visibility.asm:32 JSL UNKNOWN_C4C91A
    case 0xC16FD1: cpu.execute_instruction<0x22>(0xC49BEA, 4); return true;
    // src/text/ccs/set_character_visibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16FD0.
    case 0xC16FD2: cpu.execute_instruction<0xEA>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16FD2.
    case 0xC16FD3: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:32 JSL UNKNOWN_C4C91A
    // Overlapping static entry reached from 0xC16FD3.
    case 0xC16FD4: cpu.execute_instruction<0xC4>(0x0000A4, 2); return true;
    // src/text/ccs/set_character_visibility.asm:33 LDY @LOCAL00
    case 0xC16FD5: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_character_visibility.asm:33 LDY @LOCAL00
    // Overlapping static entry reached from 0xC16FD4.
    case 0xC16FD6: cpu.execute_instruction<0x0E>(0x002298, 3); return true;
    // src/text/ccs/set_character_visibility.asm:34 TYA
    case 0xC16FD7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_visibility.asm:35 JSL UNKNOWN_C4645A
    case 0xC16FD8: cpu.execute_instruction<0x22>(0xC441C4, 4); return true;
    // src/text/ccs/set_character_visibility.asm:35 JSL UNKNOWN_C4645A
    // Overlapping static entry reached from 0xC16FD6.
    case 0xC16FD9: cpu.execute_instruction<0xC4>(0x000041, 2); return true;
    // src/text/ccs/set_character_visibility.asm:35 JSL UNKNOWN_C4645A
    // Overlapping static entry reached from 0xC16FD9.
    case 0xC16FDB: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/text/ccs/set_character_visibility.asm:36 LDA #NULL
    case 0xC16FDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_visibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16FDB.
    case 0xC16FDD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/set_character_visibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16FDC.
    case 0xC16FDE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_visibility.asm:38 END_C_FUNCTION
    case 0xC16FDF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_visibility.asm:38 END_C_FUNCTION
    case 0xC16FE0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_entity_direction_sprite.asm (source_named).
bool execute_text_ccs_set_entity_direction_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16DAA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16DAF.
    case 0xC16DB1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DB2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:10 END_STACK_VARS
    case 0xC16DB3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:11 STX @LOCAL01
    case 0xC16DB4: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16DB1.
    case 0xC16DB5: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    case 0xC16DB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    // Overlapping static entry reached from 0xC16DB5.
    case 0xC16DB7: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:12 LDA #2
    // Overlapping static entry reached from 0xC16DB6.
    case 0xC16DB8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:13 CLC
    case 0xC16DB9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DBA: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DBD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DBF: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DC1: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16DC3: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:16 TXA
    case 0xC16DC5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16DC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DC8: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16DCB: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16DCE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DD0: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:22 LDA #.LOWORD(CC_1F_E4)
    case 0xC16DD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x006DAA, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:22 LDA #.LOWORD(CC_1F_E4)
    // Overlapping static entry reached from 0xC16DD3.
    case 0xC16DD5: cpu.execute_instruction<0x6D>(0x004980, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:23 BRA @UNKNOWN7
    case 0xC16DD6: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC16DD8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:26 LDA #8
    case 0xC16DDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC16DDC: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16DDA.
    case 0xC16DDD: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:28 TAY
    case 0xC16DDE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC16DDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16DE1: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:31 AND #$00FF
    case 0xC16DE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16DE4.
    case 0xC16DE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:32 JSL ASL16_ENTRY2
    case 0xC16DE7: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:33 STA @VIRTUAL02
    case 0xC16DEB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:34 LDA CC_ARGUMENT_STORAGE
    case 0xC16DED: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:35 AND #$00FF
    case 0xC16DF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16DF0.
    case 0xC16DF2: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:36 ORA @VIRTUAL02
    case 0xC16DF3: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:37 BEQ @ARG_1_IS_ZERO
    case 0xC16DF5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC16DF7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:38 STORE_INT1632 @VIRTUAL06
    case 0xC16DF9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:39 BRA @ARG_1_IS_NONZERO
    case 0xC16DFB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16DFD: cpu.execute_instruction<0x20>(0x00060D, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:43 LDA @VIRTUAL06
    case 0xC16E00: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:44 STA @LOCAL00
    case 0xC16E02: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:45 REP #PROC_FLAGS::INDEX8
    case 0xC16E04: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:46 LDX @LOCAL01
    case 0xC16E06: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:47 BEQ @ARG_2_IS_ZERO
    case 0xC16E08: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:48 TXA
    case 0xC16E0A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16E0B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:49 STORE_INT1632 @VIRTUAL06
    case 0xC16E0D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:50 BRA @ARG_2_IS_NONZERO
    case 0xC16E0F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:52 JSR GET_ARGUMENT_MEMORY
    case 0xC16E11: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:54 LDA @VIRTUAL06
    case 0xC16E14: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:55 TAX
    case 0xC16E16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:56 DEX
    case 0xC16E17: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:57 LDA @LOCAL00
    case 0xC16E18: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:58 JSL UNKNOWN_C46331
    case 0xC16E1A: cpu.execute_instruction<0x22>(0xC4408D, 4); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:59 LDA #NULL
    case 0xC16E1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_entity_direction_sprite.asm:59 LDA #NULL
    // Overlapping static entry reached from 0xC16E1E.
    case 0xC16E20: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:61 END_C_FUNCTION
    case 0xC16E21: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_entity_direction_sprite.asm:61 END_C_FUNCTION
    case 0xC16E22: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_event_flag.asm (source_named).
bool execute_text_ccs_set_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC14687: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC14689: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1468A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1468B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1468C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1468C.
    case 0xC1468E: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC1468F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_event_flag.asm:9 END_STACK_VARS
    case 0xC14690: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_event_flag.asm:10 TXA
    case 0xC14691: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_event_flag.asm:11 STA @LOCAL00
    case 0xC14692: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14694: cpu.execute_instruction<0xAD>(0x009A7E, 3); return true;
    // src/text/ccs/set_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC14697: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/set_event_flag.asm:14 LDA @LOCAL00
    case 0xC14699: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC1469B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1469D: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC146A0: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC146A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC146A5: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_event_flag.asm:20 LDA #.LOWORD(CC_04)
    case 0xC146A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000087, 2); else cpu.execute_instruction<0xA9>(0x004687, 3); return true;
    // src/text/ccs/set_event_flag.asm:20 LDA #.LOWORD(CC_04)
    // Overlapping static entry reached from 0xC146A8.
    case 0xC146AA: cpu.execute_instruction<0x46>(0x000080, 2); return true;
    // src/text/ccs/set_event_flag.asm:21 BRA @UNKNOWN1
    case 0xC146AB: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/ccs/set_event_flag.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC146AA.
    case 0xC146AC: cpu.execute_instruction<0x20>(0x0010E2, 3); return true;
    // src/text/ccs/set_event_flag.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC146AD: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_event_flag.asm:24 LDY #8
    case 0xC146AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/set_event_flag.asm:25 LDA @LOCAL00
    case 0xC146B1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_event_flag.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC146AF.
    case 0xC146B2: cpu.execute_instruction<0x0E>(0x002022, 3); return true;
    // src/text/ccs/set_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC146B3: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/ccs/set_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC146B2.
    case 0xC146B5: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/set_event_flag.asm:27 STA @VIRTUAL02
    case 0xC146B7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC146B9: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_event_flag.asm:29 AND #$00FF
    case 0xC146BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC146BC.
    case 0xC146BE: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC146BF: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_event_flag.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC146C1: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_event_flag.asm:32 LDX #1
    case 0xC146C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/set_event_flag.asm:32 LDX #1
    // Overlapping static entry reached from 0xC146C3.
    case 0xC146C5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_event_flag.asm:33 JSL SET_EVENT_FLAG
    case 0xC146C6: cpu.execute_instruction<0x22>(0xC21506, 4); return true;
    // src/text/ccs/set_event_flag.asm:34 LDA #NULL
    case 0xC146CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_event_flag.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC146CA.
    case 0xC146CC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_event_flag.asm:36 END_C_FUNCTION
    case 0xC146CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_event_flag.asm:36 END_C_FUNCTION
    case 0xC146CE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_map_palette.asm (source_named).
bool execute_text_ccs_set_map_palette_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_map_palette.asm:3 BEGIN_C_FUNCTION
    case 0xC1697D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC1697F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16980: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16981: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16982.
    case 0xC16984: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16985: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_map_palette.asm:10 END_STACK_VARS
    case 0xC16986: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    case 0xC16987: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16984.
    case 0xC16988: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/ccs/set_map_palette.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16987.
    case 0xC16989: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_map_palette.asm:12 CLC
    case 0xC1698A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1698B: cpu.execute_instruction<0xED>(0x009A7E, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1698E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16990: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16992: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16994: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_map_palette.asm:14 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC169F3.
    case 0xC16995: cpu.execute_instruction<0x13>(0x00008A, 2); return true;
    // src/text/ccs/set_map_palette.asm:15 TXA
    case 0xC16996: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16997: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16999: cpu.execute_instruction<0xAE>(0x009A7E, 3); return true;
    // src/text/ccs/set_map_palette.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC1699C: cpu.execute_instruction<0x9D>(0x009A6E, 3); return true;
    // src/text/ccs/set_map_palette.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1699F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC169A1: cpu.execute_instruction<0xEE>(0x009A7E, 3); return true;
    // src/text/ccs/set_map_palette.asm:21 LDA #.LOWORD(CC_1F_E1)
    case 0xC169A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00697D, 3); return true;
    // src/text/ccs/set_map_palette.asm:21 LDA #.LOWORD(CC_1F_E1)
    // Overlapping static entry reached from 0xC169A4.
    case 0xC169A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x001880, 3); return true;
    // src/text/ccs/set_map_palette.asm:22 BRA @UNKNOWN3
    case 0xC169A7: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/ccs/set_map_palette.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC169A6.
    case 0xC169A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC169A9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:25 LDA CC_ARGUMENT_STORAGE+1
    case 0xC169AB: cpu.execute_instruction<0xAD>(0x009A6F, 3); return true;
    // src/text/ccs/set_map_palette.asm:26 STA @LOCAL00
    case 0xC169AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_map_palette.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC169B0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:28 TXA
    case 0xC169B2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_map_palette.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC169B3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_map_palette.asm:30 STA @LOCAL01
    case 0xC169B5: cpu.execute_instruction<0x85>(0x00000F, 2); return true;
    // src/text/ccs/set_map_palette.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC169B7: cpu.execute_instruction<0xAD>(0x009A6E, 3); return true;
    // src/text/ccs/set_map_palette.asm:32 JSL UNKNOWN_C4939C
    case 0xC169BA: cpu.execute_instruction<0x22>(0xC469E6, 4); return true;
    // src/text/ccs/set_map_palette.asm:34 LDA #NULL
    case 0xC169BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_map_palette.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC169BE.
    case 0xC169C0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_map_palette.asm:36 END_C_FUNCTION
    case 0xC169C1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_map_palette.asm:36 END_C_FUNCTION
    case 0xC169C2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_music_effect.asm (source_named).
bool execute_text_ccs_set_music_effect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_music_effect.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1769F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC176A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC176A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC176A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC176A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC176A4.
    case 0xC176A6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC176A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_music_effect.asm:8 END_STACK_VARS
    case 0xC176A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_music_effect.asm:9 TXA
    case 0xC176A9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_music_effect.asm:10 BEQ @ARG_IS_ZERO
    case 0xC176AA: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_music_effect.asm:11 STORE_INT1632 $06
    case 0xC176AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_music_effect.asm:11 STORE_INT1632 $06
    case 0xC176AE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_music_effect.asm:12 BRA @ARG_IS_NONZERO
    case 0xC176B0: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_music_effect.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC176B2: cpu.execute_instruction<0x20>(0x0005DF, 3); return true;
    // src/text/ccs/set_music_effect.asm:16 LDA @VIRTUAL06
    case 0xC176B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_music_effect.asm:17 JSL UNKNOWN_C0AC0C
    case 0xC176B7: cpu.execute_instruction<0x22>(0xC0ABEB, 4); return true;
    // src/text/ccs/set_music_effect.asm:18 LDA #NULL
    case 0xC176BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_music_effect.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC176BB.
    case 0xC176BD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_music_effect.asm:19 PLD
    case 0xC176BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_music_effect.asm:20 RTS
    case 0xC176BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
