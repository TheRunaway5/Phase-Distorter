// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/unknown/C4/C4A7B0.asm (unresolved).
bool execute_unresolved_c4_c4a7b0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4A7B0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4A7B0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC4A7B2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC4A7B3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC4A7B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4A7B4.
    case 0xC4A7B6: cpu.execute_instruction<0xFF>(0xC2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4A7B0.asm:9 END_STACK_VARS
    case 0xC4A7B7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:10 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4A7B8: cpu.execute_instruction<0xAD>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:10 LDA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC4A7B6.
    case 0xC4A7BA: cpu.execute_instruction<0xAE>(0x00FF29, 3); return true;
    // src/unknown/C4/C4A7B0.asm:11 AND #$00FF
    case 0xC4A7BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC4A7BB.
    case 0xC4A7BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:12 BEQL @UNKNOWN34
    case 0xC4A7BE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:12 BEQL @UNKNOWN34
    case 0xC4A7C0: cpu.execute_instruction<0x4C>(0x00AC53, 3); return true;
    // src/unknown/C4/C4A7B0.asm:13 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    case 0xC4A7C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CC, 2); else cpu.execute_instruction<0xA0>(0x00AECC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:13 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    // Overlapping static entry reached from 0xC4A7C3.
    case 0xC4A7C5: cpu.execute_instruction<0xAE>(0x0000A9, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A7C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A7C6.
    case 0xC4A7C8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A7C9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A7CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC4A7CB.
    case 0xC4A7CD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:14 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC4A7CE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A7D0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A7D3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A7D5: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:15 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A7D8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:16 CMP @VIRTUAL06+2
    case 0xC4A7DA: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:17 BNE @UNKNOWN1
    case 0xC4A7DC: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C4A7B0.asm:18 LDA @VIRTUAL0A
    case 0xC4A7DE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:19 CMP @VIRTUAL06
    case 0xC4A7E0: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:21 BEQL @UNKNOWN19
    case 0xC4A7E2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:21 BEQL @UNKNOWN19
    case 0xC4A7E4: cpu.execute_instruction<0x4C>(0x00AA1A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:22 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    case 0xC4A7E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C2, 2); else cpu.execute_instruction<0xA2>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:22 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    // Overlapping static entry reached from 0xC4A7E7.
    case 0xC4A7E9: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:23 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A7EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:24 LDA __BSS_START__,X
    case 0xC4A7EC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:25 DEC
    case 0xC4A7EF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:26 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4A7F0: cpu.execute_instruction<0x8D>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC4A7F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:28 AND #$00FF
    case 0xC4A7F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC4A7F5.
    case 0xC4A7F7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:29 BNEL @UNKNOWN9
    case 0xC4A7F8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:29 BNEL @UNKNOWN9
    case 0xC4A7FA: cpu.execute_instruction<0x4C>(0x00A915, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A7FD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A800: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A802: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:30 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC4A805: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A807: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:32 LDA [@VIRTUAL0A]
    case 0xC4A809: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:33 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4A80B: cpu.execute_instruction<0x8D>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4A80E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:35 AND #$00FF
    case 0xC4A810: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC4A810.
    case 0xC4A812: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:36 BNE @UNKNOWN4
    case 0xC4A813: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A815: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A817: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A81A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:37 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC4A81C: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:38 JMP @UNKNOWN34
    case 0xC4A81F: cpu.execute_instruction<0x4C>(0x00AC53, 3); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A822: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A825: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A827: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:40 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A82A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:41 LDY #oval_window::centre_x
    case 0xC4A82C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:41 LDY #oval_window::centre_x
    // Overlapping static entry reached from 0xC4A82C.
    case 0xC4A82E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:42 LDA [@VIRTUAL06],Y
    case 0xC4A82F: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:43 CMP #$8000
    case 0xC4A831: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:43 CMP #$8000
    // Overlapping static entry reached from 0xC4A831.
    case 0xC4A833: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:44 BEQ @UNKNOWN5
    case 0xC4A834: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:45 STA LOADED_OVAL_WINDOW_CENTRE_X
    case 0xC4A836: cpu.execute_instruction<0x8D>(0x00AED0, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A839: cpu.execute_instruction<0xAD>(0x00AECC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A83C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A83E: cpu.execute_instruction<0xAD>(0x00AECE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:47 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A841: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:48 LDY #oval_window::centre_y
    case 0xC4A843: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4A7B0.asm:48 LDY #oval_window::centre_y
    // Overlapping static entry reached from 0xC4A843.
    case 0xC4A845: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:49 LDA [@VIRTUAL06],Y
    case 0xC4A846: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:50 CMP #$8000
    case 0xC4A848: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:50 CMP #$8000
    // Overlapping static entry reached from 0xC4A848.
    case 0xC4A84A: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:51 BEQ @UNKNOWN6
    case 0xC4A84B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:52 STA LOADED_OVAL_WINDOW_CENTRE_Y
    case 0xC4A84D: cpu.execute_instruction<0x8D>(0x00AED2, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A850: cpu.execute_instruction<0xAD>(0x00AECC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A853: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A855: cpu.execute_instruction<0xAD>(0x00AECE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:54 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A858: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:55 LDY #oval_window::initial_width
    case 0xC4A85A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4A7B0.asm:55 LDY #oval_window::initial_width
    // Overlapping static entry reached from 0xC4A85A.
    case 0xC4A85C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:56 LDA [@VIRTUAL06],Y
    case 0xC4A85D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:57 CMP #$8000
    case 0xC4A85F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:57 CMP #$8000
    // Overlapping static entry reached from 0xC4A85F.
    case 0xC4A861: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:58 BEQ @UNKNOWN7
    case 0xC4A862: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:59 STA LOADED_OVAL_WINDOW_WIDTH
    case 0xC4A864: cpu.execute_instruction<0x8D>(0x00AED4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A867: cpu.execute_instruction<0xAD>(0x00AECC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A86A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A86C: cpu.execute_instruction<0xAD>(0x00AECE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:61 MOVE_INT LOADED_OVAL_WINDOW, @VIRTUAL06
    case 0xC4A86F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:62 LDY #oval_window::initial_height
    case 0xC4A871: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4A7B0.asm:62 LDY #oval_window::initial_height
    // Overlapping static entry reached from 0xC4A871.
    case 0xC4A873: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:63 LDA [@VIRTUAL06],Y
    case 0xC4A874: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:64 CMP #$8000
    case 0xC4A876: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:64 CMP #$8000
    // Overlapping static entry reached from 0xC4A876.
    case 0xC4A878: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:65 BEQ @UNKNOWN8
    case 0xC4A879: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/unknown/C4/C4A7B0.asm:66 STA LOADED_OVAL_WINDOW_HEIGHT
    case 0xC4A87B: cpu.execute_instruction<0x8D>(0x00AED6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:68 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    case 0xC4A87E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CC, 2); else cpu.execute_instruction<0xA0>(0x00AECC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:68 LDY #.LOWORD(LOADED_OVAL_WINDOW)
    // Overlapping static entry reached from 0xC4A87E.
    case 0xC4A880: cpu.execute_instruction<0xAE>(0x001584, 3); return true;
    // src/unknown/C4/C4A7B0.asm:69 STY @LOCAL03
    case 0xC4A881: cpu.execute_instruction<0x84>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A883: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A886: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A888: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:70 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A88B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:71 LDY #oval_window::centre_x_add
    case 0xC4A88D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:71 LDY #oval_window::centre_x_add
    // Overlapping static entry reached from 0xC4A88D.
    case 0xC4A88F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:72 LDA [@VIRTUAL06],Y
    case 0xC4A890: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:73 STA LOADED_OVAL_WINDOW_CENTRE_X_ADD
    case 0xC4A892: cpu.execute_instruction<0x8D>(0x00AED8, 3); return true;
    // src/unknown/C4/C4A7B0.asm:74 LDY @LOCAL03
    case 0xC4A895: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A897: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A89A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A89C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:75 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A89F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:76 LDY #oval_window::centre_y_add
    case 0xC4A8A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C4A7B0.asm:76 LDY #oval_window::centre_y_add
    // Overlapping static entry reached from 0xC4A8A1.
    case 0xC4A8A3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:77 LDA [@VIRTUAL06],Y
    case 0xC4A8A4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:78 STA LOADED_OVAL_WINDOW_CENTRE_Y_ADD
    case 0xC4A8A6: cpu.execute_instruction<0x8D>(0x00AEDA, 3); return true;
    // src/unknown/C4/C4A7B0.asm:79 LDY @LOCAL03
    case 0xC4A8A9: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8AB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8B0: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:80 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8B3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:81 LDY #oval_window::width_velocity
    case 0xC4A8B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/unknown/C4/C4A7B0.asm:81 LDY #oval_window::width_velocity
    // Overlapping static entry reached from 0xC4A8B5.
    case 0xC4A8B7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:82 LDA [@VIRTUAL06],Y
    case 0xC4A8B8: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:83 STA LOADED_OVAL_WINDOW_WIDTH_VELOCITY
    case 0xC4A8BA: cpu.execute_instruction<0x8D>(0x00AEDC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:84 LDY @LOCAL03
    case 0xC4A8BD: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8BF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8C4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:85 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:86 LDY #oval_window::height_velocity
    case 0xC4A8C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4A7B0.asm:86 LDY #oval_window::height_velocity
    // Overlapping static entry reached from 0xC4A8C9.
    case 0xC4A8CB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:87 LDA [@VIRTUAL06],Y
    case 0xC4A8CC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:88 STA LOADED_OVAL_WINDOW_HEIGHT_VELOCITY
    case 0xC4A8CE: cpu.execute_instruction<0x8D>(0x00AEDE, 3); return true;
    // src/unknown/C4/C4A7B0.asm:89 LDY @LOCAL03
    case 0xC4A8D1: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8D3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8D6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8D8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:90 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8DB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:91 LDY #oval_window::width_acceleration
    case 0xC4A8DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/unknown/C4/C4A7B0.asm:91 LDY #oval_window::width_acceleration
    // Overlapping static entry reached from 0xC4A8DD.
    case 0xC4A8DF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:92 LDA [@VIRTUAL06],Y
    case 0xC4A8E0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:93 STA LOADED_OVAL_WINDOW_WIDTH_ACCELERATION
    case 0xC4A8E2: cpu.execute_instruction<0x8D>(0x00AEE0, 3); return true;
    // src/unknown/C4/C4A7B0.asm:94 LDY @LOCAL03
    case 0xC4A8E5: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8E7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8EC: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:95 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:96 LDY #oval_window::height_acceleration
    case 0xC4A8F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000014, 2); else cpu.execute_instruction<0xA0>(0x000014, 3); return true;
    // src/unknown/C4/C4A7B0.asm:96 LDY #oval_window::height_acceleration
    // Overlapping static entry reached from 0xC4A8F1.
    case 0xC4A8F3: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4A7B0.asm:97 LDA [@VIRTUAL06],Y
    case 0xC4A8F4: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:98 STA LOADED_OVAL_WINDOW_HEIGHT_ACCELERATION
    case 0xC4A8F6: cpu.execute_instruction<0x8D>(0x00AEE2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:99 LDY @LOCAL03
    case 0xC4A8F9: cpu.execute_instruction<0xA4>(0x000015, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8FB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A8FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A900: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:100 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC4A903: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:101 LDA #.SIZEOF(oval_window)
    case 0xC4A905: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000016, 2); else cpu.execute_instruction<0xA9>(0x000016, 3); return true;
    // src/unknown/C4/C4A7B0.asm:101 LDA #.SIZEOF(oval_window)
    // Overlapping static entry reached from 0xC4A905.
    case 0xC4A907: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:102 CLC
    case 0xC4A908: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:103 ADC @VIRTUAL06
    case 0xC4A909: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:104 STA @VIRTUAL06
    case 0xC4A90B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:105 STA __BSS_START__,Y
    case 0xC4A90D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:106 LDA @VIRTUAL06+2
    case 0xC4A910: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:107 STA __BSS_START__+2,Y
    case 0xC4A912: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:109 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_X)
    case 0xC4A915: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D0, 2); else cpu.execute_instruction<0xA2>(0x00AED0, 3); return true;
    // src/unknown/C4/C4A7B0.asm:109 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_X)
    // Overlapping static entry reached from 0xC4A915.
    case 0xC4A917: cpu.execute_instruction<0xAE>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:110 LDA __BSS_START__,X
    case 0xC4A918: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:110 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A917.
    case 0xC4A91A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:111 CLC
    case 0xC4A91B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:112 ADC LOADED_OVAL_WINDOW_CENTRE_X_ADD
    case 0xC4A91C: cpu.execute_instruction<0x6D>(0x00AED8, 3); return true;
    // src/unknown/C4/C4A7B0.asm:113 STA __BSS_START__,X
    case 0xC4A91F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:114 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_Y)
    case 0xC4A922: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D2, 2); else cpu.execute_instruction<0xA2>(0x00AED2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:114 LDX #.LOWORD(LOADED_OVAL_WINDOW_CENTRE_Y)
    // Overlapping static entry reached from 0xC4A922.
    case 0xC4A924: cpu.execute_instruction<0xAE>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:115 LDA __BSS_START__,X
    case 0xC4A925: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:115 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A924.
    case 0xC4A927: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:116 CLC
    case 0xC4A928: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:117 ADC LOADED_OVAL_WINDOW_CENTRE_Y_ADD
    case 0xC4A929: cpu.execute_instruction<0x6D>(0x00AEDA, 3); return true;
    // src/unknown/C4/C4A7B0.asm:118 STA __BSS_START__,X
    case 0xC4A92C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:119 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH_VELOCITY)
    case 0xC4A92F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000DC, 2); else cpu.execute_instruction<0xA2>(0x00AEDC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:119 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH_VELOCITY)
    // Overlapping static entry reached from 0xC4A92F.
    case 0xC4A931: cpu.execute_instruction<0xAE>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:120 LDA __BSS_START__,X
    case 0xC4A932: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:120 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A931.
    case 0xC4A934: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:121 CLC
    case 0xC4A935: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:122 ADC LOADED_OVAL_WINDOW_WIDTH_ACCELERATION
    case 0xC4A936: cpu.execute_instruction<0x6D>(0x00AEE0, 3); return true;
    // src/unknown/C4/C4A7B0.asm:123 STA __BSS_START__,X
    case 0xC4A939: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:124 LDY #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT_VELOCITY)
    case 0xC4A93C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000DE, 2); else cpu.execute_instruction<0xA0>(0x00AEDE, 3); return true;
    // src/unknown/C4/C4A7B0.asm:124 LDY #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT_VELOCITY)
    // Overlapping static entry reached from 0xC4A93C.
    case 0xC4A93E: cpu.execute_instruction<0xAE>(0x0000B9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:125 LDA __BSS_START__,Y
    case 0xC4A93F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:125 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4A93E.
    case 0xC4A941: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:126 CLC
    case 0xC4A942: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:127 ADC LOADED_OVAL_WINDOW_HEIGHT_ACCELERATION
    case 0xC4A943: cpu.execute_instruction<0x6D>(0x00AEE2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:128 STA __BSS_START__,Y
    case 0xC4A946: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:129 LDA __BSS_START__,X
    case 0xC4A949: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:130 STA @LOCAL03
    case 0xC4A94C: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:131 STA @VIRTUAL02
    case 0xC4A94E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:132 LDA #0
    case 0xC4A950: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:132 LDA #0
    // Overlapping static entry reached from 0xC4A950.
    case 0xC4A952: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:133 CLC
    case 0xC4A953: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:134 SBC @VIRTUAL02
    case 0xC4A954: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC4A956: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC4A958: cpu.execute_instruction<0x10>(0x00001E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC4A95A: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:135 BRANCHLTEQS @UNKNOWN12
    case 0xC4A95C: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:136 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    case 0xC4A95E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D4, 2); else cpu.execute_instruction<0xA2>(0x00AED4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:136 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    // Overlapping static entry reached from 0xC4A95E.
    case 0xC4A960: cpu.execute_instruction<0xAE>(0x0015A5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:137 LDA @LOCAL03
    case 0xC4A961: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:138 EOR #$FFFF
    case 0xC4A963: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:138 EOR #$FFFF
    // Overlapping static entry reached from 0xC4A963.
    case 0xC4A965: cpu.execute_instruction<0xFF>(0x02851A, 4); return true;
    // src/unknown/C4/C4A7B0.asm:139 INC
    case 0xC4A966: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:140 STA @VIRTUAL02
    case 0xC4A967: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:141 LDA __BSS_START__,X
    case 0xC4A969: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:142 CMP @VIRTUAL02
    case 0xC4A96C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:143 BCS @UNKNOWN12
    case 0xC4A96E: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:144 LDA #0
    case 0xC4A970: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:144 LDA #0
    // Overlapping static entry reached from 0xC4A970.
    case 0xC4A972: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:145 STA __BSS_START__,X
    case 0xC4A973: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:146 BRA @UNKNOWN13
    case 0xC4A976: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:148 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    case 0xC4A978: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D4, 2); else cpu.execute_instruction<0xA2>(0x00AED4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:148 LDX #.LOWORD(LOADED_OVAL_WINDOW_WIDTH)
    // Overlapping static entry reached from 0xC4A978.
    case 0xC4A97A: cpu.execute_instruction<0xAE>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:149 LDA __BSS_START__,X
    case 0xC4A97B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:149 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A97A.
    case 0xC4A97D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:150 CLC
    case 0xC4A97E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:151 ADC LOADED_OVAL_WINDOW_WIDTH_VELOCITY
    case 0xC4A97F: cpu.execute_instruction<0x6D>(0x00AEDC, 3); return true;
    // src/unknown/C4/C4A7B0.asm:152 STA __BSS_START__,X
    case 0xC4A982: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:154 LDA LOADED_OVAL_WINDOW_HEIGHT_VELOCITY
    case 0xC4A985: cpu.execute_instruction<0xAD>(0x00AEDE, 3); return true;
    // src/unknown/C4/C4A7B0.asm:155 STA @LOCAL03
    case 0xC4A988: cpu.execute_instruction<0x85>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:156 STA @VIRTUAL02
    case 0xC4A98A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:157 LDA #0
    case 0xC4A98C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:157 LDA #0
    // Overlapping static entry reached from 0xC4A98C.
    case 0xC4A98E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:158 CLC
    case 0xC4A98F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:159 SBC @VIRTUAL02
    case 0xC4A990: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC4A992: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC4A994: cpu.execute_instruction<0x10>(0x00001E, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC4A996: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:160 BRANCHLTEQS @UNKNOWN16
    case 0xC4A998: cpu.execute_instruction<0x30>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:161 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    case 0xC4A99A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D6, 2); else cpu.execute_instruction<0xA2>(0x00AED6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:161 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    // Overlapping static entry reached from 0xC4A99A.
    case 0xC4A99C: cpu.execute_instruction<0xAE>(0x0015A5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:162 LDA @LOCAL03
    case 0xC4A99D: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:163 EOR #$FFFF
    case 0xC4A99F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:163 EOR #$FFFF
    // Overlapping static entry reached from 0xC4A99F.
    case 0xC4A9A1: cpu.execute_instruction<0xFF>(0x02851A, 4); return true;
    // src/unknown/C4/C4A7B0.asm:164 INC
    case 0xC4A9A2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:165 STA @VIRTUAL02
    case 0xC4A9A3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:166 LDA __BSS_START__,X
    case 0xC4A9A5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:167 CMP @VIRTUAL02
    case 0xC4A9A8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:168 BCS @UNKNOWN16
    case 0xC4A9AA: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:169 LDA #0
    case 0xC4A9AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:169 LDA #0
    // Overlapping static entry reached from 0xC4A9AC.
    case 0xC4A9AE: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:170 STA __BSS_START__,X
    case 0xC4A9AF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:171 BRA @UNKNOWN17
    case 0xC4A9B2: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:173 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    case 0xC4A9B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000D6, 2); else cpu.execute_instruction<0xA2>(0x00AED6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:173 LDX #.LOWORD(LOADED_OVAL_WINDOW_HEIGHT)
    // Overlapping static entry reached from 0xC4A9B4.
    case 0xC4A9B6: cpu.execute_instruction<0xAE>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:174 LDA __BSS_START__,X
    case 0xC4A9B7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:174 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4A9B6.
    case 0xC4A9B9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4A7B0.asm:175 CLC
    case 0xC4A9BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:176 ADC LOADED_OVAL_WINDOW_HEIGHT_VELOCITY
    case 0xC4A9BB: cpu.execute_instruction<0x6D>(0x00AEDE, 3); return true;
    // src/unknown/C4/C4A7B0.asm:177 STA __BSS_START__,X
    case 0xC4A9BE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:179 LDA LOADED_OVAL_WINDOW_WIDTH
    case 0xC4A9C1: cpu.execute_instruction<0xAD>(0x00AED4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:180 BNE @UNKNOWN18
    case 0xC4A9C4: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C4/C4A7B0.asm:181 LDA LOADED_OVAL_WINDOW_HEIGHT
    case 0xC4A9C6: cpu.execute_instruction<0xAD>(0x00AED6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:182 BNE @UNKNOWN18
    case 0xC4A9C9: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/unknown/C4/C4A7B0.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC4A9CB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:184 STZ FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4A9CD: cpu.execute_instruction<0x9C>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:185 REP #PROC_FLAGS::ACCUM8
    case 0xC4A9D0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC4A9D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC4A9D2.
    case 0xC4A9D4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC4A9D5: cpu.execute_instruction<0x8D>(0x00AECC, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC4A9D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    // Overlapping static entry reached from 0xC4A9D8.
    case 0xC4A9DA: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:186 MOVE_INT_CONSTANT NULL, LOADED_OVAL_WINDOW
    case 0xC4A9DB: cpu.execute_instruction<0x8D>(0x00AECE, 3); return true;
    // src/unknown/C4/C4A7B0.asm:187 JMP @UNKNOWN34
    case 0xC4A9DE: cpu.execute_instruction<0x4C>(0x00AC53, 3); return true;
    // src/unknown/C4/C4A7B0.asm:189 LDA LOADED_OVAL_WINDOW_HEIGHT
    case 0xC4A9E1: cpu.execute_instruction<0xAD>(0x00AED6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:190 XBA
    case 0xC4A9E4: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:191 AND #$00FF
    case 0xC4A9E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:191 AND #$00FF
    // Overlapping static entry reached from 0xC4A9E5.
    case 0xC4A9E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4A7B0.asm:192 STA @LOCAL00
    case 0xC4A9E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:193 LDA LOADED_OVAL_WINDOW_WIDTH
    case 0xC4A9EA: cpu.execute_instruction<0xAD>(0x00AED4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:194 XBA
    case 0xC4A9ED: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:195 AND #$00FF
    case 0xC4A9EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:195 AND #$00FF
    // Overlapping static entry reached from 0xC4A9EE.
    case 0xC4A9F0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4A7B0.asm:196 TAY
    case 0xC4A9F1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:197 LDX LOADED_OVAL_WINDOW_CENTRE_Y
    case 0xC4A9F2: cpu.execute_instruction<0xAE>(0x00AED2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:198 LDA LOADED_OVAL_WINDOW_CENTRE_X
    case 0xC4A9F5: cpu.execute_instruction<0xAD>(0x00AED0, 3); return true;
    // src/unknown/C4/C4A7B0.asm:199 JSL UNKNOWN_C0B149
    case 0xC4A9F8: cpu.execute_instruction<0x22>(0xC0B149, 4); return true;
    // src/unknown/C4/C4A7B0.asm:200 LDX #65
    case 0xC4A9FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000041, 2); else cpu.execute_instruction<0xA2>(0x000041, 3); return true;
    // src/unknown/C4/C4A7B0.asm:200 LDX #65
    // Overlapping static entry reached from 0xC4A9FC.
    case 0xC4A9FE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4A7B0.asm:201 LDA #3
    case 0xC4A9FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4A7B0.asm:201 LDA #3
    // Overlapping static entry reached from 0xC4A9FF.
    case 0xC4AA01: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A7B0.asm:202 JSL UNKNOWN_C0B0EF
    case 0xC4AA02: cpu.execute_instruction<0x22>(0xC0B0EF, 4); return true;
    // src/unknown/C4/C4A7B0.asm:203 LDA SWIRL_INVERT_ENABLED
    case 0xC4AA06: cpu.execute_instruction<0xAD>(0x00AEC6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:204 AND #$00FF
    case 0xC4AA09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:204 AND #$00FF
    // Overlapping static entry reached from 0xC4AA09.
    case 0xC4AA0B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4A7B0.asm:205 TAX
    case 0xC4AA0C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:206 LDA SWIRL_MASK_SETTINGS
    case 0xC4AA0D: cpu.execute_instruction<0xAD>(0x00AEC8, 3); return true;
    // src/unknown/C4/C4A7B0.asm:207 AND #$00FF
    case 0xC4AA10: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:207 AND #$00FF
    // Overlapping static entry reached from 0xC4AA10.
    case 0xC4AA12: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A7B0.asm:208 JSL SET_WINDOW_MASK
    case 0xC4AA13: cpu.execute_instruction<0x22>(0xC0B047, 4); return true;
    // src/unknown/C4/C4A7B0.asm:209 JMP @UNKNOWN34
    case 0xC4AA17: cpu.execute_instruction<0x4C>(0x00AC53, 3); return true;
    // src/unknown/C4/C4A7B0.asm:211 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    case 0xC4AA1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C2, 2); else cpu.execute_instruction<0xA2>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:211 LDX #.LOWORD(FRAMES_UNTIL_NEXT_SWIRL_UPDATE)
    // Overlapping static entry reached from 0xC4AA1A.
    case 0xC4AA1C: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:212 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AA1D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:213 LDA __BSS_START__,X
    case 0xC4AA1F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:214 DEC
    case 0xC4AA22: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:215 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4AA23: cpu.execute_instruction<0x8D>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:216 REP #PROC_FLAGS::ACCUM8
    case 0xC4AA26: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:217 AND #$00FF
    case 0xC4AA28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:217 AND #$00FF
    // Overlapping static entry reached from 0xC4AA28.
    case 0xC4AA2A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:218 BNEL @UNKNOWN34
    case 0xC4AA2B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:218 BNEL @UNKNOWN34
    case 0xC4AA2D: cpu.execute_instruction<0x4C>(0x00AC53, 3); return true;
    // src/unknown/C4/C4A7B0.asm:220 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    case 0xC4AA30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C4, 2); else cpu.execute_instruction<0xA2>(0x00AEC4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:220 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC4AA30.
    case 0xC4AA32: cpu.execute_instruction<0xAE>(0x001586, 3); return true;
    // src/unknown/C4/C4A7B0.asm:221 STX @LOCAL03
    case 0xC4AA33: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:222 REP #PROC_FLAGS::ACCUM8
    case 0xC4AA35: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:223 LDA __BSS_START__,X
    case 0xC4AA37: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:224 AND #$00FF
    case 0xC4AA3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:224 AND #$00FF
    // Overlapping static entry reached from 0xC4AA3A.
    case 0xC4AA3C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:225 BEQL @UNKNOWN24
    case 0xC4AA3D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:225 BEQL @UNKNOWN24
    case 0xC4AA3F: cpu.execute_instruction<0x4C>(0x00AB20, 3); return true;
    // src/unknown/C4/C4A7B0.asm:226 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AA42: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:227 LDA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC4AA44: cpu.execute_instruction<0xAD>(0x00AEC3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:228 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4AA47: cpu.execute_instruction<0x8D>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:229 LDY #.LOWORD(SWIRL_HDMA_CHANNEL_OFFSET)
    case 0xC4AA4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C9, 2); else cpu.execute_instruction<0xA0>(0x00AEC9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:229 LDY #.LOWORD(SWIRL_HDMA_CHANNEL_OFFSET)
    // Overlapping static entry reached from 0xC4AA4A.
    case 0xC4AA4C: cpu.execute_instruction<0xAE>(0x001384, 3); return true;
    // src/unknown/C4/C4A7B0.asm:230 STY @LOCAL02
    case 0xC4AA4D: cpu.execute_instruction<0x84>(0x000013, 2); return true;
    // src/unknown/C4/C4A7B0.asm:231 REP #PROC_FLAGS::ACCUM8
    case 0xC4AA4F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:232 LDA __BSS_START__,Y
    case 0xC4AA51: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:233 AND #$00FF
    case 0xC4AA54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:233 AND #$00FF
    // Overlapping static entry reached from 0xC4AA54.
    case 0xC4AA56: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:234 INC
    case 0xC4AA57: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:235 INC
    case 0xC4AA58: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:236 INC
    case 0xC4AA59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:237 JSL UNKNOWN_C0AE34
    case 0xC4AA5A: cpu.execute_instruction<0x22>(0xC0AE34, 4); return true;
    // src/unknown/C4/C4A7B0.asm:238 LDY @LOCAL02
    case 0xC4AA5E: cpu.execute_instruction<0xA4>(0x000013, 2); return true;
    // src/unknown/C4/C4A7B0.asm:239 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AA60: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:240 LDA __BSS_START__,Y
    case 0xC4AA62: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:241 INC
    case 0xC4AA65: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:242 STA __BSS_START__,Y
    case 0xC4AA66: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:243 AND #$0001
    case 0xC4AA69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x009901, 3); return true;
    // src/unknown/C4/C4A7B0.asm:244 STA __BSS_START__,Y
    case 0xC4AA6B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:244 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4AA69.
    case 0xC4AA6C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4AA6E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:246 LDA SWIRL_REVERSED
    case 0xC4AA70: cpu.execute_instruction<0xAD>(0x00AEC7, 3); return true;
    // src/unknown/C4/C4A7B0.asm:247 AND #$00FF
    case 0xC4AA73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:247 AND #$00FF
    // Overlapping static entry reached from 0xC4AA73.
    case 0xC4AA75: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:248 BNE @UNKNOWN22
    case 0xC4AA76: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/unknown/C4/C4A7B0.asm:249 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC4AA78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C5, 2); else cpu.execute_instruction<0xA2>(0x00AEC5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:249 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC4AA78.
    case 0xC4AA7A: cpu.execute_instruction<0xAE>(0x001586, 3); return true;
    // src/unknown/C4/C4A7B0.asm:250 STX @LOCAL03
    case 0xC4AA7B: cpu.execute_instruction<0x86>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:251 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AA7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:252 LDA __BSS_START__,X
    case 0xC4AA7F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:253 STA @LOCAL01
    case 0xC4AA82: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:254 REP #PROC_FLAGS::ACCUM8
    case 0xC4AA84: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AA86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AA86.
    case 0xC4AA88: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AA89: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AA8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AA8B.
    case 0xC4AA8D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:255 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AA8E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:256 LDA @LOCAL01
    case 0xC4AA90: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:257 AND #$00FF
    case 0xC4AA92: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:257 AND #$00FF
    // Overlapping static entry reached from 0xC4AA92.
    case 0xC4AA94: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:258 ASL
    case 0xC4AA95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:259 TAX
    case 0xC4AA96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:260 LDA f:SWIRL_POINTER_TABLE,X
    case 0xC4AA97: cpu.execute_instruction<0xBF>(0xCEDC45, 4); return true;
    // src/unknown/C4/C4A7B0.asm:261 CLC
    case 0xC4AA9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:262 ADC @VIRTUAL06
    case 0xC4AA9C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:263 STA @VIRTUAL06
    case 0xC4AA9E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:264 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AAA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:265 LDA @LOCAL01
    case 0xC4AAA2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:266 INC
    case 0xC4AAA4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:267 LDX @LOCAL03
    case 0xC4AAA5: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:268 STA __BSS_START__,X
    case 0xC4AAA7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:269 REP #PROC_FLAGS::ACCUM8
    case 0xC4AAAA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AAAC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AAAE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AAB0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:270 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4AAB2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A7B0.asm:271 LDA __BSS_START__,Y
    case 0xC4AAB4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:272 AND #$00FF
    case 0xC4AAB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:272 AND #$00FF
    // Overlapping static entry reached from 0xC4AAB7.
    case 0xC4AAB9: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:273 INC
    case 0xC4AABA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:274 INC
    case 0xC4AABB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:275 INC
    case 0xC4AABC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:276 JSL UNKNOWN_C0B0B8
    case 0xC4AABD: cpu.execute_instruction<0x22>(0xC0B0B8, 4); return true;
    // src/unknown/C4/C4A7B0.asm:277 BRA @UNKNOWN23
    case 0xC4AAC1: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4A7B0.asm:279 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC4AAC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C5, 2); else cpu.execute_instruction<0xA2>(0x00AEC5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:279 LDX #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC4AAC3.
    case 0xC4AAC5: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:280 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AAC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:281 LDA __BSS_START__,X
    case 0xC4AAC8: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:282 DEC
    case 0xC4AACB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:283 STA @LOCAL01
    case 0xC4AACC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:284 STA __BSS_START__,X
    case 0xC4AACE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC4AAD1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AAD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AAD3.
    case 0xC4AAD5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AAD6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AAD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AAD8.
    case 0xC4AADA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:286 LOADPTR SWIRL_DATA & $FF0000, @VIRTUAL06
    case 0xC4AADB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:287 LDA @LOCAL01
    case 0xC4AADD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:288 AND #$00FF
    case 0xC4AADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:288 AND #$00FF
    // Overlapping static entry reached from 0xC4AADF.
    case 0xC4AAE1: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:289 ASL
    case 0xC4AAE2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:290 TAX
    case 0xC4AAE3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:291 LDA f:SWIRL_POINTER_TABLE,X
    case 0xC4AAE4: cpu.execute_instruction<0xBF>(0xCEDC45, 4); return true;
    // src/unknown/C4/C4A7B0.asm:292 CLC
    case 0xC4AAE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:293 ADC @VIRTUAL06
    case 0xC4AAE9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:294 STA @VIRTUAL06
    case 0xC4AAEB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:295 STA @LOCAL00
    case 0xC4AAED: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:296 LDA @VIRTUAL06+2
    case 0xC4AAEF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:297 STA @LOCAL00+2
    case 0xC4AAF1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4A7B0.asm:298 LDA __BSS_START__,Y
    case 0xC4AAF3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:299 AND #$00FF
    case 0xC4AAF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC4AAF6.
    case 0xC4AAF8: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:300 INC
    case 0xC4AAF9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:301 INC
    case 0xC4AAFA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:302 INC
    case 0xC4AAFB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:303 JSL UNKNOWN_C0B0B8
    case 0xC4AAFC: cpu.execute_instruction<0x22>(0xC0B0B8, 4); return true;
    // src/unknown/C4/C4A7B0.asm:305 LDA SWIRL_INVERT_ENABLED
    case 0xC4AB00: cpu.execute_instruction<0xAD>(0x00AEC6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:306 AND #$00FF
    case 0xC4AB03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:306 AND #$00FF
    // Overlapping static entry reached from 0xC4AB03.
    case 0xC4AB05: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4A7B0.asm:307 TAX
    case 0xC4AB06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:308 LDA SWIRL_MASK_SETTINGS
    case 0xC4AB07: cpu.execute_instruction<0xAD>(0x00AEC8, 3); return true;
    // src/unknown/C4/C4A7B0.asm:309 AND #$00FF
    case 0xC4AB0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:309 AND #$00FF
    // Overlapping static entry reached from 0xC4AB0A.
    case 0xC4AB0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4A7B0.asm:310 JSL SET_WINDOW_MASK
    case 0xC4AB0D: cpu.execute_instruction<0x22>(0xC0B047, 4); return true;
    // src/unknown/C4/C4A7B0.asm:311 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    case 0xC4AB11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C4, 2); else cpu.execute_instruction<0xA2>(0x00AEC4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:311 LDX #.LOWORD(SWIRL_FRAMES_LEFT)
    // Overlapping static entry reached from 0xC4AB11.
    case 0xC4AB13: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:312 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AB14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:313 LDA __BSS_START__,X
    case 0xC4AB16: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:314 DEC
    case 0xC4AB19: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:315 STA __BSS_START__,X
    case 0xC4AB1A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:316 JMP @UNKNOWN34
    case 0xC4AB1D: cpu.execute_instruction<0x4C>(0x00AC53, 3); return true;
    // src/unknown/C4/C4A7B0.asm:319 LDA #.LOWORD(SWIRL_NEXT_SWIRL)
    case 0xC4AB20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E4, 2); else cpu.execute_instruction<0xA9>(0x00AEE4, 3); return true;
    // src/unknown/C4/C4A7B0.asm:319 LDA #.LOWORD(SWIRL_NEXT_SWIRL)
    // Overlapping static entry reached from 0xC4AB20.
    case 0xC4AB22: cpu.execute_instruction<0xAE>(0x000285, 3); return true;
    // src/unknown/C4/C4A7B0.asm:320 STA @VIRTUAL02
    case 0xC4AB23: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:321 LDX @VIRTUAL02
    case 0xC4AB25: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:322 LDA __BSS_START__,X
    case 0xC4AB27: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:323 AND #$00FF
    case 0xC4AB2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC4AB2A.
    case 0xC4AB2C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:324 BEQL @UNKNOWN32
    case 0xC4AB2D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:324 BEQL @UNKNOWN32
    case 0xC4AB2F: cpu.execute_instruction<0x4C>(0x00AC07, 3); return true;
    // src/unknown/C4/C4A7B0.asm:325 LDY #.LOWORD(SWIRL_REPEATS_UNTIL_SPEED_UP)
    case 0xC4AB32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E6, 2); else cpu.execute_instruction<0xA0>(0x00AEE6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:325 LDY #.LOWORD(SWIRL_REPEATS_UNTIL_SPEED_UP)
    // Overlapping static entry reached from 0xC4AB32.
    case 0xC4AB34: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:326 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AB35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:327 LDA __BSS_START__,Y
    case 0xC4AB37: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:328 DEC
    case 0xC4AB3A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:329 STA __BSS_START__,Y
    case 0xC4AB3B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:330 REP #PROC_FLAGS::ACCUM8
    case 0xC4AB3E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:331 AND #$00FF
    case 0xC4AB40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:331 AND #$00FF
    // Overlapping static entry reached from 0xC4AB40.
    case 0xC4AB42: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:332 BEQ @UNKNOWN27
    case 0xC4AB43: cpu.execute_instruction<0xF0>(0x00006B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4AB45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x00DD41, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AB45.
    case 0xC4AB47: cpu.execute_instruction<0xDD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4AB48: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4AB4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4AB4A.
    case 0xC4AB4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:333 LOADPTR SWIRL_PRIMARY_TABLE, @VIRTUAL06
    case 0xC4AB4D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4A7B0.asm:334 LDX @VIRTUAL02
    case 0xC4AB4F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:335 LDA __BSS_START__,X
    case 0xC4AB51: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:336 AND #$00FF
    case 0xC4AB54: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:336 AND #$00FF
    // Overlapping static entry reached from 0xC4AB54.
    case 0xC4AB56: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:337 ASL
    case 0xC4AB57: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:338 ASL
    case 0xC4AB58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:339 INC
    case 0xC4AB59: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:340 INC
    case 0xC4AB5A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB5B: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB5D: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB5F: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4A7B0.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4AB61: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:342 CLC
    case 0xC4AB63: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:343 ADC @VIRTUAL0A
    case 0xC4AB64: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:344 STA @VIRTUAL0A
    case 0xC4AB66: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:345 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AB68: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:346 LDA [@VIRTUAL0A]
    case 0xC4AB6A: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:347 LDX @LOCAL03
    case 0xC4AB6C: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:348 STA __BSS_START__,X
    case 0xC4AB6E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:349 LDY #.LOWORD(SWIRL_HDMA_TABLE_ID)
    case 0xC4AB71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000C5, 2); else cpu.execute_instruction<0xA0>(0x00AEC5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:349 LDY #.LOWORD(SWIRL_HDMA_TABLE_ID)
    // Overlapping static entry reached from 0xC4AB71.
    case 0xC4AB73: cpu.execute_instruction<0xAE>(0x0002A6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:350 LDX @VIRTUAL02
    case 0xC4AB74: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4A7B0.asm:351 REP #PROC_FLAGS::ACCUM8
    case 0xC4AB76: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:352 LDA __BSS_START__,X
    case 0xC4AB78: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:353 AND #$00FF
    case 0xC4AB7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:353 AND #$00FF
    // Overlapping static entry reached from 0xC4AB7B.
    case 0xC4AB7D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:354 ASL
    case 0xC4AB7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:355 ASL
    case 0xC4AB7F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:356 INC
    case 0xC4AB80: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:357 CLC
    case 0xC4AB81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:358 ADC @VIRTUAL06
    case 0xC4AB82: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:359 STA @VIRTUAL06
    case 0xC4AB84: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:360 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AB86: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:361 LDA [@VIRTUAL06]
    case 0xC4AB88: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4A7B0.asm:362 STA @LOCAL01
    case 0xC4AB8A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:363 STA __BSS_START__,Y
    case 0xC4AB8C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:364 REP #PROC_FLAGS::ACCUM8
    case 0xC4AB8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:365 LDA SWIRL_REVERSED
    case 0xC4AB91: cpu.execute_instruction<0xAD>(0x00AEC7, 3); return true;
    // src/unknown/C4/C4A7B0.asm:366 AND #$00FF
    case 0xC4AB94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:366 AND #$00FF
    // Overlapping static entry reached from 0xC4AB94.
    case 0xC4AB96: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:367 BEQL @UNKNOWN20
    case 0xC4AB97: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:367 BEQL @UNKNOWN20
    case 0xC4AB99: cpu.execute_instruction<0x4C>(0x00AA30, 3); return true;
    // src/unknown/C4/C4A7B0.asm:368 LDX @LOCAL03
    case 0xC4AB9C: cpu.execute_instruction<0xA6>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:369 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AB9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:370 LDA __BSS_START__,X
    case 0xC4ABA0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:371 STA @VIRTUAL00
    case 0xC4ABA3: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:372 LDA @LOCAL01
    case 0xC4ABA5: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4A7B0.asm:373 CLC
    case 0xC4ABA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:374 ADC @VIRTUAL00
    case 0xC4ABA8: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:375 STA __BSS_START__,Y
    case 0xC4ABAA: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:376 JMP @UNKNOWN20
    case 0xC4ABAD: cpu.execute_instruction<0x4C>(0x00AA30, 3); return true;
    // src/unknown/C4/C4A7B0.asm:378 LDX #.LOWORD(SWIRL_REPEAT_SPEED)
    case 0xC4ABB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E5, 2); else cpu.execute_instruction<0xA2>(0x00AEE5, 3); return true;
    // src/unknown/C4/C4A7B0.asm:378 LDX #.LOWORD(SWIRL_REPEAT_SPEED)
    // Overlapping static entry reached from 0xC4ABB0.
    case 0xC4ABB2: cpu.execute_instruction<0xAE>(0x0020E2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:379 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ABB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:380 LDA __BSS_START__,X
    case 0xC4ABB5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:381 INC
    case 0xC4ABB8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:382 STA __BSS_START__,X
    case 0xC4ABB9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:383 REP #PROC_FLAGS::ACCUM8
    case 0xC4ABBC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:384 AND #$00FF
    case 0xC4ABBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:384 AND #$00FF
    // Overlapping static entry reached from 0xC4ABBE.
    case 0xC4ABC0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4A7B0.asm:385 CMP #1
    case 0xC4ABC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4A7B0.asm:385 CMP #1
    // Overlapping static entry reached from 0xC4ABC1.
    case 0xC4ABC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:386 BEQ @UNKNOWN28
    case 0xC4ABC4: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:387 CMP #2
    case 0xC4ABC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4A7B0.asm:387 CMP #2
    // Overlapping static entry reached from 0xC4ABC6.
    case 0xC4ABC8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:388 BEQ @UNKNOWN29
    case 0xC4ABC9: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C4A7B0.asm:389 CMP #3
    case 0xC4ABCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4A7B0.asm:389 CMP #3
    // Overlapping static entry reached from 0xC4ABCB.
    case 0xC4ABCD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:390 BEQ @UNKNOWN30
    case 0xC4ABCE: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C4/C4A7B0.asm:391 BRA @UNKNOWN31
    case 0xC4ABD0: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C4A7B0.asm:393 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ABD2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:394 LDA #4
    case 0xC4ABD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x009904, 3); return true;
    // src/unknown/C4/C4A7B0.asm:395 STA __BSS_START__,Y
    case 0xC4ABD6: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:395 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4ABD4.
    case 0xC4ABD7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:396 LDA #3
    case 0xC4ABD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/unknown/C4/C4A7B0.asm:397 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC4ABDB: cpu.execute_instruction<0x8D>(0x00AEC3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:397 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC4ABD9.
    case 0xC4ABDC: cpu.execute_instruction<0xC3>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A7B0.asm:398 BRA @UNKNOWN31
    case 0xC4ABDE: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:400 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ABE0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:401 LDA #6
    case 0xC4ABE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x009906, 3); return true;
    // src/unknown/C4/C4A7B0.asm:402 STA __BSS_START__,Y
    case 0xC4ABE4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:402 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4ABE2.
    case 0xC4ABE5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:403 LDA #2
    case 0xC4ABE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/unknown/C4/C4A7B0.asm:404 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC4ABE9: cpu.execute_instruction<0x8D>(0x00AEC3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:404 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC4ABE7.
    case 0xC4ABEA: cpu.execute_instruction<0xC3>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A7B0.asm:405 BRA @UNKNOWN31
    case 0xC4ABEC: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C4/C4A7B0.asm:407 SEP #PROC_FLAGS::ACCUM8
    case 0xC4ABEE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:408 LDA #12
    case 0xC4ABF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00990C, 3); return true;
    // src/unknown/C4/C4A7B0.asm:409 STA __BSS_START__,Y
    case 0xC4ABF2: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:409 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC4ABF0.
    case 0xC4ABF3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4A7B0.asm:410 LDA #1
    case 0xC4ABF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A7B0.asm:411 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    case 0xC4ABF7: cpu.execute_instruction<0x8D>(0x00AEC3, 3); return true;
    // src/unknown/C4/C4A7B0.asm:411 STA FRAMES_UNTIL_NEXT_SWIRL_FRAME
    // Overlapping static entry reached from 0xC4ABF5.
    case 0xC4ABF8: cpu.execute_instruction<0xC3>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A7B0.asm:413 REP #PROC_FLAGS::ACCUM8
    case 0xC4ABFA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:414 LDA SWIRL_REPEATS_UNTIL_SPEED_UP
    case 0xC4ABFC: cpu.execute_instruction<0xAD>(0x00AEE6, 3); return true;
    // src/unknown/C4/C4A7B0.asm:415 AND #$00FF
    case 0xC4ABFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:415 AND #$00FF
    // Overlapping static entry reached from 0xC4ABFF.
    case 0xC4AC01: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4A7B0.asm:416 BNEL @UNKNOWN20
    case 0xC4AC02: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4A7B0.asm:416 BNEL @UNKNOWN20
    case 0xC4AC04: cpu.execute_instruction<0x4C>(0x00AA30, 3); return true;
    // src/unknown/C4/C4A7B0.asm:418 LDX #.LOWORD(SWIRL_LENGTH_PADDING)
    case 0xC4AC07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000CA, 2); else cpu.execute_instruction<0xA2>(0x00AECA, 3); return true;
    // src/unknown/C4/C4A7B0.asm:418 LDX #.LOWORD(SWIRL_LENGTH_PADDING)
    // Overlapping static entry reached from 0xC4AC07.
    case 0xC4AC09: cpu.execute_instruction<0xAE>(0x0000BD, 3); return true;
    // src/unknown/C4/C4A7B0.asm:419 LDA __BSS_START__,X
    case 0xC4AC0A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:419 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC4AC09.
    case 0xC4AC0C: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:420 AND #$00FF
    case 0xC4AC0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:420 AND #$00FF
    // Overlapping static entry reached from 0xC4AC0D.
    case 0xC4AC0F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:421 BEQ @UNKNOWN33
    case 0xC4AC10: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/unknown/C4/C4A7B0.asm:422 SEP #PROC_FLAGS::ACCUM8
    case 0xC4AC12: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4A7B0.asm:423 LDA #1
    case 0xC4AC14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/unknown/C4/C4A7B0.asm:424 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    case 0xC4AC16: cpu.execute_instruction<0x8D>(0x00AEC2, 3); return true;
    // src/unknown/C4/C4A7B0.asm:424 STA FRAMES_UNTIL_NEXT_SWIRL_UPDATE
    // Overlapping static entry reached from 0xC4AC14.
    case 0xC4AC17: cpu.execute_instruction<0xC2>(0x0000AE, 2); return true;
    // src/unknown/C4/C4A7B0.asm:425 LDA __BSS_START__,X
    case 0xC4AC19: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:426 DEC
    case 0xC4AC1C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:427 STA __BSS_START__,X
    case 0xC4AC1D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:428 BRA @UNKNOWN34
    case 0xC4AC20: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/unknown/C4/C4A7B0.asm:431 LDA SWIRL_AUTO_RESTORE
    case 0xC4AC22: cpu.execute_instruction<0xAD>(0x00AECB, 3); return true;
    // src/unknown/C4/C4A7B0.asm:432 AND #$00FF
    case 0xC4AC25: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:432 AND #$00FF
    // Overlapping static entry reached from 0xC4AC25.
    case 0xC4AC27: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4A7B0.asm:433 BEQ @UNKNOWN34
    case 0xC4AC28: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C4/C4A7B0.asm:434 LDA SWIRL_HDMA_CHANNEL_OFFSET
    case 0xC4AC2A: cpu.execute_instruction<0xAD>(0x00AEC9, 3); return true;
    // src/unknown/C4/C4A7B0.asm:435 AND #$00FF
    case 0xC4AC2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4A7B0.asm:435 AND #$00FF
    // Overlapping static entry reached from 0xC4AC2D.
    case 0xC4AC2F: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:436 INC
    case 0xC4AC30: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:437 INC
    case 0xC4AC31: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:438 INC
    case 0xC4AC32: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:439 JSL UNKNOWN_C0AE34
    case 0xC4AC33: cpu.execute_instruction<0x22>(0xC0AE34, 4); return true;
    // src/unknown/C4/C4A7B0.asm:440 LDX #0
    case 0xC4AC37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:440 LDX #0
    // Overlapping static entry reached from 0xC4AC37.
    case 0xC4AC39: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4A7B0.asm:441 TXA
    case 0xC4AC3A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:442 JSL SET_WINDOW_MASK
    case 0xC4AC3B: cpu.execute_instruction<0x22>(0xC0B047, 4); return true;
    // src/unknown/C4/C4A7B0.asm:443 JSL UNKNOWN_C2DE96
    case 0xC4AC3F: cpu.execute_instruction<0x22>(0xC2DE96, 4); return true;
    // src/unknown/C4/C4A7B0.asm:444 LDY #0
    case 0xC4AC43: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4A7B0.asm:444 LDY #0
    // Overlapping static entry reached from 0xC4AC43.
    case 0xC4AC45: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C4/C4A7B0.asm:445 TYX
    case 0xC4AC46: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:446 TYA
    case 0xC4AC47: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4A7B0.asm:447 JSL SET_COLDATA
    case 0xC4AC48: cpu.execute_instruction<0x22>(0xC0B01A, 4); return true;
    // src/unknown/C4/C4A7B0.asm:448 LDA CURRENT_LAYER_CONFIG
    case 0xC4AC4C: cpu.execute_instruction<0xAD>(0x00AD8A, 3); return true;
    // src/unknown/C4/C4A7B0.asm:449 JSL UNKNOWN_C0AFCD
    case 0xC4AC4F: cpu.execute_instruction<0x22>(0xC0AFCD, 4); return true;
    // src/unknown/C4/C4A7B0.asm:451 REP #PROC_FLAGS::ACCUM8
    case 0xC4AC53: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4A7B0.asm:452 END_C_FUNCTION
    case 0xC4AC55: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4A7B0.asm:452 END_C_FUNCTION
    case 0xC4AC56: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B1B8.asm (unresolved).
bool execute_unresolved_c4_c4b1b8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B1B8.asm:4 BEGIN_C_FUNCTION
    case 0xC4B1B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4B1BA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4B1BB: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4B1BC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4B1BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B1BD.
    case 0xC4B1BF: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4B1C0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B1B8.asm:13 END_STACK_VARS
    case 0xC4B1C1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:14 STY @LOCAL02
    case 0xC4B1C2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B1B8.asm:14 STY @LOCAL02
    // Overlapping static entry reached from 0xC4B1BF.
    case 0xC4B1C3: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C4/C4B1B8.asm:15 STA @VIRTUAL04
    case 0xC4B1C4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:15 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4B1C3.
    case 0xC4B1C5: cpu.execute_instruction<0x04>(0x0000C0, 2); return true;
    // src/unknown/C4/C4B1B8.asm:16 CPY #$00FF
    case 0xC4B1C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x0000FF, 3); return true;
    // src/unknown/C4/C4B1B8.asm:16 CPY #$00FF
    // Overlapping static entry reached from 0xC4B1C5.
    case 0xC4B1C7: cpu.execute_instruction<0xFF>(0x05D000, 4); return true;
    // src/unknown/C4/C4B1B8.asm:16 CPY #$00FF
    // Overlapping static entry reached from 0xC4B1C6.
    case 0xC4B1C8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4B1B8.asm:17 BNE @UNKNOWN0
    case 0xC4B1C9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4B1B8.asm:18 LDA @VIRTUAL04
    case 0xC4B1CB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:19 JMP @UNKNOWN1
    case 0xC4B1CD: cpu.execute_instruction<0x4C>(0x00B269, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC4B1D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003F, 2); else cpu.execute_instruction<0xA9>(0x00133F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B1D0.
    case 0xC4B1D2: cpu.execute_instruction<0x13>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC4B1D3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B1D2.
    case 0xC4B1D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC4B1D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4B1D5.
    case 0xC4B1D7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:21 LOADPTR SPRITE_GROUPING_PTR_TABLE, @VIRTUAL0A
    case 0xC4B1D8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4B1B8.asm:22 TXA
    case 0xC4B1DA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:23 ASL
    case 0xC4B1DB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:24 ASL
    case 0xC4B1DC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:25 CLC
    case 0xC4B1DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:26 ADC @VIRTUAL0A
    case 0xC4B1DE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4B1B8.asm:27 STA @VIRTUAL0A
    case 0xC4B1E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4B1E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B1E2.
    case 0xC4B1E4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4B1E5: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4B1E7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4B1E8: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4B1EA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:28 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4B1EC: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4B1B8.asm:29 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B1EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:30 LDY #sprite_grouping::width
    case 0xC4B1F0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4B1B8.asm:30 LDY #sprite_grouping::width
    // Overlapping static entry reached from 0xC4B1F0.
    case 0xC4B1F2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4B1B8.asm:31 LDA [@VIRTUAL06],Y
    case 0xC4B1F3: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:32 REP #PROC_FLAGS::ACCUM8
    case 0xC4B1F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:33 AND #$00FF
    case 0xC4B1F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4B1B8.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC4B1F7.
    case 0xC4B1F9: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4B1B8.asm:34 ASL
    case 0xC4B1FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:35 STA @VIRTUAL02
    case 0xC4B1FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B1FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:37 LDY #sprite_grouping::spritebank
    case 0xC4B1FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4B1B8.asm:37 LDY #sprite_grouping::spritebank
    // Overlapping static entry reached from 0xC4B1FF.
    case 0xC4B201: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4B1B8.asm:38 LDA [@VIRTUAL06],Y
    case 0xC4B202: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC4B204: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:40 AND #$00FF
    case 0xC4B206: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4B1B8.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC4B206.
    case 0xC4B208: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B1B8.asm:41 STA @LOCAL01+2
    case 0xC4B209: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B1B8.asm:42 LDY @LOCAL02
    case 0xC4B20B: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B1B8.asm:43 TYA
    case 0xC4B20D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:44 ASL
    case 0xC4B20E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:45 CLC
    case 0xC4B20F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:46 ADC #sprite_grouping::spritepointerarray
    case 0xC4B210: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/unknown/C4/C4B1B8.asm:46 ADC #sprite_grouping::spritepointerarray
    // Overlapping static entry reached from 0xC4B210.
    case 0xC4B212: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4B1B8.asm:47 CLC
    case 0xC4B213: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:48 ADC @VIRTUAL06
    case 0xC4B214: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:49 STA @VIRTUAL06
    case 0xC4B216: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:50 LDA [@VIRTUAL06]
    case 0xC4B218: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:51 AND #$FFFE
    case 0xC4B21A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FE, 2); else cpu.execute_instruction<0x29>(0x00FFFE, 3); return true;
    // src/unknown/C4/C4B1B8.asm:51 AND #$FFFE
    // Overlapping static entry reached from 0xC4B21A.
    case 0xC4B21C: cpu.execute_instruction<0xFF>(0x851285, 4); return true;
    // src/unknown/C4/C4B1B8.asm:52 STA @LOCAL01
    case 0xC4B21D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B1B8.asm:53 STA @VIRTUAL06
    case 0xC4B21F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:53 STA @VIRTUAL06
    // Overlapping static entry reached from 0xC4B21C.
    case 0xC4B220: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B1B8.asm:54 LDA @LOCAL01+2
    case 0xC4B221: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B1B8.asm:54 LDA @LOCAL01+2
    // Overlapping static entry reached from 0xC4B220.
    case 0xC4B222: cpu.execute_instruction<0x14>(0x000085, 2); return true;
    // src/unknown/C4/C4B1B8.asm:55 STA @VIRTUAL06+2
    case 0xC4B223: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B1B8.asm:55 STA @VIRTUAL06+2
    // Overlapping static entry reached from 0xC4B222.
    case 0xC4B224: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B225: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B227: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B229: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B22B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B1B8.asm:57 LDY @VIRTUAL04
    case 0xC4B22D: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:58 LDX @VIRTUAL02
    case 0xC4B22F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:59 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B231: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:60 LDA #0
    case 0xC4B233: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4B1B8.asm:61 JSL PREPARE_VRAM_COPY
    case 0xC4B235: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4B1B8.asm:61 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B233.
    case 0xC4B236: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B1B8.asm:61 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B236.
    case 0xC4B238: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C4B1B8.asm:63 LDA @VIRTUAL02
    case 0xC4B239: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:63 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B238.
    case 0xC4B23A: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/unknown/C4/C4B1B8.asm:64 CLC
    case 0xC4B23B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:65 ADC @LOCAL01
    case 0xC4B23C: cpu.execute_instruction<0x65>(0x000012, 2); return true;
    // src/unknown/C4/C4B1B8.asm:66 STA @LOCAL01
    case 0xC4B23E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B1B8.asm:67 STA @VIRTUAL06
    case 0xC4B240: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B1B8.asm:68 LDA @LOCAL01+2
    case 0xC4B242: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B1B8.asm:69 STA @VIRTUAL06+2
    case 0xC4B244: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B246: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B248: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B24A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B1B8.asm:70 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4B24C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B1B8.asm:71 LDA @VIRTUAL04
    case 0xC4B24E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:72 CLC
    case 0xC4B250: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:73 ADC #256
    case 0xC4B251: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000100, 3); return true;
    // src/unknown/C4/C4B1B8.asm:73 ADC #256
    // Overlapping static entry reached from 0xC4B251.
    case 0xC4B253: cpu.execute_instruction<0x01>(0x0000A8, 2); return true;
    // src/unknown/C4/C4B1B8.asm:74 TAY
    case 0xC4B254: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:75 LDX @VIRTUAL02
    case 0xC4B255: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:76 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B257: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B1B8.asm:77 LDA #0
    case 0xC4B259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4B1B8.asm:78 JSL PREPARE_VRAM_COPY
    case 0xC4B25B: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4B1B8.asm:78 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B259.
    case 0xC4B25C: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/unknown/C4/C4B1B8.asm:78 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC4B25C.
    case 0xC4B25E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/unknown/C4/C4B1B8.asm:79 LDA @VIRTUAL02
    case 0xC4B25F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:79 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B25E.
    case 0xC4B260: cpu.execute_instruction<0x02>(0x00004A, 2); return true;
    // src/unknown/C4/C4B1B8.asm:80 LSR
    case 0xC4B261: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:81 STA @VIRTUAL02
    case 0xC4B262: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B1B8.asm:82 LDA @VIRTUAL04
    case 0xC4B264: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B1B8.asm:83 CLC
    case 0xC4B266: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B1B8.asm:84 ADC @VIRTUAL02
    case 0xC4B267: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B1B8.asm:86 END_C_FUNCTION
    case 0xC4B269: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B1B8.asm:86 END_C_FUNCTION
    case 0xC4B26A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B329.asm (unresolved).
bool execute_unresolved_c4_c4b329_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B329.asm:3 BEGIN_C_FUNCTION
    case 0xC4B329: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4B32B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4B32C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4B32D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4B32E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B32E.
    case 0xC4B330: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4B331: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B329.asm:8 END_STACK_VARS
    case 0xC4B332: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:9 STX @LOCAL00
    case 0xC4B333: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4B329.asm:9 STX @LOCAL00
    // Overlapping static entry reached from 0xC4B330.
    case 0xC4B334: cpu.execute_instruction<0x0E>(0x0001C9, 3); return true;
    // src/unknown/C4/C4B329.asm:10 CMP #1
    case 0xC4B335: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4B329.asm:10 CMP #1
    // Overlapping static entry reached from 0xC4B335.
    case 0xC4B337: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:11 BEQ @UNKNOWN1
    case 0xC4B338: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C4/C4B329.asm:12 CMP #4
    case 0xC4B33A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4B329.asm:12 CMP #4
    // Overlapping static entry reached from 0xC4B33A.
    case 0xC4B33C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:13 BEQ @UNKNOWN2
    case 0xC4B33D: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C4/C4B329.asm:14 CMP #2
    case 0xC4B33F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4B329.asm:14 CMP #2
    // Overlapping static entry reached from 0xC4B33F.
    case 0xC4B341: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:15 BEQ @UNKNOWN3
    case 0xC4B342: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/unknown/C4/C4B329.asm:16 CMP #5
    case 0xC4B344: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4B329.asm:16 CMP #5
    // Overlapping static entry reached from 0xC4B344.
    case 0xC4B346: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B329.asm:17 BEQL @UNKNOWN6
    case 0xC4B347: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B329.asm:17 BEQL @UNKNOWN6
    case 0xC4B349: cpu.execute_instruction<0x4C>(0x00B3CE, 3); return true;
    // src/unknown/C4/C4B329.asm:18 CMP #3
    case 0xC4B34C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4B329.asm:18 CMP #3
    // Overlapping static entry reached from 0xC4B34C.
    case 0xC4B34E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:19 BEQ @UNKNOWN4
    case 0xC4B34F: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C4B329.asm:20 CMP #6
    case 0xC4B351: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C4B329.asm:20 CMP #6
    // Overlapping static entry reached from 0xC4B351.
    case 0xC4B353: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B329.asm:21 BEQ @UNKNOWN5
    case 0xC4B354: cpu.execute_instruction<0xF0>(0x000060, 2); return true;
    // src/unknown/C4/C4B329.asm:22 BRA @UNKNOWN6
    case 0xC4B356: cpu.execute_instruction<0x80>(0x000076, 2); return true;
    // src/unknown/C4/C4B329.asm:24 TXA
    case 0xC4B358: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:25 ASL
    case 0xC4B359: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:26 TAX
    case 0xC4B35A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:27 LDA f:UNKNOWN_C42A41,X
    case 0xC4B35B: cpu.execute_instruction<0xBF>(0xC42A41, 4); return true;
    // src/unknown/C4/C4B329.asm:28 CLC
    case 0xC4B35F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:29 ADC #8
    case 0xC4B360: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:29 ADC #8
    // Overlapping static entry reached from 0xC4B360.
    case 0xC4B362: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:30 STA @VIRTUAL02
    case 0xC4B363: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:31 LDA ACTIVE_MANPU_Y
    case 0xC4B365: cpu.execute_instruction<0xAD>(0x00B3FA, 3); return true;
    // src/unknown/C4/C4B329.asm:32 SEC
    case 0xC4B368: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:33 SBC @VIRTUAL02
    case 0xC4B369: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:34 STA ACTIVE_MANPU_Y
    case 0xC4B36B: cpu.execute_instruction<0x8D>(0x00B3FA, 3); return true;
    // src/unknown/C4/C4B329.asm:36 LDX @LOCAL00
    case 0xC4B36E: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4B329.asm:37 TXA
    case 0xC4B370: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:38 ASL
    case 0xC4B371: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:39 TAX
    case 0xC4B372: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:40 LDA f:UNKNOWN_C42A1F,X
    case 0xC4B373: cpu.execute_instruction<0xBF>(0xC42A1F, 4); return true;
    // src/unknown/C4/C4B329.asm:41 SEC
    case 0xC4B377: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:42 SBC #8
    case 0xC4B378: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:42 SBC #8
    // Overlapping static entry reached from 0xC4B378.
    case 0xC4B37A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:43 STA @VIRTUAL02
    case 0xC4B37B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:44 LDA ACTIVE_MANPU_X
    case 0xC4B37D: cpu.execute_instruction<0xAD>(0x00B3F8, 3); return true;
    // src/unknown/C4/C4B329.asm:45 SEC
    case 0xC4B380: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:46 SBC @VIRTUAL02
    case 0xC4B381: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:47 STA ACTIVE_MANPU_X
    case 0xC4B383: cpu.execute_instruction<0x8D>(0x00B3F8, 3); return true;
    // src/unknown/C4/C4B329.asm:48 BRA @UNKNOWN6
    case 0xC4B386: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C4/C4B329.asm:50 TXA
    case 0xC4B388: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:51 ASL
    case 0xC4B389: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:52 TAX
    case 0xC4B38A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:53 LDA f:UNKNOWN_C42A41,X
    case 0xC4B38B: cpu.execute_instruction<0xBF>(0xC42A41, 4); return true;
    // src/unknown/C4/C4B329.asm:54 SEC
    case 0xC4B38F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:55 SBC #8
    case 0xC4B390: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:55 SBC #8
    // Overlapping static entry reached from 0xC4B390.
    case 0xC4B392: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:56 STA @VIRTUAL02
    case 0xC4B393: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:57 LDA ACTIVE_MANPU_Y
    case 0xC4B395: cpu.execute_instruction<0xAD>(0x00B3FA, 3); return true;
    // src/unknown/C4/C4B329.asm:58 SEC
    case 0xC4B398: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:59 SBC @VIRTUAL02
    case 0xC4B399: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:60 STA ACTIVE_MANPU_Y
    case 0xC4B39B: cpu.execute_instruction<0x8D>(0x00B3FA, 3); return true;
    // src/unknown/C4/C4B329.asm:61 BRA @UNKNOWN6
    case 0xC4B39E: cpu.execute_instruction<0x80>(0x00002E, 2); return true;
    // src/unknown/C4/C4B329.asm:63 TXA
    case 0xC4B3A0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:64 ASL
    case 0xC4B3A1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:65 TAX
    case 0xC4B3A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:66 LDA f:UNKNOWN_C42A41,X
    case 0xC4B3A3: cpu.execute_instruction<0xBF>(0xC42A41, 4); return true;
    // src/unknown/C4/C4B329.asm:67 CLC
    case 0xC4B3A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:68 ADC #8
    case 0xC4B3A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:68 ADC #8
    // Overlapping static entry reached from 0xC4B3A8.
    case 0xC4B3AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:69 STA @VIRTUAL02
    case 0xC4B3AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:70 LDA ACTIVE_MANPU_Y
    case 0xC4B3AD: cpu.execute_instruction<0xAD>(0x00B3FA, 3); return true;
    // src/unknown/C4/C4B329.asm:71 SEC
    case 0xC4B3B0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:72 SBC @VIRTUAL02
    case 0xC4B3B1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:73 STA ACTIVE_MANPU_Y
    case 0xC4B3B3: cpu.execute_instruction<0x8D>(0x00B3FA, 3); return true;
    // src/unknown/C4/C4B329.asm:75 LDX @LOCAL00
    case 0xC4B3B6: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4B329.asm:76 TXA
    case 0xC4B3B8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:77 ASL
    case 0xC4B3B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:78 TAX
    case 0xC4B3BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:79 LDA f:UNKNOWN_C42A1F,X
    case 0xC4B3BB: cpu.execute_instruction<0xBF>(0xC42A1F, 4); return true;
    // src/unknown/C4/C4B329.asm:80 CLC
    case 0xC4B3BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:81 ADC #8
    case 0xC4B3C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4B329.asm:81 ADC #8
    // Overlapping static entry reached from 0xC4B3C0.
    case 0xC4B3C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B329.asm:82 STA @VIRTUAL02
    case 0xC4B3C3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:83 LDA ACTIVE_MANPU_X
    case 0xC4B3C5: cpu.execute_instruction<0xAD>(0x00B3F8, 3); return true;
    // src/unknown/C4/C4B329.asm:84 SEC
    case 0xC4B3C8: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B329.asm:85 SBC @VIRTUAL02
    case 0xC4B3C9: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4B329.asm:86 STA ACTIVE_MANPU_X
    case 0xC4B3CB: cpu.execute_instruction<0x8D>(0x00B3F8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B329.asm:88 END_C_FUNCTION
    case 0xC4B3CE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B329.asm:88 END_C_FUNCTION
    case 0xC4B3CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B4BE.asm (unresolved).
bool execute_unresolved_c4_c4b4be_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B4BE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B4BE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4B4C0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4B4C1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4B4C2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4B4C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B4C3.
    case 0xC4B4C5: cpu.execute_instruction<0xFF>(0xC9685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4B4C6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B4BE.asm:7 END_STACK_VARS
    case 0xC4B4C7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:8 CMP #.LOWORD(-1)
    case 0xC4B4C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B4BE.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B4C5.
    case 0xC4B4C9: cpu.execute_instruction<0xFF>(0x2FF0FF, 4); return true;
    // src/unknown/C4/C4B4BE.asm:8 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B4C8.
    case 0xC4B4CA: cpu.execute_instruction<0xFF>(0x092FF0, 4); return true;
    // src/unknown/C4/C4B4BE.asm:9 BEQ @UNKNOWN3
    case 0xC4B4CB: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/unknown/C4/C4B4BE.asm:10 ORA #$C000
    case 0xC4B4CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:10 ORA #$C000
    // Overlapping static entry reached from 0xC4B4CA.
    case 0xC4B4CE: cpu.execute_instruction<0x00>(0x0000C0, 2); return true;
    // src/unknown/C4/C4B4BE.asm:10 ORA #$C000
    // Overlapping static entry reached from 0xC4B4CD.
    case 0xC4B4CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000285, 3); return true;
    // src/unknown/C4/C4B4BE.asm:11 STA @VIRTUAL02
    case 0xC4B4D0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B4BE.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B4CF.
    case 0xC4B4D1: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/unknown/C4/C4B4BE.asm:12 LDY #0
    case 0xC4B4D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:12 LDY #0
    // Overlapping static entry reached from 0xC4B4D2.
    case 0xC4B4D4: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4B4BE.asm:13 STY @LOCAL00
    case 0xC4B4D5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:14 BRA @UNKNOWN2
    case 0xC4B4D7: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:16 TYA
    case 0xC4B4D9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:17 ASL
    case 0xC4B4DA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:18 CLC
    case 0xC4B4DB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:19 ADC #.LOWORD(ENTITY_DRAW_PRIORITY)
    case 0xC4B4DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003E, 2); else cpu.execute_instruction<0x69>(0x00103E, 3); return true;
    // src/unknown/C4/C4B4BE.asm:19 ADC #.LOWORD(ENTITY_DRAW_PRIORITY)
    // Overlapping static entry reached from 0xC4B4DC.
    case 0xC4B4DE: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4B4BE.asm:20 TAX
    case 0xC4B4DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:21 LDA __BSS_START__,X
    case 0xC4B4E0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:22 CMP @VIRTUAL02
    case 0xC4B4E3: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4B4BE.asm:23 BNE @UNKNOWN1
    case 0xC4B4E5: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/unknown/C4/C4B4BE.asm:24 LDA #0
    case 0xC4B4E7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:24 LDA #0
    // Overlapping static entry reached from 0xC4B4E7.
    case 0xC4B4E9: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4B4BE.asm:25 STA __BSS_START__,X
    case 0xC4B4EA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4B4BE.asm:26 TYA
    case 0xC4B4ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:27 JSL UNKNOWN_C02140
    case 0xC4B4EE: cpu.execute_instruction<0x22>(0xC02140, 4); return true;
    // src/unknown/C4/C4B4BE.asm:29 LDY @LOCAL00
    case 0xC4B4F2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:30 INY
    case 0xC4B4F4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4B4BE.asm:31 STY @LOCAL00
    case 0xC4B4F5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4BE.asm:33 CPY #MAX_ENTITIES
    case 0xC4B4F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00001E, 2); else cpu.execute_instruction<0xC0>(0x00001E, 3); return true;
    // src/unknown/C4/C4B4BE.asm:33 CPY #MAX_ENTITIES
    // Overlapping static entry reached from 0xC4B4F7.
    case 0xC4B4F9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4B4BE.asm:34 BCC @UNKNOWN0
    case 0xC4B4FA: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B4BE.asm:36 END_C_FUNCTION
    case 0xC4B4FC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B4BE.asm:36 END_C_FUNCTION
    case 0xC4B4FD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B4FE.asm (unresolved).
bool execute_unresolved_c4_c4b4fe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B4FE.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B4FE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4B500: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4B501: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4B502: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4B503: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B503.
    case 0xC4B505: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4B506: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B4FE.asm:7 END_STACK_VARS
    case 0xC4B507: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:8 TXY
    case 0xC4B508: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:9 STY @LOCAL00
    case 0xC4B509: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4FE.asm:10 TAX
    case 0xC4B50B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:11 JSL UNKNOWN_C4608C
    case 0xC4B50C: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C4B4FE.asm:12 LDY @LOCAL00
    case 0xC4B510: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B4FE.asm:13 TYX
    case 0xC4B512: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B4FE.asm:14 JSL SPAWN_FLOATING_SPRITE
    case 0xC4B513: cpu.execute_instruction<0x22>(0xC4B3D0, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B4FE.asm:15 END_C_FUNCTION
    case 0xC4B517: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B4FE.asm:15 END_C_FUNCTION
    case 0xC4B518: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B519.asm (unresolved).
bool execute_unresolved_c4_c4b519_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B519.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B519: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B519.asm:6 JSL UNKNOWN_C4608C
    case 0xC4B51B: cpu.execute_instruction<0x22>(0xC4608C, 4); return true;
    // src/unknown/C4/C4B519.asm:7 JSL UNKNOWN_C4B4BE
    case 0xC4B51F: cpu.execute_instruction<0x22>(0xC4B4BE, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B519.asm:8 END_C_FUNCTION
    case 0xC4B523: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B524.asm (unresolved).
bool execute_unresolved_c4_c4b524_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B524.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B524: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4B526: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4B527: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4B528: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4B529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B529.
    case 0xC4B52B: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4B52C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B524.asm:7 END_STACK_VARS
    case 0xC4B52D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:8 TXY
    case 0xC4B52E: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:9 STY @LOCAL00
    case 0xC4B52F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B524.asm:10 TAX
    case 0xC4B531: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:11 JSL UNKNOWN_C4605A
    case 0xC4B532: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C4B524.asm:12 LDY @LOCAL00
    case 0xC4B536: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B524.asm:13 TYX
    case 0xC4B538: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B524.asm:14 JSL SPAWN_FLOATING_SPRITE
    case 0xC4B539: cpu.execute_instruction<0x22>(0xC4B3D0, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B524.asm:15 END_C_FUNCTION
    case 0xC4B53D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B524.asm:15 END_C_FUNCTION
    case 0xC4B53E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B53F.asm (unresolved).
bool execute_unresolved_c4_c4b53f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B53F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B53F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B53F.asm:6 JSL UNKNOWN_C4605A
    case 0xC4B541: cpu.execute_instruction<0x22>(0xC4605A, 4); return true;
    // src/unknown/C4/C4B53F.asm:7 JSL UNKNOWN_C4B4BE
    case 0xC4B545: cpu.execute_instruction<0x22>(0xC4B4BE, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B53F.asm:8 END_C_FUNCTION
    case 0xC4B549: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B54A.asm (unresolved).
bool execute_unresolved_c4_c4b54a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B54A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B54A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC4B54C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC4B54D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC4B54E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC4B54F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B54F.
    case 0xC4B551: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC4B552: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B54A.asm:8 END_STACK_VARS
    case 0xC4B553: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:9 TXY
    case 0xC4B554: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:10 STY @LOCAL00
    case 0xC4B555: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B54A.asm:11 TAX
    case 0xC4B557: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:12 JSL UNKNOWN_C46028
    case 0xC4B558: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C4B54A.asm:13 LDY @LOCAL00
    case 0xC4B55C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4B54A.asm:14 TYX
    case 0xC4B55E: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B54A.asm:15 JSL SPAWN_FLOATING_SPRITE
    case 0xC4B55F: cpu.execute_instruction<0x22>(0xC4B3D0, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B54A.asm:16 END_C_FUNCTION
    case 0xC4B563: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B54A.asm:16 END_C_FUNCTION
    case 0xC4B564: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B565.asm (unresolved).
bool execute_unresolved_c4_c4b565_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B565.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B565: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B565.asm:6 JSL UNKNOWN_C46028
    case 0xC4B567: cpu.execute_instruction<0x22>(0xC46028, 4); return true;
    // src/unknown/C4/C4B565.asm:7 JSL UNKNOWN_C4B4BE
    case 0xC4B56B: cpu.execute_instruction<0x22>(0xC4B4BE, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B565.asm:8 END_C_FUNCTION
    case 0xC4B56F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B570.asm (unresolved).
bool execute_unresolved_c4_c4b570_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B570.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B570: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B570.asm:5 LDX #1
    case 0xC4B572: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4B570.asm:5 LDX #1
    // Overlapping static entry reached from 0xC4B572.
    case 0xC4B574: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B570.asm:6 LDA #24
    case 0xC4B575: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4B570.asm:6 LDA #24
    // Overlapping static entry reached from 0xC4B575.
    case 0xC4B577: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4B570.asm:7 JSL SPAWN_FLOATING_SPRITE
    case 0xC4B578: cpu.execute_instruction<0x22>(0xC4B3D0, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B570.asm:8 END_C_FUNCTION
    case 0xC4B57C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B57D.asm (unresolved).
bool execute_unresolved_c4_c4b57d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B57D.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B57D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B57D.asm:5 LDA #24
    case 0xC4B57F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4B57D.asm:5 LDA #24
    // Overlapping static entry reached from 0xC4B57F.
    case 0xC4B581: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4B57D.asm:6 JSL UNKNOWN_C4B4BE
    case 0xC4B582: cpu.execute_instruction<0x22>(0xC4B4BE, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B57D.asm:7 END_C_FUNCTION
    case 0xC4B586: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B587.asm (unresolved).
bool execute_unresolved_c4_c4b587_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B587.asm:3 BEGIN_C_FUNCTION
    case 0xC4B587: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B587.asm:7 LDX PATH_HEAP_CURRENT
    case 0xC4B589: cpu.execute_instruction<0xAE>(0x00B43A, 3); return true;
    // src/unknown/C4/C4B587.asm:8 CLC
    case 0xC4B58C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B587.asm:9 ADC PATH_HEAP_CURRENT
    case 0xC4B58D: cpu.execute_instruction<0x6D>(0x00B43A, 3); return true;
    // src/unknown/C4/C4B587.asm:10 STA PATH_HEAP_CURRENT
    case 0xC4B590: cpu.execute_instruction<0x8D>(0x00B43A, 3); return true;
    // src/unknown/C4/C4B587.asm:11 TXA
    case 0xC4B593: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B587.asm:12 END_C_FUNCTION
    case 0xC4B594: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B595.asm (unresolved).
bool execute_unresolved_c4_c4b595_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B595.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B595: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4B595.asm:6 LDA PATH_HEAP_CURRENT
    case 0xC4B597: cpu.execute_instruction<0xAD>(0x00B43A, 3); return true;
    // src/unknown/C4/C4B595.asm:7 SEC
    case 0xC4B59A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B595.asm:8 SBC PATH_HEAP_START
    case 0xC4B59B: cpu.execute_instruction<0xED>(0x00B438, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B595.asm:9 END_C_FUNCTION
    case 0xC4B59E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B59F.asm (unresolved).
bool execute_unresolved_c4_c4b59f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B59F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B59F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC4B5A1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC4B5A2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC4B5A3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC4B5A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CC, 2); else cpu.execute_instruction<0x69>(0x00FFCC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B5A4.
    case 0xC4B5A6: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC4B5A7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B59F.asm:37 END_STACK_VARS
    case 0xC4B5A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:38 STY @VIRTUAL04
    case 0xC4B5A9: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:38 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC4B5A6.
    case 0xC4B5AA: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/unknown/C4/C4B59F.asm:39 STX @VIRTUAL02
    case 0xC4B5AB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:39 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4B5AA.
    case 0xC4B5AC: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4B59F.asm:40 STA @LOCAL12
    case 0xC4B5AD: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:41 LDA @PARAM0B
    case 0xC4B5AF: cpu.execute_instruction<0xA5>(0x000054, 2); return true;
    // src/unknown/C4/C4B59F.asm:42 STA @LOCAL11
    case 0xC4B5B1: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/unknown/C4/C4B59F.asm:43 LDY @PARAM0A
    case 0xC4B5B3: cpu.execute_instruction<0xA4>(0x000052, 2); return true;
    // src/unknown/C4/C4B59F.asm:44 STY @LOCAL10
    case 0xC4B5B5: cpu.execute_instruction<0x84>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:45 LDA @PARAM09
    case 0xC4B5B7: cpu.execute_instruction<0xA5>(0x000050, 2); return true;
    // src/unknown/C4/C4B59F.asm:46 STA @LOCAL0F
    case 0xC4B5B9: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/unknown/C4/C4B59F.asm:47 LDA @PARAM08
    case 0xC4B5BB: cpu.execute_instruction<0xA5>(0x00004E, 2); return true;
    // src/unknown/C4/C4B59F.asm:48 STA @LOCAL0E
    case 0xC4B5BD: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:49 LDX @PARAM07
    case 0xC4B5BF: cpu.execute_instruction<0xA6>(0x00004C, 2); return true;
    // src/unknown/C4/C4B59F.asm:50 STX @LOCAL0D
    case 0xC4B5C1: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:51 LDA @PARAM06
    case 0xC4B5C3: cpu.execute_instruction<0xA5>(0x00004A, 2); return true;
    // src/unknown/C4/C4B59F.asm:52 STA @LOCAL0C
    case 0xC4B5C5: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4B59F.asm:53 LDA @PARAM05
    case 0xC4B5C7: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // src/unknown/C4/C4B59F.asm:54 STA @LOCAL0B
    case 0xC4B5C9: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/unknown/C4/C4B59F.asm:55 LDX @PARAM04
    case 0xC4B5CB: cpu.execute_instruction<0xA6>(0x000046, 2); return true;
    // src/unknown/C4/C4B59F.asm:56 STX @LOCAL0A
    case 0xC4B5CD: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4B5CF: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4B5D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4B5D3: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B59F.asm:57 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC4B5D5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B59F.asm:58 STZ @LOCAL09
    case 0xC4B5D7: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:59 LDA @VIRTUAL02
    case 0xC4B5D9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:60 STA PATH_HEAP_START
    case 0xC4B5DB: cpu.execute_instruction<0x8D>(0x00B438, 3); return true;
    // src/unknown/C4/C4B59F.asm:61 LDA @VIRTUAL02
    case 0xC4B5DE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:62 STA PATH_HEAP_CURRENT
    case 0xC4B5E0: cpu.execute_instruction<0x8D>(0x00B43A, 3); return true;
    // src/unknown/C4/C4B59F.asm:63 LDA @VIRTUAL02
    case 0xC4B5E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:64 CLC
    case 0xC4B5E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:65 ADC @LOCAL12
    case 0xC4B5E6: cpu.execute_instruction<0x65>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:66 STA PATH_HEAP_END
    case 0xC4B5E8: cpu.execute_instruction<0x8D>(0x00B43C, 3); return true;
    // src/unknown/C4/C4B59F.asm:67 LDX @VIRTUAL04
    case 0xC4B5EB: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:68 LDA __BSS_START__,X
    case 0xC4B5ED: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4B59F.asm:69 STA PATH_MATRIX_ROWS
    case 0xC4B5F0: cpu.execute_instruction<0x8D>(0x00B400, 3); return true;
    // src/unknown/C4/C4B59F.asm:70 LDX @VIRTUAL04
    case 0xC4B5F3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:71 LDY __BSS_START__+2,X
    case 0xC4B5F5: cpu.execute_instruction<0xBC>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:72 STY PATH_MATRIX_COLUMNS
    case 0xC4B5F8: cpu.execute_instruction<0x8C>(0x00B402, 3); return true;
    // src/unknown/C4/C4B59F.asm:73 LDX @LOCAL0A
    case 0xC4B5FB: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:74 STX PATH_MATRIX_BORDER
    case 0xC4B5FD: cpu.execute_instruction<0x8E>(0x00B404, 3); return true;
    // src/unknown/C4/C4B59F.asm:75 JSL MULT16
    case 0xC4B600: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B59F.asm:76 STA PATH_MATRIX_SIZE
    case 0xC4B604: cpu.execute_instruction<0x8D>(0x00B406, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC4B607: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC4B609: cpu.execute_instruction<0x8D>(0x00B3FC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC4B60C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B59F.asm:77 MOVE_INT @VIRTUAL06, PATH_MATRIX_BUFFER
    case 0xC4B60E: cpu.execute_instruction<0x8D>(0x00B3FE, 3); return true;
    // src/unknown/C4/C4B59F.asm:78 LDA @LOCAL11
    case 0xC4B611: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/unknown/C4/C4B59F.asm:79 ASL
    case 0xC4B613: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:80 STA @VIRTUAL02
    case 0xC4B614: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:81 INC
    case 0xC4B616: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:82 INC
    case 0xC4B617: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:83 JSR UNKNOWN_C4B587
    case 0xC4B618: cpu.execute_instruction<0x20>(0x00B587, 3); return true;
    // src/unknown/C4/C4B59F.asm:84 STA @LOCAL08
    case 0xC4B61B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:85 STA PATH_SEARCH_TEMP_START
    case 0xC4B61D: cpu.execute_instruction<0x8D>(0x00B408, 3); return true;
    // src/unknown/C4/C4B59F.asm:86 CLC
    case 0xC4B620: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:87 ADC @VIRTUAL02
    case 0xC4B621: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:88 STA PATH_SEARCH_TEMP_END
    case 0xC4B623: cpu.execute_instruction<0x8D>(0x00B40A, 3); return true;
    // src/unknown/C4/C4B59F.asm:89 LDA @LOCAL08
    case 0xC4B626: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:90 STA PATH_SEARCH_TEMP_B
    case 0xC4B628: cpu.execute_instruction<0x8D>(0x00B40E, 3); return true;
    // src/unknown/C4/C4B59F.asm:91 STA PATH_SEARCH_TEMP_A
    case 0xC4B62B: cpu.execute_instruction<0x8D>(0x00B40C, 3); return true;
    // src/unknown/C4/C4B59F.asm:92 LDA PATH_MATRIX_COLUMNS
    case 0xC4B62E: cpu.execute_instruction<0xAD>(0x00B402, 3); return true;
    // src/unknown/C4/C4B59F.asm:93 EOR #$FFFF
    case 0xC4B631: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:93 EOR #$FFFF
    // Overlapping static entry reached from 0xC4B631.
    case 0xC4B633: cpu.execute_instruction<0xFF>(0x108D1A, 4); return true;
    // src/unknown/C4/C4B59F.asm:94 INC
    case 0xC4B634: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:95 STA PATH_CARDINAL_OFFSET
    case 0xC4B635: cpu.execute_instruction<0x8D>(0x00B410, 3); return true;
    // src/unknown/C4/C4B59F.asm:95 STA PATH_CARDINAL_OFFSET
    // Overlapping static entry reached from 0xC4B633.
    case 0xC4B637: cpu.execute_instruction<0xB4>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B59F.asm:96 LDA #1
    case 0xC4B638: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:96 LDA #1
    // Overlapping static entry reached from 0xC4B637.
    case 0xC4B639: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/unknown/C4/C4B59F.asm:96 LDA #1
    // Overlapping static entry reached from 0xC4B638.
    case 0xC4B63A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4B59F.asm:97 STA PATH_CARDINAL_OFFSET+2
    case 0xC4B63B: cpu.execute_instruction<0x8D>(0x00B412, 3); return true;
    // src/unknown/C4/C4B59F.asm:98 LDA PATH_MATRIX_COLUMNS
    case 0xC4B63E: cpu.execute_instruction<0xAD>(0x00B402, 3); return true;
    // src/unknown/C4/C4B59F.asm:99 STA PATH_CARDINAL_OFFSET+4
    case 0xC4B641: cpu.execute_instruction<0x8D>(0x00B414, 3); return true;
    // src/unknown/C4/C4B59F.asm:100 LDA #.LOWORD(-1)
    case 0xC4B644: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:100 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B644.
    case 0xC4B646: cpu.execute_instruction<0xFF>(0xB4168D, 4); return true;
    // src/unknown/C4/C4B59F.asm:101 STA PATH_CARDINAL_OFFSET+6
    case 0xC4B647: cpu.execute_instruction<0x8D>(0x00B416, 3); return true;
    // src/unknown/C4/C4B59F.asm:102 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::y_coord
    case 0xC4B64A: cpu.execute_instruction<0x8D>(0x00B418, 3); return true;
    // src/unknown/C4/C4B59F.asm:103 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::x_coord
    case 0xC4B64D: cpu.execute_instruction<0x9C>(0x00B41A, 3); return true;
    // src/unknown/C4/C4B59F.asm:104 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::y_coord
    case 0xC4B650: cpu.execute_instruction<0x9C>(0x00B41C, 3); return true;
    // src/unknown/C4/C4B59F.asm:105 LDA #1
    case 0xC4B653: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:105 LDA #1
    // Overlapping static entry reached from 0xC4B653.
    case 0xC4B655: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4B59F.asm:106 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::x_coord
    case 0xC4B656: cpu.execute_instruction<0x8D>(0x00B41E, 3); return true;
    // src/unknown/C4/C4B59F.asm:107 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::y_coord
    case 0xC4B659: cpu.execute_instruction<0x8D>(0x00B420, 3); return true;
    // src/unknown/C4/C4B59F.asm:108 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::x_coord
    case 0xC4B65C: cpu.execute_instruction<0x9C>(0x00B422, 3); return true;
    // src/unknown/C4/C4B59F.asm:109 STZ PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::y_coord
    case 0xC4B65F: cpu.execute_instruction<0x9C>(0x00B424, 3); return true;
    // src/unknown/C4/C4B59F.asm:110 LDA #.LOWORD(-1)
    case 0xC4B662: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:110 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B662.
    case 0xC4B664: cpu.execute_instruction<0xFF>(0xB4268D, 4); return true;
    // src/unknown/C4/C4B59F.asm:111 STA PATH_CARDINAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::x_coord
    case 0xC4B665: cpu.execute_instruction<0x8D>(0x00B426, 3); return true;
    // src/unknown/C4/C4B59F.asm:112 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::y_coord
    case 0xC4B668: cpu.execute_instruction<0x8D>(0x00B428, 3); return true;
    // src/unknown/C4/C4B59F.asm:113 LDA #1
    case 0xC4B66B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:113 LDA #1
    // Overlapping static entry reached from 0xC4B66B.
    case 0xC4B66D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4B59F.asm:114 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 0 + pathfinder_coords::x_coord
    case 0xC4B66E: cpu.execute_instruction<0x8D>(0x00B42A, 3); return true;
    // src/unknown/C4/C4B59F.asm:115 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::y_coord
    case 0xC4B671: cpu.execute_instruction<0x8D>(0x00B42C, 3); return true;
    // src/unknown/C4/C4B59F.asm:116 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 1 + pathfinder_coords::x_coord
    case 0xC4B674: cpu.execute_instruction<0x8D>(0x00B42E, 3); return true;
    // src/unknown/C4/C4B59F.asm:117 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::y_coord
    case 0xC4B677: cpu.execute_instruction<0x8D>(0x00B430, 3); return true;
    // src/unknown/C4/C4B59F.asm:118 LDA #.LOWORD(-1)
    case 0xC4B67A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B59F.asm:118 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B67A.
    case 0xC4B67C: cpu.execute_instruction<0xFF>(0xB4328D, 4); return true;
    // src/unknown/C4/C4B59F.asm:119 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 2 + pathfinder_coords::x_coord
    case 0xC4B67D: cpu.execute_instruction<0x8D>(0x00B432, 3); return true;
    // src/unknown/C4/C4B59F.asm:120 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::y_coord
    case 0xC4B680: cpu.execute_instruction<0x8D>(0x00B434, 3); return true;
    // src/unknown/C4/C4B59F.asm:121 STA PATH_DIAGONAL_INDEX + .SIZEOF(pathfinder_coords) * 3 + pathfinder_coords::x_coord
    case 0xC4B683: cpu.execute_instruction<0x8D>(0x00B436, 3); return true;
    // src/unknown/C4/C4B59F.asm:122 LDA @LOCAL10
    case 0xC4B686: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:123 CMP #251
    case 0xC4B688: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FB, 2); else cpu.execute_instruction<0xC9>(0x0000FB, 3); return true;
    // src/unknown/C4/C4B59F.asm:123 CMP #251
    // Overlapping static entry reached from 0xC4B688.
    case 0xC4B68A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4B59F.asm:124 BCC @UNKNOWN0
    case 0xC4B68B: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C4B59F.asm:125 LDA #251
    case 0xC4B68D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FB, 2); else cpu.execute_instruction<0xA9>(0x0000FB, 3); return true;
    // src/unknown/C4/C4B59F.asm:125 LDA #251
    // Overlapping static entry reached from 0xC4B68D.
    case 0xC4B68F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B59F.asm:126 STA @LOCAL10
    case 0xC4B690: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:128 LDA @LOCAL0D
    case 0xC4B692: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:129 ASL
    case 0xC4B694: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:130 JSR UNKNOWN_C4B587
    case 0xC4B695: cpu.execute_instruction<0x20>(0x00B587, 3); return true;
    // src/unknown/C4/C4B59F.asm:131 STA @LOCAL07
    case 0xC4B698: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:132 LDY @LOCAL07
    case 0xC4B69A: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:133 LDX @LOCAL0E
    case 0xC4B69C: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:134 LDA @LOCAL0D
    case 0xC4B69E: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:135 JSR UNKNOWN_C4B859
    case 0xC4B6A0: cpu.execute_instruction<0x20>(0x00B859, 3); return true;
    // src/unknown/C4/C4B59F.asm:136 LDA @LOCAL10
    case 0xC4B6A3: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:137 ASL
    case 0xC4B6A5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:138 ASL
    case 0xC4B6A6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:139 JSR UNKNOWN_C4B587
    case 0xC4B6A7: cpu.execute_instruction<0x20>(0x00B587, 3); return true;
    // src/unknown/C4/C4B59F.asm:140 STA @LOCAL0E
    case 0xC4B6AA: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:141 JSR UNKNOWN_C4B7A5
    case 0xC4B6AC: cpu.execute_instruction<0x20>(0x00B7A5, 3); return true;
    // src/unknown/C4/C4B59F.asm:142 STZ @LOCAL06
    case 0xC4B6AF: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:143 STZ @LOCAL05
    case 0xC4B6B1: cpu.execute_instruction<0x64>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:144 LDA #0
    case 0xC4B6B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B59F.asm:144 LDA #0
    // Overlapping static entry reached from 0xC4B6B3.
    case 0xC4B6B5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B59F.asm:145 STA @VIRTUAL04
    case 0xC4B6B6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:146 JMP @UNKNOWN10
    case 0xC4B6B8: cpu.execute_instruction<0x4C>(0x00B796, 3); return true;
    // src/unknown/C4/C4B59F.asm:148 LDA @VIRTUAL04
    case 0xC4B6BB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:149 ASL
    case 0xC4B6BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:150 TAY
    case 0xC4B6BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:151 LDA (@LOCAL07),Y
    case 0xC4B6BF: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:152 STA @VIRTUAL02
    case 0xC4B6C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:153 STA @LOCAL12
    case 0xC4B6C3: cpu.execute_instruction<0x85>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:154 LDX @VIRTUAL02
    case 0xC4B6C5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:155 LDA __BSS_START__+2,X
    case 0xC4B6C7: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:156 CMP @LOCAL06
    case 0xC4B6CA: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:157 BNE @UNKNOWN2
    case 0xC4B6CC: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4B59F.asm:158 LDX @VIRTUAL02
    case 0xC4B6CE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:159 LDA __BSS_START__+4,X
    case 0xC4B6D0: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B59F.asm:160 CMP @LOCAL05
    case 0xC4B6D3: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:161 BEQ @UNKNOWN6
    case 0xC4B6D5: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/unknown/C4/C4B59F.asm:163 LDY #1
    case 0xC4B6D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4B59F.asm:163 LDY #1
    // Overlapping static entry reached from 0xC4B6D7.
    case 0xC4B6D9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4B59F.asm:164 STY @LOCAL04
    case 0xC4B6DA: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:165 LDX @VIRTUAL02
    case 0xC4B6DC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:166 LDA __BSS_START__+2,X
    case 0xC4B6DE: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:167 STA @LOCAL06
    case 0xC4B6E1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:168 LDX @VIRTUAL02
    case 0xC4B6E3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:169 LDA __BSS_START__+4,X
    case 0xC4B6E5: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B59F.asm:170 STA @LOCAL05
    case 0xC4B6E8: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:171 LDA @VIRTUAL04
    case 0xC4B6EA: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:172 INC
    case 0xC4B6EC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:173 STA @LOCAL08
    case 0xC4B6ED: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:174 BRA @UNKNOWN4
    case 0xC4B6EF: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/unknown/C4/C4B59F.asm:176 ASL
    case 0xC4B6F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:177 TAY
    case 0xC4B6F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:178 LDA (@LOCAL07),Y
    case 0xC4B6F3: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:179 TAX
    case 0xC4B6F5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:180 LDA __BSS_START__+2,X
    case 0xC4B6F6: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:181 CMP @LOCAL06
    case 0xC4B6F9: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/unknown/C4/C4B59F.asm:182 BNE @UNKNOWN5
    case 0xC4B6FB: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C4/C4B59F.asm:183 LDA __BSS_START__+4,X
    case 0xC4B6FD: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B59F.asm:184 CMP @LOCAL05
    case 0xC4B700: cpu.execute_instruction<0xC5>(0x000018, 2); return true;
    // src/unknown/C4/C4B59F.asm:185 BNE @UNKNOWN5
    case 0xC4B702: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/unknown/C4/C4B59F.asm:186 LDY @LOCAL04
    case 0xC4B704: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:187 INY
    case 0xC4B706: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:188 STY @LOCAL04
    case 0xC4B707: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:189 LDA @LOCAL08
    case 0xC4B709: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:190 INC
    case 0xC4B70B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:191 STA @LOCAL08
    case 0xC4B70C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:193 CMP @LOCAL0D
    case 0xC4B70E: cpu.execute_instruction<0xC5>(0x000028, 2); return true;
    // src/unknown/C4/C4B59F.asm:194 BCC @UNKNOWN3
    case 0xC4B710: cpu.execute_instruction<0x90>(0x0000DF, 2); return true;
    // src/unknown/C4/C4B59F.asm:196 LDA @VIRTUAL04
    case 0xC4B712: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:197 ASL
    case 0xC4B714: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:198 CLC
    case 0xC4B715: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:199 ADC @LOCAL07
    case 0xC4B716: cpu.execute_instruction<0x65>(0x00001C, 2); return true;
    // src/unknown/C4/C4B59F.asm:200 TAX
    case 0xC4B718: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:201 LDY @LOCAL04
    case 0xC4B719: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:202 TYA
    case 0xC4B71B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:203 JSR UNKNOWN_C4B923
    case 0xC4B71C: cpu.execute_instruction<0x20>(0x00B923, 3); return true;
    // src/unknown/C4/C4B59F.asm:204 LDY @LOCAL04
    case 0xC4B71F: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4B59F.asm:205 STY @LOCAL00
    case 0xC4B721: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B59F.asm:206 LDA @LOCAL10
    case 0xC4B723: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:207 STA @LOCAL01
    case 0xC4B725: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B59F.asm:208 LDA @LOCAL0F
    case 0xC4B727: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/unknown/C4/C4B59F.asm:209 STA @LOCAL02
    case 0xC4B729: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B59F.asm:210 LDY @VIRTUAL02
    case 0xC4B72B: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:211 LDX @LOCAL0C
    case 0xC4B72D: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/unknown/C4/C4B59F.asm:212 LDA @LOCAL0B
    case 0xC4B72F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C4B59F.asm:213 JSR UNKNOWN_C4BAF6
    case 0xC4B731: cpu.execute_instruction<0x20>(0x00BAF6, 3); return true;
    // src/unknown/C4/C4B59F.asm:215 LDY @LOCAL0E
    case 0xC4B734: cpu.execute_instruction<0xA4>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:216 LDX @LOCAL10
    case 0xC4B736: cpu.execute_instruction<0xA6>(0x00002E, 2); return true;
    // src/unknown/C4/C4B59F.asm:217 LDA @VIRTUAL02
    case 0xC4B738: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:218 CLC
    case 0xC4B73A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:219 ADC #6
    case 0xC4B73B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/unknown/C4/C4B59F.asm:219 ADC #6
    // Overlapping static entry reached from 0xC4B73B.
    case 0xC4B73D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:220 JSR UNKNOWN_C4BD9A
    case 0xC4B73E: cpu.execute_instruction<0x20>(0x00BD9A, 3); return true;
    // src/unknown/C4/C4B59F.asm:221 LDX @VIRTUAL02
    case 0xC4B741: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:222 STA __BSS_START__+14,X
    case 0xC4B743: cpu.execute_instruction<0x9D>(0x00000E, 3); return true;
    // src/unknown/C4/C4B59F.asm:223 LDX @LOCAL0E
    case 0xC4B746: cpu.execute_instruction<0xA6>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:224 JSR UNKNOWN_C4BF7F
    case 0xC4B748: cpu.execute_instruction<0x20>(0x00BF7F, 3); return true;
    // src/unknown/C4/C4B59F.asm:225 STA @LOCAL03
    case 0xC4B74B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:226 ASL
    case 0xC4B74D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:227 ASL
    case 0xC4B74E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:228 JSR UNKNOWN_C4B587
    case 0xC4B74F: cpu.execute_instruction<0x20>(0x00B587, 3); return true;
    // src/unknown/C4/C4B59F.asm:229 STA @LOCAL0A
    case 0xC4B752: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:230 STZ @LOCAL08
    case 0xC4B754: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:231 BRA @UNKNOWN8
    case 0xC4B756: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:233 LDA @LOCAL08
    case 0xC4B758: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:234 ASL
    case 0xC4B75A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:235 ASL
    case 0xC4B75B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:236 TAX
    case 0xC4B75C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:237 STX @VIRTUAL02
    case 0xC4B75D: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:238 LDA @LOCAL0A
    case 0xC4B75F: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:239 CLC
    case 0xC4B761: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:240 ADC @VIRTUAL02
    case 0xC4B762: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:241 TAY
    case 0xC4B764: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:242 TXA
    case 0xC4B765: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:243 CLC
    case 0xC4B766: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B59F.asm:244 ADC @LOCAL0E
    case 0xC4B767: cpu.execute_instruction<0x65>(0x00002A, 2); return true;
    // src/unknown/C4/C4B59F.asm:245 TAX
    case 0xC4B769: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:1120 LDA src, X
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC4B76A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // include/macros.asm:1121 STA dest, Y
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC4B76D: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1122 LDA src+2, X
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC4B770: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:1123 STA dest+2, Y
    // Macro caller: src/unknown/C4/C4B59F.asm:246 MOVE_INT_XPTRSRC_YPTRDEST __BSS_START__, __BSS_START__
    case 0xC4B773: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/unknown/C4/C4B59F.asm:247 INC @LOCAL08
    case 0xC4B776: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:249 LDA @LOCAL08
    case 0xC4B778: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4B59F.asm:250 CMP @LOCAL03
    case 0xC4B77A: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:251 BCC @UNKNOWN7
    case 0xC4B77C: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // src/unknown/C4/C4B59F.asm:252 LDA @LOCAL03
    case 0xC4B77E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:253 LDX @LOCAL12
    case 0xC4B780: cpu.execute_instruction<0xA6>(0x000032, 2); return true;
    // src/unknown/C4/C4B59F.asm:254 STX @VIRTUAL02
    case 0xC4B782: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:255 STA __BSS_START__+10,X
    case 0xC4B784: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/unknown/C4/C4B59F.asm:256 LDA @LOCAL0A
    case 0xC4B787: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4B59F.asm:257 LDX @VIRTUAL02
    case 0xC4B789: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:258 STA __BSS_START__+12,X
    case 0xC4B78B: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/unknown/C4/C4B59F.asm:259 LDA @LOCAL03
    case 0xC4B78E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B59F.asm:260 BEQ @UNKNOWN9
    case 0xC4B790: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // src/unknown/C4/C4B59F.asm:261 INC @LOCAL09
    case 0xC4B792: cpu.execute_instruction<0xE6>(0x000020, 2); return true;
    // src/unknown/C4/C4B59F.asm:263 INC @VIRTUAL04
    case 0xC4B794: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:265 LDA @VIRTUAL04
    case 0xC4B796: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B59F.asm:266 CMP @LOCAL0D
    case 0xC4B798: cpu.execute_instruction<0xC5>(0x000028, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4B59F.asm:267 BCCL @UNKNOWN1
    case 0xC4B79A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4B59F.asm:267 BCCL @UNKNOWN1
    case 0xC4B79C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4B59F.asm:267 BCCL @UNKNOWN1
    case 0xC4B79E: cpu.execute_instruction<0x4C>(0x00B6BB, 3); return true;
    // src/unknown/C4/C4B59F.asm:268 LDA @LOCAL09
    case 0xC4B7A1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B59F.asm:269 END_C_FUNCTION
    case 0xC4B7A3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4B59F.asm:269 END_C_FUNCTION
    case 0xC4B7A4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B7A5.asm (unresolved).
bool execute_unresolved_c4_c4b7a5_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B7A5.asm:3 BEGIN_C_FUNCTION
    case 0xC4B7A5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC4B7A7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC4B7A8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC4B7A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B7A9.
    case 0xC4B7AB: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B7A5.asm:6 END_STACK_VARS
    case 0xC4B7AC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:7 LDX #0
    case 0xC4B7AD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B7A5.asm:7 LDX #0
    // Overlapping static entry reached from 0xC4B7AD.
    case 0xC4B7AF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B7A5.asm:8 BRA @UNKNOWN1
    case 0xC4B7B0: cpu.execute_instruction<0x80>(0x00004E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:10 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B7B2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:11 LDA #253
    case 0xC4B7B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0085FD, 3); return true;
    // src/unknown/C4/C4B7A5.asm:12 STA @LOCAL00
    case 0xC4B7B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:12 STA @LOCAL00
    // Overlapping static entry reached from 0xC4B7B4.
    case 0xC4B7B7: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C4B7A5.asm:13 REP #PROC_FLAGS::ACCUM8
    case 0xC4B7B8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7BA: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7BD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7BF: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:14 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7C2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:15 LDA PATH_MATRIX_COLUMNS
    case 0xC4B7C4: cpu.execute_instruction<0xAD>(0x00B402, 3); return true;
    // src/unknown/C4/C4B7A5.asm:16 DEC
    case 0xC4B7C7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:17 STA @VIRTUAL02
    case 0xC4B7C8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:18 LDY PATH_MATRIX_COLUMNS
    case 0xC4B7CA: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B7A5.asm:19 TXA
    case 0xC4B7CD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:20 JSL MULT16
    case 0xC4B7CE: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B7A5.asm:21 CLC
    case 0xC4B7D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:22 ADC @VIRTUAL02
    case 0xC4B7D3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:23 CLC
    case 0xC4B7D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:24 ADC @VIRTUAL06
    case 0xC4B7D6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:25 STA @VIRTUAL06
    case 0xC4B7D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B7DA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:27 LDA @LOCAL00
    case 0xC4B7DC: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:28 STA [@VIRTUAL06]
    case 0xC4B7DE: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4B7E0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7E2: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7E7: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:30 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B7EA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:31 LDY PATH_MATRIX_COLUMNS
    case 0xC4B7EC: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B7A5.asm:32 TXA
    case 0xC4B7EF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:33 JSL MULT16
    case 0xC4B7F0: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B7A5.asm:34 CLC
    case 0xC4B7F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:35 ADC @VIRTUAL06
    case 0xC4B7F5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:36 STA @VIRTUAL06
    case 0xC4B7F7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:37 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B7F9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:38 LDA @LOCAL00
    case 0xC4B7FB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:39 STA [@VIRTUAL06]
    case 0xC4B7FD: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:40 INX
    case 0xC4B7FF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:42 CPX PATH_MATRIX_ROWS
    case 0xC4B800: cpu.execute_instruction<0xEC>(0x00B400, 3); return true;
    // src/unknown/C4/C4B7A5.asm:43 BCC @UNKNOWN0
    case 0xC4B803: cpu.execute_instruction<0x90>(0x0000AD, 2); return true;
    // src/unknown/C4/C4B7A5.asm:44 LDX #0
    case 0xC4B805: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B7A5.asm:44 LDX #0
    // Overlapping static entry reached from 0xC4B805.
    case 0xC4B807: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B7A5.asm:45 BRA @UNKNOWN3
    case 0xC4B808: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C4/C4B7A5.asm:47 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B80A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:48 LDA #253
    case 0xC4B80C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FD, 2); else cpu.execute_instruction<0xA9>(0x0085FD, 3); return true;
    // src/unknown/C4/C4B7A5.asm:49 STA @LOCAL00
    case 0xC4B80E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:49 STA @LOCAL00
    // Overlapping static entry reached from 0xC4B80C.
    case 0xC4B80F: cpu.execute_instruction<0x0E>(0x0020C2, 3); return true;
    // src/unknown/C4/C4B7A5.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC4B810: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B812: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B815: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B817: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B81A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:52 STX @VIRTUAL02
    case 0xC4B81C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:53 LDY PATH_MATRIX_COLUMNS
    case 0xC4B81E: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B7A5.asm:54 LDA PATH_MATRIX_ROWS
    case 0xC4B821: cpu.execute_instruction<0xAD>(0x00B400, 3); return true;
    // src/unknown/C4/C4B7A5.asm:55 DEC
    case 0xC4B824: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:56 JSL MULT16
    case 0xC4B825: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B7A5.asm:57 CLC
    case 0xC4B829: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:58 ADC @VIRTUAL02
    case 0xC4B82A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B7A5.asm:59 CLC
    case 0xC4B82C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:60 ADC @VIRTUAL06
    case 0xC4B82D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:61 STA @VIRTUAL06
    case 0xC4B82F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:62 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B831: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:63 LDA @LOCAL00
    case 0xC4B833: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:64 STA [@VIRTUAL06]
    case 0xC4B835: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC4B837: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B839: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B83C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B83E: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B7A5.asm:66 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B841: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B7A5.asm:67 TXA
    case 0xC4B843: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:68 CLC
    case 0xC4B844: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:69 ADC @VIRTUAL06
    case 0xC4B845: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:70 STA @VIRTUAL06
    case 0xC4B847: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B849: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B7A5.asm:72 LDA @LOCAL00
    case 0xC4B84B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B7A5.asm:73 STA [@VIRTUAL06]
    case 0xC4B84D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B7A5.asm:74 INX
    case 0xC4B84F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B7A5.asm:76 CPX PATH_MATRIX_COLUMNS
    case 0xC4B850: cpu.execute_instruction<0xEC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B7A5.asm:77 BCC @UNKNOWN2
    case 0xC4B853: cpu.execute_instruction<0x90>(0x0000B5, 2); return true;
    // src/unknown/C4/C4B7A5.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC4B855: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B7A5.asm:79 END_C_FUNCTION
    case 0xC4B857: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B7A5.asm:79 END_C_FUNCTION
    case 0xC4B858: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B859.asm (unresolved).
bool execute_unresolved_c4_c4b859_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B859.asm:3 BEGIN_C_FUNCTION
    case 0xC4B859: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    case 0xC4B85B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    case 0xC4B85C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    case 0xC4B85D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    case 0xC4B85E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B85E.
    case 0xC4B860: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    case 0xC4B861: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B859.asm:17 END_STACK_VARS
    case 0xC4B862: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:18 STY @LOCAL08
    case 0xC4B863: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/unknown/C4/C4B859.asm:18 STY @LOCAL08
    // Overlapping static entry reached from 0xC4B860.
    case 0xC4B864: cpu.execute_instruction<0x1E>(0x001C85, 3); return true;
    // src/unknown/C4/C4B859.asm:19 STA @LOCAL07
    case 0xC4B865: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4B859.asm:20 DEC
    case 0xC4B867: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:21 STA @LOCAL06
    case 0xC4B868: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4B859.asm:22 LDA #0
    case 0xC4B86A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:22 LDA #0
    // Overlapping static entry reached from 0xC4B86A.
    case 0xC4B86C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B859.asm:23 STA @LOCAL05
    case 0xC4B86D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4B859.asm:24 BRA @UNKNOWN1
    case 0xC4B86F: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4B859.asm:26 ASL
    case 0xC4B871: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:27 TAY
    case 0xC4B872: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:28 LDA @LOCAL05
    case 0xC4B873: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:601 STA scratch
    // Macro caller: src/unknown/C4/C4B859.asm:29 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC4B875: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:602 ASL
    // Macro caller: src/unknown/C4/C4B859.asm:29 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC4B877: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:603 ASL
    // Macro caller: src/unknown/C4/C4B859.asm:29 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC4B878: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:604 ASL
    // Macro caller: src/unknown/C4/C4B859.asm:29 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC4B879: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:605 ADC scratch
    // Macro caller: src/unknown/C4/C4B859.asm:29 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC4B87A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:606 ASL
    // Macro caller: src/unknown/C4/C4B859.asm:29 OPTIMIZED_MULT @VIRTUAL04, 18
    case 0xC4B87C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:30 STA @VIRTUAL02
    case 0xC4B87D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B859.asm:31 TXA
    case 0xC4B87F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:32 CLC
    case 0xC4B880: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:33 ADC @VIRTUAL02
    case 0xC4B881: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B859.asm:34 STA (@LOCAL08),Y
    case 0xC4B883: cpu.execute_instruction<0x91>(0x00001E, 2); return true;
    // src/unknown/C4/C4B859.asm:35 LDA @LOCAL05
    case 0xC4B885: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4B859.asm:36 INC
    case 0xC4B887: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:37 STA @LOCAL05
    case 0xC4B888: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4B859.asm:39 CMP @LOCAL07
    case 0xC4B88A: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B859.asm:40 BCC @UNKNOWN0
    case 0xC4B88C: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C4/C4B859.asm:41 LDA @LOCAL07
    case 0xC4B88E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4B859.asm:42 CMP #1
    case 0xC4B890: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4B859.asm:42 CMP #1
    // Overlapping static entry reached from 0xC4B890.
    case 0xC4B892: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/unknown/C4/C4B859.asm:43 BGT @UNKNOWN3
    case 0xC4B893: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/unknown/C4/C4B859.asm:43 BGT @UNKNOWN3
    case 0xC4B895: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C4B859.asm:44 JMP @UNKNOWN11
    case 0xC4B897: cpu.execute_instruction<0x4C>(0x00B921, 3); return true;
    // src/unknown/C4/C4B859.asm:46 LDA #0
    case 0xC4B89A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:46 LDA #0
    // Overlapping static entry reached from 0xC4B89A.
    case 0xC4B89C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B859.asm:47 STA @VIRTUAL04
    case 0xC4B89D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B859.asm:48 BRA @UNKNOWN10
    case 0xC4B89F: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/unknown/C4/C4B859.asm:50 LDA #.LOWORD(-1)
    case 0xC4B8A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4B859.asm:50 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B8A1.
    case 0xC4B8A3: cpu.execute_instruction<0xFF>(0x851685, 4); return true;
    // src/unknown/C4/C4B859.asm:51 STA @LOCAL04
    case 0xC4B8A4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4B859.asm:52 STA @LOCAL03
    case 0xC4B8A6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B859.asm:52 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B8A3.
    case 0xC4B8A7: cpu.execute_instruction<0x14>(0x0000A4, 2); return true;
    // src/unknown/C4/C4B859.asm:53 LDY @VIRTUAL04
    case 0xC4B8A8: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/unknown/C4/C4B859.asm:53 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC4B8A7.
    case 0xC4B8A9: cpu.execute_instruction<0x04>(0x000084, 2); return true;
    // src/unknown/C4/C4B859.asm:54 STY @LOCAL02
    case 0xC4B8AA: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4B859.asm:54 STY @LOCAL02
    // Overlapping static entry reached from 0xC4B8A9.
    case 0xC4B8AB: cpu.execute_instruction<0x12>(0x000080, 2); return true;
    // src/unknown/C4/C4B859.asm:55 BRA @UNKNOWN9
    case 0xC4B8AC: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/unknown/C4/C4B859.asm:55 BRA @UNKNOWN9
    // Overlapping static entry reached from 0xC4B8AB.
    case 0xC4B8AD: cpu.execute_instruction<0x44>(0x000A98, 3); return true;
    // src/unknown/C4/C4B859.asm:57 TYA
    case 0xC4B8AE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:58 ASL
    case 0xC4B8AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:59 TAY
    case 0xC4B8B0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:60 LDA (@LOCAL08),Y
    case 0xC4B8B1: cpu.execute_instruction<0xB1>(0x00001E, 2); return true;
    // src/unknown/C4/C4B859.asm:61 TAX
    case 0xC4B8B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:62 LDA __BSS_START__+2,X
    case 0xC4B8B4: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4B859.asm:63 STA @LOCAL01
    case 0xC4B8B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4B859.asm:64 LDA __BSS_START__+4,X
    case 0xC4B8B9: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4B859.asm:65 STA @VIRTUAL02
    case 0xC4B8BC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B859.asm:66 LDA @LOCAL01
    case 0xC4B8BE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4B859.asm:67 CMP @LOCAL04
    case 0xC4B8C0: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/unknown/C4/C4B859.asm:68 BEQ @UNKNOWN6
    case 0xC4B8C2: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C4B859.asm:69 LDX #0
    case 0xC4B8C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:69 LDX #0
    // Overlapping static entry reached from 0xC4B8C4.
    case 0xC4B8C6: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4B859.asm:70 CMP @LOCAL04
    case 0xC4B8C7: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/unknown/C4/C4B859.asm:71 BCS @UNKNOWN7
    case 0xC4B8C9: cpu.execute_instruction<0xB0>(0x000011, 2); return true;
    // src/unknown/C4/C4B859.asm:72 LDX #1
    case 0xC4B8CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4B859.asm:72 LDX #1
    // Overlapping static entry reached from 0xC4B8CB.
    case 0xC4B8CD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B859.asm:73 BRA @UNKNOWN7
    case 0xC4B8CE: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C4/C4B859.asm:75 LDX #0
    case 0xC4B8D0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:75 LDX #0
    // Overlapping static entry reached from 0xC4B8D0.
    case 0xC4B8D2: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4B859.asm:76 LDA @VIRTUAL02
    case 0xC4B8D3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B859.asm:77 CMP @LOCAL03
    case 0xC4B8D5: cpu.execute_instruction<0xC5>(0x000014, 2); return true;
    // src/unknown/C4/C4B859.asm:78 BCS @UNKNOWN7
    case 0xC4B8D7: cpu.execute_instruction<0xB0>(0x000003, 2); return true;
    // src/unknown/C4/C4B859.asm:79 LDX #1
    case 0xC4B8D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4B859.asm:79 LDX #1
    // Overlapping static entry reached from 0xC4B8D9.
    case 0xC4B8DB: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/unknown/C4/C4B859.asm:81 CPX #0
    case 0xC4B8DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:81 CPX #0
    // Overlapping static entry reached from 0xC4B8DC.
    case 0xC4B8DE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4B859.asm:82 BEQ @UNKNOWN8
    case 0xC4B8DF: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/unknown/C4/C4B859.asm:83 LDA @LOCAL01
    case 0xC4B8E1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4B859.asm:84 STA @LOCAL04
    case 0xC4B8E3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4B859.asm:85 LDA @VIRTUAL02
    case 0xC4B8E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B859.asm:86 STA @LOCAL03
    case 0xC4B8E7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B859.asm:87 LDY @LOCAL02
    case 0xC4B8E9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4B859.asm:88 STY @LOCAL00
    case 0xC4B8EB: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4B859.asm:90 LDY @LOCAL02
    case 0xC4B8ED: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4B859.asm:91 INY
    case 0xC4B8EF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:92 STY @LOCAL02
    case 0xC4B8F0: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4B859.asm:94 CPY @LOCAL07
    case 0xC4B8F2: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/unknown/C4/C4B859.asm:95 BCC @UNKNOWN5
    case 0xC4B8F4: cpu.execute_instruction<0x90>(0x0000B8, 2); return true;
    // src/unknown/C4/C4B859.asm:96 LDA @VIRTUAL04
    case 0xC4B8F6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B859.asm:97 ASL
    case 0xC4B8F8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:98 CLC
    case 0xC4B8F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:99 ADC @LOCAL08
    case 0xC4B8FA: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/unknown/C4/C4B859.asm:100 TAY
    case 0xC4B8FC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:101 LDA __BSS_START__,Y
    case 0xC4B8FD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:102 STA @LOCAL05
    case 0xC4B900: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4B859.asm:103 LDA @LOCAL00
    case 0xC4B902: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B859.asm:104 ASL
    case 0xC4B904: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:105 CLC
    case 0xC4B905: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:106 ADC @LOCAL08
    case 0xC4B906: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/unknown/C4/C4B859.asm:107 TAX
    case 0xC4B908: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B859.asm:108 LDA __BSS_START__,X
    case 0xC4B909: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:109 STA __BSS_START__,Y
    case 0xC4B90C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:110 LDA @LOCAL05
    case 0xC4B90F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4B859.asm:111 STA __BSS_START__,X
    case 0xC4B911: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4B859.asm:112 INC @VIRTUAL04
    case 0xC4B914: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4B859.asm:114 LDA @VIRTUAL04
    case 0xC4B916: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4B859.asm:115 CMP @LOCAL06
    case 0xC4B918: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4B859.asm:116 BCCL @UNKNOWN4
    case 0xC4B91A: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4B859.asm:116 BCCL @UNKNOWN4
    case 0xC4B91C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4B859.asm:116 BCCL @UNKNOWN4
    case 0xC4B91E: cpu.execute_instruction<0x4C>(0x00B8A1, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B859.asm:118 END_C_FUNCTION
    case 0xC4B921: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B859.asm:118 END_C_FUNCTION
    case 0xC4B922: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4B923.asm (unresolved).
bool execute_unresolved_c4_c4b923_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4B923.asm:3 BEGIN_C_FUNCTION
    case 0xC4B923: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC4B925: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC4B926: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC4B927: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC4B928: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B928.
    case 0xC4B92A: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC4B92B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4B923.asm:12 END_STACK_VARS
    case 0xC4B92C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:13 STX @LOCAL04
    case 0xC4B92D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4B923.asm:13 STX @LOCAL04
    // Overlapping static entry reached from 0xC4B92A.
    case 0xC4B92E: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:14 STA @VIRTUAL04
    case 0xC4B92F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:14 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC4B92E.
    case 0xC4B930: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:15 LDA #0
    case 0xC4B931: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4B930.
    case 0xC4B932: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4B923.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4B931.
    case 0xC4B933: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:16 STA @LOCAL03
    case 0xC4B934: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:17 BRA @UNKNOWN2
    case 0xC4B936: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B938: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B93B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B93D: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:19 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B940: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:20 LDA @LOCAL03
    case 0xC4B942: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:21 CLC
    case 0xC4B944: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:22 ADC @VIRTUAL06
    case 0xC4B945: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:23 STA @VIRTUAL06
    case 0xC4B947: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B949: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:25 LDA [@VIRTUAL06]
    case 0xC4B94B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:26 CMP #<-3
    case 0xC4B94D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:27 BEQ @UNKNOWN1
    case 0xC4B94F: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:27 BEQ @UNKNOWN1
    // Overlapping static entry reached from 0xC4B94D.
    case 0xC4B950: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:28 LDA #<-2
    case 0xC4B951: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0087FE, 3); return true;
    // src/unknown/C4/C4B923.asm:28 LDA #<-2
    // Overlapping static entry reached from 0xC4B950.
    case 0xC4B952: cpu.execute_instruction<0xFE>(0x000687, 3); return true;
    // src/unknown/C4/C4B923.asm:29 STA [@VIRTUAL06]
    case 0xC4B953: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:29 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B951.
    case 0xC4B954: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B923.asm:31 REP #PROC_FLAGS::ACCUM8
    case 0xC4B955: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:31 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4B954.
    case 0xC4B956: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C4B923.asm:32 LDA @LOCAL03
    case 0xC4B957: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:33 INC
    case 0xC4B959: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:34 STA @LOCAL03
    case 0xC4B95A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:36 CMP PATH_MATRIX_SIZE
    case 0xC4B95C: cpu.execute_instruction<0xCD>(0x00B406, 3); return true;
    // src/unknown/C4/C4B923.asm:37 BCC @UNKNOWN0
    case 0xC4B95F: cpu.execute_instruction<0x90>(0x0000D7, 2); return true;
    // src/unknown/C4/C4B923.asm:38 LDA #0
    case 0xC4B961: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:38 LDA #0
    // Overlapping static entry reached from 0xC4B961.
    case 0xC4B963: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:39 STA @VIRTUAL02
    case 0xC4B964: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:40 STA @LOCAL02
    case 0xC4B966: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B923.asm:41 JMP @UNKNOWN27
    case 0xC4B968: cpu.execute_instruction<0x4C>(0x00BAE9, 3); return true;
    // src/unknown/C4/C4B923.asm:43 LDA @VIRTUAL02
    case 0xC4B96B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:44 ASL
    case 0xC4B96D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:45 TAY
    case 0xC4B96E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:46 LDA (@LOCAL04),Y
    case 0xC4B96F: cpu.execute_instruction<0xB1>(0x000016, 2); return true;
    // src/unknown/C4/C4B923.asm:47 TAY
    case 0xC4B971: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:48 STY @LOCAL01
    case 0xC4B972: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4B923.asm:49 LDA __BSS_START__,Y
    case 0xC4B974: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:50 BNE @UNKNOWN5
    case 0xC4B977: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B979: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B97C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B97E: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:51 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B981: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:52 LDA a:pathfinder::origin + pathfinder_coords::y_coord,Y
    case 0xC4B983: cpu.execute_instruction<0xB9>(0x000006, 3); return true;
    // src/unknown/C4/C4B923.asm:53 LDY PATH_MATRIX_COLUMNS
    case 0xC4B986: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:54 JSL MULT16
    case 0xC4B989: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B923.asm:55 LDY @LOCAL01
    case 0xC4B98D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4B923.asm:56 CLC
    case 0xC4B98F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:57 ADC a:pathfinder::origin + pathfinder_coords::x_coord,Y
    case 0xC4B990: cpu.execute_instruction<0x79>(0x000008, 3); return true;
    // src/unknown/C4/C4B923.asm:58 CLC
    case 0xC4B993: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:59 ADC @VIRTUAL06
    case 0xC4B994: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:60 STA @VIRTUAL06
    case 0xC4B996: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:61 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B998: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:62 LDA [@VIRTUAL06]
    case 0xC4B99A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:63 CMP #<-3
    case 0xC4B99C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00D0FD, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    case 0xC4B99E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC4B99C.
    case 0xC4B99F: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    case 0xC4B9A0: cpu.execute_instruction<0x4C>(0x00BADD, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4B923.asm:64 BEQL @UNKNOWN26
    // Overlapping static entry reached from 0xC4B99F.
    case 0xC4B9A1: cpu.execute_instruction<0xDD>(0x00A9BA, 3); return true;
    // src/unknown/C4/C4B923.asm:65 LDA #<-1
    case 0xC4B9A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:65 LDA #<-1
    // Overlapping static entry reached from 0xC4B9A1.
    case 0xC4B9A4: cpu.execute_instruction<0xFF>(0x4C0687, 4); return true;
    // src/unknown/C4/C4B923.asm:66 STA [@VIRTUAL06]
    case 0xC4B9A5: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:66 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B9A3.
    case 0xC4B9A6: cpu.execute_instruction<0x06>(0x00004C, 2); return true;
    // src/unknown/C4/C4B923.asm:67 JMP @UNKNOWN26
    case 0xC4B9A7: cpu.execute_instruction<0x4C>(0x00BADD, 3); return true;
    // src/unknown/C4/C4B923.asm:67 JMP @UNKNOWN26
    // Overlapping static entry reached from 0xC4B9A6.
    case 0xC4B9A8: cpu.execute_instruction<0xDD>(0x00A9BA, 3); return true;
    // src/unknown/C4/C4B923.asm:70 LDA #0
    case 0xC4B9AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:70 LDA #0
    // Overlapping static entry reached from 0xC4B9A8.
    case 0xC4B9AB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4B923.asm:70 LDA #0
    // Overlapping static entry reached from 0xC4B9AA.
    case 0xC4B9AC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:71 STA @LOCAL00
    case 0xC4B9AD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:72 BRA @UNKNOWN10
    case 0xC4B9AF: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:74 LDX #0
    case 0xC4B9B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:74 LDX #0
    // Overlapping static entry reached from 0xC4B9B1.
    case 0xC4B9B3: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B923.asm:75 BRA @UNKNOWN9
    case 0xC4B9B4: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C4/C4B923.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4B9B6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B9B8: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B9BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B9BD: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:78 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4B9C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:79 STX @VIRTUAL02
    case 0xC4B9C2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:80 LDY PATH_MATRIX_COLUMNS
    case 0xC4B9C4: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:81 LDA @LOCAL00
    case 0xC4B9C7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:82 JSL MULT16
    case 0xC4B9C9: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B923.asm:83 CLC
    case 0xC4B9CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:84 ADC @VIRTUAL02
    case 0xC4B9CE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:85 CLC
    case 0xC4B9D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:86 ADC @VIRTUAL06
    case 0xC4B9D1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:87 STA @VIRTUAL06
    case 0xC4B9D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:88 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B9D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:89 LDA [@VIRTUAL06]
    case 0xC4B9D7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:90 CMP #<-3
    case 0xC4B9D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:91 BEQ @UNKNOWN8
    case 0xC4B9DB: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:91 BEQ @UNKNOWN8
    // Overlapping static entry reached from 0xC4B9D9.
    case 0xC4B9DC: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:92 LDA #<-1
    case 0xC4B9DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:92 LDA #<-1
    // Overlapping static entry reached from 0xC4B9DC.
    case 0xC4B9DE: cpu.execute_instruction<0xFF>(0xE80687, 4); return true;
    // src/unknown/C4/C4B923.asm:93 STA [@VIRTUAL06]
    case 0xC4B9DF: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:93 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4B9DD.
    case 0xC4B9E0: cpu.execute_instruction<0x06>(0x0000E8, 2); return true;
    // src/unknown/C4/C4B923.asm:95 INX
    case 0xC4B9E1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:97 CPX PATH_MATRIX_COLUMNS
    case 0xC4B9E2: cpu.execute_instruction<0xEC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:98 BCC @UNKNOWN7
    case 0xC4B9E5: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C4/C4B923.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC4B9E7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:100 LDA @LOCAL00
    case 0xC4B9E9: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:101 INC
    case 0xC4B9EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:102 STA @LOCAL00
    case 0xC4B9EC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:104 CMP PATH_MATRIX_BORDER
    case 0xC4B9EE: cpu.execute_instruction<0xCD>(0x00B404, 3); return true;
    // src/unknown/C4/C4B923.asm:105 BCC @UNKNOWN6
    case 0xC4B9F1: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:106 LDA PATH_MATRIX_ROWS
    case 0xC4B9F3: cpu.execute_instruction<0xAD>(0x00B400, 3); return true;
    // src/unknown/C4/C4B923.asm:107 SEC
    case 0xC4B9F6: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:108 SBC PATH_MATRIX_BORDER
    case 0xC4B9F7: cpu.execute_instruction<0xED>(0x00B404, 3); return true;
    // src/unknown/C4/C4B923.asm:109 STA @LOCAL00
    case 0xC4B9FA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:110 BRA @UNKNOWN15
    case 0xC4B9FC: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:112 LDX #0
    case 0xC4B9FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:112 LDX #0
    // Overlapping static entry reached from 0xC4B9FE.
    case 0xC4BA00: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B923.asm:113 BRA @UNKNOWN14
    case 0xC4BA01: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C4/C4B923.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC4BA03: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA05: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA08: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA0A: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:116 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA0D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:117 STX @VIRTUAL02
    case 0xC4BA0F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:118 LDY PATH_MATRIX_COLUMNS
    case 0xC4BA11: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:119 LDA @LOCAL00
    case 0xC4BA14: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:120 JSL MULT16
    case 0xC4BA16: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B923.asm:121 CLC
    case 0xC4BA1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:122 ADC @VIRTUAL02
    case 0xC4BA1B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:123 CLC
    case 0xC4BA1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:124 ADC @VIRTUAL06
    case 0xC4BA1E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:125 STA @VIRTUAL06
    case 0xC4BA20: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BA22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:127 LDA [@VIRTUAL06]
    case 0xC4BA24: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:128 CMP #<-3
    case 0xC4BA26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:129 BEQ @UNKNOWN13
    case 0xC4BA28: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:129 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xC4BA26.
    case 0xC4BA29: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:130 LDA #<-1
    case 0xC4BA2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:130 LDA #<-1
    // Overlapping static entry reached from 0xC4BA29.
    case 0xC4BA2B: cpu.execute_instruction<0xFF>(0xE80687, 4); return true;
    // src/unknown/C4/C4B923.asm:131 STA [@VIRTUAL06]
    case 0xC4BA2C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:131 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4BA2A.
    case 0xC4BA2D: cpu.execute_instruction<0x06>(0x0000E8, 2); return true;
    // src/unknown/C4/C4B923.asm:133 INX
    case 0xC4BA2E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:135 CPX PATH_MATRIX_COLUMNS
    case 0xC4BA2F: cpu.execute_instruction<0xEC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:136 BCC @UNKNOWN12
    case 0xC4BA32: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C4/C4B923.asm:137 REP #PROC_FLAGS::ACCUM8
    case 0xC4BA34: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:138 LDA @LOCAL00
    case 0xC4BA36: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:139 INC
    case 0xC4BA38: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:140 STA @LOCAL00
    case 0xC4BA39: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4B923.asm:142 CMP PATH_MATRIX_ROWS
    case 0xC4BA3B: cpu.execute_instruction<0xCD>(0x00B400, 3); return true;
    // src/unknown/C4/C4B923.asm:143 BCC @UNKNOWN11
    case 0xC4BA3E: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:144 LDX #0
    case 0xC4BA40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:144 LDX #0
    // Overlapping static entry reached from 0xC4BA40.
    case 0xC4BA42: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4B923.asm:145 BRA @UNKNOWN20
    case 0xC4BA43: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:147 LDA #0
    case 0xC4BA45: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:147 LDA #0
    // Overlapping static entry reached from 0xC4BA45.
    case 0xC4BA47: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:148 STA @LOCAL03
    case 0xC4BA48: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:149 BRA @UNKNOWN19
    case 0xC4BA4A: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA4C: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA4F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA51: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:151 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA54: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:152 STX @VIRTUAL02
    case 0xC4BA56: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:153 LDY PATH_MATRIX_COLUMNS
    case 0xC4BA58: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:154 LDA @LOCAL03
    case 0xC4BA5B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:155 JSL MULT16
    case 0xC4BA5D: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B923.asm:156 CLC
    case 0xC4BA61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:157 ADC @VIRTUAL02
    case 0xC4BA62: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:158 CLC
    case 0xC4BA64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:159 ADC @VIRTUAL06
    case 0xC4BA65: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:160 STA @VIRTUAL06
    case 0xC4BA67: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:161 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BA69: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:162 LDA [@VIRTUAL06]
    case 0xC4BA6B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:163 CMP #<-3
    case 0xC4BA6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:164 BEQ @UNKNOWN18
    case 0xC4BA6F: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:164 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC4BA6D.
    case 0xC4BA70: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:165 LDA #<-1
    case 0xC4BA71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:165 LDA #<-1
    // Overlapping static entry reached from 0xC4BA70.
    case 0xC4BA72: cpu.execute_instruction<0xFF>(0xC20687, 4); return true;
    // src/unknown/C4/C4B923.asm:166 STA [@VIRTUAL06]
    case 0xC4BA73: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:166 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4BA71.
    case 0xC4BA74: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B923.asm:168 REP #PROC_FLAGS::ACCUM8
    case 0xC4BA75: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:168 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BA74.
    case 0xC4BA76: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C4B923.asm:169 LDA @LOCAL03
    case 0xC4BA77: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:170 INC
    case 0xC4BA79: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:171 STA @LOCAL03
    case 0xC4BA7A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:173 CMP PATH_MATRIX_ROWS
    case 0xC4BA7C: cpu.execute_instruction<0xCD>(0x00B400, 3); return true;
    // src/unknown/C4/C4B923.asm:174 BCC @UNKNOWN17
    case 0xC4BA7F: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C4/C4B923.asm:175 INX
    case 0xC4BA81: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:177 CPX PATH_MATRIX_BORDER
    case 0xC4BA82: cpu.execute_instruction<0xEC>(0x00B404, 3); return true;
    // src/unknown/C4/C4B923.asm:178 BCC @UNKNOWN16
    case 0xC4BA85: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:179 LDA PATH_MATRIX_COLUMNS
    case 0xC4BA87: cpu.execute_instruction<0xAD>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:180 SEC
    case 0xC4BA8A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:181 SBC PATH_MATRIX_BORDER
    case 0xC4BA8B: cpu.execute_instruction<0xED>(0x00B404, 3); return true;
    // src/unknown/C4/C4B923.asm:182 TAX
    case 0xC4BA8E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:183 BRA @UNKNOWN25
    case 0xC4BA8F: cpu.execute_instruction<0x80>(0x00003D, 2); return true;
    // src/unknown/C4/C4B923.asm:185 LDA #0
    case 0xC4BA91: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4B923.asm:185 LDA #0
    // Overlapping static entry reached from 0xC4BA91.
    case 0xC4BA93: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4B923.asm:186 STA @LOCAL03
    case 0xC4BA94: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:187 BRA @UNKNOWN24
    case 0xC4BA96: cpu.execute_instruction<0x80>(0x000030, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA98: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA9B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BA9D: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4B923.asm:189 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BAA0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4B923.asm:190 STX @VIRTUAL02
    case 0xC4BAA2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:191 LDY PATH_MATRIX_COLUMNS
    case 0xC4BAA4: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:192 LDA @LOCAL03
    case 0xC4BAA7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:193 JSL MULT16
    case 0xC4BAA9: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4B923.asm:194 CLC
    case 0xC4BAAD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:195 ADC @VIRTUAL02
    case 0xC4BAAE: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:196 CLC
    case 0xC4BAB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:197 ADC @VIRTUAL06
    case 0xC4BAB1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:198 STA @VIRTUAL06
    case 0xC4BAB3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:199 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BAB5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:200 LDA [@VIRTUAL06]
    case 0xC4BAB7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:201 CMP #<-3
    case 0xC4BAB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00F0FD, 3); return true;
    // src/unknown/C4/C4B923.asm:202 BEQ @UNKNOWN23
    case 0xC4BABB: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4B923.asm:202 BEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC4BAB9.
    case 0xC4BABC: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4B923.asm:203 LDA #<-1
    case 0xC4BABD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0087FF, 3); return true;
    // src/unknown/C4/C4B923.asm:203 LDA #<-1
    // Overlapping static entry reached from 0xC4BABC.
    case 0xC4BABE: cpu.execute_instruction<0xFF>(0xC20687, 4); return true;
    // src/unknown/C4/C4B923.asm:204 STA [@VIRTUAL06]
    case 0xC4BABF: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4B923.asm:204 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4BABD.
    case 0xC4BAC0: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4B923.asm:206 REP #PROC_FLAGS::ACCUM8
    case 0xC4BAC1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:206 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BAC0.
    case 0xC4BAC2: cpu.execute_instruction<0x20>(0x0014A5, 3); return true;
    // src/unknown/C4/C4B923.asm:207 LDA @LOCAL03
    case 0xC4BAC3: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:208 INC
    case 0xC4BAC5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:209 STA @LOCAL03
    case 0xC4BAC6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4B923.asm:211 CMP PATH_MATRIX_ROWS
    case 0xC4BAC8: cpu.execute_instruction<0xCD>(0x00B400, 3); return true;
    // src/unknown/C4/C4B923.asm:212 BCC @UNKNOWN22
    case 0xC4BACB: cpu.execute_instruction<0x90>(0x0000CB, 2); return true;
    // src/unknown/C4/C4B923.asm:213 INX
    case 0xC4BACD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:215 CPX PATH_MATRIX_COLUMNS
    case 0xC4BACE: cpu.execute_instruction<0xEC>(0x00B402, 3); return true;
    // src/unknown/C4/C4B923.asm:216 BCC @UNKNOWN21
    case 0xC4BAD1: cpu.execute_instruction<0x90>(0x0000BE, 2); return true;
    // src/unknown/C4/C4B923.asm:217 LDY @LOCAL01
    case 0xC4BAD3: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4B923.asm:218 TYX
    case 0xC4BAD5: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:219 STZ a:pathfinder::origin + pathfinder_coords::y_coord,X
    case 0xC4BAD6: cpu.execute_instruction<0x9E>(0x000006, 3); return true;
    // src/unknown/C4/C4B923.asm:220 TYX
    case 0xC4BAD9: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4B923.asm:221 STZ a:pathfinder::origin + pathfinder_coords::x_coord,X
    case 0xC4BADA: cpu.execute_instruction<0x9E>(0x000008, 3); return true;
    // src/unknown/C4/C4B923.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC4BADD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4B923.asm:224 LDA @LOCAL02
    case 0xC4BADF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4B923.asm:225 STA @VIRTUAL02
    case 0xC4BAE1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:226 INC @VIRTUAL02
    case 0xC4BAE3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:227 LDA @VIRTUAL02
    case 0xC4BAE5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:228 STA @LOCAL02
    case 0xC4BAE7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4B923.asm:230 LDA @VIRTUAL02
    case 0xC4BAE9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4B923.asm:231 CMP @VIRTUAL04
    case 0xC4BAEB: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4B923.asm:232 BCCL @UNKNOWN3
    case 0xC4BAED: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4B923.asm:232 BCCL @UNKNOWN3
    case 0xC4BAEF: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4B923.asm:232 BCCL @UNKNOWN3
    case 0xC4BAF1: cpu.execute_instruction<0x4C>(0x00B96B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4B923.asm:233 END_C_FUNCTION
    case 0xC4BAF4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4B923.asm:233 END_C_FUNCTION
    case 0xC4BAF5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4BAF6.asm (unresolved).
bool execute_unresolved_c4_c4baf6_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4BAF6.asm:3 BEGIN_C_FUNCTION
    case 0xC4BAF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    case 0xC4BAF8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    case 0xC4BAF9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    case 0xC4BAFA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    case 0xC4BAFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DB, 2); else cpu.execute_instruction<0x69>(0x00FFDB, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BAFB.
    case 0xC4BAFD: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    case 0xC4BAFE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4BAF6.asm:23 END_STACK_VARS
    case 0xC4BAFF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:24 STY @LOCAL0B
    case 0xC4BB00: cpu.execute_instruction<0x84>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6.asm:24 STY @LOCAL0B
    // Overlapping static entry reached from 0xC4BAFD.
    case 0xC4BB01: cpu.execute_instruction<0x23>(0x000086, 2); return true;
    // src/unknown/C4/C4BAF6.asm:25 STX @VIRTUAL04
    case 0xC4BB02: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:25 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4BB01.
    case 0xC4BB03: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6.asm:26 STA @VIRTUAL02
    case 0xC4BB04: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:26 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4BB03.
    case 0xC4BB05: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6.asm:27 STA @LOCAL0A
    case 0xC4BB06: cpu.execute_instruction<0x85>(0x000021, 2); return true;
    // src/unknown/C4/C4BAF6.asm:28 LDY @PARAM05
    case 0xC4BB08: cpu.execute_instruction<0xA4>(0x000037, 2); return true;
    // src/unknown/C4/C4BAF6.asm:29 STY @LOCAL09
    case 0xC4BB0A: cpu.execute_instruction<0x84>(0x00001F, 2); return true;
    // src/unknown/C4/C4BAF6.asm:30 LDA @PARAM04
    case 0xC4BB0C: cpu.execute_instruction<0xA5>(0x000035, 2); return true;
    // src/unknown/C4/C4BAF6.asm:31 STA @LOCAL08
    case 0xC4BB0E: cpu.execute_instruction<0x85>(0x00001D, 2); return true;
    // src/unknown/C4/C4BAF6.asm:32 LDX @PARAM03
    case 0xC4BB10: cpu.execute_instruction<0xA6>(0x000033, 2); return true;
    // src/unknown/C4/C4BAF6.asm:33 STX @LOCAL07
    case 0xC4BB12: cpu.execute_instruction<0x86>(0x00001B, 2); return true;
    // src/unknown/C4/C4BAF6.asm:34 LDY #2
    case 0xC4BB14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4BAF6.asm:34 LDY #2
    // Overlapping static entry reached from 0xC4BB14.
    case 0xC4BB16: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C4BAF6.asm:35 LDA (@LOCAL0B),Y
    case 0xC4BB17: cpu.execute_instruction<0xB1>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6.asm:36 STA @LOCAL06
    case 0xC4BB19: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/unknown/C4/C4BAF6.asm:37 LDY #4
    case 0xC4BB1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4BAF6.asm:37 LDY #4
    // Overlapping static entry reached from 0xC4BB1B.
    case 0xC4BB1D: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/unknown/C4/C4BAF6.asm:38 LDA (@LOCAL0B),Y
    case 0xC4BB1E: cpu.execute_instruction<0xB1>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6.asm:39 STA @LOCAL05
    case 0xC4BB20: cpu.execute_instruction<0x85>(0x000017, 2); return true;
    // src/unknown/C4/C4BAF6.asm:40 STZ @LOCAL04
    case 0xC4BB22: cpu.execute_instruction<0x64>(0x000015, 2); return true;
    // src/unknown/C4/C4BAF6.asm:41 STZ @LOCAL03
    case 0xC4BB24: cpu.execute_instruction<0x64>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6.asm:42 LDX PATH_SEARCH_TEMP_START
    case 0xC4BB26: cpu.execute_instruction<0xAE>(0x00B408, 3); return true;
    // src/unknown/C4/C4BAF6.asm:43 STX PATH_SEARCH_TEMP_B
    case 0xC4BB29: cpu.execute_instruction<0x8E>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:44 STX PATH_SEARCH_TEMP_A
    case 0xC4BB2C: cpu.execute_instruction<0x8E>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:45 LDA #0
    case 0xC4BB2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:45 LDA #0
    // Overlapping static entry reached from 0xC4BB2F.
    case 0xC4BB31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6.asm:46 STA @LOCAL02
    case 0xC4BB32: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:47 BRA @UNKNOWN3
    case 0xC4BB34: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C4BAF6.asm:49 ASL
    case 0xC4BB36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:50 ASL
    case 0xC4BB37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:51 STA @VIRTUAL02
    case 0xC4BB38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:52 LDA @VIRTUAL04
    case 0xC4BB3A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:53 CLC
    case 0xC4BB3C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:54 ADC @VIRTUAL02
    case 0xC4BB3D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:55 TAX
    case 0xC4BB3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:56 LDY PATH_MATRIX_COLUMNS
    case 0xC4BB40: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BAF6.asm:57 LDA __BSS_START__,X
    case 0xC4BB43: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:58 JSL MULT16
    case 0xC4BB46: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4BAF6.asm:59 CLC
    case 0xC4BB4A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:60 ADC __BSS_START__+2,X
    case 0xC4BB4B: cpu.execute_instruction<0x7D>(0x000002, 3); return true;
    // src/unknown/C4/C4BAF6.asm:61 LDX PATH_SEARCH_TEMP_B
    case 0xC4BB4E: cpu.execute_instruction<0xAE>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:62 STA __BSS_START__,X
    case 0xC4BB51: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:63 LDA PATH_SEARCH_TEMP_B
    case 0xC4BB54: cpu.execute_instruction<0xAD>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:64 CMP PATH_SEARCH_TEMP_END
    case 0xC4BB57: cpu.execute_instruction<0xCD>(0x00B40A, 3); return true;
    // src/unknown/C4/C4BAF6.asm:65 BNE @UNKNOWN1
    case 0xC4BB5A: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:66 LDX PATH_SEARCH_TEMP_START
    case 0xC4BB5C: cpu.execute_instruction<0xAE>(0x00B408, 3); return true;
    // src/unknown/C4/C4BAF6.asm:67 BRA @UNKNOWN2
    case 0xC4BB5F: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:69 LDX PATH_SEARCH_TEMP_B
    case 0xC4BB61: cpu.execute_instruction<0xAE>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:70 INX
    case 0xC4BB64: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:71 INX
    case 0xC4BB65: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:73 STX PATH_SEARCH_TEMP_B
    case 0xC4BB66: cpu.execute_instruction<0x8E>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:74 LDA @LOCAL02
    case 0xC4BB69: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:75 INC
    case 0xC4BB6B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:76 STA @LOCAL02
    case 0xC4BB6C: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:78 LDX @LOCAL0A
    case 0xC4BB6E: cpu.execute_instruction<0xA6>(0x000021, 2); return true;
    // src/unknown/C4/C4BAF6.asm:79 STX @VIRTUAL02
    case 0xC4BB70: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:80 CMP @VIRTUAL02
    case 0xC4BB72: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:81 BCC @UNKNOWN0
    case 0xC4BB74: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:82 JMP @UNKNOWN30
    case 0xC4BB76: cpu.execute_instruction<0x4C>(0x00BD8B, 3); return true;
    // src/unknown/C4/C4BAF6.asm:84 LDX PATH_SEARCH_TEMP_A
    case 0xC4BB79: cpu.execute_instruction<0xAE>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:85 LDA __BSS_START__,X
    case 0xC4BB7C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:86 STA @VIRTUAL02
    case 0xC4BB7F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:87 LDA PATH_SEARCH_TEMP_A
    case 0xC4BB81: cpu.execute_instruction<0xAD>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:88 CMP PATH_SEARCH_TEMP_END
    case 0xC4BB84: cpu.execute_instruction<0xCD>(0x00B40A, 3); return true;
    // src/unknown/C4/C4BAF6.asm:89 BNE @UNKNOWN5
    case 0xC4BB87: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:90 LDX PATH_SEARCH_TEMP_START
    case 0xC4BB89: cpu.execute_instruction<0xAE>(0x00B408, 3); return true;
    // src/unknown/C4/C4BAF6.asm:91 BRA @UNKNOWN6
    case 0xC4BB8C: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:93 LDX PATH_SEARCH_TEMP_A
    case 0xC4BB8E: cpu.execute_instruction<0xAE>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:94 INX
    case 0xC4BB91: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:95 INX
    case 0xC4BB92: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:97 STX PATH_SEARCH_TEMP_A
    case 0xC4BB93: cpu.execute_instruction<0x8E>(0x00B40C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:98 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BB96: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:98 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BB99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:98 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BB9B: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:98 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BB9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:99 LDA @VIRTUAL02
    case 0xC4BBA0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:100 CLC
    case 0xC4BBA2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:101 ADC @VIRTUAL06
    case 0xC4BBA3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:102 STA @VIRTUAL06
    case 0xC4BBA5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BBA7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:104 LDA [@VIRTUAL06]
    case 0xC4BBA9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:105 STA @VIRTUAL00
    case 0xC4BBAB: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:106 CMP #<-2
    case 0xC4BBAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x00B0FE, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    case 0xC4BBAF: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC4BBAD.
    case 0xC4BBB0: cpu.execute_instruction<0x05>(0x0000F0, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    case 0xC4BBB1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC4BBB0.
    case 0xC4BBB2: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    case 0xC4BBB3: cpu.execute_instruction<0x4C>(0x00BD8B, 3); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC4BBB2.
    case 0xC4BBB4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:107 BCCL @UNKNOWN30
    // Overlapping static entry reached from 0xC4BBB4.
    case 0xC4BBB5: cpu.execute_instruction<0xBD>(0x0001A0, 3); return true;
    // src/unknown/C4/C4BAF6.asm:108 LDY #1
    case 0xC4BBB6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4BAF6.asm:108 LDY #1
    // Overlapping static entry reached from 0xC4BBB6.
    case 0xC4BBB8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/unknown/C4/C4BAF6.asm:109 LDX @VIRTUAL02
    case 0xC4BBB9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:110 REP #PROC_FLAGS::ACCUM8
    case 0xC4BBBB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:111 LDA #0
    case 0xC4BBBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:111 LDA #0
    // Overlapping static entry reached from 0xC4BBBD.
    case 0xC4BBBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6.asm:112 STA @LOCAL02
    case 0xC4BBC0: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:113 BRA @UNKNOWN12
    case 0xC4BBC2: cpu.execute_instruction<0x80>(0x00003C, 2); return true;
    // src/unknown/C4/C4BAF6.asm:115 LDA #0
    case 0xC4BBC4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:115 LDA #0
    // Overlapping static entry reached from 0xC4BBC4.
    case 0xC4BBC6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6.asm:116 STA @VIRTUAL04
    case 0xC4BBC7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:117 BRA @UNKNOWN11
    case 0xC4BBC9: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:119 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BBCB: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:119 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BBCE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:119 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BBD0: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:119 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BBD3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:120 TXA
    case 0xC4BBD5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:121 CLC
    case 0xC4BBD6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:122 ADC @VIRTUAL04
    case 0xC4BBD7: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:123 CLC
    case 0xC4BBD9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:124 ADC @VIRTUAL06
    case 0xC4BBDA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:125 STA @VIRTUAL06
    case 0xC4BBDC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:126 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BBDE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:127 LDA [@VIRTUAL06]
    case 0xC4BBE0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:128 CMP #<-3
    case 0xC4BBE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FD, 2); else cpu.execute_instruction<0xC9>(0x00D0FD, 3); return true;
    // src/unknown/C4/C4BAF6.asm:129 BNE @UNKNOWN10
    case 0xC4BBE4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:129 BNE @UNKNOWN10
    // Overlapping static entry reached from 0xC4BBE2.
    case 0xC4BBE5: cpu.execute_instruction<0x05>(0x0000A0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:130 LDY #0
    case 0xC4BBE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4BBE5.
    case 0xC4BBE7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:130 LDY #0
    // Overlapping static entry reached from 0xC4BBE6.
    case 0xC4BBE8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4BAF6.asm:131 BRA @UNKNOWN13
    case 0xC4BBE9: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4BAF6.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC4BBEB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:134 INC @VIRTUAL04
    case 0xC4BBED: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:136 LDA @VIRTUAL04
    case 0xC4BBEF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:137 CMP @LOCAL05
    case 0xC4BBF1: cpu.execute_instruction<0xC5>(0x000017, 2); return true;
    // src/unknown/C4/C4BAF6.asm:138 BCC @UNKNOWN9
    case 0xC4BBF3: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // src/unknown/C4/C4BAF6.asm:139 TXA
    case 0xC4BBF5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:140 CLC
    case 0xC4BBF6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:141 ADC PATH_MATRIX_COLUMNS
    case 0xC4BBF7: cpu.execute_instruction<0x6D>(0x00B402, 3); return true;
    // src/unknown/C4/C4BAF6.asm:142 TAX
    case 0xC4BBFA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:143 LDA @LOCAL02
    case 0xC4BBFB: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:144 INC
    case 0xC4BBFD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:145 STA @LOCAL02
    case 0xC4BBFE: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:147 CMP @LOCAL06
    case 0xC4BC00: cpu.execute_instruction<0xC5>(0x000019, 2); return true;
    // src/unknown/C4/C4BAF6.asm:148 BCC @UNKNOWN8
    case 0xC4BC02: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:150 CPY #0
    case 0xC4BC04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:150 CPY #0
    // Overlapping static entry reached from 0xC4BC04.
    case 0xC4BC06: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:151 BNE @UNKNOWN14
    case 0xC4BC07: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C4/C4BAF6.asm:152 REP #PROC_FLAGS::ACCUM8
    case 0xC4BC09: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:153 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC0B: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:153 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:153 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC10: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:153 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:154 LDA @VIRTUAL02
    case 0xC4BC15: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:155 CLC
    case 0xC4BC17: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:156 ADC @VIRTUAL06
    case 0xC4BC18: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:157 STA @VIRTUAL06
    case 0xC4BC1A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:158 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BC1C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:159 LDA #<-4
    case 0xC4BC1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0087FC, 3); return true;
    // src/unknown/C4/C4BAF6.asm:160 STA [@VIRTUAL06]
    case 0xC4BC20: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:160 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4BC1E.
    case 0xC4BC21: cpu.execute_instruction<0x06>(0x00004C, 2); return true;
    // src/unknown/C4/C4BAF6.asm:161 JMP @UNKNOWN30
    case 0xC4BC22: cpu.execute_instruction<0x4C>(0x00BD8B, 3); return true;
    // src/unknown/C4/C4BAF6.asm:161 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC4BC21.
    case 0xC4BC23: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:161 JMP @UNKNOWN30
    // Overlapping static entry reached from 0xC4BC23.
    case 0xC4BC24: cpu.execute_instruction<0xBD>(0x0020E2, 3); return true;
    // src/unknown/C4/C4BAF6.asm:163 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BC25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:164 LDA @VIRTUAL00
    case 0xC4BC27: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:165 CMP #<-1
    case 0xC4BC29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00D0FF, 3); return true;
    // src/unknown/C4/C4BAF6.asm:166 BNE @UNKNOWN15
    case 0xC4BC2B: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/unknown/C4/C4BAF6.asm:166 BNE @UNKNOWN15
    // Overlapping static entry reached from 0xC4BC29.
    case 0xC4BC2C: cpu.execute_instruction<0x27>(0x0000C2, 2); return true;
    // src/unknown/C4/C4BAF6.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4BC2D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:167 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BC2C.
    case 0xC4BC2E: cpu.execute_instruction<0x20>(0x0015E6, 3); return true;
    // src/unknown/C4/C4BAF6.asm:168 INC @LOCAL04
    case 0xC4BC2F: cpu.execute_instruction<0xE6>(0x000015, 2); return true;
    // src/unknown/C4/C4BAF6.asm:169 LDA (@LOCAL0B)
    case 0xC4BC31: cpu.execute_instruction<0xB2>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6.asm:170 CMP #1
    case 0xC4BC33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4BAF6.asm:170 CMP #1
    // Overlapping static entry reached from 0xC4BC33.
    case 0xC4BC35: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:171 BNE @UNKNOWN15
    case 0xC4BC36: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/unknown/C4/C4BAF6.asm:172 LDY PATH_MATRIX_COLUMNS
    case 0xC4BC38: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BAF6.asm:173 LDA @VIRTUAL02
    case 0xC4BC3B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:174 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4BC3D: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C4BAF6.asm:175 LDY #6
    case 0xC4BC41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4BAF6.asm:175 LDY #6
    // Overlapping static entry reached from 0xC4BC41.
    case 0xC4BC43: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C4BAF6.asm:176 STA (@LOCAL0B),Y
    case 0xC4BC44: cpu.execute_instruction<0x91>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6.asm:177 LDY PATH_MATRIX_COLUMNS
    case 0xC4BC46: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BAF6.asm:178 LDA @VIRTUAL02
    case 0xC4BC49: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:179 JSL MODULUS16
    case 0xC4BC4B: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C4BAF6.asm:180 LDY #8
    case 0xC4BC4F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4BAF6.asm:180 LDY #8
    // Overlapping static entry reached from 0xC4BC4F.
    case 0xC4BC51: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C4BAF6.asm:181 STA (@LOCAL0B),Y
    case 0xC4BC52: cpu.execute_instruction<0x91>(0x000023, 2); return true;
    // src/unknown/C4/C4BAF6.asm:183 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BC54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:184 LDA #<-4
    case 0xC4BC56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0085FC, 3); return true;
    // src/unknown/C4/C4BAF6.asm:185 STA @VIRTUAL00
    case 0xC4BC58: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:185 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC4BC56.
    case 0xC4BC59: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4BAF6.asm:186 LDX #0
    case 0xC4BC5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:186 LDX #0
    // Overlapping static entry reached from 0xC4BC5A.
    case 0xC4BC5C: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4BAF6.asm:187 STX @LOCAL01
    case 0xC4BC5D: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6.asm:188 JMP @UNKNOWN23
    case 0xC4BC5F: cpu.execute_instruction<0x4C>(0x00BCE9, 3); return true;
    // src/unknown/C4/C4BAF6.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC4BC62: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:191 TXA
    case 0xC4BC64: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:192 ASL
    case 0xC4BC65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:193 TAX
    case 0xC4BC66: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:194 LDA @VIRTUAL02
    case 0xC4BC67: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:195 CLC
    case 0xC4BC69: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:196 ADC PATH_CARDINAL_OFFSET,X
    case 0xC4BC6A: cpu.execute_instruction<0x7D>(0x00B410, 3); return true;
    // src/unknown/C4/C4BAF6.asm:197 STA @LOCAL02
    case 0xC4BC6D: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:198 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC6F: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:198 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC72: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:198 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC74: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:198 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BC77: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:199 LDA @LOCAL02
    case 0xC4BC79: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:200 CLC
    case 0xC4BC7B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:201 ADC @VIRTUAL06
    case 0xC4BC7C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:202 STA @VIRTUAL06
    case 0xC4BC7E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:203 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BC80: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:204 LDA [@VIRTUAL06]
    case 0xC4BC82: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:205 STA @VIRTUAL01
    case 0xC4BC84: cpu.execute_instruction<0x85>(0x000001, 2); return true;
    // src/unknown/C4/C4BAF6.asm:206 CMP #<-2
    case 0xC4BC86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x0090FE, 3); return true;
    // src/unknown/C4/C4BAF6.asm:207 BCC @UNKNOWN21
    case 0xC4BC88: cpu.execute_instruction<0x90>(0x00004E, 2); return true;
    // src/unknown/C4/C4BAF6.asm:207 BCC @UNKNOWN21
    // Overlapping static entry reached from 0xC4BC86.
    case 0xC4BC89: cpu.execute_instruction<0x4E>(0x0020C2, 3); return true;
    // src/unknown/C4/C4BAF6.asm:208 REP #PROC_FLAGS::ACCUM8
    case 0xC4BC8A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:209 LDA PATH_SEARCH_TEMP_A
    case 0xC4BC8C: cpu.execute_instruction<0xAD>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:210 CMP PATH_SEARCH_TEMP_START
    case 0xC4BC8F: cpu.execute_instruction<0xCD>(0x00B408, 3); return true;
    // src/unknown/C4/C4BAF6.asm:211 BNE @UNKNOWN17
    case 0xC4BC92: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/unknown/C4/C4BAF6.asm:212 LDY #0
    case 0xC4BC94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:212 LDY #0
    // Overlapping static entry reached from 0xC4BC94.
    case 0xC4BC96: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4BAF6.asm:213 LDA PATH_SEARCH_TEMP_B
    case 0xC4BC97: cpu.execute_instruction<0xAD>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:214 CMP PATH_SEARCH_TEMP_END
    case 0xC4BC9A: cpu.execute_instruction<0xCD>(0x00B40A, 3); return true;
    // src/unknown/C4/C4BAF6.asm:215 BNE @UNKNOWN18
    case 0xC4BC9D: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // src/unknown/C4/C4BAF6.asm:216 LDY #1
    case 0xC4BC9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4BAF6.asm:216 LDY #1
    // Overlapping static entry reached from 0xC4BC9F.
    case 0xC4BCA1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4BAF6.asm:217 BRA @UNKNOWN18
    case 0xC4BCA2: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C4BAF6.asm:219 LDY #0
    case 0xC4BCA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:219 LDY #0
    // Overlapping static entry reached from 0xC4BCA4.
    case 0xC4BCA6: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4BAF6.asm:220 LDA PATH_SEARCH_TEMP_B
    case 0xC4BCA7: cpu.execute_instruction<0xAD>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:221 INC
    case 0xC4BCAA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:222 INC
    case 0xC4BCAB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:223 CMP PATH_SEARCH_TEMP_A
    case 0xC4BCAC: cpu.execute_instruction<0xCD>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:224 BNE @UNKNOWN18
    case 0xC4BCAF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/unknown/C4/C4BAF6.asm:225 LDY #1
    case 0xC4BCB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4BAF6.asm:225 LDY #1
    // Overlapping static entry reached from 0xC4BCB1.
    case 0xC4BCB3: cpu.execute_instruction<0x00>(0x0000C0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:227 CPY #0
    case 0xC4BCB4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:227 CPY #0
    // Overlapping static entry reached from 0xC4BCB4.
    case 0xC4BCB6: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:228 BNE @UNKNOWN22
    case 0xC4BCB7: cpu.execute_instruction<0xD0>(0x00002B, 2); return true;
    // src/unknown/C4/C4BAF6.asm:229 LDA @LOCAL02
    case 0xC4BCB9: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:230 LDX PATH_SEARCH_TEMP_B
    case 0xC4BCBB: cpu.execute_instruction<0xAE>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:231 STA __BSS_START__,X
    case 0xC4BCBE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:232 LDA PATH_SEARCH_TEMP_B
    case 0xC4BCC1: cpu.execute_instruction<0xAD>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:233 CMP PATH_SEARCH_TEMP_END
    case 0xC4BCC4: cpu.execute_instruction<0xCD>(0x00B40A, 3); return true;
    // src/unknown/C4/C4BAF6.asm:234 BNE @UNKNOWN19
    case 0xC4BCC7: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:235 LDY PATH_SEARCH_TEMP_START
    case 0xC4BCC9: cpu.execute_instruction<0xAC>(0x00B408, 3); return true;
    // src/unknown/C4/C4BAF6.asm:236 BRA @UNKNOWN20
    case 0xC4BCCC: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/unknown/C4/C4BAF6.asm:238 LDY PATH_SEARCH_TEMP_B
    case 0xC4BCCE: cpu.execute_instruction<0xAC>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:239 INY
    case 0xC4BCD1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:240 INY
    case 0xC4BCD2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:242 STY PATH_SEARCH_TEMP_B
    case 0xC4BCD3: cpu.execute_instruction<0x8C>(0x00B40E, 3); return true;
    // src/unknown/C4/C4BAF6.asm:243 BRA @UNKNOWN22
    case 0xC4BCD6: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/unknown/C4/C4BAF6.asm:245 LDA @VIRTUAL00
    case 0xC4BCD8: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:246 CMP @VIRTUAL01
    case 0xC4BCDA: cpu.execute_instruction<0xC5>(0x000001, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:247 BLTEQ @UNKNOWN22
    case 0xC4BCDC: cpu.execute_instruction<0x90>(0x000006, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:247 BLTEQ @UNKNOWN22
    case 0xC4BCDE: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:248 LDA @VIRTUAL01
    case 0xC4BCE0: cpu.execute_instruction<0xA5>(0x000001, 2); return true;
    // src/unknown/C4/C4BAF6.asm:249 STA @VIRTUAL00
    case 0xC4BCE2: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:251 LDX @LOCAL01
    case 0xC4BCE4: cpu.execute_instruction<0xA6>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6.asm:252 INX
    case 0xC4BCE6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:253 STX @LOCAL01
    case 0xC4BCE7: cpu.execute_instruction<0x86>(0x00000F, 2); return true;
    // src/unknown/C4/C4BAF6.asm:255 CPX #4
    case 0xC4BCE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/unknown/C4/C4BAF6.asm:255 CPX #4
    // Overlapping static entry reached from 0xC4BCE9.
    case 0xC4BCEB: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:256 BCCL @UNKNOWN16
    case 0xC4BCEC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:256 BCCL @UNKNOWN16
    case 0xC4BCEE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:256 BCCL @UNKNOWN16
    case 0xC4BCF0: cpu.execute_instruction<0x4C>(0x00BC62, 3); return true;
    // src/unknown/C4/C4BAF6.asm:257 REP #PROC_FLAGS::ACCUM8
    case 0xC4BCF3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:258 LDA @VIRTUAL00
    case 0xC4BCF5: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:259 AND #$00FF
    case 0xC4BCF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BAF6.asm:259 AND #$00FF
    // Overlapping static entry reached from 0xC4BCF7.
    case 0xC4BCF9: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4BAF6.asm:260 CMP #<-4
    case 0xC4BCFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FC, 2); else cpu.execute_instruction<0xC9>(0x0000FC, 3); return true;
    // src/unknown/C4/C4BAF6.asm:260 CMP #<-4
    // Overlapping static entry reached from 0xC4BCFA.
    case 0xC4BCFC: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BAF6.asm:261 BNE @UNKNOWN25
    case 0xC4BCFD: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BCFF: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD02: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD04: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:262 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD07: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:263 LDA @VIRTUAL02
    case 0xC4BD09: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:264 CLC
    case 0xC4BD0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:265 ADC @VIRTUAL06
    case 0xC4BD0C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:266 STA @VIRTUAL06
    case 0xC4BD0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:267 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BD10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:268 LDA #0
    case 0xC4BD12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4BAF6.asm:269 STA [@VIRTUAL06]
    case 0xC4BD14: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:269 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4BD12.
    case 0xC4BD15: cpu.execute_instruction<0x06>(0x000080, 2); return true;
    // src/unknown/C4/C4BAF6.asm:270 BRA @UNKNOWN29
    case 0xC4BD16: cpu.execute_instruction<0x80>(0x000061, 2); return true;
    // src/unknown/C4/C4BAF6.asm:270 BRA @UNKNOWN29
    // Overlapping static entry reached from 0xC4BD15.
    case 0xC4BD17: cpu.execute_instruction<0x61>(0x0000E2, 2); return true;
    // src/unknown/C4/C4BAF6.asm:272 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BD18: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:272 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BD17.
    case 0xC4BD19: cpu.execute_instruction<0x20>(0x0000A5, 3); return true;
    // src/unknown/C4/C4BAF6.asm:273 LDA @VIRTUAL00
    case 0xC4BD1A: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BAF6.asm:274 INC
    case 0xC4BD1C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:275 STA @LOCAL00
    case 0xC4BD1D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4BAF6.asm:276 REP #PROC_FLAGS::ACCUM8
    case 0xC4BD1F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD21: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD26: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:277 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD29: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:278 LDA @VIRTUAL02
    case 0xC4BD2B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:279 CLC
    case 0xC4BD2D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:280 ADC @VIRTUAL06
    case 0xC4BD2E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:281 STA @VIRTUAL06
    case 0xC4BD30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:282 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BD32: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:283 LDA @LOCAL00
    case 0xC4BD34: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4BAF6.asm:284 STA [@VIRTUAL06]
    case 0xC4BD36: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:285 REP #PROC_FLAGS::ACCUM8
    case 0xC4BD38: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:286 AND #$00FF
    case 0xC4BD3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BAF6.asm:286 AND #$00FF
    // Overlapping static entry reached from 0xC4BD3A.
    case 0xC4BD3C: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/unknown/C4/C4BAF6.asm:287 CMP @LOCAL08
    case 0xC4BD3D: cpu.execute_instruction<0xC5>(0x00001D, 2); return true;
    // src/unknown/C4/C4BAF6.asm:288 BNE @UNKNOWN29
    case 0xC4BD3F: cpu.execute_instruction<0xD0>(0x000038, 2); return true;
    // src/unknown/C4/C4BAF6.asm:289 LDA #0
    case 0xC4BD41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BAF6.asm:289 LDA #0
    // Overlapping static entry reached from 0xC4BD41.
    case 0xC4BD43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BAF6.asm:290 STA @LOCAL02
    case 0xC4BD44: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:291 BRA @UNKNOWN28
    case 0xC4BD46: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/unknown/C4/C4BAF6.asm:293 ASL
    case 0xC4BD48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:294 TAX
    case 0xC4BD49: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:295 LDA @VIRTUAL02
    case 0xC4BD4A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BAF6.asm:296 CLC
    case 0xC4BD4C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:297 ADC PATH_CARDINAL_OFFSET,X
    case 0xC4BD4D: cpu.execute_instruction<0x7D>(0x00B410, 3); return true;
    // src/unknown/C4/C4BAF6.asm:298 TAX
    case 0xC4BD50: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BAF6.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD51: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD54: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD56: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BAF6.asm:299 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BD59: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BAF6.asm:300 TXA
    case 0xC4BD5B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:301 CLC
    case 0xC4BD5C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:302 ADC @VIRTUAL06
    case 0xC4BD5D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:303 STA @VIRTUAL06
    case 0xC4BD5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:304 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BD61: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:305 LDA [@VIRTUAL06]
    case 0xC4BD63: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:306 CMP #<-2
    case 0xC4BD65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FE, 2); else cpu.execute_instruction<0xC9>(0x0090FE, 3); return true;
    // src/unknown/C4/C4BAF6.asm:307 BCC @UNKNOWN27
    case 0xC4BD67: cpu.execute_instruction<0x90>(0x000004, 2); return true;
    // src/unknown/C4/C4BAF6.asm:307 BCC @UNKNOWN27
    // Overlapping static entry reached from 0xC4BD65.
    case 0xC4BD68: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/unknown/C4/C4BAF6.asm:308 LDA #<-4
    case 0xC4BD69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FC, 2); else cpu.execute_instruction<0xA9>(0x0087FC, 3); return true;
    // src/unknown/C4/C4BAF6.asm:308 LDA #<-4
    // Overlapping static entry reached from 0xC4BD68.
    case 0xC4BD6A: cpu.execute_instruction<0xFC>(0x000687, 3); return true;
    // src/unknown/C4/C4BAF6.asm:309 STA [@VIRTUAL06]
    case 0xC4BD6B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4BAF6.asm:309 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4BD69.
    case 0xC4BD6C: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4BAF6.asm:311 REP #PROC_FLAGS::ACCUM8
    case 0xC4BD6D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:311 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4BD6C.
    case 0xC4BD6E: cpu.execute_instruction<0x20>(0x0011A5, 3); return true;
    // src/unknown/C4/C4BAF6.asm:312 LDA @LOCAL02
    case 0xC4BD6F: cpu.execute_instruction<0xA5>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:313 INC
    case 0xC4BD71: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BAF6.asm:314 STA @LOCAL02
    case 0xC4BD72: cpu.execute_instruction<0x85>(0x000011, 2); return true;
    // src/unknown/C4/C4BAF6.asm:316 CMP #4
    case 0xC4BD74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4BAF6.asm:316 CMP #4
    // Overlapping static entry reached from 0xC4BD74.
    case 0xC4BD76: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4BAF6.asm:317 BCC @UNKNOWN26
    case 0xC4BD77: cpu.execute_instruction<0x90>(0x0000CF, 2); return true;
    // src/unknown/C4/C4BAF6.asm:319 REP #PROC_FLAGS::ACCUM8
    case 0xC4BD79: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:320 INC @LOCAL03
    case 0xC4BD7B: cpu.execute_instruction<0xE6>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6.asm:321 LDA @LOCAL09
    case 0xC4BD7D: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // src/unknown/C4/C4BAF6.asm:322 CMP @LOCAL03
    case 0xC4BD7F: cpu.execute_instruction<0xC5>(0x000013, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:323 BLTEQ @UNKNOWN31
    case 0xC4BD81: cpu.execute_instruction<0x90>(0x000015, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:323 BLTEQ @UNKNOWN31
    case 0xC4BD83: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/unknown/C4/C4BAF6.asm:324 LDA @LOCAL04
    case 0xC4BD85: cpu.execute_instruction<0xA5>(0x000015, 2); return true;
    // src/unknown/C4/C4BAF6.asm:325 CMP @LOCAL07
    case 0xC4BD87: cpu.execute_instruction<0xC5>(0x00001B, 2); return true;
    // src/unknown/C4/C4BAF6.asm:326 BEQ @UNKNOWN31
    case 0xC4BD89: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C4/C4BAF6.asm:328 REP #PROC_FLAGS::ACCUM8
    case 0xC4BD8B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BAF6.asm:329 LDA PATH_SEARCH_TEMP_A
    case 0xC4BD8D: cpu.execute_instruction<0xAD>(0x00B40C, 3); return true;
    // src/unknown/C4/C4BAF6.asm:330 CMP PATH_SEARCH_TEMP_B
    case 0xC4BD90: cpu.execute_instruction<0xCD>(0x00B40E, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4BAF6.asm:331 BNEL @UNKNOWN4
    case 0xC4BD93: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4BAF6.asm:331 BNEL @UNKNOWN4
    case 0xC4BD95: cpu.execute_instruction<0x4C>(0x00BB79, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4BAF6.asm:333 END_C_FUNCTION
    case 0xC4BD98: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4BAF6.asm:333 END_C_FUNCTION
    case 0xC4BD99: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4BD9A.asm (unresolved).
bool execute_unresolved_c4_c4bd9a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4BD9A.asm:3 BEGIN_C_FUNCTION
    case 0xC4BD9A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC4BD9C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC4BD9D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC4BD9E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC4BD9F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D2, 2); else cpu.execute_instruction<0x69>(0x00FFD2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BD9F.
    case 0xC4BDA1: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC4BDA2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4BD9A.asm:25 END_STACK_VARS
    case 0xC4BDA3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:26 STY @LOCAL0F
    case 0xC4BDA4: cpu.execute_instruction<0x84>(0x00002C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:26 STY @LOCAL0F
    // Overlapping static entry reached from 0xC4BDA1.
    case 0xC4BDA5: cpu.execute_instruction<0x2C>(0x002A86, 3); return true;
    // src/unknown/C4/C4BD9A.asm:27 STX @LOCAL0E
    case 0xC4BDA6: cpu.execute_instruction<0x86>(0x00002A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:28 TAX
    case 0xC4BDA8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:29 LDA __BSS_START__,X
    case 0xC4BDA9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:30 STA @LOCAL0D
    case 0xC4BDAC: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:31 LDA __BSS_START__+2,X
    case 0xC4BDAE: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/unknown/C4/C4BD9A.asm:32 STA @LOCAL0C
    case 0xC4BDB1: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:33 LDY #0
    case 0xC4BDB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:33 LDY #0
    // Overlapping static entry reached from 0xC4BDB3.
    case 0xC4BDB5: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4BD9A.asm:34 STY @LOCAL0B
    case 0xC4BDB6: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BDB8: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BDBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BDBD: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:35 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BDC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:36 LDY PATH_MATRIX_COLUMNS
    case 0xC4BDC2: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BD9A.asm:37 LDA @LOCAL0D
    case 0xC4BDC5: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:38 JSL MULT16
    case 0xC4BDC7: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4BD9A.asm:39 CLC
    case 0xC4BDCB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:40 ADC @LOCAL0C
    case 0xC4BDCC: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:41 CLC
    case 0xC4BDCE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:42 ADC @VIRTUAL06
    case 0xC4BDCF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:43 STA @VIRTUAL06
    case 0xC4BDD1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BDD3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:45 LDA [@VIRTUAL06]
    case 0xC4BDD5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:46 STA @VIRTUAL00
    case 0xC4BDD7: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:47 CMP #<-5
    case 0xC4BDD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FB, 2); else cpu.execute_instruction<0xC9>(0x0090FB, 3); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:48 BLTEQ @UNKNOWN0
    case 0xC4BDDB: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:48 BLTEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC4BDD9.
    case 0xC4BDDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:48 BLTEQ @UNKNOWN0
    case 0xC4BDDD: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:49 REP #PROC_FLAGS::ACCUM8
    case 0xC4BDDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:50 LDA #0
    case 0xC4BDE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:50 LDA #0
    // Overlapping static entry reached from 0xC4BDE1.
    case 0xC4BDE3: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:51 JMP @UNKNOWN14
    case 0xC4BDE4: cpu.execute_instruction<0x4C>(0x00BF7D, 3); return true;
    // src/unknown/C4/C4BD9A.asm:53 REP #PROC_FLAGS::ACCUM8
    case 0xC4BDE7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:54 LDA @LOCAL0E
    case 0xC4BDE9: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:55 BNE @UNKNOWN1
    case 0xC4BDEB: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:56 LDA #0
    case 0xC4BDED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:56 LDA #0
    // Overlapping static entry reached from 0xC4BDED.
    case 0xC4BDEF: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:57 JMP @UNKNOWN14
    case 0xC4BDF0: cpu.execute_instruction<0x4C>(0x00BF7D, 3); return true;
    // src/unknown/C4/C4BD9A.asm:59 LDX @LOCAL0F
    case 0xC4BDF3: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:60 LDA @LOCAL0D
    case 0xC4BDF5: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:61 STA __BSS_START__,X
    case 0xC4BDF7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:62 LDA @LOCAL0C
    case 0xC4BDFA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:63 STA __BSS_START__+2,X
    case 0xC4BDFC: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C4/C4BD9A.asm:64 LDA #1
    case 0xC4BDFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4BD9A.asm:64 LDA #1
    // Overlapping static entry reached from 0xC4BDFF.
    case 0xC4BE01: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BD9A.asm:65 STA @LOCAL0A
    case 0xC4BE02: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:66 JMP @UNKNOWN12
    case 0xC4BE04: cpu.execute_instruction<0x4C>(0x00BF71, 3); return true;
    // src/unknown/C4/C4BD9A.asm:68 LDA #666
    case 0xC4BE07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:68 LDA #666
    // Overlapping static entry reached from 0xC4BE07.
    case 0xC4BE09: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/unknown/C4/C4BD9A.asm:69 STA @LOCAL09
    case 0xC4BE0A: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:70 STA @LOCAL08
    case 0xC4BE0C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:71 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BE0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:72 LDA @VIRTUAL00
    case 0xC4BE10: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:73 DEC
    case 0xC4BE12: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:74 STA @VIRTUAL00
    case 0xC4BE13: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:75 LDY @LOCAL0B
    case 0xC4BE15: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:76 STY @VIRTUAL02
    case 0xC4BE17: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4BE19: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:78 LDA @VIRTUAL02
    case 0xC4BE1B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:79 STA @LOCAL07
    case 0xC4BE1D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:80 STZ @LOCAL0B
    case 0xC4BE1F: cpu.execute_instruction<0x64>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:81 JMP @UNKNOWN7
    case 0xC4BE21: cpu.execute_instruction<0x4C>(0x00BF16, 3); return true;
    // src/unknown/C4/C4BD9A.asm:83 LDA @VIRTUAL02
    case 0xC4BE24: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:84 ASL
    case 0xC4BE26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:85 ASL
    case 0xC4BE27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:86 TAY
    case 0xC4BE28: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:87 LDA PATH_CARDINAL_INDEX + pathfinder_coords::y_coord,Y
    case 0xC4BE29: cpu.execute_instruction<0xB9>(0x00B418, 3); return true;
    // src/unknown/C4/C4BD9A.asm:88 CLC
    case 0xC4BE2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:89 ADC @LOCAL0D
    case 0xC4BE2D: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:90 TAX
    case 0xC4BE2F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:91 LDA PATH_CARDINAL_INDEX + pathfinder_coords::x_coord,Y
    case 0xC4BE30: cpu.execute_instruction<0xB9>(0x00B41A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:92 CLC
    case 0xC4BE33: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:93 ADC @LOCAL0C
    case 0xC4BE34: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:94 STA @LOCAL06
    case 0xC4BE36: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:95 LDA @VIRTUAL02
    case 0xC4BE38: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:96 INC
    case 0xC4BE3A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:97 AND #$0003
    case 0xC4BE3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/unknown/C4/C4BD9A.asm:97 AND #$0003
    // Overlapping static entry reached from 0xC4BE3B.
    case 0xC4BE3D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BD9A.asm:98 STA @VIRTUAL04
    case 0xC4BE3E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BE40: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BE43: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BE45: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:99 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BE48: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:100 LDA @LOCAL06
    case 0xC4BE4A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:101 STA @VIRTUAL02
    case 0xC4BE4C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:102 LDY PATH_MATRIX_COLUMNS
    case 0xC4BE4E: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BD9A.asm:103 TXA
    case 0xC4BE51: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:104 JSL MULT16
    case 0xC4BE52: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4BD9A.asm:105 CLC
    case 0xC4BE56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:106 ADC @VIRTUAL02
    case 0xC4BE57: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:107 CLC
    case 0xC4BE59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:108 ADC @VIRTUAL06
    case 0xC4BE5A: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:109 STA @VIRTUAL06
    case 0xC4BE5C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:110 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BE5E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:111 LDA [@VIRTUAL06]
    case 0xC4BE60: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:112 CMP @VIRTUAL00
    case 0xC4BE62: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:113 BNEL @UNKNOWN6
    case 0xC4BE64: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:113 BNEL @UNKNOWN6
    case 0xC4BE66: cpu.execute_instruction<0x4C>(0x00BF0C, 3); return true;
    // src/unknown/C4/C4BD9A.asm:114 REP #PROC_FLAGS::ACCUM8
    case 0xC4BE69: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:115 LDA @LOCAL09
    case 0xC4BE6B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:116 CMP #666
    case 0xC4BE6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00009A, 2); else cpu.execute_instruction<0xC9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:116 CMP #666
    // Overlapping static entry reached from 0xC4BE6D.
    case 0xC4BE6F: cpu.execute_instruction<0x02>(0x0000D0, 2); return true;
    // src/unknown/C4/C4BD9A.asm:117 BNE @UNKNOWN5
    case 0xC4BE70: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:118 LDA @LOCAL07
    case 0xC4BE72: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:119 STA @VIRTUAL02
    case 0xC4BE74: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:120 STA @LOCAL09
    case 0xC4BE76: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:121 STX @LOCAL00
    case 0xC4BE78: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:122 LDA @LOCAL06
    case 0xC4BE7A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:123 STA @LOCAL01
    case 0xC4BE7C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4BD9A.asm:125 LDA @LOCAL07
    case 0xC4BE7E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:126 STA @VIRTUAL02
    case 0xC4BE80: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:127 ASL
    case 0xC4BE82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:128 ASL
    case 0xC4BE83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:129 TAX
    case 0xC4BE84: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:130 LDA PATH_DIAGONAL_INDEX + pathfinder_coords::y_coord,X
    case 0xC4BE85: cpu.execute_instruction<0xBD>(0x00B428, 3); return true;
    // src/unknown/C4/C4BD9A.asm:131 CLC
    case 0xC4BE88: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:132 ADC @LOCAL0D
    case 0xC4BE89: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:133 STA @LOCAL05
    case 0xC4BE8B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BD9A.asm:134 LDA PATH_DIAGONAL_INDEX + pathfinder_coords::x_coord,X
    case 0xC4BE8D: cpu.execute_instruction<0xBD>(0x00B42A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:135 CLC
    case 0xC4BE90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:136 ADC @LOCAL0C
    case 0xC4BE91: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:137 TAY
    case 0xC4BE93: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:138 STY @LOCAL04
    case 0xC4BE94: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/unknown/C4/C4BD9A.asm:139 LDA @VIRTUAL00
    case 0xC4BE96: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:140 AND #$00FF
    case 0xC4BE98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:140 AND #$00FF
    // Overlapping static entry reached from 0xC4BE98.
    case 0xC4BE9A: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:141 DEC
    case 0xC4BE9B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:142 PHA
    case 0xC4BE9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BE9D: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BEA0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BEA2: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:143 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BEA5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:144 STY @VIRTUAL02
    case 0xC4BEA7: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:145 LDY PATH_MATRIX_COLUMNS
    case 0xC4BEA9: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BD9A.asm:146 LDA @LOCAL05
    case 0xC4BEAC: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4BD9A.asm:147 JSL MULT16
    case 0xC4BEAE: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4BD9A.asm:148 CLC
    case 0xC4BEB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:149 ADC @VIRTUAL02
    case 0xC4BEB3: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:150 CLC
    case 0xC4BEB5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:151 ADC @VIRTUAL06
    case 0xC4BEB6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:152 STA @VIRTUAL06
    case 0xC4BEB8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:153 LDA [@VIRTUAL06]
    case 0xC4BEBA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:154 AND #$00FF
    case 0xC4BEBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC4BEBC.
    case 0xC4BEBE: cpu.execute_instruction<0x00>(0x00007A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:155 PLY
    case 0xC4BEBF: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:156 STY @VIRTUAL02
    case 0xC4BEC0: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:157 CMP @VIRTUAL02
    case 0xC4BEC2: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:158 BNE @UNKNOWN6
    case 0xC4BEC4: cpu.execute_instruction<0xD0>(0x000046, 2); return true;
    // src/unknown/C4/C4BD9A.asm:159 LDA @VIRTUAL04
    case 0xC4BEC6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BD9A.asm:160 ASL
    case 0xC4BEC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:161 ASL
    case 0xC4BEC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:162 TAX
    case 0xC4BECA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BECB: cpu.execute_instruction<0xAD>(0x00B3FC, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BECE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BED0: cpu.execute_instruction<0xAD>(0x00B3FE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4BD9A.asm:163 MOVE_INT PATH_MATRIX_BUFFER, @VIRTUAL06
    case 0xC4BED3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4BD9A.asm:164 LDA PATH_CARDINAL_INDEX + pathfinder_coords::x_coord,X
    case 0xC4BED5: cpu.execute_instruction<0xBD>(0x00B41A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:165 CLC
    case 0xC4BED8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:166 ADC @LOCAL0C
    case 0xC4BED9: cpu.execute_instruction<0x65>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:167 STA @VIRTUAL02
    case 0xC4BEDB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:168 LDY PATH_MATRIX_COLUMNS
    case 0xC4BEDD: cpu.execute_instruction<0xAC>(0x00B402, 3); return true;
    // src/unknown/C4/C4BD9A.asm:169 LDA PATH_CARDINAL_INDEX + pathfinder_coords::y_coord,X
    case 0xC4BEE0: cpu.execute_instruction<0xBD>(0x00B418, 3); return true;
    // src/unknown/C4/C4BD9A.asm:170 CLC
    case 0xC4BEE3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:171 ADC @LOCAL0D
    case 0xC4BEE4: cpu.execute_instruction<0x65>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:172 JSL MULT16
    case 0xC4BEE6: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4BD9A.asm:173 CLC
    case 0xC4BEEA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:174 ADC @VIRTUAL02
    case 0xC4BEEB: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:175 CLC
    case 0xC4BEED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:176 ADC @VIRTUAL06
    case 0xC4BEEE: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:177 STA @VIRTUAL06
    case 0xC4BEF0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:178 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BEF2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:179 LDA [@VIRTUAL06]
    case 0xC4BEF4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4BD9A.asm:180 CMP @VIRTUAL00
    case 0xC4BEF6: cpu.execute_instruction<0xC5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:181 BNE @UNKNOWN6
    case 0xC4BEF8: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4BD9A.asm:182 REP #PROC_FLAGS::ACCUM8
    case 0xC4BEFA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:183 LDA @LOCAL07
    case 0xC4BEFC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:184 STA @VIRTUAL02
    case 0xC4BEFE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:185 STA @LOCAL08
    case 0xC4BF00: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:186 LDA @LOCAL05
    case 0xC4BF02: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4BD9A.asm:187 STA @LOCAL02
    case 0xC4BF04: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4BD9A.asm:188 LDY @LOCAL04
    case 0xC4BF06: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4BD9A.asm:189 STY @LOCAL03
    case 0xC4BF08: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4BD9A.asm:190 BRA @UNKNOWN8
    case 0xC4BF0A: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4BD9A.asm:192 REP #PROC_FLAGS::ACCUM8
    case 0xC4BF0C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:193 LDA @VIRTUAL04
    case 0xC4BF0E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BD9A.asm:194 STA @VIRTUAL02
    case 0xC4BF10: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BD9A.asm:195 STA @LOCAL07
    case 0xC4BF12: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:196 INC @LOCAL0B
    case 0xC4BF14: cpu.execute_instruction<0xE6>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:198 LDA @LOCAL0B
    case 0xC4BF16: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:199 CMP #4
    case 0xC4BF18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4BD9A.asm:199 CMP #4
    // Overlapping static entry reached from 0xC4BF18.
    case 0xC4BF1A: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:200 BCCL @UNKNOWN3
    case 0xC4BF1B: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:200 BCCL @UNKNOWN3
    case 0xC4BF1D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:200 BCCL @UNKNOWN3
    case 0xC4BF1F: cpu.execute_instruction<0x4C>(0x00BE24, 3); return true;
    // src/unknown/C4/C4BD9A.asm:202 LDA @LOCAL08
    case 0xC4BF22: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:203 CMP #666
    case 0xC4BF24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00009A, 2); else cpu.execute_instruction<0xC9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:203 CMP #666
    // Overlapping static entry reached from 0xC4BF24.
    case 0xC4BF26: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C4/C4BD9A.asm:204 BEQ @UNKNOWN9
    case 0xC4BF27: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C4BD9A.asm:205 LDA @LOCAL02
    case 0xC4BF29: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4BD9A.asm:206 STA @LOCAL0D
    case 0xC4BF2B: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:207 LDA @LOCAL03
    case 0xC4BF2D: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BD9A.asm:208 STA @LOCAL0C
    case 0xC4BF2F: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:209 LDY @LOCAL08
    case 0xC4BF31: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:210 STY @LOCAL0B
    case 0xC4BF33: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:211 SEP #PROC_FLAGS::ACCUM8
    case 0xC4BF35: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:212 LDA @VIRTUAL00
    case 0xC4BF37: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:213 DEC
    case 0xC4BF39: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:214 STA @VIRTUAL00
    case 0xC4BF3A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:215 BRA @UNKNOWN10
    case 0xC4BF3C: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C4BD9A.asm:218 LDA @LOCAL09
    case 0xC4BF3E: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:219 CMP #666
    case 0xC4BF40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00009A, 2); else cpu.execute_instruction<0xC9>(0x00029A, 3); return true;
    // src/unknown/C4/C4BD9A.asm:219 CMP #666
    // Overlapping static entry reached from 0xC4BF40.
    case 0xC4BF42: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/unknown/C4/C4BD9A.asm:220 BEQ @UNKNOWN13
    case 0xC4BF43: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C4/C4BD9A.asm:221 LDA @LOCAL00
    case 0xC4BF45: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4BD9A.asm:222 STA @LOCAL0D
    case 0xC4BF47: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:223 LDA @LOCAL01
    case 0xC4BF49: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BD9A.asm:224 STA @LOCAL0C
    case 0xC4BF4B: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:225 LDY @LOCAL09
    case 0xC4BF4D: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:226 STY @LOCAL0B
    case 0xC4BF4F: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/unknown/C4/C4BD9A.asm:228 REP #PROC_FLAGS::ACCUM8
    case 0xC4BF51: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:229 LDA @LOCAL0E
    case 0xC4BF53: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/unknown/C4/C4BD9A.asm:230 CMP @LOCAL0A
    case 0xC4BF55: cpu.execute_instruction<0xC5>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:231 BNE @UNKNOWN11
    case 0xC4BF57: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/unknown/C4/C4BD9A.asm:232 LDA @LOCAL0A
    case 0xC4BF59: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:233 BRA @UNKNOWN14
    case 0xC4BF5B: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/unknown/C4/C4BD9A.asm:235 LDA @LOCAL0A
    case 0xC4BF5D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:236 ASL
    case 0xC4BF5F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:237 ASL
    case 0xC4BF60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:238 CLC
    case 0xC4BF61: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:239 ADC @LOCAL0F
    case 0xC4BF62: cpu.execute_instruction<0x65>(0x00002C, 2); return true;
    // src/unknown/C4/C4BD9A.asm:240 TAX
    case 0xC4BF64: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4BD9A.asm:241 LDA @LOCAL0D
    case 0xC4BF65: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/unknown/C4/C4BD9A.asm:242 STA __BSS_START__,X
    case 0xC4BF67: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BD9A.asm:243 LDA @LOCAL0C
    case 0xC4BF6A: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/unknown/C4/C4BD9A.asm:244 STA __BSS_START__+2,X
    case 0xC4BF6C: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C4/C4BD9A.asm:245 INC @LOCAL0A
    case 0xC4BF6F: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/unknown/C4/C4BD9A.asm:247 LDA @VIRTUAL00
    case 0xC4BF71: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4BD9A.asm:248 AND #$00FF
    case 0xC4BF73: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4BD9A.asm:248 AND #$00FF
    // Overlapping static entry reached from 0xC4BF73.
    case 0xC4BF75: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4BD9A.asm:249 BNEL @UNKNOWN2
    case 0xC4BF76: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4BD9A.asm:249 BNEL @UNKNOWN2
    case 0xC4BF78: cpu.execute_instruction<0x4C>(0x00BE07, 3); return true;
    // src/unknown/C4/C4BD9A.asm:251 LDA @LOCAL0A
    case 0xC4BF7B: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4BD9A.asm:253 END_C_FUNCTION
    case 0xC4BF7D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4BD9A.asm:253 END_C_FUNCTION
    case 0xC4BF7E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4BF7F.asm (unresolved).
bool execute_unresolved_c4_c4bf7f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4BF7F.asm:3 BEGIN_C_FUNCTION
    case 0xC4BF7F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC4BF81: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC4BF82: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC4BF83: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC4BF84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC4BF84.
    case 0xC4BF86: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC4BF87: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4BF7F.asm:17 END_STACK_VARS
    case 0xC4BF88: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:18 STX @LOCAL08
    case 0xC4BF89: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:18 STX @LOCAL08
    // Overlapping static entry reached from 0xC4BF86.
    case 0xC4BF8A: cpu.execute_instruction<0x1E>(0x001C85, 3); return true;
    // src/unknown/C4/C4BF7F.asm:19 STA @LOCAL07
    case 0xC4BF8B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BF7F.asm:20 CMP #3
    case 0xC4BF8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4BF7F.asm:20 CMP #3
    // Overlapping static entry reached from 0xC4BF8D.
    case 0xC4BF8F: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:21 BCCL @UNKNOWN6
    case 0xC4BF90: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:21 BCCL @UNKNOWN6
    case 0xC4BF92: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BF7F.asm:21 BCCL @UNKNOWN6
    case 0xC4BF94: cpu.execute_instruction<0x4C>(0x00C05A, 3); return true;
    // src/unknown/C4/C4BF7F.asm:22 LDA __BSS_START__+4,X
    case 0xC4BF97: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/unknown/C4/C4BF7F.asm:23 STA @VIRTUAL04
    case 0xC4BF9A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:24 LDA __BSS_START__+6,X
    case 0xC4BF9C: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/unknown/C4/C4BF7F.asm:25 STA @VIRTUAL02
    case 0xC4BF9F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:26 STA @LOCAL06
    case 0xC4BFA1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:27 LDA __BSS_START__,X
    case 0xC4BFA3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4BF7F.asm:28 STA @VIRTUAL02
    case 0xC4BFA6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:29 LDA @VIRTUAL04
    case 0xC4BFA8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:30 SEC
    case 0xC4BFAA: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:31 SBC @VIRTUAL02
    case 0xC4BFAB: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:32 STA @LOCAL05
    case 0xC4BFAD: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:33 LDA @LOCAL06
    case 0xC4BFAF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:34 STA @VIRTUAL02
    case 0xC4BFB1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:35 SEC
    case 0xC4BFB3: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:36 SBC __BSS_START__+2,X
    case 0xC4BFB4: cpu.execute_instruction<0xFD>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:37 STA @LOCAL04
    case 0xC4BFB7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4BF7F.asm:38 LDA #1
    case 0xC4BFB9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4BF7F.asm:38 LDA #1
    // Overlapping static entry reached from 0xC4BFB9.
    case 0xC4BFBB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BF7F.asm:39 STA @LOCAL03
    case 0xC4BFBC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:40 LDA #2
    case 0xC4BFBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:40 LDA #2
    // Overlapping static entry reached from 0xC4BFBE.
    case 0xC4BFC0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4BF7F.asm:41 STA @LOCAL02
    case 0xC4BFC1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:42 JMP @UNKNOWN4
    case 0xC4BFC3: cpu.execute_instruction<0x4C>(0x00C04A, 3); return true;
    // src/unknown/C4/C4BF7F.asm:44 LDA @LOCAL02
    case 0xC4BFC6: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:45 ASL
    case 0xC4BFC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:46 ASL
    case 0xC4BFC9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:47 STA @VIRTUAL02
    case 0xC4BFCA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:48 LDX @LOCAL08
    case 0xC4BFCC: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:49 TXA
    case 0xC4BFCE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:50 CLC
    case 0xC4BFCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:51 ADC @VIRTUAL02
    case 0xC4BFD0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:52 TAY
    case 0xC4BFD2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:53 LDA __BSS_START__,Y
    case 0xC4BFD3: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/unknown/C4/C4BF7F.asm:54 STA @LOCAL01
    case 0xC4BFD6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:55 LDA __BSS_START__+2,Y
    case 0xC4BFD8: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:56 TAY
    case 0xC4BFDB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:57 STY @LOCAL00
    case 0xC4BFDC: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:58 LDA @LOCAL01
    case 0xC4BFDE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:59 STA @VIRTUAL02
    case 0xC4BFE0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:60 LDA @VIRTUAL04
    case 0xC4BFE2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:61 CLC
    case 0xC4BFE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:62 ADC @LOCAL05
    case 0xC4BFE5: cpu.execute_instruction<0x65>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:63 CMP @VIRTUAL02
    case 0xC4BFE7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:64 BNE @UNKNOWN2
    case 0xC4BFE9: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/unknown/C4/C4BF7F.asm:65 LDA @LOCAL06
    case 0xC4BFEB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:66 STA @VIRTUAL02
    case 0xC4BFED: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:67 CLC
    case 0xC4BFEF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:68 ADC @LOCAL04
    case 0xC4BFF0: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/unknown/C4/C4BF7F.asm:69 STY @VIRTUAL02
    case 0xC4BFF2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:70 CMP @VIRTUAL02
    case 0xC4BFF4: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:71 BNE @UNKNOWN2
    case 0xC4BFF6: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/unknown/C4/C4BF7F.asm:72 LDA @LOCAL03
    case 0xC4BFF8: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:73 ASL
    case 0xC4BFFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:74 ASL
    case 0xC4BFFB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:75 STA @VIRTUAL04
    case 0xC4BFFC: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:76 TXA
    case 0xC4BFFE: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:77 CLC
    case 0xC4BFFF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:78 ADC @VIRTUAL04
    case 0xC4C000: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:79 STA @VIRTUAL02
    case 0xC4C002: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:80 LDA @LOCAL01
    case 0xC4C004: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:81 LDX @VIRTUAL02
    case 0xC4C006: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:82 STA __BSS_START__,X
    case 0xC4C008: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4BF7F.asm:83 TYA
    case 0xC4C00B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:84 LDX @VIRTUAL02
    case 0xC4C00C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:85 STA __BSS_START__+2,X
    case 0xC4C00E: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:86 BRA @UNKNOWN3
    case 0xC4C011: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // src/unknown/C4/C4BF7F.asm:88 INC @LOCAL03
    case 0xC4C013: cpu.execute_instruction<0xE6>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:89 LDA @LOCAL03
    case 0xC4C015: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:90 ASL
    case 0xC4C017: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:91 ASL
    case 0xC4C018: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:92 STA @VIRTUAL02
    case 0xC4C019: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:93 TXA
    case 0xC4C01B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:94 CLC
    case 0xC4C01C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:95 ADC @VIRTUAL02
    case 0xC4C01D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:96 STA @LOCAL05
    case 0xC4C01F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:97 LDA @LOCAL01
    case 0xC4C021: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:98 STA (@LOCAL05)
    case 0xC4C023: cpu.execute_instruction<0x92>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:99 TYA
    case 0xC4C025: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:100 LDY #2
    case 0xC4C026: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4BF7F.asm:100 LDY #2
    // Overlapping static entry reached from 0xC4C026.
    case 0xC4C028: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/unknown/C4/C4BF7F.asm:101 STA (@LOCAL05),Y
    case 0xC4C029: cpu.execute_instruction<0x91>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:102 LDA @LOCAL01
    case 0xC4C02B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:103 SEC
    case 0xC4C02D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:104 SBC @VIRTUAL04
    case 0xC4C02E: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:105 STA @LOCAL05
    case 0xC4C030: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4BF7F.asm:106 LDA @LOCAL06
    case 0xC4C032: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:107 STA @VIRTUAL02
    case 0xC4C034: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:108 LDY @LOCAL00
    case 0xC4C036: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4BF7F.asm:109 TYA
    case 0xC4C038: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:110 SEC
    case 0xC4C039: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:111 SBC @VIRTUAL02
    case 0xC4C03A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:112 STA @LOCAL04
    case 0xC4C03C: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4BF7F.asm:114 LDA @LOCAL01
    case 0xC4C03E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4BF7F.asm:115 STA @VIRTUAL04
    case 0xC4C040: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4BF7F.asm:116 STY @VIRTUAL02
    case 0xC4C042: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:117 LDA @VIRTUAL02
    case 0xC4C044: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4BF7F.asm:118 STA @LOCAL06
    case 0xC4C046: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4BF7F.asm:119 INC @LOCAL02
    case 0xC4C048: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:121 LDA @LOCAL02
    case 0xC4C04A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4BF7F.asm:122 CMP @LOCAL07
    case 0xC4C04C: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:123 BCCL @UNKNOWN1
    case 0xC4C04E: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4BF7F.asm:123 BCCL @UNKNOWN1
    case 0xC4C050: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4BF7F.asm:123 BCCL @UNKNOWN1
    case 0xC4C052: cpu.execute_instruction<0x4C>(0x00BFC6, 3); return true;
    // src/unknown/C4/C4BF7F.asm:124 LDA @LOCAL03
    case 0xC4C055: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4BF7F.asm:125 INC
    case 0xC4C057: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4BF7F.asm:126 STA @LOCAL07
    case 0xC4C058: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4BF7F.asm:128 LDA @LOCAL07
    case 0xC4C05A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4BF7F.asm:129 END_C_FUNCTION
    case 0xC4C05C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4BF7F.asm:129 END_C_FUNCTION
    case 0xC4C05D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C2DE.asm (unresolved).
bool execute_unresolved_c4_c4c2de_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C2DE.asm:3 BEGIN_C_FUNCTION
    case 0xC4C2DE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC4C2E0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC4C2E1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC4C2E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C2E2.
    case 0xC4C2E4: cpu.execute_instruction<0xFF>(0xC4AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C2DE.asm:8 END_STACK_VARS
    case 0xC4C2E5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:14 LDA PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC4C2E6: cpu.execute_instruction<0xAD>(0x004DC4, 3); return true;
    // src/unknown/C4/C4C2DE.asm:14 LDA PARTY_MEMBERS_ALIVE_OVERWORLD
    // Overlapping static entry reached from 0xC4C2E4.
    case 0xC4C2E8: cpu.execute_instruction<0x4D>(0x0012D0, 3); return true;
    // src/unknown/C4/C4C2DE.asm:15 BNE @UNKNOWN1
    case 0xC4C2E9: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4C2DE.asm:16 LDA #MUSIC::YOU_LOSE
    case 0xC4C2EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/unknown/C4/C4C2DE.asm:16 LDA #MUSIC::YOU_LOSE
    // Overlapping static entry reached from 0xC4C2EB.
    case 0xC4C2ED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:17 JSL CHANGE_MUSIC
    case 0xC4C2EE: cpu.execute_instruction<0x22>(0xC4FBBD, 4); return true;
    // src/unknown/C4/C4C2DE.asm:17 JSL CHANGE_MUSIC
    // Overlapping static entry reached from 0xC4C369.
    case 0xC4C2F0: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:17 JSL CHANGE_MUSIC
    // Overlapping static entry reached from 0xC4C2F0.
    case 0xC4C2F1: cpu.execute_instruction<0xC4>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C2DE.asm:18 LDY #$0000
    case 0xC4C2F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:18 LDY #$0000
    // Overlapping static entry reached from 0xC4C2F1.
    case 0xC4C2F3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4C2DE.asm:18 LDY #$0000
    // Overlapping static entry reached from 0xC4C2F2.
    case 0xC4C2F4: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:19 LDX #$0001
    case 0xC4C2F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4C2DE.asm:19 LDX #$0001
    // Overlapping static entry reached from 0xC4C2F5.
    case 0xC4C2F7: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4C2DE.asm:20 TXA
    case 0xC4C2F8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:21 JSL FADE_OUT_WITH_MOSAIC
    case 0xC4C2F9: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/unknown/C4/C4C2DE.asm:23 STZ LOADED_ANIMATED_TILE_COUNT
    case 0xC4C2FD: cpu.execute_instruction<0x9C>(0x004472, 3); return true;
    // src/unknown/C4/C4C2DE.asm:24 STZ MAP_PALETTE_ANIMATION_LOADED
    case 0xC4C300: cpu.execute_instruction<0x9C>(0x004474, 3); return true;
    // src/unknown/C4/C4C2DE.asm:25 STZ ITEM_TRANSFORMATIONS_LOADED
    case 0xC4C303: cpu.execute_instruction<0x9C>(0x009F2A, 3); return true;
    // src/unknown/C4/C4C2DE.asm:26 LDA #$0009
    case 0xC4C306: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/unknown/C4/C4C2DE.asm:26 LDA #$0009
    // Overlapping static entry reached from 0xC4C306.
    case 0xC4C308: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:27 JSL UNKNOWN_C08D79
    case 0xC4C309: cpu.execute_instruction<0x22>(0xC08D79, 4); return true;
    // src/unknown/C4/C4C2DE.asm:28 LDY #VRAM::GAME_OVER_LAYER_1_TILES
    case 0xC4C30D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:28 LDY #VRAM::GAME_OVER_LAYER_1_TILES
    // Overlapping static entry reached from 0xC4C30D.
    case 0xC4C30F: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:29 LDX #VRAM::GAME_OVER_LAYER_1_TILEMAP
    case 0xC4C310: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/unknown/C4/C4C2DE.asm:29 LDX #VRAM::GAME_OVER_LAYER_1_TILEMAP
    // Overlapping static entry reached from 0xC4C310.
    case 0xC4C312: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:30 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC4C313: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:31 JSL SET_BG1_VRAM_LOCATION
    case 0xC4C314: cpu.execute_instruction<0x22>(0xC08D9E, 4); return true;
    // src/unknown/C4/C4C2DE.asm:32 LDY #VRAM::GAME_OVER_LAYER_2_TILES
    case 0xC4C318: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:32 LDY #VRAM::GAME_OVER_LAYER_2_TILES
    // Overlapping static entry reached from 0xC4C318.
    case 0xC4C31A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:33 LDX #VRAM::GAME_OVER_LAYER_2_TILEMAP
    case 0xC4C31B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/unknown/C4/C4C2DE.asm:33 LDX #VRAM::GAME_OVER_LAYER_2_TILEMAP
    // Overlapping static entry reached from 0xC4C31B.
    case 0xC4C31D: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/unknown/C4/C4C2DE.asm:34 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC4C31E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C2DE.asm:34 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC4C31E.
    case 0xC4C320: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:35 JSL SET_BG3_VRAM_LOCATION
    case 0xC4C321: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC4C325: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC4C325.
    case 0xC4C327: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC4C328: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC4C32A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC4C32A.
    case 0xC4C32C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:36 LOADPTR BUFFER, $06
    case 0xC4C32D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC4C32F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x00CFAF, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    // Overlapping static entry reached from 0xC4C32F.
    case 0xC4C331: cpu.execute_instruction<0xCF>(0xA90E85, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC4C332: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC4C334: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    // Overlapping static entry reached from 0xC4C331.
    case 0xC4C335: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    // Overlapping static entry reached from 0xC4C334.
    case 0xC4C336: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:37 LOADPTR UNKNOWN_E1CFAF, @LOCAL00
    case 0xC4C337: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC4C339: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC4C33B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC4C33D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:38 MOVE_INT $06, @LOCAL01
    case 0xC4C33F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C2DE.asm:39 JSL DECOMP
    case 0xC4C341: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C4/C4C2DE.asm:40 LDA GAME_STATE + game_state::party_members
    case 0xC4C345: cpu.execute_instruction<0xAD>(0x00986F, 3); return true;
    // src/unknown/C4/C4C2DE.asm:41 AND #$00FF
    case 0xC4C348: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4C2DE.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC4C348.
    case 0xC4C34A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4C2DE.asm:42 CMP #$0003
    case 0xC4C34B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4C2DE.asm:42 CMP #$0003
    // Overlapping static entry reached from 0xC4C34B.
    case 0xC4C34D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C2DE.asm:43 BEQ @UNKNOWN2
    case 0xC4C34E: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C350: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C352: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C354: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C356: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C358: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4C358.
    case 0xC4C35A: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C35B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4C35B.
    case 0xC4C35D: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C35E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C360: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:44 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C361: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/unknown/C4/C4C2DE.asm:45 BRA @UNKNOWN3
    case 0xC4C365: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C367: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4C367.
    case 0xC4C369: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C36A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C36C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4C36C.
    case 0xC4C36E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C36F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C371: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4C371.
    case 0xC4C373: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C374: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x008000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    // Overlapping static entry reached from 0xC4C374.
    case 0xC4C376: cpu.execute_instruction<0x80>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C377: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C379: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:48 COPY_TO_VRAM1 BUFFER + $8000, VRAM::GAME_OVER_LAYER_1_TILES, 32768, $00
    case 0xC4C37A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC4C37E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC4C37E.
    case 0xC4C380: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC4C381: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC4C383: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    // Overlapping static entry reached from 0xC4C383.
    case 0xC4C385: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:51 LOADPTR BUFFER, $06
    case 0xC4C386: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC4C388: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x00D5E8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    // Overlapping static entry reached from 0xC4C388.
    case 0xC4C38A: cpu.execute_instruction<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC4C38B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    // Overlapping static entry reached from 0xC4C38A.
    case 0xC4C38C: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC4C38D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    // Overlapping static entry reached from 0xC4C38D.
    case 0xC4C38F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:52 LOADPTR UNKNOWN_E1D5E8, @LOCAL00
    case 0xC4C390: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4C392: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4C394: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4C396: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:53 MOVE_INT $06, @LOCAL01
    case 0xC4C398: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C2DE.asm:54 JSL DECOMP
    case 0xC4C39A: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C39E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3A0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3A4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC4C3A6.
    case 0xC4C3A8: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC4C3A9.
    case 0xC4C3AB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    case 0xC4C3B0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC4C3AE.
    case 0xC4C3B1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/unknown/C4/C4C2DE.asm:55 COPY_TO_VRAM1P $06, VRAM::GAME_OVER_LAYER_1_TILEMAP, 2048, $00
    // Overlapping static entry reached from 0xC4C3B1.
    case 0xC4C3B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    // Overlapping static entry reached from 0xC4C3B3.
    case 0xC4C3B5: cpu.execute_instruction<0x00>(0x000002, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    // Overlapping static entry reached from 0xC4C3B4.
    case 0xC4C3B6: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3B9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3BA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3BC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3BD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C2DE.asm:57 PROMOTENEARPTR $0200, @TMP
    case 0xC4C3BF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C2DE.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC4C3C1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4C3C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F4, 2); else cpu.execute_instruction<0xA9>(0x00D4F4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    // Overlapping static entry reached from 0xC4C3C3.
    case 0xC4C3C5: cpu.execute_instruction<0xD4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4C3C6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    // Overlapping static entry reached from 0xC4C3C5.
    case 0xC4C3C7: cpu.execute_instruction<0x0E>(0x00E1A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4C3C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    // Overlapping static entry reached from 0xC4C3C8.
    case 0xC4C3CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:59 LOADPTR UNKNOWN_E1D4F4, @LOCAL00
    case 0xC4C3CB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC4C3CD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC4C3CF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC4C3D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:60 MOVE_INT @TMP, @LOCAL01
    case 0xC4C3D3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C2DE.asm:61 JSL DECOMP
    case 0xC4C3D5: cpu.execute_instruction<0x22>(0xC41A9E, 4); return true;
    // src/unknown/C4/C4C2DE.asm:62 LDY #$02E0
    case 0xC4C3D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E0, 2); else cpu.execute_instruction<0xA0>(0x0002E0, 3); return true;
    // src/unknown/C4/C4C2DE.asm:62 LDY #$02E0
    // Overlapping static entry reached from 0xC4C3D9.
    case 0xC4C3DB: cpu.execute_instruction<0x02>(0x000084, 2); return true;
    // src/unknown/C4/C4C2DE.asm:63 STY @LOCAL02
    case 0xC4C3DC: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC4C3DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC4C3E0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC4C3E2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:64 MOVE_INT @TMP, @LOCAL00
    case 0xC4C3E4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C2DE.asm:65 LDX #$0020
    case 0xC4C3E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4C2DE.asm:65 LDX #$0020
    // Overlapping static entry reached from 0xC4C3E6.
    case 0xC4C3E8: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/unknown/C4/C4C2DE.asm:66 TYA
    case 0xC4C3E9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:67 JSL MEMCPY16
    case 0xC4C3EA: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4C2DE.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C3EE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:69 STZ_BADOPT @LOCAL00
    case 0xC4C3F0: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/unknown/C4/C4C2DE.asm:70 LDX #$00C0
    case 0xC4C3F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4C2DE.asm:70 LDX #$00C0
    // Overlapping static entry reached from 0xC4C3F2.
    case 0xC4C3F4: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC4C3F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C2DE.asm:72 LDA #$0220
    case 0xC4C3F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000220, 3); return true;
    // src/unknown/C4/C4C2DE.asm:72 LDA #$0220
    // Overlapping static entry reached from 0xC4C3F7.
    case 0xC4C3F9: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:73 JSL MEMSET16
    case 0xC4C3FA: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C4C2DE.asm:74 LDY @LOCAL02
    case 0xC4C3FE: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4C2DE.asm:75 TYA
    case 0xC4C400: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC4C401: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC4C403: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC4C404: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC4C406: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC4C407: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C2DE.asm:76 PROMOTENEARPTRA @TMP
    case 0xC4C409: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C2DE.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC4C40B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC4C40D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC4C40F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC4C411: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C2DE.asm:78 MOVE_INT @TMP, @LOCAL00
    case 0xC4C413: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C2DE.asm:79 LDX #$0020
    case 0xC4C415: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/unknown/C4/C4C2DE.asm:79 LDX #$0020
    // Overlapping static entry reached from 0xC4C415.
    case 0xC4C417: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C2DE.asm:80 LDA #$0240
    case 0xC4C418: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4C2DE.asm:80 LDA #$0240
    // Overlapping static entry reached from 0xC4C418.
    case 0xC4C41A: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:81 JSL MEMCPY16
    case 0xC4C41B: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4C2DE.asm:82 JSL UNKNOWN_C200D9
    case 0xC4C41F: cpu.execute_instruction<0x22>(0xC200D9, 4); return true;
    // src/unknown/C4/C4C2DE.asm:83 JSL LOAD_WINDOW_GFX
    case 0xC4C423: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/unknown/C4/C4C2DE.asm:87 LDA #$0001
    case 0xC4C427: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C2DE.asm:87 LDA #$0001
    // Overlapping static entry reached from 0xC4C427.
    case 0xC4C429: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:88 JSL UNKNOWN_C44963
    case 0xC4C42A: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/unknown/C4/C4C2DE.asm:90 JSL UNKNOWN_C47F87
    case 0xC4C42E: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/unknown/C4/C4C2DE.asm:91 LDA #$0018
    case 0xC4C432: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4C2DE.asm:91 LDA #$0018
    // Overlapping static entry reached from 0xC4C432.
    case 0xC4C434: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C2DE.asm:92 JSL UNKNOWN_C0856B
    case 0xC4C435: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4C2DE.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C439: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C2DE.asm:94 LDA #$0005
    case 0xC4C43B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x008D05, 3); return true;
    // src/unknown/C4/C4C2DE.asm:95 STA TM_MIRROR
    case 0xC4C43D: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C4C2DE.asm:95 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C43B.
    case 0xC4C43E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:95 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4C43E.
    case 0xC4C43F: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C2DE.asm:96 REP #PROC_FLAGS::ACCUM8
    case 0xC4C440: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C2DE.asm:97 STZ PARTY_MEMBERS_ALIVE_OVERWORLD
    case 0xC4C442: cpu.execute_instruction<0x9C>(0x004DC4, 3); return true;
    // src/unknown/C4/C4C2DE.asm:98 STZ BG2_Y_POS
    case 0xC4C445: cpu.execute_instruction<0x9C>(0x000037, 3); return true;
    // src/unknown/C4/C4C2DE.asm:99 STZ BG2_X_POS
    case 0xC4C448: cpu.execute_instruction<0x9C>(0x000035, 3); return true;
    // src/unknown/C4/C4C2DE.asm:100 STZ BG1_X_POS
    case 0xC4C44B: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/unknown/C4/C4C2DE.asm:101 STZ BG1_X_POS
    case 0xC4C44E: cpu.execute_instruction<0x9C>(0x000031, 3); return true;
    // src/unknown/C4/C4C2DE.asm:102 LDX #$0001
    case 0xC4C451: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4C2DE.asm:102 LDX #$0001
    // Overlapping static entry reached from 0xC4C451.
    case 0xC4C453: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/unknown/C4/C4C2DE.asm:103 TXA
    case 0xC4C454: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C2DE.asm:104 JSL FADE_IN
    case 0xC4C455: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/unknown/C4/C4C2DE.asm:105 JSL UNKNOWN_C0888B
    case 0xC4C459: cpu.execute_instruction<0x22>(0xC0888B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C2DE.asm:106 END_C_FUNCTION
    case 0xC4C45D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C2DE.asm:106 END_C_FUNCTION
    case 0xC4C45E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C45F.asm (unresolved).
bool execute_unresolved_c4_c4c45f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C45F.asm:3 BEGIN_C_FUNCTION
    case 0xC4C45F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    case 0xC4C461: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    case 0xC4C462: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    case 0xC4C463: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    case 0xC4C464: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C464.
    case 0xC4C466: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    case 0xC4C467: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C45F.asm:10 END_STACK_VARS
    case 0xC4C468: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:11 TAX
    case 0xC4C469: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:12 STX @LOCAL03
    case 0xC4C46A: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C45F.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4C46C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C45F.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C46C.
    case 0xC4C46E: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C45F.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4C46F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C45F.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4C471: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C45F.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C471.
    case 0xC4C473: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C45F.asm:13 LOADPTR BUFFER + $7800, @VIRTUAL06
    case 0xC4C474: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F.asm:14 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4C476: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:14 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4C478: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:14 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4C47A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:14 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC4C47C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C47E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C480: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C482: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:15 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C484: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C486: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C486.
    case 0xC4C488: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C489: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C48B: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C48C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C48E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C48F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C45F.asm:16 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 2, @VIRTUAL06
    case 0xC4C491: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C45F.asm:17 REP #PROC_FLAGS::ACCUM8
    case 0xC4C493: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C495: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C497: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C499: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:18 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C49B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C45F.asm:19 LDA #BPP4PALETTE_SIZE * 6
    case 0xC4C49D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0000C0, 3); return true;
    // src/unknown/C4/C4C45F.asm:19 LDA #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4C49D.
    case 0xC4C49F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C45F.asm:20 JSL MEMCPY24
    case 0xC4C4A0: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4C45F.asm:21 LDX @LOCAL03
    case 0xC4C4A4: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C4/C4C45F.asm:22 TXA
    case 0xC4C4A6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:23 ASL
    case 0xC4C4A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:24 ASL
    case 0xC4C4A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:25 ASL
    case 0xC4C4A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:26 ASL
    case 0xC4C4AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:27 ASL
    case 0xC4C4AB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4C45F.asm:28 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4AC: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4C45F.asm:28 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4AE: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:28 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4B0: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:28 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4B2: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4C45F.asm:29 CLC
    case 0xC4C4B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:30 ADC @VIRTUAL06
    case 0xC4C4B5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C45F.asm:31 STA @VIRTUAL06
    case 0xC4C4B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C45F.asm:32 STA @LOCAL00
    case 0xC4C4B9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C45F.asm:33 LDA @VIRTUAL06+2
    case 0xC4C4BB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C45F.asm:34 STA @LOCAL00+2
    case 0xC4C4BD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0002E0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4BF.
    case 0xC4C4C1: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4C4: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4C5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4C7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4C8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C45F.asm:35 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 7, @VIRTUAL06
    case 0xC4C4CA: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C45F.asm:36 REP #PROC_FLAGS::ACCUM8
    case 0xC4C4CC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C4CE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C4D0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C4D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:37 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C4D4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C45F.asm:38 LDA #BPP4PALETTE_SIZE * 1
    case 0xC4C4D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C4C45F.asm:38 LDA #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C4D6.
    case 0xC4C4D8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C45F.asm:39 JSL MEMCPY24
    case 0xC4C4D9: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/unknown/C4/C4C45F.asm:40 LDX @LOCAL03
    case 0xC4C4DD: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/unknown/C4/C4C45F.asm:41 TXA
    case 0xC4C4DF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:42 DEC
    case 0xC4C4E0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:43 ASL
    case 0xC4C4E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:44 ASL
    case 0xC4C4E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:45 ASL
    case 0xC4C4E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:46 ASL
    case 0xC4C4E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:47 ASL
    case 0xC4C4E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4C45F.asm:48 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4E6: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4C45F.asm:48 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4E8: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:48 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4EA: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:48 MOVE_INTX @LOCAL02, @VIRTUAL06
    case 0xC4C4EC: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4C45F.asm:49 CLC
    case 0xC4C4EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C45F.asm:50 ADC @VIRTUAL06
    case 0xC4C4EF: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C45F.asm:51 STA @VIRTUAL06
    case 0xC4C4F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C45F.asm:52 STA @LOCAL00
    case 0xC4C4F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C45F.asm:53 LDA @VIRTUAL06+2
    case 0xC4C4F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C45F.asm:54 STA @LOCAL00+2
    case 0xC4C4F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C4F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0002C0, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C4F9.
    case 0xC4C4FB: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C4FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C4FE: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C4FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C501: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C502: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C45F.asm:55 PROMOTENEARPTR PALETTES + BPP4PALETTE_SIZE * 6, @VIRTUAL06
    case 0xC4C504: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C45F.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC4C506: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C45F.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C508: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C45F.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C50A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C45F.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C50C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C45F.asm:57 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C50E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C45F.asm:58 LDA #BPP4PALETTE_SIZE * 1
    case 0xC4C510: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/unknown/C4/C4C45F.asm:58 LDA #BPP4PALETTE_SIZE * 1
    // Overlapping static entry reached from 0xC4C510.
    case 0xC4C512: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C45F.asm:59 JSL MEMCPY24
    case 0xC4C513: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C45F.asm:60 END_C_FUNCTION
    case 0xC4C517: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C45F.asm:60 END_C_FUNCTION
    case 0xC4C518: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C519.asm (unresolved).
bool execute_unresolved_c4_c4c519_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C519.asm:3 BEGIN_C_FUNCTION
    case 0xC4C519: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC4C51B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC4C51C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC4C51D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC4C51E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C51E.
    case 0xC4C520: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC4C521: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C519.asm:8 END_STACK_VARS
    case 0xC4C522: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:9 TXY
    case 0xC4C523: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:10 STY @LOCAL01
    case 0xC4C524: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:11 TAX
    case 0xC4C526: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:12 JSR UNKNOWN_C4C45F
    case 0xC4C527: cpu.execute_instruction<0x20>(0x00C45F, 3); return true;
    // src/unknown/C4/C4C519.asm:13 LDY @LOCAL01
    case 0xC4C52A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:14 TYA
    case 0xC4C52C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:15 JSL INITIALIZE_MAP_PALETTE_FADE
    case 0xC4C52D: cpu.execute_instruction<0x22>(0xC49208, 4); return true;
    // src/unknown/C4/C4C519.asm:16 BRA @UNKNOWN2
    case 0xC4C531: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/unknown/C4/C4C519.asm:18 LDA PAD_PRESS
    case 0xC4C533: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4C519.asm:19 BEQ @UNKNOWN1
    case 0xC4C536: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C519.asm:20 LDA #.LOWORD(-1)
    case 0xC4C538: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C519.asm:20 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C538.
    case 0xC4C53A: cpu.execute_instruction<0xFF>(0x222880, 4); return true;
    // src/unknown/C4/C4C519.asm:21 BRA @UNKNOWN3
    case 0xC4C53B: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/unknown/C4/C4C519.asm:23 JSL UNKNOWN_C492D2
    case 0xC4C53D: cpu.execute_instruction<0x22>(0xC492D2, 4); return true;
    // src/unknown/C4/C4C519.asm:23 JSL UNKNOWN_C492D2
    // Overlapping static entry reached from 0xC4C53A.
    case 0xC4C53E: cpu.execute_instruction<0xD2>(0x000092, 2); return true;
    // src/unknown/C4/C4C519.asm:23 JSL UNKNOWN_C492D2
    // Overlapping static entry reached from 0xC4C53E.
    case 0xC4C540: cpu.execute_instruction<0xC4>(0x000022, 2); return true;
    // src/unknown/C4/C4C519.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C541: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C4C519.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC4C540.
    case 0xC4C542: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/unknown/C4/C4C519.asm:24 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC4C542.
    case 0xC4C544: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0012A4, 3); return true;
    // src/unknown/C4/C4C519.asm:25 LDY @LOCAL01
    case 0xC4C545: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:25 LDY @LOCAL01
    // Overlapping static entry reached from 0xC4C544.
    case 0xC4C546: cpu.execute_instruction<0x12>(0x000088, 2); return true;
    // src/unknown/C4/C4C519.asm:26 DEY
    case 0xC4C547: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/unknown/C4/C4C519.asm:27 STY @LOCAL01
    case 0xC4C548: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:29 LDY @LOCAL01
    case 0xC4C54A: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/unknown/C4/C4C519.asm:30 BNE @UNKNOWN0
    case 0xC4C54C: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4C54E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007800, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC4C54E.
    case 0xC4C550: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4C551: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4C553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    // Overlapping static entry reached from 0xC4C553.
    case 0xC4C555: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C519.asm:31 LOADPTR BUFFER + $7800, @LOCAL00
    case 0xC4C556: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C519.asm:32 LDX #BPP4PALETTE_SIZE * 6
    case 0xC4C558: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000C0, 2); else cpu.execute_instruction<0xA2>(0x0000C0, 3); return true;
    // src/unknown/C4/C4C519.asm:32 LDX #BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC4C558.
    case 0xC4C55A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C519.asm:33 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC4C55B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/unknown/C4/C4C519.asm:33 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC4C55B.
    case 0xC4C55D: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C519.asm:34 JSL MEMCPY16
    case 0xC4C55E: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/unknown/C4/C4C519.asm:35 LDA #0
    case 0xC4C562: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C519.asm:35 LDA #0
    // Overlapping static entry reached from 0xC4C562.
    case 0xC4C564: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C519.asm:37 END_C_FUNCTION
    case 0xC4C565: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C519.asm:37 END_C_FUNCTION
    case 0xC4C566: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C58F.asm (unresolved).
bool execute_unresolved_c4_c4c58f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C58F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C58F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4C591: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4C592: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4C593: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4C594: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C594.
    case 0xC4C596: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4C597: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C58F.asm:9 END_STACK_VARS
    case 0xC4C598: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C58F.asm:10 STA @VIRTUAL02
    case 0xC4C599: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C58F.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4C596.
    case 0xC4C59A: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C59B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C59B.
    case 0xC4C59D: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C59E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C5A0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C5A1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C5A3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C5A4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/unknown/C4/C4C58F.asm:11 PROMOTENEARPTR PALETTES, @VIRTUAL06
    case 0xC4C5A6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/unknown/C4/C4C58F.asm:12 REP #PROC_FLAGS::ACCUM8
    case 0xC4C5A8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C5AA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C5AC: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C5AE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C58F.asm:13 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC4C5B0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C58F.asm:14 LDA #^PALETTES
    case 0xC4C5B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/unknown/C4/C4C58F.asm:14 LDA #^PALETTES
    // Overlapping static entry reached from 0xC4C5B2.
    case 0xC4C5B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4C58F.asm:15 STA @LOCAL01+2
    case 0xC4C5B5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4C5B7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4C5B9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4C5BB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C58F.asm:16 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4C5BD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C5BF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C5C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C5C3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C58F.asm:17 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C5C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C58F.asm:18 LDA #100
    case 0xC4C5C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000064, 2); else cpu.execute_instruction<0xA9>(0x000064, 3); return true;
    // src/unknown/C4/C4C58F.asm:18 LDA #100
    // Overlapping static entry reached from 0xC4C5C7.
    case 0xC4C5C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C58F.asm:19 JSL UNKNOWN_C4954C
    case 0xC4C5CA: cpu.execute_instruction<0x22>(0xC4954C, 4); return true;
    // src/unknown/C4/C4C58F.asm:20 LDX #.LOWORD(-1)
    case 0xC4C5CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C58F.asm:20 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C5CE.
    case 0xC4C5D0: cpu.execute_instruction<0xFF>(0x2202A5, 4); return true;
    // src/unknown/C4/C4C58F.asm:21 LDA @VIRTUAL02
    case 0xC4C5D1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C58F.asm:22 JSL UNKNOWN_C496E7
    case 0xC4C5D3: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/unknown/C4/C4C58F.asm:22 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC4C5D0.
    case 0xC4C5D4: cpu.execute_instruction<0xE7>(0x000096, 2); return true;
    // src/unknown/C4/C4C58F.asm:22 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC4C5D4.
    case 0xC4C5D6: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C58F.asm:23 LDA #0
    case 0xC4C5D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C58F.asm:23 LDA #0
    // Overlapping static entry reached from 0xC4C5D6.
    case 0xC4C5D8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4C58F.asm:23 LDA #0
    // Overlapping static entry reached from 0xC4C5D7.
    case 0xC4C5D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4C58F.asm:24 STA @LOCAL02
    case 0xC4C5DA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C58F.asm:25 BRA @UNKNOWN1
    case 0xC4C5DC: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/unknown/C4/C4C58F.asm:27 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4C5DE: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/unknown/C4/C4C58F.asm:28 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C5E2: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C4C58F.asm:29 LDA @LOCAL02
    case 0xC4C5E6: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C58F.asm:30 INC
    case 0xC4C5E8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C58F.asm:31 STA @LOCAL02
    case 0xC4C5E9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C58F.asm:33 CMP @VIRTUAL02
    case 0xC4C5EB: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4C58F.asm:34 BCC @UNKNOWN0
    case 0xC4C5ED: cpu.execute_instruction<0x90>(0x0000EF, 2); return true;
    // src/unknown/C4/C4C58F.asm:35 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C5EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C58F.asm:36 LDA #<-1
    case 0xC4C5F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0085FF, 3); return true;
    // src/unknown/C4/C4C58F.asm:37 STA @LOCAL00
    case 0xC4C5F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C58F.asm:37 STA @LOCAL00
    // Overlapping static entry reached from 0xC4C5F1.
    case 0xC4C5F4: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/unknown/C4/C4C58F.asm:38 LDX #BPP4PALETTE_SIZE * 16
    case 0xC4C5F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/unknown/C4/C4C58F.asm:38 LDX #BPP4PALETTE_SIZE * 16
    // Overlapping static entry reached from 0xC4C5F5.
    case 0xC4C5F7: cpu.execute_instruction<0x02>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C58F.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC4C5F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C58F.asm:40 LDA #.LOWORD(PALETTES)
    case 0xC4C5FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/unknown/C4/C4C58F.asm:40 LDA #.LOWORD(PALETTES)
    // Overlapping static entry reached from 0xC4C5FA.
    case 0xC4C5FC: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/unknown/C4/C4C58F.asm:41 JSL MEMSET16
    case 0xC4C5FD: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/unknown/C4/C4C58F.asm:42 LDA #24
    case 0xC4C601: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/unknown/C4/C4C58F.asm:42 LDA #24
    // Overlapping static entry reached from 0xC4C601.
    case 0xC4C603: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4C58F.asm:43 JSL UNKNOWN_C0856B
    case 0xC4C604: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4C58F.asm:44 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C608: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C58F.asm:45 END_C_FUNCTION
    case 0xC4C60C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4C58F.asm:45 END_C_FUNCTION
    case 0xC4C60D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C60E.asm (unresolved).
bool execute_unresolved_c4_c4c60e_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C60E.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C60E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC4C610: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC4C611: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC4C612: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC4C613: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C613.
    case 0xC4C615: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC4C616: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C60E.asm:7 END_STACK_VARS
    case 0xC4C617: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C60E.asm:8 STA @VIRTUAL02
    case 0xC4C618: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C60E.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4C615.
    case 0xC4C619: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/unknown/C4/C4C60E.asm:9 LDX #.LOWORD(-1)
    case 0xC4C61A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C60E.asm:9 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C61A.
    case 0xC4C61C: cpu.execute_instruction<0xFF>(0x2202A5, 4); return true;
    // src/unknown/C4/C4C60E.asm:10 LDA @VIRTUAL02
    case 0xC4C61D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C60E.asm:11 JSL UNKNOWN_C496E7
    case 0xC4C61F: cpu.execute_instruction<0x22>(0xC496E7, 4); return true;
    // src/unknown/C4/C4C60E.asm:11 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC4C61C.
    case 0xC4C620: cpu.execute_instruction<0xE7>(0x000096, 2); return true;
    // src/unknown/C4/C4C60E.asm:11 JSL UNKNOWN_C496E7
    // Overlapping static entry reached from 0xC4C620.
    case 0xC4C622: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C60E.asm:12 LDA #0
    case 0xC4C623: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C60E.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4C622.
    case 0xC4C624: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4C60E.asm:12 LDA #0
    // Overlapping static entry reached from 0xC4C623.
    case 0xC4C625: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4C60E.asm:13 STA @LOCAL00
    case 0xC4C626: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C60E.asm:14 BRA @UNKNOWN1
    case 0xC4C628: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/unknown/C4/C4C60E.asm:16 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC4C62A: cpu.execute_instruction<0x22>(0xC426ED, 4); return true;
    // src/unknown/C4/C4C60E.asm:17 JSL OAM_CLEAR
    case 0xC4C62E: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C4/C4C60E.asm:18 JSL RUN_ACTIONSCRIPT_FRAME
    case 0xC4C632: cpu.execute_instruction<0x22>(0xC09466, 4); return true;
    // src/unknown/C4/C4C60E.asm:19 JSL UPDATE_SCREEN
    case 0xC4C636: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C4/C4C60E.asm:20 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C63A: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C4C60E.asm:21 LDA @LOCAL00
    case 0xC4C63E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4C60E.asm:22 INC
    case 0xC4C640: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4C60E.asm:23 STA @LOCAL00
    case 0xC4C641: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C60E.asm:25 CMP @VIRTUAL02
    case 0xC4C643: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4C60E.asm:26 BCC @UNKNOWN0
    case 0xC4C645: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/unknown/C4/C4C60E.asm:27 JSL UNKNOWN_C49740
    case 0xC4C647: cpu.execute_instruction<0x22>(0xC49740, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C60E.asm:28 END_C_FUNCTION
    case 0xC4C64B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4C60E.asm:28 END_C_FUNCTION
    case 0xC4C64C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C64D.asm (unresolved).
bool execute_unresolved_c4_c4c64d_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C64D.asm:3 BEGIN_C_FUNCTION
    case 0xC4C64D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC4C64F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC4C650: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC4C651: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C651.
    case 0xC4C653: cpu.execute_instruction<0xFF>(0x3CA95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C64D.asm:7 END_STACK_VARS
    case 0xC4C654: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4C64D.asm:8 LDA #60
    case 0xC4C655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4C64D.asm:8 LDA #60
    // Overlapping static entry reached from 0xC4C655.
    case 0xC4C657: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:9 JSR SKIPPABLE_PAUSE
    case 0xC4C658: cpu.execute_instruction<0x20>(0x00C567, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4C65B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00DE7D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    // Overlapping static entry reached from 0xC4C65B.
    case 0xC4C65D: cpu.execute_instruction<0xDE>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4C65E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4C660: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    // Overlapping static entry reached from 0xC4C660.
    case 0xC4C662: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4C663: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:210 JSL DISPLAY_TEXT
    // Macro caller: src/unknown/C4/C4C64D.asm:10 DISPLAY_TEXT_PTR MSG_SYS_COMEBACK
    case 0xC4C665: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/unknown/C4/C4C64D.asm:11 JSL UNKNOWN_C1DD5F
    case 0xC4C669: cpu.execute_instruction<0x22>(0xC1DD5F, 4); return true;
    // src/unknown/C4/C4C64D.asm:12 LDA EVENT_FLAG_NOCONTINUE_SELECTED
    case 0xC4C66D: cpu.execute_instruction<0xAF>(0xC30184, 4); return true;
    // src/unknown/C4/C4C64D.asm:13 JSL GET_EVENT_FLAG
    case 0xC4C671: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C4/C4C64D.asm:14 CMP #0
    case 0xC4C675: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:14 CMP #0
    // Overlapping static entry reached from 0xC4C675.
    case 0xC4C677: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C64D.asm:15 BNE @UNKNOWN0
    case 0xC4C678: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/unknown/C4/C4C64D.asm:16 LDA #60
    case 0xC4C67A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4C64D.asm:16 LDA #60
    // Overlapping static entry reached from 0xC4C67A.
    case 0xC4C67C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:17 JSR SKIPPABLE_PAUSE
    case 0xC4C67D: cpu.execute_instruction<0x20>(0x00C567, 3); return true;
    // src/unknown/C4/C4C64D.asm:18 LDA #.LOWORD(-1)
    case 0xC4C680: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C64D.asm:18 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C680.
    case 0xC4C682: cpu.execute_instruction<0xFF>(0xC7164C, 4); return true;
    // src/unknown/C4/C4C64D.asm:19 JMP @UNKNOWN9
    case 0xC4C683: cpu.execute_instruction<0x4C>(0x00C716, 3); return true;
    // src/unknown/C4/C4C64D.asm:21 LDA #60
    case 0xC4C686: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4C64D.asm:21 LDA #60
    // Overlapping static entry reached from 0xC4C686.
    case 0xC4C688: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:22 JSR SKIPPABLE_PAUSE
    case 0xC4C689: cpu.execute_instruction<0x20>(0x00C567, 3); return true;
    // src/unknown/C4/C4C64D.asm:23 CMP #0
    case 0xC4C68C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:23 CMP #0
    // Overlapping static entry reached from 0xC4C68C.
    case 0xC4C68E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:24 BEQ @UNKNOWN1
    case 0xC4C68F: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/unknown/C4/C4C64D.asm:25 LDA #0
    case 0xC4C691: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:25 LDA #0
    // Overlapping static entry reached from 0xC4C691.
    case 0xC4C693: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/unknown/C4/C4C64D.asm:26 JMP @UNKNOWN9
    case 0xC4C694: cpu.execute_instruction<0x4C>(0x00C716, 3); return true;
    // src/unknown/C4/C4C64D.asm:28 LDX #90
    case 0xC4C697: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00005A, 3); return true;
    // src/unknown/C4/C4C64D.asm:28 LDX #90
    // Overlapping static entry reached from 0xC4C697.
    case 0xC4C699: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:29 LDA #1
    case 0xC4C69A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:29 LDA #1
    // Overlapping static entry reached from 0xC4C69A.
    case 0xC4C69C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:30 JSR UNKNOWN_C4C519
    case 0xC4C69D: cpu.execute_instruction<0x20>(0x00C519, 3); return true;
    // src/unknown/C4/C4C64D.asm:31 CMP #0
    case 0xC4C6A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:31 CMP #0
    // Overlapping static entry reached from 0xC4C6A0.
    case 0xC4C6A2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:32 BEQ @UNKNOWN2
    case 0xC4C6A3: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:33 LDA #0
    case 0xC4C6A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:33 LDA #0
    // Overlapping static entry reached from 0xC4C6A5.
    case 0xC4C6A7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:34 BRA @UNKNOWN9
    case 0xC4C6A8: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C4/C4C64D.asm:36 LDA #1
    case 0xC4C6AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:36 LDA #1
    // Overlapping static entry reached from 0xC4C6AA.
    case 0xC4C6AC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:37 JSR SKIPPABLE_PAUSE
    case 0xC4C6AD: cpu.execute_instruction<0x20>(0x00C567, 3); return true;
    // src/unknown/C4/C4C64D.asm:38 CMP #0
    case 0xC4C6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:38 CMP #0
    // Overlapping static entry reached from 0xC4C6B0.
    case 0xC4C6B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:39 BEQ @UNKNOWN3
    case 0xC4C6B3: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:40 LDA #0
    case 0xC4C6B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:40 LDA #0
    // Overlapping static entry reached from 0xC4C6B5.
    case 0xC4C6B7: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:41 BRA @UNKNOWN9
    case 0xC4C6B8: cpu.execute_instruction<0x80>(0x00005C, 2); return true;
    // src/unknown/C4/C4C64D.asm:43 LDX #90
    case 0xC4C6BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00005A, 3); return true;
    // src/unknown/C4/C4C64D.asm:43 LDX #90
    // Overlapping static entry reached from 0xC4C6BA.
    case 0xC4C6BC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:44 LDA #2
    case 0xC4C6BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4C64D.asm:44 LDA #2
    // Overlapping static entry reached from 0xC4C6BD.
    case 0xC4C6BF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:45 JSR UNKNOWN_C4C519
    case 0xC4C6C0: cpu.execute_instruction<0x20>(0x00C519, 3); return true;
    // src/unknown/C4/C4C64D.asm:46 CMP #0
    case 0xC4C6C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:46 CMP #0
    // Overlapping static entry reached from 0xC4C6C3.
    case 0xC4C6C5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:47 BEQ @UNKNOWN4
    case 0xC4C6C6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:48 LDA #0
    case 0xC4C6C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:48 LDA #0
    // Overlapping static entry reached from 0xC4C6C8.
    case 0xC4C6CA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:49 BRA @UNKNOWN9
    case 0xC4C6CB: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C4C64D.asm:51 LDA #1
    case 0xC4C6CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:51 LDA #1
    // Overlapping static entry reached from 0xC4C6CD.
    case 0xC4C6CF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:52 JSR SKIPPABLE_PAUSE
    case 0xC4C6D0: cpu.execute_instruction<0x20>(0x00C567, 3); return true;
    // src/unknown/C4/C4C64D.asm:53 CMP #0
    case 0xC4C6D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:53 CMP #0
    // Overlapping static entry reached from 0xC4C6D3.
    case 0xC4C6D5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:54 BEQ @UNKNOWN5
    case 0xC4C6D6: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:55 LDA #0
    case 0xC4C6D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:55 LDA #0
    // Overlapping static entry reached from 0xC4C6D8.
    case 0xC4C6DA: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:56 BRA @UNKNOWN9
    case 0xC4C6DB: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/unknown/C4/C4C64D.asm:58 LDX #90
    case 0xC4C6DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005A, 2); else cpu.execute_instruction<0xA2>(0x00005A, 3); return true;
    // src/unknown/C4/C4C64D.asm:58 LDX #90
    // Overlapping static entry reached from 0xC4C6DD.
    case 0xC4C6DF: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:59 LDA #3
    case 0xC4C6E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4C64D.asm:59 LDA #3
    // Overlapping static entry reached from 0xC4C6E0.
    case 0xC4C6E2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:60 JSR UNKNOWN_C4C519
    case 0xC4C6E3: cpu.execute_instruction<0x20>(0x00C519, 3); return true;
    // src/unknown/C4/C4C64D.asm:61 CMP #0
    case 0xC4C6E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:61 CMP #0
    // Overlapping static entry reached from 0xC4C6E6.
    case 0xC4C6E8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:62 BEQ @UNKNOWN6
    case 0xC4C6E9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:63 LDA #0
    case 0xC4C6EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:63 LDA #0
    // Overlapping static entry reached from 0xC4C6EB.
    case 0xC4C6ED: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:64 BRA @UNKNOWN9
    case 0xC4C6EE: cpu.execute_instruction<0x80>(0x000026, 2); return true;
    // src/unknown/C4/C4C64D.asm:66 LDA #1
    case 0xC4C6F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C64D.asm:66 LDA #1
    // Overlapping static entry reached from 0xC4C6F0.
    case 0xC4C6F2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:67 JSR SKIPPABLE_PAUSE
    case 0xC4C6F3: cpu.execute_instruction<0x20>(0x00C567, 3); return true;
    // src/unknown/C4/C4C64D.asm:68 CMP #0
    case 0xC4C6F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:68 CMP #0
    // Overlapping static entry reached from 0xC4C6F6.
    case 0xC4C6F8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:69 BEQ @UNKNOWN7
    case 0xC4C6F9: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:70 LDA #0
    case 0xC4C6FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:70 LDA #0
    // Overlapping static entry reached from 0xC4C6FB.
    case 0xC4C6FD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:71 BRA @UNKNOWN9
    case 0xC4C6FE: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4C64D.asm:73 LDX #8
    case 0xC4C700: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/unknown/C4/C4C64D.asm:73 LDX #8
    // Overlapping static entry reached from 0xC4C700.
    case 0xC4C702: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/unknown/C4/C4C64D.asm:74 LDA #4
    case 0xC4C703: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4C64D.asm:74 LDA #4
    // Overlapping static entry reached from 0xC4C703.
    case 0xC4C705: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/unknown/C4/C4C64D.asm:75 JSR UNKNOWN_C4C519
    case 0xC4C706: cpu.execute_instruction<0x20>(0x00C519, 3); return true;
    // src/unknown/C4/C4C64D.asm:76 CMP #0
    case 0xC4C709: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:76 CMP #0
    // Overlapping static entry reached from 0xC4C709.
    case 0xC4C70B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C64D.asm:77 BEQ @UNKNOWN8
    case 0xC4C70C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4C64D.asm:78 LDA #0
    case 0xC4C70E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:78 LDA #0
    // Overlapping static entry reached from 0xC4C70E.
    case 0xC4C710: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4C64D.asm:79 BRA @UNKNOWN9
    case 0xC4C711: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/unknown/C4/C4C64D.asm:81 LDA #0
    case 0xC4C713: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C64D.asm:81 LDA #0
    // Overlapping static entry reached from 0xC4C713.
    case 0xC4C715: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C64D.asm:83 END_C_FUNCTION
    case 0xC4C716: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C64D.asm:83 END_C_FUNCTION
    case 0xC4C717: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C8A4.asm (unresolved).
bool execute_unresolved_c4_c4c8a4_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C8A4.asm:3 BEGIN_C_FUNCTION
    case 0xC4C8A4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC4C8A6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC4C8A7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC4C8A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C8A8.
    case 0xC4C8AA: cpu.execute_instruction<0xFF>(0xA49C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C8A4.asm:6 END_STACK_VARS
    case 0xC4C8AB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4C8A4.asm:7 STZ ENTITY_FADE_STATES_BUFFER
    case 0xC4C8AC: cpu.execute_instruction<0x9C>(0x00B4A4, 3); return true;
    // src/unknown/C4/C4C8A4.asm:7 STZ ENTITY_FADE_STATES_BUFFER
    // Overlapping static entry reached from 0xC4C8AA.
    case 0xC4C8AE: cpu.execute_instruction<0xB4>(0x00009C, 2); return true;
    // src/unknown/C4/C4C8A4.asm:8 STZ ENTITY_FADE_STATES_LENGTH
    case 0xC4C8AF: cpu.execute_instruction<0x9C>(0x00B4A6, 3); return true;
    // src/unknown/C4/C4C8A4.asm:8 STZ ENTITY_FADE_STATES_LENGTH
    // Overlapping static entry reached from 0xC4C8AE.
    case 0xC4C8B0: cpu.execute_instruction<0xA6>(0x0000B4, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC4C8B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C8B2.
    case 0xC4C8B4: cpu.execute_instruction<0x7C>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC4C8B5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC4C8B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C8B7.
    case 0xC4C8B9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:9 LOADPTR BUFFER + $7C00, @VIRTUAL06
    case 0xC4C8BA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC4C8BC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC4C8BE: cpu.execute_instruction<0x8D>(0x00B4AA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC4C8C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:10 MOVE_INT @VIRTUAL06, ENTITY_FADE_STATES
    case 0xC4C8C3: cpu.execute_instruction<0x8D>(0x00B4AC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8C6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8C8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C8A4.asm:11 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC4C8CC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4C8A4.asm:12 LDX #1024
    case 0xC4C8CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // src/unknown/C4/C4C8A4.asm:12 LDX #1024
    // Overlapping static entry reached from 0xC4C8CE.
    case 0xC4C8D0: cpu.execute_instruction<0x04>(0x0000E2, 2); return true;
    // src/unknown/C4/C4C8A4.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C8D1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C8A4.asm:13 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C8D0.
    case 0xC4C8D2: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // src/unknown/C4/C4C8A4.asm:14 LDA #0
    case 0xC4C8D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/unknown/C4/C4C8A4.asm:15 JSL MEMSET24
    case 0xC4C8D5: cpu.execute_instruction<0x22>(0xC08F15, 4); return true;
    // src/unknown/C4/C4C8A4.asm:15 JSL MEMSET24
    // Overlapping static entry reached from 0xC4C8D3.
    case 0xC4C8D6: cpu.execute_instruction<0x15>(0x00008F, 2); return true;
    // src/unknown/C4/C4C8A4.asm:15 JSL MEMSET24
    // Overlapping static entry reached from 0xC4C8D6.
    case 0xC4C8D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C8A4.asm:16 END_C_FUNCTION
    case 0xC4C8D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C8A4.asm:16 END_C_FUNCTION
    case 0xC4C8DA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C8DB.asm (unresolved).
bool execute_unresolved_c4_c4c8db_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C8DB.asm:3 BEGIN_C_FUNCTION
    case 0xC4C8DB: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/unknown/C4/C4C8DB.asm:6 LDX ENTITY_FADE_STATES_BUFFER
    case 0xC4C8DD: cpu.execute_instruction<0xAE>(0x00B4A4, 3); return true;
    // src/unknown/C4/C4C8DB.asm:7 CLC
    case 0xC4C8E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C8DB.asm:8 ADC ENTITY_FADE_STATES_BUFFER
    case 0xC4C8E1: cpu.execute_instruction<0x6D>(0x00B4A4, 3); return true;
    // src/unknown/C4/C4C8DB.asm:9 STA ENTITY_FADE_STATES_BUFFER
    case 0xC4C8E4: cpu.execute_instruction<0x8D>(0x00B4A4, 3); return true;
    // src/unknown/C4/C4C8DB.asm:10 TXA
    case 0xC4C8E7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C8DB.asm:11 END_C_FUNCTION
    case 0xC4C8E8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C8E9.asm (unresolved).
bool execute_unresolved_c4_c4c8e9_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C8E9.asm:3 BEGIN_C_FUNCTION
    case 0xC4C8E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC4C8EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC4C8EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC4C8ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC4C8EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C8EE.
    case 0xC4C8F0: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC4C8F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C8E9.asm:7 END_STACK_VARS
    case 0xC4C8F2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC4C8F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC4C8F0.
    case 0xC4C8F4: cpu.execute_instruction<0x06>(0x000064, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    case 0xC4C8F5: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:8 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC4C8F4.
    case 0xC4C8F6: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4C8E9.asm:9 CLC
    case 0xC4C8F7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4C8F8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4C8FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x000000, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C8FA.
    case 0xC4C8FC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4C8FD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4C8FF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4C901: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C901.
    case 0xC4C903: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/unknown/C4/C4C8E9.asm:10 VAR_ADD_CONST_INT_ASSIGN BUFFER, @VIRTUAL06
    case 0xC4C904: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C8E9.asm:11 BRA @UNKNOWN1
    case 0xC4C906: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/unknown/C4/C4C8E9.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC4C908: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4C8E9.asm:14 LDA #0
    case 0xC4C90A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/unknown/C4/C4C8E9.asm:15 STA [@VIRTUAL06]
    case 0xC4C90C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4C8E9.asm:15 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC4C90A.
    case 0xC4C90D: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/unknown/C4/C4C8E9.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC4C90E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4C8E9.asm:16 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC4C90D.
    case 0xC4C90F: cpu.execute_instruction<0x20>(0x0006E6, 3); return true;
    // src/unknown/C4/C4C8E9.asm:17 INC @VIRTUAL06
    case 0xC4C910: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4C8E9.asm:18 DEX
    case 0xC4C912: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4C8E9.asm:20 CPX #0
    case 0xC4C913: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/unknown/C4/C4C8E9.asm:20 CPX #0
    // Overlapping static entry reached from 0xC4C913.
    case 0xC4C915: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C8E9.asm:21 BNE @UNKNOWN0
    case 0xC4C916: cpu.execute_instruction<0xD0>(0x0000F0, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C8E9.asm:22 END_C_FUNCTION
    case 0xC4C918: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4C8E9.asm:22 END_C_FUNCTION
    case 0xC4C919: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4C91A.asm (unresolved).
bool execute_unresolved_c4_c4c91a_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4C91A.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4C91A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC4C91C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC4C91D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC4C91E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC4C91F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C91F.
    case 0xC4C921: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC4C922: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4C91A.asm:14 END_STACK_VARS
    case 0xC4C923: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:15 STX @VIRTUAL02
    case 0xC4C924: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:15 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC4C921.
    case 0xC4C925: cpu.execute_instruction<0x02>(0x000086, 2); return true;
    // src/unknown/C4/C4C91A.asm:16 STX @LOCAL06
    case 0xC4C926: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/unknown/C4/C4C91A.asm:17 STA @VIRTUAL04
    case 0xC4C928: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:18 STA @LOCAL05
    case 0xC4C92A: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/unknown/C4/C4C91A.asm:19 LDA @VIRTUAL02
    case 0xC4C92C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:20 BEQL @UNKNOWN15
    case 0xC4C92E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:20 BEQL @UNKNOWN15
    case 0xC4C930: cpu.execute_instruction<0x4C>(0x00CB4D, 3); return true;
    // src/unknown/C4/C4C91A.asm:21 LDA @VIRTUAL02
    case 0xC4C933: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:22 CMP #1
    case 0xC4C935: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:22 CMP #1
    // Overlapping static entry reached from 0xC4C935.
    case 0xC4C937: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:23 BEQL @UNKNOWN15
    case 0xC4C938: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:23 BEQL @UNKNOWN15
    case 0xC4C93A: cpu.execute_instruction<0x4C>(0x00CB4D, 3); return true;
    // src/unknown/C4/C4C91A.asm:24 LDA @VIRTUAL02
    case 0xC4C93D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:25 CMP #6
    case 0xC4C93F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/unknown/C4/C4C91A.asm:25 CMP #6
    // Overlapping static entry reached from 0xC4C93F.
    case 0xC4C941: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:26 BEQL @UNKNOWN15
    case 0xC4C942: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:26 BEQL @UNKNOWN15
    case 0xC4C944: cpu.execute_instruction<0x4C>(0x00CB4D, 3); return true;
    // src/unknown/C4/C4C91A.asm:27 LDA @VIRTUAL04
    case 0xC4C947: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:28 ASL
    case 0xC4C949: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:29 TAX
    case 0xC4C94A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:30 LDA ENTITY_TILE_HEIGHTS,X
    case 0xC4C94B: cpu.execute_instruction<0xBD>(0x002ABA, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4C91A.asm:31 BEQL @UNKNOWN15
    case 0xC4C94E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4C91A.asm:31 BEQL @UNKNOWN15
    case 0xC4C950: cpu.execute_instruction<0x4C>(0x00CB4D, 3); return true;
    // src/unknown/C4/C4C91A.asm:32 LDA ENTITY_FADE_ENTITY
    case 0xC4C953: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C4/C4C91A.asm:33 CMP #.LOWORD(-1)
    case 0xC4C956: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4C91A.asm:33 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C956.
    case 0xC4C958: cpu.execute_instruction<0xFF>(0x201DD0, 4); return true;
    // src/unknown/C4/C4C91A.asm:34 BNE @UNKNOWN4
    case 0xC4C959: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/unknown/C4/C4C91A.asm:35 JSR UNKNOWN_C4C8A4
    case 0xC4C95B: cpu.execute_instruction<0x20>(0x00C8A4, 3); return true;
    // src/unknown/C4/C4C91A.asm:35 JSR UNKNOWN_C4C8A4
    // Overlapping static entry reached from 0xC4C958.
    case 0xC4C95C: cpu.execute_instruction<0xA4>(0x0000C8, 2); return true;
    // src/unknown/C4/C4C91A.asm:36 STZ NEW_ENTITY_VAR3
    case 0xC4C95E: cpu.execute_instruction<0x9C>(0x000A3E, 3); return true;
    // src/unknown/C4/C4C91A.asm:37 STZ NEW_ENTITY_VAR2
    case 0xC4C961: cpu.execute_instruction<0x9C>(0x000A3C, 3); return true;
    // src/unknown/C4/C4C91A.asm:38 STZ NEW_ENTITY_VAR1
    case 0xC4C964: cpu.execute_instruction<0x9C>(0x000A3A, 3); return true;
    // src/unknown/C4/C4C91A.asm:39 STZ NEW_ENTITY_VAR0
    case 0xC4C967: cpu.execute_instruction<0x9C>(0x000A38, 3); return true;
    // src/unknown/C4/C4C91A.asm:40 LDY #0
    case 0xC4C96A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:40 LDY #0
    // Overlapping static entry reached from 0xC4C96A.
    case 0xC4C96C: cpu.execute_instruction<0x00>(0x0000BB, 2); return true;
    // src/unknown/C4/C4C91A.asm:41 TYX
    case 0xC4C96D: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:42 LDA #EVENT_SCRIPT::EVENT_859
    case 0xC4C96E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005B, 2); else cpu.execute_instruction<0xA9>(0x00035B, 3); return true;
    // src/unknown/C4/C4C91A.asm:42 LDA #EVENT_SCRIPT::EVENT_859
    // Overlapping static entry reached from 0xC4C96E.
    case 0xC4C970: cpu.execute_instruction<0x03>(0x000022, 2); return true;
    // src/unknown/C4/C4C91A.asm:43 JSL INIT_ENTITY_WIPE
    case 0xC4C971: cpu.execute_instruction<0x22>(0xC092F5, 4); return true;
    // src/unknown/C4/C4C91A.asm:43 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4C970.
    case 0xC4C972: cpu.execute_instruction<0xF5>(0x000092, 2); return true;
    // src/unknown/C4/C4C91A.asm:43 JSL INIT_ENTITY_WIPE
    // Overlapping static entry reached from 0xC4C972.
    case 0xC4C974: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00008D, 2); else cpu.execute_instruction<0xC0>(0x00A88D, 3); return true;
    // src/unknown/C4/C4C91A.asm:44 STA ENTITY_FADE_ENTITY
    case 0xC4C975: cpu.execute_instruction<0x8D>(0x00B4A8, 3); return true;
    // src/unknown/C4/C4C91A.asm:44 STA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC4C974.
    case 0xC4C976: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:44 STA ENTITY_FADE_ENTITY
    // Overlapping static entry reached from 0xC4C974.
    case 0xC4C977: cpu.execute_instruction<0xB4>(0x0000AD, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4C978: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C977.
    case 0xC4C979: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C979.
    case 0xC4C97A: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4C97B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C97A.
    case 0xC4C97C: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4C97D: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C97C.
    case 0xC4C97E: cpu.execute_instruction<0xAC>(0x0085B4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4C980: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:46 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4C97E.
    case 0xC4C981: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:47 LDA ENTITY_FADE_STATES_LENGTH
    case 0xC4C982: cpu.execute_instruction<0xAD>(0x00B4A6, 3); return true;
    // include/macros.asm:616 STA scratch
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C985: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:617 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C987: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:618 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C988: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:619 ADC scratch
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C989: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:620 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C98B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:621 ASL
    // Macro caller: src/unknown/C4/C4C91A.asm:48 OPTIMIZED_MULT @VIRTUAL04, 20
    case 0xC4C98C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:49 CLC
    case 0xC4C98D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:50 ADC @VIRTUAL06
    case 0xC4C98E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:51 STA @VIRTUAL06
    case 0xC4C990: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:52 STA @LOCAL04
    case 0xC4C992: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:53 LDA @VIRTUAL06+2
    case 0xC4C994: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:54 STA @LOCAL04+2
    case 0xC4C996: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4C91A.asm:55 LDA @LOCAL05
    case 0xC4C998: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/unknown/C4/C4C91A.asm:56 STA @VIRTUAL04
    case 0xC4C99A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:57 LDY #0
    case 0xC4C99C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:57 LDY #0
    // Overlapping static entry reached from 0xC4C99C.
    case 0xC4C99E: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:58 STA [@LOCAL04],Y
    case 0xC4C99F: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:59 LDA @VIRTUAL04
    case 0xC4C9A1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:60 ASL
    case 0xC4C9A3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:61 TAY
    case 0xC4C9A4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:62 STY @LOCAL03
    case 0xC4C9A5: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:63 TYA
    case 0xC4C9A7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:64 CLC
    case 0xC4C9A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:65 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4C9A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C4C91A.asm:65 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4C9A9.
    case 0xC4C9AB: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4C91A.asm:66 TAX
    case 0xC4C9AC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:67 LDA __BSS_START__,X
    case 0xC4C9AD: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:68 ORA #$4000
    case 0xC4C9B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x004000, 3); return true;
    // src/unknown/C4/C4C91A.asm:68 ORA #$4000
    // Overlapping static entry reached from 0xC4C9B0.
    case 0xC4C9B2: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:69 STA __BSS_START__,X
    case 0xC4C9B3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:70 LDA @VIRTUAL02
    case 0xC4C9B6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:71 LDY #2
    case 0xC4C9B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:71 LDY #2
    // Overlapping static entry reached from 0xC4C9B8.
    case 0xC4C9BA: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:72 STA [@LOCAL04],Y
    case 0xC4C9BB: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:73 LDY @LOCAL03
    case 0xC4C9BD: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:74 LDA ENTITY_SIZES,Y
    case 0xC4C9BF: cpu.execute_instruction<0xB9>(0x002B6E, 3); return true;
    // src/unknown/C4/C4C91A.asm:75 STA @LOCAL02
    case 0xC4C9C2: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4C9C4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4C9C6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4C9C8: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:76 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4C9CA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4C91A.asm:77 LDA #6
    case 0xC4C9CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C4C91A.asm:77 LDA #6
    // Overlapping static entry reached from 0xC4C9CC.
    case 0xC4C9CE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:78 CLC
    case 0xC4C9CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:79 ADC @VIRTUAL0A
    case 0xC4C9D0: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:80 STA @VIRTUAL0A
    case 0xC4C9D2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:81 LDA @LOCAL02
    case 0xC4C9D4: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:82 ASL
    case 0xC4C9D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:83 TAX
    case 0xC4C9D7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:84 LDA f:UNKNOWN_C42A63,X
    case 0xC4C9D8: cpu.execute_instruction<0xBF>(0xC42A63, 4); return true;
    // src/unknown/C4/C4C91A.asm:85 STA [@VIRTUAL0A]
    case 0xC4C9DC: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:86 LDA ENTITY_TILE_HEIGHTS,Y
    case 0xC4C9DE: cpu.execute_instruction<0xB9>(0x002ABA, 3); return true;
    // src/unknown/C4/C4C91A.asm:87 ASL
    case 0xC4C9E1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:88 ASL
    case 0xC4C9E2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:89 ASL
    case 0xC4C9E3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:90 STA @LOCAL02
    case 0xC4C9E4: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:91 LDY #8
    case 0xC4C9E6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4C91A.asm:91 LDY #8
    // Overlapping static entry reached from 0xC4C9E6.
    case 0xC4C9E8: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:92 STA [@LOCAL04],Y
    case 0xC4C9E9: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4C9EB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4C9ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4C9EF: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:93 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4C9F1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:94 LDA #14
    case 0xC4C9F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // src/unknown/C4/C4C91A.asm:94 LDA #14
    // Overlapping static entry reached from 0xC4C9F3.
    case 0xC4C9F5: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:95 CLC
    case 0xC4C9F6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:96 ADC @VIRTUAL06
    case 0xC4C9F7: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:97 STA @VIRTUAL06
    case 0xC4C9F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:98 STA @LOCAL01
    case 0xC4C9FB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4C91A.asm:99 LDA @VIRTUAL06+2
    case 0xC4C9FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:100 STA @LOCAL01+2
    case 0xC4C9FF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4C91A.asm:101 LDA @LOCAL02
    case 0xC4CA01: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:102 TAY
    case 0xC4CA03: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:103 LDA [@VIRTUAL0A]
    case 0xC4CA04: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:104 JSL MULT16
    case 0xC4CA06: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4C91A.asm:105 LSR
    case 0xC4CA0A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:106 STA @LOCAL02
    case 0xC4CA0B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:107 STA [@VIRTUAL06]
    case 0xC4CA0D: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4CA0F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4CA11: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4CA13: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:108 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC4CA15: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4C91A.asm:109 LDA #10
    case 0xC4CA17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/unknown/C4/C4C91A.asm:109 LDA #10
    // Overlapping static entry reached from 0xC4CA17.
    case 0xC4CA19: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:110 CLC
    case 0xC4CA1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:111 ADC @VIRTUAL0A
    case 0xC4CA1B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:112 STA @VIRTUAL0A
    case 0xC4CA1D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:113 LDA @LOCAL02
    case 0xC4CA1F: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:114 ASL
    case 0xC4CA21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:115 JSR UNKNOWN_C4C8DB
    case 0xC4CA22: cpu.execute_instruction<0x20>(0x00C8DB, 3); return true;
    // src/unknown/C4/C4C91A.asm:116 STA @LOCAL03
    case 0xC4CA25: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:117 STA [@VIRTUAL0A]
    case 0xC4CA27: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:118 LDA [@VIRTUAL06]
    case 0xC4CA29: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:119 ASL
    case 0xC4CA2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:120 TAX
    case 0xC4CA2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:121 LDA @LOCAL03
    case 0xC4CA2D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:122 JSR UNKNOWN_C4C8E9
    case 0xC4CA2F: cpu.execute_instruction<0x20>(0x00C8E9, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4CA32: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4CA34: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4CA36: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:123 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC4CA38: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:124 LDA #12
    case 0xC4CA3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4C91A.asm:124 LDA #12
    // Overlapping static entry reached from 0xC4CA3A.
    case 0xC4CA3C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4C91A.asm:125 CLC
    case 0xC4CA3D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:126 ADC @VIRTUAL06
    case 0xC4CA3E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:127 STA @VIRTUAL06
    case 0xC4CA40: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:128 STA @LOCAL00
    case 0xC4CA42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:129 LDA @VIRTUAL06+2
    case 0xC4CA44: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:130 STA @LOCAL00+2
    case 0xC4CA46: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4CA48: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4CA4A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4CA4C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4C91A.asm:131 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC4CA4E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4C91A.asm:132 LDA [@VIRTUAL06]
    case 0xC4CA50: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4C91A.asm:133 STA @VIRTUAL02
    case 0xC4CA52: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:134 LDA [@VIRTUAL0A]
    case 0xC4CA54: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4C91A.asm:135 CLC
    case 0xC4CA56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:136 ADC @VIRTUAL02
    case 0xC4CA57: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:137 STA [@LOCAL00]
    case 0xC4CA59: cpu.execute_instruction<0x87>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:138 LDA #0
    case 0xC4CA5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4C91A.asm:138 LDA #0
    // Overlapping static entry reached from 0xC4CA5B.
    case 0xC4CA5D: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C91A.asm:139 LDY #18
    case 0xC4CA5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/unknown/C4/C4C91A.asm:139 LDY #18
    // Overlapping static entry reached from 0xC4CA5E.
    case 0xC4CA60: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:140 STA [@LOCAL04],Y
    case 0xC4CA61: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:141 LDY #16
    case 0xC4CA63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4C91A.asm:141 LDY #16
    // Overlapping static entry reached from 0xC4CA63.
    case 0xC4CA65: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:142 STA [@LOCAL04],Y
    case 0xC4CA66: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:143 LDA @LOCAL06
    case 0xC4CA68: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/unknown/C4/C4C91A.asm:144 STA @VIRTUAL02
    case 0xC4CA6A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:145 CMP #2
    case 0xC4CA6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:145 CMP #2
    // Overlapping static entry reached from 0xC4CA6C.
    case 0xC4CA6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:146 BEQ @UNKNOWN5
    case 0xC4CA6F: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/unknown/C4/C4C91A.asm:147 LDA @VIRTUAL02
    case 0xC4CA71: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:148 CMP #3
    case 0xC4CA73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4C91A.asm:148 CMP #3
    // Overlapping static entry reached from 0xC4CA73.
    case 0xC4CA75: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:149 BEQ @UNKNOWN5
    case 0xC4CA76: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:150 LDA @VIRTUAL02
    case 0xC4CA78: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:151 CMP #4
    case 0xC4CA7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:151 CMP #4
    // Overlapping static entry reached from 0xC4CA7A.
    case 0xC4CA7C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:152 BEQ @UNKNOWN5
    case 0xC4CA7D: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C4C91A.asm:153 LDA @VIRTUAL02
    case 0xC4CA7F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:154 CMP #5
    case 0xC4CA81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4C91A.asm:154 CMP #5
    // Overlapping static entry reached from 0xC4CA81.
    case 0xC4CA83: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4C91A.asm:155 BNE @UNKNOWN6
    case 0xC4CA84: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/unknown/C4/C4C91A.asm:157 LDY #10
    case 0xC4CA86: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4C91A.asm:157 LDY #10
    // Overlapping static entry reached from 0xC4CA86.
    case 0xC4CA88: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4C91A.asm:158 LDA [@LOCAL04],Y
    case 0xC4CA89: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:159 STA @LOCAL02
    case 0xC4CA8B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:160 BRA @UNKNOWN7
    case 0xC4CA8D: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:162 LDA [@LOCAL00]
    case 0xC4CA8F: cpu.execute_instruction<0xA7>(0x00000E, 2); return true;
    // src/unknown/C4/C4C91A.asm:163 STA @LOCAL02
    case 0xC4CA91: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:165 LDA @VIRTUAL04
    case 0xC4CA93: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:166 CMP #24
    case 0xC4CA95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/unknown/C4/C4C91A.asm:166 CMP #24
    // Overlapping static entry reached from 0xC4CA95.
    case 0xC4CA97: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4C91A.asm:167 BCC @UNKNOWN8
    case 0xC4CA98: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // src/unknown/C4/C4C91A.asm:168 LDY #14
    case 0xC4CA9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/unknown/C4/C4C91A.asm:168 LDY #14
    // Overlapping static entry reached from 0xC4CA9A.
    case 0xC4CA9C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4C91A.asm:169 LDA [@LOCAL04],Y
    case 0xC4CA9D: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:170 TAY
    case 0xC4CA9F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:171 LDA @LOCAL02
    case 0xC4CAA0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:172 TAX
    case 0xC4CAA2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:173 LDA @VIRTUAL04
    case 0xC4CAA3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:174 JSL UNKNOWN_C4283F
    case 0xC4CAA5: cpu.execute_instruction<0x22>(0xC4283F, 4); return true;
    // src/unknown/C4/C4C91A.asm:175 BRA @UNKNOWN9
    case 0xC4CAA9: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/unknown/C4/C4C91A.asm:177 LDY #14
    case 0xC4CAAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/unknown/C4/C4C91A.asm:177 LDY #14
    // Overlapping static entry reached from 0xC4CAAB.
    case 0xC4CAAD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4C91A.asm:178 LDA [@LOCAL04],Y
    case 0xC4CAAE: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:179 TAY
    case 0xC4CAB0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:180 LDA @LOCAL02
    case 0xC4CAB1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:181 TAX
    case 0xC4CAB3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:182 LDA @VIRTUAL04
    case 0xC4CAB4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4C91A.asm:183 JSL UNKNOWN_C42884
    case 0xC4CAB6: cpu.execute_instruction<0x22>(0xC42884, 4); return true;
    // src/unknown/C4/C4C91A.asm:185 LDA ENTITY_FADE_ENTITY
    case 0xC4CABA: cpu.execute_instruction<0xAD>(0x00B4A8, 3); return true;
    // src/unknown/C4/C4C91A.asm:186 STA @LOCAL02
    case 0xC4CABD: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:187 LDA @VIRTUAL02
    case 0xC4CABF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4C91A.asm:188 CMP #2
    case 0xC4CAC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:188 CMP #2
    // Overlapping static entry reached from 0xC4CAC1.
    case 0xC4CAC3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:189 BEQ @UNKNOWN10
    case 0xC4CAC4: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C4/C4C91A.asm:190 CMP #7
    case 0xC4CAC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/unknown/C4/C4C91A.asm:190 CMP #7
    // Overlapping static entry reached from 0xC4CAC6.
    case 0xC4CAC8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:191 BEQ @UNKNOWN10
    case 0xC4CAC9: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/unknown/C4/C4C91A.asm:192 CMP #3
    case 0xC4CACB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4C91A.asm:192 CMP #3
    // Overlapping static entry reached from 0xC4CACB.
    case 0xC4CACD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:193 BEQ @UNKNOWN11
    case 0xC4CACE: cpu.execute_instruction<0xF0>(0x00002C, 2); return true;
    // src/unknown/C4/C4C91A.asm:194 CMP #8
    case 0xC4CAD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/unknown/C4/C4C91A.asm:194 CMP #8
    // Overlapping static entry reached from 0xC4CAD0.
    case 0xC4CAD2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:195 BEQ @UNKNOWN11
    case 0xC4CAD3: cpu.execute_instruction<0xF0>(0x000027, 2); return true;
    // src/unknown/C4/C4C91A.asm:196 CMP #4
    case 0xC4CAD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:196 CMP #4
    // Overlapping static entry reached from 0xC4CAD5.
    case 0xC4CAD7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:197 BEQ @UNKNOWN12
    case 0xC4CAD8: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C4/C4C91A.asm:198 CMP #9
    case 0xC4CADA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/unknown/C4/C4C91A.asm:198 CMP #9
    // Overlapping static entry reached from 0xC4CADA.
    case 0xC4CADC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:199 BEQ @UNKNOWN12
    case 0xC4CADD: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/unknown/C4/C4C91A.asm:200 CMP #5
    case 0xC4CADF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/unknown/C4/C4C91A.asm:200 CMP #5
    // Overlapping static entry reached from 0xC4CADF.
    case 0xC4CAE1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:201 BEQ @UNKNOWN13
    case 0xC4CAE2: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/unknown/C4/C4C91A.asm:202 CMP #10
    case 0xC4CAE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C4C91A.asm:202 CMP #10
    // Overlapping static entry reached from 0xC4CAE4.
    case 0xC4CAE6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4C91A.asm:203 BEQ @UNKNOWN13
    case 0xC4CAE7: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/unknown/C4/C4C91A.asm:204 BRA @UNKNOWN14
    case 0xC4CAE9: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C4C91A.asm:206 LDA @LOCAL02
    case 0xC4CAEB: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:207 ASL
    case 0xC4CAED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:208 TAX
    case 0xC4CAEE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:209 LDA #1
    case 0xC4CAEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:209 LDA #1
    // Overlapping static entry reached from 0xC4CAEF.
    case 0xC4CAF1: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:210 STA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4CAF2: cpu.execute_instruction<0x9D>(0x000E5E, 3); return true;
    // src/unknown/C4/C4C91A.asm:211 LDY #4
    case 0xC4CAF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:211 LDY #4
    // Overlapping static entry reached from 0xC4CAF5.
    case 0xC4CAF7: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:212 STA [@LOCAL04],Y
    case 0xC4CAF8: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:213 BRA @UNKNOWN14
    case 0xC4CAFA: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C4C91A.asm:215 LDA @LOCAL02
    case 0xC4CAFC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:216 ASL
    case 0xC4CAFE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:217 TAX
    case 0xC4CAFF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:218 LDA #1
    case 0xC4CB00: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:218 LDA #1
    // Overlapping static entry reached from 0xC4CB00.
    case 0xC4CB02: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:219 STA ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4CB03: cpu.execute_instruction<0x9D>(0x000E9A, 3); return true;
    // src/unknown/C4/C4C91A.asm:220 LDA #2
    case 0xC4CB06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/unknown/C4/C4C91A.asm:220 LDA #2
    // Overlapping static entry reached from 0xC4CB06.
    case 0xC4CB08: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C91A.asm:221 LDY #4
    case 0xC4CB09: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:221 LDY #4
    // Overlapping static entry reached from 0xC4CB09.
    case 0xC4CB0B: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:222 STA [@LOCAL04],Y
    case 0xC4CB0C: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:223 BRA @UNKNOWN14
    case 0xC4CB0E: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/unknown/C4/C4C91A.asm:225 LDA @LOCAL02
    case 0xC4CB10: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:226 ASL
    case 0xC4CB12: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:227 TAX
    case 0xC4CB13: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:228 LDA #1
    case 0xC4CB14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:228 LDA #1
    // Overlapping static entry reached from 0xC4CB14.
    case 0xC4CB16: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:229 STA ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC4CB17: cpu.execute_instruction<0x9D>(0x000ED6, 3); return true;
    // src/unknown/C4/C4C91A.asm:230 LDA #3
    case 0xC4CB1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/unknown/C4/C4C91A.asm:230 LDA #3
    // Overlapping static entry reached from 0xC4CB1A.
    case 0xC4CB1C: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/unknown/C4/C4C91A.asm:231 LDY #4
    case 0xC4CB1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:231 LDY #4
    // Overlapping static entry reached from 0xC4CB1D.
    case 0xC4CB1F: cpu.execute_instruction<0x00>(0x000097, 2); return true;
    // src/unknown/C4/C4C91A.asm:232 STA [@LOCAL04],Y
    case 0xC4CB20: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:233 BRA @UNKNOWN14
    case 0xC4CB22: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/unknown/C4/C4C91A.asm:235 LDA @LOCAL02
    case 0xC4CB24: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:236 ASL
    case 0xC4CB26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:237 TAX
    case 0xC4CB27: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:238 LDA #1
    case 0xC4CB28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4C91A.asm:238 LDA #1
    // Overlapping static entry reached from 0xC4CB28.
    case 0xC4CB2A: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/unknown/C4/C4C91A.asm:239 STA ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC4CB2B: cpu.execute_instruction<0x9D>(0x000F12, 3); return true;
    // src/unknown/C4/C4C91A.asm:240 LDA #4
    case 0xC4CB2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/unknown/C4/C4C91A.asm:240 LDA #4
    // Overlapping static entry reached from 0xC4CB2E.
    case 0xC4CB30: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4C91A.asm:241 TAY
    case 0xC4CB31: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:242 STA [@LOCAL04],Y
    case 0xC4CB32: cpu.execute_instruction<0x97>(0x00001A, 2); return true;
    // src/unknown/C4/C4C91A.asm:244 LDA @LOCAL02
    case 0xC4CB34: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4C91A.asm:245 ASL
    case 0xC4CB36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:246 TAX
    case 0xC4CB37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:247 LDA ENTITY_SCRIPT_VAR0_TABLE,X
    case 0xC4CB38: cpu.execute_instruction<0xBD>(0x000E5E, 3); return true;
    // src/unknown/C4/C4C91A.asm:248 CLC
    case 0xC4CB3B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:249 ADC ENTITY_SCRIPT_VAR1_TABLE,X
    case 0xC4CB3C: cpu.execute_instruction<0x7D>(0x000E9A, 3); return true;
    // src/unknown/C4/C4C91A.asm:250 CLC
    case 0xC4CB3F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:251 ADC ENTITY_SCRIPT_VAR2_TABLE,X
    case 0xC4CB40: cpu.execute_instruction<0x7D>(0x000ED6, 3); return true;
    // src/unknown/C4/C4C91A.asm:252 CLC
    case 0xC4CB43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4C91A.asm:253 ADC ENTITY_SCRIPT_VAR3_TABLE,X
    case 0xC4CB44: cpu.execute_instruction<0x7D>(0x000F12, 3); return true;
    // src/unknown/C4/C4C91A.asm:254 STA ENTITY_SCRIPT_VAR4_TABLE,X
    case 0xC4CB47: cpu.execute_instruction<0x9D>(0x000F4E, 3); return true;
    // src/unknown/C4/C4C91A.asm:255 INC ENTITY_FADE_STATES_LENGTH
    case 0xC4CB4A: cpu.execute_instruction<0xEE>(0x00B4A6, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4C91A.asm:257 END_C_FUNCTION
    case 0xC4CB4D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4C91A.asm:257 END_C_FUNCTION
    case 0xC4CB4E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CB4F.asm (unresolved).
bool execute_unresolved_c4_c4cb4f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CB4F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CB4F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC4CB51: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC4CB52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC4CB53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CB53.
    case 0xC4CB55: cpu.execute_instruction<0xFF>(0xAAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CB4F.asm:5 END_STACK_VARS
    case 0xC4CB56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB57: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB55.
    case 0xC4CB59: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB5A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB59.
    case 0xC4CB5B: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB5C: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB5B.
    case 0xC4CB5D: cpu.execute_instruction<0xAC>(0x0085B4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB5F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:6 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB5D.
    case 0xC4CB60: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:7 LDY #0
    case 0xC4CB61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4CB4F.asm:7 LDY #0
    // Overlapping static entry reached from 0xC4CB61.
    case 0xC4CB63: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4CB4F.asm:8 BRA @UNKNOWN1
    case 0xC4CB64: cpu.execute_instruction<0x80>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CB66: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CB68: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CB6A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB4F.asm:10 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CB6C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CB4F.asm:11 LDA [@VIRTUAL0A]
    case 0xC4CB6E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CB4F.asm:12 ASL
    case 0xC4CB70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:13 CLC
    case 0xC4CB71: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:14 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    case 0xC4CB72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006A, 2); else cpu.execute_instruction<0x69>(0x00116A, 3); return true;
    // src/unknown/C4/C4CB4F.asm:14 ADC #.LOWORD(ENTITY_SPRITEMAP_POINTER_HIGH)
    // Overlapping static entry reached from 0xC4CB72.
    case 0xC4CB74: cpu.execute_instruction<0x11>(0x0000AA, 2); return true;
    // src/unknown/C4/C4CB4F.asm:15 TAX
    case 0xC4CB75: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:16 LDA __BSS_START__,X
    case 0xC4CB76: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4CB4F.asm:17 AND #$BFFF
    case 0xC4CB79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x00BFFF, 3); return true;
    // src/unknown/C4/C4CB4F.asm:17 AND #$BFFF
    // Overlapping static entry reached from 0xC4CB79.
    case 0xC4CB7B: cpu.execute_instruction<0xBF>(0x00009D, 4); return true;
    // src/unknown/C4/C4CB4F.asm:18 STA __BSS_START__,X
    case 0xC4CB7C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4CB4F.asm:19 LDA #20
    case 0xC4CB7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CB4F.asm:19 LDA #20
    // Overlapping static entry reached from 0xC4CB7F.
    case 0xC4CB81: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CB4F.asm:20 CLC
    case 0xC4CB82: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:21 ADC @VIRTUAL06
    case 0xC4CB83: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CB4F.asm:22 STA @VIRTUAL06
    case 0xC4CB85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CB4F.asm:23 INY
    case 0xC4CB87: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/unknown/C4/C4CB4F.asm:25 CPY ENTITY_FADE_STATES_LENGTH
    case 0xC4CB88: cpu.execute_instruction<0xCC>(0x00B4A6, 3); return true;
    // src/unknown/C4/C4CB4F.asm:26 BCC @UNKNOWN0
    case 0xC4CB8B: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CB4F.asm:27 END_C_FUNCTION
    case 0xC4CB8D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CB4F.asm:27 END_C_FUNCTION
    case 0xC4CB8E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CB8F.asm (unresolved).
bool execute_unresolved_c4_c4cb8f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CB8F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CB8F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC4CB91: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC4CB92: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC4CB93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CB93.
    case 0xC4CB95: cpu.execute_instruction<0xFF>(0xAAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CB8F.asm:6 END_STACK_VARS
    case 0xC4CB96: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB97: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB95.
    case 0xC4CB99: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB99.
    case 0xC4CB9B: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB9C: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB9B.
    case 0xC4CB9D: cpu.execute_instruction<0xAC>(0x0085B4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CB9F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CB9D.
    case 0xC4CBA0: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:8 LDX #0
    case 0xC4CBA1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4CB8F.asm:8 LDX #0
    // Overlapping static entry reached from 0xC4CBA1.
    case 0xC4CBA3: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4CB8F.asm:9 STX @LOCAL00
    case 0xC4CBA4: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CB8F.asm:10 BRA @UNKNOWN2
    case 0xC4CBA6: cpu.execute_instruction<0x80>(0x000034, 2); return true;
    // src/unknown/C4/C4CB8F.asm:12 LDY #4
    case 0xC4CBA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CB8F.asm:12 LDY #4
    // Overlapping static entry reached from 0xC4CBA8.
    case 0xC4CBAA: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CB8F.asm:13 LDA [@VIRTUAL06],Y
    case 0xC4CBAB: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4CB8F.asm:14 CMP #1
    case 0xC4CBAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4CB8F.asm:14 CMP #1
    // Overlapping static entry reached from 0xC4CBAD.
    case 0xC4CBAF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CB8F.asm:15 BNE @UNKNOWN1
    case 0xC4CBB0: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBB2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBB4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBB6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBB8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CB8F.asm:17 LDA [@VIRTUAL0A]
    case 0xC4CBBA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CB8F.asm:18 ASL
    case 0xC4CBBC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:19 TAX
    case 0xC4CBBD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:20 STZ ENTITY_ANIMATION_FRAME,X
    case 0xC4CBBE: cpu.execute_instruction<0x9E>(0x0010F2, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBC3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CB8F.asm:22 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CBC7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CB8F.asm:23 LDA [@VIRTUAL0A]
    case 0xC4CBC9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CB8F.asm:24 JSL UNKNOWN_C0A443_ENTRY2
    case 0xC4CBCB: cpu.execute_instruction<0x22>(0xC0A48F, 4); return true;
    // src/unknown/C4/C4CB8F.asm:25 LDA #20
    case 0xC4CBCF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CB8F.asm:25 LDA #20
    // Overlapping static entry reached from 0xC4CBCF.
    case 0xC4CBD1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CB8F.asm:26 CLC
    case 0xC4CBD2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:27 ADC @VIRTUAL06
    case 0xC4CBD3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CB8F.asm:28 STA @VIRTUAL06
    case 0xC4CBD5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CB8F.asm:29 LDX @LOCAL00
    case 0xC4CBD7: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4CB8F.asm:30 INX
    case 0xC4CBD9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4CB8F.asm:31 STX @LOCAL00
    case 0xC4CBDA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CB8F.asm:33 CPX ENTITY_FADE_STATES_LENGTH
    case 0xC4CBDC: cpu.execute_instruction<0xEC>(0x00B4A6, 3); return true;
    // src/unknown/C4/C4CB8F.asm:34 BCC @UNKNOWN0
    case 0xC4CBDF: cpu.execute_instruction<0x90>(0x0000C7, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CB8F.asm:35 END_C_FUNCTION
    case 0xC4CBE1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CB8F.asm:35 END_C_FUNCTION
    case 0xC4CBE2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CBE3.asm (unresolved).
bool execute_unresolved_c4_c4cbe3_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CBE3.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CBE3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC4CBE5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC4CBE6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC4CBE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CBE7.
    case 0xC4CBE9: cpu.execute_instruction<0xFF>(0xAAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CBE3.asm:6 END_STACK_VARS
    case 0xC4CBEA: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CBEB: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CBE9.
    case 0xC4CBED: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CBEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CBED.
    case 0xC4CBEF: cpu.execute_instruction<0x06>(0x0000AD, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CBF0: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CBEF.
    case 0xC4CBF1: cpu.execute_instruction<0xAC>(0x0085B4, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CBF3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:7 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CBF1.
    case 0xC4CBF4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:8 LDX #0
    case 0xC4CBF5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4CBE3.asm:8 LDX #0
    // Overlapping static entry reached from 0xC4CBF5.
    case 0xC4CBF7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4CBE3.asm:9 STX @LOCAL00
    case 0xC4CBF8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CBE3.asm:10 BRA @UNKNOWN2
    case 0xC4CBFA: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/unknown/C4/C4CBE3.asm:12 LDY #4
    case 0xC4CBFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CBE3.asm:12 LDY #4
    // Overlapping static entry reached from 0xC4CBFC.
    case 0xC4CBFE: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CBE3.asm:13 LDA [@VIRTUAL06],Y
    case 0xC4CBFF: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4CBE3.asm:14 CMP #1
    case 0xC4CC01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/unknown/C4/C4CBE3.asm:14 CMP #1
    // Overlapping static entry reached from 0xC4CC01.
    case 0xC4CC03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CBE3.asm:15 BNE @UNKNOWN1
    case 0xC4CC04: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CC06: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CC08: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CC0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CBE3.asm:16 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4CC0C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CBE3.asm:17 LDA [@VIRTUAL0A]
    case 0xC4CC0E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CBE3.asm:18 ASL
    case 0xC4CC10: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:19 TAX
    case 0xC4CC11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:20 LDA #.LOWORD(-1)
    case 0xC4CC12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4CBE3.asm:20 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4CC12.
    case 0xC4CC14: cpu.execute_instruction<0xFF>(0x10F29D, 4); return true;
    // src/unknown/C4/C4CBE3.asm:21 STA ENTITY_ANIMATION_FRAME,X
    case 0xC4CC15: cpu.execute_instruction<0x9D>(0x0010F2, 3); return true;
    // src/unknown/C4/C4CBE3.asm:23 LDA #20
    case 0xC4CC18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CBE3.asm:23 LDA #20
    // Overlapping static entry reached from 0xC4CC18.
    case 0xC4CC1A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CBE3.asm:24 CLC
    case 0xC4CC1B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:25 ADC @VIRTUAL06
    case 0xC4CC1C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CBE3.asm:26 STA @VIRTUAL06
    case 0xC4CC1E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CBE3.asm:27 LDX @LOCAL00
    case 0xC4CC20: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4CBE3.asm:28 INX
    case 0xC4CC22: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4CBE3.asm:29 STX @LOCAL00
    case 0xC4CC23: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CBE3.asm:31 CPX ENTITY_FADE_STATES_LENGTH
    case 0xC4CC25: cpu.execute_instruction<0xEC>(0x00B4A6, 3); return true;
    // src/unknown/C4/C4CBE3.asm:32 BCC @UNKNOWN0
    case 0xC4CC28: cpu.execute_instruction<0x90>(0x0000D2, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CBE3.asm:33 END_C_FUNCTION
    case 0xC4CC2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CBE3.asm:33 END_C_FUNCTION
    case 0xC4CC2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CC2F.asm (unresolved).
bool execute_unresolved_c4_c4cc2f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CC2F.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CC2F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC4CC31: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC4CC32: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC4CC33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CC33.
    case 0xC4CC35: cpu.execute_instruction<0xFF>(0x1E645B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CC2F.asm:14 END_STACK_VARS
    case 0xC4CC36: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:15 STZ @LOCAL07
    case 0xC4CC37: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C4CC2F.asm:16 LDA #0
    case 0xC4CC39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CC2F.asm:16 LDA #0
    // Overlapping static entry reached from 0xC4CC39.
    case 0xC4CC3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CC2F.asm:17 STA @VIRTUAL04
    case 0xC4CC3C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CC3E: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CC41: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CC43: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:18 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL06
    case 0xC4CC46: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CC48: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CC4A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CC4C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:19 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CC4E: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CC2F.asm:20 LDA #0
    case 0xC4CC50: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CC2F.asm:20 LDA #0
    // Overlapping static entry reached from 0xC4CC50.
    case 0xC4CC52: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CC2F.asm:21 STA @VIRTUAL02
    case 0xC4CC53: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:22 STA @LOCAL05
    case 0xC4CC55: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:23 JMP @UNKNOWN4
    case 0xC4CC57: cpu.execute_instruction<0x4C>(0x00CD31, 3); return true;
    // src/unknown/C4/C4CC2F.asm:25 LDY #4
    case 0xC4CC5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CC2F.asm:25 LDY #4
    // Overlapping static entry reached from 0xC4CC5A.
    case 0xC4CC5C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:26 LDA [@LOCAL06],Y
    case 0xC4CC5D: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:27 CMP #2
    case 0xC4CC5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4CC2F.asm:27 CMP #2
    // Overlapping static entry reached from 0xC4CC5F.
    case 0xC4CC61: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4CC2F.asm:28 BNEL @UNKNOWN3
    case 0xC4CC62: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:28 BNEL @UNKNOWN3
    case 0xC4CC64: cpu.execute_instruction<0x4C>(0x00CD11, 3); return true;
    // src/unknown/C4/C4CC2F.asm:29 INC @VIRTUAL04
    case 0xC4CC67: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CC69: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CC6B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CC6D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:30 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CC6F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:31 LDA #18
    case 0xC4CC71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C4/C4CC2F.asm:31 LDA #18
    // Overlapping static entry reached from 0xC4CC71.
    case 0xC4CC73: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:32 CLC
    case 0xC4CC74: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:33 ADC @VIRTUAL06
    case 0xC4CC75: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:34 STA @VIRTUAL06
    case 0xC4CC77: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:35 STA @LOCAL03
    case 0xC4CC79: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CC2F.asm:36 LDA @VIRTUAL06+2
    case 0xC4CC7B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:37 STA @LOCAL04
    case 0xC4CC7D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CC2F.asm:38 LDA [@LOCAL03]
    case 0xC4CC7F: cpu.execute_instruction<0xA7>(0x000014, 2); return true;
    // src/unknown/C4/C4CC2F.asm:39 CMP #2
    case 0xC4CC81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4CC2F.asm:39 CMP #2
    // Overlapping static entry reached from 0xC4CC81.
    case 0xC4CC83: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CC2F.asm:40 BNE @UNKNOWN2
    case 0xC4CC84: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4CC2F.asm:41 INC @LOCAL07
    case 0xC4CC86: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C4/C4CC2F.asm:42 JMP @UNKNOWN3
    case 0xC4CC88: cpu.execute_instruction<0x4C>(0x00CD11, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC4CC8B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC4CC8D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC4CC8F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:44 MOVE_INT @LOCAL06, @VIRTUAL0A
    case 0xC4CC91: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CC2F.asm:45 LDA #16
    case 0xC4CC93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4CC2F.asm:45 LDA #16
    // Overlapping static entry reached from 0xC4CC93.
    case 0xC4CC95: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:46 CLC
    case 0xC4CC96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:47 ADC @VIRTUAL0A
    case 0xC4CC97: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:48 STA @VIRTUAL0A
    case 0xC4CC99: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:49 LDA [@VIRTUAL0A]
    case 0xC4CC9B: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:50 STA @LOCAL02
    case 0xC4CC9D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:51 LDY #6
    case 0xC4CC9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CC2F.asm:51 LDY #6
    // Overlapping static entry reached from 0xC4CC9F.
    case 0xC4CCA1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:52 LDA [@LOCAL06],Y
    case 0xC4CCA2: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:53 LSR
    case 0xC4CCA4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:54 LSR
    case 0xC4CCA5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:55 LSR
    case 0xC4CCA6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:56 TAX
    case 0xC4CCA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:57 LDY #8
    case 0xC4CCA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CC2F.asm:57 LDY #8
    // Overlapping static entry reached from 0xC4CCA8.
    case 0xC4CCAA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4CC2F.asm:58 LDA @LOCAL02
    case 0xC4CCAB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:59 JSL MODULUS16
    case 0xC4CCAD: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C4CC2F.asm:60 ASL
    case 0xC4CCB1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:61 STA @VIRTUAL02
    case 0xC4CCB2: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:62 TXA
    case 0xC4CCB4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:63 ASL
    case 0xC4CCB5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:64 ASL
    case 0xC4CCB6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:65 ASL
    case 0xC4CCB7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:66 ASL
    case 0xC4CCB8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:67 ASL
    case 0xC4CCB9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:68 TAY
    case 0xC4CCBA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:69 LDA @LOCAL02
    case 0xC4CCBB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:70 LSR
    case 0xC4CCBD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:71 LSR
    case 0xC4CCBE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:72 LSR
    case 0xC4CCBF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:73 JSL MULT16
    case 0xC4CCC0: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4CC2F.asm:74 CLC
    case 0xC4CCC4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:75 ADC @VIRTUAL02
    case 0xC4CCC5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:76 STA @LOCAL02
    case 0xC4CCC7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CCC9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CCCB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CCCD: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:77 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CCCF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:78 LDA #12
    case 0xC4CCD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4CC2F.asm:78 LDA #12
    // Overlapping static entry reached from 0xC4CCD1.
    case 0xC4CCD3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:79 CLC
    case 0xC4CCD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:80 ADC @VIRTUAL06
    case 0xC4CCD5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:81 STA @VIRTUAL06
    case 0xC4CCD7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:82 STX @LOCAL00
    case 0xC4CCD9: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4CC2F.asm:83 LDA @LOCAL02
    case 0xC4CCDB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4CC2F.asm:84 TAY
    case 0xC4CCDD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:85 STY @LOCAL01
    case 0xC4CCDE: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/unknown/C4/C4CC2F.asm:86 LDY #10
    case 0xC4CCE0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4CC2F.asm:86 LDY #10
    // Overlapping static entry reached from 0xC4CCE0.
    case 0xC4CCE2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:87 LDA [@LOCAL06],Y
    case 0xC4CCE3: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:88 TAX
    case 0xC4CCE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:89 LDA [@VIRTUAL06]
    case 0xC4CCE6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:90 LDY @LOCAL01
    case 0xC4CCE8: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/unknown/C4/C4CC2F.asm:91 JSL UNKNOWN_C428D1
    case 0xC4CCEA: cpu.execute_instruction<0x22>(0xC428D1, 4); return true;
    // src/unknown/C4/C4CC2F.asm:92 LDY #0
    case 0xC4CCEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4CC2F.asm:92 LDY #0
    // Overlapping static entry reached from 0xC4CCEE.
    case 0xC4CCF0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:93 LDA [@LOCAL06],Y
    case 0xC4CCF1: cpu.execute_instruction<0xB7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:94 TAX
    case 0xC4CCF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:95 LDA [@VIRTUAL06]
    case 0xC4CCF4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:96 JSL UNKNOWN_C429AE
    case 0xC4CCF6: cpu.execute_instruction<0x22>(0xC429AE, 4); return true;
    // src/unknown/C4/C4CC2F.asm:97 LDA [@VIRTUAL0A]
    case 0xC4CCFA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:98 INC
    case 0xC4CCFC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:99 INC
    case 0xC4CCFD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:100 STA [@VIRTUAL0A]
    case 0xC4CCFE: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:101 LDY #8
    case 0xC4CD00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CC2F.asm:101 LDY #8
    // Overlapping static entry reached from 0xC4CD00.
    case 0xC4CD02: cpu.execute_instruction<0x00>(0x0000D7, 2); return true;
    // src/unknown/C4/C4CC2F.asm:102 CMP [@LOCAL06],Y
    case 0xC4CD03: cpu.execute_instruction<0xD7>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:103 BCC @UNKNOWN3
    case 0xC4CD05: cpu.execute_instruction<0x90>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:104 LDA #1
    case 0xC4CD07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4CC2F.asm:104 LDA #1
    // Overlapping static entry reached from 0xC4CD07.
    case 0xC4CD09: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4CC2F.asm:105 STA [@VIRTUAL0A]
    case 0xC4CD0A: cpu.execute_instruction<0x87>(0x00000A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:106 LDA [@LOCAL03]
    case 0xC4CD0C: cpu.execute_instruction<0xA7>(0x000014, 2); return true;
    // src/unknown/C4/C4CC2F.asm:107 INC
    case 0xC4CD0E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:108 STA [@LOCAL03]
    case 0xC4CD0F: cpu.execute_instruction<0x87>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CD11: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CD13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CD15: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CC2F.asm:110 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC4CD17: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:111 LDA #20
    case 0xC4CD19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CC2F.asm:111 LDA #20
    // Overlapping static entry reached from 0xC4CD19.
    case 0xC4CD1B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:112 CLC
    case 0xC4CD1C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:113 ADC @VIRTUAL06
    case 0xC4CD1D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:114 STA @VIRTUAL06
    case 0xC4CD1F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CC2F.asm:115 STA @LOCAL06
    case 0xC4CD21: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CC2F.asm:116 LDA @VIRTUAL06+2
    case 0xC4CD23: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CC2F.asm:117 STA @LOCAL06+2
    case 0xC4CD25: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CC2F.asm:118 LDA @LOCAL05
    case 0xC4CD27: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:119 STA @VIRTUAL02
    case 0xC4CD29: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:120 INC @VIRTUAL02
    case 0xC4CD2B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:121 LDA @VIRTUAL02
    case 0xC4CD2D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:122 STA @LOCAL05
    case 0xC4CD2F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CC2F.asm:124 LDA @VIRTUAL02
    case 0xC4CD31: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CC2F.asm:125 CMP ENTITY_FADE_STATES_LENGTH
    case 0xC4CD33: cpu.execute_instruction<0xCD>(0x00B4A6, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4CC2F.asm:126 BCCL @UNKNOWN0
    case 0xC4CD36: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4CC2F.asm:126 BCCL @UNKNOWN0
    case 0xC4CD38: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4CC2F.asm:126 BCCL @UNKNOWN0
    case 0xC4CD3A: cpu.execute_instruction<0x4C>(0x00CC5A, 3); return true;
    // src/unknown/C4/C4CC2F.asm:127 LDA @VIRTUAL04
    case 0xC4CD3D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CC2F.asm:128 SEC
    case 0xC4CD3F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CC2F.asm:129 SBC @LOCAL07
    case 0xC4CD40: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CC2F.asm:130 END_C_FUNCTION
    case 0xC4CD42: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CC2F.asm:130 END_C_FUNCTION
    case 0xC4CD43: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CD44.asm (unresolved).
bool execute_unresolved_c4_c4cd44_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CD44.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CD44: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4CD46: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4CD47: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4CD48: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E0, 2); else cpu.execute_instruction<0x69>(0x00FFE0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CD48.
    case 0xC4CD4A: cpu.execute_instruction<0xFF>(0x1E645B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CD44.asm:13 END_STACK_VARS
    case 0xC4CD4B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:14 STZ @LOCAL06
    case 0xC4CD4C: cpu.execute_instruction<0x64>(0x00001E, 2); return true;
    // src/unknown/C4/C4CD44.asm:15 LDA #0
    case 0xC4CD4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:15 LDA #0
    // Overlapping static entry reached from 0xC4CD4E.
    case 0xC4CD50: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CD44.asm:16 STA @VIRTUAL04
    case 0xC4CD51: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CD53: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CD56: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CD58: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:17 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CD5B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4CD44.asm:18 LDA #0
    case 0xC4CD5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:18 LDA #0
    // Overlapping static entry reached from 0xC4CD5D.
    case 0xC4CD5F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CD44.asm:19 STA @VIRTUAL02
    case 0xC4CD60: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:20 STA @LOCAL05
    case 0xC4CD62: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CD44.asm:21 JMP @UNKNOWN8
    case 0xC4CD64: cpu.execute_instruction<0x4C>(0x00CE9D, 3); return true;
    // src/unknown/C4/C4CD44.asm:23 LDY #4
    case 0xC4CD67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CD44.asm:23 LDY #4
    // Overlapping static entry reached from 0xC4CD67.
    case 0xC4CD69: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:24 LDA [@VIRTUAL0A],Y
    case 0xC4CD6A: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:25 CMP #3
    case 0xC4CD6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/unknown/C4/C4CD44.asm:25 CMP #3
    // Overlapping static entry reached from 0xC4CD6C.
    case 0xC4CD6E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4CD44.asm:26 BNEL @UNKNOWN7
    case 0xC4CD6F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4CD44.asm:26 BNEL @UNKNOWN7
    case 0xC4CD71: cpu.execute_instruction<0x4C>(0x00CE8B, 3); return true;
    // src/unknown/C4/C4CD44.asm:27 INC @VIRTUAL04
    case 0xC4CD74: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4CD44.asm:28 LDY #18
    case 0xC4CD76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/unknown/C4/C4CD44.asm:28 LDY #18
    // Overlapping static entry reached from 0xC4CD76.
    case 0xC4CD78: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:29 LDA [@VIRTUAL0A],Y
    case 0xC4CD79: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:30 CMP #2
    case 0xC4CD7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/unknown/C4/C4CD44.asm:30 CMP #2
    // Overlapping static entry reached from 0xC4CD7B.
    case 0xC4CD7D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CD44.asm:31 BNE @UNKNOWN2
    case 0xC4CD7E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4CD44.asm:32 INC @LOCAL06
    case 0xC4CD80: cpu.execute_instruction<0xE6>(0x00001E, 2); return true;
    // src/unknown/C4/C4CD44.asm:33 JMP @UNKNOWN7
    case 0xC4CD82: cpu.execute_instruction<0x4C>(0x00CE8B, 3); return true;
    // src/unknown/C4/C4CD44.asm:35 CMP #0
    case 0xC4CD85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:35 CMP #0
    // Overlapping static entry reached from 0xC4CD85.
    case 0xC4CD87: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4CD44.asm:36 BEQ @UNKNOWN4
    case 0xC4CD88: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/unknown/C4/C4CD44.asm:37 LDY #16
    case 0xC4CD8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4CD44.asm:37 LDY #16
    // Overlapping static entry reached from 0xC4CD8A.
    case 0xC4CD8C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:38 LDA [@VIRTUAL0A],Y
    case 0xC4CD8D: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:39 STA @LOCAL04
    case 0xC4CD8F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:40 AND #$0001
    case 0xC4CD91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4CD44.asm:40 AND #$0001
    // Overlapping static entry reached from 0xC4CD91.
    case 0xC4CD93: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4CD44.asm:41 BNE @UNKNOWN3
    case 0xC4CD94: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4CD44.asm:42 LDA @LOCAL04
    case 0xC4CD96: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:43 TAX
    case 0xC4CD98: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:44 BRA @UNKNOWN6
    case 0xC4CD99: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/unknown/C4/C4CD44.asm:46 LDA @LOCAL04
    case 0xC4CD9B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:47 STA @VIRTUAL02
    case 0xC4CD9D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:48 LDY #6
    case 0xC4CD9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CD44.asm:48 LDY #6
    // Overlapping static entry reached from 0xC4CD9F.
    case 0xC4CDA1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:49 LDA [@VIRTUAL0A],Y
    case 0xC4CDA2: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:50 SEC
    case 0xC4CDA4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:51 SBC @VIRTUAL02
    case 0xC4CDA5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:52 TAX
    case 0xC4CDA7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:53 DEX
    case 0xC4CDA8: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:54 BRA @UNKNOWN6
    case 0xC4CDA9: cpu.execute_instruction<0x80>(0x00001F, 2); return true;
    // src/unknown/C4/C4CD44.asm:56 LDY #16
    case 0xC4CDAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/unknown/C4/C4CD44.asm:56 LDY #16
    // Overlapping static entry reached from 0xC4CDAB.
    case 0xC4CDAD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:57 LDA [@VIRTUAL0A],Y
    case 0xC4CDAE: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:58 STA @LOCAL04
    case 0xC4CDB0: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:59 AND #$0001
    case 0xC4CDB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/unknown/C4/C4CD44.asm:59 AND #$0001
    // Overlapping static entry reached from 0xC4CDB2.
    case 0xC4CDB4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4CD44.asm:60 BEQ @UNKNOWN5
    case 0xC4CDB5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4CD44.asm:61 LDA @LOCAL04
    case 0xC4CDB7: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:62 TAX
    case 0xC4CDB9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:63 BRA @UNKNOWN6
    case 0xC4CDBA: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/unknown/C4/C4CD44.asm:65 LDA @LOCAL04
    case 0xC4CDBC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:66 STA @VIRTUAL02
    case 0xC4CDBE: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:67 LDY #6
    case 0xC4CDC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CD44.asm:67 LDY #6
    // Overlapping static entry reached from 0xC4CDC0.
    case 0xC4CDC2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:68 LDA [@VIRTUAL0A],Y
    case 0xC4CDC3: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:69 SEC
    case 0xC4CDC5: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:70 SBC @VIRTUAL02
    case 0xC4CDC6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:71 TAX
    case 0xC4CDC8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:72 DEX
    case 0xC4CDC9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:74 LDA #12
    case 0xC4CDCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4CD44.asm:74 LDA #12
    // Overlapping static entry reached from 0xC4CDCA.
    case 0xC4CDCC: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDCD: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDCF: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDD1: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:75 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDD3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:76 CLC
    case 0xC4CDD5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:77 ADC @VIRTUAL06
    case 0xC4CDD6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:78 STA @VIRTUAL06
    case 0xC4CDD8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:79 STA @LOCAL03
    case 0xC4CDDA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CD44.asm:80 LDA @VIRTUAL06+2
    case 0xC4CDDC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:81 STA @LOCAL03+2
    case 0xC4CDDE: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CD44.asm:82 LDA #6
    case 0xC4CDE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/unknown/C4/C4CD44.asm:82 LDA #6
    // Overlapping static entry reached from 0xC4CDE0.
    case 0xC4CDE2: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDE3: cpu.execute_instruction<0xA4>(0x00000A, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDE5: cpu.execute_instruction<0x84>(0x000006, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDE7: cpu.execute_instruction<0xA4>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:83 MOVE_INTY @VIRTUAL0A, @VIRTUAL06
    case 0xC4CDE9: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:84 CLC
    case 0xC4CDEB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:85 ADC @VIRTUAL06
    case 0xC4CDEC: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:86 STA @VIRTUAL06
    case 0xC4CDEE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:87 STA @LOCAL02
    case 0xC4CDF0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:88 LDA @VIRTUAL06+2
    case 0xC4CDF2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:89 STA @LOCAL02+2
    case 0xC4CDF4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CD44.asm:90 LDY #8
    case 0xC4CDF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CD44.asm:90 LDY #8
    // Overlapping static entry reached from 0xC4CDF6.
    case 0xC4CDF8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:91 LDA [@VIRTUAL0A],Y
    case 0xC4CDF9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:92 STA @LOCAL00
    case 0xC4CDFB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4CD44.asm:93 LDA [@LOCAL02]
    case 0xC4CDFD: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:94 LSR
    case 0xC4CDFF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:95 LSR
    case 0xC4CE00: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:96 LSR
    case 0xC4CE01: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:97 ASL
    case 0xC4CE02: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:98 ASL
    case 0xC4CE03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:99 ASL
    case 0xC4CE04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:100 ASL
    case 0xC4CE05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:101 ASL
    case 0xC4CE06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:102 STA @LOCAL01
    case 0xC4CE07: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4CD44.asm:103 TXY
    case 0xC4CE09: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:104 STY @LOCAL04
    case 0xC4CE0A: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:105 LDY #10
    case 0xC4CE0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4CD44.asm:105 LDY #10
    // Overlapping static entry reached from 0xC4CE0C.
    case 0xC4CE0E: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CD44.asm:106 LDA [@VIRTUAL0A],Y
    case 0xC4CE0F: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:107 TAX
    case 0xC4CE11: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE12: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE16: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:108 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE18: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:109 LDA [@VIRTUAL06]
    case 0xC4CE1A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:110 LDY @LOCAL04
    case 0xC4CE1C: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:111 JSL UNKNOWN_C428FC
    case 0xC4CE1E: cpu.execute_instruction<0x22>(0xC428FC, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE22: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE24: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE26: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:112 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE28: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:113 LDA [@VIRTUAL06]
    case 0xC4CE2A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:114 TAX
    case 0xC4CE2C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE2D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE2F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE31: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:115 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC4CE33: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:116 LDA [@VIRTUAL06]
    case 0xC4CE35: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:117 JSL UNKNOWN_C429AE
    case 0xC4CE37: cpu.execute_instruction<0x22>(0xC429AE, 4); return true;
    // src/unknown/C4/C4CD44.asm:118 LDA #16
    case 0xC4CE3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4CD44.asm:118 LDA #16
    // Overlapping static entry reached from 0xC4CE3B.
    case 0xC4CE3D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE3E: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE40: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE42: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:119 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE44: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:120 CLC
    case 0xC4CE46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:121 ADC @VIRTUAL06
    case 0xC4CE47: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:122 STA @VIRTUAL06
    case 0xC4CE49: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:123 STA @LOCAL03
    case 0xC4CE4B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CD44.asm:124 LDA @VIRTUAL06+2
    case 0xC4CE4D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:125 STA @LOCAL03+2
    case 0xC4CE4F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CD44.asm:126 LDA [@VIRTUAL06]
    case 0xC4CE51: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:127 INC
    case 0xC4CE53: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:128 STA @LOCAL04
    case 0xC4CE54: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:129 STA [@VIRTUAL06]
    case 0xC4CE56: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:130 LDA [@LOCAL02]
    case 0xC4CE58: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:131 LSR
    case 0xC4CE5A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:132 STA @VIRTUAL02
    case 0xC4CE5B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:133 LDA @LOCAL04
    case 0xC4CE5D: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/unknown/C4/C4CD44.asm:134 CMP @VIRTUAL02
    case 0xC4CE5F: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:135 BCC @UNKNOWN7
    case 0xC4CE61: cpu.execute_instruction<0x90>(0x000028, 2); return true;
    // src/unknown/C4/C4CD44.asm:136 LDA #18
    case 0xC4CE63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/unknown/C4/C4CD44.asm:136 LDA #18
    // Overlapping static entry reached from 0xC4CE63.
    case 0xC4CE65: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE66: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE68: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE6A: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC4CE6C: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:138 CLC
    case 0xC4CE6E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:139 ADC @VIRTUAL06
    case 0xC4CE6F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:140 STA @VIRTUAL06
    case 0xC4CE71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:141 STA @LOCAL02
    case 0xC4CE73: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:142 LDA @VIRTUAL06+2
    case 0xC4CE75: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:143 STA @LOCAL02+2
    case 0xC4CE77: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CD44.asm:144 LDA [@LOCAL02]
    case 0xC4CE79: cpu.execute_instruction<0xA7>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:145 INC
    case 0xC4CE7B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:146 STA [@LOCAL02]
    case 0xC4CE7C: cpu.execute_instruction<0x87>(0x000012, 2); return true;
    // src/unknown/C4/C4CD44.asm:147 LDA #0
    case 0xC4CE7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CD44.asm:147 LDA #0
    // Overlapping static entry reached from 0xC4CE7E.
    case 0xC4CE80: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4CE81: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4CE83: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4CE85: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CD44.asm:148 MOVE_INTX @LOCAL03, @VIRTUAL06
    case 0xC4CE87: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CD44.asm:149 STA [@VIRTUAL06]
    case 0xC4CE89: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CD44.asm:151 LDA #20
    case 0xC4CE8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CD44.asm:151 LDA #20
    // Overlapping static entry reached from 0xC4CE8B.
    case 0xC4CE8D: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CD44.asm:152 CLC
    case 0xC4CE8E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:153 ADC @VIRTUAL0A
    case 0xC4CE8F: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:154 STA @VIRTUAL0A
    case 0xC4CE91: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4CD44.asm:155 LDA @LOCAL05
    case 0xC4CE93: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/unknown/C4/C4CD44.asm:156 STA @VIRTUAL02
    case 0xC4CE95: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:157 INC @VIRTUAL02
    case 0xC4CE97: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:158 LDA @VIRTUAL02
    case 0xC4CE99: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:159 STA @LOCAL05
    case 0xC4CE9B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CD44.asm:161 LDA @VIRTUAL02
    case 0xC4CE9D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CD44.asm:162 CMP ENTITY_FADE_STATES_LENGTH
    case 0xC4CE9F: cpu.execute_instruction<0xCD>(0x00B4A6, 3); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4CD44.asm:163 BCCL @UNKNOWN0
    case 0xC4CEA2: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4CD44.asm:163 BCCL @UNKNOWN0
    case 0xC4CEA4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4CD44.asm:163 BCCL @UNKNOWN0
    case 0xC4CEA6: cpu.execute_instruction<0x4C>(0x00CD67, 3); return true;
    // src/unknown/C4/C4CD44.asm:164 LDA @VIRTUAL04
    case 0xC4CEA9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CD44.asm:165 SEC
    case 0xC4CEAB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:166 SBC @LOCAL06
    case 0xC4CEAC: cpu.execute_instruction<0xE5>(0x00001E, 2); return true;
    // src/unknown/C4/C4CD44.asm:167 PLD
    case 0xC4CEAE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/unknown/C4/C4CD44.asm:168 RTL
    case 0xC4CEAF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CEB0.asm (unresolved).
bool execute_unresolved_c4_c4ceb0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CEB0.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CEB0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4CEB2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4CEB3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4CEB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CEB4.
    case 0xC4CEB6: cpu.execute_instruction<0xFF>(0x00A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CEB0.asm:5 END_STACK_VARS
    case 0xC4CEB7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007F00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CEB8.
    case 0xC4CEBA: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEBB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CEBA.
    case 0xC4CEBE: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CEBD.
    case 0xC4CEBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4CEB0.asm:6 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEC0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CEB0.asm:7 LDX #0
    case 0xC4CEC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4CEB0.asm:7 LDX #0
    // Overlapping static entry reached from 0xC4CEC2.
    case 0xC4CEC4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/unknown/C4/C4CEB0.asm:8 BRA @UNKNOWN1
    case 0xC4CEC5: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4CEB0.asm:10 LDA #0
    case 0xC4CEC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CEB0.asm:10 LDA #0
    // Overlapping static entry reached from 0xC4CEC7.
    case 0xC4CEC9: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4CEB0.asm:11 STA [@VIRTUAL06]
    case 0xC4CECA: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CEB0.asm:12 INC @VIRTUAL06
    case 0xC4CECC: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4CEB0.asm:13 INC @VIRTUAL06
    case 0xC4CECE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4CEB0.asm:14 INX
    case 0xC4CED0: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4CEB0.asm:16 CPX #64
    case 0xC4CED1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000040, 2); else cpu.execute_instruction<0xE0>(0x000040, 3); return true;
    // src/unknown/C4/C4CEB0.asm:16 CPX #64
    // Overlapping static entry reached from 0xC4CED1.
    case 0xC4CED3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4CEB0.asm:17 BCC @UNKNOWN0
    case 0xC4CED4: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CEB0.asm:18 END_C_FUNCTION
    case 0xC4CED6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CEB0.asm:18 END_C_FUNCTION
    case 0xC4CED7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4CED8.asm (unresolved).
bool execute_unresolved_c4_c4ced8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4CED8.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4CED8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4CEDA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4CEDB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4CEDC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC4CEDC.
    case 0xC4CEDE: cpu.execute_instruction<0xFF>(0xAAAD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4CED8.asm:12 END_STACK_VARS
    case 0xC4CEDF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CEE0: cpu.execute_instruction<0xAD>(0x00B4AA, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4CEDE.
    case 0xC4CEE2: cpu.execute_instruction<0xB4>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CEE3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4CEE2.
    case 0xC4CEE4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CEE5: cpu.execute_instruction<0xAD>(0x00B4AC, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:13 MOVE_INT ENTITY_FADE_STATES, @VIRTUAL0A
    case 0xC4CEE8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007F00, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CEEA.
    case 0xC4CEEC: cpu.execute_instruction<0x7F>(0xA90685, 4); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CEEC.
    case 0xC4CEF0: cpu.execute_instruction<0x7F>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    // Overlapping static entry reached from 0xC4CEEF.
    case 0xC4CEF1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4CED8.asm:14 LOADPTR BUFFER + $7F00, @VIRTUAL06
    case 0xC4CEF2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CEF4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CEF6: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CEF8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:15 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC4CEFA: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/unknown/C4/C4CED8.asm:16 JSL RAND
    case 0xC4CEFC: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/unknown/C4/C4CED8.asm:17 AND #$003F
    case 0xC4CF00: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C4/C4CED8.asm:17 AND #$003F
    // Overlapping static entry reached from 0xC4CF00.
    case 0xC4CF02: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:18 STA @LOCAL05
    case 0xC4CF03: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:19 ASL
    case 0xC4CF05: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:20 CLC
    case 0xC4CF06: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:21 ADC @VIRTUAL06
    case 0xC4CF07: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:22 STA @VIRTUAL06
    case 0xC4CF09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:23 LDA [@VIRTUAL06]
    case 0xC4CF0B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:24 BEQ @UNKNOWN1
    case 0xC4CF0D: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/unknown/C4/C4CED8.asm:26 LDA @LOCAL05
    case 0xC4CF0F: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:27 INC
    case 0xC4CF11: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:28 AND #$003F
    case 0xC4CF12: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/unknown/C4/C4CED8.asm:28 AND #$003F
    // Overlapping static entry reached from 0xC4CF12.
    case 0xC4CF14: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:29 STA @LOCAL05
    case 0xC4CF15: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:30 ASL
    case 0xC4CF17: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF18: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF1A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF1C: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:31 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF1E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CED8.asm:32 CLC
    case 0xC4CF20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:33 ADC @VIRTUAL06
    case 0xC4CF21: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:34 STA @VIRTUAL06
    case 0xC4CF23: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:35 LDA [@VIRTUAL06]
    case 0xC4CF25: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:36 BNE @UNKNOWN0
    case 0xC4CF27: cpu.execute_instruction<0xD0>(0x0000E6, 2); return true;
    // src/unknown/C4/C4CED8.asm:38 LDA @LOCAL05
    case 0xC4CF29: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:39 ASL
    case 0xC4CF2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF2C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF2E: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF30: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:40 MOVE_INTX @LOCAL06, @VIRTUAL06
    case 0xC4CF32: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/unknown/C4/C4CED8.asm:41 CLC
    case 0xC4CF34: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:42 ADC @VIRTUAL06
    case 0xC4CF35: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:43 STA @VIRTUAL06
    case 0xC4CF37: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:44 LDA #1
    case 0xC4CF39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/unknown/C4/C4CED8.asm:44 LDA #1
    // Overlapping static entry reached from 0xC4CF39.
    case 0xC4CF3B: cpu.execute_instruction<0x00>(0x000087, 2); return true;
    // src/unknown/C4/C4CED8.asm:45 STA [@VIRTUAL06]
    case 0xC4CF3C: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:46 LDA @LOCAL05
    case 0xC4CF3E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:47 LSR
    case 0xC4CF40: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:48 LSR
    case 0xC4CF41: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:49 LSR
    case 0xC4CF42: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:50 STA @LOCAL04
    case 0xC4CF43: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/unknown/C4/C4CED8.asm:51 LDY #8
    case 0xC4CF45: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CED8.asm:51 LDY #8
    // Overlapping static entry reached from 0xC4CF45.
    case 0xC4CF47: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4CED8.asm:52 LDA @LOCAL05
    case 0xC4CF48: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:53 JSL MODULUS16
    case 0xC4CF4A: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/unknown/C4/C4CED8.asm:54 STA @LOCAL03
    case 0xC4CF4E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/unknown/C4/C4CED8.asm:55 STZ @LOCAL02
    case 0xC4CF50: cpu.execute_instruction<0x64>(0x000012, 2); return true;
    // src/unknown/C4/C4CED8.asm:56 JMP @UNKNOWN10
    case 0xC4CF52: cpu.execute_instruction<0x4C>(0x00D001, 3); return true;
    // src/unknown/C4/C4CED8.asm:58 LDY #4
    case 0xC4CF55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4CED8.asm:58 LDY #4
    // Overlapping static entry reached from 0xC4CF55.
    case 0xC4CF57: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:59 LDA [@VIRTUAL0A],Y
    case 0xC4CF58: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:60 CMP #4
    case 0xC4CF5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/unknown/C4/C4CED8.asm:60 CMP #4
    // Overlapping static entry reached from 0xC4CF5A.
    case 0xC4CF5C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4CED8.asm:61 BNEL @UNKNOWN9
    case 0xC4CF5D: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4CED8.asm:61 BNEL @UNKNOWN9
    case 0xC4CF5F: cpu.execute_instruction<0x4C>(0x00CFF7, 3); return true;
    // src/unknown/C4/C4CED8.asm:62 LDA #0
    case 0xC4CF62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CED8.asm:62 LDA #0
    // Overlapping static entry reached from 0xC4CF62.
    case 0xC4CF64: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:63 STA @VIRTUAL04
    case 0xC4CF65: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:64 BRA @UNKNOWN7
    case 0xC4CF67: cpu.execute_instruction<0x80>(0x000065, 2); return true;
    // src/unknown/C4/C4CED8.asm:66 LDA #0
    case 0xC4CF69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/unknown/C4/C4CED8.asm:66 LDA #0
    // Overlapping static entry reached from 0xC4CF69.
    case 0xC4CF6B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4CED8.asm:67 STA @VIRTUAL02
    case 0xC4CF6C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:68 STA @LOCAL01
    case 0xC4CF6E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:69 BRA @UNKNOWN6
    case 0xC4CF70: cpu.execute_instruction<0x80>(0x000049, 2); return true;
    // src/unknown/C4/C4CED8.asm:71 LDA @LOCAL01
    case 0xC4CF72: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:72 STA @VIRTUAL02
    case 0xC4CF74: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:73 ASL
    case 0xC4CF76: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:74 ASL
    case 0xC4CF77: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:75 ASL
    case 0xC4CF78: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:76 ASL
    case 0xC4CF79: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:77 ASL
    case 0xC4CF7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:78 PHA
    case 0xC4CF7B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:79 LDA @LOCAL04
    case 0xC4CF7C: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/unknown/C4/C4CED8.asm:80 ASL
    case 0xC4CF7E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:81 STA @VIRTUAL02
    case 0xC4CF7F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:82 LDA @VIRTUAL04
    case 0xC4CF81: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:83 JSL MULT16
    case 0xC4CF83: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/unknown/C4/C4CED8.asm:84 ASL
    case 0xC4CF87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:85 ASL
    case 0xC4CF88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:86 ASL
    case 0xC4CF89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:87 ASL
    case 0xC4CF8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:88 ASL
    case 0xC4CF8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:89 CLC
    case 0xC4CF8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:90 ADC @VIRTUAL02
    case 0xC4CF8D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:91 PLY
    case 0xC4CF8F: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:92 STY @VIRTUAL02
    case 0xC4CF90: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:93 CLC
    case 0xC4CF92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:94 ADC @VIRTUAL02
    case 0xC4CF93: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:95 STA @LOCAL05
    case 0xC4CF95: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:96 LDA @LOCAL03
    case 0xC4CF97: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/unknown/C4/C4CED8.asm:97 STA @LOCAL00
    case 0xC4CF99: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4CED8.asm:98 LDA @LOCAL05
    case 0xC4CF9B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:99 TAY
    case 0xC4CF9D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:100 STY @LOCAL05
    case 0xC4CF9E: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:101 LDY #10
    case 0xC4CFA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/unknown/C4/C4CED8.asm:101 LDY #10
    // Overlapping static entry reached from 0xC4CFA0.
    case 0xC4CFA2: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:102 LDA [@VIRTUAL0A],Y
    case 0xC4CFA3: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:103 TAX
    case 0xC4CFA5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:104 LDY #12
    case 0xC4CFA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C4CED8.asm:104 LDY #12
    // Overlapping static entry reached from 0xC4CFA6.
    case 0xC4CFA8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:105 LDA [@VIRTUAL0A],Y
    case 0xC4CFA9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:106 LDY @LOCAL05
    case 0xC4CFAB: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:107 JSL UNKNOWN_C42965
    case 0xC4CFAD: cpu.execute_instruction<0x22>(0xC42965, 4); return true;
    // src/unknown/C4/C4CED8.asm:108 LDA @LOCAL01
    case 0xC4CFB1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:109 STA @VIRTUAL02
    case 0xC4CFB3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:110 INC @VIRTUAL02
    case 0xC4CFB5: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:111 LDA @VIRTUAL02
    case 0xC4CFB7: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:112 STA @LOCAL01
    case 0xC4CFB9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4CED8.asm:114 LDY #6
    case 0xC4CFBB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/unknown/C4/C4CED8.asm:114 LDY #6
    // Overlapping static entry reached from 0xC4CFBB.
    case 0xC4CFBD: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:115 LDA [@VIRTUAL0A],Y
    case 0xC4CFBE: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:116 LSR
    case 0xC4CFC0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:117 LSR
    case 0xC4CFC1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:118 LSR
    case 0xC4CFC2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:119 TAY
    case 0xC4CFC3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:120 LDA @VIRTUAL02
    case 0xC4CFC4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:121 STY @VIRTUAL02
    case 0xC4CFC6: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:122 CMP @VIRTUAL02
    case 0xC4CFC8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:123 BCC @UNKNOWN5
    case 0xC4CFCA: cpu.execute_instruction<0x90>(0x0000A6, 2); return true;
    // src/unknown/C4/C4CED8.asm:124 INC @VIRTUAL04
    case 0xC4CFCC: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:126 LDY #8
    case 0xC4CFCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/unknown/C4/C4CED8.asm:126 LDY #8
    // Overlapping static entry reached from 0xC4CFCE.
    case 0xC4CFD0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:127 LDA [@VIRTUAL0A],Y
    case 0xC4CFD1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:128 LSR
    case 0xC4CFD3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:129 LSR
    case 0xC4CFD4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:130 LSR
    case 0xC4CFD5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:131 STA @VIRTUAL02
    case 0xC4CFD6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4CED8.asm:132 LDA @VIRTUAL04
    case 0xC4CFD8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4CED8.asm:133 CMP @VIRTUAL02
    case 0xC4CFDA: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/unknown/C4/C4CED8.asm:134 BCCL @UNKNOWN4
    case 0xC4CFDC: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/unknown/C4/C4CED8.asm:134 BCCL @UNKNOWN4
    case 0xC4CFDE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/unknown/C4/C4CED8.asm:134 BCCL @UNKNOWN4
    case 0xC4CFE0: cpu.execute_instruction<0x4C>(0x00CF69, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CFE3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CFE5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CFE7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4CED8.asm:135 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC4CFE9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4CED8.asm:136 LDA [@VIRTUAL06]
    case 0xC4CFEB: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4CED8.asm:137 TAX
    case 0xC4CFED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:138 LDY #12
    case 0xC4CFEE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/unknown/C4/C4CED8.asm:138 LDY #12
    // Overlapping static entry reached from 0xC4CFEE.
    case 0xC4CFF0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4CED8.asm:139 LDA [@VIRTUAL0A],Y
    case 0xC4CFF1: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:140 JSL UNKNOWN_C429AE
    case 0xC4CFF3: cpu.execute_instruction<0x22>(0xC429AE, 4); return true;
    // src/unknown/C4/C4CED8.asm:142 LDA #20
    case 0xC4CFF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4CED8.asm:142 LDA #20
    // Overlapping static entry reached from 0xC4CFF7.
    case 0xC4CFF9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4CED8.asm:143 CLC
    case 0xC4CFFA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4CED8.asm:144 ADC @VIRTUAL0A
    case 0xC4CFFB: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:145 STA @VIRTUAL0A
    case 0xC4CFFD: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4CED8.asm:146 INC @LOCAL02
    case 0xC4CFFF: cpu.execute_instruction<0xE6>(0x000012, 2); return true;
    // src/unknown/C4/C4CED8.asm:146 INC @LOCAL02
    // Overlapping static entry reached from 0xC4D6DB.
    case 0xC4D000: cpu.execute_instruction<0x12>(0x0000AD, 2); return true;
    // src/unknown/C4/C4CED8.asm:148 LDA ENTITY_FADE_STATES_LENGTH
    case 0xC4D001: cpu.execute_instruction<0xAD>(0x00B4A6, 3); return true;
    // src/unknown/C4/C4CED8.asm:148 LDA ENTITY_FADE_STATES_LENGTH
    // Overlapping static entry reached from 0xC4D000.
    case 0xC4D002: cpu.execute_instruction<0xA6>(0x0000B4, 2); return true;
    // src/unknown/C4/C4CED8.asm:149 CMP @LOCAL02
    case 0xC4D004: cpu.execute_instruction<0xC5>(0x000012, 2); return true;
    // include/macros.asm:791 BEQ :+
    // Macro caller: src/unknown/C4/C4CED8.asm:150 BGTL @UNKNOWN2
    case 0xC4D006: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // include/macros.asm:792 BCC :+
    // Macro caller: src/unknown/C4/C4CED8.asm:150 BGTL @UNKNOWN2
    case 0xC4D008: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // include/macros.asm:793 JMP dest
    // Macro caller: src/unknown/C4/C4CED8.asm:150 BGTL @UNKNOWN2
    case 0xC4D00A: cpu.execute_instruction<0x4C>(0x00CF55, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4CED8.asm:151 END_C_FUNCTION
    case 0xC4D00D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4CED8.asm:151 END_C_FUNCTION
    case 0xC4D00E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D00F.asm (unresolved).
bool execute_unresolved_c4_c4d00f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D00F.asm:3 BEGIN_C_FUNCTION
    case 0xC4D00F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4D011: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4D012: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4D013: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4D014: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D014.
    case 0xC4D016: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4D017: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D00F.asm:10 END_STACK_VARS
    case 0xC4D018: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:11 STA @VIRTUAL02
    case 0xC4D019: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D00F.asm:11 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC4D016.
    case 0xC4D01A: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4D01B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000045, 2); else cpu.execute_instruction<0xA9>(0x00FB45, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D01B.
    case 0xC4D01D: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4D01E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4D020: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D020.
    case 0xC4D022: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D00F.asm:12 LOADPTR CONSONANT_VOWEL_TRANSLITERATION_PAIRS, @VIRTUAL06
    case 0xC4D023: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D00F.asm:13 TYA
    case 0xC4D025: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:14 ASL
    case 0xC4D026: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:15 PHA
    case 0xC4D027: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:16 TXA
    case 0xC4D028: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:17 SEC
    case 0xC4D029: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:18 SBC #$41
    case 0xC4D02A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000041, 2); else cpu.execute_instruction<0xE9>(0x000041, 3); return true;
    // src/unknown/C4/C4D00F.asm:18 SBC #$41
    // Overlapping static entry reached from 0xC4D02A.
    case 0xC4D02C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4D02D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4D02F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4D030: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4D031: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/unknown/C4/C4D00F.asm:19 OPTIMIZED_MULT @VIRTUAL04, 10
    case 0xC4D033: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:20 PLY
    case 0xC4D034: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:21 STY @VIRTUAL04
    case 0xC4D035: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/unknown/C4/C4D00F.asm:22 CLC
    case 0xC4D037: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:23 ADC @VIRTUAL04
    case 0xC4D038: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4D00F.asm:24 CLC
    case 0xC4D03A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:25 ADC @VIRTUAL06
    case 0xC4D03B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:26 STA @VIRTUAL06
    case 0xC4D03D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:27 LDX #2
    case 0xC4D03F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/unknown/C4/C4D00F.asm:27 LDX #2
    // Overlapping static entry reached from 0xC4D03F.
    case 0xC4D041: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D00F.asm:28 STX @LOCAL00
    case 0xC4D042: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D00F.asm:29 BRA @UNKNOWN1
    case 0xC4D044: cpu.execute_instruction<0x80>(0x000012, 2); return true;
    // src/unknown/C4/C4D00F.asm:31 LDX @VIRTUAL02
    case 0xC4D046: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D00F.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D048: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D00F.asm:33 STA __BSS_START__,X
    case 0xC4D04A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D00F.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC4D04D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D00F.asm:35 INC @VIRTUAL06
    case 0xC4D04F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:36 INC @VIRTUAL02
    case 0xC4D051: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/unknown/C4/C4D00F.asm:37 LDX @LOCAL00
    case 0xC4D053: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4D00F.asm:38 DEX
    case 0xC4D055: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D00F.asm:39 STX @LOCAL00
    case 0xC4D056: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D00F.asm:41 BEQ @UNKNOWN2
    case 0xC4D058: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/unknown/C4/C4D00F.asm:42 LDA [@VIRTUAL06]
    case 0xC4D05A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D00F.asm:43 AND #$00FF
    case 0xC4D05C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D00F.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC4D05C.
    case 0xC4D05E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D00F.asm:44 BNE @UNKNOWN0
    case 0xC4D05F: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/unknown/C4/C4D00F.asm:46 LDA @VIRTUAL02
    case 0xC4D061: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D00F.asm:47 END_C_FUNCTION
    case 0xC4D063: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D00F.asm:47 END_C_FUNCTION
    case 0xC4D064: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D065.asm (unresolved).
bool execute_unresolved_c4_c4d065_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D065.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D065: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4D067: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4D068: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4D069: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4D06A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D06A.
    case 0xC4D06C: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4D06D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D065.asm:8 END_STACK_VARS
    case 0xC4D06E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:9 STX @VIRTUAL04
    case 0xC4D06F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4D065.asm:9 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4D06C.
    case 0xC4D070: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/unknown/C4/C4D065.asm:10 STA @LOCAL01
    case 0xC4D071: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC4D070.
    case 0xC4D072: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/unknown/C4/C4D065.asm:11 LDX #0
    case 0xC4D073: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:11 LDX #0
    // Overlapping static entry reached from 0xC4D072.
    case 0xC4D074: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:11 LDX #0
    // Overlapping static entry reached from 0xC4D073.
    case 0xC4D075: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D065.asm:12 STX @LOCAL00
    case 0xC4D076: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:13 JMP @UNKNOWN31
    case 0xC4D078: cpu.execute_instruction<0x4C>(0x00D22B, 3); return true;
    // src/unknown/C4/C4D065.asm:15 LDA @VIRTUAL00
    case 0xC4D07B: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:16 AND #$00FF
    case 0xC4D07D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D065.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC4D07D.
    case 0xC4D07F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D065.asm:17 STA @VIRTUAL02
    case 0xC4D080: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:18 INC @VIRTUAL04
    case 0xC4D082: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/unknown/C4/C4D065.asm:19 LDX @LOCAL00
    case 0xC4D084: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4D065.asm:20 BEQL @UNKNOWN19
    case 0xC4D086: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4D065.asm:20 BEQL @UNKNOWN19
    case 0xC4D088: cpu.execute_instruction<0x4C>(0x00D17B, 3); return true;
    // src/unknown/C4/C4D065.asm:21 TXA
    case 0xC4D08B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:22 CMP @VIRTUAL02
    case 0xC4D08C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:23 BNE @UNKNOWN2
    case 0xC4D08E: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/unknown/C4/C4D065.asm:24 LDA @LOCAL01
    case 0xC4D090: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:25 TAX
    case 0xC4D092: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D093: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:27 LDA #$7E
    case 0xC4D095: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x009D7E, 3); return true;
    // src/unknown/C4/C4D065.asm:28 STA __BSS_START__,X
    case 0xC4D097: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:28 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D095.
    case 0xC4D098: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC4D09A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:30 LDA @LOCAL01
    case 0xC4D09C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:31 INC
    case 0xC4D09E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:32 STA @LOCAL01
    case 0xC4D09F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:33 JMP @UNKNOWN31
    case 0xC4D0A1: cpu.execute_instruction<0x4C>(0x00D22B, 3); return true;
    // src/unknown/C4/C4D065.asm:35 LDA @VIRTUAL02
    case 0xC4D0A4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:36 CMP #$41
    case 0xC4D0A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:36 CMP #$41
    // Overlapping static entry reached from 0xC4D0A6.
    case 0xC4D0A8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:37 BEQ @UNKNOWN3
    case 0xC4D0A9: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4D065.asm:38 CMP #$49
    case 0xC4D0AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000049, 2); else cpu.execute_instruction<0xC9>(0x000049, 3); return true;
    // src/unknown/C4/C4D065.asm:38 CMP #$49
    // Overlapping static entry reached from 0xC4D0AB.
    case 0xC4D0AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:39 BEQ @UNKNOWN4
    case 0xC4D0AE: cpu.execute_instruction<0xF0>(0x00001E, 2); return true;
    // src/unknown/C4/C4D065.asm:40 CMP #$55
    case 0xC4D0B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000055, 2); else cpu.execute_instruction<0xC9>(0x000055, 3); return true;
    // src/unknown/C4/C4D065.asm:40 CMP #$55
    // Overlapping static entry reached from 0xC4D0B0.
    case 0xC4D0B2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:41 BEQ @UNKNOWN5
    case 0xC4D0B3: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/unknown/C4/C4D065.asm:42 CMP #$45
    case 0xC4D0B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x000045, 3); return true;
    // src/unknown/C4/C4D065.asm:42 CMP #$45
    // Overlapping static entry reached from 0xC4D0B5.
    case 0xC4D0B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:43 BEQ @UNKNOWN6
    case 0xC4D0B8: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/unknown/C4/C4D065.asm:44 CMP #$4F
    case 0xC4D0BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004F, 2); else cpu.execute_instruction<0xC9>(0x00004F, 3); return true;
    // src/unknown/C4/C4D065.asm:44 CMP #$4F
    // Overlapping static entry reached from 0xC4D0BA.
    case 0xC4D0BC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:45 BEQ @UNKNOWN7
    case 0xC4D0BD: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/unknown/C4/C4D065.asm:46 BRA @UNKNOWN8
    case 0xC4D0BF: cpu.execute_instruction<0x80>(0x000040, 2); return true;
    // src/unknown/C4/C4D065.asm:48 LDY #0
    case 0xC4D0C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:48 LDY #0
    // Overlapping static entry reached from 0xC4D0C1.
    case 0xC4D0C3: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:49 LDA @LOCAL01
    case 0xC4D0C4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:50 JSR UNKNOWN_C4D00F
    case 0xC4D0C6: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:51 STA @LOCAL01
    case 0xC4D0C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:52 JMP @UNKNOWN18
    case 0xC4D0CB: cpu.execute_instruction<0x4C>(0x00D173, 3); return true;
    // src/unknown/C4/C4D065.asm:54 LDY #1
    case 0xC4D0CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:54 LDY #1
    // Overlapping static entry reached from 0xC4D0CE.
    case 0xC4D0D0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:55 LDA @LOCAL01
    case 0xC4D0D1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:56 JSR UNKNOWN_C4D00F
    case 0xC4D0D3: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:57 STA @LOCAL01
    case 0xC4D0D6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:58 JMP @UNKNOWN18
    case 0xC4D0D8: cpu.execute_instruction<0x4C>(0x00D173, 3); return true;
    // src/unknown/C4/C4D065.asm:60 LDY #2
    case 0xC4D0DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4D065.asm:60 LDY #2
    // Overlapping static entry reached from 0xC4D0DB.
    case 0xC4D0DD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:61 LDA @LOCAL01
    case 0xC4D0DE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:62 JSR UNKNOWN_C4D00F
    case 0xC4D0E0: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:63 STA @LOCAL01
    case 0xC4D0E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:64 JMP @UNKNOWN18
    case 0xC4D0E5: cpu.execute_instruction<0x4C>(0x00D173, 3); return true;
    // src/unknown/C4/C4D065.asm:66 LDY #3
    case 0xC4D0E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4D065.asm:66 LDY #3
    // Overlapping static entry reached from 0xC4D0E8.
    case 0xC4D0EA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:67 LDA @LOCAL01
    case 0xC4D0EB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:68 JSR UNKNOWN_C4D00F
    case 0xC4D0ED: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:69 STA @LOCAL01
    case 0xC4D0F0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:70 JMP @UNKNOWN18
    case 0xC4D0F2: cpu.execute_instruction<0x4C>(0x00D173, 3); return true;
    // src/unknown/C4/C4D065.asm:72 LDY #4
    case 0xC4D0F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/unknown/C4/C4D065.asm:72 LDY #4
    // Overlapping static entry reached from 0xC4D0F5.
    case 0xC4D0F7: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:73 LDA @LOCAL01
    case 0xC4D0F8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:74 JSR UNKNOWN_C4D00F
    case 0xC4D0FA: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:75 STA @LOCAL01
    case 0xC4D0FD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:76 BRA @UNKNOWN18
    case 0xC4D0FF: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/unknown/C4/C4D065.asm:78 LDA #$41
    case 0xC4D101: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:78 LDA #$41
    // Overlapping static entry reached from 0xC4D101.
    case 0xC4D103: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4D065.asm:79 CLC
    case 0xC4D104: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:80 SBC @VIRTUAL02
    case 0xC4D105: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4D107: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4D109: cpu.execute_instruction<0x10>(0x00003B, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4D10B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:81 BRANCHGTS @UNKNOWN15
    case 0xC4D10D: cpu.execute_instruction<0x30>(0x000037, 2); return true;
    // src/unknown/C4/C4D065.asm:82 LDA @VIRTUAL02
    case 0xC4D10F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:83 CLC
    case 0xC4D111: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:84 SBC #$5A
    case 0xC4D112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00005A, 2); else cpu.execute_instruction<0xE9>(0x00005A, 3); return true;
    // src/unknown/C4/C4D065.asm:84 SBC #$5A
    // Overlapping static entry reached from 0xC4D112.
    case 0xC4D114: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4D115: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4D117: cpu.execute_instruction<0x10>(0x00002D, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4D119: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:85 BRANCHGTS @UNKNOWN15
    case 0xC4D11B: cpu.execute_instruction<0x30>(0x000029, 2); return true;
    // src/unknown/C4/C4D065.asm:86 CPX #$4E
    case 0xC4D11D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004E, 2); else cpu.execute_instruction<0xE0>(0x00004E, 3); return true;
    // src/unknown/C4/C4D065.asm:86 CPX #$4E
    // Overlapping static entry reached from 0xC4D11D.
    case 0xC4D11F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D065.asm:87 BNE @UNKNOWN13
    case 0xC4D120: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C4/C4D065.asm:88 LDA @LOCAL01
    case 0xC4D122: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:89 TAX
    case 0xC4D124: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D125: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:91 LDA #$9D
    case 0xC4D127: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x009D9D, 3); return true;
    // src/unknown/C4/C4D065.asm:92 STA __BSS_START__,X
    case 0xC4D129: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D127.
    case 0xC4D12A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC4D12C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:94 LDA @LOCAL01
    case 0xC4D12E: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:95 INC
    case 0xC4D130: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:96 STA @LOCAL01
    case 0xC4D131: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:97 BRA @UNKNOWN14
    case 0xC4D133: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4D065.asm:99 LDY #1
    case 0xC4D135: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:99 LDY #1
    // Overlapping static entry reached from 0xC4D135.
    case 0xC4D137: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:100 LDA @LOCAL01
    case 0xC4D138: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:101 JSR UNKNOWN_C4D00F
    case 0xC4D13A: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:102 STA @LOCAL01
    case 0xC4D13D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:104 LDX @VIRTUAL02
    case 0xC4D13F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:105 STX @LOCAL00
    case 0xC4D141: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:106 JMP @UNKNOWN31
    case 0xC4D143: cpu.execute_instruction<0x4C>(0x00D22B, 3); return true;
    // src/unknown/C4/C4D065.asm:108 CPX #$4E
    case 0xC4D146: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004E, 2); else cpu.execute_instruction<0xE0>(0x00004E, 3); return true;
    // src/unknown/C4/C4D065.asm:108 CPX #$4E
    // Overlapping static entry reached from 0xC4D146.
    case 0xC4D148: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D065.asm:109 BNE @UNKNOWN16
    case 0xC4D149: cpu.execute_instruction<0xD0>(0x000012, 2); return true;
    // src/unknown/C4/C4D065.asm:110 LDA @LOCAL01
    case 0xC4D14B: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:111 TAX
    case 0xC4D14D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:112 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D14E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:113 LDA #$9D
    case 0xC4D150: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x009D9D, 3); return true;
    // src/unknown/C4/C4D065.asm:114 STA __BSS_START__,X
    case 0xC4D152: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:114 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D150.
    case 0xC4D153: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC4D155: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:116 LDA @LOCAL01
    case 0xC4D157: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:117 TAX
    case 0xC4D159: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:118 INX
    case 0xC4D15A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:119 BRA @UNKNOWN17
    case 0xC4D15B: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/unknown/C4/C4D065.asm:121 LDY #1
    case 0xC4D15D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:121 LDY #1
    // Overlapping static entry reached from 0xC4D15D.
    case 0xC4D15F: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:122 LDA @LOCAL01
    case 0xC4D160: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:123 JSR UNKNOWN_C4D00F
    case 0xC4D162: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:124 TAX
    case 0xC4D165: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:126 LDA @VIRTUAL02
    case 0xC4D166: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:127 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D168: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:128 STA __BSS_START__,X
    case 0xC4D16A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:129 REP #PROC_FLAGS::ACCUM8
    case 0xC4D16D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:130 TXA
    case 0xC4D16F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:131 INC
    case 0xC4D170: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:132 STA @LOCAL01
    case 0xC4D171: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:134 LDX #0
    case 0xC4D173: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:134 LDX #0
    // Overlapping static entry reached from 0xC4D173.
    case 0xC4D175: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D065.asm:135 STX @LOCAL00
    case 0xC4D176: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:136 JMP @UNKNOWN31
    case 0xC4D178: cpu.execute_instruction<0x4C>(0x00D22B, 3); return true;
    // src/unknown/C4/C4D065.asm:138 LDA @VIRTUAL02
    case 0xC4D17B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:139 CMP #$41
    case 0xC4D17D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000041, 2); else cpu.execute_instruction<0xC9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:139 CMP #$41
    // Overlapping static entry reached from 0xC4D17D.
    case 0xC4D17F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:140 BEQ @UNKNOWN20
    case 0xC4D180: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/unknown/C4/C4D065.asm:141 CMP #$49
    case 0xC4D182: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000049, 2); else cpu.execute_instruction<0xC9>(0x000049, 3); return true;
    // src/unknown/C4/C4D065.asm:141 CMP #$49
    // Overlapping static entry reached from 0xC4D182.
    case 0xC4D184: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:142 BEQ @UNKNOWN21
    case 0xC4D185: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/unknown/C4/C4D065.asm:143 CMP #$55
    case 0xC4D187: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000055, 2); else cpu.execute_instruction<0xC9>(0x000055, 3); return true;
    // src/unknown/C4/C4D065.asm:143 CMP #$55
    // Overlapping static entry reached from 0xC4D187.
    case 0xC4D189: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:144 BEQ @UNKNOWN22
    case 0xC4D18A: cpu.execute_instruction<0xF0>(0x000033, 2); return true;
    // src/unknown/C4/C4D065.asm:145 CMP #$45
    case 0xC4D18C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000045, 2); else cpu.execute_instruction<0xC9>(0x000045, 3); return true;
    // src/unknown/C4/C4D065.asm:145 CMP #$45
    // Overlapping static entry reached from 0xC4D18C.
    case 0xC4D18E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:146 BEQ @UNKNOWN23
    case 0xC4D18F: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C4/C4D065.asm:147 CMP #$4F
    case 0xC4D191: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00004F, 2); else cpu.execute_instruction<0xC9>(0x00004F, 3); return true;
    // src/unknown/C4/C4D065.asm:147 CMP #$4F
    // Overlapping static entry reached from 0xC4D1E6.
    case 0xC4D192: cpu.execute_instruction<0x4F>(0x4FF000, 4); return true;
    // src/unknown/C4/C4D065.asm:147 CMP #$4F
    // Overlapping static entry reached from 0xC4D191.
    case 0xC4D193: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D065.asm:148 BEQ @UNKNOWN24
    case 0xC4D194: cpu.execute_instruction<0xF0>(0x00004F, 2); return true;
    // src/unknown/C4/C4D065.asm:149 BRA @UNKNOWN25
    case 0xC4D196: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/unknown/C4/C4D065.asm:151 LDA @LOCAL01
    case 0xC4D198: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:152 TAX
    case 0xC4D19A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:153 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D19B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:154 LDA #$60
    case 0xC4D19D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000060, 2); else cpu.execute_instruction<0xA9>(0x009D60, 3); return true;
    // src/unknown/C4/C4D065.asm:155 STA __BSS_START__,X
    case 0xC4D19F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:155 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D19D.
    case 0xC4D1A0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:156 REP #PROC_FLAGS::ACCUM8
    case 0xC4D1A2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:157 LDA @LOCAL01
    case 0xC4D1A4: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:158 INC
    case 0xC4D1A6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:159 STA @LOCAL01
    case 0xC4D1A7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:160 JMP @UNKNOWN31
    case 0xC4D1A9: cpu.execute_instruction<0x4C>(0x00D22B, 3); return true;
    // src/unknown/C4/C4D065.asm:162 LDA @LOCAL01
    case 0xC4D1AC: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:163 TAX
    case 0xC4D1AE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:164 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D1AF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:165 LDA #$70
    case 0xC4D1B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x009D70, 3); return true;
    // src/unknown/C4/C4D065.asm:166 STA __BSS_START__,X
    case 0xC4D1B3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:166 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D1B1.
    case 0xC4D1B4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:167 REP #PROC_FLAGS::ACCUM8
    case 0xC4D1B6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:168 LDA @LOCAL01
    case 0xC4D1B8: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:169 INC
    case 0xC4D1BA: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:170 STA @LOCAL01
    case 0xC4D1BB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:171 BRA @UNKNOWN31
    case 0xC4D1BD: cpu.execute_instruction<0x80>(0x00006C, 2); return true;
    // src/unknown/C4/C4D065.asm:173 LDA @LOCAL01
    case 0xC4D1BF: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:174 TAX
    case 0xC4D1C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:175 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D1C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:176 LDA #$80
    case 0xC4D1C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x009D80, 3); return true;
    // src/unknown/C4/C4D065.asm:177 STA __BSS_START__,X
    case 0xC4D1C6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:177 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D1C4.
    case 0xC4D1C7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:178 REP #PROC_FLAGS::ACCUM8
    case 0xC4D1C9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:179 LDA @LOCAL01
    case 0xC4D1CB: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:180 INC
    case 0xC4D1CD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:181 STA @LOCAL01
    case 0xC4D1CE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:182 BRA @UNKNOWN31
    case 0xC4D1D0: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/unknown/C4/C4D065.asm:184 LDA @LOCAL01
    case 0xC4D1D2: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:185 TAX
    case 0xC4D1D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:186 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D1D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:187 LDA #$90
    case 0xC4D1D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000090, 2); else cpu.execute_instruction<0xA9>(0x009D90, 3); return true;
    // src/unknown/C4/C4D065.asm:188 STA __BSS_START__,X
    case 0xC4D1D9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:188 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D1D7.
    case 0xC4D1DA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:189 REP #PROC_FLAGS::ACCUM8
    case 0xC4D1DC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:190 LDA @LOCAL01
    case 0xC4D1DE: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:191 INC
    case 0xC4D1E0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:192 STA @LOCAL01
    case 0xC4D1E1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:193 BRA @UNKNOWN31
    case 0xC4D1E3: cpu.execute_instruction<0x80>(0x000046, 2); return true;
    // src/unknown/C4/C4D065.asm:195 LDA @LOCAL01
    case 0xC4D1E5: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:195 LDA @LOCAL01
    // Overlapping static entry reached from 0xC41AE6.
    case 0xC4D1E6: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D065.asm:196 TAX
    case 0xC4D1E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:197 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D1E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:198 LDA #$A0
    case 0xC4D1EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x009DA0, 3); return true;
    // src/unknown/C4/C4D065.asm:199 STA __BSS_START__,X
    case 0xC4D1EC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:199 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D1EA.
    case 0xC4D1ED: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:200 REP #PROC_FLAGS::ACCUM8
    case 0xC4D1EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:201 LDA @LOCAL01
    case 0xC4D1F1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:202 INC
    case 0xC4D1F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:203 STA @LOCAL01
    case 0xC4D1F4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:204 BRA @UNKNOWN31
    case 0xC4D1F6: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/unknown/C4/C4D065.asm:206 LDA #$41
    case 0xC4D1F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000041, 2); else cpu.execute_instruction<0xA9>(0x000041, 3); return true;
    // src/unknown/C4/C4D065.asm:206 LDA #$41
    // Overlapping static entry reached from 0xC4D1F8.
    case 0xC4D1FA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4D065.asm:207 CLC
    case 0xC4D1FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:208 SBC @VIRTUAL02
    case 0xC4D1FC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4D1FE: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4D200: cpu.execute_instruction<0x10>(0x000018, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4D202: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:209 BRANCHGTS @UNKNOWN30
    case 0xC4D204: cpu.execute_instruction<0x30>(0x000014, 2); return true;
    // src/unknown/C4/C4D065.asm:210 LDA @VIRTUAL02
    case 0xC4D206: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:211 CLC
    case 0xC4D208: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:212 SBC #$5A
    case 0xC4D209: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x00005A, 2); else cpu.execute_instruction<0xE9>(0x00005A, 3); return true;
    // src/unknown/C4/C4D065.asm:212 SBC #$5A
    // Overlapping static entry reached from 0xC4D209.
    case 0xC4D20B: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4D20C: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4D20E: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4D210: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/unknown/C4/C4D065.asm:213 BRANCHGTS @UNKNOWN30
    case 0xC4D212: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/unknown/C4/C4D065.asm:214 LDX @VIRTUAL02
    case 0xC4D214: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:215 STX @LOCAL00
    case 0xC4D216: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:216 BRA @UNKNOWN31
    case 0xC4D218: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/unknown/C4/C4D065.asm:218 LDA @LOCAL01
    case 0xC4D21A: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:219 TAX
    case 0xC4D21C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:220 LDA @VIRTUAL02
    case 0xC4D21D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D065.asm:221 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D21F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:222 STA __BSS_START__,X
    case 0xC4D221: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:223 REP #PROC_FLAGS::ACCUM8
    case 0xC4D224: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:224 LDA @LOCAL01
    case 0xC4D226: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:225 INC
    case 0xC4D228: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:226 STA @LOCAL01
    case 0xC4D229: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:228 LDX @VIRTUAL04
    case 0xC4D22B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D065.asm:229 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D22D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:230 LDA __BSS_START__,X
    case 0xC4D22F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:231 STA @VIRTUAL00
    case 0xC4D232: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:232 REP #PROC_FLAGS::ACCUM8
    case 0xC4D234: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:233 LDA @VIRTUAL00
    case 0xC4D236: cpu.execute_instruction<0xA5>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:234 AND #$00FF
    case 0xC4D238: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D065.asm:234 AND #$00FF
    // Overlapping static entry reached from 0xC4D238.
    case 0xC4D23A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4D065.asm:235 BNEL @UNKNOWN0
    case 0xC4D23B: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4D065.asm:235 BNEL @UNKNOWN0
    case 0xC4D23D: cpu.execute_instruction<0x4C>(0x00D07B, 3); return true;
    // src/unknown/C4/C4D065.asm:236 LDX @LOCAL00
    case 0xC4D240: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4D065.asm:237 BEQ @UNKNOWN34
    case 0xC4D242: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/unknown/C4/C4D065.asm:238 CPX #$4E
    case 0xC4D244: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00004E, 2); else cpu.execute_instruction<0xE0>(0x00004E, 3); return true;
    // src/unknown/C4/C4D065.asm:238 CPX #$4E
    // Overlapping static entry reached from 0xC4D244.
    case 0xC4D246: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D065.asm:239 BNE @UNKNOWN33
    case 0xC4D247: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/unknown/C4/C4D065.asm:240 LDA @LOCAL01
    case 0xC4D249: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:241 TAX
    case 0xC4D24B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:242 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D24C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:243 LDA #$9D
    case 0xC4D24E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009D, 2); else cpu.execute_instruction<0xA9>(0x009D9D, 3); return true;
    // src/unknown/C4/C4D065.asm:244 STA __BSS_START__,X
    case 0xC4D250: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:244 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D24E.
    case 0xC4D251: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC4D253: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:246 LDA @LOCAL01
    case 0xC4D255: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:247 INC
    case 0xC4D257: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:248 STA @LOCAL01
    case 0xC4D258: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:249 BRA @UNKNOWN34
    case 0xC4D25A: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/unknown/C4/C4D065.asm:251 LDY #1
    case 0xC4D25C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D065.asm:251 LDY #1
    // Overlapping static entry reached from 0xC4D25C.
    case 0xC4D25E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/unknown/C4/C4D065.asm:252 LDA @LOCAL01
    case 0xC4D25F: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:253 JSR UNKNOWN_C4D00F
    case 0xC4D261: cpu.execute_instruction<0x20>(0x00D00F, 3); return true;
    // src/unknown/C4/C4D065.asm:254 STA @LOCAL01
    case 0xC4D264: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:256 LDA @LOCAL01
    case 0xC4D266: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/unknown/C4/C4D065.asm:257 TAX
    case 0xC4D268: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D065.asm:258 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D269: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D065.asm:259 LDA #0
    case 0xC4D26B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/unknown/C4/C4D065.asm:260 STA __BSS_START__,X
    case 0xC4D26D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/unknown/C4/C4D065.asm:260 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC4D26B.
    case 0xC4D26E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D065.asm:261 REP #PROC_FLAGS::ACCUM8
    case 0xC4D270: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D065.asm:262 END_C_FUNCTION
    case 0xC4D272: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D065.asm:262 END_C_FUNCTION
    case 0xC4D273: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D2A8.asm (unresolved).
bool execute_unresolved_c4_c4d2a8_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D2A8.asm:3 BEGIN_C_FUNCTION
    case 0xC4D2A8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4D2AA: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4D2AB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4D2AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D2AC.
    case 0xC4D2AE: cpu.execute_instruction<0xFF>(0xB2AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D2A8.asm:8 END_STACK_VARS
    case 0xC4D2AF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:9 LDA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4D2B0: cpu.execute_instruction<0xAD>(0x00B4B2, 3); return true;
    // src/unknown/C4/C4D2A8.asm:9 LDA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    // Overlapping static entry reached from 0xC4D2AE.
    case 0xC4D2B2: cpu.execute_instruction<0xB4>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D2A8.asm:10 BNE @UNKNOWN2
    case 0xC4D2B3: cpu.execute_instruction<0xD0>(0x000036, 2); return true;
    // src/unknown/C4/C4D2A8.asm:10 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC4D2B2.
    case 0xC4D2B4: cpu.execute_instruction<0x36>(0x0000A9, 2); return true;
    // src/unknown/C4/C4D2A8.asm:11 LDA #12
    case 0xC4D2B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4D2A8.asm:11 LDA #12
    // Overlapping static entry reached from 0xC4D2B4.
    case 0xC4D2B6: cpu.execute_instruction<0x0C>(0x008D00, 3); return true;
    // src/unknown/C4/C4D2A8.asm:11 LDA #12
    // Overlapping static entry reached from 0xC4D2B5.
    case 0xC4D2B7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D2A8.asm:12 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4D2B8: cpu.execute_instruction<0x8D>(0x00B4B2, 3); return true;
    // src/unknown/C4/C4D2A8.asm:12 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    // Overlapping static entry reached from 0xC4D2B6.
    case 0xC4D2B9: cpu.execute_instruction<0xB2>(0x0000B4, 2); return true;
    // src/unknown/C4/C4D2A8.asm:13 LDX PALETTES + BPP4PALETTE_SIZE * 8 + 1 * 2
    case 0xC4D2BB: cpu.execute_instruction<0xAE>(0x000302, 3); return true;
    // src/unknown/C4/C4D2A8.asm:14 STX @LOCAL01
    case 0xC4D2BE: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2A8.asm:15 LDA #130
    case 0xC4D2C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000082, 2); else cpu.execute_instruction<0xA9>(0x000082, 3); return true;
    // src/unknown/C4/C4D2A8.asm:15 LDA #130
    // Overlapping static entry reached from 0xC4D2C0.
    case 0xC4D2C2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D2A8.asm:16 STA @LOCAL00
    case 0xC4D2C3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:17 BRA @UNKNOWN1
    case 0xC4D2C5: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/unknown/C4/C4D2A8.asm:19 DEC
    case 0xC4D2C7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:20 ASL
    case 0xC4D2C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:21 PHA
    case 0xC4D2C9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:22 LDA @LOCAL00
    case 0xC4D2CA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:23 ASL
    case 0xC4D2CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:24 TAX
    case 0xC4D2CD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:25 LDA PALETTES,X
    case 0xC4D2CE: cpu.execute_instruction<0xBD>(0x000200, 3); return true;
    // src/unknown/C4/C4D2A8.asm:26 PLX
    case 0xC4D2D1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:27 STA PALETTES,X
    case 0xC4D2D2: cpu.execute_instruction<0x9D>(0x000200, 3); return true;
    // src/unknown/C4/C4D2A8.asm:28 LDA @LOCAL00
    case 0xC4D2D5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:29 INC
    case 0xC4D2D7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2A8.asm:30 STA @LOCAL00
    case 0xC4D2D8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2A8.asm:32 CMP #136
    case 0xC4D2DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000088, 2); else cpu.execute_instruction<0xC9>(0x000088, 3); return true;
    // src/unknown/C4/C4D2A8.asm:32 CMP #136
    // Overlapping static entry reached from 0xC4D2DA.
    case 0xC4D2DC: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/unknown/C4/C4D2A8.asm:33 BCC @UNKNOWN0
    case 0xC4D2DD: cpu.execute_instruction<0x90>(0x0000E8, 2); return true;
    // src/unknown/C4/C4D2A8.asm:34 LDX @LOCAL01
    case 0xC4D2DF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2A8.asm:35 STX PALETTES + BPP4PALETTE_SIZE * 8 + 7 * 2
    case 0xC4D2E1: cpu.execute_instruction<0x8E>(0x00030E, 3); return true;
    // src/unknown/C4/C4D2A8.asm:36 LDA #16
    case 0xC4D2E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/unknown/C4/C4D2A8.asm:36 LDA #16
    // Overlapping static entry reached from 0xC4D2E4.
    case 0xC4D2E6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/unknown/C4/C4D2A8.asm:37 JSL UNKNOWN_C0856B
    case 0xC4D2E7: cpu.execute_instruction<0x22>(0xC0856B, 4); return true;
    // src/unknown/C4/C4D2A8.asm:39 DEC FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4D2EB: cpu.execute_instruction<0xCE>(0x00B4B2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D2A8.asm:40 END_C_FUNCTION
    case 0xC4D2EE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D2A8.asm:40 END_C_FUNCTION
    case 0xC4D2EF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D2F0.asm (unresolved).
bool execute_unresolved_c4_c4d2f0_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D2F0.asm:3 BEGIN_C_FUNCTION
    case 0xC4D2F0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4D2F2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4D2F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4D2F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D2F4.
    case 0xC4D2F6: cpu.execute_instruction<0xFF>(0x77AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D2F0.asm:9 END_STACK_VARS
    case 0xC4D2F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    case 0xC4D2F8: cpu.execute_instruction<0xAD>(0x009877, 3); return true;
    // src/unknown/C4/C4D2F0.asm:10 LDA GAME_STATE+game_state::leader_x_coord
    // Overlapping static entry reached from 0xC4D2F6.
    case 0xC4D2FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:11 XBA
    case 0xC4D2FB: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:12 AND #$00FF
    case 0xC4D2FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:12 AND #$00FF
    // Overlapping static entry reached from 0xC4D2FC.
    case 0xC4D2FE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D2F0.asm:13 TAX
    case 0xC4D2FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:14 LDY #128
    case 0xC4D300: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000080, 2); else cpu.execute_instruction<0xA0>(0x000080, 3); return true;
    // src/unknown/C4/C4D2F0.asm:14 LDY #128
    // Overlapping static entry reached from 0xC4D300.
    case 0xC4D302: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/unknown/C4/C4D2F0.asm:15 LDA GAME_STATE+game_state::leader_y_coord
    case 0xC4D303: cpu.execute_instruction<0xAD>(0x00987B, 3); return true;
    // src/unknown/C4/C4D2F0.asm:16 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC4D306: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/unknown/C4/C4D2F0.asm:17 STA @LOCAL03
    case 0xC4D30A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4D30C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000F, 2); else cpu.execute_instruction<0xA9>(0x00A70F, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D30C.
    case 0xC4D30E: cpu.execute_instruction<0xA7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4D30F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D30E.
    case 0xC4D310: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4D311: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D310.
    case 0xC4D312: cpu.execute_instruction<0xEF>(0x088500, 4); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D311.
    case 0xC4D313: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:18 LOADPTR MAP_DATA_PER_SECTOR_TOWN_MAP_DATA, @VIRTUAL06
    case 0xC4D314: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/unknown/C4/C4D2F0.asm:19 TXA
    case 0xC4D316: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:522 STA scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D317: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:523 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D319: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:524 ADC scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:20 OPTIMIZED_MULT @VIRTUAL04, 3
    case 0xC4D31A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:21 STA @VIRTUAL02
    case 0xC4D31C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:22 LDA @LOCAL03
    case 0xC4D31E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:712 STA scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D320: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:713 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D322: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:714 ADC scratch
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D323: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:715 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D325: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:716 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D326: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:717 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D327: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:718 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D328: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:719 ASL
    // Macro caller: src/unknown/C4/C4D2F0.asm:23 OPTIMIZED_MULT @VIRTUAL04, 96
    case 0xC4D329: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:24 CLC
    case 0xC4D32A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:25 ADC @VIRTUAL02
    case 0xC4D32B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:26 STA @LOCAL02
    case 0xC4D32D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:27 INC
    case 0xC4D32F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D330: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D332: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D334: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:28 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D336: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D2F0.asm:29 CLC
    case 0xC4D338: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:30 ADC @VIRTUAL0A
    case 0xC4D339: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:31 STA @VIRTUAL0A
    case 0xC4D33B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:32 LDA [@VIRTUAL0A]
    case 0xC4D33D: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:33 AND #$00FF
    case 0xC4D33F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:33 AND #$00FF
    // Overlapping static entry reached from 0xC4D33F.
    case 0xC4D341: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D2F0.asm:34 STA @VIRTUAL04
    case 0xC4D342: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:35 LDA @LOCAL02
    case 0xC4D344: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:36 INC
    case 0xC4D346: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:37 INC
    case 0xC4D347: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D348: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D34A: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D34C: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/unknown/C4/C4D2F0.asm:38 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC4D34E: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/unknown/C4/C4D2F0.asm:39 CLC
    case 0xC4D350: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:40 ADC @VIRTUAL0A
    case 0xC4D351: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:41 STA @VIRTUAL0A
    case 0xC4D353: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:42 LDA [@VIRTUAL0A]
    case 0xC4D355: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D2F0.asm:43 AND #$00FF
    case 0xC4D357: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC4D357.
    case 0xC4D359: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D2F0.asm:44 STA @VIRTUAL02
    case 0xC4D35A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:45 LDA @LOCAL02
    case 0xC4D35C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:46 CLC
    case 0xC4D35E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:47 ADC @VIRTUAL06
    case 0xC4D35F: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:48 STA @VIRTUAL06
    case 0xC4D361: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:49 LDA [@VIRTUAL06]
    case 0xC4D363: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:50 AND #$00FF
    case 0xC4D365: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D2F0.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC4D365.
    case 0xC4D367: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/unknown/C4/C4D2F0.asm:51 AND #$0070
    case 0xC4D368: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000070, 2); else cpu.execute_instruction<0x29>(0x000070, 3); return true;
    // src/unknown/C4/C4D2F0.asm:51 AND #$0070
    // Overlapping static entry reached from 0xC4D368.
    case 0xC4D36A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/unknown/C4/C4D2F0.asm:52 BEQL @UNKNOWN5
    case 0xC4D36B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/unknown/C4/C4D2F0.asm:52 BEQL @UNKNOWN5
    case 0xC4D36D: cpu.execute_instruction<0x4C>(0x00D3F8, 3); return true;
    // src/unknown/C4/C4D2F0.asm:53 CMP #1 << 4
    case 0xC4D370: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/unknown/C4/C4D2F0.asm:53 CMP #1 << 4
    // Overlapping static entry reached from 0xC4D370.
    case 0xC4D372: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:54 BEQ @UNKNOWN1
    case 0xC4D373: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/unknown/C4/C4D2F0.asm:55 CMP #2 << 4
    case 0xC4D375: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/unknown/C4/C4D2F0.asm:55 CMP #2 << 4
    // Overlapping static entry reached from 0xC4D375.
    case 0xC4D377: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:56 BEQ @UNKNOWN2
    case 0xC4D378: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/unknown/C4/C4D2F0.asm:57 CMP #4 << 4
    case 0xC4D37A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/unknown/C4/C4D2F0.asm:57 CMP #4 << 4
    // Overlapping static entry reached from 0xC4D37A.
    case 0xC4D37C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:58 BEQ @UNKNOWN3
    case 0xC4D37D: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/unknown/C4/C4D2F0.asm:59 CMP #3 << 4
    case 0xC4D37F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/unknown/C4/C4D2F0.asm:59 CMP #3 << 4
    // Overlapping static entry reached from 0xC4D37F.
    case 0xC4D381: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:60 BEQ @UNKNOWN4
    case 0xC4D382: cpu.execute_instruction<0xF0>(0x000059, 2); return true;
    // src/unknown/C4/C4D2F0.asm:61 BRA @UNKNOWN5
    case 0xC4D384: cpu.execute_instruction<0x80>(0x000072, 2); return true;
    // src/unknown/C4/C4D2F0.asm:63 LDA @VIRTUAL02
    case 0xC4D386: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:64 SEC
    case 0xC4D388: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:65 SBC #8
    case 0xC4D389: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4D2F0.asm:65 SBC #8
    // Overlapping static entry reached from 0xC4D389.
    case 0xC4D38B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D2F0.asm:66 TAY
    case 0xC4D38C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:67 LDX @VIRTUAL04
    case 0xC4D38D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:68 STX @LOCAL01
    case 0xC4D38F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:69 LDA f:TOWN_MAP_MAPPING+4
    case 0xC4D391: cpu.execute_instruction<0xAF>(0xEFC513, 4); return true;
    // src/unknown/C4/C4D2F0.asm:70 ASL
    case 0xC4D395: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:71 TAX
    case 0xC4D396: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:72 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D397: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:73 LDX @LOCAL01
    case 0xC4D39B: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:74 JSL REDIRECT_C08C58
    case 0xC4D39D: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D2F0.asm:75 BRA @UNKNOWN5
    case 0xC4D3A1: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/unknown/C4/C4D2F0.asm:77 LDA @VIRTUAL02
    case 0xC4D3A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:78 CLC
    case 0xC4D3A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:79 ADC #8
    case 0xC4D3A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/unknown/C4/C4D2F0.asm:79 ADC #8
    // Overlapping static entry reached from 0xC4D3A6.
    case 0xC4D3A8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D2F0.asm:80 TAY
    case 0xC4D3A9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:81 LDX @VIRTUAL04
    case 0xC4D3AA: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:82 STX @LOCAL01
    case 0xC4D3AC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:83 LDA f:TOWN_MAP_MAPPING+6
    case 0xC4D3AE: cpu.execute_instruction<0xAF>(0xEFC515, 4); return true;
    // src/unknown/C4/C4D2F0.asm:84 ASL
    case 0xC4D3B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:85 TAX
    case 0xC4D3B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:86 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D3B4: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:87 LDX @LOCAL01
    case 0xC4D3B8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:88 JSL REDIRECT_C08C58
    case 0xC4D3BA: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D2F0.asm:89 BRA @UNKNOWN5
    case 0xC4D3BE: cpu.execute_instruction<0x80>(0x000038, 2); return true;
    // src/unknown/C4/C4D2F0.asm:91 LDY @VIRTUAL02
    case 0xC4D3C0: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:92 LDA @VIRTUAL04
    case 0xC4D3C2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:93 SEC
    case 0xC4D3C4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:94 SBC #8
    case 0xC4D3C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000008, 2); else cpu.execute_instruction<0xE9>(0x000008, 3); return true;
    // src/unknown/C4/C4D2F0.asm:94 SBC #8
    // Overlapping static entry reached from 0xC4D3C5.
    case 0xC4D3C7: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D2F0.asm:95 TAX
    case 0xC4D3C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:96 STX @LOCAL02
    case 0xC4D3C9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:97 LDA f:TOWN_MAP_MAPPING+8
    case 0xC4D3CB: cpu.execute_instruction<0xAF>(0xEFC517, 4); return true;
    // src/unknown/C4/C4D2F0.asm:98 ASL
    case 0xC4D3CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:99 TAX
    case 0xC4D3D0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:100 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D3D1: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:101 LDX @LOCAL02
    case 0xC4D3D5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C4D2F0.asm:102 JSL REDIRECT_C08C58
    case 0xC4D3D7: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D2F0.asm:103 BRA @UNKNOWN5
    case 0xC4D3DB: cpu.execute_instruction<0x80>(0x00001B, 2); return true;
    // src/unknown/C4/C4D2F0.asm:105 LDY @VIRTUAL02
    case 0xC4D3DD: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:106 LDA @VIRTUAL04
    case 0xC4D3DF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:107 CLC
    case 0xC4D3E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:108 ADC #16
    case 0xC4D3E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/unknown/C4/C4D2F0.asm:108 ADC #16
    // Overlapping static entry reached from 0xC4D3E2.
    case 0xC4D3E4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D2F0.asm:109 TAX
    case 0xC4D3E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:110 STX @LOCAL00
    case 0xC4D3E6: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2F0.asm:111 LDA f:TOWN_MAP_MAPPING+10
    case 0xC4D3E8: cpu.execute_instruction<0xAF>(0xEFC519, 4); return true;
    // src/unknown/C4/C4D2F0.asm:112 ASL
    case 0xC4D3EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:113 TAX
    case 0xC4D3ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:114 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D3EE: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:115 LDX @LOCAL00
    case 0xC4D3F2: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/unknown/C4/C4D2F0.asm:116 JSL REDIRECT_C08C58
    case 0xC4D3F4: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D2F0.asm:118 LDA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D3F8: cpu.execute_instruction<0xAD>(0x00B4B0, 3); return true;
    // src/unknown/C4/C4D2F0.asm:119 CMP #10
    case 0xC4D3FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C4D2F0.asm:119 CMP #10
    // Overlapping static entry reached from 0xC4D3FB.
    case 0xC4D3FD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C4D2F0.asm:120 BCS @UNKNOWN6
    case 0xC4D3FE: cpu.execute_instruction<0xB0>(0x000018, 2); return true;
    // src/unknown/C4/C4D2F0.asm:121 LDY @VIRTUAL02
    case 0xC4D400: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:122 LDX @VIRTUAL04
    case 0xC4D402: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:123 STX @LOCAL01
    case 0xC4D404: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:124 LDA f:TOWN_MAP_MAPPING+2
    case 0xC4D406: cpu.execute_instruction<0xAF>(0xEFC511, 4); return true;
    // src/unknown/C4/C4D2F0.asm:125 ASL
    case 0xC4D40A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:126 TAX
    case 0xC4D40B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:127 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D40C: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:128 LDX @LOCAL01
    case 0xC4D410: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:129 JSL REDIRECT_C08C58
    case 0xC4D412: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D2F0.asm:130 BRA @UNKNOWN7
    case 0xC4D416: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/unknown/C4/C4D2F0.asm:132 LDY @VIRTUAL02
    case 0xC4D418: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/unknown/C4/C4D2F0.asm:133 LDX @VIRTUAL04
    case 0xC4D41A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/unknown/C4/C4D2F0.asm:134 STX @LOCAL01
    case 0xC4D41C: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:135 LDA f:TOWN_MAP_MAPPING
    case 0xC4D41E: cpu.execute_instruction<0xAF>(0xEFC50F, 4); return true;
    // src/unknown/C4/C4D2F0.asm:136 ASL
    case 0xC4D422: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:137 TAX
    case 0xC4D423: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:138 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D424: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D2F0.asm:139 LDX @LOCAL01
    case 0xC4D428: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D2F0.asm:140 JSL REDIRECT_C08C58
    case 0xC4D42A: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D2F0.asm:142 LDX TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D42E: cpu.execute_instruction<0xAE>(0x00B4B0, 3); return true;
    // src/unknown/C4/C4D2F0.asm:143 DEX
    case 0xC4D431: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D2F0.asm:144 STX TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D432: cpu.execute_instruction<0x8E>(0x00B4B0, 3); return true;
    // src/unknown/C4/C4D2F0.asm:145 BNE @UNKNOWN8
    case 0xC4D435: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4D2F0.asm:146 LDA #20
    case 0xC4D437: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4D2F0.asm:146 LDA #20
    // Overlapping static entry reached from 0xC4D437.
    case 0xC4D439: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D2F0.asm:147 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D43A: cpu.execute_instruction<0x8D>(0x00B4B0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D2F0.asm:149 END_C_FUNCTION
    case 0xC4D43D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D2F0.asm:149 END_C_FUNCTION
    case 0xC4D43E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D43F.asm (unresolved).
bool execute_unresolved_c4_c4d43f_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D43F.asm:3 BEGIN_C_FUNCTION
    case 0xC4D43F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4D441: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4D442: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4D443: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4D444: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D444.
    case 0xC4D446: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4D447: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/unknown/C4/C4D43F.asm:10 END_STACK_VARS
    case 0xC4D448: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:11 TAX
    case 0xC4D449: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:12 STX @LOCAL03
    case 0xC4D44A: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/unknown/C4/C4D43F.asm:13 STZ CURRENT_SPRITE_DRAWING_PRIORITY
    case 0xC4D44C: cpu.execute_instruction<0x9C>(0x002400, 3); return true;
    // src/unknown/C4/C4D43F.asm:13 STZ CURRENT_SPRITE_DRAWING_PRIORITY
    // Overlapping static entry reached from 0xC4D4BB.
    case 0xC4D44D: cpu.execute_instruction<0x00>(0x000024, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4D44F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00F44C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    // Overlapping static entry reached from 0xC4D44F.
    case 0xC4D451: cpu.execute_instruction<0xF4>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4D452: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4D454: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    // Overlapping static entry reached from 0xC4D454.
    case 0xC4D456: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D43F.asm:14 LOADPTR UNKNOWN_E1F44C, @LOCAL00
    case 0xC4D457: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/unknown/C4/C4D43F.asm:15 JSL UNKNOWN_C088A5
    case 0xC4D459: cpu.execute_instruction<0x22>(0xC088A5, 4); return true;
    // src/unknown/C4/C4D43F.asm:16 REP #PROC_FLAGS::ACCUM8
    case 0xC4D45D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:17 AND #$00FF
    case 0xC4D45F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC4D45F.
    case 0xC4D461: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/unknown/C4/C4D43F.asm:18 STA @VIRTUAL02
    case 0xC4D462: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4D464: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00F491, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D464.
    case 0xC4D466: cpu.execute_instruction<0xF4>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4D467: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4D469: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4D469.
    case 0xC4D46B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/unknown/C4/C4D43F.asm:19 LOADPTR TOWN_MAP_ICON_PLACEMENT_PTR_TABLE, @VIRTUAL0A
    case 0xC4D46C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D43F.asm:20 LDX @LOCAL03
    case 0xC4D46E: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/unknown/C4/C4D43F.asm:21 TXA
    case 0xC4D470: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:22 ASL
    case 0xC4D471: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:23 ASL
    case 0xC4D472: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:24 CLC
    case 0xC4D473: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:25 ADC @VIRTUAL0A
    case 0xC4D474: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:26 STA @VIRTUAL0A
    case 0xC4D476: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D478: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC4D478.
    case 0xC4D47A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D47B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D47D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D47E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D480: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/unknown/C4/C4D43F.asm:27 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4D482: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/unknown/C4/C4D43F.asm:28 JMP @UNKNOWN5
    case 0xC4D484: cpu.execute_instruction<0x4C>(0x00D521, 3); return true;
    // src/unknown/C4/C4D43F.asm:30 LDY #1
    case 0xC4D487: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D43F.asm:30 LDY #1
    // Overlapping static entry reached from 0xC4D487.
    case 0xC4D489: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D43F.asm:31 STY @LOCAL02
    case 0xC4D48A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D48C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:33 LDY #2
    case 0xC4D48E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4D43F.asm:33 LDY #2
    // Overlapping static entry reached from 0xC4D48E.
    case 0xC4D490: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:34 LDA [@VIRTUAL06],Y
    case 0xC4D491: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC4D493: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:36 AND #$00FF
    case 0xC4D495: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC4D495.
    case 0xC4D497: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D43F.asm:37 TAX
    case 0xC4D498: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:38 LDA f:UNKNOWN_E1F47A,X
    case 0xC4D499: cpu.execute_instruction<0xBF>(0xE1F47A, 4); return true;
    // src/unknown/C4/C4D43F.asm:39 AND #$00FF
    case 0xC4D49D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC4D49D.
    case 0xC4D49F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D43F.asm:40 BEQ @UNKNOWN1
    case 0xC4D4A0: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/unknown/C4/C4D43F.asm:41 LDA TOWN_MAP_ANIMATION_FRAME
    case 0xC4D4A2: cpu.execute_instruction<0xAD>(0x00B4AE, 3); return true;
    // src/unknown/C4/C4D43F.asm:42 CMP #10
    case 0xC4D4A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/unknown/C4/C4D43F.asm:42 CMP #10
    // Overlapping static entry reached from 0xC4D4A5.
    case 0xC4D4A7: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/unknown/C4/C4D43F.asm:43 BCS @UNKNOWN1
    case 0xC4D4A8: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // src/unknown/C4/C4D43F.asm:44 LDY #0
    case 0xC4D4AA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D43F.asm:44 LDY #0
    // Overlapping static entry reached from 0xC4D4AA.
    case 0xC4D4AC: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D43F.asm:45 STY @LOCAL02
    case 0xC4D4AD: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:47 LDX #0
    case 0xC4D4AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D43F.asm:47 LDX #0
    // Overlapping static entry reached from 0xC4D4AF.
    case 0xC4D4B1: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D43F.asm:48 STX @LOCAL01
    case 0xC4D4B2: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:49 LDY #3
    case 0xC4D4B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4D43F.asm:49 LDY #3
    // Overlapping static entry reached from 0xC4D4B4.
    case 0xC4D4B6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:50 LDA [@VIRTUAL06],Y
    case 0xC4D4B7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:51 CMP #$8000
    case 0xC4D4B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x008000, 3); return true;
    // src/unknown/C4/C4D43F.asm:51 CMP #$8000
    // Overlapping static entry reached from 0xC4D4B9.
    case 0xC4D4BB: cpu.execute_instruction<0x80>(0x000090, 2); return true;
    // src/unknown/C4/C4D43F.asm:52 BCC @UNKNOWN2
    case 0xC4D4BC: cpu.execute_instruction<0x90>(0x000005, 2); return true;
    // src/unknown/C4/C4D43F.asm:53 LDX #1
    case 0xC4D4BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/unknown/C4/C4D43F.asm:53 LDX #1
    // Overlapping static entry reached from 0xC4D4BE.
    case 0xC4D4C0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D43F.asm:54 STX @LOCAL01
    case 0xC4D4C1: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:56 LDY #3
    case 0xC4D4C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/unknown/C4/C4D43F.asm:56 LDY #3
    // Overlapping static entry reached from 0xC4D4C3.
    case 0xC4D4C5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:57 LDA [@VIRTUAL06],Y
    case 0xC4D4C6: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:58 AND #$7FFF
    case 0xC4D4C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x007FFF, 3); return true;
    // src/unknown/C4/C4D43F.asm:58 AND #$7FFF
    // Overlapping static entry reached from 0xC4D4C8.
    case 0xC4D4CA: cpu.execute_instruction<0x7F>(0x162822, 4); return true;
    // src/unknown/C4/C4D43F.asm:59 JSL GET_EVENT_FLAG
    case 0xC4D4CB: cpu.execute_instruction<0x22>(0xC21628, 4); return true;
    // src/unknown/C4/C4D43F.asm:59 JSL GET_EVENT_FLAG
    // Overlapping static entry reached from 0xC4D4CA.
    case 0xC4D4CE: cpu.execute_instruction<0xC2>(0x0000A6, 2); return true;
    // src/unknown/C4/C4D43F.asm:60 LDX @LOCAL01
    case 0xC4D4CF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:60 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4D4CE.
    case 0xC4D4D0: cpu.execute_instruction<0x12>(0x000086, 2); return true;
    // src/unknown/C4/C4D43F.asm:61 STX @VIRTUAL04
    case 0xC4D4D1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/unknown/C4/C4D43F.asm:61 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC4D4D0.
    case 0xC4D4D2: cpu.execute_instruction<0x04>(0x0000C5, 2); return true;
    // src/unknown/C4/C4D43F.asm:62 CMP @VIRTUAL04
    case 0xC4D4D3: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/unknown/C4/C4D43F.asm:62 CMP @VIRTUAL04
    // Overlapping static entry reached from 0xC4D4D2.
    case 0xC4D4D4: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D43F.asm:63 BEQ @UNKNOWN3
    case 0xC4D4D5: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D43F.asm:63 BEQ @UNKNOWN3
    // Overlapping static entry reached from 0xC4D4D4.
    case 0xC4D4D6: cpu.execute_instruction<0x05>(0x0000A0, 2); return true;
    // src/unknown/C4/C4D43F.asm:64 LDY #0
    case 0xC4D4D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/unknown/C4/C4D43F.asm:64 LDY #0
    // Overlapping static entry reached from 0xC4D4D6.
    case 0xC4D4D8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/unknown/C4/C4D43F.asm:64 LDY #0
    // Overlapping static entry reached from 0xC4D4D7.
    case 0xC4D4D9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/unknown/C4/C4D43F.asm:65 STY @LOCAL02
    case 0xC4D4DA: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:67 LDY @LOCAL02
    case 0xC4D4DC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/unknown/C4/C4D43F.asm:68 BEQ @UNKNOWN4
    case 0xC4D4DE: cpu.execute_instruction<0xF0>(0x000039, 2); return true;
    // src/unknown/C4/C4D43F.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D4E0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:70 LDY #1
    case 0xC4D4E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/unknown/C4/C4D43F.asm:70 LDY #1
    // Overlapping static entry reached from 0xC4D4E2.
    case 0xC4D4E4: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:71 LDA [@VIRTUAL06],Y
    case 0xC4D4E5: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC4D4E7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:73 AND #$00FF
    case 0xC4D4E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC4D4E9.
    case 0xC4D4EB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/unknown/C4/C4D43F.asm:74 TAY
    case 0xC4D4EC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:75 STY @LOCAL03
    case 0xC4D4ED: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D4EF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D4F1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D4F3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D43F.asm:76 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D4F5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D43F.asm:77 LDA [@VIRTUAL0A]
    case 0xC4D4F7: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:78 AND #$00FF
    case 0xC4D4F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC4D4F9.
    case 0xC4D4FB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/unknown/C4/C4D43F.asm:79 TAX
    case 0xC4D4FC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:80 STX @LOCAL01
    case 0xC4D4FD: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:81 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D4FF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:82 LDY #2
    case 0xC4D501: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/unknown/C4/C4D43F.asm:82 LDY #2
    // Overlapping static entry reached from 0xC4D501.
    case 0xC4D503: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/unknown/C4/C4D43F.asm:83 LDA [@VIRTUAL06],Y
    case 0xC4D504: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC4D506: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/unknown/C4/C4D43F.asm:85 AND #$00FF
    case 0xC4D508: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:85 AND #$00FF
    // Overlapping static entry reached from 0xC4D508.
    case 0xC4D50A: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:86 ASL
    case 0xC4D50B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:87 TAX
    case 0xC4D50C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:88 LDA f:UNKNOWN_E1F44C,X
    case 0xC4D50D: cpu.execute_instruction<0xBF>(0xE1F44C, 4); return true;
    // src/unknown/C4/C4D43F.asm:89 LDY @LOCAL03
    case 0xC4D511: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/unknown/C4/C4D43F.asm:90 LDX @LOCAL01
    case 0xC4D513: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/unknown/C4/C4D43F.asm:91 JSL REDIRECT_C08C58
    case 0xC4D515: cpu.execute_instruction<0x22>(0xC08C54, 4); return true;
    // src/unknown/C4/C4D43F.asm:93 LDA #5
    case 0xC4D519: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/unknown/C4/C4D43F.asm:93 LDA #5
    // Overlapping static entry reached from 0xC4D519.
    case 0xC4D51B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/unknown/C4/C4D43F.asm:94 CLC
    case 0xC4D51C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:95 ADC @VIRTUAL06
    case 0xC4D51D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:96 STA @VIRTUAL06
    case 0xC4D51F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D521: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D523: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D525: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/unknown/C4/C4D43F.asm:98 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC4D527: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/unknown/C4/C4D43F.asm:99 LDA [@VIRTUAL0A]
    case 0xC4D529: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/unknown/C4/C4D43F.asm:100 AND #$00FF
    case 0xC4D52B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:100 AND #$00FF
    // Overlapping static entry reached from 0xC4D52B.
    case 0xC4D52D: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/unknown/C4/C4D43F.asm:101 CMP #<-1
    case 0xC4D52E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x0000FF, 3); return true;
    // src/unknown/C4/C4D43F.asm:101 CMP #<-1
    // Overlapping static entry reached from 0xC4D52E.
    case 0xC4D530: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/unknown/C4/C4D43F.asm:102 BNEL @UNKNOWN0
    case 0xC4D531: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/unknown/C4/C4D43F.asm:102 BNEL @UNKNOWN0
    case 0xC4D533: cpu.execute_instruction<0x4C>(0x00D487, 3); return true;
    // src/unknown/C4/C4D43F.asm:103 JSR UNKNOWN_C4D2F0
    case 0xC4D536: cpu.execute_instruction<0x20>(0x00D2F0, 3); return true;
    // src/unknown/C4/C4D43F.asm:104 LDX TOWN_MAP_ANIMATION_FRAME
    case 0xC4D539: cpu.execute_instruction<0xAE>(0x00B4AE, 3); return true;
    // src/unknown/C4/C4D43F.asm:105 DEX
    case 0xC4D53C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D43F.asm:106 STX TOWN_MAP_ANIMATION_FRAME
    case 0xC4D53D: cpu.execute_instruction<0x8E>(0x00B4AE, 3); return true;
    // src/unknown/C4/C4D43F.asm:107 BNE @UNKNOWN7
    case 0xC4D540: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4D43F.asm:108 LDA #60
    case 0xC4D542: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4D43F.asm:108 LDA #60
    // Overlapping static entry reached from 0xC4D542.
    case 0xC4D544: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D43F.asm:109 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4D545: cpu.execute_instruction<0x8D>(0x00B4AE, 3); return true;
    // src/unknown/C4/C4D43F.asm:111 LDA @VIRTUAL02
    case 0xC4D548: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/unknown/C4/C4D43F.asm:112 JSL UNKNOWN_C088A5
    case 0xC4D54A: cpu.execute_instruction<0x22>(0xC088A5, 4); return true;
    // src/unknown/C4/C4D43F.asm:113 JSR UNKNOWN_C4D2A8
    case 0xC4D54E: cpu.execute_instruction<0x20>(0x00D2A8, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D43F.asm:114 END_C_FUNCTION
    case 0xC4D551: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/unknown/C4/C4D43F.asm:114 END_C_FUNCTION
    case 0xC4D552: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/unknown/C4/C4D744.asm (unresolved).
bool execute_unresolved_c4_c4d744_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/unknown/C4/C4D744.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4D744: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4D746: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4D747: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4D748: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC4D748.
    case 0xC4D74A: cpu.execute_instruction<0xFF>(0x00A25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/unknown/C4/C4D744.asm:7 END_STACK_VARS
    case 0xC4D74B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:8 LDX #0
    case 0xC4D74C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D744.asm:8 LDX #0
    // Overlapping static entry reached from 0xC4D74C.
    case 0xC4D74E: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D744.asm:9 STX @LOCAL01
    case 0xC4D74F: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:10 TXY
    case 0xC4D751: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:11 STY @LOCAL00
    case 0xC4D752: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4D744.asm:12 LDA #60
    case 0xC4D754: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00003C, 3); return true;
    // src/unknown/C4/C4D744.asm:12 LDA #60
    // Overlapping static entry reached from 0xC4D754.
    case 0xC4D756: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D744.asm:13 STA TOWN_MAP_ANIMATION_FRAME
    case 0xC4D757: cpu.execute_instruction<0x8D>(0x00B4AE, 3); return true;
    // src/unknown/C4/C4D744.asm:14 LDA #20
    case 0xC4D75A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/unknown/C4/C4D744.asm:14 LDA #20
    // Overlapping static entry reached from 0xC4D75A.
    case 0xC4D75C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D744.asm:15 STA TOWN_MAP_PLAYER_ICON_ANIMATION_FRAME
    case 0xC4D75D: cpu.execute_instruction<0x8D>(0x00B4B0, 3); return true;
    // src/unknown/C4/C4D744.asm:16 LDA #12
    case 0xC4D760: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/unknown/C4/C4D744.asm:16 LDA #12
    // Overlapping static entry reached from 0xC4D760.
    case 0xC4D762: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/unknown/C4/C4D744.asm:17 STA FRAMES_UNTIL_MAP_ICON_PALETTE_UPDATE
    case 0xC4D763: cpu.execute_instruction<0x8D>(0x00B4B2, 3); return true;
    // src/unknown/C4/C4D744.asm:18 TXA
    case 0xC4D766: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:19 JSR LOAD_TOWN_MAP_DATA
    case 0xC4D767: cpu.execute_instruction<0x20>(0x00D553, 3); return true;
    // src/unknown/C4/C4D744.asm:21 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4D76A: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/unknown/C4/C4D744.asm:22 JSL OAM_CLEAR
    case 0xC4D76E: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/unknown/C4/C4D744.asm:23 LDA PAD_PRESS
    case 0xC4D772: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D744.asm:24 AND #PAD::UP
    case 0xC4D775: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/unknown/C4/C4D744.asm:24 AND #PAD::UP
    // Overlapping static entry reached from 0xC4D775.
    case 0xC4D777: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:25 BEQ @UNKNOWN1
    case 0xC4D778: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:26 LDX @LOCAL01
    case 0xC4D77A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:27 DEX
    case 0xC4D77C: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:28 STX @LOCAL01
    case 0xC4D77D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:30 LDA PAD_PRESS
    case 0xC4D77F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D744.asm:31 AND #PAD::DOWN
    case 0xC4D782: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/unknown/C4/C4D744.asm:31 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC4D782.
    case 0xC4D784: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/unknown/C4/C4D744.asm:32 BEQ @UNKNOWN2
    case 0xC4D785: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:32 BEQ @UNKNOWN2
    // Overlapping static entry reached from 0xC4D784.
    case 0xC4D786: cpu.execute_instruction<0x05>(0x0000A6, 2); return true;
    // src/unknown/C4/C4D744.asm:33 LDX @LOCAL01
    case 0xC4D787: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:33 LDX @LOCAL01
    // Overlapping static entry reached from 0xC4D786.
    case 0xC4D788: cpu.execute_instruction<0x10>(0x0000E8, 2); return true;
    // src/unknown/C4/C4D744.asm:34 INX
    case 0xC4D789: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:35 STX @LOCAL01
    case 0xC4D78A: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:37 LDX @LOCAL01
    case 0xC4D78C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:38 CPX #.LOWORD(-1)
    case 0xC4D78E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/unknown/C4/C4D744.asm:38 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4D78E.
    case 0xC4D790: cpu.execute_instruction<0xFF>(0xA205D0, 4); return true;
    // src/unknown/C4/C4D744.asm:39 BNE @UNKNOWN3
    case 0xC4D791: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:40 LDX #5
    case 0xC4D793: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/unknown/C4/C4D744.asm:40 LDX #5
    // Overlapping static entry reached from 0xC4D790.
    case 0xC4D794: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/unknown/C4/C4D744.asm:40 LDX #5
    // Overlapping static entry reached from 0xC4D793.
    case 0xC4D795: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D744.asm:41 STX @LOCAL01
    case 0xC4D796: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:43 CPX #6
    case 0xC4D798: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/unknown/C4/C4D744.asm:43 CPX #6
    // Overlapping static entry reached from 0xC4D798.
    case 0xC4D79A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D744.asm:44 BNE @UNKNOWN4
    case 0xC4D79B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/unknown/C4/C4D744.asm:45 LDX #0
    case 0xC4D79D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/unknown/C4/C4D744.asm:45 LDX #0
    // Overlapping static entry reached from 0xC4D79D.
    case 0xC4D79F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/unknown/C4/C4D744.asm:46 STX @LOCAL01
    case 0xC4D7A0: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:48 STX @VIRTUAL02
    case 0xC4D7A2: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/unknown/C4/C4D744.asm:49 LDY @LOCAL00
    case 0xC4D7A4: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/unknown/C4/C4D744.asm:50 TYA
    case 0xC4D7A6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:51 CMP @VIRTUAL02
    case 0xC4D7A7: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/unknown/C4/C4D744.asm:52 BEQ @UNKNOWN5
    case 0xC4D7A9: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/unknown/C4/C4D744.asm:53 TXA
    case 0xC4D7AB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:54 JSR LOAD_TOWN_MAP_DATA
    case 0xC4D7AC: cpu.execute_instruction<0x20>(0x00D553, 3); return true;
    // src/unknown/C4/C4D744.asm:55 LDX @LOCAL01
    case 0xC4D7AF: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/unknown/C4/C4D744.asm:56 TXY
    case 0xC4D7B1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:57 STY @LOCAL00
    case 0xC4D7B2: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/unknown/C4/C4D744.asm:59 TXA
    case 0xC4D7B4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:60 JSR UNKNOWN_C4D43F
    case 0xC4D7B5: cpu.execute_instruction<0x20>(0x00D43F, 3); return true;
    // src/unknown/C4/C4D744.asm:61 LDA PAD_PRESS
    case 0xC4D7B8: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/unknown/C4/C4D744.asm:62 AND #PAD::A_BUTTON
    case 0xC4D7BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/unknown/C4/C4D744.asm:62 AND #PAD::A_BUTTON
    // Overlapping static entry reached from 0xC4D7BB.
    case 0xC4D7BD: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/unknown/C4/C4D744.asm:63 BNE @UNKNOWN6
    case 0xC4D7BE: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/unknown/C4/C4D744.asm:64 JSL UPDATE_SCREEN
    case 0xC4D7C0: cpu.execute_instruction<0x22>(0xC08B26, 4); return true;
    // src/unknown/C4/C4D744.asm:65 BRA @UNKNOWN0
    case 0xC4D7C4: cpu.execute_instruction<0x80>(0x0000A4, 2); return true;
    // src/unknown/C4/C4D744.asm:67 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4D7C6: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/unknown/C4/C4D744.asm:68 JSL RELOAD_MAP
    case 0xC4D7CA: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/unknown/C4/C4D744.asm:69 SEP #PROC_FLAGS::ACCUM8
    case 0xC4D7CE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/unknown/C4/C4D744.asm:70 LDA #$17
    case 0xC4D7D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x008D17, 3); return true;
    // src/unknown/C4/C4D744.asm:71 STA TM_MIRROR
    case 0xC4D7D2: cpu.execute_instruction<0x8D>(0x00001A, 3); return true;
    // src/unknown/C4/C4D744.asm:71 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D7D0.
    case 0xC4D7D3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/unknown/C4/C4D744.asm:71 STA TM_MIRROR
    // Overlapping static entry reached from 0xC4D7D3.
    case 0xC4D7D4: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/unknown/C4/C4D744.asm:72 REP #PROC_FLAGS::ACCUM8
    case 0xC4D7D5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/unknown/C4/C4D744.asm:73 END_C_FUNCTION
    case 0xC4D7D7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/unknown/C4/C4D744.asm:73 END_C_FUNCTION
    case 0xC4D7D8: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
