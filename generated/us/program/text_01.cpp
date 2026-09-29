// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/text/ccs/activate_hotspot.asm (source_named).
bool execute_text_ccs_activate_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/activate_hotspot.asm:3 BEGIN_C_FUNCTION
    case 0xC1711C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1711E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC1711F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17120: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17121: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EB, 2); else cpu.execute_instruction<0x69>(0x00FFEB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC17121.
    case 0xC17123: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17124: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:11 END_STACK_VARS
    case 0xC17125: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    case 0xC17126: cpu.execute_instruction<0x86>(0x000013, 2); return true;
    // src/text/ccs/activate_hotspot.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC17123.
    case 0xC17127: cpu.execute_instruction<0x13>(0x0000A9, 2); return true;
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    case 0xC17128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC17127.
    case 0xC17129: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/text/ccs/activate_hotspot.asm:13 LDA #5
    // Overlapping static entry reached from 0xC17128.
    case 0xC1712A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/activate_hotspot.asm:14 CLC
    case 0xC1712B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1712C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1712F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17131: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17133: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17135: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/activate_hotspot.asm:17 TXA
    case 0xC17137: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC17138: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1713A: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/activate_hotspot.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1713D: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/activate_hotspot.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC17140: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17142: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    case 0xC17145: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00711C, 3); return true;
    // src/text/ccs/activate_hotspot.asm:23 LDA #.LOWORD(CC_1F_66)
    // Overlapping static entry reached from 0xC17145.
    case 0xC17147: cpu.execute_instruction<0x71>(0x00004C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    case 0xC17148: cpu.execute_instruction<0x4C>(0x007231, 3); return true;
    // src/text/ccs/activate_hotspot.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC17147.
    case 0xC17149: cpu.execute_instruction<0x31>(0x000072, 2); return true;
    // src/text/ccs/activate_hotspot.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1714B: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    case 0xC1714E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1714E.
    case 0xC17150: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/activate_hotspot.asm:28 BEQ @UNKNOWN3
    case 0xC17151: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC17153: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC17155: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC17157: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC17159: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:30 STORE_INT832 @VIRTUAL06
    case 0xC1715B: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:31 BRA @UNKNOWN4
    case 0xC1715D: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/activate_hotspot.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC1715F: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/activate_hotspot.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC17162: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:36 LDA @VIRTUAL06
    case 0xC17164: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/activate_hotspot.asm:37 STA @VIRTUAL00
    case 0xC17166: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/activate_hotspot.asm:38 REP #PROC_FLAGS::ACCUM8
    case 0xC17168: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:39 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1716A: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    case 0xC1716D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC1716D.
    case 0xC1716F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/activate_hotspot.asm:41 BEQ @UNKNOWN5
    case 0xC17170: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC17172: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC17174: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC17176: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC17178: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:43 STORE_INT832 @VIRTUAL06
    case 0xC1717A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:44 BRA @UNKNOWN6
    case 0xC1717C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/activate_hotspot.asm:46 JSR GET_WORKING_MEMORY
    case 0xC1717E: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/activate_hotspot.asm:48 SEP #PROC_FLAGS::ACCUM8
    case 0xC17181: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:49 LDA @VIRTUAL06
    case 0xC17183: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/activate_hotspot.asm:50 STA @LOCAL01
    case 0xC17185: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/activate_hotspot.asm:51 LDX @LOCAL02
    case 0xC17187: cpu.execute_instruction<0xA6>(0x000013, 2); return true;
    // src/text/ccs/activate_hotspot.asm:52 REP #PROC_FLAGS::ACCUM8
    case 0xC17189: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:53 TXA
    case 0xC1718B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1718C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC1718E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/activate_hotspot.asm:55 SEP #PROC_FLAGS::INDEX8
    case 0xC17190: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/activate_hotspot.asm:56 LDY #24
    case 0xC17192: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x002218, 3); return true;
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    case 0xC17194: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17192.
    case 0xC17195: cpu.execute_instruction<0x46>(0x000092, 2); return true;
    // src/text/ccs/activate_hotspot.asm:57 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC17195.
    case 0xC17197: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0008A5, 3); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC17198: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    // Overlapping static entry reached from 0xC17197.
    case 0xC17199: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1719A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1719B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:58 PUSH32 @VIRTUAL06
    case 0xC1719D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:59 LDY #16
    case 0xC1719E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    case 0xC171A0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:60 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1719E.
    case 0xC171A1: cpu.execute_instruction<0x20>(0x00BEAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A2: cpu.execute_instruction<0xAD>(0x0097BE, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A1.
    case 0xC171A4: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A4.
    case 0xC171A6: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A7: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A6.
    case 0xC171A8: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171A9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    // Overlapping static entry reached from 0xC171A8.
    case 0xC171AA: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:61 MOVE_INT832 CC_ARGUMENT_STORAGE+4, @VIRTUAL06
    case 0xC171AB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC171AD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:63 JSL ASL32_ENTRY2
    case 0xC171AF: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/activate_hotspot.asm:64 PUSH32 @VIRTUAL06
    case 0xC171B8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:65 LDY #8
    case 0xC171B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    case 0xC171BB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:66 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC171B9.
    case 0xC171BC: cpu.execute_instruction<0x20>(0x00BDAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171BD: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171BC.
    case 0xC171BF: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171BF.
    case 0xC171C1: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C2: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171C1.
    case 0xC171C3: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC171C3.
    case 0xC171C5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:67 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC171C6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:68 REP #PROC_FLAGS::ACCUM8
    case 0xC171C8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/activate_hotspot.asm:69 JSL ASL32_ENTRY2
    case 0xC171CA: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171CE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171D0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:70 MOVE_INT @VIRTUAL06, $0A
    case 0xC171D4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/activate_hotspot.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC171D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171D8: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171DD: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171DF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/activate_hotspot.asm:72 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC171E1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/activate_hotspot.asm:73 REP #PROC_FLAGS::ACCUM8
    case 0xC171E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171E5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171E7: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171ED: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:74 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:75 PULL32 $0A
    case 0xC171F5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171F7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171F9: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC171FF: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:76 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17201: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17203: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17204: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17206: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:77 PULL32 $0A
    case 0xC17207: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17209: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1720B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1720D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC1720F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17211: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/activate_hotspot.asm:78 OR_INT_ASSIGN @VIRTUAL06, $0A
    case 0xC17213: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17215: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17217: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17219: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/activate_hotspot.asm:79 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1721B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/activate_hotspot.asm:80 LDA @LOCAL01
    case 0xC1721D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    case 0xC1721F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC1721F.
    case 0xC17221: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/ccs/activate_hotspot.asm:82 REP #PROC_FLAGS::INDEX8
    case 0xC17222: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/activate_hotspot.asm:83 TAX
    case 0xC17224: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/activate_hotspot.asm:84 LDA @VIRTUAL00
    case 0xC17225: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    case 0xC17227: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/activate_hotspot.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC17227.
    case 0xC17229: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/activate_hotspot.asm:86 JSL ACTIVATE_HOTSPOT
    case 0xC1722A: cpu.execute_instruction<0x22>(0xC072CF, 4); return true;
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    case 0xC1722E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/activate_hotspot.asm:87 LDA #NULL
    // Overlapping static entry reached from 0xC1722E.
    case 0xC17230: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC17231: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/activate_hotspot.asm:89 END_C_FUNCTION
    case 0xC17232: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/atm_decrease.asm (source_named).
bool execute_text_ccs_atm_decrease_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/atm_decrease.asm:3 BEGIN_C_FUNCTION
    case 0xC15D6B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15D6D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15D6E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15D6F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15D70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15D70.
    case 0xC15D72: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15D73: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:10 END_STACK_VARS
    case 0xC15D74: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:11 TXA
    case 0xC15D75: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:12 STA @LOCAL01
    case 0xC15D76: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/atm_decrease.asm:13 LDA #3
    case 0xC15D78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/atm_decrease.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15D78.
    case 0xC15D7A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/atm_decrease.asm:14 CLC
    case 0xC15D7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15D7C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15D7F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15D81: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15D83: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/atm_decrease.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15D85: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/atm_decrease.asm:17 LDA @LOCAL01
    case 0xC15D87: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/atm_decrease.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15D89: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15D8B: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/atm_decrease.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15D8E: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/atm_decrease.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15D91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15D93: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/atm_decrease.asm:23 LDA #.LOWORD(CC_1D_07)
    case 0xC15D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006B, 2); else cpu.execute_instruction<0xA9>(0x005D6B, 3); return true;
    // src/text/ccs/atm_decrease.asm:23 LDA #.LOWORD(CC_1D_07)
    // Overlapping static entry reached from 0xC15D96.
    case 0xC15D98: cpu.execute_instruction<0x5D>(0x005A4C, 3); return true;
    // src/text/ccs/atm_decrease.asm:24 JMP @UNKNOWN5
    case 0xC15D99: cpu.execute_instruction<0x4C>(0x005E5A, 3); return true;
    // src/text/ccs/atm_decrease.asm:24 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC15D98.
    case 0xC15D9B: cpu.execute_instruction<0x5E>(0x0010E2, 3); return true;
    // src/text/ccs/atm_decrease.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15D9C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/atm_decrease.asm:27 LDY #24
    case 0xC15D9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15DA0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15D9E.
    case 0xC15DA1: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15DA2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DA1.
    case 0xC15DA3: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15DA4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DA3.
    case 0xC15DA5: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:29 JSL ASL32_ENTRY2
    case 0xC15DA6: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC15DAA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC15DAC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC15DAD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:30 PUSH32 @VIRTUAL06
    case 0xC15DAF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:31 LDY #16
    case 0xC15DB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/atm_decrease.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15DB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15DB0.
    case 0xC15DB3: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15DB4: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DB3.
    case 0xC15DB6: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15DB7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DB6.
    case 0xC15DB8: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15DB9: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DB8.
    case 0xC15DBA: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15DBB: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DBA.
    case 0xC15DBC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_decrease.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15DBD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_decrease.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15DBF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:35 JSL ASL32_ENTRY2
    case 0xC15DC1: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC15DC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC15DC7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC15DC8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_decrease.asm:36 PUSH32 @VIRTUAL06
    case 0xC15DCA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_decrease.asm:37 LDY #8
    case 0xC15DCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/atm_decrease.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15DCD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15DCB.
    case 0xC15DCE: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15DCF: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DCE.
    case 0xC15DD1: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15DD2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DD1.
    case 0xC15DD3: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15DD4: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DD3.
    case 0xC15DD5: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15DD6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15DD5.
    case 0xC15DD7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_decrease.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15DD8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_decrease.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15DDA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_decrease.asm:41 JSL ASL32_ENTRY2
    case 0xC15DDC: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15DE0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15DE2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15DE4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15DE6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/atm_decrease.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15DE8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15DEA: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15DED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15DEF: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15DF1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_decrease.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15DF3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_decrease.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15DF5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15DF7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15DF9: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15DFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15DFD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15DFF: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E01: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC15E03: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC15E04: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC15E06: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:47 PULL32 @VIRTUAL0A
    case 0xC15E07: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E09: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E0B: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E0D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E0F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E11: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC15E15: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC15E16: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC15E18: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:49 PULL32 @VIRTUAL0A
    case 0xC15E19: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E1B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E1D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E21: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E23: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15E25: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15E27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15E27.
    case 0xC15E29: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15E2A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15E2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15E2C.
    case 0xC15E2E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15E2F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15E31: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15E33: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15E35: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15E37: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/atm_decrease.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15E39: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/atm_decrease.asm:53 BNE @ARG_IS_NONZERO
    case 0xC15E3B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/atm_decrease.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15E3D: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E40: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E44: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E46: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/atm_decrease.asm:57 JSL WITHDRAW_FROM_ATM
    case 0xC15E48: cpu.execute_instruction<0x22>(0xC228B7, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E4C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E4E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E50: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_decrease.asm:58 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15E52: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/atm_decrease.asm:59 JSR SET_WORKING_MEMORY
    case 0xC15E54: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/atm_decrease.asm:60 LDA #NULL
    case 0xC15E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/atm_decrease.asm:60 LDA #NULL
    // Overlapping static entry reached from 0xC15E57.
    case 0xC15E59: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/atm_decrease.asm:62 END_C_FUNCTION
    case 0xC15E5A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/atm_decrease.asm:62 END_C_FUNCTION
    case 0xC15E5B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/atm_increase.asm (source_named).
bool execute_text_ccs_atm_increase_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/atm_increase.asm:3 BEGIN_C_FUNCTION
    case 0xC15C85: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15C87: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15C88: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15C89: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15C8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15C8A.
    case 0xC15C8C: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15C8D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:10 END_STACK_VARS
    case 0xC15C8E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:11 TXA
    case 0xC15C8F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:12 STA @LOCAL01
    case 0xC15C90: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/atm_increase.asm:13 LDA #3
    case 0xC15C92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/atm_increase.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15C92.
    case 0xC15C94: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/atm_increase.asm:14 CLC
    case 0xC15C95: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C96: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C99: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C9B: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C9D: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/atm_increase.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15C9F: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/atm_increase.asm:17 LDA @LOCAL01
    case 0xC15CA1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/atm_increase.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CA3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15CA5: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/atm_increase.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15CA8: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/atm_increase.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15CAB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15CAD: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/atm_increase.asm:23 LDA #.LOWORD(CC_1D_06)
    case 0xC15CB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x005C85, 3); return true;
    // src/text/ccs/atm_increase.asm:23 LDA #.LOWORD(CC_1D_06)
    // Overlapping static entry reached from 0xC15CB0.
    case 0xC15CB2: cpu.execute_instruction<0x5C>(0x5D694C, 4); return true;
    // src/text/ccs/atm_increase.asm:24 JMP @UNKNOWN5
    case 0xC15CB3: cpu.execute_instruction<0x4C>(0x005D69, 3); return true;
    // src/text/ccs/atm_increase.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC15CB6: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/atm_increase.asm:27 LDY #24
    case 0xC15CB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CBA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CB8.
    case 0xC15CBB: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CBC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CBB.
    case 0xC15CBD: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC15CBE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CBD.
    case 0xC15CBF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:29 JSL ASL32_ENTRY2
    case 0xC15CC0: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CC4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CC6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CC7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:30 PUSH32 @VIRTUAL06
    case 0xC15CC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:31 LDY #16
    case 0xC15CCA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/atm_increase.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CCC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15CCA.
    case 0xC15CCD: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CCE: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CCD.
    case 0xC15CD0: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CD1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CD0.
    case 0xC15CD2: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CD3: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CD2.
    case 0xC15CD4: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CD5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CD4.
    case 0xC15CD6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15CD7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_increase.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15CD9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:35 JSL ASL32_ENTRY2
    case 0xC15CDB: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CDF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CE1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CE2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/atm_increase.asm:36 PUSH32 @VIRTUAL06
    case 0xC15CE4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/atm_increase.asm:37 LDY #8
    case 0xC15CE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/atm_increase.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15CE7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15CE5.
    case 0xC15CE8: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CE9: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CE8.
    case 0xC15CEB: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CEC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CEB.
    case 0xC15CED: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CEE: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CED.
    case 0xC15CEF: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CF0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15CEF.
    case 0xC15CF1: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15CF2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_increase.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC15CF4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/atm_increase.asm:41 JSL ASL32_ENTRY2
    case 0xC15CF6: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CFA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CFC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15CFE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15D00: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/atm_increase.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC15D02: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15D04: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15D07: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15D09: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15D0B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/atm_increase.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15D0D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/atm_increase.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15D0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D11: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D13: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D17: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D19: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D1B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D1D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D1E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D20: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:47 PULL32 @VIRTUAL0A
    case 0xC15D21: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D23: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D25: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D27: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2B: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D2D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D2F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D30: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D32: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/atm_increase.asm:49 PULL32 @VIRTUAL0A
    case 0xC15D33: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D35: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D37: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D39: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D3B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D3D: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15D3F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15D41.
    case 0xC15D43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D44: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15D46.
    case 0xC15D48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15D49: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D4B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D4D: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D4F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D51: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/atm_increase.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15D53: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/atm_increase.asm:53 BNE @ARG_IS_NONZERO
    case 0xC15D55: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/atm_increase.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15D57: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D5A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D5C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D5E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/atm_increase.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15D60: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/atm_increase.asm:57 JSL DEPOSIT_INTO_ATM
    case 0xC15D62: cpu.execute_instruction<0x22>(0xC2281D, 4); return true;
    // src/text/ccs/atm_increase.asm:58 LDA #NULL
    case 0xC15D66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/atm_increase.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC15D66.
    case 0xC15D68: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/atm_increase.asm:60 END_C_FUNCTION
    case 0xC15D69: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/atm_increase.asm:60 END_C_FUNCTION
    case 0xC15D6A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/call.asm (source_named).
bool execute_text_ccs_call_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/call.asm:3 BEGIN_C_FUNCTION
    case 0xC143D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC143D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC143D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC143DA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC143DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC143DB.
    case 0xC143DD: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC143DE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/call.asm:10 END_STACK_VARS
    case 0xC143DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/call.asm:11 TXA
    case 0xC143E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/call.asm:12 STA @LOCAL01
    case 0xC143E1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/call.asm:13 LDA #3
    case 0xC143E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/call.asm:13 LDA #3
    // Overlapping static entry reached from 0xC143E3.
    case 0xC143E5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/call.asm:14 CLC
    case 0xC143E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/call.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC143E7: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC143EA: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC143EC: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC143EE: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/call.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC143F0: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/call.asm:17 LDA @LOCAL01
    case 0xC143F2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/call.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC143F4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC143F6: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/call.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC143F9: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/call.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC143FC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC143FE: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/call.asm:23 LDA #.LOWORD(CC_08)
    case 0xC14401: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0043D6, 3); return true;
    // src/text/ccs/call.asm:23 LDA #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC14401.
    case 0xC14403: cpu.execute_instruction<0x43>(0x00004C, 2); return true;
    // src/text/ccs/call.asm:24 JMP @UNKNOWN3
    case 0xC14404: cpu.execute_instruction<0x4C>(0x0044A1, 3); return true;
    // src/text/ccs/call.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC14403.
    case 0xC14405: cpu.execute_instruction<0xA1>(0x000044, 2); return true;
    // src/text/ccs/call.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC14407: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/call.asm:27 LDY #24
    case 0xC14409: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1440B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC14409.
    case 0xC1440C: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1440D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1440C.
    case 0xC1440E: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC1440F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1440E.
    case 0xC14410: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/call.asm:29 JSL ASL32_ENTRY2
    case 0xC14411: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC14415: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC14417: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC14418: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/call.asm:30 PUSH32 @VIRTUAL06
    case 0xC1441A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/call.asm:31 LDY #16
    case 0xC1441B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/call.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC1441D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1441B.
    case 0xC1441E: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1441F: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1441E.
    case 0xC14421: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14422: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC14421.
    case 0xC14423: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14424: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC14423.
    case 0xC14425: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14426: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC14425.
    case 0xC14427: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/call.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14428: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/call.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1442A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:35 JSL ASL32_ENTRY2
    case 0xC1442C: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14430: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14432: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14433: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/call.asm:36 PUSH32 @VIRTUAL06
    case 0xC14435: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/call.asm:37 LDY #8
    case 0xC14436: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/call.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC14438: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14436.
    case 0xC14439: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1443A: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14439.
    case 0xC1443C: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1443D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1443C.
    case 0xC1443E: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1443F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1443E.
    case 0xC14440: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14441: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14440.
    case 0xC14442: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/call.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14443: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/call.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC14445: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/call.asm:41 JSL ASL32_ENTRY2
    case 0xC14447: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1444B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1444D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1444F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/call.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14451: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/call.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC14453: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14455: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14458: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1445A: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1445C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/call.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1445E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/call.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC14460: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14462: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14464: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14466: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14468: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1446A: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/call.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1446C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC1446E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC1446F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC14471: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/call.asm:47 PULL32 @VIRTUAL0A
    case 0xC14472: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14474: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14476: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14478: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1447A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1447C: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/call.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1447E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC14480: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC14481: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC14483: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/call.asm:49 PULL32 @VIRTUAL0A
    case 0xC14484: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14486: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14488: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1448A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1448C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1448E: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/call.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14490: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14492: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14494: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14496: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/call.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14498: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/call.asm:52 JSL DISPLAY_TEXT
    case 0xC1449A: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/ccs/call.asm:53 LDA #NULL
    case 0xC1449E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/call.asm:53 LDA #NULL
    // Overlapping static entry reached from 0xC1449E.
    case 0xC144A0: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/call.asm:55 END_C_FUNCTION
    case 0xC144A1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/call.asm:55 END_C_FUNCTION
    case 0xC144A2: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/check_equal.asm (source_named).
bool execute_text_ccs_check_equal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/check_equal.asm:3 BEGIN_C_FUNCTION
    case 0xC14558: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC1455A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC1455B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC1455C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC1455D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1455D.
    case 0xC1455F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC14560: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/check_equal.asm:10 END_STACK_VARS
    case 0xC14561: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/check_equal.asm:11 STX @VIRTUAL02
    case 0xC14562: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/check_equal.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1455F.
    case 0xC14563: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/check_equal.asm:12 LDA #0
    case 0xC14564: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_equal.asm:12 LDA #0
    // Overlapping static entry reached from 0xC14564.
    case 0xC14566: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_equal.asm:13 STA @LOCAL01
    case 0xC14567: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/check_equal.asm:14 JSR GET_WORKING_MEMORY
    case 0xC14569: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/check_equal.asm:15 LDA @VIRTUAL06
    case 0xC1456C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/check_equal.asm:16 CMP @VIRTUAL02
    case 0xC1456E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/check_equal.asm:17 BNE @UNKNOWN0
    case 0xC14570: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/check_equal.asm:18 LDA #1
    case 0xC14572: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/check_equal.asm:18 LDA #1
    // Overlapping static entry reached from 0xC14572.
    case 0xC14574: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_equal.asm:19 STA @LOCAL01
    case 0xC14575: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC14577: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC14579: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1457B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1457D: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/check_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC1457F: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14581: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14583: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14585: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/check_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14587: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/check_equal.asm:23 JSR SET_WORKING_MEMORY
    case 0xC14589: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/check_equal.asm:24 LDA #NULL
    case 0xC1458C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_equal.asm:24 LDA #NULL
    // Overlapping static entry reached from 0xC1458C.
    case 0xC1458E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/check_equal.asm:25 END_C_FUNCTION
    case 0xC1458F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/check_equal.asm:25 END_C_FUNCTION
    case 0xC14590: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/check_not_equal.asm (source_named).
bool execute_text_ccs_check_not_equal_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/check_not_equal.asm:3 BEGIN_C_FUNCTION
    case 0xC14591: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14593: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14594: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14595: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14596: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14596.
    case 0xC14598: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC14599: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/check_not_equal.asm:10 END_STACK_VARS
    case 0xC1459A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/check_not_equal.asm:11 STX @VIRTUAL02
    case 0xC1459B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/check_not_equal.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14598.
    case 0xC1459C: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/check_not_equal.asm:12 LDA #0
    case 0xC1459D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_not_equal.asm:12 LDA #0
    // Overlapping static entry reached from 0xC1459D.
    case 0xC1459F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_not_equal.asm:13 STA @LOCAL01
    case 0xC145A0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/check_not_equal.asm:14 JSR GET_WORKING_MEMORY
    case 0xC145A2: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/check_not_equal.asm:15 LDA @VIRTUAL06
    case 0xC145A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/check_not_equal.asm:16 CMP @VIRTUAL02
    case 0xC145A7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/check_not_equal.asm:17 BEQ @UNKNOWN0
    case 0xC145A9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/check_not_equal.asm:18 LDA #1
    case 0xC145AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/check_not_equal.asm:18 LDA #1
    // Overlapping static entry reached from 0xC145AB.
    case 0xC145AD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/check_not_equal.asm:19 STA @LOCAL01
    case 0xC145AE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC145B0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC145B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC145B4: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:876 BPL :+
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC145B6: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:877 DEC dest+2
    // Macro caller: src/text/ccs/check_not_equal.asm:21 MOVE_INT1632S @LOCAL01, @VIRTUAL06
    case 0xC145B8: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC145BA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC145BC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC145BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/check_not_equal.asm:22 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC145C0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/check_not_equal.asm:23 JSR SET_WORKING_MEMORY
    case 0xC145C2: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/check_not_equal.asm:24 LDA #NULL
    case 0xC145C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/check_not_equal.asm:24 LDA #NULL
    // Overlapping static entry reached from 0xC145C5.
    case 0xC145C7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/check_not_equal.asm:25 END_C_FUNCTION
    case 0xC145C8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/check_not_equal.asm:25 END_C_FUNCTION
    case 0xC145C9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/clear_event_flag.asm (source_named).
bool execute_text_ccs_clear_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/clear_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC142AD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC142AF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC142B0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC142B1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC142B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC142B2.
    case 0xC142B4: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC142B5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/clear_event_flag.asm:9 END_STACK_VARS
    case 0xC142B6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/clear_event_flag.asm:10 TXA
    case 0xC142B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/clear_event_flag.asm:11 STA @LOCAL00
    case 0xC142B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/clear_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC142BA: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/clear_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC142BD: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/clear_event_flag.asm:14 LDA @LOCAL00
    case 0xC142BF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/clear_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC142C1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/clear_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC142C3: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/clear_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC142C6: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/clear_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC142C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/clear_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC142CB: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/clear_event_flag.asm:20 LDA #.LOWORD(CC_05)
    case 0xC142CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AD, 2); else cpu.execute_instruction<0xA9>(0x0042AD, 3); return true;
    // src/text/ccs/clear_event_flag.asm:20 LDA #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC142CE.
    case 0xC142D0: cpu.execute_instruction<0x42>(0x000080, 2); return true;
    // src/text/ccs/clear_event_flag.asm:21 BRA @UNKNOWN1
    case 0xC142D1: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/ccs/clear_event_flag.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC142D0.
    case 0xC142D2: cpu.execute_instruction<0x20>(0x0010E2, 3); return true;
    // src/text/ccs/clear_event_flag.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC142D3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/clear_event_flag.asm:24 LDY #8
    case 0xC142D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/clear_event_flag.asm:25 LDA @LOCAL00
    case 0xC142D7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/clear_event_flag.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC142D5.
    case 0xC142D8: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/clear_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC142D9: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/clear_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC142D8.
    case 0xC142DB: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/clear_event_flag.asm:27 STA @VIRTUAL02
    case 0xC142DD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/clear_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC142DF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/clear_event_flag.asm:29 AND #$00FF
    case 0xC142E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/clear_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC142E2.
    case 0xC142E4: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/clear_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC142E5: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/clear_event_flag.asm:31 REP #PROC_FLAGS::INDEX8
    case 0xC142E7: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/clear_event_flag.asm:32 LDX #0
    case 0xC142E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/ccs/clear_event_flag.asm:32 LDX #0
    // Overlapping static entry reached from 0xC142E9.
    case 0xC142EB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/clear_event_flag.asm:33 JSL SET_EVENT_FLAG
    case 0xC142EC: cpu.execute_instruction<0x22>(0xC2165E, 4); return true;
    // src/text/ccs/clear_event_flag.asm:34 LDA #NULL
    case 0xC142F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/clear_event_flag.asm:34 LDA #NULL
    // Overlapping static entry reached from 0xC142F0.
    case 0xC142F2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/clear_event_flag.asm:36 END_C_FUNCTION
    case 0xC142F3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/clear_event_flag.asm:36 END_C_FUNCTION
    case 0xC142F4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/clear_line.asm (source_named).
bool execute_text_ccs_clear_line_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/clear_line.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC10BD3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/clear_line.asm:4 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BD5: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/ccs/clear_line.asm:5 JSL UNKNOWN_C43739
    case 0xC10BD8: cpu.execute_instruction<0x22>(0xC43739, 4); return true;
    // src/text/ccs/clear_line.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC10BDC: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/ccs/clear_line.asm:7 ASL
    case 0xC10BDF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/clear_line.asm:8 TAX
    case 0xC10BE0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/clear_line.asm:9 LDA OPEN_WINDOW_TABLE,X
    case 0xC10BE1: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/ccs/clear_line.asm:10 LDY #.SIZEOF(window_stats)
    case 0xC10BE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/ccs/clear_line.asm:10 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10BE4.
    case 0xC10BE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/clear_line.asm:11 JSL MULT168
    case 0xC10BE7: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/clear_line.asm:12 TAX
    case 0xC10BEB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/clear_line.asm:13 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC10BEC: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/text/ccs/clear_line.asm:14 TAX
    case 0xC10BEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/clear_line.asm:15 LDA #NULL
    case 0xC10BF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/clear_line.asm:15 LDA #NULL
    // Overlapping static entry reached from 0xC10BF0.
    case 0xC10BF2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/clear_line.asm:16 JSL UNKNOWN_C438A5
    case 0xC10BF3: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/ccs/clear_line.asm:17 RTS
    case 0xC10BF7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/copy_to_argmem.asm (source_named).
bool execute_text_ccs_copy_to_argmem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/copy_to_argmem.asm:3 BEGIN_C_FUNCTION
    case 0xC145EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC145F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC145F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC145F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC145F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC145F4.
    case 0xC145F6: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC145F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/copy_to_argmem.asm:9 END_STACK_VARS
    case 0xC145F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/copy_to_argmem.asm:10 CPX #0
    case 0xC145F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/copy_to_argmem.asm:10 CPX #0
    // Overlapping static entry reached from 0xC145F6.
    case 0xC145FA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:10 CPX #0
    // Overlapping static entry reached from 0xC145F9.
    case 0xC145FB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:11 BEQ @UNKNOWN0
    case 0xC145FC: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:12 JSR GET_SECONDARY_MEMORY
    case 0xC145FE: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/copy_to_argmem.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC14601: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/copy_to_argmem.asm:13 STORE_INT1632 @VIRTUAL06
    case 0xC14603: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:14 BRA @UNKNOWN1
    case 0xC14605: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:16 JSR GET_WORKING_MEMORY
    case 0xC14607: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1460A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1460C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1460E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/copy_to_argmem.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14610: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/copy_to_argmem.asm:19 JSR SET_ARGUMENT_MEMORY
    case 0xC14612: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/copy_to_argmem.asm:20 LDA #NULL
    case 0xC14615: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/copy_to_argmem.asm:20 LDA #NULL
    // Overlapping static entry reached from 0xC14615.
    case 0xC14617: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/copy_to_argmem.asm:21 END_C_FUNCTION
    case 0xC14618: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/copy_to_argmem.asm:21 END_C_FUNCTION
    case 0xC14619: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_entity_sprite.asm (source_named).
bool execute_text_ccs_create_entity_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC16744: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16746: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16747: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16748: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC16749: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16749.
    case 0xC1674B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC1674C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_sprite.asm:10 END_STACK_VARS
    case 0xC1674D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    case 0xC1674E: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC1674B.
    case 0xC1674F: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    case 0xC16750: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:12 LDA #4
    // Overlapping static entry reached from 0xC16750.
    case 0xC16752: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:13 CLC
    case 0xC16753: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16754: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16757: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16759: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1675B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_sprite.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1675D: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:16 LDA @VIRTUAL02
    case 0xC1675F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16761: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16763: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16766: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16769: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1676B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    case 0xC1676E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000044, 2); else cpu.execute_instruction<0xA9>(0x006744, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:22 LDA #.LOWORD(CC_1F_15)
    // Overlapping static entry reached from 0xC1676E.
    case 0xC16770: cpu.execute_instruction<0x67>(0x000080, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    case 0xC16771: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC16770.
    case 0xC16772: cpu.execute_instruction<0x61>(0x0000E2, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    case 0xC16773: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:25 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16772.
    case 0xC16774: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    case 0xC16775: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:26 LDY #8
    // Overlapping static entry reached from 0xC16774.
    case 0xC16776: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16777: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16775.
    case 0xC16778: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:27 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16778.
    case 0xC16779: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    case 0xC1677A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC16779.
    case 0xC1677B: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC1677A.
    case 0xC1677C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:29 JSL ASL16_ENTRY2
    case 0xC1677D: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:29 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1677B.
    case 0xC1677F: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:30 STA @VIRTUAL04
    case 0xC16781: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:31 LDA CC_ARGUMENT_STORAGE
    case 0xC16783: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    case 0xC16786: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16786.
    case 0xC16788: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:33 ORA @VIRTUAL04
    case 0xC16789: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:34 REP #PROC_FLAGS::INDEX8
    case 0xC1678B: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:35 TAY
    case 0xC1678D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:36 STY @LOCAL01
    case 0xC1678E: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:37 SEP #PROC_FLAGS::INDEX8
    case 0xC16790: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:38 LDY #8
    case 0xC16792: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16794: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:39 LDA CC_ARGUMENT_STORAGE+3
    // Overlapping static entry reached from 0xC16792.
    case 0xC16795: cpu.execute_instruction<0xBD>(0x002997, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    case 0xC16797: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC16795.
    case 0xC16798: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC16797.
    case 0xC16799: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:41 JSL ASL16_ENTRY2
    case 0xC1679A: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:41 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16798.
    case 0xC1679C: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:42 STA @VIRTUAL04
    case 0xC1679E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:43 LDA CC_ARGUMENT_STORAGE+2
    case 0xC167A0: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    case 0xC167A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC167A3.
    case 0xC167A5: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:45 ORA @VIRTUAL04
    case 0xC167A6: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:46 STA @LOCAL00
    case 0xC167A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:47 LDA @VIRTUAL02
    case 0xC167AA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    case 0xC167AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:48 CMP #$00FF
    // Overlapping static entry reached from 0xC167AC.
    case 0xC167AE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:49 BNE @UNKNOWN3
    case 0xC167AF: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:50 LDA @LOCAL00
    case 0xC167B1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC167B3: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:52 TAX
    case 0xC167B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:53 LDY @LOCAL01
    case 0xC167B6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:54 TYA
    case 0xC167B8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:55 JSL UNKNOWN_C06578
    case 0xC167B9: cpu.execute_instruction<0x22>(0xC06578, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:56 BRA @UNKNOWN4
    case 0xC167BD: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:58 LDA @LOCAL00
    case 0xC167BF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:59 REP #PROC_FLAGS::INDEX8
    case 0xC167C1: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:60 TAX
    case 0xC167C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:61 LDY @LOCAL01
    case 0xC167C4: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:62 TYA
    case 0xC167C6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/create_entity_sprite.asm:63 JSL CREATE_PREPARED_ENTITY_SPRITE
    case 0xC167C7: cpu.execute_instruction<0x22>(0xC46507, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:64 LDX @VIRTUAL02
    case 0xC167CB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/create_entity_sprite.asm:65 JSL UNKNOWN_C4C91A
    case 0xC167CD: cpu.execute_instruction<0x22>(0xC4C91A, 4); return true;
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    case 0xC167D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_entity_sprite.asm:67 LDA #NULL
    // Overlapping static entry reached from 0xC167D1.
    case 0xC167D3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC167D4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_sprite.asm:69 END_C_FUNCTION
    case 0xC167D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_entity_tpt.asm (source_named).
bool execute_text_ccs_create_entity_tpt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_entity_tpt.asm:3 BEGIN_C_FUNCTION
    case 0xC16509: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC1650E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1650E.
    case 0xC16510: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16511: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_entity_tpt.asm:10 END_STACK_VARS
    case 0xC16512: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:11 TXY
    case 0xC16513: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:12 STY @LOCAL01
    case 0xC16514: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    case 0xC16516: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16516.
    case 0xC16518: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:14 CLC
    case 0xC16519: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1651A: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1651D: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1651F: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16521: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC1E8AD.
    case 0xC16522: cpu.execute_instruction<0x02>(0x000030, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_entity_tpt.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16523: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:17 TYA
    case 0xC16525: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16526: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16528: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1652B: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1652E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16530: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    case 0xC16533: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x006509, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:23 LDA #.LOWORD(CC_1F_17)
    // Overlapping static entry reached from 0xC16533.
    case 0xC16535: cpu.execute_instruction<0x65>(0x000080, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    case 0xC16536: cpu.execute_instruction<0x80>(0x000048, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:24 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC16535.
    case 0xC16537: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16538: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:27 LDY #8
    case 0xC1653A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1653C: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1653A.
    case 0xC1653D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:28 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1653D.
    case 0xC1653E: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    case 0xC1653F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1653E.
    case 0xC16540: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1653F.
    case 0xC16541: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:30 JSL ASL16_ENTRY2
    case 0xC16542: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:30 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16540.
    case 0xC16544: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:31 STA @VIRTUAL02
    case 0xC16546: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC16548: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    case 0xC1654B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC1654B.
    case 0xC1654D: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:34 ORA @VIRTUAL02
    case 0xC1654E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:35 STA @LOCAL00
    case 0xC16550: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC16552: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:37 LDA #8
    case 0xC16554: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00A808, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:38 TAY
    case 0xC16556: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC16557: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:40 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16559: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    case 0xC1655C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC1655C.
    case 0xC1655E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:42 JSL ASL16_ENTRY2
    case 0xC1655F: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:43 STA @VIRTUAL02
    case 0xC16563: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:44 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16565: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    case 0xC16568: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:45 AND #$00FF
    // Overlapping static entry reached from 0xC16568.
    case 0xC1656A: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:46 ORA @VIRTUAL02
    case 0xC1656B: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:47 REP #PROC_FLAGS::INDEX8
    case 0xC1656D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:48 TAX
    case 0xC1656F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:49 LDA @LOCAL00
    case 0xC16570: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:50 JSL CREATE_PREPARED_ENTITY_NPC
    case 0xC16572: cpu.execute_instruction<0x22>(0xC464B5, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:51 LDY @LOCAL01
    case 0xC16576: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/create_entity_tpt.asm:52 TYX
    case 0xC16578: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/create_entity_tpt.asm:53 JSL UNKNOWN_C4C91A
    case 0xC16579: cpu.execute_instruction<0x22>(0xC4C91A, 4); return true;
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    case 0xC1657D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_entity_tpt.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC1657D.
    case 0xC1657F: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC16580: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_entity_tpt.asm:56 END_C_FUNCTION
    case 0xC16581: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_floating_sprite_at_character.asm (source_named).
bool execute_text_ccs_create_floating_sprite_at_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:3 BEGIN_C_FUNCTION
    case 0xC1666D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC1666F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC16670: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC16671: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC16672: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16672.
    case 0xC16674: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC16675: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:9 END_STACK_VARS
    case 0xC16676: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:10 TXA
    case 0xC16677: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:11 STA @LOCAL00
    case 0xC16678: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:12 LDA #1
    case 0xC1667A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1667A.
    case 0xC1667C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:13 CLC
    case 0xC1667D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1667E: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16681: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16683: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16685: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16687: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:16 LDA @LOCAL00
    case 0xC16689: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1668B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1668D: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16690: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16693: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16695: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:22 LDA #.LOWORD(CC_1F_1C)
    case 0xC16698: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006D, 2); else cpu.execute_instruction<0xA9>(0x00666D, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:22 LDA #.LOWORD(CC_1F_1C)
    // Overlapping static entry reached from 0xC16698.
    case 0xC1669A: cpu.execute_instruction<0x66>(0x000080, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:23 BRA @UNKNOWN7
    case 0xC1669B: cpu.execute_instruction<0x80>(0x00003E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1669A.
    case 0xC1669C: cpu.execute_instruction<0x3E>(0x00BAAD, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1669D: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:25 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1669C.
    case 0xC1669F: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    case 0xC166A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC1669F.
    case 0xC166A1: cpu.execute_instruction<0xFF>(0x0FF000, 4); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC166A0.
    case 0xC166A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC166A3: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC166A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166A7: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166AC: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166AE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC166B0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC166B2: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:32 JSR GET_WORKING_MEMORY
    case 0xC166B4: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC166B7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:35 LDA @VIRTUAL06
    case 0xC166B9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:36 STA @VIRTUAL00
    case 0xC166BB: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC166BD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:38 LDA @LOCAL00
    case 0xC166BF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:39 BEQ @ARG_2_IS_ZERO
    case 0xC166C1: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC166C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC166C5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:41 BRA @ARG_2_IS_NONZERO
    case 0xC166C7: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC166C9: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:45 LDA @VIRTUAL06
    case 0xC166CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:46 TAX
    case 0xC166CE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:47 LDA @VIRTUAL00
    case 0xC166CF: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:48 AND #$00FF
    case 0xC166D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC166D1.
    case 0xC166D3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:49 JSL UNKNOWN_C4B4FE
    case 0xC166D4: cpu.execute_instruction<0x22>(0xC4B4FE, 4); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:50 LDA #NULL
    case 0xC166D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_floating_sprite_at_character.asm:50 LDA #NULL
    // Overlapping static entry reached from 0xC166D8.
    case 0xC166DA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:52 END_C_FUNCTION
    case 0xC166DB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_character.asm:52 END_C_FUNCTION
    case 0xC166DC: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_floating_sprite_at_sprite_entity.asm (source_named).
bool execute_text_ccs_create_floating_sprite_at_sprite_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC17325: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17327: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17328: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17329: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC1732A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1732A.
    case 0xC1732C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC1732D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC1732E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:10 STX @LOCAL00
    case 0xC1732F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC1732C.
    case 0xC17330: cpu.execute_instruction<0x0E>(0x0002A9, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:11 LDA #2
    case 0xC17331: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:11 LDA #2
    // Overlapping static entry reached from 0xC17331.
    case 0xC17333: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:12 CLC
    case 0xC17334: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17335: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC17338: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1733A: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1733C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1733E: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:15 TXA
    case 0xC17340: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC17341: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17343: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC17346: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC17349: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1734B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:21 LDA #.LOWORD(CC_1F_F3)
    case 0xC1734E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x007325, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:21 LDA #.LOWORD(CC_1F_F3)
    // Overlapping static entry reached from 0xC1734E.
    case 0xC17350: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:22 BRA @UNKNOWN3
    case 0xC17351: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC17350.
    case 0xC17352: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC17353: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:25 LDA #8
    case 0xC17355: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC17357: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC17355.
    case 0xC17358: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:27 TAY
    case 0xC17359: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC1735A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:29 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1735C: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:30 AND #$00FF
    case 0xC1735F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1735F.
    case 0xC17361: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:31 JSL ASL16_ENTRY2
    case 0xC17362: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:32 STA @VIRTUAL02
    case 0xC17366: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC17368: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:34 AND #$00FF
    case 0xC1736B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC1736B.
    case 0xC1736D: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:35 ORA @VIRTUAL02
    case 0xC1736E: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC17370: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:37 LDX @LOCAL00
    case 0xC17372: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:38 JSL UNKNOWN_C4B54A
    case 0xC17374: cpu.execute_instruction<0x22>(0xC4B54A, 4); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:39 LDA #NULL
    case 0xC17378: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_floating_sprite_at_sprite_entity.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC17378.
    case 0xC1737A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:41 END_C_FUNCTION
    case 0xC1737B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_sprite_entity.asm:41 END_C_FUNCTION
    case 0xC1737C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_floating_sprite_at_tpt_entity.asm (source_named).
bool execute_text_ccs_create_floating_sprite_at_tpt_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC165D2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D4: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D5: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC165D7.
    case 0xC165D9: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165DA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC165DB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:10 STX @LOCAL00
    case 0xC165DC: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC165D9.
    case 0xC165DD: cpu.execute_instruction<0x0E>(0x0002A9, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:11 LDA #2
    case 0xC165DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:11 LDA #2
    // Overlapping static entry reached from 0xC165DE.
    case 0xC165E0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:12 CLC
    case 0xC165E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165E2: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165E5: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165E7: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165E9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC165EB: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:15 TXA
    case 0xC165ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC165EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165F0: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC165F3: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC165F6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165F8: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:21 LDA #.LOWORD(CC_1F_1A)
    case 0xC165FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D2, 2); else cpu.execute_instruction<0xA9>(0x0065D2, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:21 LDA #.LOWORD(CC_1F_1A)
    // Overlapping static entry reached from 0xC165FB.
    case 0xC165FD: cpu.execute_instruction<0x65>(0x000080, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:22 BRA @UNKNOWN3
    case 0xC165FE: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC165FD.
    case 0xC165FF: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC16600: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:25 LDA #8
    case 0xC16602: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16604: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:26 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16602.
    case 0xC16605: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:27 TAY
    case 0xC16606: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC16607: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:29 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16609: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:30 AND #$00FF
    case 0xC1660C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1660C.
    case 0xC1660E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:31 JSL ASL16_ENTRY2
    case 0xC1660F: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:32 STA @VIRTUAL02
    case 0xC16613: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC16615: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:34 AND #$00FF
    case 0xC16618: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC16618.
    case 0xC1661A: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:35 ORA @VIRTUAL02
    case 0xC1661B: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC1661D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:37 LDX @LOCAL00
    case 0xC1661F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:38 JSL UNKNOWN_C4B524
    case 0xC16621: cpu.execute_instruction<0x22>(0xC4B524, 4); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:39 LDA #NULL
    case 0xC16625: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_floating_sprite_at_tpt_entity.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC16625.
    case 0xC16627: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:41 END_C_FUNCTION
    case 0xC16628: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_floating_sprite_at_tpt_entity.asm:41 END_C_FUNCTION
    case 0xC16629: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/create_number_selector.asm (source_named).
bool execute_text_ccs_create_number_selector_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/create_number_selector.asm:3 BEGIN_C_FUNCTION
    case 0xC144A3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC144A5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC144A6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC144A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC144A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC144A8.
    case 0xC144AA: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC144AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/create_number_selector.asm:10 END_STACK_VARS
    case 0xC144AC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/create_number_selector.asm:11 TXA
    case 0xC144AD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/create_number_selector.asm:12 JSR NUM_SELECT_PROMPT
    case 0xC144AE: cpu.execute_instruction<0x20>(0x00101C, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC144B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC144B1.
    case 0xC144B3: cpu.execute_instruction<0xFF>(0xA90A85, 4); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC144B4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC144B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC144B3.
    case 0xC144B7: cpu.execute_instruction<0xFF>(0x0C85FF, 4); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC144B6.
    case 0xC144B8: cpu.execute_instruction<0xFF>(0xA50C85, 4); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:13 MOVE_INT_CONSTANT -1, @VIRTUAL0A
    case 0xC144B9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC144BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC144B8.
    case 0xC144BC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC144BD: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC144BF: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC144C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/create_number_selector.asm:14 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC144C3: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/create_number_selector.asm:15 BNE @UNKNOWN1
    case 0xC144C5: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC144C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC144C7.
    case 0xC144C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC144CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC144CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC144CC.
    case 0xC144CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC144CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC144D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC144D3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC144D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:17 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC144D7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144D9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/create_number_selector.asm:19 JSR SET_WORKING_MEMORY
    case 0xC144E1: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC144E4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC144E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC144E8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:20 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC144EA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144EC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144EE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144F0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144F2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/create_number_selector.asm:22 JSR SET_ARGUMENT_MEMORY
    case 0xC144F4: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/create_number_selector.asm:23 BRA @UNKNOWN2
    case 0xC144F7: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144FB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/create_number_selector.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC144FF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/create_number_selector.asm:26 JSR SET_WORKING_MEMORY
    case 0xC14501: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/create_number_selector.asm:28 LDA #NULL
    case 0xC14504: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/create_number_selector.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC14504.
    case 0xC14506: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/create_number_selector.asm:29 END_C_FUNCTION
    case 0xC14507: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/create_number_selector.asm:29 END_C_FUNCTION
    case 0xC14508: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deactivate_hotspot.asm (source_named).
bool execute_text_ccs_deactivate_hotspot_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deactivate_hotspot.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC17233: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC17235: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC17236: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC17237: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC17238: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC17238.
    case 0xC1723A: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC1723B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:8 END_STACK_VARS
    case 0xC1723C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deactivate_hotspot.asm:9 TXA
    case 0xC1723D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deactivate_hotspot.asm:10 BEQ @UNKNOWN0
    case 0xC1723E: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17240: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/deactivate_hotspot.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC17242: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:12 BRA @UNKNOWN1
    case 0xC17244: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC17246: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/deactivate_hotspot.asm:16 LDA @VIRTUAL06
    case 0xC17249: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:17 JSL DISABLE_HOTSPOT
    case 0xC1724B: cpu.execute_instruction<0x22>(0xC071E5, 4); return true;
    // src/text/ccs/deactivate_hotspot.asm:18 LDA #NULL
    case 0xC1724F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deactivate_hotspot.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1724F.
    case 0xC17251: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deactivate_hotspot.asm:19 PLD
    case 0xC17252: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deactivate_hotspot.asm:20 RTS
    case 0xC17253: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_entity_sprite.asm (source_named).
bool execute_text_ccs_delete_entity_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC1683B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC1683D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC1683E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC1683F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16840: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16840.
    case 0xC16842: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16843: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:9 END_STACK_VARS
    case 0xC16844: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    case 0xC16845: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC16842.
    case 0xC16846: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    case 0xC16847: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:11 LDA #2
    // Overlapping static entry reached from 0xC16847.
    case 0xC16849: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:12 CLC
    case 0xC1684A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1684B: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC1684E: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16850: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16852: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC16854: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:15 LDA @VIRTUAL02
    case 0xC16856: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC16858: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1685A: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC1685D: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC16860: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16862: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    case 0xC16865: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00683B, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:21 LDA #.LOWORD(CC_1F_1F)
    // Overlapping static entry reached from 0xC16865.
    case 0xC16867: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:22 BRA @UNKNOWN3
    case 0xC16868: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC1686A: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:25 LDY #8
    case 0xC1686C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    case 0xC1686E: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1686C.
    case 0xC1686F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1686F.
    case 0xC16870: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    case 0xC16871: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16870.
    case 0xC16872: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC16871.
    case 0xC16873: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:28 JSL ASL16_ENTRY2
    case 0xC16874: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:28 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16872.
    case 0xC16876: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:29 STA @VIRTUAL04
    case 0xC16878: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC1687A: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    case 0xC1687D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC1687D.
    case 0xC1687F: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:32 ORA @VIRTUAL04
    case 0xC16880: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:33 REP #PROC_FLAGS::INDEX8
    case 0xC16882: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:34 TAY
    case 0xC16884: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:35 STY @LOCAL00
    case 0xC16885: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:36 TYA
    case 0xC16887: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:37 JSL UNKNOWN_C46028
    case 0xC16888: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:38 LDX @VIRTUAL02
    case 0xC1688C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:39 JSL UNKNOWN_C4C91A
    case 0xC1688E: cpu.execute_instruction<0x22>(0xC4C91A, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:40 LDX @VIRTUAL02
    case 0xC16892: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:41 LDY @LOCAL00
    case 0xC16894: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_sprite.asm:42 TYA
    case 0xC16896: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_sprite.asm:43 JSL UNKNOWN_C46125
    case 0xC16897: cpu.execute_instruction<0x22>(0xC46125, 4); return true;
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    case 0xC1689B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_entity_sprite.asm:44 LDA #NULL
    // Overlapping static entry reached from 0xC1689B.
    case 0xC1689D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC1689E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_entity_sprite.asm:46 END_C_FUNCTION
    case 0xC1689F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_entity_tpt.asm (source_named).
bool execute_text_ccs_delete_entity_tpt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:3 BEGIN_C_FUNCTION
    case 0xC167D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC167D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC167D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC167DA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC167DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC167DB.
    case 0xC167DD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC167DE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:9 END_STACK_VARS
    case 0xC167DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:10 STX @VIRTUAL02
    case 0xC167E0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC167DD.
    case 0xC167E1: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:11 LDA #2
    case 0xC167E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:11 LDA #2
    // Overlapping static entry reached from 0xC167E2.
    case 0xC167E4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:12 CLC
    case 0xC167E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167E6: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC167E9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC167EB: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC167ED: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC167EF: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:15 LDA @VIRTUAL02
    case 0xC167F1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC167F3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167F5: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC167F8: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC167FB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC167FD: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:21 LDA #.LOWORD(CC_1F_1E)
    case 0xC16800: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D6, 2); else cpu.execute_instruction<0xA9>(0x0067D6, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:21 LDA #.LOWORD(CC_1F_1E)
    // Overlapping static entry reached from 0xC16800.
    case 0xC16802: cpu.execute_instruction<0x67>(0x000080, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:22 BRA @UNKNOWN3
    case 0xC16803: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:22 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC16802.
    case 0xC16804: cpu.execute_instruction<0x34>(0x0000E2, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC16805: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:24 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16804.
    case 0xC16806: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:25 LDY #8
    case 0xC16807: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00AD08, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:25 LDY #8
    // Overlapping static entry reached from 0xC16806.
    case 0xC16808: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:26 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16809: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC16807.
    case 0xC1680A: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:26 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC1680A.
    case 0xC1680B: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:27 AND #$00FF
    case 0xC1680C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1680B.
    case 0xC1680D: cpu.execute_instruction<0xFF>(0x3E2200, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1680C.
    case 0xC1680E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:28 JSL ASL16_ENTRY2
    case 0xC1680F: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:28 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1680D.
    case 0xC16811: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:29 STA @VIRTUAL04
    case 0xC16813: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC16815: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:31 AND #$00FF
    case 0xC16818: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC16818.
    case 0xC1681A: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:32 ORA @VIRTUAL04
    case 0xC1681B: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:33 REP #PROC_FLAGS::INDEX8
    case 0xC1681D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:34 TAY
    case 0xC1681F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:35 STY @LOCAL00
    case 0xC16820: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:36 TYA
    case 0xC16822: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:37 JSL UNKNOWN_C4605A
    case 0xC16823: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:38 LDX @VIRTUAL02
    case 0xC16827: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:39 JSL UNKNOWN_C4C91A
    case 0xC16829: cpu.execute_instruction<0x22>(0xC4C91A, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:40 LDX @VIRTUAL02
    case 0xC1682D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:41 LDY @LOCAL00
    case 0xC1682F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/delete_entity_tpt.asm:42 TYA
    case 0xC16831: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/delete_entity_tpt.asm:43 JSL UNKNOWN_C460CE
    case 0xC16832: cpu.execute_instruction<0x22>(0xC460CE, 4); return true;
    // src/text/ccs/delete_entity_tpt.asm:44 LDA #NULL
    case 0xC16836: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_entity_tpt.asm:44 LDA #NULL
    // Overlapping static entry reached from 0xC16836.
    case 0xC16838: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:46 END_C_FUNCTION
    case 0xC16839: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_entity_tpt.asm:46 END_C_FUNCTION
    case 0xC1683A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_floating_sprite_at_character.asm (source_named).
bool execute_text_ccs_delete_floating_sprite_at_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/delete_floating_sprite_at_character.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC166DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC166E2.
    case 0xC166E4: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:8 END_STACK_VARS
    case 0xC166E6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:9 TXA
    case 0xC166E7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:10 BEQ @ARG_IS_ZERO
    case 0xC166E8: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC166EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/delete_floating_sprite_at_character.asm:11 STORE_INT1632 @VIRTUAL06
    case 0xC166EC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:12 BRA @ARG_IS_NONZERO
    case 0xC166EE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:14 JSR GET_WORKING_MEMORY
    case 0xC166F0: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:16 LDA @VIRTUAL06
    case 0xC166F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:17 JSL UNKNOWN_C4B519
    case 0xC166F5: cpu.execute_instruction<0x22>(0xC4B519, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:18 LDA #NULL
    case 0xC166F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC166F9.
    case 0xC166FB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:19 PLD
    case 0xC166FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_character.asm:20 RTS
    case 0xC166FD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm (source_named).
bool execute_text_ccs_delete_floating_sprite_at_sprite_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC1737D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC1737F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17380: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17381: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17382: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17382.
    case 0xC17384: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17385: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:9 END_STACK_VARS
    case 0xC17386: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:10 TXA
    case 0xC17387: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:11 STA @LOCAL00
    case 0xC17388: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1738A: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:13 BNE @UNKNOWN0
    case 0xC1738D: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:14 LDA @LOCAL00
    case 0xC1738F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC17391: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17393: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC17396: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC17399: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1739B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:20 LDA #.LOWORD(CC_1F_F4)
    case 0xC1739E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00737D, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:20 LDA #.LOWORD(CC_1F_F4)
    // Overlapping static entry reached from 0xC1739E.
    case 0xC173A0: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:21 BRA @UNKNOWN1
    case 0xC173A1: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC173A0.
    case 0xC173A2: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC173A3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:24 LDY #8
    case 0xC173A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:25 LDA @LOCAL00
    case 0xC173A7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC173A5.
    case 0xC173A8: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC173A9: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC173A8.
    case 0xC173AB: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:27 STA @VIRTUAL02
    case 0xC173AD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC173AF: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:29 AND #$00FF
    case 0xC173B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC173B2.
    case 0xC173B4: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:30 ORA @VIRTUAL02
    case 0xC173B5: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:31 JSL UNKNOWN_C4B565
    case 0xC173B7: cpu.execute_instruction<0x22>(0xC4B565, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:32 LDA #NULL
    case 0xC173BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC173BB.
    case 0xC173BD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:34 END_C_FUNCTION
    case 0xC173BE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_floating_sprite_at_sprite_entity.asm:34 END_C_FUNCTION
    case 0xC173BF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm (source_named).
bool execute_text_ccs_delete_floating_sprite_at_tpt_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC1662A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC1662C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC1662D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC1662E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC1662F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1662F.
    case 0xC16631: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16632: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:9 END_STACK_VARS
    case 0xC16633: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:10 TXA
    case 0xC16634: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:11 STA @LOCAL00
    case 0xC16635: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16637: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:13 BNE @UNKNOWN0
    case 0xC1663A: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:14 LDA @LOCAL00
    case 0xC1663C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC1663E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16640: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC16643: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC16646: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16648: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_1B)
    case 0xC1664B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002A, 2); else cpu.execute_instruction<0xA9>(0x00662A, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:20 LDA #.LOWORD(CC_1F_1B)
    // Overlapping static entry reached from 0xC1664B.
    case 0xC1664D: cpu.execute_instruction<0x66>(0x000080, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:21 BRA @UNKNOWN1
    case 0xC1664E: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:21 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1664D.
    case 0xC1664F: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:23 SEP #PROC_FLAGS::INDEX8
    case 0xC16650: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:24 LDY #8
    case 0xC16652: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:25 LDA @LOCAL00
    case 0xC16654: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:25 LDA @LOCAL00
    // Overlapping static entry reached from 0xC16652.
    case 0xC16655: cpu.execute_instruction<0x0E>(0x003E22, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:26 JSL ASL16_ENTRY2
    case 0xC16656: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC16655.
    case 0xC16658: cpu.execute_instruction<0x92>(0x0000C0, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:27 STA @VIRTUAL02
    case 0xC1665A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC1665C: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:29 AND #$00FF
    case 0xC1665F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC1665F.
    case 0xC16661: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:30 ORA @VIRTUAL02
    case 0xC16662: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:31 JSL UNKNOWN_C4B53F
    case 0xC16664: cpu.execute_instruction<0x22>(0xC4B53F, 4); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:32 LDA #NULL
    case 0xC16668: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:32 LDA #NULL
    // Overlapping static entry reached from 0xC16668.
    case 0xC1666A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC1666B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/delete_floating_sprite_at_tpt_entity.asm:34 END_C_FUNCTION
    case 0xC1666C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_hp_by_amount.asm (source_named).
bool execute_text_ccs_deplete_hp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_hp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14A9D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A9F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14AA0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14AA1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14AA2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14AA2.
    case 0xC14AA4: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14AA5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14AA6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14AA7: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14AA4.
    case 0xC14AA8: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:10 LDA #$0001
    case 0xC14AA9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14AA9.
    case 0xC14AAB: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:11 CLC
    case 0xC14AAC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14AAD: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14AB0: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14AB2: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14AB4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14AB6: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14AB8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14ABA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14ABC: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14ABF: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14AC2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14AC4: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_03)
    case 0xC14AC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x004A9D, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_03)
    // Overlapping static entry reached from 0xC14AC7.
    case 0xC14AC9: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14ACA: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14ACC: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:24 AND #$00FF
    case 0xC14ACF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14ACF.
    case 0xC14AD1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:25 TAX
    case 0xC14AD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14AD3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:27 TXA
    case 0xC14AD5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14AD6: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14AD8: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14ADB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:33 LDY #$0001
    case 0xC14ADD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14ADD.
    case 0xC14ADF: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14AE0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:35 JSR REDUCE_HP_AMTPERCENT
    case 0xC14AE2: cpu.execute_instruction<0x20>(0x008F0E, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:36 LDA #NULL
    case 0xC14AE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14AE5.
    case 0xC14AE7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:38 PLD
    case 0xC14AE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_amount.asm:39 RTS
    case 0xC14AE9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_hp_by_percent.asm (source_named).
bool execute_text_ccs_deplete_hp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_hp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14A03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14A05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14A06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14A07: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14A08.
    case 0xC14A0A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14A0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC14A0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14A0D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14A0A.
    case 0xC14A0E: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:10 LDA #$0001
    case 0xC14A0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14A0F.
    case 0xC14A11: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:11 CLC
    case 0xC14A12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A13: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A16: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A18: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A1A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A1C: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14A1E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14A20: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A22: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14A25: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14A28: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A2A: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_01)
    case 0xC14A2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004A03, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_01)
    // Overlapping static entry reached from 0xC14A2D.
    case 0xC14A2F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14A30: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14A32: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:24 AND #$00FF
    case 0xC14A35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14A35.
    case 0xC14A37: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:25 TAX
    case 0xC14A38: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14A39: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:27 TXA
    case 0xC14A3B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14A3C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14A3E: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14A41: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:33 LDY #$0000
    case 0xC14A43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14A43.
    case 0xC14A45: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14A46: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:35 JSR REDUCE_HP_AMTPERCENT
    case 0xC14A48: cpu.execute_instruction<0x20>(0x008F0E, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:36 LDA #NULL
    case 0xC14A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14A4B.
    case 0xC14A4D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:38 PLD
    case 0xC14A4E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_hp_by_percent.asm:39 RTS
    case 0xC14A4F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_pp_by_amount.asm (source_named).
bool execute_text_ccs_deplete_pp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_pp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14BD1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14BD6.
    case 0xC14BD8: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BD9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:8 END_STACK_VARS
    case 0xC14BDA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14BDB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14BD8.
    case 0xC14BDC: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:10 LDA #$0001
    case 0xC14BDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14BDD.
    case 0xC14BDF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:11 CLC
    case 0xC14BE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BE1: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BE4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BE6: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BE8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_pp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14BEA: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14BEC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14BEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BF0: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14BF3: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14BF6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BF8: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:20 LDA #.LOWORD(CC_1E_07)
    case 0xC14BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D1, 2); else cpu.execute_instruction<0xA9>(0x004BD1, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:20 LDA #.LOWORD(CC_1E_07)
    // Overlapping static entry reached from 0xC14BFB.
    case 0xC14BFD: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14BFE: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14C00: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    case 0xC14C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14C03.
    case 0xC14C05: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:25 TAX
    case 0xC14C06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14C07: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:27 TXA
    case 0xC14C09: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14C0A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14C0C: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14C0F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:33 LDY #$0001
    case 0xC14C11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14C11.
    case 0xC14C13: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14C14: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:35 JSR REDUCE_PP_AMTPERCENT
    case 0xC14C16: cpu.execute_instruction<0x20>(0x008FBA, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:36 LDA #NULL
    case 0xC14C19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14C19.
    case 0xC14C1B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:38 PLD
    case 0xC14C1C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_amount.asm:39 RTS
    case 0xC14C1D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/deplete_pp_by_percent.asm (source_named).
bool execute_text_ccs_deplete_pp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/deplete_pp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14B37: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14B39: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14B3A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14B3B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14B3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14B3C.
    case 0xC14B3E: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14B3F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14B40: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14B41: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14B3E.
    case 0xC14B42: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:10 LDA #$0001
    case 0xC14B43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14B43.
    case 0xC14B45: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:11 CLC
    case 0xC14B46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B47: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14B4A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14B4C: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14B4E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/deplete_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14B50: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14B52: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14B54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B56: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14B59: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14B5C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B5E: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_05)
    case 0xC14B61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000037, 2); else cpu.execute_instruction<0xA9>(0x004B37, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_05)
    // Overlapping static entry reached from 0xC14B61.
    case 0xC14B63: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14B64: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14B66: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    case 0xC14B69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14B69.
    case 0xC14B6B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:25 TAX
    case 0xC14B6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14B6D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:27 TXA
    case 0xC14B6F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14B70: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14B72: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14B75: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:33 LDY #$0000
    case 0xC14B77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14B77.
    case 0xC14B79: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14B7A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:35 JSR REDUCE_PP_AMTPERCENT
    case 0xC14B7C: cpu.execute_instruction<0x20>(0x008FBA, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:36 LDA #NULL
    case 0xC14B7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14B7F.
    case 0xC14B81: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:38 PLD
    case 0xC14B82: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/deplete_pp_by_percent.asm:39 RTS
    case 0xC14B83: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/display_battle_animation.asm (source_named).
bool execute_text_ccs_display_battle_animation_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/display_battle_animation.asm:3 BEGIN_C_FUNCTION
    case 0xC173C0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC173C5.
    case 0xC173C7: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_battle_animation.asm:10 END_STACK_VARS
    case 0xC173C9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    case 0xC173CA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/display_battle_animation.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC173C7.
    case 0xC173CB: cpu.execute_instruction<0x12>(0x0000A9, 2); return true;
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    case 0xC173CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC173CB.
    case 0xC173CD: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/display_battle_animation.asm:12 LDA #1
    // Overlapping static entry reached from 0xC173CC.
    case 0xC173CE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/display_battle_animation.asm:13 CLC
    case 0xC173CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173D0: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D5: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC173D9: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/display_battle_animation.asm:16 TXA
    case 0xC173DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC173DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/display_battle_animation.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173DE: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/display_battle_animation.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC173E1: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/display_battle_animation.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC173E4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/display_battle_animation.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC173E6: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    case 0xC173E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0073C0, 3); return true;
    // src/text/ccs/display_battle_animation.asm:22 LDA #.LOWORD(CC_1C_13)
    // Overlapping static entry reached from 0xC173E9.
    case 0xC173EB: cpu.execute_instruction<0x73>(0x000080, 2); return true;
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    case 0xC173EC: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/display_battle_animation.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC173EB.
    case 0xC173ED: cpu.execute_instruction<0x2F>(0x004220, 4); return true;
    // src/text/ccs/display_battle_animation.asm:25 JSR GET_BLINKING_PROMPT
    case 0xC173EE: cpu.execute_instruction<0x20>(0x000042, 3); return true;
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    case 0xC173F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/display_battle_animation.asm:26 CMP #0
    // Overlapping static entry reached from 0xC173F1.
    case 0xC173F3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/display_battle_animation.asm:27 BEQ @UNKNOWN4
    case 0xC173F4: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/ccs/display_battle_animation.asm:28 LDX @LOCAL01
    case 0xC173F6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/display_battle_animation.asm:29 DEX
    case 0xC173F8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:30 LDA CC_ARGUMENT_STORAGE
    case 0xC173F9: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    case 0xC173FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/display_battle_animation.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC173FC.
    case 0xC173FE: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/ccs/display_battle_animation.asm:32 DEC
    case 0xC173FF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/display_battle_animation.asm:33 JSL UNKNOWN_C3FAC9
    case 0xC17400: cpu.execute_instruction<0x22>(0xC3FAC9, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17404: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC17404.
    case 0xC17406: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17407: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC17409: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1740B: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:34 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1740D: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1740F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17411: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17413: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_battle_animation.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17415: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/display_battle_animation.asm:36 JSR SET_WORKING_MEMORY
    case 0xC17417: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    case 0xC1741A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/display_battle_animation.asm:38 LDA #NULL
    // Overlapping static entry reached from 0xC1741A.
    case 0xC1741C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1741D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/display_battle_animation.asm:40 END_C_FUNCTION
    case 0xC1741E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/display_shop_menu.asm (source_named).
bool execute_text_ccs_display_shop_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/display_shop_menu.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14EB5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EB7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EB8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EB9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14EBA.
    case 0xC14EBC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EBD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/display_shop_menu.asm:11 END_STACK_VARS
    case 0xC14EBE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:15 STX @LOCAL01
    case 0xC14EBF: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/display_shop_menu.asm:15 STX @LOCAL01
    // Overlapping static entry reached from 0xC14EBC.
    case 0xC14EC0: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/display_shop_menu.asm:16 JSL CLEAR_INSTANT_PRINTING
    case 0xC14EC1: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/ccs/display_shop_menu.asm:16 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC14EC0.
    case 0xC14EC2: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:16 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC14EC2.
    case 0xC14EC3: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/ccs/display_shop_menu.asm:17 CREATE_WINDOW_NEAR CURRENT_FOCUS_WINDOW
    case 0xC14EC5: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/ccs/display_shop_menu.asm:17 CREATE_WINDOW_NEAR CURRENT_FOCUS_WINDOW
    case 0xC14EC8: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/text/ccs/display_shop_menu.asm:18 JSL WINDOW_TICK
    case 0xC14ECB: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/ccs/display_shop_menu.asm:19 LDX @LOCAL01
    case 0xC14ECF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/display_shop_menu.asm:21 BEQ @UNKNOWN0
    case 0xC14ED1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/display_shop_menu.asm:22 TXA
    case 0xC14ED3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:23 BRA @UNKNOWN1
    case 0xC14ED4: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/display_shop_menu.asm:25 JSR GET_ARGUMENT_MEMORY
    case 0xC14ED6: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/display_shop_menu.asm:26 LDA @VIRTUAL06
    case 0xC14ED9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/display_shop_menu.asm:28 JSR UNKNOWN_C19DB5
    case 0xC14EDB: cpu.execute_instruction<0x20>(0x009DB5, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/display_shop_menu.asm:29 STORE_INT1632 $06
    case 0xC14EDE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:29 STORE_INT1632 $06
    case 0xC14EE0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/display_shop_menu.asm:30 MOVE_INT $06, $0E
    case 0xC14EE8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/display_shop_menu.asm:31 JSR SET_WORKING_MEMORY
    case 0xC14EEA: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/display_shop_menu.asm:33 LDA CURRENT_FOCUS_WINDOW
    case 0xC14EED: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/ccs/display_shop_menu.asm:34 JSR SET_WINDOW_FOCUS
    case 0xC14EF0: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/text/ccs/display_shop_menu.asm:39 LDA #NULL
    case 0xC14EF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/display_shop_menu.asm:39 LDA #NULL
    // Overlapping static entry reached from 0xC14EF3.
    case 0xC14EF5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/display_shop_menu.asm:40 PLD
    case 0xC14EF6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/display_shop_menu.asm:41 RTS
    case 0xC14EF7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/dummy_1F_18.asm (source_named).
bool execute_text_ccs_dummy_1f_18_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/dummy_1F_18.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16582: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:4 LDA #$0006
    case 0xC16584: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:4 LDA #$0006
    // Overlapping static entry reached from 0xC16584.
    case 0xC16586: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:5 CLC
    case 0xC16587: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_18.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16588: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1658B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1658D: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC1658F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/dummy_1F_18.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC16591: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:8 TXA
    case 0xC16593: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_18.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC16594: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16596: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC16599: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC1659C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1659E: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:14 LDA #.LOWORD(CC_1F_18)
    case 0xC165A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x006582, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:14 LDA #.LOWORD(CC_1F_18)
    // Overlapping static entry reached from 0xC165A1.
    case 0xC165A3: cpu.execute_instruction<0x65>(0x000080, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:15 BRA @UNKNOWN3
    case 0xC165A4: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:15 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC165A3.
    case 0xC165A5: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    case 0xC165A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC165A5.
    case 0xC165A7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC165A6.
    case 0xC165A8: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/dummy_1F_18.asm:19 RTS
    case 0xC165A9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/dummy_1F_19.asm (source_named).
bool execute_text_ccs_dummy_1f_19_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/dummy_1F_19.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC165AA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:4 LDA #$0006
    case 0xC165AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:4 LDA #$0006
    // Overlapping static entry reached from 0xC165AC.
    case 0xC165AE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:5 CLC
    case 0xC165AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_19.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165B0: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B5: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/dummy_1F_19.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC165B9: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:8 TXA
    case 0xC165BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/dummy_1F_19.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC165BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165BE: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC165C1: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC165C4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC165C6: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:14 LDA #.LOWORD(CC_1F_19)
    case 0xC165C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AA, 2); else cpu.execute_instruction<0xA9>(0x0065AA, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:14 LDA #.LOWORD(CC_1F_19)
    // Overlapping static entry reached from 0xC165C9.
    case 0xC165CB: cpu.execute_instruction<0x65>(0x000080, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:15 BRA @UNKNOWN3
    case 0xC165CC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:15 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC165CB.
    case 0xC165CD: cpu.execute_instruction<0x03>(0x0000A9, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    case 0xC165CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC165CD.
    case 0xC165CF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:17 LDA #NULL
    // Overlapping static entry reached from 0xC165CE.
    case 0xC165D0: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/dummy_1F_19.asm:19 RTS
    case 0xC165D1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/enable_blinking_triangle.asm (source_named).
bool execute_text_ccs_enable_blinking_triangle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/enable_blinking_triangle.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC169F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/enable_blinking_triangle.asm:4 TXA
    case 0xC169F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/enable_blinking_triangle.asm:5 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC169FA: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // src/text/ccs/enable_blinking_triangle.asm:6 LDA #NULL
    case 0xC169FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/enable_blinking_triangle.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC169FD.
    case 0xC169FF: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/enable_blinking_triangle.asm:7 RTS
    case 0xC16A00: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/equip_character_from_inventory.asm (source_named).
bool execute_text_ccs_equip_character_from_inventory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:3 BEGIN_C_FUNCTION
    case 0xC1583D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC1583F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15840: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15841: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15842: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15842.
    case 0xC15844: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15845: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:10 END_STACK_VARS
    case 0xC15846: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:11 TXY
    case 0xC15847: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:12 STY @LOCAL01
    case 0xC15848: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    case 0xC1584A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1584A.
    case 0xC1584C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:14 CLC
    case 0xC1584D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1584E: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15851: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15853: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15855: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15857: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:17 TYA
    case 0xC15859: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1585A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1585C: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1585F: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15862: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15864: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    case 0xC15867: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00583D, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:23 LDA #.LOWORD(CC_1F_83)
    // Overlapping static entry reached from 0xC15867.
    case 0xC15869: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:24 BRA @UNKNOWN7
    case 0xC1586A: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1586C: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    case 0xC1586F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1586F.
    case 0xC15871: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:28 TAX
    case 0xC15872: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:29 BEQ @UNKNOWN3
    case 0xC15873: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:30 TXA
    case 0xC15875: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:31 BRA @UNKNOWN4
    case 0xC15876: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:33 JSR GET_WORKING_MEMORY
    case 0xC15878: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:34 LDA @VIRTUAL06
    case 0xC1587B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:36 STA @VIRTUAL02
    case 0xC1587D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:37 LDY @LOCAL01
    case 0xC1587F: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:38 BEQ @UNKNOWN5
    case 0xC15881: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:39 TYA
    case 0xC15883: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:40 BRA @UNKNOWN6
    case 0xC15884: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC15886: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:43 LDA @VIRTUAL06
    case 0xC15889: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:45 TAX
    case 0xC1588B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/equip_character_from_inventory.asm:46 LDA @VIRTUAL02
    case 0xC1588C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:47 JSR EQUIP_ITEM
    case 0xC1588E: cpu.execute_instruction<0x20>(0x009066, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15891: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC15893: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15895: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15897: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15899: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1589B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/equip_character_from_inventory.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC1589D: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    case 0xC158A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/equip_character_from_inventory.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC158A0.
    case 0xC158A2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC158A3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/equip_character_from_inventory.asm:53 END_C_FUNCTION
    case 0xC158A4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/escargo_express_store.asm (source_named).
bool execute_text_ccs_escargo_express_store_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/escargo_express_store.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16124: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC16126: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC16127: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC16128: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC16129: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16129.
    case 0xC1612B: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC1612C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/escargo_express_store.asm:8 END_STACK_VARS
    case 0xC1612D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/escargo_express_store.asm:9 CPX #$0000
    case 0xC1612E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/escargo_express_store.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC1612B.
    case 0xC1612F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/escargo_express_store.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC1612E.
    case 0xC16130: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/escargo_express_store.asm:10 BEQ @ARG_IS_ZERO
    case 0xC16131: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/escargo_express_store.asm:11 TXA
    case 0xC16133: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/escargo_express_store.asm:12 BRA @ARG_IS_NONZERO
    case 0xC16134: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/escargo_express_store.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC16136: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/escargo_express_store.asm:15 LDA @VIRTUAL06
    case 0xC16139: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/escargo_express_store.asm:17 JSR ESCARGO_EXPRESS_STORE
    case 0xC1613B: cpu.execute_instruction<0x20>(0x00913D, 3); return true;
    // src/text/ccs/escargo_express_store.asm:18 LDA #NULL
    case 0xC1613E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/escargo_express_store.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC1613E.
    case 0xC16140: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/escargo_express_store.asm:19 PLD
    case 0xC16141: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/escargo_express_store.asm:20 RTS
    case 0xC16142: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/force_text_alignment.asm (source_named).
bool execute_text_ccs_force_text_alignment_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/force_text_alignment.asm:3 BEGIN_C_FUNCTION
    case 0xC14509: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC1450E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1450E.
    case 0xC14510: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC14511: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/force_text_alignment.asm:9 END_STACK_VARS
    case 0xC14512: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment.asm:10 LDA #1
    case 0xC14513: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/force_text_alignment.asm:10 LDA #1
    // Overlapping static entry reached from 0xC14510.
    case 0xC14514: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/force_text_alignment.asm:10 LDA #1
    // Overlapping static entry reached from 0xC14513.
    case 0xC14515: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/force_text_alignment.asm:11 CLC
    case 0xC14516: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14517: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC1451A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC1451C: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC1451E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/force_text_alignment.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14520: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/force_text_alignment.asm:14 TXA
    case 0xC14522: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14523: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/force_text_alignment.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14525: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/force_text_alignment.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14528: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/force_text_alignment.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC1452B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/force_text_alignment.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1452D: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/force_text_alignment.asm:20 LDA #.LOWORD(CC_18_05)
    case 0xC14530: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x004509, 3); return true;
    // src/text/ccs/force_text_alignment.asm:20 LDA #.LOWORD(CC_18_05)
    // Overlapping static entry reached from 0xC14530.
    case 0xC14532: cpu.execute_instruction<0x45>(0x000080, 2); return true;
    // src/text/ccs/force_text_alignment.asm:21 BRA @UNKNOWN5
    case 0xC14533: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/force_text_alignment.asm:21 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC14532.
    case 0xC14534: cpu.execute_instruction<0x21>(0x0000AD, 2); return true;
    // src/text/ccs/force_text_alignment.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14535: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/force_text_alignment.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14534.
    case 0xC14536: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/force_text_alignment.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC14536.
    case 0xC14537: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/force_text_alignment.asm:24 AND #$00FF
    case 0xC14538: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/force_text_alignment.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14537.
    case 0xC14539: cpu.execute_instruction<0xFF>(0x0E8500, 4); return true;
    // src/text/ccs/force_text_alignment.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14538.
    case 0xC1453A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/force_text_alignment.asm:25 STA @LOCAL00
    case 0xC1453B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/force_text_alignment.asm:26 LDA FORCE_LEFT_TEXT_ALIGNMENT
    case 0xC1453D: cpu.execute_instruction<0xAD>(0x005E71, 3); return true;
    // src/text/ccs/force_text_alignment.asm:27 AND #$00FF
    case 0xC14540: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/force_text_alignment.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14540.
    case 0xC14542: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/force_text_alignment.asm:28 BEQ @UNKNOWN3
    case 0xC14543: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/ccs/force_text_alignment.asm:29 LDA @LOCAL00
    case 0xC14545: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/force_text_alignment.asm:30 JSL UNKNOWN_C43D75
    case 0xC14547: cpu.execute_instruction<0x22>(0xC43D75, 4); return true;
    // src/text/ccs/force_text_alignment.asm:31 BRA @UNKNOWN4
    case 0xC1454B: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/ccs/force_text_alignment.asm:33 LDA @LOCAL00
    case 0xC1454D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/force_text_alignment.asm:34 JSL UNKNOWN_C438A5
    case 0xC1454F: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/ccs/force_text_alignment.asm:36 LDA #NULL
    case 0xC14553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/force_text_alignment.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14553.
    case 0xC14555: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/force_text_alignment.asm:38 END_C_FUNCTION
    case 0xC14556: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/force_text_alignment.asm:38 END_C_FUNCTION
    case 0xC14557: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_character_number.asm (source_named).
bool execute_text_ccs_get_character_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_character_number.asm:3 BEGIN_C_FUNCTION
    case 0xC14723: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14725: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14726: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14727: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC14728: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14728.
    case 0xC1472A: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC1472B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_character_number.asm:9 END_STACK_VARS
    case 0xC1472C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_character_number.asm:10 CPX #0
    case 0xC1472D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_character_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC1472A.
    case 0xC1472E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_character_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC1472D.
    case 0xC1472F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_character_number.asm:11 BEQ @UNKNOWN0
    case 0xC14730: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_character_number.asm:12 TXA
    case 0xC14732: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_character_number.asm:13 BRA @UNKNOWN1
    case 0xC14733: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_character_number.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14735: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_character_number.asm:16 LDA @VIRTUAL06
    case 0xC14738: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_character_number.asm:18 JSR UNKNOWN_C190E6
    case 0xC1473A: cpu.execute_instruction<0x20>(0x0090E6, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_character_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1473D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_character_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1473F: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14741: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14743: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14745: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_character_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14747: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_character_number.asm:21 JSR SET_WORKING_MEMORY
    case 0xC14749: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_character_number.asm:22 LDA #NULL
    case 0xC1474C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_character_number.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC1474C.
    case 0xC1474E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_character_number.asm:23 END_C_FUNCTION
    case 0xC1474F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_character_number.asm:23 END_C_FUNCTION
    case 0xC14750: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_character_status.asm (source_named).
bool execute_text_ccs_get_character_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC15007: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC15009: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC1500A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC1500B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC1500C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1500C.
    case 0xC1500E: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC1500F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_character_status.asm:11 END_STACK_VARS
    case 0xC15010: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:12 LDA #1
    case 0xC15011: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_character_status.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1500E.
    case 0xC15012: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/get_character_status.asm:12 LDA #1
    // Overlapping static entry reached from 0xC15011.
    case 0xC15013: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_character_status.asm:13 CLC
    case 0xC15014: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15015: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC15018: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1501A: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1501C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    // Overlapping static entry reached from 0xC1509B.
    case 0xC1501D: cpu.execute_instruction<0x02>(0x000030, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_character_status.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1501E: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/get_character_status.asm:16 TXA
    case 0xC15020: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15021: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_character_status.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15023: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/get_character_status.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15026: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/get_character_status.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15029: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_character_status.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1502B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/get_character_status.asm:22 LDA #.LOWORD(CC_19_16)
    case 0xC1502E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x005007, 3); return true;
    // src/text/ccs/get_character_status.asm:22 LDA #.LOWORD(CC_19_16)
    // Overlapping static entry reached from 0xC1502E.
    case 0xC15030: cpu.execute_instruction<0x50>(0x000080, 2); return true;
    // src/text/ccs/get_character_status.asm:23 BRA @UNKNOWN6
    case 0xC15031: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/get_character_status.asm:23 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15030.
    case 0xC15032: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC15033: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/get_character_status.asm:26 AND #$00FF
    case 0xC15036: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_character_status.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC15036.
    case 0xC15038: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/get_character_status.asm:27 STA @LOCAL02
    case 0xC15039: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/get_character_status.asm:28 CPX #0
    case 0xC1503B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_character_status.asm:28 CPX #0
    // Overlapping static entry reached from 0xC1503B.
    case 0xC1503D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_character_status.asm:29 BEQ @UNKNOWN3
    case 0xC1503E: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/get_character_status.asm:30 STX @LOCAL01
    case 0xC15040: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/get_character_status.asm:31 BRA @UNKNOWN4
    case 0xC15042: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/get_character_status.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC15044: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_character_status.asm:34 LDA @VIRTUAL06
    case 0xC15047: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_character_status.asm:35 TAX
    case 0xC15049: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_character_status.asm:36 STX @LOCAL01
    case 0xC1504A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/get_character_status.asm:38 LDA @LOCAL02
    case 0xC1504C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/get_character_status.asm:39 BNE @UNKNOWN5
    case 0xC1504E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/get_character_status.asm:40 JSR GET_WORKING_MEMORY
    case 0xC15050: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/get_character_status.asm:41 LDA @VIRTUAL06
    case 0xC15053: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_character_status.asm:43 LDX @LOCAL01
    case 0xC15055: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/get_character_status.asm:44 JSL CHECK_STATUS_GROUP
    case 0xC15057: cpu.execute_instruction<0x22>(0xC458AF, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_character_status.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1505B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_character_status.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC1505D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1505F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15061: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15063: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_character_status.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15065: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_character_status.asm:47 JSR SET_WORKING_MEMORY
    case 0xC15067: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_character_status.asm:48 LDA #NULL
    case 0xC1506A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_character_status.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC1506A.
    case 0xC1506C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_character_status.asm:50 END_C_FUNCTION
    case 0xC1506D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_character_status.asm:50 END_C_FUNCTION
    case 0xC1506E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_direction_from_character_to_entity.asm (source_named).
bool execute_text_ccs_get_direction_from_character_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC168A0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC168A5.
    case 0xC168A7: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:10 END_STACK_VARS
    case 0xC168A9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:11 TXA
    case 0xC168AA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:12 STA @LOCAL01
    case 0xC168AB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    case 0xC168AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:13 LDA #3
    // Overlapping static entry reached from 0xC168AD.
    case 0xC168AF: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:14 CLC
    case 0xC168B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168B1: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168B4: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168B6: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168B8: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC168BA: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:17 LDA @LOCAL01
    case 0xC168BC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC168BE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168C0: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC168C3: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC168C6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC168C8: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    case 0xC168CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x0068A0, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:23 LDA #.LOWORD(CC_19_22)
    // Overlapping static entry reached from 0xC168CB.
    case 0xC168CD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:24 BRA @UNKNOWN7
    case 0xC168CE: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC168D0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:27 LDA CC_ARGUMENT_STORAGE
    case 0xC168D2: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:28 STA @VIRTUAL00
    case 0xC168D5: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC168D7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:30 LDA @VIRTUAL00
    case 0xC168D9: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    case 0xC168DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC168DB.
    case 0xC168DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:32 BEQ @ARG_1_IS_ZERO
    case 0xC168DE: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:33 SEP #PROC_FLAGS::ACCUM8
    case 0xC168E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E2: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E6: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168E8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:34 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC168EA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:35 BRA @ARG_1_IS_NONZERO
    case 0xC168EC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:37 JSR GET_WORKING_MEMORY
    case 0xC168EE: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:39 SEP #PROC_FLAGS::ACCUM8
    case 0xC168F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:40 LDA @VIRTUAL06
    case 0xC168F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:41 STA @VIRTUAL01
    case 0xC168F5: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:42 LDA CC_ARGUMENT_STORAGE+1
    case 0xC168F7: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:43 STA @VIRTUAL00
    case 0xC168FA: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:44 SEP #PROC_FLAGS::INDEX8
    case 0xC168FC: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:45 LDY #8
    case 0xC168FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00C208, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC16900: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:46 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC168FE.
    case 0xC16901: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:47 LDA @LOCAL01
    case 0xC16902: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:48 JSL ASL16_ENTRY2
    case 0xC16904: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:49 STA @VIRTUAL02
    case 0xC16908: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC1690A: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    case 0xC1690D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:51 AND #$00FF
    // Overlapping static entry reached from 0xC1690D.
    case 0xC1690F: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:52 ORA @VIRTUAL02
    case 0xC16910: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:53 BEQ @ARG_2_IS_ZERO
    case 0xC16912: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16914: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:54 STORE_INT1632 @VIRTUAL06
    case 0xC16916: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:55 BRA @ARG_2_IS_NONZERO
    case 0xC16918: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:57 JSR GET_ARGUMENT_MEMORY
    case 0xC1691A: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:59 LDA @VIRTUAL06
    case 0xC1691D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:60 REP #PROC_FLAGS::INDEX8
    case 0xC1691F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:61 TAY
    case 0xC16921: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:62 LDA @VIRTUAL00
    case 0xC16922: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    case 0xC16924: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC16924.
    case 0xC16926: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:64 TAX
    case 0xC16927: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:65 DEX
    case 0xC16928: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:66 LDA @VIRTUAL01
    case 0xC16929: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    case 0xC1692B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1692B.
    case 0xC1692D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:68 JSL UNKNOWN_C462E4
    case 0xC1692E: cpu.execute_instruction<0x22>(0xC462E4, 4); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:69 INC
    case 0xC16932: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16933: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:70 STORE_INT1632 @VIRTUAL06
    case 0xC16935: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16937: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16939: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1693B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:71 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1693D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:72 JSR SET_ARGUMENT_MEMORY
    case 0xC1693F: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    case 0xC16942: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_direction_from_character_to_entity.asm:73 LDA #NULL
    // Overlapping static entry reached from 0xC16942.
    case 0xC16944: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16945: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_character_to_entity.asm:75 END_C_FUNCTION
    case 0xC16946: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm (source_named).
bool execute_text_ccs_get_direction_from_sprite_entity_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16A7B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A7D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A7E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A7F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16A80.
    case 0xC16A82: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A83: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16A84: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:11 TXA
    case 0xC16A85: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16A86: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    case 0xC16A88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16A88.
    case 0xC16A8A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:14 CLC
    case 0xC16A8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A8C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A8F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A91: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A93: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16A95: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16A97: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A99: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A9B: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16A9E: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16AA1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16AA3: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    case 0xC16AA6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x006A7B, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_24)
    // Overlapping static entry reached from 0xC16AA6.
    case 0xC16AA8: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16AA9: cpu.execute_instruction<0x4C>(0x006B29, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16AAC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:27 LDA #8
    case 0xC16AAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC16AB0: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC16AAE.
    case 0xC16AB1: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:29 TAY
    case 0xC16AB2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC16AB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16AB5: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    case 0xC16AB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16AB8.
    case 0xC16ABA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16ABB: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC16ABF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC16AC1: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    case 0xC16AC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16AC4.
    case 0xC16AC6: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16AC7: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16AC9: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:39 TAX
    case 0xC16ACB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16ACC: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:41 TXA
    case 0xC16ACE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16ACF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC16AD1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC16AD3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC16AD5: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC16AD8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC16ADA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC16ADC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC16ADE: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC16AE1: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC16AE3: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:53 LDY #8
    case 0xC16AE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00C208, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC16AE7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16AE5.
    case 0xC16AE8: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC16AE9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC16AEB: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC16AEF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC16AF1: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    case 0xC16AF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC16AF4.
    case 0xC16AF6: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC16AF7: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC16AF9: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16AFB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC16AFD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC16AFF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC16B01: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC16B04: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC16B06: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:69 TAY
    case 0xC16B08: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC16B09: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    case 0xC16B0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC16B0B.
    case 0xC16B0D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:72 TAX
    case 0xC16B0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:73 DEX
    case 0xC16B0F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC16B10: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:75 JSL UNKNOWN_C462C9
    case 0xC16B12: cpu.execute_instruction<0x22>(0xC462C9, 4); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:76 INC
    case 0xC16B16: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16B17: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC16B19: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B1B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B1D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16B21: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC16B23: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    case 0xC16B26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC16B26.
    case 0xC16B28: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16B29: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_sprite_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC16B2A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm (source_named).
bool execute_text_ccs_get_direction_from_tpt_entity_to_entity_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:3 BEGIN_C_FUNCTION
    case 0xC16947: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16949: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1694C.
    case 0xC1694E: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC1694F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:10 END_STACK_VARS
    case 0xC16950: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:11 TXA
    case 0xC16951: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:12 STA @LOCAL01
    case 0xC16952: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    case 0xC16954: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:13 LDA #4
    // Overlapping static entry reached from 0xC16954.
    case 0xC16956: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:14 CLC
    case 0xC16957: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16958: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1695B: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1695D: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1695F: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16961: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:17 LDA @LOCAL01
    case 0xC16963: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16965: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16967: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1696A: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1696D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1696F: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    case 0xC16972: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000047, 2); else cpu.execute_instruction<0xA9>(0x006947, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:23 LDA #.LOWORD(CC_19_23)
    // Overlapping static entry reached from 0xC16972.
    case 0xC16974: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x00F54C, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    case 0xC16975: cpu.execute_instruction<0x4C>(0x0069F5, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC16974.
    case 0xC16976: cpu.execute_instruction<0xF5>(0x000069, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:24 JMP @UNKNOWN7
    // Overlapping static entry reached from 0xC16974.
    case 0xC16977: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x0020E2, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC16978: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:26 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16977.
    case 0xC16979: cpu.execute_instruction<0x20>(0x0008A9, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:27 LDA #8
    case 0xC1697A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    case 0xC1697C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:28 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC1697A.
    case 0xC1697D: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:29 TAY
    case 0xC1697E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:30 REP #PROC_FLAGS::ACCUM8
    case 0xC1697F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:31 LDA CC_ARGUMENT_STORAGE+1
    case 0xC16981: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    case 0xC16984: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC16984.
    case 0xC16986: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:33 JSL ASL16_ENTRY2
    case 0xC16987: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:34 STA @VIRTUAL02
    case 0xC1698B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:35 LDA CC_ARGUMENT_STORAGE
    case 0xC1698D: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    case 0xC16990: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC16990.
    case 0xC16992: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:37 ORA @VIRTUAL02
    case 0xC16993: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:38 REP #PROC_FLAGS::INDEX8
    case 0xC16995: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:39 TAX
    case 0xC16997: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:40 BEQ @ARG_1_IS_ZERO
    case 0xC16998: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:41 TXA
    case 0xC1699A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC1699B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:42 STORE_INT1632 @VIRTUAL06
    case 0xC1699D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:43 BRA @ARG_1_IS_NONZERO
    case 0xC1699F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:45 JSR GET_WORKING_MEMORY
    case 0xC169A1: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:47 LDA @VIRTUAL06
    case 0xC169A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:48 STA @VIRTUAL02
    case 0xC169A6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:49 SEP #PROC_FLAGS::ACCUM8
    case 0xC169A8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:50 LDA CC_ARGUMENT_STORAGE+2
    case 0xC169AA: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:51 STA @VIRTUAL00
    case 0xC169AD: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:52 SEP #PROC_FLAGS::INDEX8
    case 0xC169AF: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:53 LDY #8
    case 0xC169B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00C208, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    case 0xC169B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:54 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC169B1.
    case 0xC169B4: cpu.execute_instruction<0x20>(0x0012A5, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:55 LDA @LOCAL01
    case 0xC169B5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:56 JSL ASL16_ENTRY2
    case 0xC169B7: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:57 STA @VIRTUAL04
    case 0xC169BB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:58 LDA CC_ARGUMENT_STORAGE+3
    case 0xC169BD: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    case 0xC169C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC169C0.
    case 0xC169C2: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:60 ORA @VIRTUAL04
    case 0xC169C3: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:61 BEQ @ARG_2_IS_ZERO
    case 0xC169C5: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC169C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:62 STORE_INT1632 @VIRTUAL06
    case 0xC169C9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:63 BRA @ARG_2_IS_NONZERO
    case 0xC169CB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:65 JSR GET_ARGUMENT_MEMORY
    case 0xC169CD: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:67 LDA @VIRTUAL06
    case 0xC169D0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:68 REP #PROC_FLAGS::INDEX8
    case 0xC169D2: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:69 TAY
    case 0xC169D4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:70 LDA @VIRTUAL00
    case 0xC169D5: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    case 0xC169D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:71 AND #$00FF
    // Overlapping static entry reached from 0xC169D7.
    case 0xC169D9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:72 TAX
    case 0xC169DA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:73 DEX
    case 0xC169DB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:74 LDA @VIRTUAL02
    case 0xC169DC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:75 JSL UNKNOWN_C462AE
    case 0xC169DE: cpu.execute_instruction<0x22>(0xC462AE, 4); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:76 INC
    case 0xC169E2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC169E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:77 STORE_INT1632 @VIRTUAL06
    case 0xC169E5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169E7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169E9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169EB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:78 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC169ED: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:79 JSR SET_ARGUMENT_MEMORY
    case 0xC169EF: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    case 0xC169F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:80 LDA #NULL
    // Overlapping static entry reached from 0xC169F2.
    case 0xC169F4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC169F5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_direction_from_tpt_entity_to_entity.asm:82 END_C_FUNCTION
    case 0xC169F6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_event_flag.asm (source_named).
bool execute_text_ccs_get_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC1435F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14361: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14362: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14363: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14364: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC14364.
    case 0xC14366: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14367: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_event_flag.asm:10 END_STACK_VARS
    case 0xC14368: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_event_flag.asm:11 TXA
    case 0xC14369: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_event_flag.asm:12 STA @LOCAL01
    case 0xC1436A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_event_flag.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1436C: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/get_event_flag.asm:14 BNE @UNKNOWN0
    case 0xC1436F: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/get_event_flag.asm:15 LDA @LOCAL01
    case 0xC14371: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_event_flag.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14373: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_event_flag.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14375: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/get_event_flag.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14378: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/get_event_flag.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC1437B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_event_flag.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1437D: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/get_event_flag.asm:21 LDA #.LOWORD(CC_07)
    case 0xC14380: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005F, 2); else cpu.execute_instruction<0xA9>(0x00435F, 3); return true;
    // src/text/ccs/get_event_flag.asm:21 LDA #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC14380.
    case 0xC14382: cpu.execute_instruction<0x43>(0x000080, 2); return true;
    // src/text/ccs/get_event_flag.asm:22 BRA @UNKNOWN2
    case 0xC14383: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/text/ccs/get_event_flag.asm:22 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC14382.
    case 0xC14384: cpu.execute_instruction<0x31>(0x0000E2, 2); return true;
    // src/text/ccs/get_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC14385: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/get_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC14384.
    case 0xC14386: cpu.execute_instruction<0x10>(0x0000A0, 2); return true;
    // src/text/ccs/get_event_flag.asm:25 LDY #8
    case 0xC14387: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/get_event_flag.asm:25 LDY #8
    // Overlapping static entry reached from 0xC14386.
    case 0xC14388: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/get_event_flag.asm:26 LDA @LOCAL01
    case 0xC14389: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_event_flag.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14387.
    case 0xC1438A: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/get_event_flag.asm:27 JSL ASL16_ENTRY2
    case 0xC1438B: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/get_event_flag.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1438A.
    case 0xC1438C: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/get_event_flag.asm:28 STA @VIRTUAL02
    case 0xC1438F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_event_flag.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC14391: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/get_event_flag.asm:30 AND #$00FF
    case 0xC14394: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_event_flag.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC14394.
    case 0xC14396: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/get_event_flag.asm:31 ORA @VIRTUAL02
    case 0xC14397: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/get_event_flag.asm:32 JSL GET_EVENT_FLAG
    case 0xC14399: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC1439D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC1439D.
    case 0xC1439F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A4: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:33 SIGN_EXTENDA1632 @VIRTUAL06
    case 0xC143A6: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_event_flag.asm:34 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC143AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_event_flag.asm:35 JSR SET_WORKING_MEMORY
    case 0xC143B0: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_event_flag.asm:36 LDA #NULL
    case 0xC143B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_event_flag.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC143B3.
    case 0xC143B5: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_event_flag.asm:38 END_C_FUNCTION
    case 0xC143B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_event_flag.asm:38 END_C_FUNCTION
    case 0xC143B7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_exp_for_next_level.asm (source_named).
bool execute_text_ccs_get_exp_for_next_level_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:3 BEGIN_C_FUNCTION
    case 0xC15384: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15386: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15387: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15388: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC15389: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC15389.
    case 0xC1538B: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC1538C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:9 END_STACK_VARS
    case 0xC1538D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_exp_for_next_level.asm:10 CPX #0
    case 0xC1538E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:10 CPX #0
    // Overlapping static entry reached from 0xC1538B.
    case 0xC1538F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:10 CPX #0
    // Overlapping static entry reached from 0xC1538E.
    case 0xC15390: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:11 BEQ @ARG_IS_ZERO
    case 0xC15391: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:12 TXA
    case 0xC15393: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_exp_for_next_level.asm:13 BRA @ARG_IS_NONZERO
    case 0xC15394: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC15396: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:16 LDA @VIRTUAL06
    case 0xC15399: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:18 JSL GET_REQUIRED_EXP
    case 0xC1539B: cpu.execute_instruction<0x22>(0xC4599A, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1539F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:19 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC153A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_exp_for_next_level.asm:20 JSR SET_WORKING_MEMORY
    case 0xC153A7: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:21 LDA #NULL
    case 0xC153AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_exp_for_next_level.asm:21 LDA #NULL
    // Overlapping static entry reached from 0xC153AA.
    case 0xC153AC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:22 END_C_FUNCTION
    case 0xC153AD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_exp_for_next_level.asm:22 END_C_FUNCTION
    case 0xC153AE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_gender_etc.asm (source_named).
bool execute_text_ccs_get_gender_etc_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_gender_etc.asm:3 BEGIN_C_FUNCTION
    case 0xC1516B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    case 0xC1516D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    case 0xC1516E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    case 0xC1516F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    case 0xC15170: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15170.
    case 0xC15172: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    case 0xC15173: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_gender_etc.asm:10 END_STACK_VARS
    case 0xC15174: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_gender_etc.asm:11 STX @LOCAL01
    case 0xC15175: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/get_gender_etc.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC15172.
    case 0xC15176: cpu.execute_instruction<0x12>(0x0000AE, 2); return true;
    // src/text/ccs/get_gender_etc.asm:12 LDX CURRENT_ATTACKER
    case 0xC15177: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/ccs/get_gender_etc.asm:12 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC15176.
    case 0xC15178: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/text/ccs/get_gender_etc.asm:13 LDA a:battler::ally_or_enemy,X
    case 0xC1517A: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/ccs/get_gender_etc.asm:14 AND #$00FF
    case 0xC1517D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_gender_etc.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC1517D.
    case 0xC1517F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/ccs/get_gender_etc.asm:15 CMP #1
    case 0xC15180: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/ccs/get_gender_etc.asm:15 CMP #1
    // Overlapping static entry reached from 0xC15180.
    case 0xC15182: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/get_gender_etc.asm:16 BNE @HANDLE_ALLY
    case 0xC15183: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/text/ccs/get_gender_etc.asm:17 LDX @LOCAL01
    case 0xC15185: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/get_gender_etc.asm:18 CPX #1
    case 0xC15187: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/text/ccs/get_gender_etc.asm:18 CPX #1
    // Overlapping static entry reached from 0xC15187.
    case 0xC15189: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_gender_etc.asm:19 BEQ @RETURN_ENEMY_GENDER
    case 0xC1518A: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/text/ccs/get_gender_etc.asm:20 LDA ENEMIES_IN_BATTLE
    case 0xC1518C: cpu.execute_instruction<0xAD>(0x009F8A, 3); return true;
    // src/text/ccs/get_gender_etc.asm:21 CMP #3
    case 0xC1518F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/ccs/get_gender_etc.asm:21 CMP #3
    // Overlapping static entry reached from 0xC1518F.
    case 0xC15191: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/get_gender_etc.asm:22 BLTEQ @THREE_OR_FEWER_ENEMIES
    case 0xC15192: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/get_gender_etc.asm:22 BLTEQ @THREE_OR_FEWER_ENEMIES
    case 0xC15194: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/get_gender_etc.asm:23 LDX #3
    case 0xC15196: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/text/ccs/get_gender_etc.asm:23 LDX #3
    // Overlapping static entry reached from 0xC15196.
    case 0xC15198: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/get_gender_etc.asm:24 BRA @RETURN_CAPPED_ENEMY_COUNT
    case 0xC15199: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_gender_etc.asm:26 LDX ENEMIES_IN_BATTLE
    case 0xC1519B: cpu.execute_instruction<0xAE>(0x009F8A, 3); return true;
    // src/text/ccs/get_gender_etc.asm:28 TXA
    case 0xC1519E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_gender_etc.asm:29 BRA @RETURN
    case 0xC1519F: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/text/ccs/get_gender_etc.asm:31 LDX CURRENT_ATTACKER
    case 0xC151A1: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/ccs/get_gender_etc.asm:32 LDA __BSS_START__,X
    case 0xC151A4: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/get_gender_etc.asm:33 LDY #.SIZEOF(enemy_data)
    case 0xC151A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/ccs/get_gender_etc.asm:33 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC151A7.
    case 0xC151A9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/get_gender_etc.asm:34 JSL MULT168
    case 0xC151AA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/get_gender_etc.asm:35 CLC
    case 0xC151AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_gender_etc.asm:36 ADC #enemy_data::gender
    case 0xC151AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/text/ccs/get_gender_etc.asm:36 ADC #enemy_data::gender
    // Overlapping static entry reached from 0xC151AF.
    case 0xC151B1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_gender_etc.asm:37 TAX
    case 0xC151B2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_gender_etc.asm:38 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC151B3: cpu.execute_instruction<0xBF>(0xD59589, 4); return true;
    // src/text/ccs/get_gender_etc.asm:39 AND #$00FF
    case 0xC151B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_gender_etc.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC151B7.
    case 0xC151B9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/get_gender_etc.asm:40 BRA @RETURN
    case 0xC151BA: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/ccs/get_gender_etc.asm:42 LDX @LOCAL01
    case 0xC151BC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/get_gender_etc.asm:43 CPX #1
    case 0xC151BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/text/ccs/get_gender_etc.asm:43 CPX #1
    // Overlapping static entry reached from 0xC151BE.
    case 0xC151C0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_gender_etc.asm:44 BEQ @RETURN_ALLY_GENDER
    case 0xC151C1: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/text/ccs/get_gender_etc.asm:45 JSL UNKNOWN_C2272F
    case 0xC151C3: cpu.execute_instruction<0x22>(0xC2272F, 4); return true;
    // src/text/ccs/get_gender_etc.asm:46 TAX
    case 0xC151C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_gender_etc.asm:47 CPX #3
    case 0xC151C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/ccs/get_gender_etc.asm:47 CPX #3
    // Overlapping static entry reached from 0xC151C8.
    case 0xC151CA: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/ccs/get_gender_etc.asm:48 BLTEQ @THREE_OR_FEWER_ALLIES
    case 0xC151CB: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/ccs/get_gender_etc.asm:48 BLTEQ @THREE_OR_FEWER_ALLIES
    case 0xC151CD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_gender_etc.asm:49 LDX #3
    case 0xC151CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000003, 2); else cpu.execute_instruction<0xA2>(0x000003, 3); return true;
    // src/text/ccs/get_gender_etc.asm:49 LDX #3
    // Overlapping static entry reached from 0xC151CF.
    case 0xC151D1: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/ccs/get_gender_etc.asm:51 TXA
    case 0xC151D2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_gender_etc.asm:52 BRA @RETURN
    case 0xC151D3: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/ccs/get_gender_etc.asm:54 LDX CURRENT_ATTACKER
    case 0xC151D5: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/ccs/get_gender_etc.asm:55 LDA a:battler::id,X
    case 0xC151D8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/get_gender_etc.asm:56 CMP #2
    case 0xC151DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/ccs/get_gender_etc.asm:56 CMP #2
    // Overlapping static entry reached from 0xC151DB.
    case 0xC151DD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/get_gender_etc.asm:57 BNE @NOT_PAULA
    case 0xC151DE: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/get_gender_etc.asm:58 LDA #2
    case 0xC151E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/get_gender_etc.asm:58 LDA #2
    // Overlapping static entry reached from 0xC151E0.
    case 0xC151E2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/get_gender_etc.asm:59 BRA @RETURN
    case 0xC151E3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/get_gender_etc.asm:61 LDA #1
    case 0xC151E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_gender_etc.asm:61 LDA #1
    // Overlapping static entry reached from 0xC151E5.
    case 0xC151E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_gender_etc.asm:63 STORE_INT1632 @VIRTUAL06
    case 0xC151E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_gender_etc.asm:63 STORE_INT1632 @VIRTUAL06
    case 0xC151EA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151EC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151EE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151F0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_gender_etc.asm:64 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC151F2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_gender_etc.asm:65 JSR SET_WORKING_MEMORY
    case 0xC151F4: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_gender_etc.asm:66 LDA #NULL
    case 0xC151F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_gender_etc.asm:66 LDA #NULL
    // Overlapping static entry reached from 0xC151F7.
    case 0xC151F9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_gender_etc.asm:67 END_C_FUNCTION
    case 0xC151FA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_gender_etc.asm:67 END_C_FUNCTION
    case 0xC151FB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_item_number.asm (source_named).
bool execute_text_ccs_get_item_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_number.asm:3 BEGIN_C_FUNCTION
    case 0xC1597F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_number.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1FA3F.
    case 0xC15980: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15981: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15982: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15983: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15984: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15984.
    case 0xC15986: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15987: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_number.asm:10 END_STACK_VARS
    case 0xC15988: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:11 TXY
    case 0xC15989: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:12 STY @LOCAL01
    case 0xC1598A: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/get_item_number.asm:13 LDA #1
    case 0xC1598C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_item_number.asm:13 LDA #1
    // Overlapping static entry reached from 0xC1598C.
    case 0xC1598E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/get_item_number.asm:14 CLC
    case 0xC1598F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15990: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15993: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15995: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15997: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/get_item_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15999: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/get_item_number.asm:17 TYA
    case 0xC1599B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1599C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_item_number.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1599E: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/get_item_number.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC159A1: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/get_item_number.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC159A4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/get_item_number.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC159A6: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/get_item_number.asm:23 LDA #.LOWORD(CC_19_19)
    case 0xC159A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00597F, 3); return true;
    // src/text/ccs/get_item_number.asm:23 LDA #.LOWORD(CC_19_19)
    // Overlapping static entry reached from 0xC159A9.
    case 0xC159AB: cpu.execute_instruction<0x59>(0x004980, 3); return true;
    // src/text/ccs/get_item_number.asm:24 BRA @UNKNOWN7
    case 0xC159AC: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/text/ccs/get_item_number.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC159AE: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/get_item_number.asm:27 AND #$00FF
    case 0xC159B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_item_number.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC159B1.
    case 0xC159B3: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_item_number.asm:28 TAX
    case 0xC159B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:29 BEQ @ARG_IS_ZERO
    case 0xC159B5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_number.asm:30 TXA
    case 0xC159B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:31 BRA @ARG_IS_NONZERO
    case 0xC159B8: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_number.asm:33 JSR GET_WORKING_MEMORY
    case 0xC159BA: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/get_item_number.asm:34 LDA @VIRTUAL06
    case 0xC159BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_item_number.asm:36 STA @VIRTUAL02
    case 0xC159BF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_item_number.asm:37 LDY @LOCAL01
    case 0xC159C1: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/get_item_number.asm:38 BEQ @UNKNOWN5
    case 0xC159C3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_number.asm:39 TYA
    case 0xC159C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:40 BRA @UNKNOWN6
    case 0xC159C6: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_number.asm:42 JSR GET_ARGUMENT_MEMORY
    case 0xC159C8: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_item_number.asm:43 LDA @VIRTUAL06
    case 0xC159CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_item_number.asm:45 TAX
    case 0xC159CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_number.asm:46 LDA @VIRTUAL02
    case 0xC159CE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/get_item_number.asm:47 JSL GET_CHARACTER_ITEM
    case 0xC159D0: cpu.execute_instruction<0x22>(0xC3E977, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC159D4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:48 STORE_INT1632 @VIRTUAL06
    case 0xC159D6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159D8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159DA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159DC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159DE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_number.asm:50 JSR SET_ARGUMENT_MEMORY
    case 0xC159E0: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC159E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC159E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:51 MOVE_INT1632 @VIRTUAL02, @VIRTUAL06
    case 0xC159E7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159EB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_number.asm:52 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC159EF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_number.asm:53 JSR SET_WORKING_MEMORY
    case 0xC159F1: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_item_number.asm:54 LDA #NULL
    case 0xC159F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_item_number.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC159F4.
    case 0xC159F6: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_number.asm:56 END_C_FUNCTION
    case 0xC159F7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_number.asm:56 END_C_FUNCTION
    case 0xC159F8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_item_price.asm (source_named).
bool execute_text_ccs_get_item_price_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_price.asm:3 BEGIN_C_FUNCTION
    case 0xC14EF8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC14EFA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC14EFB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC14EFC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC14EFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14EFD.
    case 0xC14EFF: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC14F00: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_price.asm:9 END_STACK_VARS
    case 0xC14F01: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:10 CPX #0
    case 0xC14F02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_item_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14EFF.
    case 0xC14F03: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_item_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14F02.
    case 0xC14F04: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_item_price.asm:11 BEQ @UNKNOWN0
    case 0xC14F05: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_price.asm:12 TXA
    case 0xC14F07: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:13 BRA @UNKNOWN1
    case 0xC14F08: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_price.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14F0A: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_item_price.asm:16 LDA @VIRTUAL06
    case 0xC14F0D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC14F0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC14F0F.
    case 0xC14F11: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/ccs/get_item_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC14F12: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/get_item_price.asm:19 CLC
    case 0xC14F16: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:20 ADC #item::cost
    case 0xC14F17: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/text/ccs/get_item_price.asm:20 ADC #item::cost
    // Overlapping static entry reached from 0xC14F17.
    case 0xC14F19: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_item_price.asm:21 TAX
    case 0xC14F1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_price.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC14F1B: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_price.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC14F1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_price.asm:23 STORE_INT1632 @VIRTUAL06
    case 0xC14F21: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F23: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F25: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F27: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_price.asm:24 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F29: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_price.asm:25 JSR SET_WORKING_MEMORY
    case 0xC14F2B: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_item_price.asm:26 LDA #NULL
    case 0xC14F2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_item_price.asm:26 LDA #NULL
    // Overlapping static entry reached from 0xC14F2E.
    case 0xC14F30: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_price.asm:27 END_C_FUNCTION
    case 0xC14F31: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_price.asm:27 END_C_FUNCTION
    case 0xC14F32: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_item_sell_price.asm (source_named).
bool execute_text_ccs_get_item_sell_price_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_item_sell_price.asm:3 BEGIN_C_FUNCTION
    case 0xC14F33: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC14F35: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC14F36: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC14F37: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC14F38: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14F38.
    case 0xC14F3A: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC14F3B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_item_sell_price.asm:9 END_STACK_VARS
    case 0xC14F3C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:10 CPX #0
    case 0xC14F3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14F3A.
    case 0xC14F3E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:10 CPX #0
    // Overlapping static entry reached from 0xC14F3D.
    case 0xC14F3F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:11 BEQ @UNKNOWN0
    case 0xC14F40: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:12 TXA
    case 0xC14F42: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:13 BRA @UNKNOWN1
    case 0xC14F43: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC14F45: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:16 LDA @VIRTUAL06
    case 0xC14F48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC14F4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC14F4A.
    case 0xC14F4C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/ccs/get_item_sell_price.asm:18 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC14F4D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/get_item_sell_price.asm:19 CLC
    case 0xC14F51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:20 ADC #item::cost
    case 0xC14F52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001A, 2); else cpu.execute_instruction<0x69>(0x00001A, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:20 ADC #item::cost
    // Overlapping static entry reached from 0xC14F52.
    case 0xC14F54: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:21 TAX
    case 0xC14F55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_item_sell_price.asm:22 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC14F56: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/text/ccs/get_item_sell_price.asm:23 LSR
    case 0xC14F5A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_item_sell_price.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC14F5B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_item_sell_price.asm:24 STORE_INT1632 @VIRTUAL06
    case 0xC14F5D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F5F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F61: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F63: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_item_sell_price.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14F65: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_item_sell_price.asm:26 JSR SET_WORKING_MEMORY
    case 0xC14F67: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:27 LDA #NULL
    case 0xC14F6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_item_sell_price.asm:27 LDA #NULL
    // Overlapping static entry reached from 0xC14F6A.
    case 0xC14F6C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_item_sell_price.asm:28 END_C_FUNCTION
    case 0xC14F6D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_item_sell_price.asm:28 END_C_FUNCTION
    case 0xC14F6E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_letter_from_character_name.asm (source_named).
bool execute_text_ccs_get_letter_from_character_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:3 BEGIN_C_FUNCTION
    case 0xC147CC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC147CE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC147CF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC147D0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC147D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC147D1.
    case 0xC147D3: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC147D4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:9 END_STACK_VARS
    case 0xC147D5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    case 0xC147D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    // Overlapping static entry reached from 0xC147D3.
    case 0xC147D7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:10 CPX #0
    // Overlapping static entry reached from 0xC147D6.
    case 0xC147D8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:11 BEQ @UNKNOWN0
    case 0xC147D9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:12 TXA
    case 0xC147DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:13 BRA @UNKNOWN1
    case 0xC147DC: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC147DE: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:16 LDA @VIRTUAL06
    case 0xC147E1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:18 JSL GET_PARTY_CHARACTER_NAME
    case 0xC147E3: cpu.execute_instruction<0x22>(0xC222D3, 4); return true;
    // src/text/ccs/get_letter_from_character_name.asm:19 JSR GET_SECONDARY_MEMORY
    case 0xC147E7: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:20 STA @VIRTUAL02
    case 0xC147EA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:21 LDA #1
    case 0xC147EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:21 LDA #1
    // Overlapping static entry reached from 0xC147EC.
    case 0xC147EE: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:22 SEC
    case 0xC147EF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:23 SBC @VIRTUAL02
    case 0xC147F0: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:24 EOR #$FFFF
    case 0xC147F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:24 EOR #$FFFF
    // Overlapping static entry reached from 0xC147F2.
    case 0xC147F4: cpu.execute_instruction<0xFF>(0x65181A, 4); return true;
    // src/text/ccs/get_letter_from_character_name.asm:25 INC
    case 0xC147F5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:26 CLC
    case 0xC147F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_character_name.asm:27 ADC @VIRTUAL06
    case 0xC147F7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:27 ADC @VIRTUAL06
    // Overlapping static entry reached from 0xC147F4.
    case 0xC147F8: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:28 STA @VIRTUAL06
    case 0xC147F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:28 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC147F8.
    case 0xC147FA: cpu.execute_instruction<0x06>(0x0000E2, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC147FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:29 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC147FA.
    case 0xC147FC: cpu.execute_instruction<0x20>(0x0006A7, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:30 LDA [@VIRTUAL06]
    case 0xC147FD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC147FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14801: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14803: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:31 STORE_INT832 @VIRTUAL06
    case 0xC14805: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC14807: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14809: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1480B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1480D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:33 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1480F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_letter_from_character_name.asm:34 JSR SET_WORKING_MEMORY
    case 0xC14811: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:35 LDA #NULL
    case 0xC14814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_character_name.asm:35 LDA #NULL
    // Overlapping static entry reached from 0xC14814.
    case 0xC14816: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:36 END_C_FUNCTION
    case 0xC14817: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_letter_from_character_name.asm:36 END_C_FUNCTION
    case 0xC14818: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_letter_from_stat.asm (source_named).
bool execute_text_ccs_get_letter_from_stat_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:3 BEGIN_C_FUNCTION
    case 0xC14819: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC1481E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1481E.
    case 0xC14820: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14821: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:10 END_STACK_VARS
    case 0xC14822: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:11 TXA
    case 0xC14823: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:12 STA @LOCAL01
    case 0xC14824: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14826: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00550F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14826.
    case 0xC14828: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC14829: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC14828.
    case 0xC1482A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1482B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1482A.
    case 0xC1482C: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1482B.
    case 0xC1482D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:13 LOADPTR CC_1C_01_TABLE, @VIRTUAL06
    case 0xC1482E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:14 LDA @LOCAL01
    case 0xC14830: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:15 STA @VIRTUAL04
    case 0xC14832: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:16 ASL
    case 0xC14834: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:17 ADC @VIRTUAL04
    case 0xC14835: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:18 STA @LOCAL01
    case 0xC14837: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:19 JSR GET_SECONDARY_MEMORY
    case 0xC14839: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:20 STA @VIRTUAL02
    case 0xC1483C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:21 LDA @LOCAL01
    case 0xC1483E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14840: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14842: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14844: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:22 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC14846: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:23 CLC
    case 0xC14848: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:24 ADC @VIRTUAL0A
    case 0xC14849: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:25 STA @VIRTUAL0A
    case 0xC1484B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:26 LDA [@VIRTUAL0A]
    case 0xC1484D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:27 AND #$00FF
    case 0xC1484F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC1484F.
    case 0xC14851: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:28 CMP @VIRTUAL02
    case 0xC14852: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:29 BCS @UNKNOWN0
    case 0xC14854: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:30 LDA #0
    case 0xC14856: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:30 LDA #0
    // Overlapping static entry reached from 0xC14856.
    case 0xC14858: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:31 BRA @UNKNOWN1
    case 0xC14859: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:33 JSR GET_SECONDARY_MEMORY
    case 0xC1485B: cpu.execute_instruction<0x20>(0x000400, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:34 STA @VIRTUAL02
    case 0xC1485E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:35 LDA @LOCAL01
    case 0xC14860: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:36 INC
    case 0xC14862: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:37 CLC
    case 0xC14863: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:38 ADC @VIRTUAL06
    case 0xC14864: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:39 STA @VIRTUAL06
    case 0xC14866: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:40 LDA [@VIRTUAL06]
    case 0xC14868: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:41 CLC
    case 0xC1486A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:42 ADC @VIRTUAL02
    case 0xC1486B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:43 TAX
    case 0xC1486D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:44 DEX
    case 0xC1486E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/get_letter_from_stat.asm:45 LDA __BSS_START__,X
    case 0xC1486F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:46 AND #$00FF
    case 0xC14872: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC14872.
    case 0xC14874: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14875: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14877: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:883 BPL :+
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC14879: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:884 DEC dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:48 STORE_INT1632S @VIRTUAL06
    case 0xC1487B: cpu.execute_instruction<0xC6>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1487D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1487F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14881: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:49 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14883: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_letter_from_stat.asm:50 JSR SET_WORKING_MEMORY
    case 0xC14885: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:51 LDA #NULL
    case 0xC14888: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_letter_from_stat.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC14888.
    case 0xC1488A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:52 END_C_FUNCTION
    case 0xC1488B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_letter_from_stat.asm:52 END_C_FUNCTION
    case 0xC1488C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/get_random_number.asm (source_named).
bool execute_text_ccs_get_random_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/get_random_number.asm:3 BEGIN_C_FUNCTION
    case 0xC161F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC161F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC161F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC161F4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC161F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC161F5.
    case 0xC161F7: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC161F8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/get_random_number.asm:9 END_STACK_VARS
    case 0xC161F9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/get_random_number.asm:10 CPX #0
    case 0xC161FA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/get_random_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC161F7.
    case 0xC161FB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/get_random_number.asm:10 CPX #0
    // Overlapping static entry reached from 0xC161FA.
    case 0xC161FC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/get_random_number.asm:11 BEQ @ARG_IS_ZERO
    case 0xC161FD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/get_random_number.asm:12 TXA
    case 0xC161FF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/get_random_number.asm:13 BRA @ARG_IS_NONZERO
    case 0xC16200: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/get_random_number.asm:15 JSR GET_ARGUMENT_MEMORY
    case 0xC16202: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/get_random_number.asm:16 LDA @VIRTUAL06
    case 0xC16205: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/get_random_number.asm:18 JSL RAND_MOD
    case 0xC16207: cpu.execute_instruction<0x22>(0xC45F7B, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/get_random_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1620B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/get_random_number.asm:19 STORE_INT1632 @VIRTUAL06
    case 0xC1620D: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1620F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16211: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16213: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/get_random_number.asm:20 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16215: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/get_random_number.asm:21 JSR SET_WORKING_MEMORY
    case 0xC16217: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/get_random_number.asm:22 LDA #NULL
    case 0xC1621A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/get_random_number.asm:22 LDA #NULL
    // Overlapping static entry reached from 0xC1621A.
    case 0xC1621C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/get_random_number.asm:23 END_C_FUNCTION
    case 0xC1621D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/get_random_number.asm:23 END_C_FUNCTION
    case 0xC1621E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/give_item_to_character.asm (source_named).
bool execute_text_ccs_give_item_to_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/give_item_to_character.asm:3 BEGIN_C_FUNCTION
    case 0xC14C1E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC14C20: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC14C21: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC14C22: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC14C23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC14C23.
    case 0xC14C25: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC14C26: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/give_item_to_character.asm:11 END_STACK_VARS
    case 0xC14C27: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:12 LDA #1
    case 0xC14C28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/give_item_to_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14C25.
    case 0xC14C29: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/give_item_to_character.asm:12 LDA #1
    // Overlapping static entry reached from 0xC14C28.
    case 0xC14C2A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/give_item_to_character.asm:13 CLC
    case 0xC14C2B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14C2C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C2F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C31: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C33: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14C35: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/give_item_to_character.asm:16 TXA
    case 0xC14C37: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14C38: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14C3A: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/give_item_to_character.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14C3D: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/give_item_to_character.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14C40: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14C42: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/give_item_to_character.asm:22 LDA #.LOWORD(CC_1D_00)
    case 0xC14C45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x004C1E, 3); return true;
    // src/text/ccs/give_item_to_character.asm:22 LDA #.LOWORD(CC_1D_00)
    // Overlapping static entry reached from 0xC14C45.
    case 0xC14C47: cpu.execute_instruction<0x4C>(0x003A80, 3); return true;
    // src/text/ccs/give_item_to_character.asm:23 BRA @UNKNOWN6
    case 0xC14C48: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/ccs/give_item_to_character.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC14C4A: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/give_item_to_character.asm:26 AND #$00FF
    case 0xC14C4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/give_item_to_character.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC14C4D.
    case 0xC14C4F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/give_item_to_character.asm:27 STA @LOCAL02
    case 0xC14C50: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character.asm:28 CPX #0
    case 0xC14C52: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character.asm:28 CPX #0
    // Overlapping static entry reached from 0xC14C52.
    case 0xC14C54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/give_item_to_character.asm:29 BEQ @UNKNOWN3
    case 0xC14C55: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/give_item_to_character.asm:30 STX @LOCAL01
    case 0xC14C57: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character.asm:31 BRA @UNKNOWN4
    case 0xC14C59: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/give_item_to_character.asm:33 JSR GET_ARGUMENT_MEMORY
    case 0xC14C5B: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/give_item_to_character.asm:34 LDA @VIRTUAL06
    case 0xC14C5E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character.asm:35 TAX
    case 0xC14C60: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character.asm:36 STX @LOCAL01
    case 0xC14C61: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character.asm:38 LDA @LOCAL02
    case 0xC14C63: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character.asm:39 BNE @UNKNOWN5
    case 0xC14C65: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/give_item_to_character.asm:40 JSR GET_WORKING_MEMORY
    case 0xC14C67: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/give_item_to_character.asm:41 LDA @VIRTUAL06
    case 0xC14C6A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character.asm:43 LDX @LOCAL01
    case 0xC14C6C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character.asm:44 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC14C6E: cpu.execute_instruction<0x22>(0xC18BC6, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14C72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character.asm:45 STORE_INT1632 @VIRTUAL06
    case 0xC14C74: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C76: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C78: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character.asm:46 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14C7C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/give_item_to_character.asm:47 JSR SET_WORKING_MEMORY
    case 0xC14C7E: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/give_item_to_character.asm:48 LDA #NULL
    case 0xC14C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character.asm:48 LDA #NULL
    // Overlapping static entry reached from 0xC14C81.
    case 0xC14C83: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/give_item_to_character.asm:50 END_C_FUNCTION
    case 0xC14C84: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/give_item_to_character.asm:50 END_C_FUNCTION
    case 0xC14C85: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/give_item_to_character_2.asm (source_named).
bool execute_text_ccs_give_item_to_character_2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:3 BEGIN_C_FUNCTION
    case 0xC15659: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC1565E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1565E.
    case 0xC15660: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC15661: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:12 END_STACK_VARS
    case 0xC15662: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    case 0xC15663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15660.
    case 0xC15664: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:13 LDA #1
    // Overlapping static entry reached from 0xC15663.
    case 0xC15665: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:14 CLC
    case 0xC15666: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15667: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1566A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1566C: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1566E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15670: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:17 TXA
    case 0xC15672: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15673: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15675: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15678: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC1567B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1567D: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    case 0xC15680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x005659, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:23 LDA #.LOWORD(CC_1D_0E)
    // Overlapping static entry reached from 0xC15680.
    case 0xC15682: cpu.execute_instruction<0x56>(0x000080, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:24 BRA @UNKNOWN6
    case 0xC15683: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:24 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC15682.
    case 0xC15684: cpu.execute_instruction<0x54>(0x00BAAD, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC15685: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:26 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC15684.
    case 0xC15687: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    case 0xC15688: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15687.
    case 0xC15689: cpu.execute_instruction<0xFF>(0x168500, 4); return true;
    // src/text/ccs/give_item_to_character_2.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC15688.
    case 0xC1568A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:28 STA @LOCAL03
    case 0xC1568B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    case 0xC1568D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:29 CPX #0
    // Overlapping static entry reached from 0xC1568D.
    case 0xC1568F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:30 BEQ @UNKNOWN3
    case 0xC15690: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:31 STX @LOCAL02
    case 0xC15692: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:32 BRA @UNKNOWN4
    case 0xC15694: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:34 JSR GET_ARGUMENT_MEMORY
    case 0xC15696: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:35 LDA @VIRTUAL06
    case 0xC15699: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:36 TAX
    case 0xC1569B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:37 STX @LOCAL02
    case 0xC1569C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:39 LDA @LOCAL03
    case 0xC1569E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:40 BNE @UNKNOWN5
    case 0xC156A0: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:41 JSR GET_WORKING_MEMORY
    case 0xC156A2: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:42 LDA @VIRTUAL06
    case 0xC156A5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:44 LDX @LOCAL02
    case 0xC156A7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:45 JSL GIVE_ITEM_TO_CHARACTER
    case 0xC156A9: cpu.execute_instruction<0x22>(0xC18BC6, 4); return true;
    // src/text/ccs/give_item_to_character_2.asm:46 TAX
    case 0xC156AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:47 STX @LOCAL01
    case 0xC156AE: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:48 TXA
    case 0xC156B0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/give_item_to_character_2.asm:49 JSL UNKNOWN_C22351
    case 0xC156B1: cpu.execute_instruction<0x22>(0xC22351, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC156B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:50 STORE_INT1632 @VIRTUAL06
    case 0xC156B7: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156B9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156BB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156BD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156BF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:52 JSR SET_ARGUMENT_MEMORY
    case 0xC156C1: cpu.execute_instruction<0x20>(0x000489, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:53 LDX @LOCAL01
    case 0xC156C4: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:54 TXA
    case 0xC156C6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC156C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:55 STORE_INT1632 @VIRTUAL06
    case 0xC156C9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156CD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC156D1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/give_item_to_character_2.asm:57 JSR SET_WORKING_MEMORY
    case 0xC156D3: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    case 0xC156D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/give_item_to_character_2.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC156D6.
    case 0xC156D8: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC156D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/give_item_to_character_2.asm:60 END_C_FUNCTION
    case 0xC156DA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/halt.asm (source_named).
bool execute_text_ccs_halt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/halt.asm:3 BEGIN_C_FUNCTION
    case 0xC10166: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10168: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC10169: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC1016B.
    case 0xC1016D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/halt.asm:11 END_STACK_VARS
    case 0xC1016F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    case 0xC10170: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/ccs/halt.asm:12 STX @LOCAL02
    // Overlapping static entry reached from 0xC1016D.
    case 0xC10171: cpu.execute_instruction<0x14>(0x0000A8, 2); return true;
    // src/text/ccs/halt.asm:13 TAY
    case 0xC10172: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:14 STY @LOCAL01
    case 0xC10173: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:15 BRA @UNKNOWN1
    case 0xC10175: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/text/ccs/halt.asm:17 LDA DEBUG
    case 0xC10177: cpu.execute_instruction<0xAD>(0x00436C, 3); return true;
    // src/text/ccs/halt.asm:18 BEQ @UNKNOWN1
    case 0xC1017A: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:19 LDA PAD_PRESS
    case 0xC1017C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC1017F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000010, 2); else cpu.execute_instruction<0x29>(0x008010, 3); return true;
    // src/text/ccs/halt.asm:20 AND #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC1017F.
    case 0xC10181: cpu.execute_instruction<0x80>(0x0000C9, 2); return true;
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    case 0xC10182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x008010, 3); return true;
    // src/text/ccs/halt.asm:21 CMP #PAD::B_BUTTON | PAD::R_BUTTON
    // Overlapping static entry reached from 0xC10182.
    case 0xC10184: cpu.execute_instruction<0x80>(0x0000D0, 2); return true;
    // src/text/ccs/halt.asm:22 BNE @UNKNOWN1
    case 0xC10185: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/ccs/halt.asm:23 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC10187: cpu.execute_instruction<0x9C>(0x009645, 3); return true;
    // src/text/ccs/halt.asm:24 BRA @UNKNOWN2
    case 0xC1018A: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/halt.asm:26 LDA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC1018C: cpu.execute_instruction<0xAD>(0x009645, 3); return true;
    // src/text/ccs/halt.asm:27 BNE @UNKNOWN0
    case 0xC1018F: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/text/ccs/halt.asm:29 JSR CLEAR_INSTANT_PRINTING
    case 0xC10191: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/ccs/halt.asm:30 JSL WINDOW_TICK
    case 0xC10195: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/ccs/halt.asm:31 LDX @LOCAL02
    case 0xC10199: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/ccs/halt.asm:32 BNE @UNKNOWN3
    case 0xC1019B: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/ccs/halt.asm:33 LDA BLINKING_TRIANGLE_FLAG
    case 0xC1019D: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/text/ccs/halt.asm:34 BEQ @UNKNOWN3
    case 0xC101A0: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/halt.asm:35 LDA TEXT_SPEED_BASED_WAIT
    case 0xC101A2: cpu.execute_instruction<0xAD>(0x00964B, 3); return true;
    // src/text/ccs/halt.asm:36 BEQ @UNKNOWN3
    case 0xC101A5: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/ccs/halt.asm:37 LDA #0
    case 0xC101A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/halt.asm:37 LDA #0
    // Overlapping static entry reached from 0xC101A7.
    case 0xC101A9: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:38 JSR UNKNOWN_C100FE
    case 0xC101AA: cpu.execute_instruction<0x20>(0x0000FE, 3); return true;
    // src/text/ccs/halt.asm:39 JMP @UNKNOWN14
    case 0xC101AD: cpu.execute_instruction<0x4C>(0x0002CE, 3); return true;
    // src/text/ccs/halt.asm:41 LDA BLINKING_TRIANGLE_FLAG
    case 0xC101B0: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/text/ccs/halt.asm:42 BEQ @UNKNOWN4
    case 0xC101B3: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:43 JSL PAUSE_MUSIC
    case 0xC101B5: cpu.execute_instruction<0x22>(0xEF0256, 4); return true;
    // src/text/ccs/halt.asm:45 LDA CURRENT_FOCUS_WINDOW
    case 0xC101B9: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/ccs/halt.asm:46 ASL
    case 0xC101BC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:47 TAX
    case 0xC101BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:48 LDA OPEN_WINDOW_TABLE,X
    case 0xC101BE: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC101C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/ccs/halt.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC101C1.
    case 0xC101C3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/halt.asm:50 JSL MULT168
    case 0xC101C4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/halt.asm:51 CLC
    case 0xC101C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC101C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/ccs/halt.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC101C9.
    case 0xC101CB: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    case 0xC101CC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:53 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC101CB.
    case 0xC101CD: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/text/ccs/halt.asm:54 LDY @LOCAL01
    case 0xC101CE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:55 BNE @UNKNOWN7
    case 0xC101D0: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/text/ccs/halt.asm:56 BRA @UNKNOWN6
    case 0xC101D2: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:58 JSL UNKNOWN_C12E42
    case 0xC101D4: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/text/ccs/halt.asm:60 LDA PAD_PRESS
    case 0xC101D8: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC101DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/text/ccs/halt.asm:61 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC101DB.
    case 0xC101DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00F4F0, 3); return true;
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    case 0xC101DE: cpu.execute_instruction<0xF0>(0x0000F4, 2); return true;
    // src/text/ccs/halt.asm:62 BEQ @UNKNOWN5
    // Overlapping static entry reached from 0xC101DD.
    case 0xC101DF: cpu.execute_instruction<0xF4>(0x00CA4C, 3); return true;
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    case 0xC101E0: cpu.execute_instruction<0x4C>(0x0002CA, 3); return true;
    // src/text/ccs/halt.asm:63 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC101DF.
    case 0xC101E2: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x00E416, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC101E3.
    case 0xC101E5: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101E6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC101E5.
    case 0xC101E7: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC101E8.
    case 0xC101EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:65 LOADPTR BLINKING_TRIANGLE_TILES + 0 * 2, @LOCAL00
    case 0xC101EB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:66 LDX @VIRTUAL02
    case 0xC101ED: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:67 LDA a:window_stats::window_y,X
    case 0xC101EF: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/ccs/halt.asm:68 LDX @VIRTUAL02
    case 0xC101F2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:69 CLC
    case 0xC101F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:70 ADC a:window_stats::height,X
    case 0xC101F5: cpu.execute_instruction<0x7D>(0x00000C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:71 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC101FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:72 STA @VIRTUAL04
    case 0xC101FD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:73 LDX @VIRTUAL02
    case 0xC101FF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:74 LDA a:window_stats::window_x,X
    case 0xC10201: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/ccs/halt.asm:75 LDX @VIRTUAL02
    case 0xC10204: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:76 CLC
    case 0xC10206: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:77 ADC a:window_stats::width,X
    case 0xC10207: cpu.execute_instruction<0x7D>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:78 CLC
    case 0xC1020A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:79 ADC @VIRTUAL04
    case 0xC1020B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:80 CLC
    case 0xC1020D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC1020E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/ccs/halt.asm:81 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC1020E.
    case 0xC10210: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/ccs/halt.asm:82 TAY
    case 0xC10211: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:83 LDX #2
    case 0xC10212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/halt.asm:83 LDX #2
    // Overlapping static entry reached from 0xC10212.
    case 0xC10214: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/ccs/halt.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC10215: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:85 LDA #0
    case 0xC10217: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    case 0xC10219: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC10217.
    case 0xC1021A: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:86 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1021A.
    case 0xC1021C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x000FA2, 3); return true;
    // src/text/ccs/halt.asm:88 LDX #15
    case 0xC1021D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000F, 2); else cpu.execute_instruction<0xA2>(0x00000F, 3); return true;
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC1021C.
    case 0xC1021E: cpu.execute_instruction<0x0F>(0x128600, 4); return true;
    // src/text/ccs/halt.asm:88 LDX #15
    // Overlapping static entry reached from 0xC1021D.
    case 0xC1021F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:89 STX @LOCAL01
    case 0xC10220: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:90 BRA @UNKNOWN9
    case 0xC10222: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/halt.asm:92 LDA PAD_PRESS
    case 0xC10224: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC10227: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/text/ccs/halt.asm:93 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC10227.
    case 0xC10229: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0062D0, 3); return true;
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    case 0xC1022A: cpu.execute_instruction<0xD0>(0x000062, 2); return true;
    // src/text/ccs/halt.asm:94 BNE @UNKNOWN12
    // Overlapping static entry reached from 0xC10229.
    case 0xC1022B: cpu.execute_instruction<0x62>(0x004222, 3); return true;
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    case 0xC1022C: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/text/ccs/halt.asm:95 JSL UNKNOWN_C12E42
    // Overlapping static entry reached from 0xC1022B.
    case 0xC1022E: cpu.execute_instruction<0x2E>(0x00A6C1, 3); return true;
    // src/text/ccs/halt.asm:96 LDX @LOCAL01
    case 0xC10230: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:96 LDX @LOCAL01
    // Overlapping static entry reached from 0xC1022E.
    case 0xC10231: cpu.execute_instruction<0x12>(0x0000CA, 2); return true;
    // src/text/ccs/halt.asm:97 DEX
    case 0xC10232: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:98 STX @LOCAL01
    case 0xC10233: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:100 BNE @UNKNOWN8
    case 0xC10235: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC10237: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x00E418, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10237.
    case 0xC10239: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1023A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10239.
    case 0xC1023B: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1023C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1023C.
    case 0xC1023E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:101 LOADPTR BLINKING_TRIANGLE_TILES + 1 * 2, @LOCAL00
    case 0xC1023F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:102 LDX @VIRTUAL02
    case 0xC10241: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:103 LDA a:window_stats::window_y,X
    case 0xC10243: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/ccs/halt.asm:104 LDX @VIRTUAL02
    case 0xC10246: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:105 CLC
    case 0xC10248: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:106 ADC a:window_stats::height,X
    case 0xC10249: cpu.execute_instruction<0x7D>(0x00000C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1024F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:107 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC10250: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:108 STA @VIRTUAL04
    case 0xC10251: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:109 LDX @VIRTUAL02
    case 0xC10253: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:110 LDA a:window_stats::window_x,X
    case 0xC10255: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/ccs/halt.asm:111 LDX @VIRTUAL02
    case 0xC10258: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:112 CLC
    case 0xC1025A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:113 ADC a:window_stats::width,X
    case 0xC1025B: cpu.execute_instruction<0x7D>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:114 CLC
    case 0xC1025E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:115 ADC @VIRTUAL04
    case 0xC1025F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/ccs/halt.asm:116 CLC
    case 0xC10261: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC10262: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/ccs/halt.asm:117 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC10262.
    case 0xC10264: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/ccs/halt.asm:118 TAY
    case 0xC10265: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:119 LDX #2
    case 0xC10266: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/halt.asm:119 LDX #2
    // Overlapping static entry reached from 0xC10266.
    case 0xC10268: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/ccs/halt.asm:120 SEP #PROC_FLAGS::ACCUM8
    case 0xC10269: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:121 LDA #0
    case 0xC1026B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    case 0xC1026D: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1026B.
    case 0xC1026E: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:122 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1026E.
    case 0xC10270: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x000AA2, 3); return true;
    // src/text/ccs/halt.asm:124 LDX #10
    case 0xC10271: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10270.
    case 0xC10272: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:124 LDX #10
    // Overlapping static entry reached from 0xC10271.
    case 0xC10273: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:125 STX @LOCAL01
    case 0xC10274: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:126 BRA @UNKNOWN11
    case 0xC10276: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/ccs/halt.asm:128 LDA PAD_PRESS
    case 0xC10278: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1027B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x00A0A0, 3); return true;
    // src/text/ccs/halt.asm:129 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON | PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1027B.
    case 0xC1027D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x004AD0, 3); return true;
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    case 0xC1027E: cpu.execute_instruction<0xD0>(0x00004A, 2); return true;
    // src/text/ccs/halt.asm:130 BNE @UNKNOWN13
    // Overlapping static entry reached from 0xC1027D.
    case 0xC1027F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:131 JSL UNKNOWN_C12E42
    case 0xC10280: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/text/ccs/halt.asm:132 LDX @LOCAL01
    case 0xC10284: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:133 DEX
    case 0xC10286: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:134 STX @LOCAL01
    case 0xC10287: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/halt.asm:136 BNE @UNKNOWN10
    case 0xC10289: cpu.execute_instruction<0xD0>(0x0000ED, 2); return true;
    // src/text/ccs/halt.asm:137 JMP @UNKNOWN7
    case 0xC1028B: cpu.execute_instruction<0x4C>(0x0001E3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC1028E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00E41A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC1028E.
    case 0xC10290: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10291: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10290.
    case 0xC10292: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10293: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    // Overlapping static entry reached from 0xC10293.
    case 0xC10295: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/halt.asm:139 LOADPTR BLINKING_TRIANGLE_TILES + 2 * 2, @LOCAL00
    case 0xC10296: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/halt.asm:140 LDX @VIRTUAL02
    case 0xC10298: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:141 LDA a:window_stats::window_y,X
    case 0xC1029A: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/ccs/halt.asm:142 LDX @VIRTUAL02
    case 0xC1029D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:143 CLC
    case 0xC1029F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:144 ADC a:window_stats::height,X
    case 0xC102A0: cpu.execute_instruction<0x7D>(0x00000C, 3); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/ccs/halt.asm:145 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC102A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:146 PHA
    case 0xC102A8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:147 LDX @VIRTUAL02
    case 0xC102A9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:148 LDA a:window_stats::window_x,X
    case 0xC102AB: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/ccs/halt.asm:149 LDX @VIRTUAL02
    case 0xC102AE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:150 CLC
    case 0xC102B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:151 ADC a:window_stats::width,X
    case 0xC102B1: cpu.execute_instruction<0x7D>(0x00000A, 3); return true;
    // src/text/ccs/halt.asm:152 PLY
    case 0xC102B4: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:153 STY @VIRTUAL02
    case 0xC102B5: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:154 CLC
    case 0xC102B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:155 ADC @VIRTUAL02
    case 0xC102B8: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/ccs/halt.asm:156 CLC
    case 0xC102BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC102BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/ccs/halt.asm:157 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC102BB.
    case 0xC102BD: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/ccs/halt.asm:158 TAY
    case 0xC102BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/halt.asm:159 LDX #2
    case 0xC102BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/ccs/halt.asm:159 LDX #2
    // Overlapping static entry reached from 0xC102BF.
    case 0xC102C1: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/ccs/halt.asm:160 SEP #PROC_FLAGS::ACCUM8
    case 0xC102C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/halt.asm:161 LDA #0
    case 0xC102C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    case 0xC102C6: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC102C4.
    case 0xC102C7: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/ccs/halt.asm:162 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC102C7.
    case 0xC102C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x006E22, 3); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    case 0xC102CA: cpu.execute_instruction<0x22>(0xEF026E, 4); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC102C9.
    case 0xC102CB: cpu.execute_instruction<0x6E>(0x00EF02, 3); return true;
    // src/text/ccs/halt.asm:164 JSL RESUME_MUSIC
    // Overlapping static entry reached from 0xC102C9.
    case 0xC102CC: cpu.execute_instruction<0x02>(0x0000EF, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC102CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/halt.asm:166 END_C_FUNCTION
    case 0xC102CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_experience.asm (source_named).
bool execute_text_ccs_increase_character_experience_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_experience.asm:3 BEGIN_C_FUNCTION
    case 0xC1744B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC1744D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC1744E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC1744F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC17450: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC17450.
    case 0xC17452: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC17453: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:10 END_STACK_VARS
    case 0xC17454: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:11 TXA
    case 0xC17455: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:12 STA @LOCAL01
    case 0xC17456: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/increase_character_experience.asm:13 LDA #4
    case 0xC17458: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/increase_character_experience.asm:13 LDA #4
    // Overlapping static entry reached from 0xC17458.
    case 0xC1745A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_experience.asm:14 CLC
    case 0xC1745B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1745C: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1745F: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17461: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17463: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC17465: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/increase_character_experience.asm:17 LDA @LOCAL01
    case 0xC17467: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/increase_character_experience.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC17469: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1746B: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_experience.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC1746E: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_experience.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC17471: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17473: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_experience.asm:23 LDA #.LOWORD(CC_1E_09)
    case 0xC17476: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004B, 2); else cpu.execute_instruction<0xA9>(0x00744B, 3); return true;
    // src/text/ccs/increase_character_experience.asm:23 LDA #.LOWORD(CC_1E_09)
    // Overlapping static entry reached from 0xC17476.
    case 0xC17478: cpu.execute_instruction<0x74>(0x00004C, 2); return true;
    // src/text/ccs/increase_character_experience.asm:24 JMP @UNKNOWN3
    case 0xC17479: cpu.execute_instruction<0x4C>(0x007521, 3); return true;
    // src/text/ccs/increase_character_experience.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC17478.
    case 0xC1747A: cpu.execute_instruction<0x21>(0x000075, 2); return true;
    // src/text/ccs/increase_character_experience.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC1747C: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/increase_character_experience.asm:27 LDY #24
    case 0xC1747E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC17480: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC1747E.
    case 0xC17481: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC17482: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC17481.
    case 0xC17483: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC17484: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC17483.
    case 0xC17485: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:29 JSL ASL32_ENTRY2
    case 0xC17486: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1748A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1748C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1748D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:30 PUSH32 @VIRTUAL06
    case 0xC1748F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:31 LDY #16
    case 0xC17490: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/increase_character_experience.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC17492: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC17490.
    case 0xC17493: cpu.execute_instruction<0x20>(0x00BDAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17494: cpu.execute_instruction<0xAD>(0x0097BD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC17493.
    case 0xC17496: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17497: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC17496.
    case 0xC17498: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC17499: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC17498.
    case 0xC1749A: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1749B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    // Overlapping static entry reached from 0xC1749A.
    case 0xC1749C: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/increase_character_experience.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+3, @VIRTUAL06
    case 0xC1749D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/increase_character_experience.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC1749F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:35 JSL ASL32_ENTRY2
    case 0xC174A1: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC174A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC174A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC174A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/increase_character_experience.asm:36 PUSH32 @VIRTUAL06
    case 0xC174AA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/increase_character_experience.asm:37 LDY #8
    case 0xC174AB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/increase_character_experience.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC174AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC174AB.
    case 0xC174AE: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC174AF: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC174AE.
    case 0xC174B1: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC174B2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC174B1.
    case 0xC174B3: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC174B4: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC174B3.
    case 0xC174B5: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC174B6: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC174B5.
    case 0xC174B7: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/increase_character_experience.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC174B8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/increase_character_experience.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC174BA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_experience.asm:41 JSL ASL32_ENTRY2
    case 0xC174BC: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC174C0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC174C2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC174C4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC174C6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/increase_character_experience.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC174C8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC174CA: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC174CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC174CF: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC174D1: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/increase_character_experience.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC174D3: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/increase_character_experience.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC174D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174D7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174D9: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174DF: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC174E3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC174E4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC174E6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:47 PULL32 @VIRTUAL0A
    case 0xC174E7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174EB: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174EF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174F1: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174F3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC174F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC174F6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC174F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:49 PULL32 @VIRTUAL0A
    case 0xC174F9: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174FB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174FD: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC174FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17501: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17503: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/increase_character_experience.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC17505: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17507: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC17509: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1750B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/increase_character_experience.asm:51 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1750D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/increase_character_experience.asm:52 REP #PROC_FLAGS::INDEX8
    case 0xC1750F: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/increase_character_experience.asm:53 LDX #1
    case 0xC17511: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/increase_character_experience.asm:53 LDX #1
    // Overlapping static entry reached from 0xC17511.
    case 0xC17513: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/text/ccs/increase_character_experience.asm:54 LDA CC_ARGUMENT_STORAGE
    case 0xC17514: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_experience.asm:55 AND #$00FF
    case 0xC17517: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_experience.asm:55 AND #$00FF
    // Overlapping static entry reached from 0xC17517.
    case 0xC17519: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_experience.asm:56 JSL GAIN_EXP
    case 0xC1751A: cpu.execute_instruction<0x22>(0xC1D9E9, 4); return true;
    // src/text/ccs/increase_character_experience.asm:57 LDA #NULL
    case 0xC1751E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_experience.asm:57 LDA #NULL
    // Overlapping static entry reached from 0xC1751E.
    case 0xC17520: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_experience.asm:59 END_C_FUNCTION
    case 0xC17521: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_experience.asm:59 END_C_FUNCTION
    case 0xC17522: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_guts.asm (source_named).
bool execute_text_ccs_increase_character_guts_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_guts.asm:3 BEGIN_C_FUNCTION
    case 0xC17584: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17586: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17587: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17588: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC17589: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17589.
    case 0xC1758B: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC1758C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_guts.asm:9 END_STACK_VARS
    case 0xC1758D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:10 TXA
    case 0xC1758E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:11 STA @LOCAL00
    case 0xC1758F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_guts.asm:12 LDA #1
    case 0xC17591: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_guts.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17591.
    case 0xC17593: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_guts.asm:13 CLC
    case 0xC17594: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17595: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17598: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1759A: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1759C: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_guts.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1759E: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_guts.asm:16 LDA @LOCAL00
    case 0xC175A0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_guts.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC175A2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC175A4: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_guts.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC175A7: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_guts.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC175AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC175AC: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_guts.asm:22 LDA #.LOWORD(CC_1E_0B)
    case 0xC175AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x007584, 3); return true;
    // src/text/ccs/increase_character_guts.asm:22 LDA #.LOWORD(CC_1E_0B)
    // Overlapping static entry reached from 0xC175AF.
    case 0xC175B1: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/increase_character_guts.asm:23 BRA @UNKNOWN3
    case 0xC175B2: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_guts.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC175B1.
    case 0xC175B3: cpu.execute_instruction<0x2F>(0x97BAAD, 4); return true;
    // src/text/ccs/increase_character_guts.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC175B4: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_guts.asm:26 AND #$00FF
    case 0xC175B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_guts.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC175B7.
    case 0xC175B9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_guts.asm:27 TAX
    case 0xC175BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:28 DEC
    case 0xC175BB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC175BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/ccs/increase_character_guts.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC175BC.
    case 0xC175BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_guts.asm:30 JSL MULT168
    case 0xC175BF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/increase_character_guts.asm:31 CLC
    case 0xC175C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    case 0xC175C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x009A26, 3); return true;
    // src/text/ccs/increase_character_guts.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_guts
    // Overlapping static entry reached from 0xC175C4.
    case 0xC175C6: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:33 TAY
    case 0xC175C7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:34 LDA @LOCAL00
    case 0xC175C8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_guts.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC175CA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:36 STA @VIRTUAL00
    case 0xC175CC: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_guts.asm:37 LDA __BSS_START__,Y
    case 0xC175CE: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_guts.asm:38 CLC
    case 0xC175D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:39 ADC @VIRTUAL00
    case 0xC175D2: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_guts.asm:40 STA __BSS_START__,Y
    case 0xC175D4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_guts.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC175D7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:42 TXA
    case 0xC175D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_guts.asm:43 JSL RECALC_CHARACTER_POSTMATH_GUTS
    case 0xC175DA: cpu.execute_instruction<0x22>(0xC21BA4, 4); return true;
    // src/text/ccs/increase_character_guts.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC175DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_guts.asm:45 LDA #NULL
    case 0xC175E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_guts.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC175E0.
    case 0xC175E2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_guts.asm:47 END_C_FUNCTION
    case 0xC175E3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_guts.asm:47 END_C_FUNCTION
    case 0xC175E4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_iq.asm (source_named).
bool execute_text_ccs_increase_character_iq_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_iq.asm:3 BEGIN_C_FUNCTION
    case 0xC17523: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC17525: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC17526: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC17527: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC17528: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC17528.
    case 0xC1752A: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC1752B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_iq.asm:9 END_STACK_VARS
    case 0xC1752C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:10 TXA
    case 0xC1752D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:11 STA @LOCAL00
    case 0xC1752E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_iq.asm:12 LDA #1
    case 0xC17530: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_iq.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17530.
    case 0xC17532: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_iq.asm:13 CLC
    case 0xC17533: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17534: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17537: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17539: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1753B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_iq.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1753D: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_iq.asm:16 LDA @LOCAL00
    case 0xC1753F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_iq.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17541: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17543: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_iq.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17546: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_iq.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC17549: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1754B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_iq.asm:22 LDA #.LOWORD(CC_1E_0A)
    case 0xC1754E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000023, 2); else cpu.execute_instruction<0xA9>(0x007523, 3); return true;
    // src/text/ccs/increase_character_iq.asm:22 LDA #.LOWORD(CC_1E_0A)
    // Overlapping static entry reached from 0xC1754E.
    case 0xC17550: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/increase_character_iq.asm:23 BRA @UNKNOWN3
    case 0xC17551: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_iq.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC17550.
    case 0xC17552: cpu.execute_instruction<0x2F>(0x97BAAD, 4); return true;
    // src/text/ccs/increase_character_iq.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17553: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_iq.asm:26 AND #$00FF
    case 0xC17556: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_iq.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC17556.
    case 0xC17558: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_iq.asm:27 TAX
    case 0xC17559: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:28 DEC
    case 0xC1755A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1755B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/ccs/increase_character_iq.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1755B.
    case 0xC1755D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_iq.asm:30 JSL MULT168
    case 0xC1755E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/increase_character_iq.asm:31 CLC
    case 0xC17562: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    case 0xC17563: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x009A28, 3); return true;
    // src/text/ccs/increase_character_iq.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_iq
    // Overlapping static entry reached from 0xC17563.
    case 0xC17565: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:33 TAY
    case 0xC17566: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:34 LDA @LOCAL00
    case 0xC17567: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_iq.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC17569: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:36 STA @VIRTUAL00
    case 0xC1756B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_iq.asm:37 LDA __BSS_START__,Y
    case 0xC1756D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_iq.asm:38 CLC
    case 0xC17570: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:39 ADC @VIRTUAL00
    case 0xC17571: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_iq.asm:40 STA __BSS_START__,Y
    case 0xC17573: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_iq.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17576: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:42 TXA
    case 0xC17578: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_iq.asm:43 JSL RECALC_CHARACTER_POSTMATH_IQ
    case 0xC17579: cpu.execute_instruction<0x22>(0xC21D7D, 4); return true;
    // src/text/ccs/increase_character_iq.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC1757D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_iq.asm:45 LDA #NULL
    case 0xC1757F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_iq.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC1757F.
    case 0xC17581: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_iq.asm:47 END_C_FUNCTION
    case 0xC17582: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_iq.asm:47 END_C_FUNCTION
    case 0xC17583: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_luck.asm (source_named).
bool execute_text_ccs_increase_character_luck_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_luck.asm:3 BEGIN_C_FUNCTION
    case 0xC176A7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC176A9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC176AA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC176AB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC176AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC176AC.
    case 0xC176AE: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC176AF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_luck.asm:9 END_STACK_VARS
    case 0xC176B0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:10 TXA
    case 0xC176B1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:11 STA @LOCAL00
    case 0xC176B2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_luck.asm:12 LDA #1
    case 0xC176B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_luck.asm:12 LDA #1
    // Overlapping static entry reached from 0xC176B4.
    case 0xC176B6: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_luck.asm:13 CLC
    case 0xC176B7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC176B8: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC176BB: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC176BD: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC176BF: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_luck.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC176C1: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_luck.asm:16 LDA @LOCAL00
    case 0xC176C3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_luck.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC176C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC176C7: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_luck.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC176CA: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_luck.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC176CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC176CF: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_luck.asm:22 LDA #.LOWORD(CC_1E_0E)
    case 0xC176D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A7, 2); else cpu.execute_instruction<0xA9>(0x0076A7, 3); return true;
    // src/text/ccs/increase_character_luck.asm:22 LDA #.LOWORD(CC_1E_0E)
    // Overlapping static entry reached from 0xC176D2.
    case 0xC176D4: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/increase_character_luck.asm:23 BRA @UNKNOWN3
    case 0xC176D5: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_luck.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC176D4.
    case 0xC176D6: cpu.execute_instruction<0x2F>(0x97BAAD, 4); return true;
    // src/text/ccs/increase_character_luck.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC176D7: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_luck.asm:26 AND #$00FF
    case 0xC176DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_luck.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC176DA.
    case 0xC176DC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_luck.asm:27 TAX
    case 0xC176DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:28 DEC
    case 0xC176DE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC176DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/ccs/increase_character_luck.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC176DF.
    case 0xC176E1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_luck.asm:30 JSL MULT168
    case 0xC176E2: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/increase_character_luck.asm:31 CLC
    case 0xC176E6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    case 0xC176E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000029, 2); else cpu.execute_instruction<0x69>(0x009A29, 3); return true;
    // src/text/ccs/increase_character_luck.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_luck
    // Overlapping static entry reached from 0xC176E7.
    case 0xC176E9: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:33 TAY
    case 0xC176EA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:34 LDA @LOCAL00
    case 0xC176EB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_luck.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC176ED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:36 STA @VIRTUAL00
    case 0xC176EF: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_luck.asm:37 LDA __BSS_START__,Y
    case 0xC176F1: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_luck.asm:38 CLC
    case 0xC176F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:39 ADC @VIRTUAL00
    case 0xC176F5: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_luck.asm:40 STA __BSS_START__,Y
    case 0xC176F7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_luck.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC176FA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:42 TXA
    case 0xC176FC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_luck.asm:43 JSL RECALC_CHARACTER_POSTMATH_LUCK
    case 0xC176FD: cpu.execute_instruction<0x22>(0xC21C5D, 4); return true;
    // src/text/ccs/increase_character_luck.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC17701: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_luck.asm:45 LDA #NULL
    case 0xC17703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_luck.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17703.
    case 0xC17705: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_luck.asm:47 END_C_FUNCTION
    case 0xC17706: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_luck.asm:47 END_C_FUNCTION
    case 0xC17707: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_speed.asm (source_named).
bool execute_text_ccs_increase_character_speed_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_speed.asm:3 BEGIN_C_FUNCTION
    case 0xC175E5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC175E7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC175E8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC175E9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC175EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC175EA.
    case 0xC175EC: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC175ED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_speed.asm:9 END_STACK_VARS
    case 0xC175EE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:10 TXA
    case 0xC175EF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:11 STA @LOCAL00
    case 0xC175F0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_speed.asm:12 LDA #1
    case 0xC175F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_speed.asm:12 LDA #1
    // Overlapping static entry reached from 0xC175F2.
    case 0xC175F4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_speed.asm:13 CLC
    case 0xC175F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC175F6: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC175F9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC175FB: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC175FD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_speed.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC175FF: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_speed.asm:16 LDA @LOCAL00
    case 0xC17601: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_speed.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17603: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17605: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_speed.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17608: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_speed.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1760B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1760D: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_speed.asm:22 LDA #.LOWORD(CC_1E_0C)
    case 0xC17610: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E5, 2); else cpu.execute_instruction<0xA9>(0x0075E5, 3); return true;
    // src/text/ccs/increase_character_speed.asm:22 LDA #.LOWORD(CC_1E_0C)
    // Overlapping static entry reached from 0xC17610.
    case 0xC17612: cpu.execute_instruction<0x75>(0x000080, 2); return true;
    // src/text/ccs/increase_character_speed.asm:23 BRA @UNKNOWN3
    case 0xC17613: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_speed.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC17612.
    case 0xC17614: cpu.execute_instruction<0x2F>(0x97BAAD, 4); return true;
    // src/text/ccs/increase_character_speed.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17615: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_speed.asm:26 AND #$00FF
    case 0xC17618: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_speed.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC17618.
    case 0xC1761A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_speed.asm:27 TAX
    case 0xC1761B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:28 DEC
    case 0xC1761C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1761D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/ccs/increase_character_speed.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1761D.
    case 0xC1761F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_speed.asm:30 JSL MULT168
    case 0xC17620: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/increase_character_speed.asm:31 CLC
    case 0xC17624: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    case 0xC17625: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x009A25, 3); return true;
    // src/text/ccs/increase_character_speed.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_speed
    // Overlapping static entry reached from 0xC17625.
    case 0xC17627: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:33 TAY
    case 0xC17628: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:34 LDA @LOCAL00
    case 0xC17629: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_speed.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1762B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:36 STA @VIRTUAL00
    case 0xC1762D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_speed.asm:37 LDA __BSS_START__,Y
    case 0xC1762F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_speed.asm:38 CLC
    case 0xC17632: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:39 ADC @VIRTUAL00
    case 0xC17633: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_speed.asm:40 STA __BSS_START__,Y
    case 0xC17635: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_speed.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17638: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:42 TXA
    case 0xC1763A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_speed.asm:43 JSL RECALC_CHARACTER_POSTMATH_SPEED
    case 0xC1763B: cpu.execute_instruction<0x22>(0xC21AEB, 4); return true;
    // src/text/ccs/increase_character_speed.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC1763F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_speed.asm:45 LDA #NULL
    case 0xC17641: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_speed.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC17641.
    case 0xC17643: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_speed.asm:47 END_C_FUNCTION
    case 0xC17644: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_speed.asm:47 END_C_FUNCTION
    case 0xC17645: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/increase_character_vitality.asm (source_named).
bool execute_text_ccs_increase_character_vitality_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/increase_character_vitality.asm:3 BEGIN_C_FUNCTION
    case 0xC17646: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC17648: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC17649: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC1764B.
    case 0xC1764D: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/increase_character_vitality.asm:9 END_STACK_VARS
    case 0xC1764F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:10 TXA
    case 0xC17650: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:11 STA @LOCAL00
    case 0xC17651: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:12 LDA #1
    case 0xC17653: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:12 LDA #1
    // Overlapping static entry reached from 0xC17653.
    case 0xC17655: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:13 CLC
    case 0xC17656: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17657: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1765A: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1765C: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1765E: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/increase_character_vitality.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC17660: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:16 LDA @LOCAL00
    case 0xC17662: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC17664: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17666: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC17669: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1766C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1766E: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:22 LDA #.LOWORD(CC_1E_0D)
    case 0xC17671: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000046, 2); else cpu.execute_instruction<0xA9>(0x007646, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:22 LDA #.LOWORD(CC_1E_0D)
    // Overlapping static entry reached from 0xC17671.
    case 0xC17673: cpu.execute_instruction<0x76>(0x000080, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:23 BRA @UNKNOWN3
    case 0xC17674: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:23 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC17673.
    case 0xC17675: cpu.execute_instruction<0x2F>(0x97BAAD, 4); return true;
    // src/text/ccs/increase_character_vitality.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC17676: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:26 AND #$00FF
    case 0xC17679: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC17679.
    case 0xC1767B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:27 TAX
    case 0xC1767C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:28 DEC
    case 0xC1767D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:29 LDY #.SIZEOF(char_struct)
    case 0xC1767E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:29 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC1767E.
    case 0xC17680: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:30 JSL MULT168
    case 0xC17681: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/increase_character_vitality.asm:31 CLC
    case 0xC17685: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    case 0xC17686: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000027, 2); else cpu.execute_instruction<0x69>(0x009A27, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:32 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::boosted_vitality
    // Overlapping static entry reached from 0xC17686.
    case 0xC17688: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:33 TAY
    case 0xC17689: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:34 LDA @LOCAL00
    case 0xC1768A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC1768C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:36 STA @VIRTUAL00
    case 0xC1768E: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:37 LDA __BSS_START__,Y
    case 0xC17690: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:38 CLC
    case 0xC17693: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:39 ADC @VIRTUAL00
    case 0xC17694: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:40 STA __BSS_START__,Y
    case 0xC17696: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:41 REP #PROC_FLAGS::ACCUM8
    case 0xC17699: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:42 TXA
    case 0xC1769B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/increase_character_vitality.asm:43 JSL RECALC_CHARACTER_POSTMATH_VITALITY
    case 0xC1769C: cpu.execute_instruction<0x22>(0xC21D65, 4); return true;
    // src/text/ccs/increase_character_vitality.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC176A0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/increase_character_vitality.asm:45 LDA #NULL
    case 0xC176A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/increase_character_vitality.asm:45 LDA #NULL
    // Overlapping static entry reached from 0xC176A2.
    case 0xC176A4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/increase_character_vitality.asm:47 END_C_FUNCTION
    case 0xC176A5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/increase_character_vitality.asm:47 END_C_FUNCTION
    case 0xC176A6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/inflict_character_status.asm (source_named).
bool execute_text_ccs_inflict_character_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/inflict_character_status.asm:3 BEGIN_C_FUNCTION
    case 0xC1506F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15071: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15072: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15073: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15074: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15074.
    case 0xC15076: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15077: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/inflict_character_status.asm:11 END_STACK_VARS
    case 0xC15078: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:12 STX @VIRTUAL02
    case 0xC15079: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/inflict_character_status.asm:12 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC15076.
    case 0xC1507A: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/inflict_character_status.asm:13 LDA #2
    case 0xC1507B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/ccs/inflict_character_status.asm:13 LDA #2
    // Overlapping static entry reached from 0xC1507B.
    case 0xC1507D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/inflict_character_status.asm:14 CLC
    case 0xC1507E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1507F: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15082: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15084: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15086: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15088: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/inflict_character_status.asm:17 LDA @VIRTUAL02
    case 0xC1508A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/inflict_character_status.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1508C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/inflict_character_status.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1508E: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15091: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    // Overlapping static entry reached from 0xC15110.
    case 0xC15092: cpu.execute_instruction<0xBA>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:20 STA CC_ARGUMENT_STORAGE,X
    // Overlapping static entry reached from 0xC15092.
    case 0xC15093: cpu.execute_instruction<0x97>(0x0000C2, 2); return true;
    // src/text/ccs/inflict_character_status.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15094: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/inflict_character_status.asm:21 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC15093.
    case 0xC15095: cpu.execute_instruction<0x20>(0x00CAEE, 3); return true;
    // src/text/ccs/inflict_character_status.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15096: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/inflict_character_status.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC15095.
    case 0xC15098: cpu.execute_instruction<0x97>(0x0000A9, 2); return true;
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    case 0xC15099: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006F, 2); else cpu.execute_instruction<0xA9>(0x00506F, 3); return true;
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC15098.
    case 0xC1509A: cpu.execute_instruction<0x6F>(0x448050, 4); return true;
    // src/text/ccs/inflict_character_status.asm:23 LDA #.LOWORD(CC_19_05)
    // Overlapping static entry reached from 0xC15099.
    case 0xC1509B: cpu.execute_instruction<0x50>(0x000080, 2); return true;
    // src/text/ccs/inflict_character_status.asm:24 BRA @UNKNOWN7
    case 0xC1509C: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/inflict_character_status.asm:24 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1509B.
    case 0xC1509D: cpu.execute_instruction<0x44>(0x00BAAD, 3); return true;
    // src/text/ccs/inflict_character_status.asm:26 LDA CC_ARGUMENT_STORAGE
    case 0xC1509E: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/inflict_character_status.asm:26 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC1509D.
    case 0xC150A0: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    case 0xC150A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC150A0.
    case 0xC150A2: cpu.execute_instruction<0xFF>(0x84A800, 4); return true;
    // src/text/ccs/inflict_character_status.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC150A1.
    case 0xC150A3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/inflict_character_status.asm:28 TAY
    case 0xC150A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:29 STY @LOCAL02
    case 0xC150A5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/ccs/inflict_character_status.asm:29 STY @LOCAL02
    // Overlapping static entry reached from 0xC150A2.
    case 0xC150A6: cpu.execute_instruction<0x14>(0x0000AD, 2); return true;
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    case 0xC150A7: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC150A6.
    case 0xC150A8: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:30 LDA CC_ARGUMENT_STORAGE+1
    // Overlapping static entry reached from 0xC150A8.
    case 0xC150A9: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    case 0xC150AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC150A9.
    case 0xC150AB: cpu.execute_instruction<0xFF>(0xF0AA00, 4); return true;
    // src/text/ccs/inflict_character_status.asm:31 AND #$00FF
    // Overlapping static entry reached from 0xC150AA.
    case 0xC150AC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/inflict_character_status.asm:32 TAX
    case 0xC150AD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:33 BEQ @UNKNOWN3
    case 0xC150AE: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/ccs/inflict_character_status.asm:33 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC150AB.
    case 0xC150AF: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/text/ccs/inflict_character_status.asm:34 STX @LOCAL01
    case 0xC150B0: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/inflict_character_status.asm:34 STX @LOCAL01
    // Overlapping static entry reached from 0xC150AF.
    case 0xC150B1: cpu.execute_instruction<0x12>(0x000080, 2); return true;
    // src/text/ccs/inflict_character_status.asm:35 BRA @UNKNOWN4
    case 0xC150B2: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/inflict_character_status.asm:35 BRA @UNKNOWN4
    // Overlapping static entry reached from 0xC150B1.
    case 0xC150B3: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:37 JSR GET_ARGUMENT_MEMORY
    case 0xC150B4: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/inflict_character_status.asm:38 LDA @VIRTUAL06
    case 0xC150B7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/inflict_character_status.asm:39 TAX
    case 0xC150B9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:40 STX @LOCAL01
    case 0xC150BA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/inflict_character_status.asm:42 LDY @LOCAL02
    case 0xC150BC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/ccs/inflict_character_status.asm:43 BEQ @UNKNOWN5
    case 0xC150BE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/inflict_character_status.asm:44 TYA
    case 0xC150C0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/inflict_character_status.asm:45 BRA @UNKNOWN6
    case 0xC150C1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/inflict_character_status.asm:47 JSR GET_WORKING_MEMORY
    case 0xC150C3: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/inflict_character_status.asm:48 LDA @VIRTUAL06
    case 0xC150C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/inflict_character_status.asm:50 LDY @VIRTUAL02
    case 0xC150C8: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/ccs/inflict_character_status.asm:51 LDX @LOCAL01
    case 0xC150CA: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/inflict_character_status.asm:52 JSL INFLICT_STATUS_NONBATTLE
    case 0xC150CC: cpu.execute_instruction<0x22>(0xC458FE, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC150D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:53 STORE_INT1632 @VIRTUAL06
    case 0xC150D2: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150D6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/inflict_character_status.asm:54 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC150DA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/inflict_character_status.asm:55 JSR SET_WORKING_MEMORY
    case 0xC150DC: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/inflict_character_status.asm:56 LDA #NULL
    case 0xC150DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/inflict_character_status.asm:56 LDA #NULL
    // Overlapping static entry reached from 0xC150DF.
    case 0xC150E1: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/inflict_character_status.asm:58 END_C_FUNCTION
    case 0xC150E2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/inflict_character_status.asm:58 END_C_FUNCTION
    case 0xC150E3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump.asm (source_named).
bool execute_text_ccs_jump_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump.asm:3 BEGIN_C_FUNCTION
    case 0xC14103: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14105: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14106: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14107: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC14108: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14108.
    case 0xC1410A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1410B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump.asm:9 END_STACK_VARS
    case 0xC1410C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:10 TAY
    case 0xC1410D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:11 STY @LOCAL00
    case 0xC1410E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump.asm:12 LDA #3
    case 0xC14110: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/jump.asm:12 LDA #3
    // Overlapping static entry reached from 0xC14110.
    case 0xC14112: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/jump.asm:13 CLC
    case 0xC14113: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14114: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14117: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14119: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1411B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/jump.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1411D: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/jump.asm:16 TXA
    case 0xC1411F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC14120: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14122: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/jump.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14125: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/jump.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14128: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1412A: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/jump.asm:22 LDA #.LOWORD(CC_0A)
    case 0xC1412D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004103, 3); return true;
    // src/text/ccs/jump.asm:22 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC1412D.
    case 0xC1412F: cpu.execute_instruction<0x41>(0x00004C, 2); return true;
    // src/text/ccs/jump.asm:23 JMP @UNKNOWN3
    case 0xC14130: cpu.execute_instruction<0x4C>(0x0041CE, 3); return true;
    // src/text/ccs/jump.asm:23 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC1412F.
    case 0xC14131: cpu.execute_instruction<0xCE>(0x008A41, 3); return true;
    // src/text/ccs/jump.asm:25 TXA
    case 0xC14133: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump.asm:26 STORE_INT1632 @VIRTUAL06
    case 0xC14134: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:26 STORE_INT1632 @VIRTUAL06
    case 0xC14136: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/jump.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC14138: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/jump.asm:28 LDY #24
    case 0xC1413A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x002218, 3); return true;
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    case 0xC1413C: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC1413A.
    case 0xC1413D: cpu.execute_instruction<0x46>(0x000092, 2); return true;
    // src/text/ccs/jump.asm:29 JSL ASL32_ENTRY2
    // Overlapping static entry reached from 0xC1413D.
    case 0xC1413F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0008A5, 3); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14140: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    // Overlapping static entry reached from 0xC1413F.
    case 0xC14141: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14142: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14143: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/jump.asm:30 PUSH32 @VIRTUAL06
    case 0xC14145: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:31 LDY #16
    case 0xC14146: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/jump.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC14148: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14146.
    case 0xC14149: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1414A: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC14149.
    case 0xC1414C: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1414D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1414C.
    case 0xC1414E: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC1414F: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC1414E.
    case 0xC14150: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14151: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC14150.
    case 0xC14152: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC14153: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/jump.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC14155: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:35 JSL ASL32_ENTRY2
    case 0xC14157: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1415B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1415D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC1415E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/jump.asm:36 PUSH32 @VIRTUAL06
    case 0xC14160: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump.asm:37 LDY #8
    case 0xC14161: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/jump.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC14163: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC14161.
    case 0xC14164: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14165: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14164.
    case 0xC14167: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC14168: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14167.
    case 0xC14169: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1416A: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC14169.
    case 0xC1416B: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1416C: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1416B.
    case 0xC1416D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1416E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/jump.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC14170: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump.asm:41 JSL ASL32_ENTRY2
    case 0xC14172: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14176: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC14178: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1417A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/jump.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1417C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/jump.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC1417E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14180: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14183: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14185: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14187: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/jump.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC14189: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/jump.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC1418B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1418D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1418F: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14191: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14193: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14195: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC14197: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC14199: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC1419A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC1419C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/jump.asm:47 PULL32 @VIRTUAL0A
    case 0xC1419D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1419F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141A1: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141A5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141A7: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141A9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC141AB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC141AC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC141AE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/jump.asm:49 PULL32 @VIRTUAL0A
    case 0xC141AF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141B3: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141B7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141B9: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/jump.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC141BB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump.asm:51 REP #PROC_FLAGS::INDEX8
    case 0xC141BD: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/jump.asm:52 LDY @LOCAL00
    case 0xC141BF: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC141C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC141C3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC141C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/jump.asm:53 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC141C8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump.asm:54 LDA #NULL
    case 0xC141CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump.asm:54 LDA #NULL
    // Overlapping static entry reached from 0xC141CB.
    case 0xC141CD: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump.asm:56 END_C_FUNCTION
    case 0xC141CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump.asm:56 END_C_FUNCTION
    case 0xC141CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump_event_flag.asm (source_named).
bool execute_text_ccs_jump_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_event_flag.asm:3 BEGIN_C_FUNCTION
    case 0xC142F5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142F7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142F8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142F9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC142FA.
    case 0xC142FC: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142FD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_event_flag.asm:9 END_STACK_VARS
    case 0xC142FE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:10 TAY
    case 0xC142FF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:11 STY @LOCAL00
    case 0xC14300: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump_event_flag.asm:12 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14302: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/jump_event_flag.asm:13 BNE @UNKNOWN0
    case 0xC14305: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/ccs/jump_event_flag.asm:14 TXA
    case 0xC14307: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14308: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/jump_event_flag.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1430A: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/jump_event_flag.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC1430D: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/jump_event_flag.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14310: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/jump_event_flag.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14312: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/jump_event_flag.asm:20 LDA #.LOWORD(CC_06)
    case 0xC14315: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0042F5, 3); return true;
    // src/text/ccs/jump_event_flag.asm:20 LDA #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC14315.
    case 0xC14317: cpu.execute_instruction<0x42>(0x000080, 2); return true;
    // src/text/ccs/jump_event_flag.asm:21 BRA @UNKNOWN2
    case 0xC14318: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/text/ccs/jump_event_flag.asm:21 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC14317.
    case 0xC14319: cpu.execute_instruction<0x43>(0x00008A, 2); return true;
    // src/text/ccs/jump_event_flag.asm:23 TXA
    case 0xC1431A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC1431B: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/jump_event_flag.asm:25 LDY #8
    case 0xC1431D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x002208, 3); return true;
    // src/text/ccs/jump_event_flag.asm:26 JSL ASL16_ENTRY2
    case 0xC1431F: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/jump_event_flag.asm:26 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC1431D.
    case 0xC14320: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/jump_event_flag.asm:27 STA @VIRTUAL02
    case 0xC14323: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/jump_event_flag.asm:28 LDA CC_ARGUMENT_STORAGE
    case 0xC14325: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/jump_event_flag.asm:29 AND #$00FF
    case 0xC14328: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/jump_event_flag.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC14328.
    case 0xC1432A: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/jump_event_flag.asm:30 ORA @VIRTUAL02
    case 0xC1432B: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/jump_event_flag.asm:31 JSL GET_EVENT_FLAG
    case 0xC1432D: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/text/ccs/jump_event_flag.asm:32 CMP #0
    case 0xC14331: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/ccs/jump_event_flag.asm:32 CMP #0
    // Overlapping static entry reached from 0xC14331.
    case 0xC14333: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/jump_event_flag.asm:33 BEQ @UNKNOWN1
    case 0xC14334: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/ccs/jump_event_flag.asm:34 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14336: cpu.execute_instruction<0x9C>(0x0097CA, 3); return true;
    // src/text/ccs/jump_event_flag.asm:35 LDA #.LOWORD(CC_0A)
    case 0xC14339: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004103, 3); return true;
    // src/text/ccs/jump_event_flag.asm:35 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC14339.
    case 0xC1433B: cpu.execute_instruction<0x41>(0x000080, 2); return true;
    // src/text/ccs/jump_event_flag.asm:36 BRA @UNKNOWN2
    case 0xC1433C: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/text/ccs/jump_event_flag.asm:36 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1433B.
    case 0xC1433D: cpu.execute_instruction<0x1F>(0xB90EA4, 4); return true;
    // src/text/ccs/jump_event_flag.asm:38 LDY @LOCAL00
    case 0xC1433E: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14340: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1433D.
    case 0xC14341: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14343: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14345: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_event_flag.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14348: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_event_flag.asm:40 LDA #4
    case 0xC1434A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/ccs/jump_event_flag.asm:40 LDA #4
    // Overlapping static entry reached from 0xC1434A.
    case 0xC1434C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/jump_event_flag.asm:41 CLC
    case 0xC1434D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_event_flag.asm:42 ADC @VIRTUAL06
    case 0xC1434E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_event_flag.asm:43 STA @VIRTUAL06
    case 0xC14350: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_event_flag.asm:44 STA __BSS_START__,Y
    case 0xC14352: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_event_flag.asm:45 LDA @VIRTUAL06+2
    case 0xC14355: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_event_flag.asm:46 STA __BSS_START__+2,Y
    case 0xC14357: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_event_flag.asm:47 LDA #NULL
    case 0xC1435A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump_event_flag.asm:47 LDA #NULL
    // Overlapping static entry reached from 0xC1435A.
    case 0xC1435C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_event_flag.asm:49 END_C_FUNCTION
    case 0xC1435D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_event_flag.asm:49 END_C_FUNCTION
    case 0xC1435E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump_multi.asm (source_named).
bool execute_text_ccs_jump_multi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_multi.asm:3 BEGIN_C_FUNCTION
    case 0xC141D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC141D5.
    case 0xC141D7: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_multi.asm:10 END_STACK_VARS
    case 0xC141D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:11 TXY
    case 0xC141DA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:12 STY @LOCAL01
    case 0xC141DB: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/jump_multi.asm:13 TAX
    case 0xC141DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:14 STX @LOCAL00
    case 0xC141DE: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:15 JSR GET_WORKING_MEMORY
    case 0xC141E0: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC141E3.
    case 0xC141E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141E6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC141E8.
    case 0xC141EA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:16 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC141EB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141EF: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141F1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/jump_multi.asm:17 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC141F5: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi.asm:18 BEQ @UNKNOWN1
    case 0xC141F7: cpu.execute_instruction<0xF0>(0x000045, 2); return true;
    // src/text/ccs/jump_multi.asm:19 JSR GET_WORKING_MEMORY
    case 0xC141F9: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/jump_multi.asm:20 LDY @LOCAL01
    case 0xC141FC: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/jump_multi.asm:21 TYA
    case 0xC141FE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC141FF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:22 STORE_INT1632 @VIRTUAL0A
    case 0xC14201: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi.asm:23 CLC
    case 0xC14203: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:24 LDA @VIRTUAL06
    case 0xC14204: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:25 SBC @VIRTUAL0A
    case 0xC14206: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi.asm:26 LDA @VIRTUAL06+2
    case 0xC14208: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:27 SBC @VIRTUAL0A+2
    case 0xC1420A: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi.asm:28 BCS @UNKNOWN1
    case 0xC1420C: cpu.execute_instruction<0xB0>(0x000030, 2); return true;
    // src/text/ccs/jump_multi.asm:29 LDX @LOCAL00
    case 0xC1420E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:30 TXY
    case 0xC14210: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:31 STY @LOCAL00
    case 0xC14211: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:32 JSR GET_WORKING_MEMORY
    case 0xC14213: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/jump_multi.asm:33 LDA @VIRTUAL06
    case 0xC14216: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:34 DEC
    case 0xC14218: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:35 ASL
    case 0xC14219: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:36 ASL
    case 0xC1421A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:37 PHA
    case 0xC1421B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:38 LDY @LOCAL00
    case 0xC1421C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1421E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14221: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14223: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:39 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14226: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:40 PLA
    case 0xC14228: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:41 CLC
    case 0xC14229: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:42 ADC @VIRTUAL06
    case 0xC1422A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:43 STA @VIRTUAL06
    case 0xC1422C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:44 STA __BSS_START__,Y
    case 0xC1422E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_multi.asm:45 LDA @VIRTUAL06+2
    case 0xC14231: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:46 STA __BSS_START__+2,Y
    case 0xC14233: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi.asm:47 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14236: cpu.execute_instruction<0x9C>(0x0097CA, 3); return true;
    // src/text/ccs/jump_multi.asm:48 LDA #.LOWORD(CC_0A)
    case 0xC14239: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x004103, 3); return true;
    // src/text/ccs/jump_multi.asm:48 LDA #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC14239.
    case 0xC1423B: cpu.execute_instruction<0x41>(0x000080, 2); return true;
    // src/text/ccs/jump_multi.asm:49 BRA @UNKNOWN2
    case 0xC1423C: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/text/ccs/jump_multi.asm:49 BRA @UNKNOWN2
    // Overlapping static entry reached from 0xC1423B.
    case 0xC1423D: cpu.execute_instruction<0x25>(0x0000A6, 2); return true;
    // src/text/ccs/jump_multi.asm:51 LDX @LOCAL00
    case 0xC1423E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi.asm:51 LDX @LOCAL00
    // Overlapping static entry reached from 0xC1423D.
    case 0xC1423F: cpu.execute_instruction<0x0E>(0x00B99B, 3); return true;
    // src/text/ccs/jump_multi.asm:52 TXY
    case 0xC14240: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14241: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    // Overlapping static entry reached from 0xC1423F.
    case 0xC14242: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14244: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14246: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi.asm:53 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC14249: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi.asm:54 LDY @LOCAL01
    case 0xC1424B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/ccs/jump_multi.asm:55 TYA
    case 0xC1424D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:56 ASL
    case 0xC1424E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:57 ASL
    case 0xC1424F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:58 CLC
    case 0xC14250: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi.asm:59 ADC @VIRTUAL06
    case 0xC14251: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:60 STA @VIRTUAL06
    case 0xC14253: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi.asm:61 TXY
    case 0xC14255: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC14256: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC14258: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1425B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/ccs/jump_multi.asm:62 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1425D: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi.asm:63 LDA #NULL
    case 0xC14260: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump_multi.asm:63 LDA #NULL
    // Overlapping static entry reached from 0xC14260.
    case 0xC14262: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_multi.asm:65 END_C_FUNCTION
    case 0xC14263: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_multi.asm:65 END_C_FUNCTION
    case 0xC14264: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/jump_multi2.asm (source_named).
bool execute_text_ccs_jump_multi2_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/jump_multi2.asm:3 BEGIN_C_FUNCTION
    case 0xC16308: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC1630D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1630D.
    case 0xC1630F: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC16310: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/jump_multi2.asm:10 END_STACK_VARS
    case 0xC16311: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:11 STX @LOCAL01
    case 0xC16312: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC1630F.
    case 0xC16313: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/jump_multi2.asm:12 TAY
    case 0xC16314: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:13 STY @LOCAL00
    case 0xC16315: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi2.asm:14 JSR GET_WORKING_MEMORY
    case 0xC16317: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1631A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1631A.
    case 0xC1631C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1631D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1631F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1631F.
    case 0xC16321: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC16322: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC16324: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC16326: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC16328: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1632A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/jump_multi2.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1632C: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi2.asm:17 BEQ @UNKNOWN1
    case 0xC1632E: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/text/ccs/jump_multi2.asm:18 JSR GET_WORKING_MEMORY
    case 0xC16330: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/jump_multi2.asm:19 LDX @LOCAL01
    case 0xC16333: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:20 TXA
    case 0xC16335: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:21 STORE_INT1632 @VIRTUAL0A
    case 0xC16336: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:21 STORE_INT1632 @VIRTUAL0A
    case 0xC16338: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi2.asm:22 CLC
    case 0xC1633A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:23 LDA @VIRTUAL06
    case 0xC1633B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:24 SBC @VIRTUAL0A
    case 0xC1633D: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // src/text/ccs/jump_multi2.asm:25 LDA @VIRTUAL06+2
    case 0xC1633F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:26 SBC @VIRTUAL0A+2
    case 0xC16341: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/ccs/jump_multi2.asm:27 BCS @UNKNOWN1
    case 0xC16343: cpu.execute_instruction<0xB0>(0x00003F, 2); return true;
    // src/text/ccs/jump_multi2.asm:28 JSR GET_WORKING_MEMORY
    case 0xC16345: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/jump_multi2.asm:29 LDA @VIRTUAL06
    case 0xC16348: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:30 STA @VIRTUAL02
    case 0xC1634A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/jump_multi2.asm:31 LDX @LOCAL01
    case 0xC1634C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:32 TXA
    case 0xC1634E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:33 SEC
    case 0xC1634F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:34 SBC @VIRTUAL02
    case 0xC16350: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/ccs/jump_multi2.asm:35 STA ONGOSUB_OFFSET
    case 0xC16352: cpu.execute_instruction<0x8D>(0x0097D5, 3); return true;
    // src/text/ccs/jump_multi2.asm:36 LDY @LOCAL00
    case 0xC16355: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/jump_multi2.asm:37 STY @LOCAL01
    case 0xC16357: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:38 JSR GET_WORKING_MEMORY
    case 0xC16359: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/jump_multi2.asm:39 LDA @VIRTUAL06
    case 0xC1635C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:40 DEC
    case 0xC1635E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:41 ASL
    case 0xC1635F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:42 ASL
    case 0xC16360: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:43 PHA
    case 0xC16361: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:44 LDY @LOCAL01
    case 0xC16362: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16364: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16367: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16369: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:45 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1636C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:46 PLA
    case 0xC1636E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:47 CLC
    case 0xC1636F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:48 ADC @VIRTUAL06
    case 0xC16370: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:49 STA @VIRTUAL06
    case 0xC16372: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:50 STA __BSS_START__,Y
    case 0xC16374: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_multi2.asm:51 LDA @VIRTUAL06+2
    case 0xC16377: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:52 STA __BSS_START__+2,Y
    case 0xC16379: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi2.asm:53 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1637C: cpu.execute_instruction<0x9C>(0x0097CA, 3); return true;
    // src/text/ccs/jump_multi2.asm:54 LDA #.LOWORD(UNKNOWN_C1621F)
    case 0xC1637F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00621F, 3); return true;
    // src/text/ccs/jump_multi2.asm:54 LDA #.LOWORD(UNKNOWN_C1621F)
    // Overlapping static entry reached from 0xC1637F.
    case 0xC16381: cpu.execute_instruction<0x62>(0x002180, 3); return true;
    // src/text/ccs/jump_multi2.asm:55 BRA @UNKNOWN2
    case 0xC16382: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/ccs/jump_multi2.asm:57 LDY @LOCAL00
    case 0xC16384: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16386: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC16389: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1638B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/ccs/jump_multi2.asm:58 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1638E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:59 LDX @LOCAL01
    case 0xC16390: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/jump_multi2.asm:60 TXA
    case 0xC16392: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:61 ASL
    case 0xC16393: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:62 ASL
    case 0xC16394: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:63 CLC
    case 0xC16395: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/jump_multi2.asm:64 ADC @VIRTUAL06
    case 0xC16396: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:65 STA @VIRTUAL06
    case 0xC16398: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/jump_multi2.asm:66 STA __BSS_START__,Y
    case 0xC1639A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/ccs/jump_multi2.asm:67 LDA @VIRTUAL06+2
    case 0xC1639D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/jump_multi2.asm:68 STA __BSS_START__+2,Y
    case 0xC1639F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/ccs/jump_multi2.asm:69 LDA #NULL
    case 0xC163A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/jump_multi2.asm:69 LDA #NULL
    // Overlapping static entry reached from 0xC163A2.
    case 0xC163A4: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/jump_multi2.asm:71 END_C_FUNCTION
    case 0xC163A5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/jump_multi2.asm:71 END_C_FUNCTION
    case 0xC163A6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/learn_special_psi.asm (source_named).
bool execute_text_ccs_learn_special_psi_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/learn_special_psi.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15C58: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    case 0xC15C5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/learn_special_psi.asm:4 LDA #$0001
    // Overlapping static entry reached from 0xC15C5A.
    case 0xC15C5C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/learn_special_psi.asm:5 CLC
    case 0xC15C5D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/learn_special_psi.asm:6 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C5E: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C61: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C63: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C65: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/learn_special_psi.asm:7 BRANCHLTEQS @UNKNOWN2
    case 0xC15C67: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/learn_special_psi.asm:8 TXA
    case 0xC15C69: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/learn_special_psi.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC15C6A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/learn_special_psi.asm:10 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C6C: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/learn_special_psi.asm:11 STA CC_ARGUMENT_STORAGE,X
    case 0xC15C6F: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/learn_special_psi.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC15C72: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/learn_special_psi.asm:13 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15C74: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    case 0xC15C77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x005C58, 3); return true;
    // src/text/ccs/learn_special_psi.asm:14 LDA #.LOWORD(CC_1F_71)
    // Overlapping static entry reached from 0xC15C77.
    case 0xC15C79: cpu.execute_instruction<0x5C>(0x8A0880, 4); return true;
    // src/text/ccs/learn_special_psi.asm:15 BRA @UNKNOWN3
    case 0xC15C7A: cpu.execute_instruction<0x80>(0x000008, 2); return true;
    // src/text/ccs/learn_special_psi.asm:17 TXA
    case 0xC15C7C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/learn_special_psi.asm:18 JSL LEARN_SPECIAL_PSI
    case 0xC15C7D: cpu.execute_instruction<0x22>(0xC227C8, 4); return true;
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    case 0xC15C81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/learn_special_psi.asm:19 LDA #NULL
    // Overlapping static entry reached from 0xC15C81.
    case 0xC15C83: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/learn_special_psi.asm:21 RTS
    case 0xC15C84: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/load_string.asm (source_named).
bool execute_text_ccs_load_string_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/load_string.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC178F7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/load_string.asm:4 TXA
    case 0xC178F9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/load_string.asm:5 SEP #PROC_FLAGS::ACCUM8
    case 0xC178FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/load_string.asm:6 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC178FC: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/load_string.asm:7 STA TEXT_NEW_MENU_OPTION_BUFFER,X
    case 0xC178FF: cpu.execute_instruction<0x9D>(0x0097D7, 3); return true;
    // src/text/ccs/load_string.asm:8 REP #PROC_FLAGS::ACCUM8
    case 0xC17902: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/load_string.asm:9 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC17904: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    case 0xC17907: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x007889, 3); return true;
    // src/text/ccs/load_string.asm:10 LDA #.LOWORD(UNKNOWN_C17889)
    // Overlapping static entry reached from 0xC17907.
    case 0xC17909: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/ccs/load_string.asm:11 RTS
    case 0xC1790A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/open_window.asm (source_named).
bool execute_text_ccs_open_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/open_window.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC143C2: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/open_window.asm:4 TXA
    case 0xC143C4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/open_window.asm:5 JSR CREATE_WINDOW
    case 0xC143C5: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/text/ccs/open_window.asm:6 LDA #NULL
    case 0xC143C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/open_window.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC143C8.
    case 0xC143CA: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/open_window.asm:7 RTS
    case 0xC143CB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_member_add.asm (source_named).
bool execute_text_ccs_party_member_add_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/party_member_add.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15F71: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC15F73: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC15F74: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC15F75: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC15F76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC15F76.
    case 0xC15F78: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC15F79: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_member_add.asm:8 END_STACK_VARS
    case 0xC15F7A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_member_add.asm:9 CPX #$0000
    case 0xC15F7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/party_member_add.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15F78.
    case 0xC15F7C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/party_member_add.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15F7B.
    case 0xC15F7D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/party_member_add.asm:10 BEQ @ARG_IS_ZERO
    case 0xC15F7E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/party_member_add.asm:11 TXA
    case 0xC15F80: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_member_add.asm:12 BRA @ARG_IS_NONZERO
    case 0xC15F81: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/party_member_add.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC15F83: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/party_member_add.asm:15 LDA @VIRTUAL06
    case 0xC15F86: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/party_member_add.asm:17 JSL ADD_CHAR_TO_PARTY
    case 0xC15F88: cpu.execute_instruction<0x22>(0xC228F8, 4); return true;
    // src/text/ccs/party_member_add.asm:18 LDA #NULL
    case 0xC15F8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_member_add.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC15F8C.
    case 0xC15F8E: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/party_member_add.asm:19 PLD
    case 0xC15F8F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/party_member_add.asm:20 RTS
    case 0xC15F90: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_member_remove.asm (source_named).
bool execute_text_ccs_party_member_remove_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/party_member_remove.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15F91: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC15F93: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC15F94: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC15F95: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC15F96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC15F96.
    case 0xC15F98: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC15F99: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_member_remove.asm:8 END_STACK_VARS
    case 0xC15F9A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_member_remove.asm:9 CPX #$0000
    case 0xC15F9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/party_member_remove.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15F98.
    case 0xC15F9C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/party_member_remove.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15F9B.
    case 0xC15F9D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/party_member_remove.asm:10 BEQ @ARG_IS_ZERO
    case 0xC15F9E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/party_member_remove.asm:11 TXA
    case 0xC15FA0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_member_remove.asm:12 BRA @ARG_IS_NONZERO
    case 0xC15FA1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/party_member_remove.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC15FA3: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/party_member_remove.asm:15 LDA @VIRTUAL06
    case 0xC15FA6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/party_member_remove.asm:17 JSL REMOVE_CHAR_FROM_PARTY
    case 0xC15FA8: cpu.execute_instruction<0x22>(0xC229BB, 4); return true;
    // src/text/ccs/party_member_remove.asm:18 LDA #NULL
    case 0xC15FAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_member_remove.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC16002.
    case 0xC15FAD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/party_member_remove.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC15FAC.
    case 0xC15FAE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/party_member_remove.asm:19 PLD
    case 0xC15FAF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/party_member_remove.asm:20 RTS
    case 0xC15FB0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_selection_menu.asm (source_named).
bool execute_text_ccs_party_selection_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/party_selection_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1467D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC1467F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14680: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14681: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14682: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14682.
    case 0xC14684: cpu.execute_instruction<0xFF>(0xAD685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14685: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_selection_menu.asm:9 END_STACK_VARS
    case 0xC14686: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14687: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14684.
    case 0xC14688: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14688.
    case 0xC14689: cpu.execute_instruction<0x97>(0x0000C9, 2); return true;
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    case 0xC1468A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14689.
    case 0xC1468B: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/text/ccs/party_selection_menu.asm:11 CMP #16
    // Overlapping static entry reached from 0xC1468A.
    case 0xC1468C: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/ccs/party_selection_menu.asm:12 BCS @UNKNOWN0
    case 0xC1468D: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/text/ccs/party_selection_menu.asm:13 TXA
    case 0xC1468F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC14690: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14692: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/party_selection_menu.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC14695: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/party_selection_menu.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC14698: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1469A: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/party_selection_menu.asm:19 LDA #.LOWORD(CC_1A_01)
    case 0xC1469D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00467D, 3); return true;
    // src/text/ccs/party_selection_menu.asm:19 LDA #.LOWORD(CC_1A_01)
    // Overlapping static entry reached from 0xC1469D.
    case 0xC1469F: cpu.execute_instruction<0x46>(0x000080, 2); return true;
    // src/text/ccs/party_selection_menu.asm:20 BRA @UNKNOWN1
    case 0xC146A0: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/party_selection_menu.asm:20 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1469F.
    case 0xC146A1: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu.asm:22 LDY #1
    case 0xC146A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/party_selection_menu.asm:22 LDY #1
    // Overlapping static entry reached from 0xC146A2.
    case 0xC146A4: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/ccs/party_selection_menu.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    case 0xC146A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x0097BA, 3); return true;
    // src/text/ccs/party_selection_menu.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    // Overlapping static entry reached from 0xC146A5.
    case 0xC146A7: cpu.execute_instruction<0x97>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu.asm:24 JSR UNKNOWN_C1244C
    case 0xC146A8: cpu.execute_instruction<0x20>(0x00244C, 3); return true;
    // src/text/ccs/party_selection_menu.asm:24 JSR UNKNOWN_C1244C
    // Overlapping static entry reached from 0xC146A7.
    case 0xC146A9: cpu.execute_instruction<0x4C>(0x008524, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/party_selection_menu.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC146AB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC146AD: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/party_selection_menu.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC146B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/party_selection_menu.asm:27 JSR SET_WORKING_MEMORY
    case 0xC146B7: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/party_selection_menu.asm:28 LDA #NULL
    case 0xC146BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_selection_menu.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC146BA.
    case 0xC146BC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/party_selection_menu.asm:30 END_C_FUNCTION
    case 0xC146BD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/party_selection_menu.asm:30 END_C_FUNCTION
    case 0xC146BE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/party_selection_menu_uncancellable.asm (source_named).
bool execute_text_ccs_party_selection_menu_uncancellable_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:3 BEGIN_C_FUNCTION
    case 0xC1463B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC1463D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC1463E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC1463F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14640: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14640.
    case 0xC14642: cpu.execute_instruction<0xFF>(0xAD685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14643: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:9 END_STACK_VARS
    case 0xC14644: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14645: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14642.
    case 0xC14646: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:10 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    // Overlapping static entry reached from 0xC14646.
    case 0xC14647: cpu.execute_instruction<0x97>(0x0000C9, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:11 CMP #16
    case 0xC14648: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14647.
    case 0xC14649: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:11 CMP #16
    // Overlapping static entry reached from 0xC14648.
    case 0xC1464A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:12 BCS @UNKNOWN0
    case 0xC1464B: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:13 TXA
    case 0xC1464D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1464E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14650: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC14653: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC14656: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14658: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:19 LDA #.LOWORD(CC_1A_00)
    case 0xC1465B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00463B, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:19 LDA #.LOWORD(CC_1A_00)
    // Overlapping static entry reached from 0xC1465B.
    case 0xC1465D: cpu.execute_instruction<0x46>(0x000080, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:20 BRA @UNKNOWN1
    case 0xC1465E: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:20 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1465D.
    case 0xC1465F: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:22 LDY #0
    case 0xC14660: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:22 LDY #0
    // Overlapping static entry reached from 0xC14660.
    case 0xC14662: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    case 0xC14663: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BA, 2); else cpu.execute_instruction<0xA9>(0x0097BA, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:23 LDA #.LOWORD(CC_ARGUMENT_STORAGE)
    // Overlapping static entry reached from 0xC14663.
    case 0xC14665: cpu.execute_instruction<0x97>(0x000020, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:24 JSR UNKNOWN_C1244C
    case 0xC14666: cpu.execute_instruction<0x20>(0x00244C, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:24 JSR UNKNOWN_C1244C
    // Overlapping static entry reached from 0xC14665.
    case 0xC14667: cpu.execute_instruction<0x4C>(0x008524, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC14669: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:25 STORE_INT1632 @VIRTUAL06
    case 0xC1466B: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1466D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1466F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14671: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:26 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14673: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:27 JSR SET_WORKING_MEMORY
    case 0xC14675: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:28 LDA #NULL
    case 0xC14678: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/party_selection_menu_uncancellable.asm:28 LDA #NULL
    // Overlapping static entry reached from 0xC14678.
    case 0xC1467A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:30 END_C_FUNCTION
    case 0xC1467B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/party_selection_menu_uncancellable.asm:30 END_C_FUNCTION
    case 0xC1467C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/pause.asm (source_named).
bool execute_text_ccs_pause_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/pause.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14EAB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/pause.asm:4 TXA
    case 0xC14EAD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/pause.asm:5 JSR UNKNOWN_C100D6
    case 0xC14EAE: cpu.execute_instruction<0x20>(0x0000D6, 3); return true;
    // src/text/ccs/pause.asm:6 LDA #NULL
    case 0xC14EB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/pause.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC14EB1.
    case 0xC14EB3: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/pause.asm:7 RTS
    case 0xC14EB4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/play_music.asm (source_named).
bool execute_text_ccs_play_music_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/play_music.asm:3 BEGIN_C_FUNCTION
    case 0xC14751: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14753: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14754: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14755: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14756: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14756.
    case 0xC14758: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC14759: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/play_music.asm:9 END_STACK_VARS
    case 0xC1475A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:10 TXA
    case 0xC1475B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:11 STA @LOCAL00
    case 0xC1475C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/play_music.asm:12 LDA #1
    case 0xC1475E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/play_music.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1475E.
    case 0xC14760: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/play_music.asm:13 CLC
    case 0xC14761: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14762: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14765: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14767: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC14769: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/play_music.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC1476B: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/play_music.asm:16 LDA @LOCAL00
    case 0xC1476D: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/play_music.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1476F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/play_music.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14771: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/play_music.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC14774: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/play_music.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC14777: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/play_music.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14779: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/play_music.asm:22 LDA #.LOWORD(CC_1F_00)
    case 0xC1477C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000051, 2); else cpu.execute_instruction<0xA9>(0x004751, 3); return true;
    // src/text/ccs/play_music.asm:22 LDA #.LOWORD(CC_1F_00)
    // Overlapping static entry reached from 0xC1477C.
    case 0xC1477E: cpu.execute_instruction<0x47>(0x000080, 2); return true;
    // src/text/ccs/play_music.asm:23 BRA @UNKNOWN5
    case 0xC1477F: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/ccs/play_music.asm:23 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC1477E.
    case 0xC14780: cpu.execute_instruction<0x1D>(0x000EA5, 3); return true;
    // src/text/ccs/play_music.asm:25 LDA @LOCAL00
    case 0xC14781: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/play_music.asm:26 BEQ @UNKNOWN3
    case 0xC14783: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/play_music.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xC14785: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/play_music.asm:27 STORE_INT1632 @VIRTUAL06
    case 0xC14787: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/play_music.asm:28 BRA @UNKNOWN4
    case 0xC14789: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/play_music.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC1478B: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/play_music.asm:32 LDA CC_ARGUMENT_STORAGE
    case 0xC1478E: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/play_music.asm:33 AND #$00FF
    case 0xC14791: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/play_music.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC14791.
    case 0xC14793: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/play_music.asm:34 TAX
    case 0xC14794: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/play_music.asm:35 LDA @VIRTUAL06
    case 0xC14795: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/play_music.asm:36 JSL UNKNOWN_C216AD
    case 0xC14797: cpu.execute_instruction<0x22>(0xC216AD, 4); return true;
    // src/text/ccs/play_music.asm:37 LDA #NULL
    case 0xC1479B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/play_music.asm:37 LDA #NULL
    // Overlapping static entry reached from 0xC1479B.
    case 0xC1479D: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/play_music.asm:39 END_C_FUNCTION
    case 0xC1479E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/play_music.asm:39 END_C_FUNCTION
    case 0xC1479F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/play_sfx.asm (source_named).
bool execute_text_ccs_play_sfx_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/play_sfx.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC147AB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC147AD: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC147AE: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC147AF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC147B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC147B0.
    case 0xC147B2: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC147B3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/play_sfx.asm:8 END_STACK_VARS
    case 0xC147B4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/play_sfx.asm:9 TXA
    case 0xC147B5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/play_sfx.asm:10 BEQ @UNKNOWN0
    case 0xC147B6: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/play_sfx.asm:11 STORE_INT1632 $06
    case 0xC147B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/play_sfx.asm:11 STORE_INT1632 $06
    case 0xC147BA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/play_sfx.asm:12 BRA @UNKNOWN1
    case 0xC147BC: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/play_sfx.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC147BE: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/play_sfx.asm:16 LDA @VIRTUAL06
    case 0xC147C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/play_sfx.asm:17 JSL PLAY_SOUND_AND_UNKNOWN
    case 0xC147C3: cpu.execute_instruction<0x22>(0xC216D0, 4); return true;
    // src/text/ccs/play_sfx.asm:18 LDA #NULL
    case 0xC147C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/play_sfx.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC147C7.
    case 0xC147C9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/play_sfx.asm:19 PLD
    case 0xC147CA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/play_sfx.asm:20 RTS
    case 0xC147CB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_character.asm (source_named).
bool execute_text_ccs_print_character_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_character.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC1488D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC1488F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14890: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14891: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14892: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14892.
    case 0xC14894: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14895: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_character.asm:8 END_STACK_VARS
    case 0xC14896: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_character.asm:9 CPX #$0000
    case 0xC14897: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_character.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14894.
    case 0xC14898: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_character.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC14897.
    case 0xC14899: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_character.asm:10 BEQ @UNKNOWN0
    case 0xC1489A: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_character.asm:11 TXA
    case 0xC1489C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_character.asm:12 BRA @UNKNOWN1
    case 0xC1489D: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_character.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC1489F: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_character.asm:15 LDA @VIRTUAL06
    case 0xC148A2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_character.asm:17 JSR PRINT_LETTER
    case 0xC148A4: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/text/ccs/print_character.asm:18 LDA #NULL
    case 0xC148A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_character.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC148A7.
    case 0xC148A9: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_character.asm:19 PLD
    case 0xC148AA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_character.asm:20 RTS
    case 0xC148AB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_character_name.asm (source_named).
bool execute_text_ccs_print_character_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_character_name.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14FD7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    case 0xC14FD9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    case 0xC14FDA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    case 0xC14FDB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    case 0xC14FDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14FDC.
    case 0xC14FDE: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    case 0xC14FDF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_character_name.asm:8 END_STACK_VARS
    case 0xC14FE0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_character_name.asm:9 CPX #$00FF
    case 0xC14FE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x0000FF, 3); return true;
    // src/text/ccs/print_character_name.asm:9 CPX #$00FF
    // Overlapping static entry reached from 0xC14FDE.
    case 0xC14FE2: cpu.execute_instruction<0xFF>(0x0CD000, 4); return true;
    // src/text/ccs/print_character_name.asm:9 CPX #$00FF
    // Overlapping static entry reached from 0xC14FE1.
    case 0xC14FE3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/ccs/print_character_name.asm:10 BNE @UNKNOWN0
    case 0xC14FE4: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/text/ccs/print_character_name.asm:11 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC14FE6: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/ccs/print_character_name.asm:12 TAX
    case 0xC14FE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/print_character_name.asm:13 LDA a:window_stats::working_memory_storage,X
    case 0xC14FEA: cpu.execute_instruction<0xBD>(0x000021, 3); return true;
    // src/text/ccs/print_character_name.asm:14 JSR UNKNOWN_C1931B
    case 0xC14FED: cpu.execute_instruction<0x20>(0x00931B, 3); return true;
    // src/text/ccs/print_character_name.asm:15 BRA @UNKNOWN3
    case 0xC14FF0: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/text/ccs/print_character_name.asm:17 CPX #$0000
    case 0xC14FF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_character_name.asm:17 CPX #$0000
    // Overlapping static entry reached from 0xC14FF2.
    case 0xC14FF4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_character_name.asm:18 BEQ @UNKNOWN1
    case 0xC14FF5: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_character_name.asm:19 TXA
    case 0xC14FF7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_character_name.asm:20 BRA @UNKNOWN2
    case 0xC14FF8: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_character_name.asm:22 JSR GET_ARGUMENT_MEMORY
    case 0xC14FFA: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_character_name.asm:23 LDA @VIRTUAL06
    case 0xC14FFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_character_name.asm:25 JSR UNKNOWN_C1931B
    case 0xC14FFF: cpu.execute_instruction<0x20>(0x00931B, 3); return true;
    // src/text/ccs/print_character_name.asm:27 LDA #NULL
    case 0xC15002: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_character_name.asm:27 LDA #NULL
    // Overlapping static entry reached from 0xC15002.
    case 0xC15004: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_character_name.asm:28 PLD
    case 0xC15005: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_character_name.asm:29 RTS
    case 0xC15006: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_horizontal_strings.asm (source_named).
bool execute_text_ccs_print_horizontal_strings_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_horizontal_strings.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC145CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC145CC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC145CD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC145CE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC145CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC145CF.
    case 0xC145D1: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC145D2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_horizontal_strings.asm:8 END_STACK_VARS
    case 0xC145D3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_horizontal_strings.asm:9 CPX #$0000
    case 0xC145D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC145D1.
    case 0xC145D5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC145D4.
    case 0xC145D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:10 BEQ @UNKNOWN0
    case 0xC145D7: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:11 TXA
    case 0xC145D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_horizontal_strings.asm:12 BRA @UNKNOWN1
    case 0xC145DA: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC145DC: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:15 LDA @VIRTUAL06
    case 0xC145DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:17 LDY #$0000
    case 0xC145E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC145E1.
    case 0xC145E3: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:18 LDX #$0001
    case 0xC145E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:18 LDX #$0001
    // Overlapping static entry reached from 0xC145E4.
    case 0xC145E6: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:19 JSR UNKNOWN_C1180D
    case 0xC145E7: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:20 LDA #NULL
    case 0xC145EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_horizontal_strings.asm:20 LDA #NULL
    // Overlapping static entry reached from 0xC145EA.
    case 0xC145EC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_horizontal_strings.asm:21 PLD
    case 0xC145ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_horizontal_strings.asm:22 RTS
    case 0xC145EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_item_name.asm (source_named).
bool execute_text_ccs_print_item_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_item_name.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC146BF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC146C1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC146C2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC146C3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC146C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC146C4.
    case 0xC146C6: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC146C7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_item_name.asm:8 END_STACK_VARS
    case 0xC146C8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_item_name.asm:9 CPX #$0000
    case 0xC146C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_item_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC146C6.
    case 0xC146CA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_item_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC146C9.
    case 0xC146CB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_item_name.asm:10 BEQ @UNKNOWN0
    case 0xC146CC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_item_name.asm:11 TXA
    case 0xC146CE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_item_name.asm:12 BRA @UNKNOWN1
    case 0xC146CF: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_item_name.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC146D1: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_item_name.asm:15 LDA @VIRTUAL06
    case 0xC146D4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_item_name.asm:17 JSR UNKNOWN_C19216
    case 0xC146D6: cpu.execute_instruction<0x20>(0x009216, 3); return true;
    // src/text/ccs/print_item_name.asm:18 LDA #NULL
    case 0xC146D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_item_name.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC146D9.
    case 0xC146DB: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_item_name.asm:19 PLD
    case 0xC146DC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_item_name.asm:20 RTS
    case 0xC146DD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_money_amount.asm (source_named).
bool execute_text_ccs_print_money_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_money_amount.asm:3 BEGIN_C_FUNCTION
    case 0xC15573: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC15575: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC15576: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC15577: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC15578: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC15578.
    case 0xC1557A: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC1557B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:10 END_STACK_VARS
    case 0xC1557C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:11 TXA
    case 0xC1557D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:12 STA @LOCAL01
    case 0xC1557E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/print_money_amount.asm:13 LDA #3
    case 0xC15580: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/print_money_amount.asm:13 LDA #3
    // Overlapping static entry reached from 0xC15580.
    case 0xC15582: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/print_money_amount.asm:14 CLC
    case 0xC15583: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15584: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15587: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC15589: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1558B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/print_money_amount.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC1558D: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/print_money_amount.asm:17 LDA @LOCAL01
    case 0xC1558F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/print_money_amount.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC15591: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15593: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/print_money_amount.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC15596: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/print_money_amount.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC15599: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1559B: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/print_money_amount.asm:23 LDA #.LOWORD(CC_1C_0B)
    case 0xC1559E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000073, 2); else cpu.execute_instruction<0xA9>(0x005573, 3); return true;
    // src/text/ccs/print_money_amount.asm:23 LDA #.LOWORD(CC_1C_0B)
    // Overlapping static entry reached from 0xC1559E.
    case 0xC155A0: cpu.execute_instruction<0x55>(0x00004C, 2); return true;
    // src/text/ccs/print_money_amount.asm:24 JMP @UNKNOWN5
    case 0xC155A1: cpu.execute_instruction<0x4C>(0x005657, 3); return true;
    // src/text/ccs/print_money_amount.asm:24 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC155A0.
    case 0xC155A2: cpu.execute_instruction<0x57>(0x000056, 2); return true;
    // src/text/ccs/print_money_amount.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC155A4: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/print_money_amount.asm:27 LDY #24
    case 0xC155A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC155A8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC155A6.
    case 0xC155A9: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC155AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC155A9.
    case 0xC155AB: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC155AC: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC155AB.
    case 0xC155AD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:29 JSL ASL32_ENTRY2
    case 0xC155AE: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC155B2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC155B4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC155B5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:30 PUSH32 @VIRTUAL06
    case 0xC155B7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:31 LDY #16
    case 0xC155B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/print_money_amount.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC155BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC155B8.
    case 0xC155BB: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155BC: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC155BB.
    case 0xC155BE: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC155BE.
    case 0xC155C0: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155C1: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC155C0.
    case 0xC155C2: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155C3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC155C2.
    case 0xC155C4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_money_amount.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC155C5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_money_amount.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC155C7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:35 JSL ASL32_ENTRY2
    case 0xC155C9: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC155CD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC155CF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC155D0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_money_amount.asm:36 PUSH32 @VIRTUAL06
    case 0xC155D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_money_amount.asm:37 LDY #8
    case 0xC155D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/print_money_amount.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC155D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC155D3.
    case 0xC155D6: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC155D7: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC155D6.
    case 0xC155D9: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC155DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC155D9.
    case 0xC155DB: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC155DC: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC155DB.
    case 0xC155DD: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC155DE: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC155DD.
    case 0xC155DF: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_money_amount.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC155E0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_money_amount.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC155E2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_money_amount.asm:41 JSL ASL32_ENTRY2
    case 0xC155E4: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC155E8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC155EA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC155EC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC155EE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/print_money_amount.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC155F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC155F2: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC155F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC155F7: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC155F9: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_money_amount.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC155FB: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_money_amount.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC155FD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC155FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15601: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15603: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15605: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15607: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15609: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC1560B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC1560C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC1560E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:47 PULL32 @VIRTUAL0A
    case 0xC1560F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15611: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15613: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15615: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15617: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15619: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1561B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC1561D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC1561E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC15620: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:49 PULL32 @VIRTUAL0A
    case 0xC15621: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15623: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15625: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15627: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15629: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1562B: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1562D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1562F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1562F.
    case 0xC15631: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15632: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15634.
    case 0xC15636: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15637: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15639: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1563B: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1563D: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1563F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/print_money_amount.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15641: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/print_money_amount.asm:53 BNE @UNKNOWN4
    case 0xC15643: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/print_money_amount.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15645: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15648: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1564A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1564C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_money_amount.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1564E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/print_money_amount.asm:60 JSL UNKNOWN_C4507A
    case 0xC15650: cpu.execute_instruction<0x22>(0xC4507A, 4); return true;
    // src/text/ccs/print_money_amount.asm:62 LDA #NULL
    case 0xC15654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_money_amount.asm:62 LDA #NULL
    // Overlapping static entry reached from 0xC15654.
    case 0xC15656: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_money_amount.asm:64 END_C_FUNCTION
    case 0xC15657: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_money_amount.asm:64 END_C_FUNCTION
    case 0xC15658: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_number.asm (source_named).
bool execute_text_ccs_print_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_number.asm:3 BEGIN_C_FUNCTION
    case 0xC153AF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC153B1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC153B2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC153B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC153B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC153B4.
    case 0xC153B6: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC153B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_number.asm:10 END_STACK_VARS
    case 0xC153B8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:11 TXA
    case 0xC153B9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:12 STA @LOCAL01
    case 0xC153BA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/print_number.asm:13 LDA #3
    case 0xC153BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/print_number.asm:13 LDA #3
    // Overlapping static entry reached from 0xC153BC.
    case 0xC153BE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/print_number.asm:14 CLC
    case 0xC153BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC153C0: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC153C3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC153C5: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC153C7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/print_number.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC153C9: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/print_number.asm:17 LDA @LOCAL01
    case 0xC153CB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/print_number.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC153CD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC153CF: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/print_number.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC153D2: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/print_number.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC153D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC153D7: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/print_number.asm:23 LDA #.LOWORD(CC_1C_0A)
    case 0xC153DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x0053AF, 3); return true;
    // src/text/ccs/print_number.asm:23 LDA #.LOWORD(CC_1C_0A)
    // Overlapping static entry reached from 0xC153DA.
    case 0xC153DC: cpu.execute_instruction<0x53>(0x00004C, 2); return true;
    // src/text/ccs/print_number.asm:24 JMP @UNKNOWN5
    case 0xC153DD: cpu.execute_instruction<0x4C>(0x005492, 3); return true;
    // src/text/ccs/print_number.asm:24 JMP @UNKNOWN5
    // Overlapping static entry reached from 0xC153DC.
    case 0xC153DE: cpu.execute_instruction<0x92>(0x000054, 2); return true;
    // src/text/ccs/print_number.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC153E0: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/print_number.asm:27 LDY #24
    case 0xC153E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC153E4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC153E2.
    case 0xC153E5: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC153E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC153E5.
    case 0xC153E7: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC153E8: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC153E7.
    case 0xC153E9: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:29 JSL ASL32_ENTRY2
    case 0xC153EA: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC153EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC153F0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC153F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_number.asm:30 PUSH32 @VIRTUAL06
    case 0xC153F3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:31 LDY #16
    case 0xC153F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/print_number.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC153F6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC153F4.
    case 0xC153F7: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC153F8: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC153F7.
    case 0xC153FA: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC153FB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC153FA.
    case 0xC153FC: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC153FD: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC153FC.
    case 0xC153FE: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC153FF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC153FE.
    case 0xC15400: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_number.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC15401: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_number.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC15403: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:35 JSL ASL32_ENTRY2
    case 0xC15405: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC15409: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC1540B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC1540C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/print_number.asm:36 PUSH32 @VIRTUAL06
    case 0xC1540E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/print_number.asm:37 LDY #8
    case 0xC1540F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/print_number.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC15411: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1540F.
    case 0xC15412: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15413: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15412.
    case 0xC15415: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15416: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15415.
    case 0xC15417: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC15418: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15417.
    case 0xC15419: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1541A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC15419.
    case 0xC1541B: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_number.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC1541C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_number.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC1541E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/print_number.asm:41 JSL ASL32_ENTRY2
    case 0xC15420: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15424: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15426: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC15428: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_number.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1542A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/print_number.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC1542C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1542E: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15431: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15433: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15435: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/print_number.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC15437: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/print_number.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC15439: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1543B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1543D: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1543F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15441: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15443: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_number.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15445: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC15447: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC15448: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC1544A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_number.asm:47 PULL32 @VIRTUAL0A
    case 0xC1544B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1544D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1544F: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15451: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15453: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15455: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_number.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15457: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC15459: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC1545A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC1545C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/print_number.asm:49 PULL32 @VIRTUAL0A
    case 0xC1545D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1545F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15461: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15463: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15465: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15467: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/print_number.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC15469: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1546B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1546B.
    case 0xC1546D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1546E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15470: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC15470.
    case 0xC15472: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/ccs/print_number.asm:51 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC15473: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15475: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15477: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC15479: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1547B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/ccs/print_number.asm:52 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1547D: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/ccs/print_number.asm:53 BNE @UNKNOWN4
    case 0xC1547F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/print_number.asm:54 JSR GET_ARGUMENT_MEMORY
    case 0xC15481: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15484: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15486: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15488: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/print_number.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1548A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/print_number.asm:57 JSR PRINT_NUMBER
    case 0xC1548C: cpu.execute_instruction<0x20>(0x000DF6, 3); return true;
    // src/text/ccs/print_number.asm:58 LDA #NULL
    case 0xC1548F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_number.asm:58 LDA #NULL
    // Overlapping static entry reached from 0xC1548F.
    case 0xC15491: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_number.asm:60 END_C_FUNCTION
    case 0xC15492: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_number.asm:60 END_C_FUNCTION
    case 0xC15493: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_party_or_hint_new_line.asm (source_named).
bool execute_text_ccs_print_party_or_hint_new_line_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_party_or_hint_new_line.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC140CF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC140D4.
    case 0xC140D6: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_party_or_hint_new_line.asm:8 END_STACK_VARS
    case 0xC140D8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:9 CPX #$0000
    case 0xC140D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC140D6.
    case 0xC140DA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC140D9.
    case 0xC140DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:10 BEQ @UNKNOWN0
    case 0xC140DC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:11 TXA
    case 0xC140DE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:12 BRA @UNKNOWN1
    case 0xC140DF: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC140E1: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:15 LDA @VIRTUAL06
    case 0xC140E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:17 JSL UNKNOWN_EF01D2
    case 0xC140E6: cpu.execute_instruction<0x22>(0xEF01D2, 4); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:18 LDA #NULL
    case 0xC140EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC140EA.
    case 0xC140EC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:19 PLD
    case 0xC140ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_party_or_hint_new_line.asm:20 RTS
    case 0xC140EE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_psi_name.asm (source_named).
bool execute_text_ccs_print_psi_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_psi_name.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC161D1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC161D3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC161D4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC161D5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC161D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC161D6.
    case 0xC161D8: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC161D9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_psi_name.asm:8 END_STACK_VARS
    case 0xC161DA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_psi_name.asm:9 CPX #$0000
    case 0xC161DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_psi_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC161D8.
    case 0xC161DC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_psi_name.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC161DB.
    case 0xC161DD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_psi_name.asm:10 BEQ @ARG_IS_ZERO
    case 0xC161DE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_psi_name.asm:11 TXA
    case 0xC161E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_psi_name.asm:12 BRA @ARG_IS_NONZERO
    case 0xC161E1: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_psi_name.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC161E3: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_psi_name.asm:15 LDA @VIRTUAL06
    case 0xC161E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_psi_name.asm:17 JSR UNKNOWN_C1CA06
    case 0xC161E8: cpu.execute_instruction<0x20>(0x00CA06, 3); return true;
    // src/text/ccs/print_psi_name.asm:18 LDA #NULL
    case 0xC161EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_psi_name.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC161EB.
    case 0xC161ED: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_psi_name.asm:19 PLD
    case 0xC161EE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_psi_name.asm:20 RTS
    case 0xC161EF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_special_graphics.asm (source_named).
bool execute_text_ccs_print_special_graphics_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_special_graphics.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC143B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/ccs/print_special_graphics.asm:4 TXA
    case 0xC143BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_special_graphics.asm:5 JSR UNKNOWN_C10EE3
    case 0xC143BB: cpu.execute_instruction<0x20>(0x000EE3, 3); return true;
    // src/text/ccs/print_special_graphics.asm:6 LDA #NULL
    case 0xC143BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_special_graphics.asm:6 LDA #NULL
    // Overlapping static entry reached from 0xC143BE.
    case 0xC143C0: cpu.execute_instruction<0x00>(0x000060, 2); return true;
    // src/text/ccs/print_special_graphics.asm:7 RTS
    case 0xC143C1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_stat.asm (source_named).
bool execute_text_ccs_print_stat_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_stat.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC140B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC140B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC140B3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC140B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC140B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC140B5.
    case 0xC140B7: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC140B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_stat.asm:8 END_STACK_VARS
    case 0xC140B9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_stat.asm:9 CPX #$0000
    case 0xC140BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_stat.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC140B7.
    case 0xC140BB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_stat.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC140BA.
    case 0xC140BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_stat.asm:10 BEQ @UNKNOWN0
    case 0xC140BD: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_stat.asm:11 TXA
    case 0xC140BF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_stat.asm:12 BRA @UNKNOWN1
    case 0xC140C0: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_stat.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC140C2: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_stat.asm:15 LDA @VIRTUAL06
    case 0xC140C5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_stat.asm:17 JSR UNKNOWN_C19249
    case 0xC140C7: cpu.execute_instruction<0x20>(0x009249, 3); return true;
    // src/text/ccs/print_stat.asm:18 LDA #NULL
    case 0xC140CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_stat.asm:18 LDA #NULL
    // Overlapping static entry reached from 0xC140CA.
    case 0xC140CC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_stat.asm:19 PLD
    case 0xC140CD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_stat.asm:20 RTS
    case 0xC140CE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_teleport_destination_name.asm (source_named).
bool execute_text_ccs_print_teleport_destination_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:3 BEGIN_C_FUNCTION
    case 0xC146DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC146E3.
    case 0xC146E5: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:10 END_STACK_VARS
    case 0xC146E7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    case 0xC146E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC146E5.
    case 0xC146E9: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:11 CPX #0
    // Overlapping static entry reached from 0xC146E8.
    case 0xC146EA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:12 BEQ @UNKNOWN0
    case 0xC146EB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:13 TXA
    case 0xC146ED: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:14 STA @LOCAL01
    case 0xC146EE: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:15 BRA @UNKNOWN1
    case 0xC146F0: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:17 JSR GET_ARGUMENT_MEMORY
    case 0xC146F2: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:18 LDA @VIRTUAL06
    case 0xC146F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:19 STA @LOCAL01
    case 0xC146F7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC146F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x007880, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC146F9.
    case 0xC146FB: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC146FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC146FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC146FE.
    case 0xC14700: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:21 LOADPTR PSI_TELEPORT_DEST_TABLE, @VIRTUAL06
    case 0xC14701: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:22 LDA @LOCAL01
    case 0xC14703: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14705: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001F, 2); else cpu.execute_instruction<0xA0>(0x00001F, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    // Overlapping static entry reached from 0xC14705.
    case 0xC14707: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:23 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(psi_teleport_destination)
    case 0xC14708: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/ccs/print_teleport_destination_name.asm:24 CLC
    case 0xC1470C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/print_teleport_destination_name.asm:25 ADC @VIRTUAL06
    case 0xC1470D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:26 STA @VIRTUAL06
    case 0xC1470F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:27 STA @LOCAL00
    case 0xC14711: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:28 LDA @VIRTUAL06+2
    case 0xC14713: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:29 STA @LOCAL00+2
    case 0xC14715: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    case 0xC14717: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x000019, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:30 LDA #.SIZEOF(psi_teleport_destination::name)
    // Overlapping static entry reached from 0xC14717.
    case 0xC14719: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/print_teleport_destination_name.asm:34 JSL UNKNOWN_C447FB
    case 0xC1471A: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    case 0xC1471E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_teleport_destination_name.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC1471E.
    case 0xC14720: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14721: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/print_teleport_destination_name.asm:37 END_C_FUNCTION
    case 0xC14722: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/print_vertical_strings.asm (source_named).
bool execute_text_ccs_print_vertical_strings_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/print_vertical_strings.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC15BA7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15BA9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15BAA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15BAB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC15BAC.
    case 0xC15BAE: cpu.execute_instruction<0xFF>(0xE0685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15BAF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/print_vertical_strings.asm:8 END_STACK_VARS
    case 0xC15BB0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:9 CPX #$0000
    case 0xC15BB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15BAE.
    case 0xC15BB2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:9 CPX #$0000
    // Overlapping static entry reached from 0xC15BB1.
    case 0xC15BB3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:10 BEQ @ARG_IS_ZERO
    case 0xC15BB4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:11 TXA
    case 0xC15BB6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:12 BRA @ARG_IS_NONZERO
    case 0xC15BB7: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:14 JSR GET_ARGUMENT_MEMORY
    case 0xC15BB9: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:15 LDA @VIRTUAL06
    case 0xC15BBC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:17 LDY #$0000
    case 0xC15BBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC15BBE.
    case 0xC15BC0: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:18 TYX
    case 0xC15BC1: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:19 JSR UNKNOWN_C1180D
    case 0xC15BC2: cpu.execute_instruction<0x20>(0x00180D, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:20 LDA #NULL
    case 0xC15BC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/print_vertical_strings.asm:20 LDA #NULL
    // Overlapping static entry reached from 0xC15BC5.
    case 0xC15BC7: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/print_vertical_strings.asm:21 PLD
    case 0xC15BC8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/print_vertical_strings.asm:22 RTS
    case 0xC15BC9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_hp_by_amount.asm (source_named).
bool execute_text_ccs_recover_hp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_hp_by_amount.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14A50: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A52: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A53: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A54: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14A55.
    case 0xC14A57: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A58: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:8 END_STACK_VARS
    case 0xC14A59: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:9 STX @VIRTUAL02
    case 0xC14A5A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14A57.
    case 0xC14A5B: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:10 LDA #$0001
    case 0xC14A5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14A5C.
    case 0xC14A5E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:11 CLC
    case 0xC14A5F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A60: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A63: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A65: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A67: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_hp_by_amount.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14A69: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:14 LDA @VIRTUAL02
    case 0xC14A6B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14A6D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A6F: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14A72: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14A75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14A77: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_02)
    case 0xC14A7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x004A50, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:20 LDA #.LOWORD(CC_1E_02)
    // Overlapping static entry reached from 0xC14A7A.
    case 0xC14A7C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:21 BRA @UNKNOWN5
    case 0xC14A7D: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14A7F: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:24 AND #$00FF
    case 0xC14A82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14A82.
    case 0xC14A84: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:25 TAX
    case 0xC14A85: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14A86: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:27 TXA
    case 0xC14A88: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14A89: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14A8B: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14A8E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:33 LDY #$0001
    case 0xC14A90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:33 LDY #$0001
    // Overlapping static entry reached from 0xC14A90.
    case 0xC14A92: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:34 LDX @VIRTUAL02
    case 0xC14A93: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:35 JSR RECOVER_HP_AMTPERCENT
    case 0xC14A95: cpu.execute_instruction<0x20>(0x008F64, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:36 LDA #NULL
    case 0xC14A98: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_hp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14A98.
    case 0xC14A9A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/recover_hp_by_amount.asm:38 PLD
    case 0xC14A9B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_amount.asm:39 RTS
    case 0xC14A9C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_hp_by_percent.asm (source_named).
bool execute_text_ccs_recover_hp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_hp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC149B6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149B8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149B9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC149BB.
    case 0xC149BD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:8 END_STACK_VARS
    case 0xC149BF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC149C0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC149BD.
    case 0xC149C1: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:10 LDA #$0001
    case 0xC149C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC149C2.
    case 0xC149C4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:11 CLC
    case 0xC149C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC149C6: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149C9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149CB: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149CD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_hp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC149CF: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC149D1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC149D3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC149D5: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC149D8: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC149DB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC149DD: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_00)
    case 0xC149E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B6, 2); else cpu.execute_instruction<0xA9>(0x0049B6, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:20 LDA #.LOWORD(CC_1E_00)
    // Overlapping static entry reached from 0xC149E0.
    case 0xC149E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x001C80, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC149E3: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:21 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC149E2.
    case 0xC149E4: cpu.execute_instruction<0x1C>(0x00BAAD, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC149E5: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    // Overlapping static entry reached from 0xC149E4.
    case 0xC149E7: cpu.execute_instruction<0x97>(0x000029, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    case 0xC149E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC149E7.
    case 0xC149E9: cpu.execute_instruction<0xFF>(0xF0AA00, 4); return true;
    // src/text/ccs/recover_hp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC149E8.
    case 0xC149EA: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:25 TAX
    case 0xC149EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC149EC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:26 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC149E9.
    case 0xC149ED: cpu.execute_instruction<0x03>(0x00008A, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:27 TXA
    case 0xC149EE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC149EF: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC149F1: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC149F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:33 LDY #$0000
    case 0xC149F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC149F6.
    case 0xC149F8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC149F9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:35 JSR RECOVER_HP_AMTPERCENT
    case 0xC149FB: cpu.execute_instruction<0x20>(0x008F64, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:36 LDA #NULL
    case 0xC149FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_hp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC149FE.
    case 0xC14A00: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/recover_hp_by_percent.asm:38 PLD
    case 0xC14A01: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/recover_hp_by_percent.asm:39 RTS
    case 0xC14A02: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_pp_by_amount.asm (source_named).
bool execute_text_ccs_recover_pp_by_amount_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:3 BEGIN_C_FUNCTION
    case 0xC14B84: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14B86: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14B87: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14B88: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14B89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC14B89.
    case 0xC14B8B: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14B8C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:9 END_STACK_VARS
    case 0xC14B8D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:10 STX @LOCAL00
    case 0xC14B8E: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:10 STX @LOCAL00
    // Overlapping static entry reached from 0xC14B8B.
    case 0xC14B8F: cpu.execute_instruction<0x0E>(0x0001A9, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:11 LDA #1
    case 0xC14B90: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:11 LDA #1
    // Overlapping static entry reached from 0xC14B90.
    case 0xC14B92: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:12 CLC
    case 0xC14B93: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:13 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B94: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14B97: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14B99: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14B9B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:14 BRANCHLTEQS @UNKNOWN2
    case 0xC14B9D: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:15 TXA
    case 0xC14B9F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC14BA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BA2: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14BA5: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14BA8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14BAA: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:21 LDA #.LOWORD(CC_1E_06)
    case 0xC14BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000084, 2); else cpu.execute_instruction<0xA9>(0x004B84, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:21 LDA #.LOWORD(CC_1E_06)
    // Overlapping static entry reached from 0xC14BAD.
    case 0xC14BAF: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_amount.asm:22 BRA @UNKNOWN5
    case 0xC14BB0: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:24 LDA CC_ARGUMENT_STORAGE
    case 0xC14BB2: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    case 0xC14BB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC14BB5.
    case 0xC14BB7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:26 BEQ @UNKNOWN3
    case 0xC14BB8: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:27 AND #$00FF
    case 0xC14BBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:27 AND #$00FF
    // Overlapping static entry reached from 0xC14BBA.
    case 0xC14BBC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:28 BRA @UNKNOWN4
    case 0xC14BBD: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14BBF: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:31 LDA @VIRTUAL06
    case 0xC14BC2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:33 LDY #1
    case 0xC14BC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:33 LDY #1
    // Overlapping static entry reached from 0xC14BC4.
    case 0xC14BC6: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:34 LDX @LOCAL00
    case 0xC14BC7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/ccs/recover_pp_by_amount.asm:35 JSR RECOVER_PP_AMTPERCENT
    case 0xC14BC9: cpu.execute_instruction<0x20>(0x009010, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:36 LDA #NULL
    case 0xC14BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_pp_by_amount.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14BCC.
    case 0xC14BCE: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:38 END_C_FUNCTION
    case 0xC14BCF: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/recover_pp_by_amount.asm:38 END_C_FUNCTION
    case 0xC14BD0: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/recover_pp_by_percent.asm (source_named).
bool execute_text_ccs_recover_pp_by_percent_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/recover_pp_by_percent.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC14AEA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14AEC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14AED: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14AEE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14AEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC14AEF.
    case 0xC14AF1: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14AF2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:8 END_STACK_VARS
    case 0xC14AF3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:9 STX @VIRTUAL02
    case 0xC14AF4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC14AF1.
    case 0xC14AF5: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:10 LDA #$0001
    case 0xC14AF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:10 LDA #$0001
    // Overlapping static entry reached from 0xC14AF6.
    case 0xC14AF8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:11 CLC
    case 0xC14AF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:12 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14AFA: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14AFD: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14AFF: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14B01: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/recover_pp_by_percent.asm:13 BRANCHLTEQS @UNKNOWN2
    case 0xC14B03: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:14 LDA @VIRTUAL02
    case 0xC14B05: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:15 SEP #PROC_FLAGS::ACCUM8
    case 0xC14B07: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:16 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B09: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:17 STA CC_ARGUMENT_STORAGE,X
    case 0xC14B0C: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC14B0F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:19 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14B11: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_04)
    case 0xC14B14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EA, 2); else cpu.execute_instruction<0xA9>(0x004AEA, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:20 LDA #.LOWORD(CC_1E_04)
    // Overlapping static entry reached from 0xC14B14.
    case 0xC14B16: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:21 BRA @UNKNOWN5
    case 0xC14B17: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC14B19: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:24 AND #$00FF
    case 0xC14B1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC14B1C.
    case 0xC14B1E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:25 TAX
    case 0xC14B1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:26 BEQ @UNKNOWN3
    case 0xC14B20: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:27 TXA
    case 0xC14B22: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:28 BRA @UNKNOWN4
    case 0xC14B23: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:30 JSR GET_ARGUMENT_MEMORY
    case 0xC14B25: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:31 LDA @VIRTUAL06
    case 0xC14B28: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:33 LDY #$0000
    case 0xC14B2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:33 LDY #$0000
    // Overlapping static entry reached from 0xC14B2A.
    case 0xC14B2C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:34 LDX @VIRTUAL02
    case 0xC14B2D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:35 JSR RECOVER_PP_AMTPERCENT
    case 0xC14B2F: cpu.execute_instruction<0x20>(0x009010, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:36 LDA #NULL
    case 0xC14B32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/recover_pp_by_percent.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC14B32.
    case 0xC14B34: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/recover_pp_by_percent.asm:38 PLD
    case 0xC14B35: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/recover_pp_by_percent.asm:39 RTS
    case 0xC14B36: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/screen_reload_pointer.asm (source_named).
bool execute_text_ccs_screen_reload_pointer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:3 BEGIN_C_FUNCTION
    case 0xC16DE8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC16DEA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC16DEB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC16DEC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC16DED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16DED.
    case 0xC16DEF: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC16DF0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:10 END_STACK_VARS
    case 0xC16DF1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:11 TXA
    case 0xC16DF2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:12 STA @LOCAL01
    case 0xC16DF3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:13 LDA #3
    case 0xC16DF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:13 LDA #3
    // Overlapping static entry reached from 0xC16DF5.
    case 0xC16DF7: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:14 CLC
    case 0xC16DF8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:15 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16DF9: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16DFC: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16DFE: cpu.execute_instruction<0x10>(0x000019, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16E00: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:16 BRANCHLTEQS @UNKNOWN2
    case 0xC16E02: cpu.execute_instruction<0x30>(0x000015, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:17 LDA @LOCAL01
    case 0xC16E04: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E06: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:19 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E08: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:20 STA CC_ARGUMENT_STORAGE,X
    case 0xC16E0B: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:21 REP #PROC_FLAGS::ACCUM8
    case 0xC16E0E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:22 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16E10: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:23 LDA #.LOWORD(CC_1F_63)
    case 0xC16E13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x006DE8, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:23 LDA #.LOWORD(CC_1F_63)
    // Overlapping static entry reached from 0xC16E13.
    case 0xC16E15: cpu.execute_instruction<0x6D>(0x00BD4C, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:24 JMP @UNKNOWN3
    case 0xC16E16: cpu.execute_instruction<0x4C>(0x006EBD, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:24 JMP @UNKNOWN3
    // Overlapping static entry reached from 0xC16E15.
    case 0xC16E18: cpu.execute_instruction<0x6E>(0x0010E2, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:26 SEP #PROC_FLAGS::INDEX8
    case 0xC16E19: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:27 LDY #24
    case 0xC16E1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000018, 2); else cpu.execute_instruction<0xA0>(0x00A518, 3); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16E1D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E1B.
    case 0xC16E1E: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16E1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E1E.
    case 0xC16E20: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    case 0xC16E21: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:28 MOVE_INT1632 @LOCAL01, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E20.
    case 0xC16E22: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:29 JSL ASL32_ENTRY2
    case 0xC16E23: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC16E27: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC16E29: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC16E2A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:30 PUSH32 @VIRTUAL06
    case 0xC16E2C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:31 LDY #16
    case 0xC16E2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x00E210, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E2F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:32 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16E2D.
    case 0xC16E30: cpu.execute_instruction<0x20>(0x00BCAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16E31: cpu.execute_instruction<0xAD>(0x0097BC, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E30.
    case 0xC16E33: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16E34: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E33.
    case 0xC16E35: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16E36: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E35.
    case 0xC16E37: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16E38: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E37.
    case 0xC16E39: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:33 MOVE_INT832 CC_ARGUMENT_STORAGE+2, @VIRTUAL06
    case 0xC16E3A: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC16E3C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:35 JSL ASL32_ENTRY2
    case 0xC16E3E: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:917 LDA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC16E42: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:918 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC16E44: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:919 LDA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC16E45: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:920 PHA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:36 PUSH32 @VIRTUAL06
    case 0xC16E47: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/screen_reload_pointer.asm:37 LDY #8
    case 0xC16E48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00E208, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:38 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E4A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:38 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16E48.
    case 0xC16E4B: cpu.execute_instruction<0x20>(0x00BBAD, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16E4C: cpu.execute_instruction<0xAD>(0x0097BB, 3); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E4B.
    case 0xC16E4E: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16E4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E4E.
    case 0xC16E50: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16E51: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E50.
    case 0xC16E52: cpu.execute_instruction<0x07>(0x000064, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16E53: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    // Overlapping static entry reached from 0xC16E52.
    case 0xC16E54: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:39 MOVE_INT832 CC_ARGUMENT_STORAGE+1, @VIRTUAL06
    case 0xC16E55: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC16E57: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:41 JSL ASL32_ENTRY2
    case 0xC16E59: cpu.execute_instruction<0x22>(0xC09246, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16E5D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16E5F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16E61: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:42 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16E63: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:43 SEP #PROC_FLAGS::ACCUM8
    case 0xC16E65: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16E67: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16E6A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16E6C: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16E6E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:44 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16E70: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC16E72: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E74: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E76: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E78: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E7A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E7C: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:46 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E7E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC16E80: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC16E81: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC16E83: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:47 PULL32 @VIRTUAL0A
    case 0xC16E84: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E86: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E88: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E8A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E8C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E8E: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:48 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E90: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:924 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC16E92: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:925 STA val
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC16E93: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:926 PLA
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC16E95: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:927 STA val + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:49 PULL32 @VIRTUAL0A
    case 0xC16E96: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:955 LDA val1
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E98: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:956 ORA val2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E9A: cpu.execute_instruction<0x05>(0x00000A, 2); return true;
    // include/macros.asm:957 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:958 LDA val1 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16E9E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:959 ORA val2 + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16EA0: cpu.execute_instruction<0x05>(0x00000C, 2); return true;
    // include/macros.asm:960 STA dest + 2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:50 OR_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC16EA2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:51 LDA #$00FF
    case 0xC16EA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:51 LDA #$00FF
    // Overlapping static entry reached from 0xC16EA4.
    case 0xC16EA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:52 JSL UNKNOWN_C46594
    case 0xC16EA7: cpu.execute_instruction<0x22>(0xC46594, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16EAB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16EAD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16EAF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC16EB1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:54 LDA #10
    case 0xC16EB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:54 LDA #10
    // Overlapping static entry reached from 0xC16EB3.
    case 0xC16EB5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/screen_reload_pointer.asm:55 JSL UNKNOWN_C064E3
    case 0xC16EB6: cpu.execute_instruction<0x22>(0xC064E3, 4); return true;
    // src/text/ccs/screen_reload_pointer.asm:56 LDA #NULL
    case 0xC16EBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/screen_reload_pointer.asm:56 LDA #NULL
    // Overlapping static entry reached from 0xC16EBA.
    case 0xC16EBC: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:58 END_C_FUNCTION
    case 0xC16EBD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/screen_reload_pointer.asm:58 END_C_FUNCTION
    case 0xC16EBE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_argmem.asm (source_named).
bool execute_text_ccs_set_argmem_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_argmem.asm:3 BEGIN_C_FUNCTION
    case 0xC15BCA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15BCC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15BCD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15BCE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15BCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC15BCF.
    case 0xC15BD1: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15BD2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_argmem.asm:11 END_STACK_VARS
    case 0xC15BD3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:12 TXA
    case 0xC15BD4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:13 STA @LOCAL02
    case 0xC15BD5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:14 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15BD7: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/set_argmem.asm:15 BNE @UNKNOWN0
    case 0xC15BDA: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:16 LDA @LOCAL02
    case 0xC15BDC: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC15BDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15BE0: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_argmem.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC15BE3: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_argmem.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC15BE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC15BE8: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_argmem.asm:22 LDA #.LOWORD(CC_1D_15)
    case 0xC15BEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x005BCA, 3); return true;
    // src/text/ccs/set_argmem.asm:22 LDA #.LOWORD(CC_1D_15)
    // Overlapping static entry reached from 0xC15BEB.
    case 0xC15BED: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:23 BRA @UNKNOWN2
    case 0xC15BEE: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/text/ccs/set_argmem.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC15BF0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:26 LDA #8
    case 0xC15BF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x00E208, 3); return true;
    // src/text/ccs/set_argmem.asm:27 SEP #PROC_FLAGS::INDEX8
    case 0xC15BF4: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/set_argmem.asm:27 SEP #PROC_FLAGS::INDEX8
    // Overlapping static entry reached from 0xC15BF2.
    case 0xC15BF5: cpu.execute_instruction<0x10>(0x0000A8, 2); return true;
    // src/text/ccs/set_argmem.asm:28 TAY
    case 0xC15BF6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC15BF7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_argmem.asm:30 LDA @LOCAL02
    case 0xC15BF9: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/ccs/set_argmem.asm:31 JSL ASL16_ENTRY2
    case 0xC15BFB: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/set_argmem.asm:32 STA @VIRTUAL02
    case 0xC15BFF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/set_argmem.asm:33 LDA CC_ARGUMENT_STORAGE
    case 0xC15C01: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_argmem.asm:34 AND #$00FF
    case 0xC15C04: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_argmem.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC15C04.
    case 0xC15C06: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/set_argmem.asm:35 ORA @VIRTUAL02
    case 0xC15C07: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/set_argmem.asm:36 REP #PROC_FLAGS::INDEX8
    case 0xC15C09: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/ccs/set_argmem.asm:37 TAX
    case 0xC15C0B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_argmem.asm:38 STX @LOCAL01
    case 0xC15C0C: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/ccs/set_argmem.asm:39 BNE @UNKNOWN1
    case 0xC15C0E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/ccs/set_argmem.asm:40 JSR GET_ARGUMENT_MEMORY
    case 0xC15C10: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_argmem.asm:42 JSL UNKNOWN_C226F0
    case 0xC15C13: cpu.execute_instruction<0x22>(0xC226F0, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:43 STORE_INT1632 @VIRTUAL0A
    case 0xC15C17: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:43 STORE_INT1632 @VIRTUAL0A
    case 0xC15C19: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/text/ccs/set_argmem.asm:44 LDX @LOCAL01
    case 0xC15C1B: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/ccs/set_argmem.asm:45 TXA
    case 0xC15C1D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:46 STORE_INT1632 @VIRTUAL06
    case 0xC15C1E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:46 STORE_INT1632 @VIRTUAL06
    case 0xC15C20: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_argmem.asm:47 JSL MULT32
    case 0xC15C22: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C26: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_argmem.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC15C2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/set_argmem.asm:49 JSR SET_WORKING_MEMORY
    case 0xC15C2E: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/set_argmem.asm:50 LDA #NULL
    case 0xC15C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_argmem.asm:50 LDA #NULL
    // Overlapping static entry reached from 0xC15C31.
    case 0xC15C33: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_argmem.asm:52 END_C_FUNCTION
    case 0xC15C34: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_argmem.asm:52 END_C_FUNCTION
    case 0xC15C35: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_direction.asm (source_named).
bool execute_text_ccs_set_character_direction_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_direction.asm:3 BEGIN_C_FUNCTION
    case 0xC163FD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC163FF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16400: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16401: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16402: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC16402.
    case 0xC16404: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16405: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_direction.asm:9 END_STACK_VARS
    case 0xC16406: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:10 TXA
    case 0xC16407: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:11 STA @LOCAL00
    case 0xC16408: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/ccs/set_character_direction.asm:12 LDA #1
    case 0xC1640A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_direction.asm:12 LDA #1
    // Overlapping static entry reached from 0xC1640A.
    case 0xC1640C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_direction.asm:13 CLC
    case 0xC1640D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1640E: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16411: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16413: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16415: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_direction.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16417: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/text/ccs/set_character_direction.asm:16 LDA @LOCAL00
    case 0xC16419: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_character_direction.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC1641B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC1641D: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_direction.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16420: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_direction.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16423: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16425: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_direction.asm:22 LDA #.LOWORD(CC_1F_13)
    case 0xC16428: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0063FD, 3); return true;
    // src/text/ccs/set_character_direction.asm:22 LDA #.LOWORD(CC_1F_13)
    // Overlapping static entry reached from 0xC16428.
    case 0xC1642A: cpu.execute_instruction<0x63>(0x000080, 2); return true;
    // src/text/ccs/set_character_direction.asm:23 BRA @UNKNOWN7
    case 0xC1642B: cpu.execute_instruction<0x80>(0x00003F, 2); return true;
    // src/text/ccs/set_character_direction.asm:23 BRA @UNKNOWN7
    // Overlapping static entry reached from 0xC1642A.
    case 0xC1642C: cpu.execute_instruction<0x3F>(0x97BAAD, 4); return true;
    // src/text/ccs/set_character_direction.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC1642D: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_direction.asm:26 AND #$00FF
    case 0xC16430: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_direction.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16430.
    case 0xC16432: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/set_character_direction.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16433: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/ccs/set_character_direction.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC16435: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16437: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1643A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1643C: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC1643E: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_direction.asm:29 MOVE_INT832 CC_ARGUMENT_STORAGE, @VIRTUAL06
    case 0xC16440: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/set_character_direction.asm:30 BRA @ARG_1_IS_NONZERO
    case 0xC16442: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_character_direction.asm:32 JSR GET_WORKING_MEMORY
    case 0xC16444: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/set_character_direction.asm:32 JSR GET_WORKING_MEMORY
    // Overlapping static entry reached from 0xC1649B.
    case 0xC16446: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/text/ccs/set_character_direction.asm:34 SEP #PROC_FLAGS::ACCUM8
    case 0xC16447: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:34 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC16446.
    case 0xC16448: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // src/text/ccs/set_character_direction.asm:35 LDA @VIRTUAL06
    case 0xC16449: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_character_direction.asm:36 STA @VIRTUAL00
    case 0xC1644B: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/set_character_direction.asm:37 REP #PROC_FLAGS::ACCUM8
    case 0xC1644D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_direction.asm:38 LDA @LOCAL00
    case 0xC1644F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/ccs/set_character_direction.asm:39 BEQ @ARG_2_IS_ZERO
    case 0xC16451: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/set_character_direction.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16453: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/set_character_direction.asm:40 STORE_INT1632 @VIRTUAL06
    case 0xC16455: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/set_character_direction.asm:41 BRA @ARG_2_IS_NONZERO
    case 0xC16457: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_character_direction.asm:43 JSR GET_ARGUMENT_MEMORY
    case 0xC16459: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // src/text/ccs/set_character_direction.asm:45 LDA @VIRTUAL06
    case 0xC1645C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_character_direction.asm:46 TAX
    case 0xC1645E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:47 DEX
    case 0xC1645F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/ccs/set_character_direction.asm:48 LDA @VIRTUAL00
    case 0xC16460: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/set_character_direction.asm:49 AND #$00FF
    case 0xC16462: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_direction.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC16462.
    case 0xC16464: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/ccs/set_character_direction.asm:50 JSL UNKNOWN_C46363
    case 0xC16465: cpu.execute_instruction<0x22>(0xC46363, 4); return true;
    // src/text/ccs/set_character_direction.asm:51 LDA #NULL
    case 0xC16469: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_direction.asm:51 LDA #NULL
    // Overlapping static entry reached from 0xC16469.
    case 0xC1646B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_direction.asm:53 END_C_FUNCTION
    case 0xC1646C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_direction.asm:53 END_C_FUNCTION
    case 0xC1646D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_invisibility.asm (source_named).
bool execute_text_ccs_set_character_invisibility_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/set_character_invisibility.asm:3 BEGIN_C_FUNCTION
    case 0xC16CC6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CC8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CC9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC16CCB.
    case 0xC16CCD: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_invisibility.asm:10 END_STACK_VARS
    case 0xC16CCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    case 0xC16CD0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:11 STX @LOCAL01
    // Overlapping static entry reached from 0xC16CCD.
    case 0xC16CD1: cpu.execute_instruction<0x10>(0x0000A9, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    case 0xC16CD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16CD1.
    case 0xC16CD3: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:12 LDA #1
    // Overlapping static entry reached from 0xC16CD2.
    case 0xC16CD4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:13 CLC
    case 0xC16CD5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:14 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CD6: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CD9: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CDB: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CDD: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_invisibility.asm:15 BRANCHLTEQS @UNKNOWN2
    case 0xC16CDF: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:16 TXA
    case 0xC16CE1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:17 SEP #PROC_FLAGS::ACCUM8
    case 0xC16CE2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:18 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CE4: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:19 STA CC_ARGUMENT_STORAGE,X
    case 0xC16CE7: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC16CEA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:21 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16CEC: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    case 0xC16CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C6, 2); else cpu.execute_instruction<0xA9>(0x006CC6, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:22 LDA #.LOWORD(CC_1F_EB)
    // Overlapping static entry reached from 0xC16CEF.
    case 0xC16CF1: cpu.execute_instruction<0x6C>(0x001E80, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:23 BRA @UNKNOWN3
    case 0xC16CF2: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:25 LDA CC_ARGUMENT_STORAGE
    case 0xC16CF4: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    case 0xC16CF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:26 AND #$00FF
    // Overlapping static entry reached from 0xC16CF7.
    case 0xC16CF9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:27 TAY
    case 0xC16CFA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:28 STY @LOCAL00
    case 0xC16CFB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:29 TYA
    case 0xC16CFD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:30 JSL UNKNOWN_C4608C
    case 0xC16CFE: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:31 LDX @LOCAL01
    case 0xC16D02: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:32 JSL UNKNOWN_C4C91A
    case 0xC16D04: cpu.execute_instruction<0x22>(0xC4C91A, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:33 LDY @LOCAL00
    case 0xC16D08: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/ccs/set_character_invisibility.asm:34 TYA
    case 0xC16D0A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/ccs/set_character_invisibility.asm:35 JSL UNKNOWN_C463F4
    case 0xC16D0B: cpu.execute_instruction<0x22>(0xC463F4, 4); return true;
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    case 0xC16D0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_invisibility.asm:36 LDA #NULL
    // Overlapping static entry reached from 0xC16D0F.
    case 0xC16D11: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16D12: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/set_character_invisibility.asm:38 END_C_FUNCTION
    case 0xC16D13: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/ccs/set_character_level.asm (source_named).
bool execute_text_ccs_set_character_level_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/ccs/set_character_level.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC16A01: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A03: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A04: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A05: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC16A06.
    case 0xC16A08: cpu.execute_instruction<0xFF>(0xA9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A09: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/set_character_level.asm:8 END_STACK_VARS
    case 0xC16A0A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    case 0xC16A0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16A08.
    case 0xC16A0C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/ccs/set_character_level.asm:9 LDA #$0001
    // Overlapping static entry reached from 0xC16A0B.
    case 0xC16A0D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/ccs/set_character_level.asm:10 CLC
    case 0xC16A0E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:11 SBC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A0F: cpu.execute_instruction<0xED>(0x0097CA, 3); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A12: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A14: cpu.execute_instruction<0x10>(0x000017, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A16: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/ccs/set_character_level.asm:12 BRANCHLTEQS @UNKNOWN2
    case 0xC16A18: cpu.execute_instruction<0x30>(0x000013, 2); return true;
    // src/text/ccs/set_character_level.asm:13 TXA
    case 0xC16A1A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A1B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:15 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A1D: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_level.asm:16 STA CC_ARGUMENT_STORAGE,X
    case 0xC16A20: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_level.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC16A23: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:18 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC16A25: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    case 0xC16A28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x006A01, 3); return true;
    // src/text/ccs/set_character_level.asm:19 LDA #.LOWORD(CC_1E_08)
    // Overlapping static entry reached from 0xC16A28.
    case 0xC16A2A: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:20 BRA @UNKNOWN8
    case 0xC16A2B: cpu.execute_instruction<0x80>(0x00004C, 2); return true;
    // src/text/ccs/set_character_level.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A2D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:23 LDA CC_ARGUMENT_STORAGE
    case 0xC16A2F: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/set_character_level.asm:24 STA @VIRTUAL00
    case 0xC16A32: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/ccs/set_character_level.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC16A34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:26 TXA
    case 0xC16A36: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:27 BEQ @ARG_1_IS_ZERO
    case 0xC16A37: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // include/macros.asm:889 CMP #$0000
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    // Overlapping static entry reached from 0xC16A39.
    case 0xC16A3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:890 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A3C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:891 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A3E: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:892 BPL :+
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A40: cpu.execute_instruction<0x10>(0x000002, 2); return true;
    // include/macros.asm:893 DEC dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:28 SIGN_EXTENDA1632 @VIRTUAL0A
    case 0xC16A42: cpu.execute_instruction<0xC6>(0x00000C, 2); return true;
    // src/text/ccs/set_character_level.asm:29 BRA @ARG_1_IS_NONZERO2
    case 0xC16A44: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/ccs/set_character_level.asm:31 JSR GET_ARGUMENT_MEMORY
    case 0xC16A46: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A49: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A4B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A4D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:32 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC16A4F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/ccs/set_character_level.asm:34 LDA @VIRTUAL00
    case 0xC16A51: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    case 0xC16A53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/set_character_level.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC16A53.
    case 0xC16A55: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/ccs/set_character_level.asm:36 BEQ @ARG_2_IS_ZERO
    case 0xC16A56: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/ccs/set_character_level.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC16A58: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A5A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // include/macros.asm:853 LDA src
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    // Overlapping static entry reached from 0xC16AB1.
    case 0xC16A5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:858 STA dest
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A5C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:859 STZ dest+1
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A5E: cpu.execute_instruction<0x64>(0x000007, 2); return true;
    // include/macros.asm:860 STZ dest+2
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A60: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:861 STZ dest+3
    // Macro caller: src/text/ccs/set_character_level.asm:38 MOVE_INT832 @VIRTUAL00, @VIRTUAL06
    case 0xC16A62: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/ccs/set_character_level.asm:39 BRA @ARG_2_IS_NONZERO
    case 0xC16A64: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/set_character_level.asm:41 JSR GET_WORKING_MEMORY
    case 0xC16A66: cpu.execute_instruction<0x20>(0x00040A, 3); return true;
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    case 0xC16A69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/ccs/set_character_level.asm:43 LDY #$0001
    // Overlapping static entry reached from 0xC16A69.
    case 0xC16A6B: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/ccs/set_character_level.asm:44 REP #PROC_FLAGS::ACCUM8
    case 0xC16A6C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/set_character_level.asm:45 LDA @VIRTUAL0A
    case 0xC16A6E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/text/ccs/set_character_level.asm:46 TAX
    case 0xC16A70: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:47 LDA @VIRTUAL06
    case 0xC16A71: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/ccs/set_character_level.asm:48 JSR RESET_CHAR_LEVEL_ONE
    case 0xC16A73: cpu.execute_instruction<0x20>(0x00D8D0, 3); return true;
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    case 0xC16A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/set_character_level.asm:49 LDA #NULL
    // Overlapping static entry reached from 0xC16A76.
    case 0xC16A78: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // src/text/ccs/set_character_level.asm:51 PLD
    case 0xC16A79: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/ccs/set_character_level.asm:52 RTS
    case 0xC16A7A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
