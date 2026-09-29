// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/text/print_menu_items.asm (source_named).
bool execute_text_print_menu_items_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_menu_items.asm:3 BEGIN_C_FUNCTION
    case 0xC1163C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC1163E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC1163F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC11640: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E9, 2); else cpu.execute_instruction<0x69>(0x00FFE9, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC11640.
    case 0xC11642: cpu.execute_instruction<0xFF>(0x58AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_menu_items.asm:9 END_STACK_VARS
    case 0xC11643: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC11644: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_menu_items.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11642.
    case 0xC11646: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/text/print_menu_items.asm:11 CMP #.LOWORD(-1)
    case 0xC11647: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items.asm:11 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11646.
    case 0xC11648: cpu.execute_instruction<0xFF>(0x03D0FF, 4); return true;
    // src/text/print_menu_items.asm:11 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11647.
    case 0xC11649: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items.asm:12 BEQL @UNKNOWN13
    case 0xC1164A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items.asm:12 BEQL @UNKNOWN13
    case 0xC1164C: cpu.execute_instruction<0x4C>(0x0017DE, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items.asm:12 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC11649.
    case 0xC1164D: cpu.execute_instruction<0xDE>(0x00AD17, 3); return true;
    // src/text/print_menu_items.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC1164F: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_menu_items.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1164D.
    case 0xC11650: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11650.
    case 0xC11651: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/text/print_menu_items.asm:14 ASL
    case 0xC11652: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:15 TAX
    case 0xC11653: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC11654: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/print_menu_items.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC11657: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/print_menu_items.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11657.
    case 0xC11659: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_menu_items.asm:18 JSL MULT168
    case 0xC1165A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/print_menu_items.asm:19 CLC
    case 0xC1165E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:20 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1165F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/print_menu_items.asm:20 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1165F.
    case 0xC11661: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/text/print_menu_items.asm:21 STA @VIRTUAL04
    case 0xC11662: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:21 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC11661.
    case 0xC11663: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/text/print_menu_items.asm:22 LDX @VIRTUAL04
    case 0xC11664: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:22 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC11663.
    case 0xC11665: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/text/print_menu_items.asm:23 LDA a:window_stats::current_option,X
    case 0xC11666: cpu.execute_instruction<0xBD>(0x00002B, 3); return true;
    // src/text/print_menu_items.asm:23 LDA a:window_stats::current_option,X
    // Overlapping static entry reached from 0xC11665.
    case 0xC11667: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:23 LDA a:window_stats::current_option,X
    // Overlapping static entry reached from 0xC11667.
    case 0xC11668: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/print_menu_items.asm:24 CMP #.LOWORD(-1)
    case 0xC11669: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11669.
    case 0xC1166B: cpu.execute_instruction<0xFF>(0xE20AD0, 4); return true;
    // src/text/print_menu_items.asm:25 BNE @UNKNOWN1
    case 0xC1166C: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/text/print_menu_items.asm:26 SEP #PROC_FLAGS::ACCUM8
    case 0xC1166E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:26 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1166B.
    case 0xC1166F: cpu.execute_instruction<0x20>(0x00FFA9, 3); return true;
    // src/text/print_menu_items.asm:27 LDA #$00FF
    case 0xC11670: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x008DFF, 3); return true;
    // src/text/print_menu_items.asm:28 STA EARLY_TICK_EXIT
    case 0xC11672: cpu.execute_instruction<0x8D>(0x00968C, 3); return true;
    // src/text/print_menu_items.asm:28 STA EARLY_TICK_EXIT
    // Overlapping static entry reached from 0xC11670.
    case 0xC11673: cpu.execute_instruction<0x8C>(0x004C96, 3); return true;
    // src/text/print_menu_items.asm:29 JMP @UNKNOWN13
    case 0xC11675: cpu.execute_instruction<0x4C>(0x0017DE, 3); return true;
    // src/text/print_menu_items.asm:29 JMP @UNKNOWN13
    // Overlapping static entry reached from 0xC11673.
    case 0xC11676: cpu.execute_instruction<0xDE>(0x00A017, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11678: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11676.
    case 0xC11679: cpu.execute_instruction<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11678.
    case 0xC1167A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC1167B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11679.
    case 0xC1167C: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:31 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC1167C.
    case 0xC1167E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/text/print_menu_items.asm:33 CLC
    case 0xC1167F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:34 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11680: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/print_menu_items.asm:34 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC1167E.
    case 0xC11681: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/text/print_menu_items.asm:34 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11680.
    case 0xC11682: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/print_menu_items.asm:35 STA @VIRTUAL02
    case 0xC11683: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:35 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC11682.
    case 0xC11684: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/text/print_menu_items.asm:36 JSR SET_INSTANT_PRINTING
    case 0xC11685: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/print_menu_items.asm:38 LDX @VIRTUAL02
    case 0xC11689: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:39 LDA a:menu_option::page,X
    case 0xC1168B: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/print_menu_items.asm:40 LDX @VIRTUAL04
    case 0xC1168E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:41 CMP a:window_stats::menu_page_number,X
    case 0xC11690: cpu.execute_instruction<0xDD>(0x000033, 3); return true;
    // src/text/print_menu_items.asm:42 BEQ @UNKNOWN3
    case 0xC11693: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/print_menu_items.asm:43 CMP #0
    case 0xC11695: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:43 CMP #0
    // Overlapping static entry reached from 0xC11695.
    case 0xC11697: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items.asm:44 BNEL @UNKNOWN12
    case 0xC11698: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items.asm:44 BNEL @UNKNOWN12
    case 0xC1169A: cpu.execute_instruction<0x4C>(0x0017C4, 3); return true;
    // src/text/print_menu_items.asm:46 LDA @VIRTUAL02
    case 0xC1169D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:47 JSL UNKNOWN_C43DDB
    case 0xC1169F: cpu.execute_instruction<0x22>(0xC43DDB, 4); return true;
    // src/text/print_menu_items.asm:48 LDX @VIRTUAL02
    case 0xC116A3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:49 LDA a:menu_option::page,X
    case 0xC116A5: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items.asm:50 BNEL @UNKNOWN11
    case 0xC116A8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items.asm:50 BNEL @UNKNOWN11
    case 0xC116AA: cpu.execute_instruction<0x4C>(0x0017A4, 3); return true;
    // src/text/print_menu_items.asm:51 LDA #0
    case 0xC116AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:51 LDA #0
    // Overlapping static entry reached from 0xC116AD.
    case 0xC116AF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:52 JSR UNKNOWN_C10FEA
    case 0xC116B0: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/print_menu_items.asm:53 LDA #$014F
    case 0xC116B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004F, 2); else cpu.execute_instruction<0xA9>(0x00014F, 3); return true;
    // src/text/print_menu_items.asm:53 LDA #$014F
    // Overlapping static entry reached from 0xC116B3.
    case 0xC116B5: cpu.execute_instruction<0x01>(0x000022, 2); return true;
    // src/text/print_menu_items.asm:54 JSL UNKNOWN_C43F77
    case 0xC116B6: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/text/print_menu_items.asm:54 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC116B5.
    case 0xC116B7: cpu.execute_instruction<0x77>(0x00003F, 2); return true;
    // src/text/print_menu_items.asm:54 JSL UNKNOWN_C43F77
    // Overlapping static entry reached from 0xC116B7.
    case 0xC116B9: cpu.execute_instruction<0xC4>(0x000022, 2); return true;
    // src/text/print_menu_items.asm:55 JSL UNKNOWN_C43CAA
    case 0xC116BA: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // src/text/print_menu_items.asm:55 JSL UNKNOWN_C43CAA
    // Overlapping static entry reached from 0xC116B9.
    case 0xC116BB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:55 JSL UNKNOWN_C43CAA
    // Overlapping static entry reached from 0xC116BB.
    case 0xC116BC: cpu.execute_instruction<0x3C>(0x00A9C4, 3); return true;
    // src/text/print_menu_items.asm:56 LDA #0
    case 0xC116BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:56 LDA #0
    // Overlapping static entry reached from 0xC116BC.
    case 0xC116BF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items.asm:56 LDA #0
    // Overlapping static entry reached from 0xC116BE.
    case 0xC116C0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:57 JSR UNKNOWN_C10FEA
    case 0xC116C1: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/print_menu_items.asm:58 LDA @VIRTUAL04
    case 0xC116C4: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:59 CLC
    case 0xC116C6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:60 ADC #window_stats::title
    case 0xC116C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/text/print_menu_items.asm:60 ADC #window_stats::title
    // Overlapping static entry reached from 0xC116C7.
    case 0xC116C9: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/print_menu_items.asm:61 TAY
    case 0xC116CA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:62 LDA __BSS_START__,Y
    case 0xC116CB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:63 AND #$00FF
    case 0xC116CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_menu_items.asm:63 AND #$00FF
    // Overlapping static entry reached from 0xC116CE.
    case 0xC116D0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items.asm:64 BEQL @UNKNOWN11
    case 0xC116D1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items.asm:64 BEQL @UNKNOWN11
    case 0xC116D3: cpu.execute_instruction<0x4C>(0x0017A4, 3); return true;
    // src/text/print_menu_items.asm:65 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC116D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00009F, 2); else cpu.execute_instruction<0xA2>(0x009C9F, 3); return true;
    // src/text/print_menu_items.asm:65 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC116D6.
    case 0xC116D8: cpu.execute_instruction<0x9C>(0x000980, 3); return true;
    // src/text/print_menu_items.asm:66 BRA @UNKNOWN7
    case 0xC116D9: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/print_menu_items.asm:68 SEP #PROC_FLAGS::ACCUM8
    case 0xC116DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:69 LDA @LOCAL03
    case 0xC116DD: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/print_menu_items.asm:70 STA __BSS_START__,X
    case 0xC116DF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:71 INY
    case 0xC116E2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:72 INX
    case 0xC116E3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC116E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:75 LDA __BSS_START__,Y
    case 0xC116E6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:76 STA @LOCAL03
    case 0xC116E9: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/print_menu_items.asm:77 REP #PROC_FLAGS::ACCUM8
    case 0xC116EB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:78 AND #$00FF
    case 0xC116ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_menu_items.asm:78 AND #$00FF
    // Overlapping static entry reached from 0xC116ED.
    case 0xC116EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_menu_items.asm:79 BEQ @UNKNOWN8
    case 0xC116F0: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/print_menu_items.asm:80 AND #$00FF
    case 0xC116F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_menu_items.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC116F2.
    case 0xC116F4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/print_menu_items.asm:81 CMP #88
    case 0xC116F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000058, 2); else cpu.execute_instruction<0xC9>(0x000058, 3); return true;
    // src/text/print_menu_items.asm:81 CMP #88
    // Overlapping static entry reached from 0xC116F5.
    case 0xC116F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_menu_items.asm:82 BNE @UNKNOWN6
    case 0xC116F8: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/text/print_menu_items.asm:84 SEP #PROC_FLAGS::ACCUM8
    case 0xC116FA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:85 LDA #88
    case 0xC116FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000058, 2); else cpu.execute_instruction<0xA9>(0x009D58, 3); return true;
    // src/text/print_menu_items.asm:86 STA __BSS_START__,X
    case 0xC116FE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:86 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC116FC.
    case 0xC116FF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items.asm:87 INX
    case 0xC11701: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC11702: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:89 LDA @VIRTUAL04
    case 0xC11704: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:90 CLC
    case 0xC11706: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:91 ADC #window_stats::menu_page_number
    case 0xC11707: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x000033, 3); return true;
    // src/text/print_menu_items.asm:91 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11707.
    case 0xC11709: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/print_menu_items.asm:92 TAY
    case 0xC1170A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:93 STY @LOCAL02
    case 0xC1170B: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/print_menu_items.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xC1170D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:95 LDA __BSS_START__,Y
    case 0xC1170F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:96 CLC
    case 0xC11712: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:97 ADC #CHAR::ZERO
    case 0xC11713: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x009D60, 3); return true;
    // src/text/print_menu_items.asm:98 STA __BSS_START__,X
    case 0xC11715: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:98 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11713.
    case 0xC11716: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items.asm:99 INX
    case 0xC11718: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:100 LDA #89
    case 0xC11719: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x009D59, 3); return true;
    // src/text/print_menu_items.asm:101 STA __BSS_START__,X
    case 0xC1171B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:101 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11719.
    case 0xC1171C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items.asm:102 INX
    case 0xC1171E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:103 LDA #0
    case 0xC1171F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/text/print_menu_items.asm:104 STA __BSS_START__,X
    case 0xC11721: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:104 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1171F.
    case 0xC11722: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items.asm:105 JSL UNKNOWN_C43CAA
    case 0xC11724: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11728: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC11728.
    case 0xC1172A: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1172B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1172D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1172E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11730: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11731: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items.asm:107 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11733: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/print_menu_items.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC11735: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11737: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11739: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1173B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:109 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1173D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items.asm:110 LDX #.LOWORD(-1)
    case 0xC1173F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/text/print_menu_items.asm:110 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1173F.
    case 0xC11741: cpu.execute_instruction<0xFF>(0x8958AD, 4); return true;
    // src/text/print_menu_items.asm:111 LDA CURRENT_FOCUS_WINDOW
    case 0xC11742: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_menu_items.asm:112 JSL SET_WINDOW_TITLE
    case 0xC11745: cpu.execute_instruction<0x22>(0xC2032B, 4); return true;
    // src/text/print_menu_items.asm:113 JSL UNKNOWN_C43CAA
    case 0xC11749: cpu.execute_instruction<0x22>(0xC43CAA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1174D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1174F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11751: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11753: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items.asm:115 JSL STRLEN
    case 0xC11755: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/text/print_menu_items.asm:116 STA @LOCAL01
    case 0xC11759: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1175B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1175D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1175F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:117 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11761: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items.asm:118 LDA @LOCAL01
    case 0xC11763: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/print_menu_items.asm:119 DEC
    case 0xC11765: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:120 DEC
    case 0xC11766: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:121 JSR PRINT_STRING
    case 0xC11767: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/text/print_menu_items.asm:122 LDY @LOCAL02
    case 0xC1176A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/print_menu_items.asm:123 LDA __BSS_START__,Y
    case 0xC1176C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items.asm:124 STA @LOCAL02
    case 0xC1176F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/print_menu_items.asm:125 LDX @VIRTUAL04
    case 0xC11771: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:126 LDA a:window_stats::option_count,X
    case 0xC11773: cpu.execute_instruction<0xBD>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11776: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11776.
    case 0xC11778: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:127 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11779: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/print_menu_items.asm:128 TAX
    case 0xC1177D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:129 LDA MENU_OPTIONS + menu_option::previous,X
    case 0xC1177E: cpu.execute_instruction<0xBD>(0x0089D8, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11781: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11781.
    case 0xC11783: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:130 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11784: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/print_menu_items.asm:131 TAX
    case 0xC11788: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:132 LDA @LOCAL02
    case 0xC11789: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/print_menu_items.asm:133 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC1178B: cpu.execute_instruction<0xDD>(0x0089DA, 3); return true;
    // src/text/print_menu_items.asm:134 BNE @UNKNOWN9
    case 0xC1178E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/print_menu_items.asm:135 LDA #CHAR::ONE
    case 0xC11790: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x000061, 3); return true;
    // src/text/print_menu_items.asm:135 LDA #CHAR::ONE
    // Overlapping static entry reached from 0xC11790.
    case 0xC11792: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/print_menu_items.asm:136 BRA @UNKNOWN10
    case 0xC11793: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/text/print_menu_items.asm:138 CLC
    case 0xC11795: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:139 ADC #CHAR::ONE
    case 0xC11796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000061, 2); else cpu.execute_instruction<0x69>(0x000061, 3); return true;
    // src/text/print_menu_items.asm:139 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC11796.
    case 0xC11798: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:141 JSR PRINT_LETTER
    case 0xC11799: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/text/print_menu_items.asm:142 LDA #89
    case 0xC1179C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000059, 2); else cpu.execute_instruction<0xA9>(0x000059, 3); return true;
    // src/text/print_menu_items.asm:142 LDA #89
    // Overlapping static entry reached from 0xC1179C.
    case 0xC1179E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:143 JSR PRINT_LETTER
    case 0xC1179F: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/text/print_menu_items.asm:144 BRA @UNKNOWN12
    case 0xC117A2: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/print_menu_items.asm:146 LDA @VIRTUAL02
    case 0xC117A4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:147 CLC
    case 0xC117A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:148 ADC #menu_option::label
    case 0xC117A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/print_menu_items.asm:148 ADC #menu_option::label
    // Overlapping static entry reached from 0xC117A7.
    case 0xC117A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117AF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117B0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items.asm:149 PROMOTENEARPTRA @VIRTUAL06
    case 0xC117B2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/print_menu_items.asm:150 REP #PROC_FLAGS::ACCUM8
    case 0xC117B4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117B6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117BA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC117BC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items.asm:152 LDA #.LOWORD(-1)
    case 0xC117BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items.asm:152 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC117BE.
    case 0xC117C0: cpu.execute_instruction<0xFF>(0x0EFC20, 4); return true;
    // src/text/print_menu_items.asm:153 JSR PRINT_STRING
    case 0xC117C1: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/text/print_menu_items.asm:155 LDX @VIRTUAL02
    case 0xC117C4: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:156 LDA a:menu_option::next,X
    case 0xC117C6: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/text/print_menu_items.asm:157 CMP #.LOWORD(-1)
    case 0xC117C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items.asm:157 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC117C9.
    case 0xC117CB: cpu.execute_instruction<0xFF>(0xA010F0, 4); return true;
    // src/text/print_menu_items.asm:158 BEQ @UNKNOWN13
    case 0xC117CC: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC117CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117CB.
    case 0xC117CF: cpu.execute_instruction<0x2D>(0x002200, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117CE.
    case 0xC117D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC117D1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117CF.
    case 0xC117D2: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/print_menu_items.asm:159 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC117D2.
    case 0xC117D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000018, 2); else cpu.execute_instruction<0xC0>(0x006918, 3); return true;
    // src/text/print_menu_items.asm:160 CLC
    case 0xC117D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items.asm:161 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC117D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/print_menu_items.asm:161 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC117D4.
    case 0xC117D7: cpu.execute_instruction<0xD4>(0x000089, 2); return true;
    // src/text/print_menu_items.asm:161 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC117D6.
    case 0xC117D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/print_menu_items.asm:162 STA @VIRTUAL02
    case 0xC117D9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_menu_items.asm:162 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC117D8.
    case 0xC117DA: cpu.execute_instruction<0x02>(0x00004C, 2); return true;
    // src/text/print_menu_items.asm:163 JMP @UNKNOWN2
    case 0xC117DB: cpu.execute_instruction<0x4C>(0x001689, 3); return true;
    // src/text/print_menu_items.asm:165 REP #PROC_FLAGS::ACCUM8
    case 0xC117DE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_menu_items.asm:166 END_C_FUNCTION
    case 0xC117E0: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_menu_items.asm:166 END_C_FUNCTION
    case 0xC117E1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_menu_items_redirect.asm (source_named).
bool execute_text_print_menu_items_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_menu_items_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE25: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/print_menu_items_redirect.asm:5 JSR PRINT_MENU_ITEMS
    case 0xC1DE27: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_menu_items_redirect.asm:6 END_C_FUNCTION
    case 0xC1DE2A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_newline.asm (source_named).
bool execute_text_print_newline_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_newline.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC438B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC438B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC438B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC438B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC438B5.
    case 0xC438B7: cpu.execute_instruction<0xFF>(0x58AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC438B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/print_newline.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC438B9: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_newline.asm:13 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC438B7.
    case 0xC438BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/text/print_newline.asm:14 CMP #.LOWORD(-1)
    case 0xC438BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_newline.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC438BB.
    case 0xC438BD: cpu.execute_instruction<0xFF>(0x52F0FF, 4); return true;
    // src/text/print_newline.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC438BC.
    case 0xC438BE: cpu.execute_instruction<0xFF>(0xAD52F0, 4); return true;
    // src/text/print_newline.asm:15 BEQ @UNKNOWN3
    case 0xC438BF: cpu.execute_instruction<0xF0>(0x000052, 2); return true;
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    case 0xC438C1: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC438BE.
    case 0xC438C2: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC438C2.
    case 0xC438C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/text/print_newline.asm:18 ASL
    case 0xC438C4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_newline.asm:19 TAX
    case 0xC438C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_newline.asm:20 LDA OPEN_WINDOW_TABLE,X
    case 0xC438C6: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/print_newline.asm:21 LDY #.SIZEOF(window_stats)
    case 0xC438C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/print_newline.asm:21 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC438C9.
    case 0xC438CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_newline.asm:22 JSL MULT168
    case 0xC438CC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/print_newline.asm:23 CLC
    case 0xC438D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_newline.asm:24 ADC #.LOWORD(WINDOW_STATS)
    case 0xC438D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/print_newline.asm:24 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC438D1.
    case 0xC438D3: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/text/print_newline.asm:25 TAY
    case 0xC438D4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_newline.asm:26 STY @LOCAL01
    case 0xC438D5: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/print_newline.asm:28 JSL UNKNOWN_C45E96
    case 0xC438D7: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/text/print_newline.asm:29 LDY @LOCAL01
    case 0xC438DB: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_newline.asm:31 LDA a:window_stats::font,Y
    case 0xC438DD: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // src/text/print_newline.asm:32 BEQ @UNKNOWN0
    case 0xC438E0: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/print_newline.asm:33 JSL UNKNOWN_C45E96
    case 0xC438E2: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/text/print_newline.asm:35 LDY @LOCAL01
    case 0xC438E6: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_newline.asm:36 TYA
    case 0xC438E8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/print_newline.asm:37 CLC
    case 0xC438E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_newline.asm:38 ADC #window_stats::text_y
    case 0xC438EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/print_newline.asm:38 ADC #window_stats::text_y
    // Overlapping static entry reached from 0xC438EA.
    case 0xC438EC: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/print_newline.asm:39 TAX
    case 0xC438ED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_newline.asm:40 LDA __BSS_START__,X
    case 0xC438EE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/print_newline.asm:41 STA @LOCAL00
    case 0xC438F1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/print_newline.asm:42 LDA a:window_stats::height,Y
    case 0xC438F3: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/text/print_newline.asm:43 LSR
    case 0xC438F6: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/print_newline.asm:44 DEC
    case 0xC438F7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_newline.asm:45 STA @VIRTUAL02
    case 0xC438F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_newline.asm:46 LDA @LOCAL00
    case 0xC438FA: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/print_newline.asm:47 CMP @VIRTUAL02
    case 0xC438FC: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/print_newline.asm:48 BEQ @UNKNOWN1
    case 0xC438FE: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/print_newline.asm:49 INC
    case 0xC43900: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/print_newline.asm:50 STA __BSS_START__,X
    case 0xC43901: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_newline.asm:51 BRA @UNKNOWN2
    case 0xC43904: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/print_newline.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC43906: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_newline.asm:57 JSL UNKNOWN_C437B8
    case 0xC43909: cpu.execute_instruction<0x22>(0xC437B8, 4); return true;
    // src/text/print_newline.asm:60 LDY @LOCAL01
    case 0xC4390D: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_newline.asm:61 TYX
    case 0xC4390F: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/print_newline.asm:62 STZ a:window_stats::text_x,X
    case 0xC43910: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_newline.asm:64 END_C_FUNCTION
    case 0xC43913: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_newline.asm:64 END_C_FUNCTION
    case 0xC43914: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_newline_redirect.asm (source_named).
bool execute_text_print_newline_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_newline_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C79: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/print_newline_redirect.asm:5 JSL PRINT_NEWLINE
    case 0xC10C7B: cpu.execute_instruction<0x22>(0xC438B1, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_newline_redirect.asm:6 END_C_FUNCTION
    case 0xC10C7F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_number.asm (source_named).
bool execute_text_print_number_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_number.asm:3 BEGIN_C_FUNCTION
    case 0xC10DF6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DF8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DF9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC10DFA.
    case 0xC10DFC: cpu.execute_instruction<0xFF>(0x26A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_number.asm:10 END_STACK_VARS
    case 0xC10DFD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10DFE: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10E00: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10E02: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC10E04: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/print_number.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC10E06: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_number.asm:13 CMP #.LOWORD(-1)
    case 0xC10E09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_number.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10E09.
    case 0xC10E0B: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_number.asm:14 BEQL @UNKNOWN6
    case 0xC10E0C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number.asm:14 BEQL @UNKNOWN6
    case 0xC10E0E: cpu.execute_instruction<0x4C>(0x000EB2, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number.asm:14 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC10E0B.
    case 0xC10E0F: cpu.execute_instruction<0xB2>(0x00000E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E11: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00967F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E11.
    case 0xC10E13: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E14: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E13.
    case 0xC10E15: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E15.
    case 0xC10E17: cpu.execute_instruction<0xFF>(0x0885FF, 4); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC10E16.
    case 0xC10E18: cpu.execute_instruction<0xFF>(0xA50885, 4); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/print_number.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC10E19: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/print_number.asm:20 LDA @VIRTUAL06
    case 0xC10E1B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/print_number.asm:20 LDA @VIRTUAL06
    // Overlapping static entry reached from 0xC10E18.
    case 0xC10E1C: cpu.execute_instruction<0x06>(0x0000C5, 2); return true;
    // src/text/print_number.asm:21 CMP @VIRTUAL0A
    case 0xC10E1D: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/print_number.asm:21 CMP @VIRTUAL0A
    // Overlapping static entry reached from 0xC10E1C.
    case 0xC10E1E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_number.asm:22 LDA @VIRTUAL06+2
    case 0xC10E1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/print_number.asm:23 SBC @VIRTUAL0A+2
    case 0xC10E21: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/print_number.asm:24 BCS @UNKNOWN1
    case 0xC10E23: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E25: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E27: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E29: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC10E2B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/print_number.asm:27 LDA CURRENT_FOCUS_WINDOW
    case 0xC10E2D: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_number.asm:28 ASL
    case 0xC10E30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_number.asm:29 TAX
    case 0xC10E31: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_number.asm:30 LDA OPEN_WINDOW_TABLE,X
    case 0xC10E32: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/print_number.asm:31 LDY #.SIZEOF(window_stats)
    case 0xC10E35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/print_number.asm:31 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10E35.
    case 0xC10E37: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_number.asm:32 JSL MULT168
    case 0xC10E38: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/print_number.asm:33 CLC
    case 0xC10E3C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_number.asm:34 ADC #.LOWORD(WINDOW_STATS)
    case 0xC10E3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/print_number.asm:34 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC10E3D.
    case 0xC10E3F: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/text/print_number.asm:35 STA @LOCAL03
    case 0xC10E40: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/print_number.asm:35 STA @LOCAL03
    // Overlapping static entry reached from 0xC10E3F.
    case 0xC10E41: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E42: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC10E41.
    case 0xC10E43: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E46: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:36 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC10E48: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E4A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E4C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E4E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number.asm:37 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10E50: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_number.asm:38 JSR UNKNOWN_C10D7C
    case 0xC10E52: cpu.execute_instruction<0x20>(0x000D7C, 3); return true;
    // src/text/print_number.asm:39 TAX
    case 0xC10E55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_number.asm:40 STX @LOCAL02
    case 0xC10E56: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/print_number.asm:41 STX @VIRTUAL02
    case 0xC10E58: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/print_number.asm:42 LDA #7
    case 0xC10E5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/print_number.asm:42 LDA #7
    // Overlapping static entry reached from 0xC10E5A.
    case 0xC10E5C: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/print_number.asm:43 SEC
    case 0xC10E5D: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/print_number.asm:44 SBC @VIRTUAL02
    case 0xC10E5E: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/print_number.asm:45 CLC
    case 0xC10E60: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_number.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC10E61: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005A, 2); else cpu.execute_instruction<0x69>(0x00895A, 3); return true;
    // src/text/print_number.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC10E61.
    case 0xC10E63: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/text/print_number.asm:47 TAY
    case 0xC10E64: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_number.asm:48 STY @LOCAL01
    case 0xC10E65: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/print_number.asm:48 STY @LOCAL01
    // Overlapping static entry reached from 0xC10E63.
    case 0xC10E66: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // src/text/print_number.asm:49 LDA @LOCAL03
    case 0xC10E67: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/print_number.asm:49 LDA @LOCAL03
    // Overlapping static entry reached from 0xC10E66.
    case 0xC10E68: cpu.execute_instruction<0x16>(0x0000AA, 2); return true;
    // src/text/print_number.asm:50 TAX
    case 0xC10E69: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_number.asm:51 LDA a:window_stats::number_padding,X
    case 0xC10E6A: cpu.execute_instruction<0xBD>(0x000012, 3); return true;
    // src/text/print_number.asm:52 AND #$00FF
    case 0xC10E6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_number.asm:52 AND #$00FF
    // Overlapping static entry reached from 0xC10E6D.
    case 0xC10E6F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/print_number.asm:53 STA @LOCAL03
    case 0xC10E70: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/print_number.asm:54 AND #$0080
    case 0xC10E72: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/text/print_number.asm:54 AND #$0080
    // Overlapping static entry reached from 0xC10E72.
    case 0xC10E74: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_number.asm:55 BNE @UNKNOWN5
    case 0xC10E75: cpu.execute_instruction<0xD0>(0x000037, 2); return true;
    // src/text/print_number.asm:56 LDA @LOCAL03
    case 0xC10E77: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/print_number.asm:57 AND #$000F
    case 0xC10E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/text/print_number.asm:57 AND #$000F
    // Overlapping static entry reached from 0xC10E79.
    case 0xC10E7B: cpu.execute_instruction<0x00>(0x00001A, 2); return true;
    // src/text/print_number.asm:58 INC
    case 0xC10E7C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/print_number.asm:59 LDX @LOCAL02
    case 0xC10E7D: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/print_number.asm:60 STX @VIRTUAL02
    case 0xC10E7F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/print_number.asm:61 CMP @VIRTUAL02
    case 0xC10E81: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/print_number.asm:62 BCS @UNKNOWN2
    case 0xC10E83: cpu.execute_instruction<0xB0>(0x000001, 2); return true;
    // src/text/print_number.asm:63 TXA
    case 0xC10E85: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_number.asm:65 STX @VIRTUAL02
    case 0xC10E86: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/print_number.asm:66 SEC
    case 0xC10E88: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/print_number.asm:67 SBC @VIRTUAL02
    case 0xC10E89: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E8B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E8D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E8E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/text/print_number.asm:68 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC10E90: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_number.asm:69 JSL UNKNOWN_C43D95
    case 0xC10E91: cpu.execute_instruction<0x22>(0xC43D95, 4); return true;
    // src/text/print_number.asm:70 BRA @UNKNOWN5
    case 0xC10E95: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/print_number.asm:72 LDY @LOCAL01
    case 0xC10E97: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/print_number.asm:73 LDA __BSS_START__,Y
    case 0xC10E99: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_number.asm:74 AND #$00FF
    case 0xC10E9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_number.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC10E9C.
    case 0xC10E9E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/print_number.asm:75 CLC
    case 0xC10E9F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_number.asm:76 ADC #CHAR::ZERO
    case 0xC10EA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/text/print_number.asm:76 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC10EA0.
    case 0xC10EA2: cpu.execute_instruction<0x00>(0x0000C8, 2); return true;
    // src/text/print_number.asm:77 INY
    case 0xC10EA3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/print_number.asm:78 STY @LOCAL01
    case 0xC10EA4: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/print_number.asm:79 JSR PRINT_LETTER
    case 0xC10EA6: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/text/print_number.asm:80 LDX @LOCAL02
    case 0xC10EA9: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/print_number.asm:81 DEX
    case 0xC10EAB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/print_number.asm:82 STX @LOCAL02
    case 0xC10EAC: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/print_number.asm:84 LDX @LOCAL02
    case 0xC10EAE: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/print_number.asm:85 BNE @UNKNOWN4
    case 0xC10EB0: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_number.asm:87 END_C_FUNCTION
    case 0xC10EB2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_number.asm:87 END_C_FUNCTION
    case 0xC10EB3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_string.asm (source_named).
bool execute_text_print_string_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_string.asm:3 BEGIN_C_FUNCTION
    case 0xC10EFC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10EFE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10EFF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F00: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC10F01.
    case 0xC10F03: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F04: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_string.asm:9 END_STACK_VARS
    case 0xC10F05: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/print_string.asm:10 TAX
    case 0xC10F06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_string.asm:11 STX @LOCAL01
    case 0xC10F07: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F09: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F0B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F0D: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10F0F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/print_string.asm:13 LDA FORCE_CENTRE_TEXT_ALIGNMENT
    case 0xC10F11: cpu.execute_instruction<0xAD>(0x005E74, 3); return true;
    // src/text/print_string.asm:14 AND #$00FF
    case 0xC10F14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_string.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC10F14.
    case 0xC10F16: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_string.asm:15 BEQ @UNKNOWN1
    case 0xC10F17: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F19: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F1B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F1D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string.asm:16 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10F1F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_string.asm:17 TXA
    case 0xC10F21: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_string.asm:18 JSL UNKNOWN_C43EF8
    case 0xC10F22: cpu.execute_instruction<0x22>(0xC43EF8, 4); return true;
    // src/text/print_string.asm:19 BRA @UNKNOWN1
    case 0xC10F26: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/print_string.asm:21 DEX
    case 0xC10F28: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/print_string.asm:22 STX @LOCAL01
    case 0xC10F29: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/print_string.asm:23 AND #$00FF
    case 0xC10F2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_string.asm:23 AND #$00FF
    // Overlapping static entry reached from 0xC10F2B.
    case 0xC10F2D: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/text/print_string.asm:24 INC @VIRTUAL06
    case 0xC10F2E: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/print_string.asm:25 JSR PRINT_LETTER
    case 0xC10F30: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/text/print_string.asm:27 LDA [@VIRTUAL06]
    case 0xC10F33: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/print_string.asm:28 AND #$00FF
    case 0xC10F35: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_string.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC10F35.
    case 0xC10F37: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_string.asm:29 BEQ @UNKNOWN2
    case 0xC10F38: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/print_string.asm:30 LDX @LOCAL01
    case 0xC10F3A: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/print_string.asm:31 BNE @UNKNOWN0
    case 0xC10F3C: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_string.asm:33 END_C_FUNCTION
    case 0xC10F3E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_string.asm:33 END_C_FUNCTION
    case 0xC10F3F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_string_redirect.asm (source_named).
bool execute_text_print_string_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_string_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C8C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C8E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C8F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C90: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC10C91.
    case 0xC10C93: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C94: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_string_redirect.asm:9 END_STACK_VARS
    case 0xC10C95: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/print_string_redirect.asm:10 STA @LOCAL01
    case 0xC10C96: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/print_string_redirect.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC10C93.
    case 0xC10C97: cpu.execute_instruction<0x12>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C98: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC10C97.
    case 0xC10C99: cpu.execute_instruction<0x22>(0xA50685, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C9A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C9C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC10C99.
    case 0xC10C9D: cpu.execute_instruction<0x24>(0x000085, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10C9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string_redirect.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC10C9D.
    case 0xC10C9F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string_redirect.asm:12 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC10CA6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_string_redirect.asm:13 LDA @LOCAL01
    case 0xC10CA8: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/print_string_redirect.asm:14 JSR PRINT_STRING
    case 0xC10CAA: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_string_redirect.asm:15 END_C_FUNCTION
    case 0xC10CAD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_string_redirect.asm:15 END_C_FUNCTION
    case 0xC10CAE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/selection_menu.asm (source_named).
bool execute_text_selection_menu_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu.asm:3 BEGIN_C_FUNCTION
    case 0xC1196A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC1196F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC1196F.
    case 0xC11971: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC11972: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu.asm:19 END_STACK_VARS
    case 0xC11973: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/selection_menu.asm:20 STA @LOCAL0C
    case 0xC11974: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/text/selection_menu.asm:20 STA @LOCAL0C
    // Overlapping static entry reached from 0xC11971.
    case 0xC11975: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/selection_menu.asm:21 LDA CURRENT_FOCUS_WINDOW
    case 0xC11976: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/selection_menu.asm:22 STA @LOCAL0B
    case 0xC11979: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/selection_menu.asm:23 CMP #.LOWORD(-1)
    case 0xC1197B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:23 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1197B.
    case 0xC1197D: cpu.execute_instruction<0xFF>(0xA906D0, 4); return true;
    // src/text/selection_menu.asm:24 BNE @UNKNOWN0
    case 0xC1197E: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/selection_menu.asm:25 LDA #0
    case 0xC11980: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1197D.
    case 0xC11981: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu.asm:25 LDA #0
    // Overlapping static entry reached from 0xC11980.
    case 0xC11982: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/selection_menu.asm:26 JMP @UNKNOWN44
    case 0xC11983: cpu.execute_instruction<0x4C>(0x001F58, 3); return true;
    // src/text/selection_menu.asm:28 LDA CURRENT_FOCUS_WINDOW
    case 0xC11986: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/selection_menu.asm:29 ASL
    case 0xC11989: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:30 TAX
    case 0xC1198A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:31 LDA OPEN_WINDOW_TABLE,X
    case 0xC1198B: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/selection_menu.asm:32 LDY #.SIZEOF(window_stats)
    case 0xC1198E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/selection_menu.asm:32 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1198E.
    case 0xC11990: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu.asm:33 JSL MULT168
    case 0xC11991: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:34 CLC
    case 0xC11995: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:35 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11996: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/selection_menu.asm:35 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11996.
    case 0xC11998: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/text/selection_menu.asm:36 STA @LOCAL0A
    case 0xC11999: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/selection_menu.asm:36 STA @LOCAL0A
    // Overlapping static entry reached from 0xC11998.
    case 0xC1199A: cpu.execute_instruction<0x24>(0x0000AD, 2); return true;
    // src/text/selection_menu.asm:38 LDA RESTORE_MENU_BACKUP
    case 0xC1199B: cpu.execute_instruction<0xAD>(0x005E79, 3); return true;
    // src/text/selection_menu.asm:38 LDA RESTORE_MENU_BACKUP
    // Overlapping static entry reached from 0xC1199A.
    case 0xC1199C: cpu.execute_instruction<0x79>(0x00295E, 3); return true;
    // src/text/selection_menu.asm:39 AND #$00FF
    case 0xC1199E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1199C.
    case 0xC1199F: cpu.execute_instruction<0xFF>(0x10F000, 4); return true;
    // src/text/selection_menu.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC1199E.
    case 0xC119A0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:40 BEQ @UNKNOWN1
    case 0xC119A1: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/selection_menu.asm:41 LDA MENU_BACKUP_CURRENT_OPTION
    case 0xC119A3: cpu.execute_instruction<0xAD>(0x009688, 3); return true;
    // src/text/selection_menu.asm:42 LDY #window_stats::current_option
    case 0xC119A6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu.asm:42 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC119A6.
    case 0xC119A8: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/text/selection_menu.asm:43 STA (@LOCAL0A),Y
    case 0xC119A9: cpu.execute_instruction<0x91>(0x000024, 2); return true;
    // src/text/selection_menu.asm:44 LDA MENU_BACKUP_SELECTED_OPTION
    case 0xC119AB: cpu.execute_instruction<0xAD>(0x00968A, 3); return true;
    // src/text/selection_menu.asm:45 LDY #window_stats::selected_option
    case 0xC119AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002F, 2); else cpu.execute_instruction<0xA0>(0x00002F, 3); return true;
    // src/text/selection_menu.asm:45 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC119AE.
    case 0xC119B0: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/text/selection_menu.asm:46 STA (@LOCAL0A),Y
    case 0xC119B1: cpu.execute_instruction<0x91>(0x000024, 2); return true;
    // src/text/selection_menu.asm:49 LDY #window_stats::selected_option
    case 0xC119B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002F, 2); else cpu.execute_instruction<0xA0>(0x00002F, 3); return true;
    // src/text/selection_menu.asm:49 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC119B3.
    case 0xC119B5: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:50 LDA (@LOCAL0A),Y
    case 0xC119B6: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu.asm:51 CMP #.LOWORD(-1)
    case 0xC119B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:51 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC119B8.
    case 0xC119BA: cpu.execute_instruction<0xFF>(0xAA6EF0, 4); return true;
    // src/text/selection_menu.asm:52 BEQ @UNKNOWN4
    case 0xC119BB: cpu.execute_instruction<0xF0>(0x00006E, 2); return true;
    // src/text/selection_menu.asm:53 TAX
    case 0xC119BD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:54 STX @LOCAL09
    case 0xC119BE: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/selection_menu.asm:55 STA @LOCAL08
    case 0xC119C0: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/selection_menu.asm:56 LDY #window_stats::current_option
    case 0xC119C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu.asm:56 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC119C2.
    case 0xC119C4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:57 LDA (@LOCAL0A),Y
    case 0xC119C5: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:58 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:58 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC119C7.
    case 0xC119C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:58 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119CA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:59 CLC
    case 0xC119CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:60 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC119CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/selection_menu.asm:60 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC119CF.
    case 0xC119D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/text/selection_menu.asm:61 STA @VIRTUAL04
    case 0xC119D2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/selection_menu.asm:61 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC119D1.
    case 0xC119D3: cpu.execute_instruction<0x04>(0x000080, 2); return true;
    // src/text/selection_menu.asm:62 BRA @UNKNOWN3
    case 0xC119D4: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/text/selection_menu.asm:62 BRA @UNKNOWN3
    // Overlapping static entry reached from 0xC119D3.
    case 0xC119D5: cpu.execute_instruction<0x15>(0x0000CA, 2); return true;
    // src/text/selection_menu.asm:64 DEX
    case 0xC119D6: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:65 STX @LOCAL09
    case 0xC119D7: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/selection_menu.asm:66 LDX @VIRTUAL04
    case 0xC119D9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:67 LDA __BSS_START__+2,X
    case 0xC119DB: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC119DE.
    case 0xC119E0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:68 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC119E1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:69 CLC
    case 0xC119E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:70 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC119E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/selection_menu.asm:70 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC119E6.
    case 0xC119E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/text/selection_menu.asm:71 STA @VIRTUAL04
    case 0xC119E9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/selection_menu.asm:71 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC119E8.
    case 0xC119EA: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:73 LDX @LOCAL09
    case 0xC119EB: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/selection_menu.asm:73 LDX @LOCAL09
    // Overlapping static entry reached from 0xC119EA.
    case 0xC119EC: cpu.execute_instruction<0x22>(0x22E7D0, 4); return true;
    // src/text/selection_menu.asm:74 BNE @UNKNOWN2
    case 0xC119ED: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/text/selection_menu.asm:75 JSR SET_INSTANT_PRINTING
    case 0xC119EF: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/selection_menu.asm:75 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC119EC.
    case 0xC119F0: cpu.execute_instruction<0xD4>(0x0000E4, 2); return true;
    // src/text/selection_menu.asm:75 JSR SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC119F0.
    case 0xC119F2: cpu.execute_instruction<0xC3>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:76 LDX @VIRTUAL04
    case 0xC119F3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:76 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC119F2.
    case 0xC119F4: cpu.execute_instruction<0x04>(0x0000BC, 2); return true;
    // src/text/selection_menu.asm:77 LDY a:menu_option::text_y,X
    case 0xC119F5: cpu.execute_instruction<0xBC>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:77 LDY a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC119F4.
    case 0xC119F6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:77 LDY a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC119F6.
    case 0xC119F7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:78 LDX @VIRTUAL04
    case 0xC119F8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:79 LDA a:menu_option::text_x,X
    case 0xC119FA: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:80 TAX
    case 0xC119FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:81 INX
    case 0xC119FE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/selection_menu.asm:82 LDA @VIRTUAL04
    case 0xC119FF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:83 JSL UNKNOWN_C43CD2
    case 0xC11A01: cpu.execute_instruction<0x22>(0xC43CD2, 4); return true;
    // src/text/selection_menu.asm:84 LDA @VIRTUAL04
    case 0xC11A05: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:85 CLC
    case 0xC11A07: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:86 ADC #menu_option::label
    case 0xC11A08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/selection_menu.asm:86 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11A08.
    case 0xC11A0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A0B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A0D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A0E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A10: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A11: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu.asm:87 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11A13: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/selection_menu.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC11A15: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A17: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A19: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A1B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:89 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A1D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:90 LDX #0
    case 0xC11A1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/selection_menu.asm:90 LDX #0
    // Overlapping static entry reached from 0xC11A1F.
    case 0xC11A21: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/selection_menu.asm:91 LDA #.LOWORD(-1)
    case 0xC11A22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:91 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11A22.
    case 0xC11A24: cpu.execute_instruction<0xFF>(0x3BB922, 4); return true;
    // src/text/selection_menu.asm:92 JSL UNKNOWN_C43BB9
    case 0xC11A25: cpu.execute_instruction<0x22>(0xC43BB9, 4); return true;
    // src/text/selection_menu.asm:92 JSL UNKNOWN_C43BB9
    // Overlapping static entry reached from 0xC11A24.
    case 0xC11A28: cpu.execute_instruction<0xC4>(0x000080, 2); return true;
    // src/text/selection_menu.asm:93 BRA @UNKNOWN5
    case 0xC11A29: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/text/selection_menu.asm:93 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC11A28.
    case 0xC11A2A: cpu.execute_instruction<0x14>(0x000064, 2); return true;
    // src/text/selection_menu.asm:95 STZ @LOCAL08
    case 0xC11A2B: cpu.execute_instruction<0x64>(0x000020, 2); return true;
    // src/text/selection_menu.asm:95 STZ @LOCAL08
    // Overlapping static entry reached from 0xC11A2A.
    case 0xC11A2C: cpu.execute_instruction<0x20>(0x002BA0, 3); return true;
    // src/text/selection_menu.asm:96 LDY #window_stats::current_option
    case 0xC11A2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu.asm:96 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC11A2D.
    case 0xC11A2F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:97 LDA (@LOCAL0A),Y
    case 0xC11A30: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:98 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:98 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11A32.
    case 0xC11A34: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:98 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11A35: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:99 CLC
    case 0xC11A39: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:100 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11A3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/selection_menu.asm:100 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11A3A.
    case 0xC11A3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/text/selection_menu.asm:101 STA @VIRTUAL04
    case 0xC11A3D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/selection_menu.asm:101 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC11A3C.
    case 0xC11A3E: cpu.execute_instruction<0x04>(0x000064, 2); return true;
    // src/text/selection_menu.asm:103 STZ @LOCAL09
    case 0xC11A3F: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/text/selection_menu.asm:103 STZ @LOCAL09
    // Overlapping static entry reached from 0xC11A3E.
    case 0xC11A40: cpu.execute_instruction<0x22>(0x1804A5, 4); return true;
    // src/text/selection_menu.asm:104 LDA @VIRTUAL04
    case 0xC11A41: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:105 CLC
    case 0xC11A43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:106 ADC #menu_option::script
    case 0xC11A44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/text/selection_menu.asm:106 ADC #menu_option::script
    // Overlapping static entry reached from 0xC11A44.
    case 0xC11A46: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu.asm:107 TAY
    case 0xC11A47: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/selection_menu.asm:108 STY @LOCAL07
    case 0xC11A48: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A4A.
    case 0xC11A4C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A4D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A4F.
    case 0xC11A51: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu.asm:109 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A52: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A54: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A59: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:110 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A5C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu.asm:111 CMP @VIRTUAL0A+2
    case 0xC11A5E: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/selection_menu.asm:112 BNE @UNKNOWN6
    case 0xC11A60: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/selection_menu.asm:113 LDA @VIRTUAL06
    case 0xC11A62: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/selection_menu.asm:114 CMP @VIRTUAL0A
    case 0xC11A64: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/selection_menu.asm:116 BEQ @UNKNOWN7
    case 0xC11A66: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:117 JSR SET_INSTANT_PRINTING
    case 0xC11A68: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/selection_menu.asm:118 LDY @LOCAL07
    case 0xC11A6C: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A6E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A71: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A73: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A76: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A78: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A7A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A7C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:120 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11A7E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:121 JSL DISPLAY_TEXT
    case 0xC11A80: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A84.
    case 0xC11A86: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A87: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A89: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11A89.
    case 0xC11A8B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/selection_menu.asm:123 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11A8C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/selection_menu.asm:124 LDA @LOCAL0A
    case 0xC11A8E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/selection_menu.asm:125 CLC
    case 0xC11A90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:126 ADC #window_stats::cursor_move_callback
    case 0xC11A91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/text/selection_menu.asm:126 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC11A91.
    case 0xC11A93: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu.asm:127 TAY
    case 0xC11A94: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A95: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A98: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A9A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:128 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11A9D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu.asm:129 CMP @VIRTUAL0A+2
    case 0xC11A9F: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/selection_menu.asm:130 BNE @UNKNOWN8
    case 0xC11AA1: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/selection_menu.asm:131 LDA @VIRTUAL06
    case 0xC11AA3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/selection_menu.asm:132 CMP @VIRTUAL0A
    case 0xC11AA5: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/selection_menu.asm:134 BEQ @UNKNOWN11
    case 0xC11AA7: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/text/selection_menu.asm:135 LDX @VIRTUAL04
    case 0xC11AA9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:136 LDA a:menu_option::unknown0,X
    case 0xC11AAB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/selection_menu.asm:137 CMP #1
    case 0xC11AAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:137 CMP #1
    // Overlapping static entry reached from 0xC11AAE.
    case 0xC11AB0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu.asm:138 BNE @UNKNOWN9
    case 0xC11AB1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/selection_menu.asm:139 LDA @LOCAL08
    case 0xC11AB3: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/selection_menu.asm:140 INC
    case 0xC11AB5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:141 BRA @UNKNOWN10
    case 0xC11AB6: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/selection_menu.asm:143 LDX @VIRTUAL04
    case 0xC11AB8: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:144 LDA a:menu_option::userdata,X
    case 0xC11ABA: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/text/selection_menu.asm:146 STA @LOCAL06
    case 0xC11ABD: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:147 LDA @LOCAL0A
    case 0xC11ABF: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/selection_menu.asm:148 CLC
    case 0xC11AC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:149 ADC #window_stats::cursor_move_callback
    case 0xC11AC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/text/selection_menu.asm:149 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC11AC2.
    case 0xC11AC4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu.asm:150 TAY
    case 0xC11AC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11AC6: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11AC9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11ACB: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/selection_menu.asm:151 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC11ACE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu.asm:152 LDA @LOCAL06
    case 0xC11AD0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:153 PHA
    case 0xC11AD2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11AD3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11AD5: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11AD8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:154 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC11ADA: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/text/selection_menu.asm:155 PLA
    case 0xC11ADD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/selection_menu.asm:156 JSL UNKNOWN_C09279
    case 0xC11ADE: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/text/selection_menu.asm:157 LDA @LOCAL0B
    case 0xC11AE2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/selection_menu.asm:158 JSR SET_WINDOW_FOCUS
    case 0xC11AE4: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/text/selection_menu.asm:160 JSR CLEAR_INSTANT_PRINTING
    case 0xC11AE7: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/selection_menu.asm:162 LDA RESTORE_MENU_BACKUP
    case 0xC11AEB: cpu.execute_instruction<0xAD>(0x005E79, 3); return true;
    // src/text/selection_menu.asm:163 AND #$00FF
    case 0xC11AEE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu.asm:163 AND #$00FF
    // Overlapping static entry reached from 0xC11AEE.
    case 0xC11AF0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:164 BEQ @UNKNOWN12
    case 0xC11AF1: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/selection_menu.asm:165 LDA MENU_BACKUP_SELECTED_TEXT_X
    case 0xC11AF3: cpu.execute_instruction<0xAD>(0x009684, 3); return true;
    // src/text/selection_menu.asm:166 LDX @VIRTUAL04
    case 0xC11AF6: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:167 STA a:menu_option::text_x,X
    case 0xC11AF8: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/text/selection_menu.asm:168 LDA MENU_BACKUP_SELECTED_TEXT_Y
    case 0xC11AFB: cpu.execute_instruction<0xAD>(0x009686, 3); return true;
    // src/text/selection_menu.asm:169 LDX @VIRTUAL04
    case 0xC11AFE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:170 STA a:menu_option::text_y,X
    case 0xC11B00: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:173 LDX @VIRTUAL04
    case 0xC11B03: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:174 LDY a:menu_option::text_y,X
    case 0xC11B05: cpu.execute_instruction<0xBC>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:175 LDX @VIRTUAL04
    case 0xC11B08: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:176 LDA a:menu_option::text_x,X
    case 0xC11B0A: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:177 TAX
    case 0xC11B0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:178 LDA @VIRTUAL04
    case 0xC11B0E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:179 JSL UNKNOWN_C43CD2
    case 0xC11B10: cpu.execute_instruction<0x22>(0xC43CD2, 4); return true;
    // src/text/selection_menu.asm:180 LDA #1
    case 0xC11B14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:180 LDA #1
    // Overlapping static entry reached from 0xC11B14.
    case 0xC11B16: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:181 JSR UNKNOWN_C10FEA
    case 0xC11B17: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/selection_menu.asm:182 LDA #33
    case 0xC11B1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/text/selection_menu.asm:182 LDA #33
    // Overlapping static entry reached from 0xC11B1A.
    case 0xC11B1C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:183 JSR UNKNOWN_C10D60
    case 0xC11B1D: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/text/selection_menu.asm:184 LDA #0
    case 0xC11B20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu.asm:184 LDA #0
    // Overlapping static entry reached from 0xC11B20.
    case 0xC11B22: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:185 JSR UNKNOWN_C10FEA
    case 0xC11B23: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/selection_menu.asm:186 JSL WINDOW_TICK
    case 0xC11B26: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/selection_menu.asm:187 LDA #1
    case 0xC11B2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:187 LDA #1
    // Overlapping static entry reached from 0xC11B2A.
    case 0xC11B2C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:188 STA @VIRTUAL02
    case 0xC11B2D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu.asm:190 LDA @VIRTUAL02
    case 0xC11B2F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/selection_menu.asm:191 EOR #$0001
    case 0xC11B31: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/text/selection_menu.asm:191 EOR #$0001
    // Overlapping static entry reached from 0xC11B31.
    case 0xC11B33: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:192 STA @VIRTUAL02
    case 0xC11B34: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu.asm:193 STA @LOCAL05
    case 0xC11B36: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/selection_menu.asm:194 LDY #window_stats::text_y
    case 0xC11B38: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/text/selection_menu.asm:194 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC11B38.
    case 0xC11B3A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:195 LDA (@LOCAL0A),Y
    case 0xC11B3B: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu.asm:196 ASL
    case 0xC11B3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:197 LDY #window_stats::window_y
    case 0xC11B3E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/selection_menu.asm:197 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC11B3E.
    case 0xC11B40: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/selection_menu.asm:198 CLC
    case 0xC11B41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:199 ADC (@LOCAL0A),Y
    case 0xC11B42: cpu.execute_instruction<0x71>(0x000024, 2); return true;
    // src/text/selection_menu.asm:200 ASL
    case 0xC11B44: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:201 ASL
    case 0xC11B45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:202 ASL
    case 0xC11B46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:203 ASL
    case 0xC11B47: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:204 ASL
    case 0xC11B48: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:205 STA @VIRTUAL02
    case 0xC11B49: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu.asm:206 LDY #window_stats::window_x
    case 0xC11B4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/selection_menu.asm:206 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC11B4B.
    case 0xC11B4D: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:207 LDA (@LOCAL0A),Y
    case 0xC11B4E: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu.asm:208 LDY #window_stats::text_x
    case 0xC11B50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/text/selection_menu.asm:208 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC11B50.
    case 0xC11B52: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/selection_menu.asm:209 CLC
    case 0xC11B53: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:210 ADC (@LOCAL0A),Y
    case 0xC11B54: cpu.execute_instruction<0x71>(0x000024, 2); return true;
    // src/text/selection_menu.asm:211 CLC
    case 0xC11B56: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:212 ADC @VIRTUAL02
    case 0xC11B57: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/selection_menu.asm:213 CLC
    case 0xC11B59: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:214 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC11B5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/selection_menu.asm:214 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC11B5A.
    case 0xC11B5C: cpu.execute_instruction<0x7C>(0x001E85, 3); return true;
    // src/text/selection_menu.asm:215 STA @LOCAL07
    case 0xC11B5D: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:216 LDA @LOCAL05
    case 0xC11B5F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/selection_menu.asm:217 STA @VIRTUAL02
    case 0xC11B61: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu.asm:218 ASL
    case 0xC11B63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:219 STA @LOCAL04
    case 0xC11B64: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x00E406, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B66.
    case 0xC11B68: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B69: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B68.
    case 0xC11B6A: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B6A.
    case 0xC11B6C: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B6B.
    case 0xC11B6D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu.asm:220 LOADPTR UNKNOWN_C3E3F8+14, @VIRTUAL06
    case 0xC11B6E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu.asm:221 LDA @LOCAL04
    case 0xC11B70: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/selection_menu.asm:222 CLC
    case 0xC11B72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:223 ADC @VIRTUAL06
    case 0xC11B73: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/selection_menu.asm:224 STA @VIRTUAL06
    case 0xC11B75: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/selection_menu.asm:225 STA @LOCAL00
    case 0xC11B77: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:226 LDA @VIRTUAL06+2
    case 0xC11B79: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/selection_menu.asm:227 STA @LOCAL00+2
    case 0xC11B7B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:228 LDY @LOCAL07
    case 0xC11B7D: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:229 LDX #2
    case 0xC11B7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/selection_menu.asm:229 LDX #2
    // Overlapping static entry reached from 0xC11B7F.
    case 0xC11B81: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/selection_menu.asm:230 SEP #PROC_FLAGS::ACCUM8
    case 0xC11B82: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/selection_menu.asm:231 LDA #0
    case 0xC11B84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/selection_menu.asm:232 JSL PREPARE_VRAM_COPY
    case 0xC11B86: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/selection_menu.asm:232 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11B84.
    case 0xC11B87: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/selection_menu.asm:232 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11B87.
    case 0xC11B89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x000AA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B8A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E40A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B89.
    case 0xC11B8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8A.
    case 0xC11B8C: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B8D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8C.
    case 0xC11B8E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8E.
    case 0xC11B90: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    // Overlapping static entry reached from 0xC11B8F.
    case 0xC11B91: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/selection_menu.asm:234 LOADPTR UNKNOWN_C3E3F8+18, @VIRTUAL06
    case 0xC11B92: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/selection_menu.asm:235 LDA @LOCAL04
    case 0xC11B94: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/selection_menu.asm:236 CLC
    case 0xC11B96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:237 ADC @VIRTUAL06
    case 0xC11B97: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/selection_menu.asm:238 STA @VIRTUAL06
    case 0xC11B99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/selection_menu.asm:239 STA @LOCAL00
    case 0xC11B9B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:240 LDA @VIRTUAL06+2
    case 0xC11B9D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/selection_menu.asm:241 STA @LOCAL00+2
    case 0xC11B9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:242 LDA @LOCAL07
    case 0xC11BA1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:243 CLC
    case 0xC11BA3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:244 ADC #32
    case 0xC11BA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/text/selection_menu.asm:244 ADC #32
    // Overlapping static entry reached from 0xC11BA4.
    case 0xC11BA6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/selection_menu.asm:245 TAY
    case 0xC11BA7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/selection_menu.asm:246 LDX #2
    case 0xC11BA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/selection_menu.asm:246 LDX #2
    // Overlapping static entry reached from 0xC11BA8.
    case 0xC11BAA: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/selection_menu.asm:247 SEP #PROC_FLAGS::ACCUM8
    case 0xC11BAB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/selection_menu.asm:248 LDA #0
    case 0xC11BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/selection_menu.asm:249 JSL PREPARE_VRAM_COPY
    case 0xC11BAF: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/selection_menu.asm:249 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11BAD.
    case 0xC11BB0: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/selection_menu.asm:249 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC11BB0.
    case 0xC11BB2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/text/selection_menu.asm:251 LDX #0
    case 0xC11BB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/selection_menu.asm:251 LDX #0
    // Overlapping static entry reached from 0xC11BB2.
    case 0xC11BB4: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu.asm:251 LDX #0
    // Overlapping static entry reached from 0xC11BB3.
    case 0xC11BB5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/selection_menu.asm:252 STX @LOCAL07
    case 0xC11BB6: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:253 JMP @UNKNOWN37
    case 0xC11BB8: cpu.execute_instruction<0x4C>(0x001EBE, 3); return true;
    // src/text/selection_menu.asm:255 JSL UNKNOWN_C12E42
    case 0xC11BBB: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/text/selection_menu.asm:256 LDA PAD_PRESS
    case 0xC11BBF: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu.asm:257 AND #PAD::UP
    case 0xC11BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/selection_menu.asm:257 AND #PAD::UP
    // Overlapping static entry reached from 0xC11BC2.
    case 0xC11BC4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/selection_menu.asm:258 BEQ @UNKNOWN15
    case 0xC11BC5: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/text/selection_menu.asm:259 LDX @VIRTUAL04
    case 0xC11BC7: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:260 LDA a:menu_option::text_x,X
    case 0xC11BC9: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:261 STA @LOCAL07
    case 0xC11BCC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:262 STZ @LOCAL00
    case 0xC11BCE: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:263 LDA #SFX::CURSOR3
    case 0xC11BD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu.asm:263 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11BD0.
    case 0xC11BD2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:264 STA @LOCAL00+2
    case 0xC11BD3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:265 LDA @LOCAL07
    case 0xC11BD5: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:266 STA @LOCAL01
    case 0xC11BD7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu.asm:267 LDY #window_stats::height
    case 0xC11BD9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/text/selection_menu.asm:267 LDY #window_stats::height
    // Overlapping static entry reached from 0xC11BD9.
    case 0xC11BDB: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:268 LDA (@LOCAL0A),Y
    case 0xC11BDC: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu.asm:269 LSR
    case 0xC11BDE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:270 STA @LOCAL02
    case 0xC11BDF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu.asm:271 LDY #.LOWORD(-1)
    case 0xC11BE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:271 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11BE1.
    case 0xC11BE3: cpu.execute_instruction<0xFF>(0xBD04A6, 4); return true;
    // src/text/selection_menu.asm:272 LDX @VIRTUAL04
    case 0xC11BE4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:273 LDA a:menu_option::text_y,X
    case 0xC11BE6: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:273 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11BE3.
    case 0xC11BE7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:273 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11BE7.
    case 0xC11BE8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu.asm:274 TAX
    case 0xC11BE9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:275 LDA @LOCAL07
    case 0xC11BEA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:276 JSL MOVE_CURSOR
    case 0xC11BEC: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/selection_menu.asm:277 STA @LOCAL06
    case 0xC11BF0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:278 JMP @UNKNOWN39
    case 0xC11BF2: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:280 LDA PAD_PRESS
    case 0xC11BF5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu.asm:281 AND #PAD::LEFT
    case 0xC11BF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/selection_menu.asm:281 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC11BF8.
    case 0xC11BFA: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:282 BEQ @UNKNOWN16
    case 0xC11BFB: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/text/selection_menu.asm:283 LDX @VIRTUAL04
    case 0xC11BFD: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:284 LDA a:menu_option::text_y,X
    case 0xC11BFF: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:285 STA @LOCAL09
    case 0xC11C02: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu.asm:286 LDA #.LOWORD(-1)
    case 0xC11C04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C04.
    case 0xC11C06: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/selection_menu.asm:287 STA @LOCAL00
    case 0xC11C07: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:288 LDA #SFX::CURSOR2
    case 0xC11C09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu.asm:288 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11C06.
    case 0xC11C0A: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/selection_menu.asm:288 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11C09.
    case 0xC11C0B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:289 STA @LOCAL00+2
    case 0xC11C0C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:290 LDY #window_stats::width
    case 0xC11C0E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:290 LDY #window_stats::width
    // Overlapping static entry reached from 0xC11C0E.
    case 0xC11C10: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:291 LDA (@LOCAL0A),Y
    case 0xC11C11: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/selection_menu.asm:292 STA @LOCAL01
    case 0xC11C13: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu.asm:293 LDA @LOCAL09
    case 0xC11C15: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu.asm:294 STA @LOCAL02
    case 0xC11C17: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu.asm:295 LDY #0
    case 0xC11C19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu.asm:295 LDY #0
    // Overlapping static entry reached from 0xC11C19.
    case 0xC11C1B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu.asm:296 TAX
    case 0xC11C1C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:297 STX @LOCAL03
    case 0xC11C1D: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/selection_menu.asm:298 LDX @VIRTUAL04
    case 0xC11C1F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:299 LDA a:menu_option::text_x,X
    case 0xC11C21: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:300 LDX @LOCAL03
    case 0xC11C24: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/selection_menu.asm:301 JSL MOVE_CURSOR
    case 0xC11C26: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/selection_menu.asm:302 STA @LOCAL06
    case 0xC11C2A: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:303 JMP @UNKNOWN39
    case 0xC11C2C: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:305 LDA PAD_PRESS
    case 0xC11C2F: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu.asm:306 AND #PAD::DOWN
    case 0xC11C32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/selection_menu.asm:306 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC11C32.
    case 0xC11C34: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:307 BEQ @UNKNOWN17
    case 0xC11C35: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/text/selection_menu.asm:307 BEQ @UNKNOWN17
    // Overlapping static entry reached from 0xC11C34.
    case 0xC11C36: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // src/text/selection_menu.asm:308 LDX @VIRTUAL04
    case 0xC11C37: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:309 LDA a:menu_option::text_x,X
    case 0xC11C39: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:310 STA @LOCAL07
    case 0xC11C3C: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:311 STZ @LOCAL00
    case 0xC11C3E: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:312 LDA #SFX::CURSOR3
    case 0xC11C40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu.asm:312 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11C40.
    case 0xC11C42: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:313 STA @LOCAL00+2
    case 0xC11C43: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:314 LDA @LOCAL07
    case 0xC11C45: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:315 STA @LOCAL01
    case 0xC11C47: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu.asm:316 LDA #.LOWORD(-1)
    case 0xC11C49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:316 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C49.
    case 0xC11C4B: cpu.execute_instruction<0xFF>(0xA01485, 4); return true;
    // src/text/selection_menu.asm:317 STA @LOCAL02
    case 0xC11C4C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu.asm:318 LDY #1
    case 0xC11C4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/selection_menu.asm:318 LDY #1
    // Overlapping static entry reached from 0xC11C4B.
    case 0xC11C4F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/selection_menu.asm:318 LDY #1
    // Overlapping static entry reached from 0xC11C4E.
    case 0xC11C50: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:319 LDX @VIRTUAL04
    case 0xC11C51: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:320 LDA a:menu_option::text_y,X
    case 0xC11C53: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:321 TAX
    case 0xC11C56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:322 LDA @LOCAL07
    case 0xC11C57: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:323 JSL MOVE_CURSOR
    case 0xC11C59: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/selection_menu.asm:324 STA @LOCAL06
    case 0xC11C5D: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:325 JMP @UNKNOWN39
    case 0xC11C5F: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:327 LDA PAD_PRESS
    case 0xC11C62: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu.asm:328 AND #PAD::RIGHT
    case 0xC11C65: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/selection_menu.asm:328 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC11C65.
    case 0xC11C67: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:329 BEQ @UNKNOWN18
    case 0xC11C68: cpu.execute_instruction<0xF0>(0x000030, 2); return true;
    // src/text/selection_menu.asm:329 BEQ @UNKNOWN18
    // Overlapping static entry reached from 0xC11C67.
    case 0xC11C69: cpu.execute_instruction<0x30>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:330 LDX @VIRTUAL04
    case 0xC11C6A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:330 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC11C69.
    case 0xC11C6B: cpu.execute_instruction<0x04>(0x0000BD, 2); return true;
    // src/text/selection_menu.asm:331 LDA a:menu_option::text_y,X
    case 0xC11C6C: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:331 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11C6B.
    case 0xC11C6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:331 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11C6D.
    case 0xC11C6E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:332 STA @LOCAL09
    case 0xC11C6F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu.asm:333 LDA #1
    case 0xC11C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:333 LDA #1
    // Overlapping static entry reached from 0xC11C71.
    case 0xC11C73: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:334 STA @LOCAL00
    case 0xC11C74: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:335 LDA #SFX::CURSOR2
    case 0xC11C76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu.asm:335 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11C76.
    case 0xC11C78: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:336 STA @LOCAL00+2
    case 0xC11C79: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:337 LDA #.LOWORD(-1)
    case 0xC11C7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:337 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C7B.
    case 0xC11C7D: cpu.execute_instruction<0xFF>(0xA51285, 4); return true;
    // src/text/selection_menu.asm:338 STA @LOCAL01
    case 0xC11C7E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/selection_menu.asm:339 LDA @LOCAL09
    case 0xC11C80: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu.asm:339 LDA @LOCAL09
    // Overlapping static entry reached from 0xC11C7D.
    case 0xC11C81: cpu.execute_instruction<0x22>(0xA01485, 4); return true;
    // src/text/selection_menu.asm:340 STA @LOCAL02
    case 0xC11C82: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu.asm:341 LDY #0
    case 0xC11C84: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu.asm:341 LDY #0
    // Overlapping static entry reached from 0xC11C81.
    case 0xC11C85: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu.asm:341 LDY #0
    // Overlapping static entry reached from 0xC11C84.
    case 0xC11C86: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu.asm:342 TAX
    case 0xC11C87: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:343 STX @LOCAL06
    case 0xC11C88: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:344 LDX @VIRTUAL04
    case 0xC11C8A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:345 LDA a:menu_option::text_x,X
    case 0xC11C8C: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:346 LDX @LOCAL06
    case 0xC11C8F: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:347 JSL MOVE_CURSOR
    case 0xC11C91: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/selection_menu.asm:348 STA @LOCAL06
    case 0xC11C95: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:349 JMP @UNKNOWN39
    case 0xC11C97: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:351 LDA PAD_HELD
    case 0xC11C9A: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu.asm:352 AND #PAD::UP
    case 0xC11C9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/selection_menu.asm:352 AND #PAD::UP
    // Overlapping static entry reached from 0xC11C9D.
    case 0xC11C9F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/selection_menu.asm:353 BEQ @UNKNOWN19
    case 0xC11CA0: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/text/selection_menu.asm:354 STZ @LOCAL00
    case 0xC11CA2: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:355 LDA #SFX::CURSOR3
    case 0xC11CA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu.asm:355 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11CA4.
    case 0xC11CA6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:356 STA @LOCAL00+2
    case 0xC11CA7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:357 LDY #.LOWORD(-1)
    case 0xC11CA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:357 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11CA9.
    case 0xC11CAB: cpu.execute_instruction<0xFF>(0xBD04A6, 4); return true;
    // src/text/selection_menu.asm:358 LDX @VIRTUAL04
    case 0xC11CAC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:359 LDA a:menu_option::text_y,X
    case 0xC11CAE: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:359 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11CAB.
    case 0xC11CAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:359 LDA a:menu_option::text_y,X
    // Overlapping static entry reached from 0xC11CAF.
    case 0xC11CB0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu.asm:360 TAX
    case 0xC11CB1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:361 STX @LOCAL05
    case 0xC11CB2: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/selection_menu.asm:362 LDX @VIRTUAL04
    case 0xC11CB4: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:363 LDA a:menu_option::text_x,X
    case 0xC11CB6: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:364 LDX @LOCAL05
    case 0xC11CB9: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/selection_menu.asm:365 JSL UNKNOWN_C20B65
    case 0xC11CBB: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/selection_menu.asm:366 STA @LOCAL06
    case 0xC11CBF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:367 JMP @UNKNOWN39
    case 0xC11CC1: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:369 LDA PAD_HELD
    case 0xC11CC4: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu.asm:370 AND #PAD::LEFT
    case 0xC11CC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/selection_menu.asm:370 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC11CC7.
    case 0xC11CC9: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:371 BEQ @UNKNOWN20
    case 0xC11CCA: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/text/selection_menu.asm:372 LDA #.LOWORD(-1)
    case 0xC11CCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:372 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11CCC.
    case 0xC11CCE: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/selection_menu.asm:373 STA @LOCAL00
    case 0xC11CCF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:374 LDA #SFX::CURSOR2
    case 0xC11CD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu.asm:374 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11CCE.
    case 0xC11CD2: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/selection_menu.asm:374 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11CD1.
    case 0xC11CD3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:375 STA @LOCAL00+2
    case 0xC11CD4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:376 LDY #0
    case 0xC11CD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu.asm:376 LDY #0
    // Overlapping static entry reached from 0xC11CD6.
    case 0xC11CD8: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:377 LDX @VIRTUAL04
    case 0xC11CD9: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:378 LDA a:menu_option::text_y,X
    case 0xC11CDB: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:379 TAX
    case 0xC11CDE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:380 STX @LOCAL05
    case 0xC11CDF: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/selection_menu.asm:381 LDX @VIRTUAL04
    case 0xC11CE1: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:382 LDA a:menu_option::text_x,X
    case 0xC11CE3: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:383 LDX @LOCAL05
    case 0xC11CE6: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/selection_menu.asm:384 JSL UNKNOWN_C20B65
    case 0xC11CE8: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/selection_menu.asm:385 STA @LOCAL06
    case 0xC11CEC: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:386 JMP @UNKNOWN39
    case 0xC11CEE: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:388 LDA PAD_HELD
    case 0xC11CF1: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu.asm:389 AND #PAD::DOWN
    case 0xC11CF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/selection_menu.asm:389 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC11CF4.
    case 0xC11CF6: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:390 BEQ @UNKNOWN21
    case 0xC11CF7: cpu.execute_instruction<0xF0>(0x000022, 2); return true;
    // src/text/selection_menu.asm:390 BEQ @UNKNOWN21
    // Overlapping static entry reached from 0xC11CF6.
    case 0xC11CF8: cpu.execute_instruction<0x22>(0xA90E64, 4); return true;
    // src/text/selection_menu.asm:391 STZ @LOCAL00
    case 0xC11CF9: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:392 LDA #SFX::CURSOR3
    case 0xC11CFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/selection_menu.asm:392 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11CF8.
    case 0xC11CFC: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/text/selection_menu.asm:392 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11CFB.
    case 0xC11CFD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:393 STA @LOCAL00+2
    case 0xC11CFE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:394 LDY #1
    case 0xC11D00: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/selection_menu.asm:394 LDY #1
    // Overlapping static entry reached from 0xC11D00.
    case 0xC11D02: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:395 LDX @VIRTUAL04
    case 0xC11D03: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:396 LDA a:menu_option::text_y,X
    case 0xC11D05: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:397 TAX
    case 0xC11D08: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:398 STX @LOCAL03
    case 0xC11D09: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/selection_menu.asm:399 LDX @VIRTUAL04
    case 0xC11D0B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:400 LDA a:menu_option::text_x,X
    case 0xC11D0D: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:401 LDX @LOCAL03
    case 0xC11D10: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/selection_menu.asm:402 JSL UNKNOWN_C20B65
    case 0xC11D12: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/selection_menu.asm:403 STA @LOCAL06
    case 0xC11D16: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:404 JMP @UNKNOWN39
    case 0xC11D18: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:406 LDA PAD_HELD
    case 0xC11D1B: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/selection_menu.asm:407 AND #PAD::RIGHT
    case 0xC11D1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/selection_menu.asm:407 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC11D1E.
    case 0xC11D20: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/selection_menu.asm:408 BEQ @UNKNOWN22
    case 0xC11D21: cpu.execute_instruction<0xF0>(0x000025, 2); return true;
    // src/text/selection_menu.asm:408 BEQ @UNKNOWN22
    // Overlapping static entry reached from 0xC11D20.
    case 0xC11D22: cpu.execute_instruction<0x25>(0x0000A9, 2); return true;
    // src/text/selection_menu.asm:409 LDA #1
    case 0xC11D23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:409 LDA #1
    // Overlapping static entry reached from 0xC11D22.
    case 0xC11D24: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/selection_menu.asm:409 LDA #1
    // Overlapping static entry reached from 0xC11D23.
    case 0xC11D25: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:410 STA @LOCAL00
    case 0xC11D26: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/selection_menu.asm:411 LDA #SFX::CURSOR2
    case 0xC11D28: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu.asm:411 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11D28.
    case 0xC11D2A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:412 STA @LOCAL00+2
    case 0xC11D2B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:413 LDY #0
    case 0xC11D2D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/selection_menu.asm:413 LDY #0
    // Overlapping static entry reached from 0xC11D2D.
    case 0xC11D2F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:414 LDX @VIRTUAL04
    case 0xC11D30: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:415 LDA a:menu_option::text_y,X
    case 0xC11D32: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:416 TAX
    case 0xC11D35: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:417 STX @LOCAL06
    case 0xC11D36: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:418 LDX @VIRTUAL04
    case 0xC11D38: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:419 LDA a:menu_option::text_x,X
    case 0xC11D3A: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:420 LDX @LOCAL06
    case 0xC11D3D: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:421 JSL UNKNOWN_C20B65
    case 0xC11D3F: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/selection_menu.asm:422 STA @LOCAL06
    case 0xC11D43: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:423 JMP @UNKNOWN39
    case 0xC11D45: cpu.execute_instruction<0x4C>(0x001ECB, 3); return true;
    // src/text/selection_menu.asm:425 LDA PAD_PRESS
    case 0xC11D48: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu.asm:426 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC11D4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/selection_menu.asm:426 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1800E.
    case 0xC11D4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x00D000, 3); return true;
    // src/text/selection_menu.asm:426 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC11D4B.
    case 0xC11D4D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    case 0xC11D4E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    // Overlapping static entry reached from 0xC11D4C.
    case 0xC11D4F: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    case 0xC11D50: cpu.execute_instruction<0x4C>(0x001E76, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:427 BEQL @UNKNOWN33
    // Overlapping static entry reached from 0xC11D4F.
    case 0xC11D51: cpu.execute_instruction<0x76>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:428 JSR SET_INSTANT_PRINTING
    case 0xC11D53: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/selection_menu.asm:429 LDX @VIRTUAL04
    case 0xC11D57: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:430 LDA a:menu_option::page,X
    case 0xC11D59: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:431 BEQL @UNKNOWN30
    case 0xC11D5C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:431 BEQL @UNKNOWN30
    case 0xC11D5E: cpu.execute_instruction<0x4C>(0x001E22, 3); return true;
    // src/text/selection_menu.asm:432 LDX @VIRTUAL04
    case 0xC11D61: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:433 LDA a:menu_option::sound_effect,X
    case 0xC11D63: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/selection_menu.asm:434 AND #$00FF
    case 0xC11D66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu.asm:434 AND #$00FF
    // Overlapping static entry reached from 0xC11D66.
    case 0xC11D68: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu.asm:435 JSL PLAY_SOUND
    case 0xC11D69: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/selection_menu.asm:436 LDX @VIRTUAL04
    case 0xC11D6D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:437 LDY a:menu_option::text_y,X
    case 0xC11D6F: cpu.execute_instruction<0xBC>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:438 LDX @VIRTUAL04
    case 0xC11D72: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:439 LDA a:menu_option::text_x,X
    case 0xC11D74: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:440 TAX
    case 0xC11D77: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:441 LDA @VIRTUAL04
    case 0xC11D78: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:442 JSL UNKNOWN_C43CD2
    case 0xC11D7A: cpu.execute_instruction<0x22>(0xC43CD2, 4); return true;
    // src/text/selection_menu.asm:443 LDA #47
    case 0xC11D7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/selection_menu.asm:443 LDA #47
    // Overlapping static entry reached from 0xC11D7E.
    case 0xC11D80: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:444 JSR UNKNOWN_C10D60
    case 0xC11D81: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/text/selection_menu.asm:445 LDA #6
    case 0xC11D84: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/text/selection_menu.asm:445 LDA #6
    // Overlapping static entry reached from 0xC11D84.
    case 0xC11D86: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:446 JSR UNKNOWN_C10FEA
    case 0xC11D87: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/selection_menu.asm:447 LDA ENABLE_WORD_WRAP
    case 0xC11D8A: cpu.execute_instruction<0xAD>(0x005E6E, 3); return true;
    // src/text/selection_menu.asm:448 BEQ @UNKNOWN27
    case 0xC11D8D: cpu.execute_instruction<0xF0>(0x000066, 2); return true;
    // src/text/selection_menu.asm:449 LDA f:ALLOW_TEXT_OVERFLOW
    case 0xC11D8F: cpu.execute_instruction<0xAF>(0x7EB49D, 4); return true;
    // src/text/selection_menu.asm:450 AND #$00FF
    case 0xC11D93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu.asm:450 AND #$00FF
    // Overlapping static entry reached from 0xC11D93.
    case 0xC11D95: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/selection_menu.asm:451 CMP #1
    case 0xC11D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:451 CMP #1
    // Overlapping static entry reached from 0xC11D96.
    case 0xC11D98: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu.asm:452 BNE @UNKNOWN26
    case 0xC11D99: cpu.execute_instruction<0xD0>(0x000034, 2); return true;
    // src/text/selection_menu.asm:453 LDA CURRENT_FOCUS_WINDOW
    case 0xC11D9B: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/selection_menu.asm:454 CMP #WINDOW::FILE_SELECT_MAIN
    case 0xC11D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/selection_menu.asm:454 CMP #WINDOW::FILE_SELECT_MAIN
    // Overlapping static entry reached from 0xC11D9E.
    case 0xC11DA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu.asm:455 BNE @UNKNOWN25
    case 0xC11DA1: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/selection_menu.asm:456 JSL UNKNOWN_C43B15
    case 0xC11DA3: cpu.execute_instruction<0x22>(0xC43B15, 4); return true;
    // src/text/selection_menu.asm:457 BRA @UNKNOWN28
    case 0xC11DA7: cpu.execute_instruction<0x80>(0x000050, 2); return true;
    // src/text/selection_menu.asm:459 LDA @VIRTUAL04
    case 0xC11DA9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:460 CLC
    case 0xC11DAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:461 ADC #menu_option::label
    case 0xC11DAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/selection_menu.asm:461 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11DAC.
    case 0xC11DAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DAF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB1: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu.asm:462 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DB7: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/selection_menu.asm:463 REP #PROC_FLAGS::ACCUM8
    case 0xC11DB9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DBB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DBD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DBF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:464 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DC1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:465 LDX #1
    case 0xC11DC3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/selection_menu.asm:465 LDX #1
    // Overlapping static entry reached from 0xC11DC3.
    case 0xC11DC5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/selection_menu.asm:466 LDA #4
    case 0xC11DC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/selection_menu.asm:466 LDA #4
    // Overlapping static entry reached from 0xC11DC6.
    case 0xC11DC8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu.asm:467 JSL UNKNOWN_C43BB9
    case 0xC11DC9: cpu.execute_instruction<0x22>(0xC43BB9, 4); return true;
    // src/text/selection_menu.asm:468 BRA @UNKNOWN28
    case 0xC11DCD: cpu.execute_instruction<0x80>(0x00002A, 2); return true;
    // src/text/selection_menu.asm:470 LDA @VIRTUAL04
    case 0xC11DCF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:471 CLC
    case 0xC11DD1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:472 ADC #menu_option::label
    case 0xC11DD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/selection_menu.asm:472 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11DD2.
    case 0xC11DD4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DD5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DD7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DD8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DDA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DDB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/selection_menu.asm:473 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11DDD: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/selection_menu.asm:474 REP #PROC_FLAGS::ACCUM8
    case 0xC11DDF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu.asm:475 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11DE7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/selection_menu.asm:476 LDX #1
    case 0xC11DE9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/selection_menu.asm:476 LDX #1
    // Overlapping static entry reached from 0xC11DE9.
    case 0xC11DEB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/selection_menu.asm:477 LDA #.LOWORD(-1)
    case 0xC11DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:477 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11DEC.
    case 0xC11DEE: cpu.execute_instruction<0xFF>(0x3BB922, 4); return true;
    // src/text/selection_menu.asm:478 JSL UNKNOWN_C43BB9
    case 0xC11DEF: cpu.execute_instruction<0x22>(0xC43BB9, 4); return true;
    // src/text/selection_menu.asm:478 JSL UNKNOWN_C43BB9
    // Overlapping static entry reached from 0xC11DEE.
    case 0xC11DF2: cpu.execute_instruction<0xC4>(0x000080, 2); return true;
    // src/text/selection_menu.asm:479 BRA @UNKNOWN28
    case 0xC11DF3: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/text/selection_menu.asm:479 BRA @UNKNOWN28
    // Overlapping static entry reached from 0xC11DF2.
    case 0xC11DF4: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/text/selection_menu.asm:481 JSL UNKNOWN_C43B15
    case 0xC11DF5: cpu.execute_instruction<0x22>(0xC43B15, 4); return true;
    // src/text/selection_menu.asm:481 JSL UNKNOWN_C43B15
    // Overlapping static entry reached from 0xC11DF4.
    case 0xC11DF6: cpu.execute_instruction<0x15>(0x00003B, 2); return true;
    // src/text/selection_menu.asm:481 JSL UNKNOWN_C43B15
    // Overlapping static entry reached from 0xC11DF6.
    case 0xC11DF8: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // src/text/selection_menu.asm:483 LDA #0
    case 0xC11DF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu.asm:483 LDA #0
    // Overlapping static entry reached from 0xC11DF8.
    case 0xC11DFA: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu.asm:483 LDA #0
    // Overlapping static entry reached from 0xC11DF9.
    case 0xC11DFB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:484 JSR UNKNOWN_C10FEA
    case 0xC11DFC: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/selection_menu.asm:485 JSR CLEAR_INSTANT_PRINTING
    case 0xC11DFF: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/selection_menu.asm:486 LDA @LOCAL08
    case 0xC11E03: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/selection_menu.asm:487 LDY #window_stats::selected_option
    case 0xC11E05: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002F, 2); else cpu.execute_instruction<0xA0>(0x00002F, 3); return true;
    // src/text/selection_menu.asm:487 LDY #window_stats::selected_option
    // Overlapping static entry reached from 0xC11E05.
    case 0xC11E07: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/text/selection_menu.asm:488 STA (@LOCAL0A),Y
    case 0xC11E08: cpu.execute_instruction<0x91>(0x000024, 2); return true;
    // src/text/selection_menu.asm:489 LDX @VIRTUAL04
    case 0xC11E0A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:490 LDA a:menu_option::unknown0,X
    case 0xC11E0C: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/selection_menu.asm:491 CMP #1
    case 0xC11E0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:491 CMP #1
    // Overlapping static entry reached from 0xC11E0F.
    case 0xC11E11: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu.asm:492 BNE @UNKNOWN29
    case 0xC11E12: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/selection_menu.asm:493 LDA @LOCAL08
    case 0xC11E14: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/selection_menu.asm:494 INC
    case 0xC11E16: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:495 JMP @UNKNOWN44
    case 0xC11E17: cpu.execute_instruction<0x4C>(0x001F58, 3); return true;
    // src/text/selection_menu.asm:497 LDX @VIRTUAL04
    case 0xC11E1A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:498 LDA a:menu_option::userdata,X
    case 0xC11E1C: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/text/selection_menu.asm:499 JMP @UNKNOWN44
    case 0xC11E1F: cpu.execute_instruction<0x4C>(0x001F58, 3); return true;
    // src/text/selection_menu.asm:501 LDA #SFX::CURSOR2
    case 0xC11E22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu.asm:501 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11E22.
    case 0xC11E24: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu.asm:502 JSL PLAY_SOUND
    case 0xC11E25: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/selection_menu.asm:503 JSR UNKNOWN_C10FA3
    case 0xC11E29: cpu.execute_instruction<0x20>(0x000FA3, 3); return true;
    // src/text/selection_menu.asm:504 LDA @LOCAL0A
    case 0xC11E2C: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/selection_menu.asm:505 CLC
    case 0xC11E2E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:506 ADC #window_stats::menu_page_number
    case 0xC11E2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x000033, 3); return true;
    // src/text/selection_menu.asm:506 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11E2F.
    case 0xC11E31: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu.asm:507 TAX
    case 0xC11E32: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:508 STX @LOCAL09
    case 0xC11E33: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/text/selection_menu.asm:509 LDA __BSS_START__,X
    case 0xC11E35: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/selection_menu.asm:510 STA @LOCAL07
    case 0xC11E38: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:511 LDX @VIRTUAL04
    case 0xC11E3A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:512 LDA a:menu_option::previous,X
    case 0xC11E3C: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:513 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E3F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:513 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11E3F.
    case 0xC11E41: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:513 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11E42: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:514 TAX
    case 0xC11E46: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:515 LDA @LOCAL07
    case 0xC11E47: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:516 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC11E49: cpu.execute_instruction<0xDD>(0x0089DA, 3); return true;
    // src/text/selection_menu.asm:517 BNE @UNKNOWN31
    case 0xC11E4C: cpu.execute_instruction<0xD0>(0x00000A, 2); return true;
    // src/text/selection_menu.asm:518 LDA #1
    case 0xC11E4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:518 LDA #1
    // Overlapping static entry reached from 0xC11E4E.
    case 0xC11E50: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/selection_menu.asm:519 LDX @LOCAL09
    case 0xC11E51: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/selection_menu.asm:520 STA __BSS_START__,X
    case 0xC11E53: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/selection_menu.asm:521 BRA @UNKNOWN32
    case 0xC11E56: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/selection_menu.asm:523 INC
    case 0xC11E58: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:524 LDX @LOCAL09
    case 0xC11E59: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/selection_menu.asm:525 STA __BSS_START__,X
    case 0xC11E5B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/selection_menu.asm:527 JSR CLEAR_INSTANT_PRINTING
    case 0xC11E5E: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/selection_menu.asm:528 LDA @LOCAL0B
    case 0xC11E62: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/selection_menu.asm:532 JSL UNKNOWN_EF0115
    case 0xC11E64: cpu.execute_instruction<0x22>(0xEF0115, 4); return true;
    // src/text/selection_menu.asm:534 JSL WINDOW_TICK
    case 0xC11E68: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/selection_menu.asm:535 JSR PRINT_MENU_ITEMS
    case 0xC11E6C: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // src/text/selection_menu.asm:536 JSR SET_INSTANT_PRINTING
    case 0xC11E6F: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/selection_menu.asm:537 JMP @UNKNOWN5
    case 0xC11E73: cpu.execute_instruction<0x4C>(0x001A3F, 3); return true;
    // src/text/selection_menu.asm:539 LDA PAD_PRESS
    case 0xC11E76: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/selection_menu.asm:540 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC11E79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/selection_menu.asm:540 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC11E79.
    case 0xC11E7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0014F0, 3); return true;
    // src/text/selection_menu.asm:541 BEQ @UNKNOWN34
    case 0xC11E7C: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/text/selection_menu.asm:541 BEQ @UNKNOWN34
    // Overlapping static entry reached from 0xC11E7B.
    case 0xC11E7D: cpu.execute_instruction<0x14>(0x0000A5, 2); return true;
    // src/text/selection_menu.asm:542 LDA @LOCAL0C
    case 0xC11E7E: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/selection_menu.asm:542 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC11E7D.
    case 0xC11E7F: cpu.execute_instruction<0x28>(0x000000, 1); return true;
    // src/text/selection_menu.asm:543 CMP #1
    case 0xC11E80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/selection_menu.asm:543 CMP #1
    // Overlapping static entry reached from 0xC11E80.
    case 0xC11E82: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/selection_menu.asm:544 BNE @UNKNOWN34
    case 0xC11E83: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/text/selection_menu.asm:545 LDA #SFX::CURSOR2
    case 0xC11E85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/selection_menu.asm:545 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11E85.
    case 0xC11E87: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/selection_menu.asm:546 JSL PLAY_SOUND
    case 0xC11E88: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/selection_menu.asm:547 LDA #0
    case 0xC11E8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu.asm:547 LDA #0
    // Overlapping static entry reached from 0xC11E8C.
    case 0xC11E8E: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/selection_menu.asm:548 JMP @UNKNOWN44
    case 0xC11E8F: cpu.execute_instruction<0x4C>(0x001F58, 3); return true;
    // src/text/selection_menu.asm:550 INC @LOCAL09
    case 0xC11E92: cpu.execute_instruction<0xE6>(0x000022, 2); return true;
    // src/text/selection_menu.asm:551 LDA OPEN_WINDOW_TABLE
    case 0xC11E94: cpu.execute_instruction<0xAD>(0x0088E4, 3); return true;
    // src/text/selection_menu.asm:552 CMP WINDOW_TAIL
    case 0xC11E97: cpu.execute_instruction<0xCD>(0x0088E2, 3); return true;
    // src/text/selection_menu.asm:553 BNE @UNKNOWN36
    case 0xC11E9A: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/text/selection_menu.asm:554 LDA @LOCAL09
    case 0xC11E9C: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu.asm:555 CMP #60
    case 0xC11E9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00003C, 2); else cpu.execute_instruction<0xC9>(0x00003C, 3); return true;
    // src/text/selection_menu.asm:555 CMP #60
    // Overlapping static entry reached from 0xC11E9E.
    case 0xC11EA0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/selection_menu.asm:556 BLTEQ @UNKNOWN36
    case 0xC11EA1: cpu.execute_instruction<0x90>(0x000016, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/selection_menu.asm:556 BLTEQ @UNKNOWN36
    case 0xC11EA3: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/text/selection_menu.asm:557 LDA OPEN_WINDOW_TABLE + WINDOW::CARRIED_MONEY * 2
    case 0xC11EA5: cpu.execute_instruction<0xAD>(0x0088F8, 3); return true;
    // src/text/selection_menu.asm:558 CMP #.LOWORD(-1)
    case 0xC11EA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:558 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11EA8.
    case 0xC11EAA: cpu.execute_instruction<0xFF>(0x2003D0, 4); return true;
    // src/text/selection_menu.asm:559 BNE @UNKNOWN35
    case 0xC11EAB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/selection_menu.asm:560 JSR UNKNOWN_C1134B
    case 0xC11EAD: cpu.execute_instruction<0x20>(0x00134B, 3); return true;
    // src/text/selection_menu.asm:560 JSR UNKNOWN_C1134B
    // Overlapping static entry reached from 0xC11EAA.
    case 0xC11EAE: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/text/selection_menu.asm:560 JSR UNKNOWN_C1134B
    // Overlapping static entry reached from 0xC11EAE.
    case 0xC11EAF: cpu.execute_instruction<0x13>(0x0000A9, 2); return true;
    // src/text/selection_menu.asm:562 LDA #0
    case 0xC11EB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu.asm:562 LDA #0
    // Overlapping static entry reached from 0xC11EAF.
    case 0xC11EB1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/selection_menu.asm:562 LDA #0
    // Overlapping static entry reached from 0xC11EB0.
    case 0xC11EB2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:563 JSR SET_WINDOW_FOCUS
    case 0xC11EB3: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/text/selection_menu.asm:564 JMP @UNKNOWN5
    case 0xC11EB6: cpu.execute_instruction<0x4C>(0x001A3F, 3); return true;
    // src/text/selection_menu.asm:566 LDX @LOCAL07
    case 0xC11EB9: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:567 INX
    case 0xC11EBB: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/selection_menu.asm:568 STX @LOCAL07
    case 0xC11EBC: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/selection_menu.asm:570 CPX #10
    case 0xC11EBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000A, 2); else cpu.execute_instruction<0xE0>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:570 CPX #10
    // Overlapping static entry reached from 0xC11EBE.
    case 0xC11EC0: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/selection_menu.asm:571 BCCL @UNKNOWN14
    case 0xC11EC1: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/selection_menu.asm:571 BCCL @UNKNOWN14
    case 0xC11EC3: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/selection_menu.asm:571 BCCL @UNKNOWN14
    case 0xC11EC5: cpu.execute_instruction<0x4C>(0x001BBB, 3); return true;
    // src/text/selection_menu.asm:572 JMP @UNKNOWN13
    case 0xC11EC8: cpu.execute_instruction<0x4C>(0x001B2F, 3); return true;
    // src/text/selection_menu.asm:574 CMP #.LOWORD(-1)
    case 0xC11ECB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/selection_menu.asm:574 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11ECB.
    case 0xC11ECD: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/selection_menu.asm:575 BEQL @UNKNOWN5
    case 0xC11ECE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:575 BEQL @UNKNOWN5
    case 0xC11ED0: cpu.execute_instruction<0x4C>(0x001A3F, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/selection_menu.asm:575 BEQL @UNKNOWN5
    // Overlapping static entry reached from 0xC11ECD.
    case 0xC11ED1: cpu.execute_instruction<0x3F>(0x00A91A, 4); return true;
    // src/text/selection_menu.asm:576 LDA #0
    case 0xC11ED3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/selection_menu.asm:576 LDA #0
    // Overlapping static entry reached from 0xC11ED3.
    case 0xC11ED5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:577 STA @VIRTUAL02
    case 0xC11ED6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/selection_menu.asm:578 LDY #window_stats::current_option
    case 0xC11ED8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/text/selection_menu.asm:578 LDY #window_stats::current_option
    // Overlapping static entry reached from 0xC11ED8.
    case 0xC11EDA: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:579 LDA (@LOCAL0A),Y
    case 0xC11EDB: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:580 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:580 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11EDD.
    case 0xC11EDF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:580 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11EE0: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:581 CLC
    case 0xC11EE4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:582 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11EE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/selection_menu.asm:582 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11EE5.
    case 0xC11EE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x002285, 3); return true;
    // src/text/selection_menu.asm:583 STA @LOCAL09
    case 0xC11EE8: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu.asm:583 STA @LOCAL09
    // Overlapping static entry reached from 0xC11EE7.
    case 0xC11EE9: cpu.execute_instruction<0x22>(0x291CA5, 4); return true;
    // src/text/selection_menu.asm:584 LDA @LOCAL06
    case 0xC11EEA: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:585 AND #$00FF
    case 0xC11EEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu.asm:585 AND #$00FF
    // Overlapping static entry reached from 0xC11EE9.
    case 0xC11EED: cpu.execute_instruction<0xFF>(0xA5AA00, 4); return true;
    // src/text/selection_menu.asm:585 AND #$00FF
    // Overlapping static entry reached from 0xC11EEC.
    case 0xC11EEE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/selection_menu.asm:586 TAX
    case 0xC11EEF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:587 LDA @LOCAL06
    case 0xC11EF0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:587 LDA @LOCAL06
    // Overlapping static entry reached from 0xC11EED.
    case 0xC11EF1: cpu.execute_instruction<0x1C>(0x000029, 3); return true;
    // src/text/selection_menu.asm:588 AND #$FF00
    case 0xC11EF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/text/selection_menu.asm:588 AND #$FF00
    // Overlapping static entry reached from 0xC11EF2.
    case 0xC11EF4: cpu.execute_instruction<0xFF>(0xFF29EB, 4); return true;
    // src/text/selection_menu.asm:589 XBA
    case 0xC11EF5: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/text/selection_menu.asm:590 AND #$00FF
    case 0xC11EF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/selection_menu.asm:590 AND #$00FF
    // Overlapping static entry reached from 0xC11EF6.
    case 0xC11EF8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/selection_menu.asm:591 STA @LOCAL06
    case 0xC11EF9: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:592 BRA @UNKNOWN42
    case 0xC11EFB: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/text/selection_menu.asm:594 INC @VIRTUAL02
    case 0xC11EFD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/selection_menu.asm:595 LDY #menu_option::next
    case 0xC11EFF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/selection_menu.asm:595 LDY #menu_option::next
    // Overlapping static entry reached from 0xC11EFF.
    case 0xC11F01: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:596 LDA (@LOCAL09),Y
    case 0xC11F02: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:597 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002D, 2); else cpu.execute_instruction<0xA0>(0x00002D, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/selection_menu.asm:597 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11F04.
    case 0xC11F06: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/selection_menu.asm:597 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11F07: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/selection_menu.asm:598 CLC
    case 0xC11F0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/selection_menu.asm:599 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11F0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D4, 2); else cpu.execute_instruction<0x69>(0x0089D4, 3); return true;
    // src/text/selection_menu.asm:599 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11F0C.
    case 0xC11F0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x002285, 3); return true;
    // src/text/selection_menu.asm:600 STA @LOCAL09
    case 0xC11F0F: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/selection_menu.asm:600 STA @LOCAL09
    // Overlapping static entry reached from 0xC11F0E.
    case 0xC11F10: cpu.execute_instruction<0x22>(0x0008A0, 4); return true;
    // src/text/selection_menu.asm:602 LDY #menu_option::text_x
    case 0xC11F11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/selection_menu.asm:602 LDY #menu_option::text_x
    // Overlapping static entry reached from 0xC11F11.
    case 0xC11F13: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/selection_menu.asm:603 TXA
    case 0xC11F14: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/selection_menu.asm:604 CMP (@LOCAL09),Y
    case 0xC11F15: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // src/text/selection_menu.asm:605 BNE @UNKNOWN41
    case 0xC11F17: cpu.execute_instruction<0xD0>(0x0000E4, 2); return true;
    // src/text/selection_menu.asm:606 LDY #menu_option::text_y
    case 0xC11F19: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:606 LDY #menu_option::text_y
    // Overlapping static entry reached from 0xC11F19.
    case 0xC11F1B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/selection_menu.asm:607 LDA @LOCAL06
    case 0xC11F1C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/selection_menu.asm:608 CMP (@LOCAL09),Y
    case 0xC11F1E: cpu.execute_instruction<0xD1>(0x000022, 2); return true;
    // src/text/selection_menu.asm:609 BNE @UNKNOWN41
    case 0xC11F20: cpu.execute_instruction<0xD0>(0x0000DB, 2); return true;
    // src/text/selection_menu.asm:610 LDY #menu_option::page
    case 0xC11F22: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/selection_menu.asm:610 LDY #menu_option::page
    // Overlapping static entry reached from 0xC11F22.
    case 0xC11F24: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/selection_menu.asm:611 LDA (@LOCAL09),Y
    case 0xC11F25: cpu.execute_instruction<0xB1>(0x000022, 2); return true;
    // src/text/selection_menu.asm:612 TAY
    case 0xC11F27: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/selection_menu.asm:613 STY @LOCAL08
    case 0xC11F28: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/text/selection_menu.asm:614 TYA
    case 0xC11F2A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/selection_menu.asm:615 LDY #window_stats::menu_page_number
    case 0xC11F2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000033, 2); else cpu.execute_instruction<0xA0>(0x000033, 3); return true;
    // src/text/selection_menu.asm:615 LDY #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11F2B.
    case 0xC11F2D: cpu.execute_instruction<0x00>(0x0000D1, 2); return true;
    // src/text/selection_menu.asm:616 CMP (@LOCAL0A),Y
    case 0xC11F2E: cpu.execute_instruction<0xD1>(0x000024, 2); return true;
    // src/text/selection_menu.asm:617 BEQ @UNKNOWN43
    case 0xC11F30: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/selection_menu.asm:618 LDY @LOCAL08
    case 0xC11F32: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/text/selection_menu.asm:619 BNE @UNKNOWN41
    case 0xC11F34: cpu.execute_instruction<0xD0>(0x0000C7, 2); return true;
    // src/text/selection_menu.asm:621 LDX @VIRTUAL04
    case 0xC11F36: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:622 LDY a:menu_option::text_y,X
    case 0xC11F38: cpu.execute_instruction<0xBC>(0x00000A, 3); return true;
    // src/text/selection_menu.asm:623 LDX @VIRTUAL04
    case 0xC11F3B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/selection_menu.asm:624 LDA a:menu_option::text_x,X
    case 0xC11F3D: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/selection_menu.asm:625 TAX
    case 0xC11F40: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/selection_menu.asm:626 LDA @VIRTUAL04
    case 0xC11F41: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/selection_menu.asm:627 JSL UNKNOWN_C43CD2
    case 0xC11F43: cpu.execute_instruction<0x22>(0xC43CD2, 4); return true;
    // src/text/selection_menu.asm:628 LDA #47
    case 0xC11F47: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/selection_menu.asm:628 LDA #47
    // Overlapping static entry reached from 0xC11F47.
    case 0xC11F49: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/selection_menu.asm:629 JSR UNKNOWN_C10D60
    case 0xC11F4A: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/text/selection_menu.asm:630 LDA @VIRTUAL02
    case 0xC11F4D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/selection_menu.asm:631 STA @LOCAL08
    case 0xC11F4F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/selection_menu.asm:632 LDA @LOCAL09
    case 0xC11F51: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/selection_menu.asm:633 STA @VIRTUAL04
    case 0xC11F53: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/selection_menu.asm:634 JMP @UNKNOWN5
    case 0xC11F55: cpu.execute_instruction<0x4C>(0x001A3F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu.asm:636 END_C_FUNCTION
    case 0xC11F58: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/selection_menu.asm:636 END_C_FUNCTION
    case 0xC11F59: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/selection_menu_redirect.asm (source_named).
bool execute_text_selection_menu_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DE2B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/selection_menu_redirect.asm:6 JSR SELECTION_MENU
    case 0xC1DE2D: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/selection_menu_redirect.asm:7 END_C_FUNCTION
    case 0xC1DE30: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/selection_menu_setup.asm (source_named).
bool execute_text_selection_menu_setup_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/selection_menu_setup.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DDDA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    case 0xC1DDDC: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    case 0xC1DDDD: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    case 0xC1DDDE: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    case 0xC1DDDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DDDF.
    case 0xC1DDE1: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    case 0xC1DDE2: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/selection_menu_setup.asm:12 END_STACK_VARS
    case 0xC1DDE3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/selection_menu_setup.asm:13 STA @LOCAL03
    case 0xC1DDE4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/selection_menu_setup.asm:13 STA @LOCAL03
    // Overlapping static entry reached from 0xC1DDE1.
    case 0xC1DDE5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DDE6: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DDE8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DDEA: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:14 MOVE_INT @PARAM02, @VIRTUAL06
    case 0xC1DDEC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:15 MOVE_INT @VIRTUAL06, @EBLOCAL
    case 0xC1DDEE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:15 MOVE_INT @VIRTUAL06, @EBLOCAL
    case 0xC1DDF0: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:15 MOVE_INT @VIRTUAL06, @EBLOCAL
    case 0xC1DDF2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:15 MOVE_INT @VIRTUAL06, @EBLOCAL
    case 0xC1DDF4: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DDF6: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DDF8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DDFA: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:16 MOVE_INT @PARAM01, @VIRTUAL0A
    case 0xC1DDFC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DDFE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DE00: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DE02: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:17 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DE04: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DE06: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DE08: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DE0A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:18 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DE0C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:19 MOVE_INT @EBLOCAL, @VIRTUAL06
    case 0xC1DE0E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:19 MOVE_INT @EBLOCAL, @VIRTUAL06
    case 0xC1DE10: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:19 MOVE_INT @EBLOCAL, @VIRTUAL06
    case 0xC1DE12: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:19 MOVE_INT @EBLOCAL, @VIRTUAL06
    case 0xC1DE14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/selection_menu_setup.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DE16: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/selection_menu_setup.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DE18: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/selection_menu_setup.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DE1A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/selection_menu_setup.asm:20 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC1DE1C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/selection_menu_setup.asm:21 LDA @LOCAL03
    case 0xC1DE1E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/selection_menu_setup.asm:22 JSR UNKNOWN_C1153B
    case 0xC1DE20: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/selection_menu_setup.asm:23 END_C_FUNCTION
    case 0xC1DE23: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/selection_menu_setup.asm:23 END_C_FUNCTION
    case 0xC1DE24: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_argument_memory.asm (source_named).
bool execute_text_set_argument_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_argument_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10489: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC1048B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC1048C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC1048D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1048D.
    case 0xC1048F: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_argument_memory.asm:7 END_STACK_VARS
    case 0xC10490: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10491: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10493: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10495: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_argument_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10497: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/set_argument_memory.asm:9 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10499: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/set_argument_memory.asm:10 CLC
    case 0xC1049C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_argument_memory.asm:11 ADC #window_stats::argument_memory
    case 0xC1049D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/set_argument_memory.asm:11 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC1049D.
    case 0xC1049F: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/set_argument_memory.asm:12 TAY
    case 0xC104A0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC104A1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC104A3: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC104A6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/set_argument_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC104A8: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC104AB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC104AD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC104AF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_argument_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC104B1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_argument_memory.asm:15 END_C_FUNCTION
    case 0xC104B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_argument_memory.asm:15 END_C_FUNCTION
    case 0xC104B4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_event_flag.asm (source_named).
bool execute_text_set_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2165E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21660: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21661: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21662: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21663: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC21663.
    case 0xC21665: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21666: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_event_flag.asm:11 END_STACK_VARS
    case 0xC21667: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:12 TXY
    case 0xC21668: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:13 STY @LOCAL02
    case 0xC21669: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/set_event_flag.asm:14 TAX
    case 0xC2166B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:15 DEC
    case 0xC2166C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:16 STA @LOCAL01
    case 0xC2166D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_event_flag.asm:17 LSR
    case 0xC2166F: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:18 LSR
    case 0xC21670: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:19 LSR
    case 0xC21671: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:20 CLC
    case 0xC21672: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    case 0xC21673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x009C08, 3); return true;
    // src/text/set_event_flag.asm:21 ADC #.LOWORD(EVENT_FLAGS)
    // Overlapping static entry reached from 0xC21673.
    case 0xC21675: cpu.execute_instruction<0x9C>(0x0086AA, 3); return true;
    // src/text/set_event_flag.asm:22 TAX
    case 0xC21676: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    case 0xC21677: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/set_event_flag.asm:23 STX @LOCAL00
    // Overlapping static entry reached from 0xC21675.
    case 0xC21678: cpu.execute_instruction<0x0E>(0x0008A0, 3); return true;
    // src/text/set_event_flag.asm:24 LDY #8
    case 0xC21679: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/set_event_flag.asm:24 LDY #8
    // Overlapping static entry reached from 0xC21679.
    case 0xC2167B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/set_event_flag.asm:25 LDA @LOCAL01
    case 0xC2167C: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/set_event_flag.asm:26 JSL MODULUS16
    case 0xC2167E: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/text/set_event_flag.asm:27 TAX
    case 0xC21682: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_event_flag.asm:28 SEP #PROC_FLAGS::ACCUM8
    case 0xC21683: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_event_flag.asm:29 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC21685: cpu.execute_instruction<0xBF>(0xC4562F, 4); return true;
    // src/text/set_event_flag.asm:30 LDY @LOCAL02
    case 0xC21689: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_event_flag.asm:31 BEQ @UNKNOWN0
    case 0xC2168B: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/text/set_event_flag.asm:32 STA @VIRTUAL00
    case 0xC2168D: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:33 LDX @LOCAL00
    case 0xC2168F: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/set_event_flag.asm:34 LDA __BSS_START__,X
    case 0xC21691: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/set_event_flag.asm:34 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2053A.
    case 0xC21692: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:35 ORA @VIRTUAL00
    case 0xC21694: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:36 BRA @UNKNOWN1
    case 0xC21696: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/set_event_flag.asm:38 EOR #$00FF
    case 0xC21698: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x0085FF, 3); return true;
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    case 0xC2169A: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:39 STA @VIRTUAL00
    // Overlapping static entry reached from 0xC21698.
    case 0xC2169B: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/set_event_flag.asm:40 LDX @LOCAL00
    case 0xC2169C: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/set_event_flag.asm:41 LDA __BSS_START__,X
    case 0xC2169E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/set_event_flag.asm:42 AND @VIRTUAL00
    case 0xC216A1: cpu.execute_instruction<0x25>(0x000000, 2); return true;
    // src/text/set_event_flag.asm:44 STA __BSS_START__,X
    case 0xC216A3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/set_event_flag.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC216A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_event_flag.asm:46 AND #$00FF
    case 0xC216A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_event_flag.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC216A8.
    case 0xC216AA: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC216AB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_event_flag.asm:47 END_C_FUNCTION
    case 0xC216AC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_hppp_window_mode_item.asm (source_named).
bool execute_text_set_hppp_window_mode_item_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_hppp_window_mode_item.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC19B4E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B50: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B51: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B52: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC19B53.
    case 0xC19B55: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B56: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_hppp_window_mode_item.asm:12 END_STACK_VARS
    case 0xC19B57: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    case 0xC19B58: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:13 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC19B55.
    case 0xC19B59: cpu.execute_instruction<0x04>(0x0000A0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    case 0xC19B5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B59.
    case 0xC19B5B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:17 LDY #$0000
    // Overlapping static entry reached from 0xC19B5A.
    case 0xC19B5C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:18 STY @LOCAL02
    case 0xC19B5D: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:19 JMP @UNKNOWN17
    case 0xC19B5F: cpu.execute_instruction<0x4C>(0x009CCB, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:25 LDX @VIRTUAL04
    case 0xC19B62: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:26 TYA
    case 0xC19B64: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:27 INC
    case 0xC19B65: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:28 JSL UNKNOWN_C3EE14
    case 0xC19B66: cpu.execute_instruction<0x22>(0xC3EE14, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    case 0xC19B6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:29 CMP #$0000
    // Overlapping static entry reached from 0xC19B6A.
    case 0xC19B6C: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:30 BNE @UNKNOWN1
    case 0xC19B6D: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    case 0xC19B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000C00, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:31 LDA #$0C00
    // Overlapping static entry reached from 0xC19B6F.
    case 0xC19B71: cpu.execute_instruction<0x0C>(0x001085, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:32 STA @LOCAL01
    case 0xC19B72: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:33 JMP @UNKNOWN16
    case 0xC19B74: cpu.execute_instruction<0x4C>(0x009CB6, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:35 LDA @VIRTUAL04
    case 0xC19B77: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:36 JSR GET_ITEM_TYPE
    case 0xC19B79: cpu.execute_instruction<0x20>(0x009EE6, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    case 0xC19B7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:37 CMP #$0002
    // Overlapping static entry reached from 0xC19B7C.
    case 0xC19B7E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:38 BEQ @UNKNOWN2
    case 0xC19B7F: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    case 0xC19B81: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000400, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:39 LDA #$0400
    // Overlapping static entry reached from 0xC19B81.
    case 0xC19B83: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    case 0xC19B84: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:40 STA @LOCAL01
    // Overlapping static entry reached from 0xC19B83.
    case 0xC19B85: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    case 0xC19B86: cpu.execute_instruction<0x4C>(0x009CB6, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:41 JMP @UNKNOWN16
    // Overlapping static entry reached from 0xC19B85.
    case 0xC19B87: cpu.execute_instruction<0xB6>(0x00009C, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:43 LDA @VIRTUAL04
    case 0xC19B89: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B8B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19B8B.
    case 0xC19B8D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/set_hppp_window_mode_item.asm:44 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19B8E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:45 CLC
    case 0xC19B92: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    case 0xC19B93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000019, 2); else cpu.execute_instruction<0x69>(0x000019, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:46 ADC #item::type
    // Overlapping static entry reached from 0xC19B93.
    case 0xC19B95: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:47 TAX
    case 0xC19B96: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:48 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19B97: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    case 0xC19B9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC19B9B.
    case 0xC19B9D: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    case 0xC19B9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000C, 2); else cpu.execute_instruction<0x29>(0x00000C, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:50 AND #$000C
    // Overlapping static entry reached from 0xC19B9E.
    case 0xC19BA0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:51 BEQ @UNKNOWN3
    case 0xC19BA1: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    case 0xC19BA3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:52 CMP #$0004
    // Overlapping static entry reached from 0xC19BA3.
    case 0xC19BA5: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:53 BEQ @UNKNOWN4
    case 0xC19BA6: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    case 0xC19BA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:54 CMP #$0008
    // Overlapping static entry reached from 0xC19BA8.
    case 0xC19BAA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:55 BEQ @UNKNOWN5
    case 0xC19BAB: cpu.execute_instruction<0xF0>(0x000035, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    case 0xC19BAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:56 CMP #$000C
    // Overlapping static entry reached from 0xC19BAD.
    case 0xC19BAF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:57 BEQ @UNKNOWN6
    case 0xC19BB0: cpu.execute_instruction<0xF0>(0x000047, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:58 BRA @UNKNOWN7
    case 0xC19BB2: cpu.execute_instruction<0x80>(0x00005A, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:60 LDY @LOCAL02
    case 0xC19BB4: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:61 TYA
    case 0xC19BB6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    case 0xC19BB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:62 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BB7.
    case 0xC19BB9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:63 JSL MULT168
    case 0xC19BBA: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:64 TAX
    case 0xC19BBE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:65 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::WEAPON,X
    case 0xC19BBF: cpu.execute_instruction<0xBD>(0x0099FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    case 0xC19BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC19BC2.
    case 0xC19BC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:67 STA @VIRTUAL02
    case 0xC19BC5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:68 STA @LOCAL00
    case 0xC19BC7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:69 BRA @UNKNOWN7
    case 0xC19BC9: cpu.execute_instruction<0x80>(0x000043, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:71 LDY @LOCAL02
    case 0xC19BCB: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:72 TYA
    case 0xC19BCD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    case 0xC19BCE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:73 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BCE.
    case 0xC19BD0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    case 0xC19BD1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:74 JSL MULT168
    // Overlapping static entry reached from 0xC19B85.
    case 0xC19BD3: cpu.execute_instruction<0x8F>(0xBDAAC0, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:75 TAX
    case 0xC19BD5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:76 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    case 0xC19BD6: cpu.execute_instruction<0xBD>(0x009A00, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:76 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::BODY,X
    // Overlapping static entry reached from 0xC19BD3.
    case 0xC19BD7: cpu.execute_instruction<0x00>(0x00009A, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    case 0xC19BD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC19BD9.
    case 0xC19BDB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:78 STA @VIRTUAL02
    case 0xC19BDC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:79 STA @LOCAL00
    case 0xC19BDE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:80 BRA @UNKNOWN7
    case 0xC19BE0: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:82 LDY @LOCAL02
    case 0xC19BE2: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:83 TYA
    case 0xC19BE4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    case 0xC19BE5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:84 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BE5.
    case 0xC19BE7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:85 JSL MULT168
    case 0xC19BE8: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:86 TAX
    case 0xC19BEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:87 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::ARMS,X
    case 0xC19BED: cpu.execute_instruction<0xBD>(0x009A01, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    case 0xC19BF0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:88 AND #$00FF
    // Overlapping static entry reached from 0xC19BF0.
    case 0xC19BF2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:89 STA @VIRTUAL02
    case 0xC19BF3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:90 STA @LOCAL00
    case 0xC19BF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:91 BRA @UNKNOWN7
    case 0xC19BF7: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:93 LDY @LOCAL02
    case 0xC19BF9: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:94 TYA
    case 0xC19BFB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    case 0xC19BFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:95 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19BFC.
    case 0xC19BFE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:96 JSL MULT168
    case 0xC19BFF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:97 TAX
    case 0xC19C03: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:98 LDA PARTY_CHARACTERS+char_struct::equipment+EQUIPMENT_SLOT::OTHER,X
    case 0xC19C04: cpu.execute_instruction<0xBD>(0x009A02, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    case 0xC19C07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC19C07.
    case 0xC19C09: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:100 STA @VIRTUAL02
    case 0xC19C0A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:101 STA @LOCAL00
    case 0xC19C0C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:103 LDA @LOCAL00
    case 0xC19C0E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:104 STA @VIRTUAL02
    case 0xC19C10: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:105 BEQ @UNKNOWN9
    case 0xC19C12: cpu.execute_instruction<0xF0>(0x000053, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    case 0xC19C14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:106 LDX #$0000
    // Overlapping static entry reached from 0xC19C14.
    case 0xC19C16: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:107 STX @LOCAL01
    case 0xC19C17: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:108 LDY @LOCAL02
    case 0xC19C19: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    case 0xC19C1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:109 CPY #$0003
    // Overlapping static entry reached from 0xC19C1B.
    case 0xC19C1D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:110 BNE @UNKNOWN8
    case 0xC19C1E: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    case 0xC19C20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:111 LDX #$0001
    // Overlapping static entry reached from 0xC19C20.
    case 0xC19C22: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:112 STX @LOCAL01
    case 0xC19C23: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:114 LDA @VIRTUAL02
    case 0xC19C25: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:115 DEC
    case 0xC19C27: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:119 STA @VIRTUAL02
    case 0xC19C28: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:121 TYA
    case 0xC19C2A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    case 0xC19C2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:122 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19C2B.
    case 0xC19C2D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:123 JSL MULT168
    case 0xC19C2E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:124 CLC
    case 0xC19C32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    case 0xC19C33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x0099F1, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:125 ADC #.LOWORD(PARTY_CHARACTERS)+char_struct::items
    // Overlapping static entry reached from 0xC19C33.
    case 0xC19C35: cpu.execute_instruction<0x99>(0x006518, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:126 CLC
    case 0xC19C36: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:130 ADC @VIRTUAL02
    case 0xC19C37: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:130 ADC @VIRTUAL02
    // Overlapping static entry reached from 0xC19C35.
    case 0xC19C38: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:132 TAX
    case 0xC19C39: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:133 LDA __BSS_START__,X
    case 0xC19C3A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    case 0xC19C3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:134 AND #$00FF
    // Overlapping static entry reached from 0xC19C3D.
    case 0xC19C3F: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19C40.
    case 0xC19C42: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/set_hppp_window_mode_item.asm:135 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C43: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:136 LDX @LOCAL01
    case 0xC19C47: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:137 STX @VIRTUAL02
    case 0xC19C49: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:138 CLC
    case 0xC19C4B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:139 ADC @VIRTUAL02
    case 0xC19C4C: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:140 CLC
    case 0xC19C4E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    case 0xC19C4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:141 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C4F.
    case 0xC19C51: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:142 TAX
    case 0xC19C52: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:143 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C53: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:144 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C55: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:145 REP #PROC_FLAGS::ACCUM8
    case 0xC19C59: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:146 SEC
    case 0xC19C5B: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    case 0xC19C5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:147 AND #$00FF
    // Overlapping static entry reached from 0xC19C5C.
    case 0xC19C5E: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    case 0xC19C5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:148 SBC #$0080
    // Overlapping static entry reached from 0xC19C5F.
    case 0xC19C61: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    case 0xC19C62: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:149 EOR #$FF80
    // Overlapping static entry reached from 0xC19C62.
    case 0xC19C64: cpu.execute_instruction<0xFF>(0xA90380, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:150 BRA @UNKNOWN10
    case 0xC19C65: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    case 0xC19C67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C64.
    case 0xC19C68: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:152 LDA #$0000
    // Overlapping static entry reached from 0xC19C67.
    case 0xC19C69: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    case 0xC19C6A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:154 LDX #$0000
    // Overlapping static entry reached from 0xC19C6A.
    case 0xC19C6C: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:155 LDY @LOCAL02
    case 0xC19C6D: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    case 0xC19C6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000003, 2); else cpu.execute_instruction<0xC0>(0x000003, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:156 CPY #$0003
    // Overlapping static entry reached from 0xC19C6F.
    case 0xC19C71: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:157 BNE @UNKNOWN11
    case 0xC19C72: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    case 0xC19C74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:158 LDX #$0001
    // Overlapping static entry reached from 0xC19C74.
    case 0xC19C76: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:160 PHA
    case 0xC19C77: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:161 STX @VIRTUAL02
    case 0xC19C78: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:166 LDA @VIRTUAL04
    case 0xC19C7A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000027, 2); else cpu.execute_instruction<0xA0>(0x000027, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    // Overlapping static entry reached from 0xC19C7C.
    case 0xC19C7E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/set_hppp_window_mode_item.asm:168 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(item)
    case 0xC19C7F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:169 CLC
    case 0xC19C83: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:170 ADC @VIRTUAL02
    case 0xC19C84: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:171 CLC
    case 0xC19C86: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    case 0xC19C87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:172 ADC #item::params + item_parameters::strength
    // Overlapping static entry reached from 0xC19C87.
    case 0xC19C89: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:173 TAX
    case 0xC19C8A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:174 SEP #PROC_FLAGS::ACCUM8
    case 0xC19C8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:175 LDA f:ITEM_CONFIGURATION_TABLE,X
    case 0xC19C8D: cpu.execute_instruction<0xBF>(0xD55000, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:176 REP #PROC_FLAGS::ACCUM8
    case 0xC19C91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:177 SEC
    case 0xC19C93: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    case 0xC19C94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:178 AND #$00FF
    // Overlapping static entry reached from 0xC19C94.
    case 0xC19C96: cpu.execute_instruction<0x00>(0x0000E9, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    case 0xC19C97: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000080, 2); else cpu.execute_instruction<0xE9>(0x000080, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:179 SBC #$0080
    // Overlapping static entry reached from 0xC19C97.
    case 0xC19C99: cpu.execute_instruction<0x00>(0x000049, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    case 0xC19C9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000080, 2); else cpu.execute_instruction<0x49>(0x00FF80, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:180 EOR #$FF80
    // Overlapping static entry reached from 0xC19C9A.
    case 0xC19C9C: cpu.execute_instruction<0xFF>(0x02847A, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:181 PLY
    case 0xC19C9D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:182 STY @VIRTUAL02
    case 0xC19C9E: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:183 CLC
    case 0xC19CA0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:184 SBC @VIRTUAL02
    case 0xC19CA1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA3: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA5: cpu.execute_instruction<0x10>(0x000009, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA7: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:185 BRANCHLTEQS @UNKNOWN14
    case 0xC19CA9: cpu.execute_instruction<0x30>(0x000005, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    case 0xC19CAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001400, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:186 LDX #$1400
    // Overlapping static entry reached from 0xC19CAB.
    case 0xC19CAD: cpu.execute_instruction<0x14>(0x000080, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    case 0xC19CAE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:187 BRA @UNKNOWN15
    // Overlapping static entry reached from 0xC19CAD.
    case 0xC19CAF: cpu.execute_instruction<0x03>(0x0000A2, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    case 0xC19CB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000400, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CAF.
    case 0xC19CB1: cpu.execute_instruction<0x00>(0x000004, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:189 LDX #$0400
    // Overlapping static entry reached from 0xC19CB0.
    case 0xC19CB2: cpu.execute_instruction<0x04>(0x00008A, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:191 TXA
    case 0xC19CB3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:192 STA @LOCAL01
    case 0xC19CB4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:194 LDY @LOCAL02
    case 0xC19CB6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:195 TYA
    case 0xC19CB8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    case 0xC19CB9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:196 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC19CB9.
    case 0xC19CBB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:197 JSL MULT168
    case 0xC19CBC: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_hppp_window_mode_item.asm:198 TAX
    case 0xC19CC0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:199 LDA @LOCAL01
    case 0xC19CC1: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:200 STA PARTY_CHARACTERS+char_struct::hp_pp_window_options,X
    case 0xC19CC3: cpu.execute_instruction<0x9D>(0x009A1D, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:201 LDY @LOCAL02
    case 0xC19CC6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:202 INY
    case 0xC19CC8: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/set_hppp_window_mode_item.asm:203 STY @LOCAL02
    case 0xC19CC9: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    case 0xC19CCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000004, 2); else cpu.execute_instruction<0xC0>(0x000004, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:205 CPY #PLAYER_CHAR_COUNT
    // Overlapping static entry reached from 0xC19CCB.
    case 0xC19CCD: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CCE: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/set_hppp_window_mode_item.asm:206 BCCL @UNKNOWN0
    case 0xC19CD2: cpu.execute_instruction<0x4C>(0x009B62, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    case 0xC19CD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/set_hppp_window_mode_item.asm:207 LDA #$0001
    // Overlapping static entry reached from 0xC19CD5.
    case 0xC19CD7: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/set_hppp_window_mode_item.asm:208 STA REDRAW_ALL_WINDOWS
    case 0xC19CD8: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CDB: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_hppp_window_mode_item.asm:209 END_C_FUNCTION
    case 0xC19CDC: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_instant_printing.asm (source_named).
bool execute_text_set_instant_printing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_instant_printing.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E4D4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_instant_printing.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E4D6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_instant_printing.asm:9 LDA #1
    case 0xC3E4D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    case 0xC3E4DA: cpu.execute_instruction<0x8D>(0x009622, 3); return true;
    // src/text/set_instant_printing.asm:10 STA INSTANT_PRINTING
    // Overlapping static entry reached from 0xC3E4D8.
    case 0xC3E4DB: cpu.execute_instruction<0x22>(0x20C296, 4); return true;
    // src/text/set_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC3E4DD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_instant_printing.asm:12 END_C_FUNCTION
    case 0xC3E4DF: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_secondary_memory.asm (source_named).
bool execute_text_set_secondary_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10443: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC10445: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC10446: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC10447: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC10448: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC10448.
    case 0xC1044A: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC1044B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_secondary_memory.asm:8 END_STACK_VARS
    case 0xC1044C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:9 TAY
    case 0xC1044D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:10 STY @LOCAL00
    case 0xC1044E: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/set_secondary_memory.asm:11 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10450: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/set_secondary_memory.asm:12 TAX
    case 0xC10453: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:13 LDY @LOCAL00
    case 0xC10454: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/set_secondary_memory.asm:14 TYA
    case 0xC10456: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/set_secondary_memory.asm:15 STA a:window_stats::secondary_memory,X
    case 0xC10457: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/text/set_secondary_memory.asm:16 TYA
    case 0xC1045A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_secondary_memory.asm:17 END_C_FUNCTION
    case 0xC1045B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_secondary_memory.asm:17 END_C_FUNCTION
    case 0xC1045C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_text_sound_mode.asm (source_named).
bool execute_text_set_text_sound_mode_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_text_sound_mode.asm:3 BEGIN_C_FUNCTION
    case 0xC10048: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_text_sound_mode.asm:6 STA TEXT_SOUND_MODE
    case 0xC1004A: cpu.execute_instruction<0x8D>(0x00964F, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_text_sound_mode.asm:7 END_C_FUNCTION
    case 0xC1004D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_window_focus.asm (source_named).
bool execute_text_set_window_focus_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_focus.asm:3 BEGIN_C_FUNCTION
    case 0xC1007E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_window_focus.asm:6 STA CURRENT_FOCUS_WINDOW
    case 0xC10080: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_window_focus.asm:7 END_C_FUNCTION
    case 0xC10083: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_window_focus_redirect.asm (source_named).
bool execute_text_set_window_focus_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_focus_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/set_window_focus_redirect.asm:6 JSR SET_WINDOW_FOCUS
    case 0xC1DD4F: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_window_focus_redirect.asm:7 END_C_FUNCTION
    case 0xC1DD52: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_window_title.asm (source_named).
bool execute_text_set_window_title_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_window_title.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2032B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2032D: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2032E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC2032F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20330: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC20330.
    case 0xC20332: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20333: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/set_window_title.asm:9 END_STACK_VARS
    case 0xC20334: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/set_window_title.asm:10 STX @VIRTUAL02
    case 0xC20335: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/set_window_title.asm:10 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20332.
    case 0xC20336: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/text/set_window_title.asm:11 STA @VIRTUAL04
    case 0xC20337: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC20339: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2033B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC20297.
    case 0xC2033C: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2033D: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    // Overlapping static entry reached from 0xC2033C.
    case 0xC2033E: cpu.execute_instruction<0x1F>(0xA50885, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_window_title.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC2033F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/set_window_title.asm:13 LDA @VIRTUAL04
    case 0xC20341: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_window_title.asm:13 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC2033E.
    case 0xC20342: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // src/text/set_window_title.asm:14 ASL
    case 0xC20343: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/set_window_title.asm:15 TAX
    case 0xC20344: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/set_window_title.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC20345: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/set_window_title.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC20348: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/set_window_title.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC20348.
    case 0xC2034A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/set_window_title.asm:18 JSL MULT168
    case 0xC2034B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/set_window_title.asm:19 CLC
    case 0xC2034F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_window_title.asm:20 ADC #.LOWORD(WINDOW_STATS)+window_stats::title
    case 0xC20350: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00008C, 2); else cpu.execute_instruction<0x69>(0x00868C, 3); return true;
    // src/text/set_window_title.asm:20 ADC #.LOWORD(WINDOW_STATS)+window_stats::title
    // Overlapping static entry reached from 0xC20350.
    case 0xC20352: cpu.execute_instruction<0x86>(0x0000A8, 2); return true;
    // src/text/set_window_title.asm:21 TAY
    case 0xC20353: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/set_window_title.asm:22 BRA @UNKNOWN1
    case 0xC20354: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/set_window_title.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20356: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:25 LDA @LOCAL00
    case 0xC20358: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/set_window_title.asm:26 STA __BSS_START__,Y
    case 0xC2035A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/set_window_title.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2035D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:28 INC @VIRTUAL06
    case 0xC2035F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/set_window_title.asm:29 INY
    case 0xC20361: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/set_window_title.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC20362: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:32 LDA [@VIRTUAL06]
    case 0xC20364: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/set_window_title.asm:33 STA @LOCAL00
    case 0xC20366: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/set_window_title.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20368: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:35 AND #$00FF
    case 0xC2036A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/set_window_title.asm:35 AND #$00FF
    // Overlapping static entry reached from 0xC2036A.
    case 0xC2036C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/set_window_title.asm:36 BEQ @UNKNOWN2
    case 0xC2036D: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/set_window_title.asm:37 LDX @VIRTUAL02
    case 0xC2036F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/set_window_title.asm:38 LDA @VIRTUAL02
    case 0xC20371: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/set_window_title.asm:39 DEC
    case 0xC20373: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/set_window_title.asm:40 STA @VIRTUAL02
    case 0xC20374: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/set_window_title.asm:41 CPX #0
    case 0xC20376: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/set_window_title.asm:41 CPX #0
    // Overlapping static entry reached from 0xC20376.
    case 0xC20378: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/set_window_title.asm:42 BNE @UNKNOWN0
    case 0xC20379: cpu.execute_instruction<0xD0>(0x0000DB, 2); return true;
    // src/text/set_window_title.asm:44 SEP #PROC_FLAGS::ACCUM8
    case 0xC2037B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:45 LDA #0
    case 0xC2037D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009900, 3); return true;
    // src/text/set_window_title.asm:46 STA __BSS_START__,Y
    case 0xC2037F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/set_window_title.asm:46 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2037D.
    case 0xC20380: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/set_window_title.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC20382: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/set_window_title.asm:48 LDA @VIRTUAL04
    case 0xC20384: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/set_window_title.asm:49 JSR UNKNOWN_C202AC
    case 0xC20386: cpu.execute_instruction<0x20>(0x0002AC, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_window_title.asm:50 END_C_FUNCTION
    case 0xC20389: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/set_window_title.asm:50 END_C_FUNCTION
    case 0xC2038A: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/set_working_memory.asm (source_named).
bool execute_text_set_working_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/set_working_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC1045D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC1045F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10460: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10461: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10461.
    case 0xC10463: cpu.execute_instruction<0xFF>(0x1CA55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/set_working_memory.asm:7 END_STACK_VARS
    case 0xC10464: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10465: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10467: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC10469: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_working_memory.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1046B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/set_working_memory.asm:9 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1046D: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/set_working_memory.asm:10 CLC
    case 0xC10470: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/set_working_memory.asm:11 ADC #window_stats::working_memory
    case 0xC10471: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/set_working_memory.asm:11 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10471.
    case 0xC10473: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/set_working_memory.asm:12 TAY
    case 0xC10474: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10475: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10477: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1047A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/set_working_memory.asm:13 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1047C: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1047F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10481: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10483: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/set_working_memory.asm:14 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10485: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/set_working_memory.asm:15 END_C_FUNCTION
    case 0xC10487: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/set_working_memory.asm:15 END_C_FUNCTION
    case 0xC10488: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/show_hppp_windows.asm (source_named).
bool execute_text_show_hppp_windows_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/show_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10A04: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/show_hppp_windows.asm:5 JSR UNKNOWN_C3E6F8
    case 0xC10A06: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/text/show_hppp_windows.asm:6 SEP #PROC_FLAGS::ACCUM8
    case 0xC10A0A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/show_hppp_windows.asm:7 LDA #1
    case 0xC10A0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    case 0xC10A0E: cpu.execute_instruction<0x8D>(0x0089C9, 3); return true;
    // src/text/show_hppp_windows.asm:8 STA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC10A0C.
    case 0xC10A0F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000089, 2); else cpu.execute_instruction<0xC9>(0x008D89, 3); return true;
    // src/text/show_hppp_windows.asm:9 STA REDRAW_ALL_WINDOWS
    case 0xC10A11: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/text/show_hppp_windows.asm:9 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10A0F.
    case 0xC10A12: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/text/show_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10A14: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    case 0xC10A16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/show_hppp_windows.asm:11 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10A16.
    case 0xC10A18: cpu.execute_instruction<0xFF>(0x96478D, 4); return true;
    // src/text/show_hppp_windows.asm:12 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC10A19: cpu.execute_instruction<0x8D>(0x009647, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/show_hppp_windows.asm:13 END_C_FUNCTION
    case 0xC10A1C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/show_hppp_windows_redirect.asm (source_named).
bool execute_text_show_hppp_windows_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/show_hppp_windows_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD3B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/show_hppp_windows_redirect.asm:5 JSR SHOW_HPPP_WINDOWS
    case 0xC1DD3D: cpu.execute_instruction<0x20>(0x000A04, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/show_hppp_windows_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD40: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/skippable_pause.asm (source_named).
bool execute_text_skippable_pause_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/skippable_pause.asm:3 BEGIN_C_FUNCTION
    case 0xC4C567: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C569: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56B: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC4C56C.
    case 0xC4C56E: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C56F: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/skippable_pause.asm:8 END_STACK_VARS
    case 0xC4C570: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    case 0xC4C571: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC4C56E.
    case 0xC4C572: cpu.execute_instruction<0x0E>(0x001380, 3); return true;
    // src/text/skippable_pause.asm:10 BRA @UNKNOWN2
    case 0xC4C573: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/skippable_pause.asm:12 LDA PAD_PRESS
    case 0xC4C575: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/skippable_pause.asm:13 BEQ @UNKNOWN1
    case 0xC4C578: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    case 0xC4C57A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/skippable_pause.asm:14 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4C57A.
    case 0xC4C57C: cpu.execute_instruction<0xFF>(0x220E80, 4); return true;
    // src/text/skippable_pause.asm:15 BRA @UNKNOWN3
    case 0xC4C57D: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC4C57F: cpu.execute_instruction<0x22>(0xC08756, 4); return true;
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC4C57C.
    case 0xC4C580: cpu.execute_instruction<0x56>(0x000087, 2); return true;
    // src/text/skippable_pause.asm:17 JSL WAIT_UNTIL_NEXT_FRAME
    // Overlapping static entry reached from 0xC4C580.
    case 0xC4C582: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x000EA5, 3); return true;
    // src/text/skippable_pause.asm:18 LDA @LOCAL00
    case 0xC4C583: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:18 LDA @LOCAL00
    // Overlapping static entry reached from 0xC4C582.
    case 0xC4C584: cpu.execute_instruction<0x0E>(0x00853A, 3); return true;
    // src/text/skippable_pause.asm:19 DEC
    case 0xC4C585: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/skippable_pause.asm:20 STA @LOCAL00
    case 0xC4C586: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/skippable_pause.asm:20 STA @LOCAL00
    // Overlapping static entry reached from 0xC4C584.
    case 0xC4C587: cpu.execute_instruction<0x0E>(0x00EBD0, 3); return true;
    // src/text/skippable_pause.asm:22 BNE @UNKNOWN0
    case 0xC4C588: cpu.execute_instruction<0xD0>(0x0000EB, 2); return true;
    // src/text/skippable_pause.asm:23 LDA #0
    case 0xC4C58A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/skippable_pause.asm:23 LDA #0
    // Overlapping static entry reached from 0xC4C58A.
    case 0xC4C58C: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC4C58D: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/skippable_pause.asm:25 END_C_FUNCTION
    case 0xC4C58E: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/spawn_floating_sprite.asm (source_named).
bool execute_text_spawn_floating_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/spawn_floating_sprite.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4B3D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC4B3D5.
    case 0xC4B3D7: cpu.execute_instruction<0xFF>(0x9B685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/spawn_floating_sprite.asm:11 END_STACK_VARS
    case 0xC4B3D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:12 TXY
    case 0xC4B3DA: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:13 STA @VIRTUAL02
    case 0xC4B3DB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    case 0xC4B3DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/spawn_floating_sprite.asm:14 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B3DD.
    case 0xC4B3DF: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4B3E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    case 0xC4B3E2: cpu.execute_instruction<0x4C>(0x00B4BC, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:15 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4B3DF.
    case 0xC4B3E3: cpu.execute_instruction<0xBC>(0x00A5B4, 3); return true;
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    case 0xC4B3E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:16 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B3E3.
    case 0xC4B3E6: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/text/spawn_floating_sprite.asm:17 ASL
    case 0xC4B3E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:18 TAX
    case 0xC4B3E8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:19 LDA ENTITY_SCRIPT_TABLE,X
    case 0xC4B3E9: cpu.execute_instruction<0xBD>(0x000A62, 3); return true;
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    case 0xC4B3EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/spawn_floating_sprite.asm:20 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B3EC.
    case 0xC4B3EE: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4B3EF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    case 0xC4B3F1: cpu.execute_instruction<0x4C>(0x00B4BC, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/spawn_floating_sprite.asm:21 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC4B3EE.
    case 0xC4B3F2: cpu.execute_instruction<0xBC>(0x00BDB4, 3); return true;
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    case 0xC4B3F4: cpu.execute_instruction<0xBD>(0x002B6E, 3); return true;
    // src/text/spawn_floating_sprite.asm:22 LDA ENTITY_SIZES,X
    // Overlapping static entry reached from 0xC4B3F2.
    case 0xC4B3F5: cpu.execute_instruction<0x6E>(0x00852B, 3); return true;
    // src/text/spawn_floating_sprite.asm:23 STA @LOCAL03
    case 0xC4B3F7: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/spawn_floating_sprite.asm:23 STA @LOCAL03
    // Overlapping static entry reached from 0xC4B3F5.
    case 0xC4B3F8: cpu.execute_instruction<0x14>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B3F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E8, 2); else cpu.execute_instruction<0xA9>(0x000DE8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3F8.
    case 0xC4B3FA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3F9.
    case 0xC4B3FB: cpu.execute_instruction<0x0D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B3FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B3FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC4B3FE.
    case 0xC4B400: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/spawn_floating_sprite.asm:24 LOADPTR FLOATING_SPRITE_TABLE, @VIRTUAL06
    case 0xC4B401: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/spawn_floating_sprite.asm:25 TYA
    case 0xC4B403: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B404: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B406: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B407: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/text/spawn_floating_sprite.asm:26 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(floating_sprite)
    case 0xC4B408: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:27 CLC
    case 0xC4B40A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:28 ADC @VIRTUAL06
    case 0xC4B40B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:29 STA @VIRTUAL06
    case 0xC4B40D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:30 LDA ENTITY_ABS_X_TABLE,X
    case 0xC4B40F: cpu.execute_instruction<0xBD>(0x000B8E, 3); return true;
    // src/text/spawn_floating_sprite.asm:31 STA ACTIVE_MANPU_X
    case 0xC4B412: cpu.execute_instruction<0x8D>(0x00B3F8, 3); return true;
    // src/text/spawn_floating_sprite.asm:32 LDA ENTITY_ABS_Y_TABLE,X
    case 0xC4B415: cpu.execute_instruction<0xBD>(0x000BCA, 3); return true;
    // src/text/spawn_floating_sprite.asm:33 STA ACTIVE_MANPU_Y
    case 0xC4B418: cpu.execute_instruction<0x8D>(0x00B3FA, 3); return true;
    // src/text/spawn_floating_sprite.asm:34 LDA @LOCAL03
    case 0xC4B41B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/spawn_floating_sprite.asm:35 TAX
    case 0xC4B41D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:36 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B41E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    case 0xC4B420: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/spawn_floating_sprite.asm:37 LDY #floating_sprite::unknown2
    // Overlapping static entry reached from 0xC4B420.
    case 0xC4B422: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:38 LDA [@VIRTUAL06],Y
    case 0xC4B423: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:39 REP #PROC_FLAGS::ACCUM8
    case 0xC4B425: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    case 0xC4B427: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:40 AND #$00FF
    // Overlapping static entry reached from 0xC4B427.
    case 0xC4B429: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:41 JSR UNKNOWN_C4B329
    case 0xC4B42A: cpu.execute_instruction<0x20>(0x00B329, 3); return true;
    // src/text/spawn_floating_sprite.asm:42 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B42D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    case 0xC4B42F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/text/spawn_floating_sprite.asm:43 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC4B42F.
    case 0xC4B431: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:44 LDA [@VIRTUAL06],Y
    case 0xC4B432: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC4B434: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    case 0xC4B436: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC4B436.
    case 0xC4B438: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    case 0xC4B439: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/text/spawn_floating_sprite.asm:47 AND #$0080
    // Overlapping static entry reached from 0xC4B439.
    case 0xC4B43B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/spawn_floating_sprite.asm:48 BEQ @UNKNOWN2
    case 0xC4B43C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    case 0xC4B43E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00FF00, 3); return true;
    // src/text/spawn_floating_sprite.asm:49 LDX #$FF00
    // Overlapping static entry reached from 0xC4B43E.
    case 0xC4B440: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/text/spawn_floating_sprite.asm:50 BRA @UNKNOWN3
    case 0xC4B441: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    case 0xC4B443: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC4B440.
    case 0xC4B444: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/spawn_floating_sprite.asm:52 LDX #0
    // Overlapping static entry reached from 0xC4B443.
    case 0xC4B445: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/spawn_floating_sprite.asm:54 STX @VIRTUAL04
    case 0xC4B446: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B448: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    case 0xC4B44A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/text/spawn_floating_sprite.asm:56 LDY #floating_sprite::unknown3
    // Overlapping static entry reached from 0xC4B44A.
    case 0xC4B44C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:57 LDA [@VIRTUAL06],Y
    case 0xC4B44D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC4B44F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    case 0xC4B451: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC4B451.
    case 0xC4B453: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:60 ORA @VIRTUAL04
    case 0xC4B454: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:61 CLC
    case 0xC4B456: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:62 ADC ACTIVE_MANPU_X
    case 0xC4B457: cpu.execute_instruction<0x6D>(0x00B3F8, 3); return true;
    // src/text/spawn_floating_sprite.asm:63 STA ACTIVE_MANPU_X
    case 0xC4B45A: cpu.execute_instruction<0x8D>(0x00B3F8, 3); return true;
    // src/text/spawn_floating_sprite.asm:64 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B45D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    case 0xC4B45F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/text/spawn_floating_sprite.asm:65 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC4B45F.
    case 0xC4B461: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:66 LDA [@VIRTUAL06],Y
    case 0xC4B462: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:67 REP #PROC_FLAGS::ACCUM8
    case 0xC4B464: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    case 0xC4B466: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:68 AND #$00FF
    // Overlapping static entry reached from 0xC4B466.
    case 0xC4B468: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    case 0xC4B469: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/text/spawn_floating_sprite.asm:69 AND #$0080
    // Overlapping static entry reached from 0xC4B469.
    case 0xC4B46B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/spawn_floating_sprite.asm:70 BEQ @UNKNOWN4
    case 0xC4B46C: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    case 0xC4B46E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x00FF00, 3); return true;
    // src/text/spawn_floating_sprite.asm:71 LDX #$FF00
    // Overlapping static entry reached from 0xC4B46E.
    case 0xC4B470: cpu.execute_instruction<0xFF>(0xA20380, 4); return true;
    // src/text/spawn_floating_sprite.asm:72 BRA @UNKNOWN5
    case 0xC4B471: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    case 0xC4B473: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC4B470.
    case 0xC4B474: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/spawn_floating_sprite.asm:74 LDX #0
    // Overlapping static entry reached from 0xC4B473.
    case 0xC4B475: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/spawn_floating_sprite.asm:76 STX @VIRTUAL04
    case 0xC4B476: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:77 SEP #PROC_FLAGS::ACCUM8
    case 0xC4B478: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    case 0xC4B47A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/text/spawn_floating_sprite.asm:78 LDY #floating_sprite::unknown4
    // Overlapping static entry reached from 0xC4B47A.
    case 0xC4B47C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // src/text/spawn_floating_sprite.asm:79 LDA [@VIRTUAL06],Y
    case 0xC4B47D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:80 REP #PROC_FLAGS::ACCUM8
    case 0xC4B47F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    case 0xC4B481: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/spawn_floating_sprite.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC4B481.
    case 0xC4B483: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/spawn_floating_sprite.asm:82 ORA @VIRTUAL04
    case 0xC4B484: cpu.execute_instruction<0x05>(0x000004, 2); return true;
    // src/text/spawn_floating_sprite.asm:83 CLC
    case 0xC4B486: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:84 ADC ACTIVE_MANPU_Y
    case 0xC4B487: cpu.execute_instruction<0x6D>(0x00B3FA, 3); return true;
    // src/text/spawn_floating_sprite.asm:85 STA @LOCAL02
    case 0xC4B48A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:86 STA ACTIVE_MANPU_Y
    case 0xC4B48C: cpu.execute_instruction<0x8D>(0x00B3FA, 3); return true;
    // src/text/spawn_floating_sprite.asm:87 LDA ACTIVE_MANPU_X
    case 0xC4B48F: cpu.execute_instruction<0xAD>(0x00B3F8, 3); return true;
    // src/text/spawn_floating_sprite.asm:88 STA @LOCAL00
    case 0xC4B492: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/spawn_floating_sprite.asm:89 LDA @LOCAL02
    case 0xC4B494: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:90 STA @LOCAL01
    case 0xC4B496: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    case 0xC4B498: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/spawn_floating_sprite.asm:91 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC4B498.
    case 0xC4B49A: cpu.execute_instruction<0xFF>(0x0311A2, 4); return true;
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    case 0xC4B49B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000011, 2); else cpu.execute_instruction<0xA2>(0x000311, 3); return true;
    // src/text/spawn_floating_sprite.asm:92 LDX #EVENT_SCRIPT::EVENT_785
    // Overlapping static entry reached from 0xC4B49B.
    case 0xC4B49D: cpu.execute_instruction<0x03>(0x0000A7, 2); return true;
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    case 0xC4B49E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/spawn_floating_sprite.asm:93 LDA [@VIRTUAL06] ;floating_sprite::sprite
    // Overlapping static entry reached from 0xC4B49D.
    case 0xC4B49F: cpu.execute_instruction<0x06>(0x000022, 2); return true;
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    case 0xC4B4A0: cpu.execute_instruction<0x22>(0xC01E49, 4); return true;
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4B49F.
    case 0xC4B4A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x00001E, 2); else cpu.execute_instruction<0x49>(0x00C01E, 3); return true;
    // src/text/spawn_floating_sprite.asm:94 JSL CREATE_ENTITY
    // Overlapping static entry reached from 0xC4B4A1.
    case 0xC4B4A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00AA0A, 3); return true;
    // src/text/spawn_floating_sprite.asm:95 ASL
    case 0xC4B4A4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:96 TAX
    case 0xC4B4A5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:97 STX @LOCAL02
    case 0xC4B4A6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:98 LDA @VIRTUAL02
    case 0xC4B4A8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    case 0xC4B4AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000000, 2); else cpu.execute_instruction<0x09>(0x00C000, 3); return true;
    // src/text/spawn_floating_sprite.asm:99 ORA #$C000
    // Overlapping static entry reached from 0xC4B4AA.
    case 0xC4B4AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00009D, 2); else cpu.execute_instruction<0xC0>(0x003E9D, 3); return true;
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    case 0xC4B4AD: cpu.execute_instruction<0x9D>(0x00103E, 3); return true;
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC4B4AC.
    case 0xC4B4AE: cpu.execute_instruction<0x3E>(0x00A510, 3); return true;
    // src/text/spawn_floating_sprite.asm:100 STA ENTITY_DRAW_PRIORITY,X
    // Overlapping static entry reached from 0xC4B4AC.
    case 0xC4B4AF: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    case 0xC4B4B0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/spawn_floating_sprite.asm:101 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC4B4AF.
    case 0xC4B4B1: cpu.execute_instruction<0x02>(0x00000A, 2); return true;
    // src/text/spawn_floating_sprite.asm:102 ASL
    case 0xC4B4B2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:103 TAX
    case 0xC4B4B3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/spawn_floating_sprite.asm:104 LDA ENTITY_SURFACE_FLAGS,X
    case 0xC4B4B4: cpu.execute_instruction<0xBD>(0x002BAA, 3); return true;
    // src/text/spawn_floating_sprite.asm:105 LDX @LOCAL02
    case 0xC4B4B7: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/spawn_floating_sprite.asm:106 STA ENTITY_SURFACE_FLAGS,X
    case 0xC4B4B9: cpu.execute_instruction<0x9D>(0x002BAA, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC4B4BC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/spawn_floating_sprite.asm:108 END_C_FUNCTION
    case 0xC4B4BD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/text_input_dialog.asm (source_named).
bool execute_text_text_input_dialog_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/text_input_dialog.asm:3 BEGIN_C_FUNCTION
    case 0xC1E57F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E581: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E582: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E583: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E584: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D0, 2); else cpu.execute_instruction<0x69>(0x00FFD0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E584.
    case 0xC1E586: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E587: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/text_input_dialog.asm:27 END_STACK_VARS
    case 0xC1E588: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:28 STY @LOCAL0F
    case 0xC1E589: cpu.execute_instruction<0x84>(0x00002E, 2); return true;
    // src/text/text_input_dialog.asm:28 STY @LOCAL0F
    // Overlapping static entry reached from 0xC1E586.
    case 0xC1E58A: cpu.execute_instruction<0x2E>(0x002C86, 3); return true;
    // src/text/text_input_dialog.asm:29 STX @LOCAL0E
    case 0xC1E58B: cpu.execute_instruction<0x86>(0x00002C, 2); return true;
    // src/text/text_input_dialog.asm:30 STA @LOCAL0D
    case 0xC1E58D: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/text/text_input_dialog.asm:31 LDY @PARAM04
    case 0xC1E58F: cpu.execute_instruction<0xA4>(0x000040, 2); return true;
    // src/text/text_input_dialog.asm:32 STY @LOCAL0C
    case 0xC1E591: cpu.execute_instruction<0x84>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:33 LDX @PARAM03
    case 0xC1E593: cpu.execute_instruction<0xA6>(0x00003E, 2); return true;
    // src/text/text_input_dialog.asm:34 STX @LOCAL0B
    case 0xC1E595: cpu.execute_instruction<0x86>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:35 LDA #.LOWORD(-1)
    case 0xC1E597: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:35 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E597.
    case 0xC1E599: cpu.execute_instruction<0xFF>(0x642485, 4); return true;
    // src/text/text_input_dialog.asm:36 STA @LOCAL0A
    case 0xC1E59A: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/text_input_dialog.asm:37 STZ @LOCAL09
    case 0xC1E59C: cpu.execute_instruction<0x64>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:37 STZ @LOCAL09
    // Overlapping static entry reached from 0xC1E599.
    case 0xC1E59D: cpu.execute_instruction<0x22>(0x8522A5, 4); return true;
    // src/text/text_input_dialog.asm:38 LDA @LOCAL09
    case 0xC1E59E: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:39 STA @LOCAL08
    case 0xC1E5A0: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:39 STA @LOCAL08
    // Overlapping static entry reached from 0xC1E59D.
    case 0xC1E5A1: cpu.execute_instruction<0x20>(0x0026A5, 3); return true;
    // src/text/text_input_dialog.asm:40 LDA @LOCAL0B
    case 0xC1E5A2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:41 STA @LOCAL07
    case 0xC1E5A4: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/text_input_dialog.asm:42 JSL SET_INSTANT_PRINTING
    case 0xC1E5A6: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:43 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E5AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:43 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E5AA.
    case 0xC1E5AC: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/text_input_dialog.asm:43 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E5AD: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/text/text_input_dialog.asm:44 LDA @LOCAL0C
    case 0xC1E5B0: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:45 CMP #.LOWORD(-1)
    case 0xC1E5B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:45 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E5B2.
    case 0xC1E5B4: cpu.execute_instruction<0xFF>(0xAF1AD0, 4); return true;
    // src/text/text_input_dialog.asm:46 BNE @UNKNOWN0
    case 0xC1E5B5: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5B7: cpu.execute_instruction<0xAF>(0xEFA6E7, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B4.
    case 0xC1E5B8: cpu.execute_instruction<0xE7>(0x0000A6, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5B8.
    case 0xC1E5BA: cpu.execute_instruction<0xEF>(0xAF0685, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5BD: cpu.execute_instruction<0xAF>(0xEFA6E9, 4); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BA.
    case 0xC1E5BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A6, 2); else cpu.execute_instruction<0xE9>(0x00EFA6, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E5BE.
    case 0xC1E5C0: cpu.execute_instruction<0xEF>(0xA50885, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:47 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E5C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E5C0.
    case 0xC1E5C4: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E5C4.
    case 0xC1E5C6: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:48 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:49 JSL DISPLAY_TEXT
    case 0xC1E5CB: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:50 BRA @UNKNOWN1
    case 0xC1E5CF: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5D1: cpu.execute_instruction<0xAF>(0xEFA6E3, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5D7: cpu.execute_instruction<0xAF>(0xEFA6E5, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:52 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E5DB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5DF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5E1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:53 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E5E3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:54 JSL DISPLAY_TEXT
    case 0xC1E5E5: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:56 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E5E9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:57 STZ CHARACTER_PADDING
    case 0xC1E5EB: cpu.execute_instruction<0x9C>(0x005E6D, 3); return true;
    // src/text/text_input_dialog.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC1E5EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:59 LDA @LOCAL0C
    case 0xC1E5F0: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:60 CMP #.LOWORD(-1)
    case 0xC1E5F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:60 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E5F2.
    case 0xC1E5F4: cpu.execute_instruction<0xFF>(0xA931D0, 4); return true;
    // src/text/text_input_dialog.asm:61 BNE @UNKNOWN2
    case 0xC1E5F5: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x00A6D3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5F4.
    case 0xC1E5F8: cpu.execute_instruction<0xD3>(0x0000A6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5F7.
    case 0xC1E5F9: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5FA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5F9.
    case 0xC1E5FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E5FC.
    case 0xC1E5FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:62 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E5FF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/text_input_dialog.asm:63 LDA @LOCAL0B
    case 0xC1E601: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:64 ASL
    case 0xC1E603: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:65 ASL
    case 0xC1E604: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:66 CLC
    case 0xC1E605: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:67 ADC #8
    case 0xC1E606: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/text/text_input_dialog.asm:67 ADC #8
    // Overlapping static entry reached from 0xC1E606.
    case 0xC1E608: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:68 CLC
    case 0xC1E609: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:69 ADC @VIRTUAL0A
    case 0xC1E60A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/text_input_dialog.asm:70 STA @VIRTUAL0A
    case 0xC1E60C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E60E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E60E.
    case 0xC1E610: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E611: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E613: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E614: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E616: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:71 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E618: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E61A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E61C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E61E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:72 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E620: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:73 JSL DISPLAY_TEXT
    case 0xC1E622: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:74 BRA @UNKNOWN3
    case 0xC1E626: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E628: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x00A6D3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E628.
    case 0xC1E62A: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E62B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E62A.
    case 0xC1E62C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E62D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E62D.
    case 0xC1E62F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:76 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E630: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/text_input_dialog.asm:77 LDA @LOCAL0B
    case 0xC1E632: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:78 ASL
    case 0xC1E634: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:79 ASL
    case 0xC1E635: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:80 CLC
    case 0xC1E636: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:81 ADC @VIRTUAL0A
    case 0xC1E637: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/text_input_dialog.asm:82 STA @VIRTUAL0A
    case 0xC1E639: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E63B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E63B.
    case 0xC1E63D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E63E: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E640: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E641: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E643: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:83 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E645: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E647: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E649: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E64B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:84 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E64D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:85 JSL DISPLAY_TEXT
    case 0xC1E64F: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E653: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:88 LDA #1
    case 0xC1E655: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/text_input_dialog.asm:89 STA CHARACTER_PADDING
    case 0xC1E657: cpu.execute_instruction<0x8D>(0x005E6D, 3); return true;
    // src/text/text_input_dialog.asm:89 STA CHARACTER_PADDING
    // Overlapping static entry reached from 0xC1E655.
    case 0xC1E658: cpu.execute_instruction<0x6D>(0x00225E, 3); return true;
    // src/text/text_input_dialog.asm:91 JSL SET_INSTANT_PRINTING
    case 0xC1E65A: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/text_input_dialog.asm:91 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E658.
    case 0xC1E65B: cpu.execute_instruction<0xD4>(0x0000E4, 2); return true;
    // src/text/text_input_dialog.asm:91 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E65B.
    case 0xC1E65D: cpu.execute_instruction<0xC3>(0x0000A5, 2); return true;
    // src/text/text_input_dialog.asm:92 LDA @LOCAL07
    case 0xC1E65E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/text_input_dialog.asm:92 LDA @LOCAL07
    // Overlapping static entry reached from 0xC1E65D.
    case 0xC1E65F: cpu.execute_instruction<0x1E>(0x0026C5, 3); return true;
    // src/text/text_input_dialog.asm:93 CMP @LOCAL0B
    case 0xC1E660: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:94 BEQL @UNKNOWN10
    case 0xC1E662: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:94 BEQL @UNKNOWN10
    case 0xC1E664: cpu.execute_instruction<0x4C>(0x00E71F, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:96 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E667: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/text_input_dialog.asm:96 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1E667.
    case 0xC1E669: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/text_input_dialog.asm:96 CREATE_WINDOW_NEAR #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1E66A: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/text/text_input_dialog.asm:97 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC1E66D: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/text/text_input_dialog.asm:99 LDA @LOCAL0C
    case 0xC1E671: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:100 CMP #.LOWORD(-1)
    case 0xC1E673: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:100 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E673.
    case 0xC1E675: cpu.execute_instruction<0xFF>(0xAF1AD0, 4); return true;
    // src/text/text_input_dialog.asm:101 BNE @UNKNOWN6
    case 0xC1E676: cpu.execute_instruction<0xD0>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E678: cpu.execute_instruction<0xAF>(0xEFA6E7, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E675.
    case 0xC1E679: cpu.execute_instruction<0xE7>(0x0000A6, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E679.
    case 0xC1E67B: cpu.execute_instruction<0xEF>(0xAF0685, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E67C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E67E: cpu.execute_instruction<0xAF>(0xEFA6E9, 4); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E67B.
    case 0xC1E67F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x0000A6, 2); else cpu.execute_instruction<0xE9>(0x00EFA6, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E67F.
    case 0xC1E681: cpu.execute_instruction<0xEF>(0xA50885, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:102 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+20, @VIRTUAL06
    case 0xC1E682: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E684: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E681.
    case 0xC1E685: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E686: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    // Overlapping static entry reached from 0xC1E685.
    case 0xC1E687: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E688: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:103 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E68A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:104 JSL DISPLAY_TEXT
    case 0xC1E68C: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:105 BRA @UNKNOWN7
    case 0xC1E690: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E692: cpu.execute_instruction<0xAF>(0xEFA6E3, 4); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E696: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E698: cpu.execute_instruction<0xAF>(0xEFA6E5, 4); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:107 MOVE_INT f:NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS+16, @VIRTUAL06
    case 0xC1E69C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E69E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6A0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6A2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:108 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6A4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:109 JSL DISPLAY_TEXT
    case 0xC1E6A6: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:111 LDA @LOCAL0B
    case 0xC1E6AA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:112 STA @LOCAL07
    case 0xC1E6AC: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/text_input_dialog.asm:113 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E6AE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:114 STZ CHARACTER_PADDING
    case 0xC1E6B0: cpu.execute_instruction<0x9C>(0x005E6D, 3); return true;
    // src/text/text_input_dialog.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC1E6B3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:116 LDA @LOCAL0C
    case 0xC1E6B5: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:117 CMP #.LOWORD(-1)
    case 0xC1E6B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:117 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E6B7.
    case 0xC1E6B9: cpu.execute_instruction<0xFF>(0xA931D0, 4); return true;
    // src/text/text_input_dialog.asm:118 BNE @UNKNOWN8
    case 0xC1E6BA: cpu.execute_instruction<0xD0>(0x000031, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x00A6D3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6B9.
    case 0xC1E6BD: cpu.execute_instruction<0xD3>(0x0000A6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6BC.
    case 0xC1E6BE: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6BF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6BE.
    case 0xC1E6C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6C1.
    case 0xC1E6C3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:119 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6C4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/text_input_dialog.asm:120 LDA @LOCAL0B
    case 0xC1E6C6: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog.asm:121 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog.asm:121 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:122 CLC
    case 0xC1E6CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:123 ADC #8
    case 0xC1E6CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/text/text_input_dialog.asm:123 ADC #8
    // Overlapping static entry reached from 0xC1E6CB.
    case 0xC1E6CD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:124 CLC
    case 0xC1E6CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:125 ADC @VIRTUAL0A
    case 0xC1E6CF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/text_input_dialog.asm:126 STA @VIRTUAL0A
    case 0xC1E6D1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E6D3.
    case 0xC1E6D5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D6: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6D9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:127 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E6DD: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6DF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6E1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6E3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:128 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E6E5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:129 JSL DISPLAY_TEXT
    case 0xC1E6E7: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:130 BRA @UNKNOWN9
    case 0xC1E6EB: cpu.execute_instruction<0x80>(0x00002B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x00A6D3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6ED.
    case 0xC1E6EF: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6F0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6EF.
    case 0xC1E6F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6F2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1E6F2.
    case 0xC1E6F4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:132 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC1E6F5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/text_input_dialog.asm:133 LDA @LOCAL0B
    case 0xC1E6F7: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/text/text_input_dialog.asm:134 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/text/text_input_dialog.asm:134 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC1E6FA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:135 CLC
    case 0xC1E6FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:136 ADC @VIRTUAL0A
    case 0xC1E6FC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/text_input_dialog.asm:137 STA @VIRTUAL0A
    case 0xC1E6FE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E700: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E700.
    case 0xC1E702: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E703: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E705: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E706: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E708: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/text_input_dialog.asm:138 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC1E70A: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E70C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E70E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E710: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:139 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E712: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:140 JSL DISPLAY_TEXT
    case 0xC1E714: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/text_input_dialog.asm:142 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E718: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:143 LDA #1
    case 0xC1E71A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/text_input_dialog.asm:144 STA CHARACTER_PADDING
    case 0xC1E71C: cpu.execute_instruction<0x8D>(0x005E6D, 3); return true;
    // src/text/text_input_dialog.asm:144 STA CHARACTER_PADDING
    // Overlapping static entry reached from 0xC1E71A.
    case 0xC1E71D: cpu.execute_instruction<0x6D>(0x00C25E, 3); return true;
    // src/text/text_input_dialog.asm:146 REP #PROC_FLAGS::ACCUM8
    case 0xC1E71F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:146 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC1E71D.
    case 0xC1E720: cpu.execute_instruction<0x20>(0x0058AD, 3); return true;
    // src/text/text_input_dialog.asm:147 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E721: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/text_input_dialog.asm:147 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1E80A.
    case 0xC1E722: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:147 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1E720.
    case 0xC1E723: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/text/text_input_dialog.asm:148 ASL
    case 0xC1E724: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:149 TAX
    case 0xC1E725: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:150 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E726: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/text_input_dialog.asm:151 LDY #.SIZEOF(window_stats)
    case 0xC1E729: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/text_input_dialog.asm:151 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E729.
    case 0xC1E72B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:152 JSL MULT168
    case 0xC1E72C: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/text_input_dialog.asm:153 CLC
    case 0xC1E730: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:154 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1E731: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/text_input_dialog.asm:154 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1E731.
    case 0xC1E733: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:155 STA @LOCAL06
    case 0xC1E734: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/text_input_dialog.asm:155 STA @LOCAL06
    // Overlapping static entry reached from 0xC1E733.
    case 0xC1E735: cpu.execute_instruction<0x1C>(0x00CA22, 3); return true;
    // src/text/text_input_dialog.asm:157 JSL CLEAR_INSTANT_PRINTING
    case 0xC1E736: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/text_input_dialog.asm:157 JSL CLEAR_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1E735.
    case 0xC1E738: cpu.execute_instruction<0xE4>(0x0000C3, 2); return true;
    // src/text/text_input_dialog.asm:158 LDX @LOCAL09
    case 0xC1E73A: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:159 LDA @LOCAL08
    case 0xC1E73C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:160 JSL UNKNOWN_C438A5
    case 0xC1E73E: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/text_input_dialog.asm:161 LDA #1
    case 0xC1E742: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:161 LDA #1
    // Overlapping static entry reached from 0xC1E742.
    case 0xC1E744: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:162 JSR UNKNOWN_C10FEA
    case 0xC1E745: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/text_input_dialog.asm:163 LDA #33
    case 0xC1E748: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/text/text_input_dialog.asm:163 LDA #33
    // Overlapping static entry reached from 0xC1E748.
    case 0xC1E74A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:164 JSR UNKNOWN_C10D60
    case 0xC1E74B: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/text/text_input_dialog.asm:165 LDA #0
    case 0xC1E74E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:165 LDA #0
    // Overlapping static entry reached from 0xC1E74E.
    case 0xC1E750: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:166 JSR UNKNOWN_C10FEA
    case 0xC1E751: cpu.execute_instruction<0x20>(0x000FEA, 3); return true;
    // src/text/text_input_dialog.asm:167 JSL WINDOW_TICK
    case 0xC1E754: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/text_input_dialog.asm:168 LDA #1
    case 0xC1E758: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:168 LDA #1
    // Overlapping static entry reached from 0xC1E758.
    case 0xC1E75A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:169 STA @VIRTUAL04
    case 0xC1E75B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/text_input_dialog.asm:171 LDA @VIRTUAL04
    case 0xC1E75D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/text_input_dialog.asm:172 EOR #$0001
    case 0xC1E75F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000001, 2); else cpu.execute_instruction<0x49>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:172 EOR #$0001
    // Overlapping static entry reached from 0xC1E75F.
    case 0xC1E761: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:173 STA @VIRTUAL04
    case 0xC1E762: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/text_input_dialog.asm:174 LDY #window_stats::text_y
    case 0xC1E764: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000010, 2); else cpu.execute_instruction<0xA0>(0x000010, 3); return true;
    // src/text/text_input_dialog.asm:174 LDY #window_stats::text_y
    // Overlapping static entry reached from 0xC1E764.
    case 0xC1E766: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog.asm:175 LDA (@LOCAL06),Y
    case 0xC1E767: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog.asm:176 ASL
    case 0xC1E769: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:177 LDY #window_stats::window_y
    case 0xC1E76A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/text_input_dialog.asm:177 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC1E76A.
    case 0xC1E76C: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:178 CLC
    case 0xC1E76D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:179 ADC (@LOCAL06),Y
    case 0xC1E76E: cpu.execute_instruction<0x71>(0x00001C, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E770: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E771: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E772: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E773: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/text_input_dialog.asm:180 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC1E774: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:181 STA @VIRTUAL02
    case 0xC1E775: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/text_input_dialog.asm:182 LDY #window_stats::window_x
    case 0xC1E777: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/text_input_dialog.asm:182 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC1E777.
    case 0xC1E779: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog.asm:183 LDA (@LOCAL06),Y
    case 0xC1E77A: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog.asm:184 LDY #window_stats::text_x
    case 0xC1E77C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000E, 2); else cpu.execute_instruction<0xA0>(0x00000E, 3); return true;
    // src/text/text_input_dialog.asm:184 LDY #window_stats::text_x
    // Overlapping static entry reached from 0xC1E77C.
    case 0xC1E77E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:185 CLC
    case 0xC1E77F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:186 ADC (@LOCAL06),Y
    case 0xC1E780: cpu.execute_instruction<0x71>(0x00001C, 2); return true;
    // src/text/text_input_dialog.asm:187 CLC
    case 0xC1E782: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:188 ADC @VIRTUAL02
    case 0xC1E783: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/text_input_dialog.asm:189 CLC
    case 0xC1E785: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    case 0xC1E786: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x007C20, 3); return true;
    // src/text/text_input_dialog.asm:190 ADC #VRAM::TEXT_LAYER_TILEMAP + TILEMAP_COORDS 0, 1
    // Overlapping static entry reached from 0xC1E786.
    case 0xC1E788: cpu.execute_instruction<0x7C>(0x001A85, 3); return true;
    // src/text/text_input_dialog.asm:191 STA @LOCAL05
    case 0xC1E789: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/text_input_dialog.asm:192 LDA @VIRTUAL04
    case 0xC1E78B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/text_input_dialog.asm:193 ASL
    case 0xC1E78D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:194 STA @VIRTUAL02
    case 0xC1E78E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E790: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x00E406, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E790.
    case 0xC1E792: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E793: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E792.
    case 0xC1E794: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E795: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E794.
    case 0xC1E796: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E795.
    case 0xC1E797: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:195 LOADPTR UNKNOWN_C3E406, @VIRTUAL06
    case 0xC1E798: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/text_input_dialog.asm:196 LDA @VIRTUAL02
    case 0xC1E79A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/text_input_dialog.asm:197 CLC
    case 0xC1E79C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:198 ADC @VIRTUAL06
    case 0xC1E79D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/text_input_dialog.asm:199 STA @VIRTUAL06
    case 0xC1E79F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/text_input_dialog.asm:200 STA @LOCAL00
    case 0xC1E7A1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:201 LDA @VIRTUAL06+2
    case 0xC1E7A3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/text_input_dialog.asm:202 STA @LOCAL00+2
    case 0xC1E7A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:203 LDY @LOCAL05
    case 0xC1E7A7: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/text/text_input_dialog.asm:204 LDX #2
    case 0xC1E7A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/text_input_dialog.asm:204 LDX #2
    // Overlapping static entry reached from 0xC1E7A9.
    case 0xC1E7AB: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/text_input_dialog.asm:205 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E7AC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:206 LDA #0
    case 0xC1E7AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/text_input_dialog.asm:207 JSL PREPARE_VRAM_COPY
    case 0xC1E7B0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/text_input_dialog.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7AE.
    case 0xC1E7B1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/text_input_dialog.asm:207 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7B1.
    case 0xC1E7B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x000AA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00E40A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B3.
    case 0xC1E7B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B4.
    case 0xC1E7B6: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B6.
    case 0xC1E7B8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B8.
    case 0xC1E7BA: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E7B9.
    case 0xC1E7BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/text_input_dialog.asm:209 LOADPTR UNKNOWN_C3E40A, @VIRTUAL06
    case 0xC1E7BC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/text_input_dialog.asm:210 LDA @VIRTUAL02
    case 0xC1E7BE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/text_input_dialog.asm:211 CLC
    case 0xC1E7C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:212 ADC @VIRTUAL06
    case 0xC1E7C1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/text_input_dialog.asm:213 STA @VIRTUAL06
    case 0xC1E7C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/text_input_dialog.asm:214 STA @LOCAL00
    case 0xC1E7C5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:215 LDA @VIRTUAL06+2
    case 0xC1E7C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/text_input_dialog.asm:216 STA @LOCAL00+2
    case 0xC1E7C9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:217 LDA @LOCAL05
    case 0xC1E7CB: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/text_input_dialog.asm:218 CLC
    case 0xC1E7CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:219 ADC #32
    case 0xC1E7CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/text/text_input_dialog.asm:219 ADC #32
    // Overlapping static entry reached from 0xC1E7CE.
    case 0xC1E7D0: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/text_input_dialog.asm:220 TAY
    case 0xC1E7D1: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:221 LDX #2
    case 0xC1E7D2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/text_input_dialog.asm:221 LDX #2
    // Overlapping static entry reached from 0xC1E7D2.
    case 0xC1E7D4: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/text_input_dialog.asm:222 SEP #PROC_FLAGS::ACCUM8
    case 0xC1E7D5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:223 LDA #0
    case 0xC1E7D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/text_input_dialog.asm:224 JSL PREPARE_VRAM_COPY
    case 0xC1E7D9: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/text_input_dialog.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7D7.
    case 0xC1E7DA: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/text_input_dialog.asm:224 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1E7DA.
    case 0xC1E7DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A2, 2); else cpu.execute_instruction<0xC0>(0x0000A2, 3); return true;
    // src/text/text_input_dialog.asm:226 LDX #0
    case 0xC1E7DD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:226 LDX #0
    // Overlapping static entry reached from 0xC1E7DC.
    case 0xC1E7DE: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/text_input_dialog.asm:226 LDX #0
    // Overlapping static entry reached from 0xC1E7DD.
    case 0xC1E7DF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/text_input_dialog.asm:227 STX @LOCAL04
    case 0xC1E7E0: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:228 JMP @UNKNOWN37
    case 0xC1E7E2: cpu.execute_instruction<0x4C>(0x00EA0C, 3); return true;
    // src/text/text_input_dialog.asm:230 JSL UNKNOWN_C1004E
    case 0xC1E7E5: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/text/text_input_dialog.asm:231 LDA PAD_PRESS
    case 0xC1E7E9: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:232 AND #PAD::UP
    case 0xC1E7EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/text_input_dialog.asm:232 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E7EC.
    case 0xC1E7EE: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:233 BEQ @UNKNOWN14
    case 0xC1E7EF: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/text_input_dialog.asm:234 STZ @LOCAL00
    case 0xC1E7F1: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:235 LDA #SFX::UNKNOWN7C
    case 0xC1E7F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog.asm:235 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E7F3.
    case 0xC1E7F5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:236 STA @LOCAL00+2
    case 0xC1E7F6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:237 LDA @LOCAL08
    case 0xC1E7F8: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:238 STA @LOCAL01
    case 0xC1E7FA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog.asm:239 LDY #window_stats::height
    case 0xC1E7FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/text/text_input_dialog.asm:239 LDY #window_stats::height
    // Overlapping static entry reached from 0xC1E7FC.
    case 0xC1E7FE: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog.asm:240 LDA (@LOCAL06),Y
    case 0xC1E7FF: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog.asm:241 LSR
    case 0xC1E801: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:242 STA @LOCAL02
    case 0xC1E802: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog.asm:243 LDY #.LOWORD(-1)
    case 0xC1E804: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:243 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E804.
    case 0xC1E806: cpu.execute_instruction<0xFF>(0xA522A6, 4); return true;
    // src/text/text_input_dialog.asm:244 LDX @LOCAL09
    case 0xC1E807: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:245 LDA @LOCAL08
    case 0xC1E809: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:245 LDA @LOCAL08
    // Overlapping static entry reached from 0xC1E806.
    case 0xC1E80A: cpu.execute_instruction<0x20>(0x00E722, 3); return true;
    // src/text/text_input_dialog.asm:246 JSL MOVE_CURSOR
    case 0xC1E80B: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/text_input_dialog.asm:246 JSL MOVE_CURSOR
    // Overlapping static entry reached from 0xC1E80A.
    case 0xC1E80D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:246 JSL MOVE_CURSOR
    // Overlapping static entry reached from 0xC1E80D.
    case 0xC1E80E: cpu.execute_instruction<0xC1>(0x0000A8, 2); return true;
    // src/text/text_input_dialog.asm:247 TAY
    case 0xC1E80F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:248 STY @LOCAL03
    case 0xC1E810: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:249 JMP @UNKNOWN40
    case 0xC1E812: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:251 LDA PAD_PRESS
    case 0xC1E815: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:252 AND #PAD::LEFT
    case 0xC1E818: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/text_input_dialog.asm:252 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E818.
    case 0xC1E81A: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:253 BEQ @UNKNOWN15
    case 0xC1E81B: cpu.execute_instruction<0xF0>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:254 LDA #.LOWORD(-1)
    case 0xC1E81D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:254 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E81D.
    case 0xC1E81F: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/text_input_dialog.asm:255 STA @LOCAL00
    case 0xC1E820: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:256 LDA #$007B
    case 0xC1E822: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog.asm:256 LDA #$007B
    // Overlapping static entry reached from 0xC1E81F.
    case 0xC1E823: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:256 LDA #$007B
    // Overlapping static entry reached from 0xC1E822.
    case 0xC1E824: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:257 STA @LOCAL00+2
    case 0xC1E825: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:258 LDY #window_stats::width
    case 0xC1E827: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/text_input_dialog.asm:258 LDY #window_stats::width
    // Overlapping static entry reached from 0xC1E827.
    case 0xC1E829: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/text_input_dialog.asm:259 LDA (@LOCAL06),Y
    case 0xC1E82A: cpu.execute_instruction<0xB1>(0x00001C, 2); return true;
    // src/text/text_input_dialog.asm:260 STA @LOCAL01
    case 0xC1E82C: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog.asm:261 LDA @LOCAL09
    case 0xC1E82E: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:262 STA @LOCAL02
    case 0xC1E830: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog.asm:263 LDY #0
    case 0xC1E832: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:263 LDY #0
    // Overlapping static entry reached from 0xC1E832.
    case 0xC1E834: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:264 LDX @LOCAL09
    case 0xC1E835: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:265 LDA @LOCAL08
    case 0xC1E837: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:266 JSL MOVE_CURSOR
    case 0xC1E839: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/text_input_dialog.asm:267 TAY
    case 0xC1E83D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:268 STY @LOCAL03
    case 0xC1E83E: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:269 JMP @UNKNOWN40
    case 0xC1E840: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:271 LDA PAD_PRESS
    case 0xC1E843: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:272 AND #PAD::DOWN
    case 0xC1E846: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/text_input_dialog.asm:272 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E846.
    case 0xC1E848: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:273 BEQ @UNKNOWN16
    case 0xC1E849: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/text/text_input_dialog.asm:273 BEQ @UNKNOWN16
    // Overlapping static entry reached from 0xC1E848.
    case 0xC1E84A: cpu.execute_instruction<0x21>(0x000064, 2); return true;
    // src/text/text_input_dialog.asm:274 STZ @LOCAL00
    case 0xC1E84B: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:274 STZ @LOCAL00
    // Overlapping static entry reached from 0xC1E84A.
    case 0xC1E84C: cpu.execute_instruction<0x0E>(0x007CA9, 3); return true;
    // src/text/text_input_dialog.asm:275 LDA #SFX::UNKNOWN7C
    case 0xC1E84D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog.asm:275 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E84D.
    case 0xC1E84F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:276 STA @LOCAL00+2
    case 0xC1E850: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:277 LDA @LOCAL08
    case 0xC1E852: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:278 STA @LOCAL01
    case 0xC1E854: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog.asm:279 LDA #.LOWORD(-1)
    case 0xC1E856: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:279 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E856.
    case 0xC1E858: cpu.execute_instruction<0xFF>(0xA01485, 4); return true;
    // src/text/text_input_dialog.asm:280 STA @LOCAL02
    case 0xC1E859: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog.asm:281 LDY #1
    case 0xC1E85B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:281 LDY #1
    // Overlapping static entry reached from 0xC1E858.
    case 0xC1E85C: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/text_input_dialog.asm:281 LDY #1
    // Overlapping static entry reached from 0xC1E85B.
    case 0xC1E85D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:282 LDX @LOCAL09
    case 0xC1E85E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:283 LDA @LOCAL08
    case 0xC1E860: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:284 JSL MOVE_CURSOR
    case 0xC1E862: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/text_input_dialog.asm:285 TAY
    case 0xC1E866: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:286 STY @LOCAL03
    case 0xC1E867: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:287 JMP @UNKNOWN40
    case 0xC1E869: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:289 LDA PAD_PRESS
    case 0xC1E86C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:290 AND #PAD::RIGHT
    case 0xC1E86F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/text_input_dialog.asm:290 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E86F.
    case 0xC1E871: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:291 BEQ @UNKNOWN17
    case 0xC1E872: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/text_input_dialog.asm:291 BEQ @UNKNOWN17
    // Overlapping static entry reached from 0xC1E871.
    case 0xC1E873: cpu.execute_instruction<0x24>(0x0000A9, 2); return true;
    // src/text/text_input_dialog.asm:292 LDA #1
    case 0xC1E874: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:292 LDA #1
    // Overlapping static entry reached from 0xC1E873.
    case 0xC1E875: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/text_input_dialog.asm:292 LDA #1
    // Overlapping static entry reached from 0xC1E874.
    case 0xC1E876: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:293 STA @LOCAL00
    case 0xC1E877: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:294 LDA #$007B
    case 0xC1E879: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog.asm:294 LDA #$007B
    // Overlapping static entry reached from 0xC1E879.
    case 0xC1E87B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:295 STA @LOCAL00+2
    case 0xC1E87C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:296 LDA #.LOWORD(-1)
    case 0xC1E87E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:296 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E87E.
    case 0xC1E880: cpu.execute_instruction<0xFF>(0xA51285, 4); return true;
    // src/text/text_input_dialog.asm:297 STA @LOCAL01
    case 0xC1E881: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/text_input_dialog.asm:298 LDA @LOCAL09
    case 0xC1E883: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:298 LDA @LOCAL09
    // Overlapping static entry reached from 0xC1E880.
    case 0xC1E884: cpu.execute_instruction<0x22>(0xA01485, 4); return true;
    // src/text/text_input_dialog.asm:299 STA @LOCAL02
    case 0xC1E885: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/text_input_dialog.asm:300 LDY #0
    case 0xC1E887: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:300 LDY #0
    // Overlapping static entry reached from 0xC1E884.
    case 0xC1E888: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/text_input_dialog.asm:300 LDY #0
    // Overlapping static entry reached from 0xC1E887.
    case 0xC1E889: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:301 LDX @LOCAL09
    case 0xC1E88A: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:302 LDA @LOCAL08
    case 0xC1E88C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:303 JSL MOVE_CURSOR
    case 0xC1E88E: cpu.execute_instruction<0x22>(0xC118E7, 4); return true;
    // src/text/text_input_dialog.asm:304 TAY
    case 0xC1E892: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:305 STY @LOCAL03
    case 0xC1E893: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:306 JMP @UNKNOWN40
    case 0xC1E895: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:308 LDA PAD_HELD
    case 0xC1E898: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog.asm:309 AND #PAD::UP
    case 0xC1E89B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/text_input_dialog.asm:309 AND #PAD::UP
    // Overlapping static entry reached from 0xC1E89B.
    case 0xC1E89D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:310 BEQ @UNKNOWN18
    case 0xC1E89E: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:311 STZ @LOCAL00
    case 0xC1E8A0: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:312 LDA #SFX::UNKNOWN7C
    case 0xC1E8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog.asm:312 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E8A2.
    case 0xC1E8A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:313 STA @LOCAL00+2
    case 0xC1E8A5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:314 LDY #.LOWORD(-1)
    case 0xC1E8A7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:314 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E8A7.
    case 0xC1E8A9: cpu.execute_instruction<0xFF>(0xA522A6, 4); return true;
    // src/text/text_input_dialog.asm:315 LDX @LOCAL09
    case 0xC1E8AA: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:316 LDA @LOCAL08
    case 0xC1E8AC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:316 LDA @LOCAL08
    // Overlapping static entry reached from 0xC1E8A9.
    case 0xC1E8AD: cpu.execute_instruction<0x20>(0x006522, 3); return true;
    // src/text/text_input_dialog.asm:317 JSL UNKNOWN_C20B65
    case 0xC1E8AE: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/text_input_dialog.asm:317 JSL UNKNOWN_C20B65
    // Overlapping static entry reached from 0xC1E8AD.
    case 0xC1E8B0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:317 JSL UNKNOWN_C20B65
    // Overlapping static entry reached from 0xC1E8B0.
    case 0xC1E8B1: cpu.execute_instruction<0xC2>(0x0000A8, 2); return true;
    // src/text/text_input_dialog.asm:318 TAY
    case 0xC1E8B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:319 STY @LOCAL03
    case 0xC1E8B3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:320 JMP @UNKNOWN40
    case 0xC1E8B5: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:322 LDA PAD_HELD
    case 0xC1E8B8: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog.asm:323 AND #PAD::DOWN
    case 0xC1E8BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/text_input_dialog.asm:323 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1E8BB.
    case 0xC1E8BD: cpu.execute_instruction<0x04>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:324 BEQ @UNKNOWN19
    case 0xC1E8BE: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:324 BEQ @UNKNOWN19
    // Overlapping static entry reached from 0xC1E8BD.
    case 0xC1E8BF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:325 STZ @LOCAL00
    case 0xC1E8C0: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:326 LDA #SFX::UNKNOWN7C
    case 0xC1E8C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007C, 2); else cpu.execute_instruction<0xA9>(0x00007C, 3); return true;
    // src/text/text_input_dialog.asm:326 LDA #SFX::UNKNOWN7C
    // Overlapping static entry reached from 0xC1E8C2.
    case 0xC1E8C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:327 STA @LOCAL00+2
    case 0xC1E8C5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:328 LDY #1
    case 0xC1E8C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:328 LDY #1
    // Overlapping static entry reached from 0xC1E8C7.
    case 0xC1E8C9: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:329 LDX @LOCAL09
    case 0xC1E8CA: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:330 LDA @LOCAL08
    case 0xC1E8CC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:331 JSL UNKNOWN_C20B65
    case 0xC1E8CE: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/text_input_dialog.asm:332 TAY
    case 0xC1E8D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:333 STY @LOCAL03
    case 0xC1E8D3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:334 JMP @UNKNOWN40
    case 0xC1E8D5: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:336 LDA PAD_HELD
    case 0xC1E8D8: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog.asm:337 AND #PAD::LEFT
    case 0xC1E8DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/text_input_dialog.asm:337 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1E8DB.
    case 0xC1E8DD: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:338 BEQ @UNKNOWN20
    case 0xC1E8DE: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/text_input_dialog.asm:339 LDA #.LOWORD(-1)
    case 0xC1E8E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:339 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E8E0.
    case 0xC1E8E2: cpu.execute_instruction<0xFF>(0xA90E85, 4); return true;
    // src/text/text_input_dialog.asm:340 STA @LOCAL00
    case 0xC1E8E3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:341 LDA #$007B
    case 0xC1E8E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog.asm:341 LDA #$007B
    // Overlapping static entry reached from 0xC1E8E2.
    case 0xC1E8E6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:341 LDA #$007B
    // Overlapping static entry reached from 0xC1E8E5.
    case 0xC1E8E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:342 STA @LOCAL00+2
    case 0xC1E8E8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:343 LDY #0
    case 0xC1E8EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:343 LDY #0
    // Overlapping static entry reached from 0xC1E8EA.
    case 0xC1E8EC: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:344 LDX @LOCAL09
    case 0xC1E8ED: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:345 LDA @LOCAL08
    case 0xC1E8EF: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:346 JSL UNKNOWN_C20B65
    case 0xC1E8F1: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/text_input_dialog.asm:347 TAY
    case 0xC1E8F5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:348 STY @LOCAL03
    case 0xC1E8F6: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:349 JMP @UNKNOWN40
    case 0xC1E8F8: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:351 LDA PAD_HELD
    case 0xC1E8FB: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/text_input_dialog.asm:352 AND #PAD::RIGHT
    case 0xC1E8FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/text_input_dialog.asm:352 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1E8FE.
    case 0xC1E900: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:353 BEQ @UNKNOWN21
    case 0xC1E901: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/text_input_dialog.asm:353 BEQ @UNKNOWN21
    // Overlapping static entry reached from 0xC1E900.
    case 0xC1E902: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:354 LDA #1
    case 0xC1E903: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:354 LDA #1
    // Overlapping static entry reached from 0xC1E903.
    case 0xC1E905: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:355 STA @LOCAL00
    case 0xC1E906: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/text_input_dialog.asm:356 LDA #$007B
    case 0xC1E908: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007B, 2); else cpu.execute_instruction<0xA9>(0x00007B, 3); return true;
    // src/text/text_input_dialog.asm:356 LDA #$007B
    // Overlapping static entry reached from 0xC1E908.
    case 0xC1E90A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:357 STA @LOCAL00+2
    case 0xC1E90B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:358 LDY #0
    case 0xC1E90D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:358 LDY #0
    // Overlapping static entry reached from 0xC1E90D.
    case 0xC1E90F: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:359 LDX @LOCAL09
    case 0xC1E910: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:360 LDA @LOCAL08
    case 0xC1E912: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:361 JSL UNKNOWN_C20B65
    case 0xC1E914: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/text_input_dialog.asm:362 TAY
    case 0xC1E918: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:363 STY @LOCAL03
    case 0xC1E919: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:364 JMP @UNKNOWN40
    case 0xC1E91B: cpu.execute_instruction<0x4C>(0x00EA23, 3); return true;
    // src/text/text_input_dialog.asm:366 LDA PAD_PRESS
    case 0xC1E91E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:367 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1E921: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/text_input_dialog.asm:367 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1E921.
    case 0xC1E923: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:368 BEQL @UNKNOWN32
    case 0xC1E924: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:368 BEQL @UNKNOWN32
    case 0xC1E926: cpu.execute_instruction<0x4C>(0x00E9C5, 3); return true;
    // src/text/text_input_dialog.asm:369 LDA @LOCAL09
    case 0xC1E929: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:370 CMP #6
    case 0xC1E92B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/text_input_dialog.asm:370 CMP #6
    // Overlapping static entry reached from 0xC1E92B.
    case 0xC1E92D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/text_input_dialog.asm:371 BNE @SELECTION_NOT_IN_LINE_6
    case 0xC1E92E: cpu.execute_instruction<0xD0>(0x000059, 2); return true;
    // src/text/text_input_dialog.asm:372 LDA @LOCAL08
    case 0xC1E930: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:373 BEQ @DONTCARE_SELECTED
    case 0xC1E932: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/text/text_input_dialog.asm:374 CMP #17
    case 0xC1E934: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/text_input_dialog.asm:374 CMP #17
    // Overlapping static entry reached from 0xC1E934.
    case 0xC1E936: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:375 BEQ @BACKSPACE_SELECTED
    case 0xC1E937: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/text/text_input_dialog.asm:376 CMP #25
    case 0xC1E939: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/text_input_dialog.asm:376 CMP #25
    // Overlapping static entry reached from 0xC1E939.
    case 0xC1E93B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:377 BEQ @OK_SELECTED
    case 0xC1E93C: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/text/text_input_dialog.asm:378 JMP @UNKNOWN36
    case 0xC1E93E: cpu.execute_instruction<0x4C>(0x00EA07, 3); return true;
    // src/text/text_input_dialog.asm:380 LDA #SFX::TEXT_INPUT
    case 0xC1E941: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00007A, 3); return true;
    // src/text/text_input_dialog.asm:380 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E941.
    case 0xC1E943: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:381 JSL PLAY_SOUND
    case 0xC1E944: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/text_input_dialog.asm:382 LDY @LOCAL0A
    case 0xC1E948: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/text/text_input_dialog.asm:383 LDX @LOCAL0C
    case 0xC1E94A: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:384 LDA @LOCAL0D
    case 0xC1E94C: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/text/text_input_dialog.asm:385 JSR UNKNOWN_C1E4BE
    case 0xC1E94E: cpu.execute_instruction<0x20>(0x00E4BE, 3); return true;
    // src/text/text_input_dialog.asm:386 STA @LOCAL0A
    case 0xC1E951: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/text_input_dialog.asm:387 JMP @UNKNOWN11
    case 0xC1E953: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // src/text/text_input_dialog.asm:389 LDA #SFX::TEXT_INPUT
    case 0xC1E956: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00007A, 3); return true;
    // src/text/text_input_dialog.asm:389 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E956.
    case 0xC1E958: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:390 JSL PLAY_SOUND
    case 0xC1E959: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/text_input_dialog.asm:391 LDY #.LOWORD(-1)
    case 0xC1E95D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:391 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E95D.
    case 0xC1E95F: cpu.execute_instruction<0xFF>(0xA52CA6, 4); return true;
    // src/text/text_input_dialog.asm:392 LDX @LOCAL0E
    case 0xC1E960: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/text/text_input_dialog.asm:393 LDA @LOCAL0D
    case 0xC1E962: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/text/text_input_dialog.asm:393 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC1E95F.
    case 0xC1E963: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:394 JSR UNKNOWN_C1E48D
    case 0xC1E964: cpu.execute_instruction<0x20>(0x00E48D, 3); return true;
    // src/text/text_input_dialog.asm:395 CMP #0
    case 0xC1E967: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:395 CMP #0
    // Overlapping static entry reached from 0xC1E967.
    case 0xC1E969: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:396 BEQL @UNKNOWN11
    case 0xC1E96A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:396 BEQL @UNKNOWN11
    case 0xC1E96C: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // src/text/text_input_dialog.asm:397 LDA @LOCAL0C
    case 0xC1E96F: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:398 CMP #.LOWORD(-1)
    case 0xC1E971: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:398 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E971.
    case 0xC1E973: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:399 BEQL @UNKNOWN11
    case 0xC1E974: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:399 BEQL @UNKNOWN11
    case 0xC1E976: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:399 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1E973.
    case 0xC1E977: cpu.execute_instruction<0x36>(0x0000E7, 2); return true;
    // src/text/text_input_dialog.asm:400 LDA #1
    case 0xC1E979: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:400 LDA #1
    // Overlapping static entry reached from 0xC1E979.
    case 0xC1E97B: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/text_input_dialog.asm:401 JMP @UNKNOWN48
    case 0xC1E97C: cpu.execute_instruction<0x4C>(0x00EAA4, 3); return true;
    // src/text/text_input_dialog.asm:403 LDA #SFX::UNKNOWN5E
    case 0xC1E97F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005E, 2); else cpu.execute_instruction<0xA9>(0x00005E, 3); return true;
    // src/text/text_input_dialog.asm:403 LDA #SFX::UNKNOWN5E
    // Overlapping static entry reached from 0xC1E97F.
    case 0xC1E981: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:404 JSL PLAY_SOUND
    case 0xC1E982: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/text_input_dialog.asm:405 JMP @UNKNOWN42
    case 0xC1E986: cpu.execute_instruction<0x4C>(0x00EA4E, 3); return true;
    // src/text/text_input_dialog.asm:407 LDA #SFX::TEXT_INPUT
    case 0xC1E989: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x00007A, 3); return true;
    // src/text/text_input_dialog.asm:407 LDA #SFX::TEXT_INPUT
    // Overlapping static entry reached from 0xC1E989.
    case 0xC1E98B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:408 JSL PLAY_SOUND
    case 0xC1E98C: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/text_input_dialog.asm:409 LDA @LOCAL09
    case 0xC1E990: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:410 CMP #4
    case 0xC1E992: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/text_input_dialog.asm:410 CMP #4
    // Overlapping static entry reached from 0xC1E992.
    case 0xC1E994: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/text_input_dialog.asm:411 BNE @UNKNOWN31
    case 0xC1E995: cpu.execute_instruction<0xD0>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:412 LDA @LOCAL08
    case 0xC1E997: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:413 BEQ @UNKNOWN29
    case 0xC1E999: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/text_input_dialog.asm:414 CMP #7
    case 0xC1E99B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/text_input_dialog.asm:414 CMP #7
    // Overlapping static entry reached from 0xC1E99B.
    case 0xC1E99D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:415 BEQ @UNKNOWN30
    case 0xC1E99E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/text_input_dialog.asm:416 BRA @UNKNOWN31
    case 0xC1E9A0: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/text_input_dialog.asm:418 STZ @LOCAL0B
    case 0xC1E9A2: cpu.execute_instruction<0x64>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:419 JMP @UNKNOWN4
    case 0xC1E9A4: cpu.execute_instruction<0x4C>(0x00E65A, 3); return true;
    // src/text/text_input_dialog.asm:421 LDA #1
    case 0xC1E9A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:421 LDA #1
    // Overlapping static entry reached from 0xC1E9A7.
    case 0xC1E9A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:422 STA @LOCAL0B
    case 0xC1E9AA: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:423 JMP @UNKNOWN4
    case 0xC1E9AC: cpu.execute_instruction<0x4C>(0x00E65A, 3); return true;
    // src/text/text_input_dialog.asm:425 LDY @LOCAL0B
    case 0xC1E9AF: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/text/text_input_dialog.asm:426 LDX @LOCAL09
    case 0xC1E9B1: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:427 LDA @LOCAL08
    case 0xC1E9B3: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:428 LSR
    case 0xC1E9B5: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:429 JSL GET_CHARACTER_AT_CURSOR_POSITION
    case 0xC1E9B6: cpu.execute_instruction<0x22>(0xC4406A, 4); return true;
    // src/text/text_input_dialog.asm:430 TAY
    case 0xC1E9BA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:431 LDX @LOCAL0E
    case 0xC1E9BB: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/text/text_input_dialog.asm:432 LDA @LOCAL0D
    case 0xC1E9BD: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/text/text_input_dialog.asm:433 JSR UNKNOWN_C1E48D
    case 0xC1E9BF: cpu.execute_instruction<0x20>(0x00E48D, 3); return true;
    // src/text/text_input_dialog.asm:434 JMP @UNKNOWN11
    case 0xC1E9C2: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // src/text/text_input_dialog.asm:436 LDA PAD_PRESS
    case 0xC1E9C5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:437 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC1E9C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/text_input_dialog.asm:437 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC1E9C8.
    case 0xC1E9CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0029F0, 3); return true;
    // src/text/text_input_dialog.asm:438 BEQ @UNKNOWN35
    case 0xC1E9CB: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/text/text_input_dialog.asm:438 BEQ @UNKNOWN35
    // Overlapping static entry reached from 0xC1E9CA.
    case 0xC1E9CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A9, 2); else cpu.execute_instruction<0x29>(0x007DA9, 3); return true;
    // src/text/text_input_dialog.asm:439 LDA #SFX::UNKNOWN7D
    case 0xC1E9CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00007D, 3); return true;
    // src/text/text_input_dialog.asm:439 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E9CC.
    case 0xC1E9CE: cpu.execute_instruction<0x7D>(0x002200, 3); return true;
    // src/text/text_input_dialog.asm:439 LDA #SFX::UNKNOWN7D
    // Overlapping static entry reached from 0xC1E9CD.
    case 0xC1E9CF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:440 JSL PLAY_SOUND
    case 0xC1E9D0: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/text_input_dialog.asm:440 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E9CE.
    case 0xC1E9D1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AB, 2); else cpu.execute_instruction<0xE0>(0x00C0AB, 3); return true;
    // src/text/text_input_dialog.asm:440 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E9D1.
    case 0xC1E9D3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A0, 2); else cpu.execute_instruction<0xC0>(0x00FFA0, 3); return true;
    // src/text/text_input_dialog.asm:441 LDY #.LOWORD(-1)
    case 0xC1E9D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FF, 2); else cpu.execute_instruction<0xA0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:441 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9D3.
    case 0xC1E9D5: cpu.execute_instruction<0xFF>(0x2CA6FF, 4); return true;
    // src/text/text_input_dialog.asm:441 LDY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9D4.
    case 0xC1E9D6: cpu.execute_instruction<0xFF>(0xA52CA6, 4); return true;
    // src/text/text_input_dialog.asm:442 LDX @LOCAL0E
    case 0xC1E9D7: cpu.execute_instruction<0xA6>(0x00002C, 2); return true;
    // src/text/text_input_dialog.asm:443 LDA @LOCAL0D
    case 0xC1E9D9: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/text/text_input_dialog.asm:443 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC1E9D6.
    case 0xC1E9DA: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:444 JSR UNKNOWN_C1E48D
    case 0xC1E9DB: cpu.execute_instruction<0x20>(0x00E48D, 3); return true;
    // src/text/text_input_dialog.asm:445 CMP #0
    case 0xC1E9DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:445 CMP #0
    // Overlapping static entry reached from 0xC1E9DE.
    case 0xC1E9E0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:446 BEQL @UNKNOWN11
    case 0xC1E9E1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:446 BEQL @UNKNOWN11
    case 0xC1E9E3: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // src/text/text_input_dialog.asm:447 LDA @LOCAL0C
    case 0xC1E9E6: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/text/text_input_dialog.asm:448 CMP #.LOWORD(-1)
    case 0xC1E9E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:448 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9E8.
    case 0xC1E9EA: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:449 BEQL @UNKNOWN11
    case 0xC1E9EB: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:449 BEQL @UNKNOWN11
    case 0xC1E9ED: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:449 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1E9EA.
    case 0xC1E9EE: cpu.execute_instruction<0x36>(0x0000E7, 2); return true;
    // src/text/text_input_dialog.asm:450 LDA #1
    case 0xC1E9F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/text_input_dialog.asm:450 LDA #1
    // Overlapping static entry reached from 0xC1E9F0.
    case 0xC1E9F2: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/text/text_input_dialog.asm:451 JMP @UNKNOWN48
    case 0xC1E9F3: cpu.execute_instruction<0x4C>(0x00EAA4, 3); return true;
    // src/text/text_input_dialog.asm:453 LDA PAD_PRESS
    case 0xC1E9F6: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/text_input_dialog.asm:454 AND #PAD::START_BUTTON
    case 0xC1E9F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x001000, 3); return true;
    // src/text/text_input_dialog.asm:454 AND #PAD::START_BUTTON
    // Overlapping static entry reached from 0xC1E9F9.
    case 0xC1E9FB: cpu.execute_instruction<0x10>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:455 BEQ @UNKNOWN36
    case 0xC1E9FC: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/text_input_dialog.asm:455 BEQ @UNKNOWN36
    // Overlapping static entry reached from 0xC1E9FB.
    case 0xC1E9FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A9, 2); else cpu.execute_instruction<0x09>(0x007EA9, 3); return true;
    // src/text/text_input_dialog.asm:456 LDA #SFX::UNKNOWN7E
    case 0xC1E9FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/text_input_dialog.asm:456 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E9FD.
    case 0xC1E9FF: cpu.execute_instruction<0x7E>(0x002200, 3); return true;
    // src/text/text_input_dialog.asm:456 LDA #SFX::UNKNOWN7E
    // Overlapping static entry reached from 0xC1E9FE.
    case 0xC1EA00: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:457 JSL PLAY_SOUND
    case 0xC1EA01: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/text_input_dialog.asm:457 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1E9FF.
    case 0xC1EA02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AB, 2); else cpu.execute_instruction<0xE0>(0x00C0AB, 3); return true;
    // src/text/text_input_dialog.asm:457 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC1EA02.
    case 0xC1EA04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x004780, 3); return true;
    // src/text/text_input_dialog.asm:458 BRA @UNKNOWN42
    case 0xC1EA05: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/text/text_input_dialog.asm:458 BRA @UNKNOWN42
    // Overlapping static entry reached from 0xC1EA04.
    case 0xC1EA06: cpu.execute_instruction<0x47>(0x0000A6, 2); return true;
    // src/text/text_input_dialog.asm:460 LDX @LOCAL04
    case 0xC1EA07: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:460 LDX @LOCAL04
    // Overlapping static entry reached from 0xC1EA06.
    case 0xC1EA08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:461 INX
    case 0xC1EA09: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:462 STX @LOCAL04
    case 0xC1EA0A: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:464 STX @VIRTUAL02
    case 0xC1EA0C: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/text_input_dialog.asm:465 LDA #10
    case 0xC1EA0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/text_input_dialog.asm:465 LDA #10
    // Overlapping static entry reached from 0xC1EA0E.
    case 0xC1EA10: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/text_input_dialog.asm:466 CLC
    case 0xC1EA11: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:467 SBC @VIRTUAL02
    case 0xC1EA12: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA14: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA16: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA18: cpu.execute_instruction<0x4C>(0x00E7E5, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA1B: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:468 JUMPGTS @UNKNOWN13
    case 0xC1EA1D: cpu.execute_instruction<0x4C>(0x00E7E5, 3); return true;
    // src/text/text_input_dialog.asm:469 JMP @UNKNOWN12
    case 0xC1EA20: cpu.execute_instruction<0x4C>(0x00E75D, 3); return true;
    // src/text/text_input_dialog.asm:471 LDX @LOCAL09
    case 0xC1EA23: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:472 LDA @LOCAL08
    case 0xC1EA25: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:473 JSL UNKNOWN_C438A5
    case 0xC1EA27: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/text_input_dialog.asm:474 LDA #47
    case 0xC1EA2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/text_input_dialog.asm:474 LDA #47
    // Overlapping static entry reached from 0xC1EA2B.
    case 0xC1EA2D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:475 JSR UNKNOWN_C10D60
    case 0xC1EA2E: cpu.execute_instruction<0x20>(0x000D60, 3); return true;
    // src/text/text_input_dialog.asm:476 LDY @LOCAL03
    case 0xC1EA31: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/text_input_dialog.asm:477 CPY #.LOWORD(-1)
    case 0xC1EA33: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/text/text_input_dialog.asm:477 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EA33.
    case 0xC1EA35: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:478 BEQL @UNKNOWN11
    case 0xC1EA36: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:478 BEQL @UNKNOWN11
    case 0xC1EA38: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:478 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1EA35.
    case 0xC1EA39: cpu.execute_instruction<0x36>(0x0000E7, 2); return true;
    // src/text/text_input_dialog.asm:479 TYA
    case 0xC1EA3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:480 AND #$00FF
    case 0xC1EA3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/text_input_dialog.asm:480 AND #$00FF
    // Overlapping static entry reached from 0xC1EA3C.
    case 0xC1EA3E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:481 STA @LOCAL08
    case 0xC1EA3F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:482 TYA
    case 0xC1EA41: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:483 AND #$FF00
    case 0xC1EA42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/text/text_input_dialog.asm:483 AND #$FF00
    // Overlapping static entry reached from 0xC1EA42.
    case 0xC1EA44: cpu.execute_instruction<0xFF>(0xFF29EB, 4); return true;
    // src/text/text_input_dialog.asm:484 XBA
    case 0xC1EA45: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:485 AND #$00FF
    case 0xC1EA46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/text_input_dialog.asm:485 AND #$00FF
    // Overlapping static entry reached from 0xC1EA46.
    case 0xC1EA48: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/text_input_dialog.asm:486 STA @LOCAL09
    case 0xC1EA49: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/text_input_dialog.asm:487 JMP @UNKNOWN11
    case 0xC1EA4B: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000086, 2); else cpu.execute_instruction<0xA9>(0x001B86, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EA4E.
    case 0xC1EA50: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA51: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA53: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA56: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/text_input_dialog.asm:489 PROMOTENEARPTR $1B86, @VIRTUAL06
    case 0xC1EA59: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/text_input_dialog.asm:490 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA5B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA5D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA5F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA61: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/text_input_dialog.asm:491 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA63: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/text_input_dialog.asm:492 JSL STRLEN
    case 0xC1EA65: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // src/text/text_input_dialog.asm:493 CMP #0
    case 0xC1EA69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:493 CMP #0
    // Overlapping static entry reached from 0xC1EA69.
    case 0xC1EA6B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/text_input_dialog.asm:494 BEQL @UNKNOWN11
    case 0xC1EA6C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/text_input_dialog.asm:494 BEQL @UNKNOWN11
    case 0xC1EA6E: cpu.execute_instruction<0x4C>(0x00E736, 3); return true;
    // src/text/text_input_dialog.asm:495 LDA @LOCAL0D
    case 0xC1EA71: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // src/text/text_input_dialog.asm:496 JSR SET_WINDOW_FOCUS
    case 0xC1EA73: cpu.execute_instruction<0x20>(0x00007E, 3); return true;
    // src/text/text_input_dialog.asm:497 LDX #0
    case 0xC1EA76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:497 LDX #0
    // Overlapping static entry reached from 0xC1EA76.
    case 0xC1EA78: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/text_input_dialog.asm:498 BRA @UNKNOWN45
    case 0xC1EA79: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/text_input_dialog.asm:500 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EA7B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:501 STA (@LOCAL0F)
    case 0xC1EA7D: cpu.execute_instruction<0x92>(0x00002E, 2); return true;
    // src/text/text_input_dialog.asm:502 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA7F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:503 INC @LOCAL0F
    case 0xC1EA81: cpu.execute_instruction<0xE6>(0x00002E, 2); return true;
    // src/text/text_input_dialog.asm:504 INX
    case 0xC1EA83: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:506 LDA KEYBOARD_INPUT_CHARACTERS,X
    case 0xC1EA84: cpu.execute_instruction<0xBD>(0x001B86, 3); return true;
    // src/text/text_input_dialog.asm:507 AND #$00FF
    case 0xC1EA87: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/text_input_dialog.asm:507 AND #$00FF
    // Overlapping static entry reached from 0xC1EA87.
    case 0xC1EA89: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/text_input_dialog.asm:508 BEQ @UNKNOWN47
    case 0xC1EA8A: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/text_input_dialog.asm:509 CPX @LOCAL0E
    case 0xC1EA8C: cpu.execute_instruction<0xE4>(0x00002C, 2); return true;
    // src/text/text_input_dialog.asm:510 BCC @UNKNOWN44
    case 0xC1EA8E: cpu.execute_instruction<0x90>(0x0000EB, 2); return true;
    // src/text/text_input_dialog.asm:511 BRA @UNKNOWN47
    case 0xC1EA90: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/text_input_dialog.asm:513 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EA92: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:514 LDA #0
    case 0xC1EA94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009200, 3); return true;
    // src/text/text_input_dialog.asm:515 STA (@LOCAL0F)
    case 0xC1EA96: cpu.execute_instruction<0x92>(0x00002E, 2); return true;
    // src/text/text_input_dialog.asm:515 STA (@LOCAL0F)
    // Overlapping static entry reached from 0xC1EA94.
    case 0xC1EA97: cpu.execute_instruction<0x2E>(0x0020C2, 3); return true;
    // src/text/text_input_dialog.asm:516 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA98: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/text_input_dialog.asm:517 INC @LOCAL0F
    case 0xC1EA9A: cpu.execute_instruction<0xE6>(0x00002E, 2); return true;
    // src/text/text_input_dialog.asm:518 INX
    case 0xC1EA9C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/text_input_dialog.asm:520 CPX @LOCAL0E
    case 0xC1EA9D: cpu.execute_instruction<0xE4>(0x00002C, 2); return true;
    // src/text/text_input_dialog.asm:521 BCC @UNKNOWN46
    case 0xC1EA9F: cpu.execute_instruction<0x90>(0x0000F1, 2); return true;
    // src/text/text_input_dialog.asm:522 LDA #0
    case 0xC1EAA1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/text_input_dialog.asm:522 LDA #0
    // Overlapping static entry reached from 0xC1EAA1.
    case 0xC1EAA3: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/text_input_dialog.asm:524 END_C_FUNCTION
    case 0xC1EAA4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/text_input_dialog.asm:524 END_C_FUNCTION
    case 0xC1EAA5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/transfer_active_mem_storage.asm (source_named).
bool execute_text_transfer_active_mem_storage_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/transfer_active_mem_storage.asm:3 BEGIN_C_FUNCTION
    case 0xC10324: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10326: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10327: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC10328: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10328.
    case 0xC1032A: cpu.execute_instruction<0xFF>(0x01205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/transfer_active_mem_storage.asm:6 END_STACK_VARS
    case 0xC1032B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1032C: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/transfer_active_mem_storage.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC1032A.
    case 0xC1032E: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/text/transfer_active_mem_storage.asm:8 STA @LOCAL00
    case 0xC1032F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1032E.
    case 0xC10330: cpu.execute_instruction<0x0E>(0x006918, 3); return true;
    // src/text/transfer_active_mem_storage.asm:9 CLC
    case 0xC10331: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    case 0xC10332: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10330.
    case 0xC10333: cpu.execute_instruction<0x17>(0x000000, 2); return true;
    // src/text/transfer_active_mem_storage.asm:10 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10332.
    case 0xC10334: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:11 TAY
    case 0xC10335: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10336: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10339: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1033B: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1033E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_active_mem_storage.asm:13 LDA @LOCAL00
    case 0xC10340: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:14 CLC
    case 0xC10342: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:15 ADC #window_stats::working_memory_storage
    case 0xC10343: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/transfer_active_mem_storage.asm:15 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC10343.
    case 0xC10345: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:16 TAY
    case 0xC10346: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10347: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10349: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1034C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1034E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_active_mem_storage.asm:18 LDA @LOCAL00
    case 0xC10351: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:19 CLC
    case 0xC10353: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:20 ADC #window_stats::argument_memory
    case 0xC10354: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/transfer_active_mem_storage.asm:20 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10354.
    case 0xC10356: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:21 TAY
    case 0xC10357: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10358: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1035B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1035D: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10360: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_active_mem_storage.asm:23 LDA @LOCAL00
    case 0xC10362: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:24 CLC
    case 0xC10364: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:25 ADC #window_stats::argument_memory_storage
    case 0xC10365: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/transfer_active_mem_storage.asm:25 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC10365.
    case 0xC10367: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_active_mem_storage.asm:26 TAY
    case 0xC10368: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10369: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1036B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1036E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_active_mem_storage.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10370: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_active_mem_storage.asm:28 LDA @LOCAL00
    case 0xC10373: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_active_mem_storage.asm:29 PHA
    case 0xC10375: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:30 TAX
    case 0xC10376: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:31 LDA a:window_stats::secondary_memory,X
    case 0xC10377: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/text/transfer_active_mem_storage.asm:32 PLX
    case 0xC1037A: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/transfer_active_mem_storage.asm:33 STA a:window_stats::secondary_memory_storage,X
    case 0xC1037B: cpu.execute_instruction<0x9D>(0x000029, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/transfer_active_mem_storage.asm:34 END_C_FUNCTION
    case 0xC1037E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/transfer_active_mem_storage.asm:34 END_C_FUNCTION
    case 0xC1037F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/transfer_storage_mem_active.asm (source_named).
bool execute_text_transfer_storage_mem_active_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/transfer_storage_mem_active.asm:3 BEGIN_C_FUNCTION
    case 0xC10380: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10382: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10383: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10384: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10384.
    case 0xC10386: cpu.execute_instruction<0xFF>(0x01205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/transfer_storage_mem_active.asm:6 END_STACK_VARS
    case 0xC10387: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10388: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/transfer_storage_mem_active.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC10386.
    case 0xC1038A: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/text/transfer_storage_mem_active.asm:8 STA @LOCAL00
    case 0xC1038B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC1038A.
    case 0xC1038C: cpu.execute_instruction<0x0E>(0x006918, 3); return true;
    // src/text/transfer_storage_mem_active.asm:9 CLC
    case 0xC1038D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:10 ADC #window_stats::working_memory_storage
    case 0xC1038E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/transfer_storage_mem_active.asm:10 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1038C.
    case 0xC1038F: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/text/transfer_storage_mem_active.asm:10 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1038E.
    case 0xC10390: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:11 TAY
    case 0xC10391: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10392: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10395: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10397: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:12 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1039A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_storage_mem_active.asm:13 LDA @LOCAL00
    case 0xC1039C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:14 CLC
    case 0xC1039E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:15 ADC #window_stats::working_memory
    case 0xC1039F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/transfer_storage_mem_active.asm:15 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC1039F.
    case 0xC103A1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:16 TAY
    case 0xC103A2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103A3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103A5: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103A8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:17 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103AA: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_storage_mem_active.asm:18 LDA @LOCAL00
    case 0xC103AD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:19 CLC
    case 0xC103AF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:20 ADC #window_stats::argument_memory_storage
    case 0xC103B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/transfer_storage_mem_active.asm:20 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC103B0.
    case 0xC103B2: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:21 TAY
    case 0xC103B3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103B4: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103B7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103B9: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:22 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103BC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/transfer_storage_mem_active.asm:23 LDA @LOCAL00
    case 0xC103BE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:24 CLC
    case 0xC103C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:25 ADC #window_stats::argument_memory
    case 0xC103C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/transfer_storage_mem_active.asm:25 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC103C1.
    case 0xC103C3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/transfer_storage_mem_active.asm:26 TAY
    case 0xC103C4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103C5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103C7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103CA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/transfer_storage_mem_active.asm:27 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC103CC: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/transfer_storage_mem_active.asm:28 LDA @LOCAL00
    case 0xC103CF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/transfer_storage_mem_active.asm:29 PHA
    case 0xC103D1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:30 TAX
    case 0xC103D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:31 LDA a:window_stats::secondary_memory_storage,X
    case 0xC103D3: cpu.execute_instruction<0xBD>(0x000029, 3); return true;
    // src/text/transfer_storage_mem_active.asm:32 PLX
    case 0xC103D6: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/transfer_storage_mem_active.asm:33 STA a:window_stats::secondary_memory,X
    case 0xC103D7: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/transfer_storage_mem_active.asm:34 END_C_FUNCTION
    case 0xC103DA: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/transfer_storage_mem_active.asm:34 END_C_FUNCTION
    case 0xC103DB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/undraw_flyover_text.asm (source_named).
bool execute_text_undraw_flyover_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/undraw_flyover_text.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC4800B: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    case 0xC4800D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/text/undraw_flyover_text.asm:9 LDY #$6000
    // Overlapping static entry reached from 0xC4800D.
    case 0xC4800F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    case 0xC48010: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/text/undraw_flyover_text.asm:10 LDX #$7C00
    // Overlapping static entry reached from 0xC48010.
    case 0xC48012: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC48013: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/undraw_flyover_text.asm:11 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC48013.
    case 0xC48015: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/undraw_flyover_text.asm:12 JSL SET_BG3_VRAM_LOCATION
    case 0xC48016: cpu.execute_instruction<0x22>(0xC08E1C, 4); return true;
    // src/text/undraw_flyover_text.asm:13 JSL UNKNOWN_C2038B
    case 0xC4801A: cpu.execute_instruction<0x22>(0xC2038B, 4); return true;
    // src/text/undraw_flyover_text.asm:14 JSL LOAD_WINDOW_GFX
    case 0xC4801E: cpu.execute_instruction<0x22>(0xC47C3F, 4); return true;
    // src/text/undraw_flyover_text.asm:18 LDA #$0002
    case 0xC48022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/undraw_flyover_text.asm:18 LDA #$0002
    // Overlapping static entry reached from 0xC48022.
    case 0xC48024: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/undraw_flyover_text.asm:19 JSL UNKNOWN_C44963
    case 0xC48025: cpu.execute_instruction<0x22>(0xC44963, 4); return true;
    // src/text/undraw_flyover_text.asm:21 JSL UNKNOWN_C47F87
    case 0xC48029: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/text/undraw_flyover_text.asm:22 SEP #PROC_FLAGS::ACCUM8
    case 0xC4802D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/undraw_flyover_text.asm:23 LDA #PALETTE_UPLOAD::FULL
    case 0xC4802F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x008D18, 3); return true;
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    case 0xC48031: cpu.execute_instruction<0x8D>(0x000030, 3); return true;
    // src/text/undraw_flyover_text.asm:24 STA PALETTE_UPLOAD_MODE
    // Overlapping static entry reached from 0xC4802F.
    case 0xC48032: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/text/undraw_flyover_text.asm:25 REP #PROC_FLAGS::ACCUM8
    case 0xC48034: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/undraw_flyover_text.asm:29 RTL
    case 0xC48036: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/unlock_input.asm (source_named).
bool execute_text_unlock_input_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/unlock_input.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC100D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/unlock_input.asm:4 STZ TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC100D2: cpu.execute_instruction<0x9C>(0x009645, 3); return true;
    // src/text/unlock_input.asm:5 RTS
    case 0xC100D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/update_hppp_meter_tiles.asm (source_named).
bool execute_text_update_hppp_meter_tiles_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/update_hppp_meter_tiles.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC213AC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213AE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213AF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DE, 2); else cpu.execute_instruction<0x69>(0x00FFDE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC213B0.
    case 0xC213B2: cpu.execute_instruction<0xFF>(0xC9AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:15 END_STACK_VARS
    case 0xC213B3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    case 0xC213B4: cpu.execute_instruction<0xAD>(0x0089C9, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:16 LDA RENDER_HPPP_WINDOWS
    // Overlapping static entry reached from 0xC213B2.
    case 0xC213B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000029, 2); else cpu.execute_instruction<0x89>(0x00FF29, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    case 0xC213B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC213B6.
    case 0xC213B8: cpu.execute_instruction<0xFF>(0x03D000, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC213B7.
    case 0xC213B9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC213BA: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:18 BEQL @UNKNOWN22
    case 0xC213BC: cpu.execute_instruction<0x4C>(0x001624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:19 LDA FRAME_COUNTER
    case 0xC213BF: cpu.execute_instruction<0xAD>(0x000002, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    case 0xC213C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:20 AND #$00FF
    // Overlapping static entry reached from 0xC213C2.
    case 0xC213C4: cpu.execute_instruction<0x00>(0x000029, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    case 0xC213C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:21 AND #$0003
    // Overlapping static entry reached from 0xC213C5.
    case 0xC213C7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:22 STA @LOCAL09
    case 0xC213C8: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC213CA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:29 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC213CA.
    case 0xC213CC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:30 LDA (@LOCAL09),Y
    case 0xC213CD: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    case 0xC213CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:32 AND #$00FF
    // Overlapping static entry reached from 0xC213CF.
    case 0xC213D1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC213D2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:33 BEQL @UNKNOWN22
    case 0xC213D4: cpu.execute_instruction<0x4C>(0x001624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    case 0xC213D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC213D7.
    case 0xC213D9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:35 CLC
    case 0xC213DA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    case 0xC213DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000004, 2); else cpu.execute_instruction<0xE9>(0x000004, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:36 SBC #4
    // Overlapping static entry reached from 0xC213DB.
    case 0xC213DD: cpu.execute_instruction<0x00>(0x000070, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213DE: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E0: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E2: cpu.execute_instruction<0x4C>(0x001624, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E5: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:37 JUMPGTS @UNKNOWN22
    case 0xC213E7: cpu.execute_instruction<0x4C>(0x001624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:38 LDY @LOCAL09
    case 0xC213EA: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:39 SEP #PROC_FLAGS::INDEX8
    case 0xC213EC: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:40 LDA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC213EE: cpu.execute_instruction<0xAD>(0x009647, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:41 JSL ASR8_UNKNOWN1
    case 0xC213F1: cpu.execute_instruction<0x22>(0xC09251, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    case 0xC213F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:42 AND #$0001
    // Overlapping static entry reached from 0xC213F5.
    case 0xC213F7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC213F8: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:43 BEQL @UNKNOWN22
    case 0xC213FA: cpu.execute_instruction<0x4C>(0x001624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:44 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC213FD: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:45 CMP @LOCAL09
    case 0xC21400: cpu.execute_instruction<0xC5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:46 BNE @UNKNOWN5
    case 0xC21402: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    case 0xC21404: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:47 LDA #18
    // Overlapping static entry reached from 0xC21404.
    case 0xC21406: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:48 BRA @UNKNOWN6
    case 0xC21407: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    case 0xC21409: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:50 LDA #19
    // Overlapping static entry reached from 0xC21409.
    case 0xC2140B: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC2140F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:52 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC21410: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:53 CLC
    case 0xC21411: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    case 0xC21412: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:54 ADC #96
    // Overlapping static entry reached from 0xC21412.
    case 0xC21414: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:55 STA @VIRTUAL02
    case 0xC21415: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:56 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC21417: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    case 0xC2141A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:57 AND #$00FF
    // Overlapping static entry reached from 0xC2141A.
    case 0xC2141C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2141D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2141F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21420: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21422: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:58 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21423: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:59 PHA
    case 0xC21425: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:60 ASL
    case 0xC21426: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:61 PLA
    case 0xC21427: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:62 ROR
    case 0xC21428: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:63 STA @VIRTUAL04
    case 0xC21429: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    case 0xC2142B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:64 LDA #16
    // Overlapping static entry reached from 0xC2142B.
    case 0xC2142D: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:65 SEC
    case 0xC2142E: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:66 SBC @VIRTUAL04
    case 0xC2142F: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:67 CLC
    case 0xC21431: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:68 ADC @VIRTUAL02
    case 0xC21432: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:69 INC
    case 0xC21434: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:70 INC
    case 0xC21435: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:71 INC
    case 0xC21436: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:72 STA @LOCAL08
    case 0xC21437: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:73 LDA @LOCAL09
    case 0xC21439: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2143B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2143D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2143E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21440: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:74 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC21441: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:75 STA @VIRTUAL02
    case 0xC21443: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:76 LDA @LOCAL08
    case 0xC21445: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:77 CLC
    case 0xC21447: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:78 ADC @VIRTUAL02
    case 0xC21448: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:79 STA @LOCAL07
    case 0xC2144A: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:80 ASL
    case 0xC2144C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:81 CLC
    case 0xC2144D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    case 0xC2144E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:82 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC2144E.
    case 0xC21450: cpu.execute_instruction<0x7D>(0x000485, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:83 STA @VIRTUAL04
    case 0xC21451: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:84 STA @LOCAL06
    case 0xC21453: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:85 LDA @LOCAL07
    case 0xC21455: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:86 CLC
    case 0xC21457: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    case 0xC21458: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:87 ADC #$7C00
    // Overlapping static entry reached from 0xC21458.
    case 0xC2145A: cpu.execute_instruction<0x7C>(0x001C85, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:88 STA @LOCAL07
    case 0xC2145B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:97 REP #PROC_FLAGS::INDEX8
    case 0xC2145D: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:98 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC2145F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:98 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC2145F.
    case 0xC21461: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:99 LDA (@LOCAL09),Y
    case 0xC21462: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    case 0xC21464: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:101 AND #$00FF
    // Overlapping static entry reached from 0xC21464.
    case 0xC21466: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:102 DEC
    case 0xC21467: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    case 0xC21468: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:103 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC21468.
    case 0xC2146A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:104 JSL MULT168
    case 0xC2146B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:105 CLC
    case 0xC2146F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC21470: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:106 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC21470.
    case 0xC21472: cpu.execute_instruction<0x99>(0x001885, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:107 STA @LOCAL05
    case 0xC21473: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    case 0xC21475: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000043, 2); else cpu.execute_instruction<0xA0>(0x000043, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:108 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC21475.
    case 0xC21477: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:109 LDA (@LOCAL05),Y
    case 0xC21478: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:110 STA @LOCAL04
    case 0xC2147A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    case 0xC2147C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:111 AND #$0001
    // Overlapping static entry reached from 0xC2147C.
    case 0xC2147E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC2147F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:112 BEQL @UNKNOWN13
    case 0xC21481: cpu.execute_instruction<0x4C>(0x00153E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:113 LDA @LOCAL04
    case 0xC21484: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:114 TAY
    case 0xC21486: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:115 STY @LOCAL03
    case 0xC21487: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    case 0xC21489: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:116 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC21489.
    case 0xC2148B: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:117 LDA (@LOCAL05),Y
    case 0xC2148C: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:118 TAX
    case 0xC2148E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:119 LDA @LOCAL09
    case 0xC2148F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:120 LDY @LOCAL03
    case 0xC21491: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:121 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC21493: cpu.execute_instruction<0x20>(0x000F08, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:122 LDA @LOCAL09
    case 0xC21496: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21498: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:123 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2149F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:124 CLC
    case 0xC214A0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC214A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000069, 2); else cpu.execute_instruction<0x69>(0x008969, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:125 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC214A1.
    case 0xC214A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:126 STA @VIRTUAL02
    case 0xC214A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:126 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC214A3.
    case 0xC214A5: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:127 LDA UPLOAD_HPPP_METER_TILES
    case 0xC214A6: cpu.execute_instruction<0xAD>(0x009624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    case 0xC214A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:128 AND #$00FF
    // Overlapping static entry reached from 0xC214A9.
    case 0xC214AB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:129 BNE @UNKNOWN8
    case 0xC214AC: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    case 0xC214AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:130 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC214AE.
    case 0xC214B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:131 STA @LOCAL00
    case 0xC214B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:132 LDA @LOCAL07
    case 0xC214B3: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:133 STA @LOCAL01
    case 0xC214B5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:134 LDY @VIRTUAL02
    case 0xC214B7: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    case 0xC214B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:135 LDX #6
    // Overlapping static entry reached from 0xC214B9.
    case 0xC214BB: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:136 SEP #PROC_FLAGS::ACCUM8
    case 0xC214BC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:137 LDA #0
    case 0xC214BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC214C0: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:138 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC214BE.
    case 0xC214C1: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    case 0xC214C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:140 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC214C4.
    case 0xC214C6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:141 STA @LOCAL00
    case 0xC214C7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:142 LDA @LOCAL07
    case 0xC214C9: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:143 CLC
    case 0xC214CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    case 0xC214CC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:144 ADC #32
    // Overlapping static entry reached from 0xC214CC.
    case 0xC214CE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:145 STA @LOCAL01
    case 0xC214CF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:146 LDA @VIRTUAL02
    case 0xC214D1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:147 CLC
    case 0xC214D3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    case 0xC214D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:148 ADC #6
    // Overlapping static entry reached from 0xC214D4.
    case 0xC214D6: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:149 TAY
    case 0xC214D7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    case 0xC214D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:150 LDX #6
    // Overlapping static entry reached from 0xC214D8.
    case 0xC214DA: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:151 SEP #PROC_FLAGS::ACCUM8
    case 0xC214DB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:152 LDA #0
    case 0xC214DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC214DF: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:153 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC214DD.
    case 0xC214E0: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:156 LDY @VIRTUAL02
    case 0xC214E3: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    case 0xC214E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:157 LDX #0
    // Overlapping static entry reached from 0xC214E5.
    case 0xC214E7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:158 STX @LOCAL08
    case 0xC214E8: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:159 BRA @UNKNOWN10
    case 0xC214EA: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:161 LDA __BSS_START__,Y
    case 0xC214EC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:162 LDX @LOCAL06
    case 0xC214EF: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:163 STX @VIRTUAL04
    case 0xC214F1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:164 STA __BSS_START__,X
    case 0xC214F3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:165 INY
    case 0xC214F6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:166 INY
    case 0xC214F7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:167 INC @VIRTUAL04
    case 0xC214F8: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:168 INC @VIRTUAL04
    case 0xC214FA: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:169 LDA @VIRTUAL04
    case 0xC214FC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:170 STA @LOCAL06
    case 0xC214FE: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:171 LDX @LOCAL08
    case 0xC21500: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:172 INX
    case 0xC21502: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:173 STX @LOCAL08
    case 0xC21503: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    case 0xC21505: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:175 CPX #3
    // Overlapping static entry reached from 0xC21505.
    case 0xC21507: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:176 BNE @UNKNOWN9
    case 0xC21508: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:177 LDA @LOCAL06
    case 0xC2150A: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:178 STA @VIRTUAL04
    case 0xC2150C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:179 CLC
    case 0xC2150E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    case 0xC2150F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:180 ADC #58
    // Overlapping static entry reached from 0xC2150F.
    case 0xC21511: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:181 STA @LOCAL08
    case 0xC21512: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    case 0xC21514: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:182 LDX #0
    // Overlapping static entry reached from 0xC21514.
    case 0xC21516: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:183 STX @LOCAL03
    case 0xC21517: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:184 BRA @UNKNOWN12
    case 0xC21519: cpu.execute_instruction<0x80>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:186 TAX
    case 0xC2151B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:187 LDA __BSS_START__,Y
    case 0xC2151C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:188 STA __BSS_START__,X
    case 0xC2151F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:189 INY
    case 0xC21522: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:190 INY
    case 0xC21523: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:191 LDA @LOCAL08
    case 0xC21524: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:192 INC
    case 0xC21526: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:193 INC
    case 0xC21527: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:194 STA @LOCAL08
    case 0xC21528: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:195 LDX @LOCAL03
    case 0xC2152A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:196 INX
    case 0xC2152C: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:197 STX @LOCAL03
    case 0xC2152D: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    case 0xC2152F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:199 CPX #3
    // Overlapping static entry reached from 0xC2152F.
    case 0xC21531: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:200 BNE @UNKNOWN11
    case 0xC21532: cpu.execute_instruction<0xD0>(0x0000E7, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:201 CLC
    case 0xC21534: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    case 0xC21535: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:202 ADC #58
    // Overlapping static entry reached from 0xC21535.
    case 0xC21537: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:203 STA @VIRTUAL04
    case 0xC21538: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:204 STA @LOCAL06
    case 0xC2153A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:205 BRA @UNKNOWN14
    case 0xC2153C: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:207 LDA @VIRTUAL04
    case 0xC2153E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:208 CLC
    case 0xC21540: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    case 0xC21541: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000080, 2); else cpu.execute_instruction<0x69>(0x000080, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:209 ADC #128
    // Overlapping static entry reached from 0xC21541.
    case 0xC21543: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:210 STA @VIRTUAL04
    case 0xC21544: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:211 STA @LOCAL06
    case 0xC21546: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    case 0xC21548: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000049, 2); else cpu.execute_instruction<0xA0>(0x000049, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:213 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC21548.
    case 0xC2154A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:214 LDA (@LOCAL05),Y
    case 0xC2154B: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:215 STA @LOCAL04
    case 0xC2154D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    case 0xC2154F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:216 AND #$0001
    // Overlapping static entry reached from 0xC2154F.
    case 0xC21551: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC21552: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/update_hppp_meter_tiles.asm:217 BEQL @UNKNOWN21
    case 0xC21554: cpu.execute_instruction<0x4C>(0x001617, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:219 LDA @LOCAL04
    case 0xC21557: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:220 STA @LOCAL00
    case 0xC21559: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    case 0xC2155B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004B, 2); else cpu.execute_instruction<0xA0>(0x00004B, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:221 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC2155B.
    case 0xC2155D: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:222 LDA (@LOCAL05),Y
    case 0xC2155E: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:223 TAY
    case 0xC21560: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:224 LDA @LOCAL05
    case 0xC21561: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:225 CLC
    case 0xC21563: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    case 0xC21564: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:226 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC21564.
    case 0xC21566: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:227 TAX
    case 0xC21567: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:228 LDA @LOCAL09
    case 0xC21568: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:229 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC2156A: cpu.execute_instruction<0x20>(0x000F26, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:230 LDA @LOCAL09
    case 0xC2156D: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2156F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21571: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21572: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21574: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21575: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:231 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC21576: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:232 CLC
    case 0xC21577: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC21578: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000075, 2); else cpu.execute_instruction<0x69>(0x008975, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:233 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC21578.
    case 0xC2157A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:234 STA @VIRTUAL02
    case 0xC2157B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:234 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2157A.
    case 0xC2157C: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:235 LDA UPLOAD_HPPP_METER_TILES
    case 0xC2157D: cpu.execute_instruction<0xAD>(0x009624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    case 0xC21580: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC21580.
    case 0xC21582: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:237 BNE @UNKNOWN16
    case 0xC21583: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    case 0xC21585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:238 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC21585.
    case 0xC21587: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:239 STA @LOCAL00
    case 0xC21588: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:240 LDA @LOCAL07
    case 0xC2158A: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:241 CLC
    case 0xC2158C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    case 0xC2158D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x000040, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:242 ADC #64
    // Overlapping static entry reached from 0xC2158D.
    case 0xC2158F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:243 STA @LOCAL01
    case 0xC21590: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:244 LDY @VIRTUAL02
    case 0xC21592: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    case 0xC21594: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:245 LDX #6
    // Overlapping static entry reached from 0xC21594.
    case 0xC21596: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:246 SEP #PROC_FLAGS::ACCUM8
    case 0xC21597: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:247 LDA #0
    case 0xC21599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC2159B: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:248 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC21599.
    case 0xC2159C: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    case 0xC2159F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007E, 2); else cpu.execute_instruction<0xA9>(0x00007E, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:250 LDA #.HIWORD(__BSS_START__)
    // Overlapping static entry reached from 0xC2159F.
    case 0xC215A1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:251 STA @LOCAL00
    case 0xC215A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:252 LDA @LOCAL07
    case 0xC215A4: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:253 CLC
    case 0xC215A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    case 0xC215A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000060, 2); else cpu.execute_instruction<0x69>(0x000060, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:254 ADC #96
    // Overlapping static entry reached from 0xC215A7.
    case 0xC215A9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:255 STA @LOCAL01
    case 0xC215AA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:256 LDA @VIRTUAL02
    case 0xC215AC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:257 CLC
    case 0xC215AE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    case 0xC215AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:258 ADC #6
    // Overlapping static entry reached from 0xC215AF.
    case 0xC215B1: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:259 TAY
    case 0xC215B2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    case 0xC215B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:260 LDX #6
    // Overlapping static entry reached from 0xC215B3.
    case 0xC215B5: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:261 SEP #PROC_FLAGS::ACCUM8
    case 0xC215B6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:262 LDA #0
    case 0xC215B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    case 0xC215BA: cpu.execute_instruction<0x22>(0xC0862E, 4); return true;
    // src/text/update_hppp_meter_tiles.asm:263 JSL PREPARE_VRAM_COPY_ENTRY_B
    // Overlapping static entry reached from 0xC215B8.
    case 0xC215BB: cpu.execute_instruction<0x2E>(0x00C086, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:266 LDA @VIRTUAL02
    case 0xC215BE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:267 STA @LOCAL02
    case 0xC215C0: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    case 0xC215C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:268 LDX #0
    // Overlapping static entry reached from 0xC215C2.
    case 0xC215C4: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:269 STX @LOCAL08
    case 0xC215C5: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:270 BRA @UNKNOWN18
    case 0xC215C7: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:272 TAX
    case 0xC215C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:273 LDA __BSS_START__,X
    case 0xC215CA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:274 LDX @LOCAL06
    case 0xC215CD: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:275 STX @VIRTUAL04
    case 0xC215CF: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:276 STA __BSS_START__,X
    case 0xC215D1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:277 LDA @LOCAL02
    case 0xC215D4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:278 INC
    case 0xC215D6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:279 INC
    case 0xC215D7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:280 STA @LOCAL02
    case 0xC215D8: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:281 INC @VIRTUAL04
    case 0xC215DA: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:282 INC @VIRTUAL04
    case 0xC215DC: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:283 LDX @VIRTUAL04
    case 0xC215DE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:284 STX @LOCAL06
    case 0xC215E0: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:285 LDX @LOCAL08
    case 0xC215E2: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:286 INX
    case 0xC215E4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:287 STX @LOCAL08
    case 0xC215E5: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    case 0xC215E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:289 CPX #3
    // Overlapping static entry reached from 0xC215E7.
    case 0xC215E9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:290 BNE @UNKNOWN17
    case 0xC215EA: cpu.execute_instruction<0xD0>(0x0000DD, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:291 LDA @LOCAL06
    case 0xC215EC: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:292 STA @VIRTUAL04
    case 0xC215EE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:293 CLC
    case 0xC215F0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    case 0xC215F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003A, 2); else cpu.execute_instruction<0x69>(0x00003A, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:294 ADC #58
    // Overlapping static entry reached from 0xC215F1.
    case 0xC215F3: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:295 TAY
    case 0xC215F4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    case 0xC215F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:296 LDX #0
    // Overlapping static entry reached from 0xC215F5.
    case 0xC215F7: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:297 STX @LOCAL08
    case 0xC215F8: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:298 BRA @UNKNOWN20
    case 0xC215FA: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:300 LDA @LOCAL02
    case 0xC215FC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:301 TAX
    case 0xC215FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:302 LDA __BSS_START__,X
    case 0xC215FF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:303 STA __BSS_START__,Y
    case 0xC21602: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:304 LDA @LOCAL02
    case 0xC21605: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:305 INC
    case 0xC21607: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:306 INC
    case 0xC21608: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:307 STA @LOCAL02
    case 0xC21609: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:308 INY
    case 0xC2160B: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:309 INY
    case 0xC2160C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:310 LDX @LOCAL08
    case 0xC2160D: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:311 INX
    case 0xC2160F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/update_hppp_meter_tiles.asm:312 STX @LOCAL08
    case 0xC21610: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    case 0xC21612: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000003, 2); else cpu.execute_instruction<0xE0>(0x000003, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:314 CPX #3
    // Overlapping static entry reached from 0xC21612.
    case 0xC21614: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:315 BNE @UNKNOWN19
    case 0xC21615: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:317 LDA UPLOAD_HPPP_METER_TILES
    case 0xC21617: cpu.execute_instruction<0xAD>(0x009624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    case 0xC2161A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:318 AND #$00FF
    // Overlapping static entry reached from 0xC2161A.
    case 0xC2161C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:319 BEQ @UNKNOWN22
    case 0xC2161D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:320 SEP #PROC_FLAGS::ACCUM8
    case 0xC2161F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/update_hppp_meter_tiles.asm:321 STZ UPLOAD_HPPP_METER_TILES
    case 0xC21621: cpu.execute_instruction<0x9C>(0x009624, 3); return true;
    // src/text/update_hppp_meter_tiles.asm:323 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8
    case 0xC21624: cpu.execute_instruction<0xC2>(0x000030, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC21626: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/update_hppp_meter_tiles.asm:324 END_C_FUNCTION
    case 0xC21627: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/window_tick.asm (source_named).
bool execute_text_window_tick_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/window_tick.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC12DD5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/window_tick.asm:4 JSL RAND
    case 0xC12DD7: cpu.execute_instruction<0x22>(0xC08E9A, 4); return true;
    // src/text/window_tick.asm:5 LDA EARLY_TICK_EXIT
    case 0xC12DDB: cpu.execute_instruction<0xAD>(0x00968C, 3); return true;
    // src/text/window_tick.asm:6 AND #$00FF
    case 0xC12DDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/window_tick.asm:6 AND #$00FF
    // Overlapping static entry reached from 0xC12DDE.
    case 0xC12DE0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/window_tick.asm:7 BEQ @UNKNOWN0
    case 0xC12DE1: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/window_tick.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC12DE3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/window_tick.asm:9 STZ EARLY_TICK_EXIT
    case 0xC12DE5: cpu.execute_instruction<0x9C>(0x00968C, 3); return true;
    // src/text/window_tick.asm:10 BRA @UNKNOWN4
    case 0xC12DE8: cpu.execute_instruction<0x80>(0x000055, 2); return true;
    // src/text/window_tick.asm:13 LDA INSTANT_PRINTING
    case 0xC12DEA: cpu.execute_instruction<0xAD>(0x009622, 3); return true;
    // src/text/window_tick.asm:14 AND #$00FF
    case 0xC12DED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/window_tick.asm:14 AND #$00FF
    // Overlapping static entry reached from 0xC12DED.
    case 0xC12DEF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/window_tick.asm:15 BNE @UNKNOWN4
    case 0xC12DF0: cpu.execute_instruction<0xD0>(0x00004D, 2); return true;
    // src/text/window_tick.asm:16 LDA REDRAW_ALL_WINDOWS
    case 0xC12DF2: cpu.execute_instruction<0xAD>(0x009623, 3); return true;
    // src/text/window_tick.asm:17 AND #$00FF
    case 0xC12DF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/window_tick.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC12DF5.
    case 0xC12DF7: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/window_tick.asm:18 BNE @UNKNOWN1
    case 0xC12DF8: cpu.execute_instruction<0xD0>(0x000011, 2); return true;
    // src/text/window_tick.asm:19 LDA WINDOW_HEAD
    case 0xC12DFA: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/text/window_tick.asm:20 CMP #$FFFF
    case 0xC12DFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/window_tick.asm:20 CMP #$FFFF
    // Overlapping static entry reached from 0xC12DFD.
    case 0xC12DFF: cpu.execute_instruction<0xFF>(0xAD12F0, 4); return true;
    // src/text/window_tick.asm:21 BEQ @UNKNOWN2
    case 0xC12E00: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/text/window_tick.asm:22 LDA WINDOW_TAIL
    case 0xC12E02: cpu.execute_instruction<0xAD>(0x0088E2, 3); return true;
    // src/text/window_tick.asm:22 LDA WINDOW_TAIL
    // Overlapping static entry reached from 0xC12DFF.
    case 0xC12E03: cpu.execute_instruction<0xE2>(0x000088, 2); return true;
    // src/text/window_tick.asm:23 JSL UNKNOWN_C107AF
    case 0xC12E05: cpu.execute_instruction<0x22>(0xC107AF, 4); return true;
    // src/text/window_tick.asm:24 BRA @UNKNOWN2
    case 0xC12E09: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/window_tick.asm:26 JSL UNKNOWN_C2087C
    case 0xC12E0B: cpu.execute_instruction<0x22>(0xC2087C, 4); return true;
    // src/text/window_tick.asm:27 SEP #PROC_FLAGS::ACCUM8
    case 0xC12E0F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/window_tick.asm:28 STZ REDRAW_ALL_WINDOWS
    case 0xC12E11: cpu.execute_instruction<0x9C>(0x009623, 3); return true;
    // src/text/window_tick.asm:30 JSL HP_PP_ROLLER
    case 0xC12E14: cpu.execute_instruction<0x22>(0xC2109F, 4); return true;
    // src/text/window_tick.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC12E18: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/window_tick.asm:32 LDA #$0001
    case 0xC12E1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/window_tick.asm:33 STA UPLOAD_HPPP_METER_TILES
    case 0xC12E1C: cpu.execute_instruction<0x8D>(0x009624, 3); return true;
    // src/text/window_tick.asm:33 STA UPLOAD_HPPP_METER_TILES
    // Overlapping static entry reached from 0xC12E1A.
    case 0xC12E1D: cpu.execute_instruction<0x24>(0x000096, 2); return true;
    // src/text/window_tick.asm:34 JSL UPDATE_HPPP_METER_TILES
    case 0xC12E1F: cpu.execute_instruction<0x22>(0xC213AC, 4); return true;
    // src/text/window_tick.asm:35 LDA DISABLED_TRANSITIONS
    case 0xC12E23: cpu.execute_instruction<0xAD>(0x00B4B6, 3); return true;
    // src/text/window_tick.asm:36 BNE @UNKNOWN3
    case 0xC12E26: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // src/text/window_tick.asm:37 JSR UNKNOWN_C1FF2C
    case 0xC12E28: cpu.execute_instruction<0x20>(0x00FF2C, 3); return true;
    // src/text/window_tick.asm:38 CMP #$0000
    case 0xC12E2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/window_tick.asm:39 BRK
    case 0xC12E2D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/window_tick.asm:40 BEQ @UNKNOWN3
    case 0xC12E2E: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/window_tick.asm:41 JSL UNKNOWN_C47F87
    case 0xC12E30: cpu.execute_instruction<0x22>(0xC47F87, 4); return true;
    // src/text/window_tick.asm:43 STZ HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC12E34: cpu.execute_instruction<0x9C>(0x009649, 3); return true;
    // src/text/window_tick.asm:44 JSL UNKNOWN_C2038B
    case 0xC12E37: cpu.execute_instruction<0x22>(0xC2038B, 4); return true;
    // src/text/window_tick.asm:45 JSL UNKNOWN_C1004E
    case 0xC12E3B: cpu.execute_instruction<0x22>(0xC1004E, 4); return true;
    // src/text/window_tick.asm:47 REP #PROC_FLAGS::ACCUM8
    case 0xC12E3F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/window_tick.asm:48 RTL
    case 0xC12E41: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/window_tick_without_instant_printing.asm (source_named).
bool execute_text_window_tick_without_instant_printing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/text/window_tick_without_instant_printing.asm:3 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    case 0xC3E4E0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/window_tick_without_instant_printing.asm:4 JSL CLEAR_INSTANT_PRINTING
    case 0xC3E4E2: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/window_tick_without_instant_printing.asm:5 JSL WINDOW_TICK
    case 0xC3E4E6: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/window_tick_without_instant_printing.asm:6 JSL SET_INSTANT_PRINTING
    case 0xC3E4EA: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/window_tick_without_instant_printing.asm:7 RTL
    case 0xC3E4EE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
