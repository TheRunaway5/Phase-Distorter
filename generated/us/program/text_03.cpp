// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::us {
// Assembly routine source: src/text/ccs/wallet_increase.asm (source_named).
bool execute_text_ccs_wallet_increase_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/ccs/wallet_increase.asm:3 BEGIN_C_FUNCTION
    case 0xC148E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC148EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC148EC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC148ED: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC148EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC148EE.
    case 0xC148F0: cpu.execute_instruction<0xFF>(0x8A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC148F1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/ccs/wallet_increase.asm:10 END_STACK_VARS
    case 0xC148F2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/ccs/wallet_increase.asm:11 TXA
    case 0xC148F3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/ccs/wallet_increase.asm:12 STA @LOCAL01
    case 0xC148F4: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/ccs/wallet_increase.asm:13 LDA CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC148F6: cpu.execute_instruction<0xAD>(0x0097CA, 3); return true;
    // src/text/ccs/wallet_increase.asm:14 BNE @UNKNOWN0
    case 0xC148F9: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/ccs/wallet_increase.asm:15 LDA @LOCAL01
    case 0xC148FB: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_increase.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC148FD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/ccs/wallet_increase.asm:17 LDX CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC148FF: cpu.execute_instruction<0xAE>(0x0097CA, 3); return true;
    // src/text/ccs/wallet_increase.asm:18 STA CC_ARGUMENT_STORAGE,X
    case 0xC14902: cpu.execute_instruction<0x9D>(0x0097BA, 3); return true;
    // src/text/ccs/wallet_increase.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC14905: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/ccs/wallet_increase.asm:20 INC CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC14907: cpu.execute_instruction<0xEE>(0x0097CA, 3); return true;
    // src/text/ccs/wallet_increase.asm:21 LDA #.LOWORD(CC_1D_08)
    case 0xC1490A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E9, 2); else cpu.execute_instruction<0xA9>(0x0048E9, 3); return true;
    // src/text/ccs/wallet_increase.asm:21 LDA #.LOWORD(CC_1D_08)
    // Overlapping static entry reached from 0xC1490A.
    case 0xC1490C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/ccs/wallet_increase.asm:22 BRA @UNKNOWN3
    case 0xC1490D: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/text/ccs/wallet_increase.asm:24 SEP #PROC_FLAGS::INDEX8
    case 0xC1490F: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/ccs/wallet_increase.asm:25 LDY #8
    case 0xC14911: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x00A508, 3); return true;
    // src/text/ccs/wallet_increase.asm:26 LDA @LOCAL01
    case 0xC14913: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/ccs/wallet_increase.asm:26 LDA @LOCAL01
    // Overlapping static entry reached from 0xC14911.
    case 0xC14914: cpu.execute_instruction<0x12>(0x000022, 2); return true;
    // src/text/ccs/wallet_increase.asm:27 JSL ASL16_ENTRY2
    case 0xC14915: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/ccs/wallet_increase.asm:27 JSL ASL16_ENTRY2
    // Overlapping static entry reached from 0xC14914.
    case 0xC14916: cpu.execute_instruction<0x3E>(0x00C092, 3); return true;
    // src/text/ccs/wallet_increase.asm:28 STA @VIRTUAL02
    case 0xC14919: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/ccs/wallet_increase.asm:29 LDA CC_ARGUMENT_STORAGE
    case 0xC1491B: cpu.execute_instruction<0xAD>(0x0097BA, 3); return true;
    // src/text/ccs/wallet_increase.asm:30 AND #$00FF
    case 0xC1491E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/ccs/wallet_increase.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC1491E.
    case 0xC14920: cpu.execute_instruction<0x00>(0x000005, 2); return true;
    // src/text/ccs/wallet_increase.asm:31 ORA @VIRTUAL02
    case 0xC14921: cpu.execute_instruction<0x05>(0x000002, 2); return true;
    // src/text/ccs/wallet_increase.asm:32 BEQ @UNKNOWN1
    case 0xC14923: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/ccs/wallet_increase.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14925: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/ccs/wallet_increase.asm:33 STORE_INT1632 @VIRTUAL06
    case 0xC14927: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/ccs/wallet_increase.asm:34 BRA @UNKNOWN2
    case 0xC14929: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/ccs/wallet_increase.asm:36 JSR GET_ARGUMENT_MEMORY
    case 0xC1492B: cpu.execute_instruction<0x20>(0x0003DC, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1492E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14930: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14932: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_increase.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14934: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_increase.asm:39 JSL INCREASE_WALLET_BALANCE
    case 0xC14936: cpu.execute_instruction<0x22>(0xC22214, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1493A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1493C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1493E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/ccs/wallet_increase.asm:40 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC14940: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/ccs/wallet_increase.asm:41 JSR SET_WORKING_MEMORY
    case 0xC14942: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/ccs/wallet_increase.asm:42 LDA #NULL
    case 0xC14945: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/ccs/wallet_increase.asm:42 LDA #NULL
    // Overlapping static entry reached from 0xC14945.
    case 0xC14947: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/ccs/wallet_increase.asm:44 END_C_FUNCTION
    case 0xC14948: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/ccs/wallet_increase.asm:44 END_C_FUNCTION
    case 0xC14949: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/change_current_window_font.asm (source_named).
bool execute_text_change_current_window_font_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/change_current_window_font.asm:3 BEGIN_C_FUNCTION
    case 0xC10FAC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FAE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FAF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC10FB1.
    case 0xC10FB3: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/change_current_window_font.asm:7 END_STACK_VARS
    case 0xC10FB5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:8 STA @LOCAL00
    case 0xC10FB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC10FB3.
    case 0xC10FB7: cpu.execute_instruction<0x0E>(0x0058AD, 3); return true;
    // src/text/change_current_window_font.asm:9 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FB8: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/change_current_window_font.asm:9 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10FB7.
    case 0xC10FBA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    case 0xC10FBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    // Overlapping static entry reached from 0xC10FBA.
    case 0xC10FBC: cpu.execute_instruction<0xFF>(0x28F0FF, 4); return true;
    // src/text/change_current_window_font.asm:10 CMP #$FFFF
    // Overlapping static entry reached from 0xC10FBB.
    case 0xC10FBD: cpu.execute_instruction<0xFF>(0xA528F0, 4); return true;
    // src/text/change_current_window_font.asm:11 BEQ @RETURN
    case 0xC10FBE: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // src/text/change_current_window_font.asm:12 LDA @LOCAL00
    case 0xC10FC0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:12 LDA @LOCAL00
    // Overlapping static entry reached from 0xC10FBD.
    case 0xC10FC1: cpu.execute_instruction<0x0E>(0x0030C9, 3); return true;
    // src/text/change_current_window_font.asm:13 CMP #WINDOW::UNKNOWN30
    case 0xC10FC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000030, 2); else cpu.execute_instruction<0xC9>(0x000030, 3); return true;
    // src/text/change_current_window_font.asm:13 CMP #WINDOW::UNKNOWN30
    // Overlapping static entry reached from 0xC10FC2.
    case 0xC10FC4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/change_current_window_font.asm:14 BNE @LOAD_MR_SATURN_FONT_ID
    case 0xC10FC5: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/change_current_window_font.asm:15 LDA #0
    case 0xC10FC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/change_current_window_font.asm:15 LDA #0
    // Overlapping static entry reached from 0xC10FC7.
    case 0xC10FC9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/change_current_window_font.asm:16 STA @LOCAL00
    case 0xC10FCA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:17 BRA @SKIP_MR_SATURN_FONT_ID
    case 0xC10FCC: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/change_current_window_font.asm:19 LDA #1
    case 0xC10FCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/change_current_window_font.asm:19 LDA #1
    // Overlapping static entry reached from 0xC10FCE.
    case 0xC10FD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/change_current_window_font.asm:20 STA @LOCAL00
    case 0xC10FD1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:22 LDA CURRENT_FOCUS_WINDOW
    case 0xC10FD3: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/change_current_window_font.asm:23 ASL
    case 0xC10FD6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:24 TAX
    case 0xC10FD7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:25 LDA OPEN_WINDOW_TABLE,X
    case 0xC10FD8: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/change_current_window_font.asm:26 LDY #.SIZEOF(window_stats)
    case 0xC10FDB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/change_current_window_font.asm:26 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10FDB.
    case 0xC10FDD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/change_current_window_font.asm:27 JSL MULT168
    case 0xC10FDE: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/change_current_window_font.asm:28 TAX
    case 0xC10FE2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/change_current_window_font.asm:29 LDA @LOCAL00
    case 0xC10FE3: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/change_current_window_font.asm:30 STA WINDOW_STATS+window_stats::font,X
    case 0xC10FE5: cpu.execute_instruction<0x9D>(0x008665, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/change_current_window_font.asm:32 END_C_FUNCTION
    case 0xC10FE8: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/change_current_window_font.asm:32 END_C_FUNCTION
    case 0xC10FE9: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/character_select_prompt.asm (source_named).
bool execute_text_character_select_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/character_select_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC127EF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CC, 2); else cpu.execute_instruction<0x69>(0x00FFCC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC127F4.
    case 0xC127F6: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/character_select_prompt.asm:24 END_STACK_VARS
    case 0xC127F8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:25 STX @LOCAL0D
    case 0xC127F9: cpu.execute_instruction<0x86>(0x000032, 2); return true;
    // src/text/character_select_prompt.asm:25 STX @LOCAL0D
    // Overlapping static entry reached from 0xC127F6.
    case 0xC127FA: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:26 STA @LOCAL0C
    case 0xC127FB: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:26 STA @LOCAL0C
    // Overlapping static entry reached from 0xC127FA.
    case 0xC127FC: cpu.execute_instruction<0x30>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC127FD: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC127FC.
    case 0xC127FE: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC127FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC127FE.
    case 0xC12800: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12801: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12800.
    case 0xC12802: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12803: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12805: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12807: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12809: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC1280B: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1280D: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC1280F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12811: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12813: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12815: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12817: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12819: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC1281B: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/text/character_select_prompt.asm:31 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC1281D: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/character_select_prompt.asm:32 STA @LOCAL09
    case 0xC12820: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/character_select_prompt.asm:33 CLC
    case 0xC12822: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:34 ADC #window_stats::argument_memory
    case 0xC12823: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/character_select_prompt.asm:34 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12823.
    case 0xC12825: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/character_select_prompt.asm:35 TAY
    case 0xC12826: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12827: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1282A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1282C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1282F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12831: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12833: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12835: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12837: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/character_select_prompt.asm:38 LDA @LOCAL0C
    case 0xC12839: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:39 CMP #1
    case 0xC1283B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/character_select_prompt.asm:39 CMP #1
    // Overlapping static entry reached from 0xC1283B.
    case 0xC1283D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/character_select_prompt.asm:40 BNEL @UNKNOWN7
    case 0xC1283E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:40 BNEL @UNKNOWN7
    case 0xC12840: cpu.execute_instruction<0x4C>(0x002925, 3); return true;
    // src/text/character_select_prompt.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12843: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/text/character_select_prompt.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12843.
    case 0xC12845: cpu.execute_instruction<0x9C>(0x002022, 3); return true;
    // src/text/character_select_prompt.asm:42 JSL UNKNOWN_C20A20
    case 0xC12846: cpu.execute_instruction<0x22>(0xC20A20, 4); return true;
    // src/text/character_select_prompt.asm:42 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12845.
    case 0xC12848: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:42 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12848.
    case 0xC12849: cpu.execute_instruction<0xC2>(0x0000AD, 2); return true;
    // src/text/character_select_prompt.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC1284A: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/character_select_prompt.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC12849.
    case 0xC1284B: cpu.execute_instruction<0xA4>(0x000098, 2); return true;
    // src/text/character_select_prompt.asm:44 AND #$00FF
    case 0xC1284D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC1284D.
    case 0xC1284F: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/character_select_prompt.asm:45 CMP #1
    case 0xC12850: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/character_select_prompt.asm:45 CMP #1
    // Overlapping static entry reached from 0xC12850.
    case 0xC12852: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt.asm:46 BNE @UNKNOWN1
    case 0xC12853: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt.asm:47 LDX #WINDOW::UNKNOWN33
    case 0xC12855: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/text/character_select_prompt.asm:47 LDX #WINDOW::UNKNOWN33
    // Overlapping static entry reached from 0xC12855.
    case 0xC12857: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt.asm:48 BRA @UNKNOWN2
    case 0xC12858: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:50 CLC
    case 0xC1285A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:51 ADC #WINDOW::UNKNOWN28
    case 0xC1285B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/text/character_select_prompt.asm:51 ADC #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC1285B.
    case 0xC1285D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/character_select_prompt.asm:52 TAX
    case 0xC1285E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:53 DEX
    case 0xC1285F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:55 STX @LOCAL07
    case 0xC12860: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/character_select_prompt.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12862: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/character_select_prompt.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12864: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/text/character_select_prompt.asm:57 LDA #0
    case 0xC12867: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:57 LDA #0
    // Overlapping static entry reached from 0xC12867.
    case 0xC12869: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:58 STA @VIRTUAL02
    case 0xC1286A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:59 BRA @UNKNOWN4
    case 0xC1286C: cpu.execute_instruction<0x80>(0x000071, 2); return true;
    // src/text/character_select_prompt.asm:61 LDA @VIRTUAL02
    case 0xC1286E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:62 CLC
    case 0xC12870: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:68 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC12871: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006F, 2); else cpu.execute_instruction<0x69>(0x00986F, 3); return true;
    // src/text/character_select_prompt.asm:68 ADC #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC12871.
    case 0xC12873: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:70 STA @VIRTUAL04
    case 0xC12874: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:71 STA @LOCAL06
    case 0xC12876: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:72 LDX @VIRTUAL04
    case 0xC12878: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:73 LDA __BSS_START__,X
    case 0xC1287A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:74 AND #$00FF
    case 0xC1287D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC1287D.
    case 0xC1287F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/character_select_prompt.asm:75 JSL GET_PARTY_CHARACTER_NAME
    case 0xC12880: cpu.execute_instruction<0x22>(0xC222D3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12884: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12886: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12888: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1288A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/character_select_prompt.asm:77 LDX #6
    case 0xC1288C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/character_select_prompt.asm:77 LDX #6
    // Overlapping static entry reached from 0xC1288C.
    case 0xC1288E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/character_select_prompt.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1288F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/text/character_select_prompt.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1288F.
    case 0xC12891: cpu.execute_instruction<0x9C>(0x00D222, 3); return true;
    // src/text/character_select_prompt.asm:79 JSL MEMCPY16
    case 0xC12892: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/text/character_select_prompt.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC12891.
    case 0xC12894: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/text/character_select_prompt.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC12896: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:80 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC12894.
    case 0xC12897: cpu.execute_instruction<0x20>(0x00A49C, 3); return true;
    // src/text/character_select_prompt.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    case 0xC12898: cpu.execute_instruction<0x9C>(0x009CA4, 3); return true;
    // src/text/character_select_prompt.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC12897.
    case 0xC1289A: cpu.execute_instruction<0x9C>(0x0020C2, 3); return true;
    // src/text/character_select_prompt.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC1289B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1289D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1289D.
    case 0xC1289F: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A2: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/character_select_prompt.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC128A8: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/character_select_prompt.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC128AA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128AC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128AE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128B0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128B2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC128B4.
    case 0xC128B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128B7: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC128B9.
    case 0xC128BB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC128BC: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/character_select_prompt.asm:87 LDY #0
    case 0xC128BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:87 LDY #0
    // Overlapping static entry reached from 0xC128BE.
    case 0xC128C0: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/character_select_prompt.asm:88 LDA @VIRTUAL02
    case 0xC128C1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:89 STA @VIRTUAL04
    case 0xC128C3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:90 ASL
    case 0xC128C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:91 ADC @VIRTUAL04
    case 0xC128C6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:92 ASL
    case 0xC128C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:93 TAX
    case 0xC128C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:94 STX @LOCAL05
    case 0xC128CA: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/character_select_prompt.asm:95 LDA @LOCAL06
    case 0xC128CC: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:96 STA @VIRTUAL04
    case 0xC128CE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:97 LDX @VIRTUAL04
    case 0xC128D0: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:98 LDA __BSS_START__,X
    case 0xC128D2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:99 AND #$00FF
    case 0xC128D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC128D5.
    case 0xC128D7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/character_select_prompt.asm:100 LDX @LOCAL05
    case 0xC128D8: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/text/character_select_prompt.asm:101 JSR UNKNOWN_C1153B
    case 0xC128DA: cpu.execute_instruction<0x20>(0x00153B, 3); return true;
    // src/text/character_select_prompt.asm:102 INC @VIRTUAL02
    case 0xC128DD: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC128DF: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/character_select_prompt.asm:105 AND #$00FF
    case 0xC128E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC128E2.
    case 0xC128E4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:106 CLC
    case 0xC128E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:107 SBC @VIRTUAL02
    case 0xC128E6: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128E8: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128EA: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128EC: cpu.execute_instruction<0x4C>(0x00286E, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128EF: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:108 JUMPGTS @UNKNOWN3
    case 0xC128F1: cpu.execute_instruction<0x4C>(0x00286E, 3); return true;
    // src/text/character_select_prompt.asm:109 JSR PRINT_MENU_ITEMS
    case 0xC128F4: cpu.execute_instruction<0x20>(0x00163C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128F7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128FB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:113 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC128FD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC128FF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12901: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12903: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12905: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/character_select_prompt.asm:116 JSR UNKNOWN_C11F5A
    case 0xC12907: cpu.execute_instruction<0x20>(0x001F5A, 3); return true;
    // src/text/character_select_prompt.asm:117 LDA @LOCAL0D
    case 0xC1290A: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/text/character_select_prompt.asm:118 JSR SELECTION_MENU
    case 0xC1290C: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // src/text/character_select_prompt.asm:119 TAX
    case 0xC1290F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:120 STX @LOCAL06
    case 0xC12910: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:121 JSR UNKNOWN_C11F8A
    case 0xC12912: cpu.execute_instruction<0x20>(0x001F8A, 3); return true;
    // src/text/character_select_prompt.asm:122 LDA @LOCAL07
    case 0xC12915: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:123 JSR CLOSE_WINDOW
    case 0xC12917: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/text/character_select_prompt.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1291B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00008A, 2); else cpu.execute_instruction<0xA9>(0x009C8A, 3); return true;
    // src/text/character_select_prompt.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1291B.
    case 0xC1291D: cpu.execute_instruction<0x9C>(0x00BC22, 3); return true;
    // src/text/character_select_prompt.asm:125 JSL UNKNOWN_C20ABC
    case 0xC1291E: cpu.execute_instruction<0x22>(0xC20ABC, 4); return true;
    // src/text/character_select_prompt.asm:125 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC1291D.
    case 0xC12920: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:125 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC12920.
    case 0xC12921: cpu.execute_instruction<0xC2>(0x00004C, 2); return true;
    // src/text/character_select_prompt.asm:126 JMP @UNKNOWN44
    case 0xC12922: cpu.execute_instruction<0x4C>(0x002BB1, 3); return true;
    // src/text/character_select_prompt.asm:126 JMP @UNKNOWN44
    // Overlapping static entry reached from 0xC12921.
    case 0xC12923: cpu.execute_instruction<0xB1>(0x00002B, 2); return true;
    // src/text/character_select_prompt.asm:128 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12925: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/text/character_select_prompt.asm:129 CMP #.LOWORD(-1)
    case 0xC12928: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt.asm:129 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12928.
    case 0xC1292A: cpu.execute_instruction<0xFF>(0xA507F0, 4); return true;
    // src/text/character_select_prompt.asm:130 BEQ @UNKNOWN8
    case 0xC1292B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/character_select_prompt.asm:131 LDA @LOCAL0C
    case 0xC1292D: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:131 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC1292A.
    case 0xC1292E: cpu.execute_instruction<0x30>(0x0000C9, 2); return true;
    // src/text/character_select_prompt.asm:132 CMP #2
    case 0xC1292F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/character_select_prompt.asm:132 CMP #2
    // Overlapping static entry reached from 0xC1292E.
    case 0xC12930: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/character_select_prompt.asm:132 CMP #2
    // Overlapping static entry reached from 0xC1292F.
    case 0xC12931: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt.asm:133 BNE @UNKNOWN9
    case 0xC12932: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt.asm:135 LDX #0
    case 0xC12934: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:135 LDX #0
    // Overlapping static entry reached from 0xC12934.
    case 0xC12936: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt.asm:136 BRA @UNKNOWN10
    case 0xC12937: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt.asm:138 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC12939: cpu.execute_instruction<0xAE>(0x0089CA, 3); return true;
    // src/text/character_select_prompt.asm:140 STX @VIRTUAL04
    case 0xC1293C: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1293E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1293E.
    case 0xC12940: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12941: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12943: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12943.
    case 0xC12945: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12946: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC12948: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1294A: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1294C: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1294E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/character_select_prompt.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC12950: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:143 BEQ @UNKNOWN12
    case 0xC12952: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:151 LDX @VIRTUAL04
    case 0xC12954: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:152 LDA GAME_STATE + game_state::party_members,X
    case 0xC12956: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/text/character_select_prompt.asm:154 AND #$00FF
    case 0xC12959: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC12959.
    case 0xC1295B: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/character_select_prompt.asm:155 PHA
    case 0xC1295C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1295D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1295F: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12962: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12964: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/text/character_select_prompt.asm:157 PLA
    case 0xC12967: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:158 JSL UNKNOWN_C09279
    case 0xC12968: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/text/character_select_prompt.asm:160 STZ PAGINATION_ANIMATION_FRAME
    case 0xC1296C: cpu.execute_instruction<0x9C>(0x005E7C, 3); return true;
    // src/text/character_select_prompt.asm:161 LDA #10
    case 0xC1296F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/character_select_prompt.asm:161 LDA #10
    // Overlapping static entry reached from 0xC1296F.
    case 0xC12971: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:162 STA @VIRTUAL02
    case 0xC12972: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:163 STA @LOCAL07
    case 0xC12974: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:165 LDA @LOCAL0C
    case 0xC12976: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:166 BNE @UNKNOWN14
    case 0xC12978: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:167 LDA @VIRTUAL04
    case 0xC1297A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:168 JSR UNKNOWN_C43573
    case 0xC1297C: cpu.execute_instruction<0x22>(0xC43573, 4); return true;
    // src/text/character_select_prompt.asm:170 JSR CLEAR_INSTANT_PRINTING
    case 0xC12980: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/character_select_prompt.asm:171 JSL WINDOW_TICK
    case 0xC12984: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/character_select_prompt.asm:172 LDA @VIRTUAL04
    case 0xC12988: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:173 STA @LOCAL04
    case 0xC1298A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:174 LDA PAGINATION_WINDOW
    case 0xC1298C: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/text/character_select_prompt.asm:175 CMP #.LOWORD(-1)
    case 0xC1298F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt.asm:175 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1298F.
    case 0xC12991: cpu.execute_instruction<0xFF>(0xAD1AF0, 4); return true;
    // src/text/character_select_prompt.asm:176 BEQ @UNKNOWN15
    case 0xC12992: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:177 LDA PAGINATION_WINDOW
    case 0xC12994: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/text/character_select_prompt.asm:177 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12991.
    case 0xC12995: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:177 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC12995.
    case 0xC12996: cpu.execute_instruction<0x5E>(0x00AA0A, 3); return true;
    // src/text/character_select_prompt.asm:178 ASL
    case 0xC12997: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:179 TAX
    case 0xC12998: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:180 LDA OPEN_WINDOW_TABLE,X
    case 0xC12999: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/character_select_prompt.asm:181 CMP #.LOWORD(-1)
    case 0xC1299C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt.asm:181 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1299C.
    case 0xC1299E: cpu.execute_instruction<0xFF>(0xA00DF0, 4); return true;
    // src/text/character_select_prompt.asm:182 BEQ @UNKNOWN15
    case 0xC1299F: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/text/character_select_prompt.asm:183 LDY #.SIZEOF(window_stats)
    case 0xC129A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/character_select_prompt.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1299E.
    case 0xC129A2: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/text/character_select_prompt.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC129A1.
    case 0xC129A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/character_select_prompt.asm:184 JSL MULT168
    case 0xC129A4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/character_select_prompt.asm:185 CLC
    case 0xC129A8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:186 ADC #.LOWORD(WINDOW_STATS)
    case 0xC129A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/character_select_prompt.asm:186 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC129A9.
    case 0xC129AB: cpu.execute_instruction<0x86>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:187 STA @LOCAL03
    case 0xC129AC: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:187 STA @LOCAL03
    // Overlapping static entry reached from 0xC129AB.
    case 0xC129AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:189 LDA PAGINATION_WINDOW
    case 0xC129AE: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/text/character_select_prompt.asm:190 CMP #.LOWORD(-1)
    case 0xC129B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt.asm:190 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC129B1.
    case 0xC129B3: cpu.execute_instruction<0xFF>(0xAD62F0, 4); return true;
    // src/text/character_select_prompt.asm:191 BEQ @UNKNOWN16
    case 0xC129B4: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/text/character_select_prompt.asm:192 LDA PAGINATION_WINDOW
    case 0xC129B6: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/text/character_select_prompt.asm:192 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC129B3.
    case 0xC129B7: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:192 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC129B7.
    case 0xC129B8: cpu.execute_instruction<0x5E>(0x00AA0A, 3); return true;
    // src/text/character_select_prompt.asm:193 ASL
    case 0xC129B9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:194 TAX
    case 0xC129BA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:195 LDA OPEN_WINDOW_TABLE,X
    case 0xC129BB: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/character_select_prompt.asm:196 CMP #.LOWORD(-1)
    case 0xC129BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt.asm:196 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC129BE.
    case 0xC129C0: cpu.execute_instruction<0xFF>(0xA955F0, 4); return true;
    // src/text/character_select_prompt.asm:197 BEQ @UNKNOWN16
    case 0xC129C1: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003C, 2); else cpu.execute_instruction<0xA9>(0x00E43C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C0.
    case 0xC129C4: cpu.execute_instruction<0x3C>(0x0085E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C3.
    case 0xC129C5: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129C6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C5.
    case 0xC129C7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C7.
    case 0xC129C9: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC129C8.
    case 0xC129CA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/character_select_prompt.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC129CB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/character_select_prompt.asm:199 LDA PAGINATION_ANIMATION_FRAME
    case 0xC129CD: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/text/character_select_prompt.asm:200 ASL
    case 0xC129D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:201 ASL
    case 0xC129D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:202 CLC
    case 0xC129D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:203 ADC @VIRTUAL06
    case 0xC129D3: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:204 STA @VIRTUAL06
    case 0xC129D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC129D7.
    case 0xC129D9: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DA: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DD: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129DF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/character_select_prompt.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC129E1: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC129E9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/character_select_prompt.asm:207 LDY #window_stats::window_y
    case 0xC129EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/character_select_prompt.asm:207 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC129EB.
    case 0xC129ED: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/character_select_prompt.asm:208 LDA (@LOCAL03),Y
    case 0xC129EE: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/character_select_prompt.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC129F4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:210 STA @VIRTUAL02
    case 0xC129F5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:211 LDY #window_stats::window_x
    case 0xC129F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/character_select_prompt.asm:211 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC129F7.
    case 0xC129F9: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/character_select_prompt.asm:212 LDA (@LOCAL03),Y
    case 0xC129FA: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:213 LDY #window_stats::width
    case 0xC129FC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/character_select_prompt.asm:213 LDY #window_stats::width
    // Overlapping static entry reached from 0xC129FC.
    case 0xC129FE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:214 CLC
    case 0xC129FF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:215 ADC (@LOCAL03),Y
    case 0xC12A00: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:216 DEC
    case 0xC12A02: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:217 DEC
    case 0xC12A03: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:218 DEC
    case 0xC12A04: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:219 CLC
    case 0xC12A05: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:220 ADC @VIRTUAL02
    case 0xC12A06: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:221 CLC
    case 0xC12A08: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC12A09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/text/character_select_prompt.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC12A09.
    case 0xC12A0B: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/character_select_prompt.asm:223 TAY
    case 0xC12A0C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:224 LDX #8
    case 0xC12A0D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/text/character_select_prompt.asm:224 LDX #8
    // Overlapping static entry reached from 0xC12A0D.
    case 0xC12A0F: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/character_select_prompt.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC12A10: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:226 LDA #0
    case 0xC12A12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/character_select_prompt.asm:227 JSL PREPARE_VRAM_COPY
    case 0xC12A14: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/character_select_prompt.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12A12.
    case 0xC12A15: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/character_select_prompt.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC12A15.
    case 0xC12A17: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/text/character_select_prompt.asm:230 LDA #0
    case 0xC12A18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:230 LDA #0
    // Overlapping static entry reached from 0xC12A17.
    case 0xC12A19: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/character_select_prompt.asm:230 LDA #0
    // Overlapping static entry reached from 0xC12A18.
    case 0xC12A1A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:231 STA @LOCAL06
    case 0xC12A1B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:232 JMP @UNKNOWN28
    case 0xC12A1D: cpu.execute_instruction<0x4C>(0x002AB9, 3); return true;
    // src/text/character_select_prompt.asm:234 JSL UNKNOWN_C12E42
    case 0xC12A20: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/text/character_select_prompt.asm:235 LDA PAD_PRESS
    case 0xC12A24: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt.asm:236 AND #PAD::LEFT
    case 0xC12A27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/character_select_prompt.asm:236 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC12A27.
    case 0xC12A29: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/character_select_prompt.asm:237 BEQ @UNKNOWN20
    case 0xC12A2A: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/text/character_select_prompt.asm:238 LDX @LOCAL04
    case 0xC12A2C: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:239 DEX
    case 0xC12A2E: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:240 STX @LOCAL04
    case 0xC12A2F: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:241 LDA @LOCAL0C
    case 0xC12A31: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:242 BEQ @UNKNOWN18
    case 0xC12A33: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/character_select_prompt.asm:243 LDY #SFX::CURSOR2
    case 0xC12A35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/character_select_prompt.asm:243 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12A35.
    case 0xC12A37: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt.asm:244 BRA @UNKNOWN19
    case 0xC12A38: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12A3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/text/character_select_prompt.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12A3A.
    case 0xC12A3C: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/character_select_prompt.asm:248 STY @LOCAL02
    case 0xC12A3D: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/character_select_prompt.asm:249 LDA #2
    case 0xC12A3F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/character_select_prompt.asm:249 LDA #2
    // Overlapping static entry reached from 0xC12A3F.
    case 0xC12A41: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/character_select_prompt.asm:250 STA PAGINATION_ANIMATION_FRAME
    case 0xC12A42: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // src/text/character_select_prompt.asm:251 JMP @UNKNOWN32
    case 0xC12A45: cpu.execute_instruction<0x4C>(0x002AE0, 3); return true;
    // src/text/character_select_prompt.asm:253 LDA PAD_PRESS
    case 0xC12A48: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt.asm:254 AND #PAD::RIGHT
    case 0xC12A4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/character_select_prompt.asm:254 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC12A4B.
    case 0xC12A4D: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/character_select_prompt.asm:255 BEQ @UNKNOWN23
    case 0xC12A4E: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/character_select_prompt.asm:255 BEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC12A4D.
    case 0xC12A4F: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:256 LDX @LOCAL04
    case 0xC12A50: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:257 INX
    case 0xC12A52: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:258 STX @LOCAL04
    case 0xC12A53: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:259 LDA @LOCAL0C
    case 0xC12A55: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:260 BEQ @UNKNOWN21
    case 0xC12A57: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/character_select_prompt.asm:261 LDY #SFX::CURSOR2
    case 0xC12A59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/character_select_prompt.asm:261 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12A59.
    case 0xC12A5B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt.asm:262 BRA @UNKNOWN22
    case 0xC12A5C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12A5E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/text/character_select_prompt.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12A5E.
    case 0xC12A60: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/character_select_prompt.asm:266 STY @LOCAL02
    case 0xC12A61: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/character_select_prompt.asm:267 LDA #3
    case 0xC12A63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/character_select_prompt.asm:267 LDA #3
    // Overlapping static entry reached from 0xC12A63.
    case 0xC12A65: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/character_select_prompt.asm:268 STA PAGINATION_ANIMATION_FRAME
    case 0xC12A66: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // src/text/character_select_prompt.asm:269 BRA @UNKNOWN32
    case 0xC12A69: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/text/character_select_prompt.asm:271 LDA PAD_PRESS
    case 0xC12A6B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC12A6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/character_select_prompt.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC12A6E.
    case 0xC12A70: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/character_select_prompt.asm:273 BEQ @UNKNOWN24
    case 0xC12A71: cpu.execute_instruction<0xF0>(0x000015, 2); return true;
    // src/text/character_select_prompt.asm:274 LDX @VIRTUAL04
    case 0xC12A73: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:275 LDA GAME_STATE + game_state::party_members,X
    case 0xC12A75: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/text/character_select_prompt.asm:276 AND #$00FF
    case 0xC12A78: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:276 AND #$00FF
    // Overlapping static entry reached from 0xC12A78.
    case 0xC12A7A: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/character_select_prompt.asm:277 TAX
    case 0xC12A7B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:278 STX @LOCAL06
    case 0xC12A7C: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:279 LDA #SFX::CURSOR1
    case 0xC12A7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/character_select_prompt.asm:279 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC12A7E.
    case 0xC12A80: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/character_select_prompt.asm:280 JSL PLAY_SOUND
    case 0xC12A81: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/character_select_prompt.asm:281 JMP @UNKNOWN44
    case 0xC12A85: cpu.execute_instruction<0x4C>(0x002BB1, 3); return true;
    // src/text/character_select_prompt.asm:283 LDA PAD_PRESS
    case 0xC12A88: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt.asm:284 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC12A8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/character_select_prompt.asm:284 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC12A8B.
    case 0xC12A8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0024F0, 3); return true;
    // src/text/character_select_prompt.asm:285 BEQ @UNKNOWN27
    case 0xC12A8E: cpu.execute_instruction<0xF0>(0x000024, 2); return true;
    // src/text/character_select_prompt.asm:285 BEQ @UNKNOWN27
    // Overlapping static entry reached from 0xC12A8D.
    case 0xC12A8F: cpu.execute_instruction<0x24>(0x0000A5, 2); return true;
    // src/text/character_select_prompt.asm:286 LDA @LOCAL0D
    case 0xC12A90: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/text/character_select_prompt.asm:286 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC12A8F.
    case 0xC12A91: cpu.execute_instruction<0x32>(0x0000C9, 2); return true;
    // src/text/character_select_prompt.asm:287 CMP #1
    case 0xC12A92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/character_select_prompt.asm:287 CMP #1
    // Overlapping static entry reached from 0xC12A91.
    case 0xC12A93: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/character_select_prompt.asm:287 CMP #1
    // Overlapping static entry reached from 0xC12A92.
    case 0xC12A94: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt.asm:288 BNE @UNKNOWN27
    case 0xC12A95: cpu.execute_instruction<0xD0>(0x00001D, 2); return true;
    // src/text/character_select_prompt.asm:289 LDX #0
    case 0xC12A97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:289 LDX #0
    // Overlapping static entry reached from 0xC12A97.
    case 0xC12A99: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/character_select_prompt.asm:290 STX @LOCAL06
    case 0xC12A9A: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:291 LDA @LOCAL0C
    case 0xC12A9C: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt.asm:292 BEQ @UNKNOWN25
    case 0xC12A9E: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/character_select_prompt.asm:293 LDY #SFX::CURSOR2
    case 0xC12AA0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/character_select_prompt.asm:293 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC12AA0.
    case 0xC12AA2: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt.asm:294 BRA @UNKNOWN26
    case 0xC12AA3: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt.asm:296 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC12AA5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/text/character_select_prompt.asm:296 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC12AA5.
    case 0xC12AA7: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/character_select_prompt.asm:298 TYA
    case 0xC12AA8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:299 JSL PLAY_SOUND
    case 0xC12AA9: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/character_select_prompt.asm:300 JSL UNKNOWN_C3E6F8
    case 0xC12AAD: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/text/character_select_prompt.asm:301 JMP @UNKNOWN44
    case 0xC12AB1: cpu.execute_instruction<0x4C>(0x002BB1, 3); return true;
    // src/text/character_select_prompt.asm:303 LDA @LOCAL06
    case 0xC12AB4: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:304 INC
    case 0xC12AB6: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:305 STA @LOCAL06
    case 0xC12AB7: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:307 LDX @LOCAL07
    case 0xC12AB9: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:308 STX @VIRTUAL02
    case 0xC12ABB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:309 CMP @VIRTUAL02
    case 0xC12ABD: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/character_select_prompt.asm:310 BCCL @UNKNOWN17
    case 0xC12ABF: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/character_select_prompt.asm:310 BCCL @UNKNOWN17
    case 0xC12AC1: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/character_select_prompt.asm:310 BCCL @UNKNOWN17
    case 0xC12AC3: cpu.execute_instruction<0x4C>(0x002A20, 3); return true;
    // src/text/character_select_prompt.asm:311 LDA PAGINATION_ANIMATION_FRAME
    case 0xC12AC6: cpu.execute_instruction<0xAD>(0x005E7C, 3); return true;
    // src/text/character_select_prompt.asm:312 BNE @UNKNOWN30
    case 0xC12AC9: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt.asm:313 LDX #1
    case 0xC12ACB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/character_select_prompt.asm:313 LDX #1
    // Overlapping static entry reached from 0xC12ACB.
    case 0xC12ACD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt.asm:314 BRA @UNKNOWN31
    case 0xC12ACE: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt.asm:316 LDX #0
    case 0xC12AD0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:316 LDX #0
    // Overlapping static entry reached from 0xC12AD0.
    case 0xC12AD2: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/text/character_select_prompt.asm:318 STX PAGINATION_ANIMATION_FRAME
    case 0xC12AD3: cpu.execute_instruction<0x8E>(0x005E7C, 3); return true;
    // src/text/character_select_prompt.asm:319 LDA #10
    case 0xC12AD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/character_select_prompt.asm:319 LDA #10
    // Overlapping static entry reached from 0xC12AD6.
    case 0xC12AD8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:320 STA @VIRTUAL02
    case 0xC12AD9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:321 STA @LOCAL07
    case 0xC12ADB: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:322 JMP @UNKNOWN15
    case 0xC12ADD: cpu.execute_instruction<0x4C>(0x0029AE, 3); return true;
    // src/text/character_select_prompt.asm:324 TXA
    case 0xC12AE0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:325 SEC
    case 0xC12AE1: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:326 SBC @VIRTUAL04
    case 0xC12AE2: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:327 STA @VIRTUAL02
    case 0xC12AE4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:328 STA @LOCAL07
    case 0xC12AE6: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:330 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12AE8: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/character_select_prompt.asm:331 AND #$00FF
    case 0xC12AEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:331 AND #$00FF
    // Overlapping static entry reached from 0xC12AEB.
    case 0xC12AED: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:332 STA @LOCAL06
    case 0xC12AEE: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:333 STX @VIRTUAL02
    case 0xC12AF0: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:334 CLC
    case 0xC12AF2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:335 SBC @VIRTUAL02
    case 0xC12AF3: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AF5: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AF7: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AF9: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/text/character_select_prompt.asm:336 BRANCHGTS @UNKNOWN36
    case 0xC12AFB: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/text/character_select_prompt.asm:337 LDX #0
    case 0xC12AFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:337 LDX #0
    // Overlapping static entry reached from 0xC12AFD.
    case 0xC12AFF: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/character_select_prompt.asm:338 STX @LOCAL04
    case 0xC12B00: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:339 BRA @UNKNOWN39
    case 0xC12B02: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/character_select_prompt.asm:341 STX @VIRTUAL02
    case 0xC12B04: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:342 LDA #0
    case 0xC12B06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:342 LDA #0
    // Overlapping static entry reached from 0xC12B06.
    case 0xC12B08: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:343 CLC
    case 0xC12B09: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:344 SBC @VIRTUAL02
    case 0xC12B0A: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B0C: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B0E: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B10: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/character_select_prompt.asm:345 BRANCHLTEQS @UNKNOWN39
    case 0xC12B12: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:346 LDA @LOCAL06
    case 0xC12B14: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:347 TAX
    case 0xC12B16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:348 DEX
    case 0xC12B17: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:349 STX @LOCAL04
    case 0xC12B18: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12B1A.
    case 0xC12B1C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B1D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC12B1F.
    case 0xC12B21: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:351 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC12B22: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B24: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B26: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B28: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:352 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC12B2A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/character_select_prompt.asm:353 CMP @VIRTUAL0A+2
    case 0xC12B2C: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/character_select_prompt.asm:354 BNE @UNKNOWN40
    case 0xC12B2E: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:355 LDA @VIRTUAL06
    case 0xC12B30: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:356 CMP @VIRTUAL0A
    case 0xC12B32: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/character_select_prompt.asm:358 BEQ @UNKNOWN41
    case 0xC12B34: cpu.execute_instruction<0xF0>(0x00002B, 2); return true;
    // src/text/character_select_prompt.asm:359 LDA GAME_STATE + game_state::party_members,X
    case 0xC12B36: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/text/character_select_prompt.asm:360 AND #$00FF
    case 0xC12B39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:360 AND #$00FF
    // Overlapping static entry reached from 0xC12B39.
    case 0xC12B3B: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/character_select_prompt.asm:361 PHA
    case 0xC12B3C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B3D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B3F: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B42: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:362 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC12B44: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/text/character_select_prompt.asm:363 PLA
    case 0xC12B47: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:364 JSL UNKNOWN_C09279
    case 0xC12B48: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/text/character_select_prompt.asm:365 CMP #0
    case 0xC12B4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/character_select_prompt.asm:365 CMP #0
    // Overlapping static entry reached from 0xC12B4C.
    case 0xC12B4E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt.asm:366 BNE @UNKNOWN41
    case 0xC12B4F: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/text/character_select_prompt.asm:367 LDA @LOCAL07
    case 0xC12B51: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:368 STA @VIRTUAL02
    case 0xC12B53: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:369 LDX @LOCAL04
    case 0xC12B55: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:370 TXA
    case 0xC12B57: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:371 CLC
    case 0xC12B58: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:372 ADC @VIRTUAL02
    case 0xC12B59: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:373 TAX
    case 0xC12B5B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:374 STX @LOCAL04
    case 0xC12B5C: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:375 JMP @UNKNOWN33
    case 0xC12B5E: cpu.execute_instruction<0x4C>(0x002AE8, 3); return true;
    // src/text/character_select_prompt.asm:377 LDX @LOCAL04
    case 0xC12B61: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:378 TXA
    case 0xC12B63: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:379 CMP @VIRTUAL04
    case 0xC12B64: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:380 BEQ @UNKNOWN43
    case 0xC12B66: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/text/character_select_prompt.asm:381 LDY @LOCAL02
    case 0xC12B68: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/character_select_prompt.asm:382 TYA
    case 0xC12B6A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:383 JSL PLAY_SOUND
    case 0xC12B6B: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/character_select_prompt.asm:384 LDX @LOCAL04
    case 0xC12B6F: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt.asm:385 STX @VIRTUAL04
    case 0xC12B71: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12B73.
    case 0xC12B75: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B76: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC12B78.
    case 0xC12B7A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:386 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC12B7B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B7D: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B7F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B81: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:387 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC12B83: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/character_select_prompt.asm:388 CMP @VIRTUAL06+2
    case 0xC12B85: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // src/text/character_select_prompt.asm:389 BNE @UNKNOWN42
    case 0xC12B87: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:390 LDA @VIRTUAL0A
    case 0xC12B89: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/text/character_select_prompt.asm:391 CMP @VIRTUAL06
    case 0xC12B8B: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/text/character_select_prompt.asm:393 BEQ @UNKNOWN43
    case 0xC12B8D: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/text/character_select_prompt.asm:394 LDX @VIRTUAL04
    case 0xC12B8F: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt.asm:395 LDA GAME_STATE + game_state::party_members,X
    case 0xC12B91: cpu.execute_instruction<0xBD>(0x00986F, 3); return true;
    // src/text/character_select_prompt.asm:396 AND #$00FF
    case 0xC12B94: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC12B94.
    case 0xC12B96: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/character_select_prompt.asm:397 PHA
    case 0xC12B97: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B98: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B9A: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B9D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC12B9F: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:398 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    // Overlapping static entry reached from 0xC11A2C.
    case 0xC12BA0: cpu.execute_instruction<0xBE>(0x006800, 3); return true;
    // src/text/character_select_prompt.asm:399 PLA
    case 0xC12BA2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:400 JSL UNKNOWN_C09279
    case 0xC12BA3: cpu.execute_instruction<0x22>(0xC09279, 4); return true;
    // src/text/character_select_prompt.asm:402 LDA #4
    case 0xC12BA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/character_select_prompt.asm:402 LDA #4
    // Overlapping static entry reached from 0xC12BA7.
    case 0xC12BA9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt.asm:403 STA @VIRTUAL02
    case 0xC12BAA: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt.asm:404 STA @LOCAL07
    case 0xC12BAC: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt.asm:405 JMP @UNKNOWN13
    case 0xC12BAE: cpu.execute_instruction<0x4C>(0x002976, 3); return true;
    // src/text/character_select_prompt.asm:407 LDA #.LOWORD(-1)
    case 0xC12BB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt.asm:407 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC12BB1.
    case 0xC12BB3: cpu.execute_instruction<0xFF>(0x5E7C8D, 4); return true;
    // src/text/character_select_prompt.asm:408 STA PAGINATION_ANIMATION_FRAME
    case 0xC12BB4: cpu.execute_instruction<0x8D>(0x005E7C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BB7: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BB9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BBB: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt.asm:409 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC12BBD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/character_select_prompt.asm:410 LDA @LOCAL09
    case 0xC12BBF: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/character_select_prompt.asm:411 CLC
    case 0xC12BC1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt.asm:412 ADC #window_stats::argument_memory
    case 0xC12BC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/character_select_prompt.asm:412 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12BC2.
    case 0xC12BC4: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/character_select_prompt.asm:413 TAY
    case 0xC12BC5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BC6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BC8: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BCB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/character_select_prompt.asm:414 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC12BCD: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/character_select_prompt.asm:415 LDX @LOCAL06
    case 0xC12BD0: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/character_select_prompt.asm:416 TXA
    case 0xC12BD2: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/character_select_prompt.asm:417 END_C_FUNCTION
    case 0xC12BD3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/character_select_prompt.asm:417 END_C_FUNCTION
    case 0xC12BD4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/clear_blinking_prompt.asm (source_named).
bool execute_text_clear_blinking_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_blinking_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC1003C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/clear_blinking_prompt.asm:5 STZ BLINKING_TRIANGLE_FLAG
    case 0xC1003E: cpu.execute_instruction<0x9C>(0x00964D, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/clear_blinking_prompt.asm:6 END_C_FUNCTION
    case 0xC10041: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/clear_instant_printing.asm (source_named).
bool execute_text_clear_instant_printing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_instant_printing.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E4CA: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/clear_instant_printing.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E4CC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/clear_instant_printing.asm:10 STZ INSTANT_PRINTING
    case 0xC3E4CE: cpu.execute_instruction<0x9C>(0x009622, 3); return true;
    // src/text/clear_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC3E4D1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/clear_instant_printing.asm:12 END_C_FUNCTION
    case 0xC3E4D3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/close_focus_window.asm (source_named).
bool execute_text_close_focus_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_focus_window.asm:3 BEGIN_C_FUNCTION
    case 0xC10084: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/close_focus_window.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC10086: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/close_focus_window.asm:6 JSR CLOSE_WINDOW
    case 0xC10089: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/close_focus_window.asm:7 END_C_FUNCTION
    case 0xC1008D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/close_focus_window_redirect.asm (source_named).
bool execute_text_close_focus_window_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_focus_window_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD59: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/close_focus_window_redirect.asm:5 JSR CLOSE_FOCUS_WINDOW
    case 0xC1DD5B: cpu.execute_instruction<0x20>(0x000084, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/close_focus_window_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD5E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/close_window.asm (source_named).
bool execute_text_close_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_window.asm:6 BEGIN_C_FUNCTION_FAR
    case 0xC3E521: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_window.asm:6 BEGIN_C_FUNCTION_FAR
    // Overlapping static entry reached from 0xC3E51E.
    case 0xC3E522: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E523: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E524: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E525: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E526: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC3E526.
    case 0xC3E528: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E529: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC3E52A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/close_window.asm:16 STA @LOCAL04
    case 0xC3E52B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/close_window.asm:16 STA @LOCAL04
    // Overlapping static entry reached from 0xC3E528.
    case 0xC3E52C: cpu.execute_instruction<0x16>(0x0000C9, 2); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    case 0xC3E52D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E52C.
    case 0xC3E52E: cpu.execute_instruction<0xFF>(0x03D0FF, 4); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E52D.
    case 0xC3E52F: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC3E530: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC3E532: cpu.execute_instruction<0x4C>(0x00E6F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC3E52F.
    case 0xC3E533: cpu.execute_instruction<0xF4>(0x00A5E6, 3); return true;
    // src/text/close_window.asm:19 LDA @LOCAL04
    case 0xC3E535: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:19 LDA @LOCAL04
    // Overlapping static entry reached from 0xC3E533.
    case 0xC3E536: cpu.execute_instruction<0x16>(0x00000A, 2); return true;
    // src/text/close_window.asm:20 ASL
    case 0xC3E537: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:21 TAX
    case 0xC3E538: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC3E539: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/close_window.asm:23 STA @VIRTUAL04
    case 0xC3E53C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    case 0xC3E53E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E53E.
    case 0xC3E540: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC3E541: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC3E543: cpu.execute_instruction<0x4C>(0x00E6F4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC3E540.
    case 0xC3E544: cpu.execute_instruction<0xF4>(0x00ADE6, 3); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC3E546: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E544.
    case 0xC3E547: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E547.
    case 0xC3E548: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C5, 2); else cpu.execute_instruction<0x89>(0x0016C5, 3); return true;
    // src/text/close_window.asm:27 CMP @LOCAL04
    case 0xC3E549: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/text/close_window.asm:27 CMP @LOCAL04
    // Overlapping static entry reached from 0xC3E548.
    case 0xC3E54A: cpu.execute_instruction<0x16>(0x0000D0, 2); return true;
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    case 0xC3E54B: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC3E54A.
    case 0xC3E54C: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    case 0xC3E54D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E54C.
    case 0xC3E54E: cpu.execute_instruction<0xFF>(0x588DFF, 4); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E54D.
    case 0xC3E54F: cpu.execute_instruction<0xFF>(0x89588D, 4); return true;
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    case 0xC3E550: cpu.execute_instruction<0x8D>(0x008958, 3); return true;
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC3E54E.
    case 0xC3E552: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A5, 2); else cpu.execute_instruction<0x89>(0x0016A5, 3); return true;
    // src/text/close_window.asm:32 LDA @LOCAL04
    case 0xC3E553: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:32 LDA @LOCAL04
    // Overlapping static entry reached from 0xC3E552.
    case 0xC3E554: cpu.execute_instruction<0x16>(0x000022, 2); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    case 0xC3E555: cpu.execute_instruction<0x22>(0xC3E7E3, 4); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC3E554.
    case 0xC3E556: cpu.execute_instruction<0xE3>(0x0000E7, 2); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    // Overlapping static entry reached from 0xC3E556.
    case 0xC3E558: cpu.execute_instruction<0xC3>(0x0000A5, 2); return true;
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    case 0xC3E559: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    // Overlapping static entry reached from 0xC3E558.
    case 0xC3E55A: cpu.execute_instruction<0x04>(0x0000A0, 2); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC3E55B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E55A.
    case 0xC3E55C: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E55B.
    case 0xC3E55D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:36 JSL MULT168
    case 0xC3E55E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:37 TAX
    case 0xC3E562: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:38 LDY WINDOW_STATS + window_stats::next,X
    case 0xC3E563: cpu.execute_instruction<0xBC>(0x008652, 3); return true;
    // src/text/close_window.asm:39 STY @LOCAL03
    case 0xC3E566: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:40 LDA WINDOW_STATS + window_stats::prev,X
    case 0xC3E568: cpu.execute_instruction<0xBD>(0x008650, 3); return true;
    // src/text/close_window.asm:41 STA @LOCAL02
    case 0xC3E56B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    case 0xC3E56D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E56D.
    case 0xC3E56F: cpu.execute_instruction<0xFF>(0x8D05D0, 4); return true;
    // src/text/close_window.asm:43 BNE @UNKNOWN3
    case 0xC3E570: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    case 0xC3E572: cpu.execute_instruction<0x8D>(0x0088E2, 3); return true;
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    // Overlapping static entry reached from 0xC3E56F.
    case 0xC3E573: cpu.execute_instruction<0xE2>(0x000088, 2); return true;
    // src/text/close_window.asm:45 BRA @UNKNOWN4
    case 0xC3E575: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/close_window.asm:47 TYA
    case 0xC3E577: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    case 0xC3E578: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E578.
    case 0xC3E57A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:49 JSL MULT168
    case 0xC3E57B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:50 TAX
    case 0xC3E57F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:51 LDA @LOCAL02
    case 0xC3E580: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:52 STA WINDOW_STATS + window_stats::prev,X
    case 0xC3E582: cpu.execute_instruction<0x9D>(0x008650, 3); return true;
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    case 0xC3E585: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E585.
    case 0xC3E587: cpu.execute_instruction<0xFF>(0xA407D0, 4); return true;
    // src/text/close_window.asm:55 BNE @UNKNOWN5
    case 0xC3E588: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/close_window.asm:56 LDY @LOCAL03
    case 0xC3E58A: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:56 LDY @LOCAL03
    // Overlapping static entry reached from 0xC3E587.
    case 0xC3E58B: cpu.execute_instruction<0x14>(0x00008C, 2); return true;
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    case 0xC3E58C: cpu.execute_instruction<0x8C>(0x0088E0, 3); return true;
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    // Overlapping static entry reached from 0xC3E58B.
    case 0xC3E58D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000088, 2); else cpu.execute_instruction<0xE0>(0x008088, 3); return true;
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    case 0xC3E58F: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC3E58D.
    case 0xC3E590: cpu.execute_instruction<0x0E>(0x0052A0, 3); return true;
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    case 0xC3E591: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E591.
    case 0xC3E593: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:61 JSL MULT168
    case 0xC3E594: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:62 TAX
    case 0xC3E598: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:63 LDY @LOCAL03
    case 0xC3E599: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:64 TYA
    case 0xC3E59B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:65 STA WINDOW_STATS + window_stats::next,X
    case 0xC3E59C: cpu.execute_instruction<0x9D>(0x008652, 3); return true;
    // src/text/close_window.asm:67 LDA @VIRTUAL04
    case 0xC3E59F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    case 0xC3E5A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E5A1.
    case 0xC3E5A3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:69 JSL MULT168
    case 0xC3E5A4: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:70 TAX
    case 0xC3E5A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:71 STX @LOCAL01
    case 0xC3E5A9: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    case 0xC3E5AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E5AB.
    case 0xC3E5AD: cpu.execute_instruction<0xFF>(0x86549D, 4); return true;
    // src/text/close_window.asm:73 STA WINDOW_STATS + window_stats::id,X
    case 0xC3E5AE: cpu.execute_instruction<0x9D>(0x008654, 3); return true;
    // src/text/close_window.asm:74 LDA @LOCAL04
    case 0xC3E5B1: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:75 ASL
    case 0xC3E5B3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:76 TAX
    case 0xC3E5B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    case 0xC3E5B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E5B5.
    case 0xC3E5B7: cpu.execute_instruction<0xFF>(0x88E49D, 4); return true;
    // src/text/close_window.asm:78 STA OPEN_WINDOW_TABLE,X
    case 0xC3E5B8: cpu.execute_instruction<0x9D>(0x0088E4, 3); return true;
    // src/text/close_window.asm:79 LDX @LOCAL01
    case 0xC3E5BB: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:80 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xC3E5BD: cpu.execute_instruction<0xBD>(0x008656, 3); return true;
    // src/text/close_window.asm:81 ASL
    case 0xC3E5C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:82 STA @VIRTUAL02
    case 0xC3E5C1: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:83 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xC3E5C3: cpu.execute_instruction<0xBD>(0x008658, 3); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5C9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5CA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC3E5CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:85 CLC
    case 0xC3E5CC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:86 ADC @VIRTUAL02
    case 0xC3E5CD: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/close_window.asm:87 CLC
    case 0xC3E5CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    case 0xC3E5D0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC3E5D0.
    case 0xC3E5D2: cpu.execute_instruction<0x7D>(0x000285, 3); return true;
    // src/text/close_window.asm:96 STA @VIRTUAL02
    case 0xC3E5D3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:97 STA @LOCAL00
    case 0xC3E5D5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/close_window.asm:98 LDY WINDOW_STATS + window_stats::tilemap_address,X
    case 0xC3E5D7: cpu.execute_instruction<0xBC>(0x008685, 3); return true;
    // src/text/close_window.asm:99 STY @LOCAL03
    case 0xC3E5DA: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:100 LDX #0
    case 0xC3E5DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/close_window.asm:100 LDX #0
    // Overlapping static entry reached from 0xC3E5DC.
    case 0xC3E5DE: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/close_window.asm:101 STX @LOCAL01
    case 0xC3E5DF: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:102 BRA @UNKNOWN10
    case 0xC3E5E1: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/text/close_window.asm:104 LDY @LOCAL03
    case 0xC3E5E3: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:105 LDA __BSS_START__,Y
    case 0xC3E5E5: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/close_window.asm:106 CMP #64
    case 0xC3E5E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/text/close_window.asm:106 CMP #64
    // Overlapping static entry reached from 0xC3E5E8.
    case 0xC3E5EA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/close_window.asm:107 BNE @UNKNOWN8
    case 0xC3E5EB: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/close_window.asm:108 CMP #0
    case 0xC3E5ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/close_window.asm:108 CMP #0
    // Overlapping static entry reached from 0xC3E5ED.
    case 0xC3E5EF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/close_window.asm:109 BEQ @UNKNOWN9
    case 0xC3E5F0: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/close_window.asm:111 LDA __BSS_START__,Y
    case 0xC3E5F2: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/close_window.asm:112 JSL FREE_TILE
    case 0xC3E5F5: cpu.execute_instruction<0x22>(0xC44AF7, 4); return true;
    // src/text/close_window.asm:114 LDA #64
    case 0xC3E5F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/close_window.asm:114 LDA #64
    // Overlapping static entry reached from 0xC3E5F9.
    case 0xC3E5FB: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/close_window.asm:115 LDY @LOCAL03
    case 0xC3E5FC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:116 STA __BSS_START__,Y
    case 0xC3E5FE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/close_window.asm:117 INY
    case 0xC3E601: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:118 INY
    case 0xC3E602: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:119 STY @LOCAL03
    case 0xC3E603: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:120 LDX @LOCAL01
    case 0xC3E605: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:121 INX
    case 0xC3E607: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/close_window.asm:122 STX @LOCAL01
    case 0xC3E608: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:124 LDA @VIRTUAL04
    case 0xC3E60A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:125 LDY #.SIZEOF(window_stats)
    case 0xC3E60C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:125 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E60C.
    case 0xC3E60E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:126 JSL MULT168
    case 0xC3E60F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:127 TAX
    case 0xC3E613: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:128 LDY WINDOW_STATS + window_stats::width,X
    case 0xC3E614: cpu.execute_instruction<0xBC>(0x00865A, 3); return true;
    // src/text/close_window.asm:129 TAX
    case 0xC3E617: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:130 LDA WINDOW_STATS + window_stats::height,X
    case 0xC3E618: cpu.execute_instruction<0xBD>(0x00865C, 3); return true;
    // src/text/close_window.asm:131 JSL MULT16
    case 0xC3E61B: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/text/close_window.asm:132 STA @VIRTUAL02
    case 0xC3E61F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:133 LDX @LOCAL01
    case 0xC3E621: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:134 TXA
    case 0xC3E623: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/close_window.asm:135 CMP @VIRTUAL02
    case 0xC3E624: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:136 BCC @UNKNOWN7
    case 0xC3E626: cpu.execute_instruction<0x90>(0x0000BB, 2); return true;
    // src/text/close_window.asm:137 LDY #0
    case 0xC3E628: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/close_window.asm:137 LDY #0
    // Overlapping static entry reached from 0xC3E628.
    case 0xC3E62A: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/close_window.asm:138 STY @LOCAL01
    case 0xC3E62B: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/close_window.asm:140 BRA @UNKNOWN14
    case 0xC3E62D: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/text/close_window.asm:146 LDA #0
    case 0xC3E62F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/close_window.asm:146 LDA #0
    // Overlapping static entry reached from 0xC3E62F.
    case 0xC3E631: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/close_window.asm:147 STA @LOCAL02
    case 0xC3E632: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:149 BRA @UNKNOWN13
    case 0xC3E634: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/close_window.asm:161 LDA #0
    case 0xC3E636: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/close_window.asm:161 LDA #0
    // Overlapping static entry reached from 0xC3E636.
    case 0xC3E638: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/close_window.asm:162 LDX @LOCAL00
    case 0xC3E639: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/close_window.asm:163 STX @VIRTUAL02
    case 0xC3E63B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/close_window.asm:164 STA __BSS_START__,X
    case 0xC3E63D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/close_window.asm:165 INC @VIRTUAL02
    case 0xC3E640: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:166 INC @VIRTUAL02
    case 0xC3E642: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:167 LDA @VIRTUAL02
    case 0xC3E644: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/close_window.asm:168 STA @LOCAL00
    case 0xC3E646: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/close_window.asm:169 LDA @LOCAL02
    case 0xC3E648: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:170 INC
    case 0xC3E64A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/close_window.asm:171 STA @LOCAL02
    case 0xC3E64B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:174 LDA @VIRTUAL04
    case 0xC3E64D: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    case 0xC3E64F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E64F.
    case 0xC3E651: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:176 JSL MULT168
    case 0xC3E652: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:177 TAX
    case 0xC3E656: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:178 LDA WINDOW_STATS + window_stats::width,X
    case 0xC3E657: cpu.execute_instruction<0xBD>(0x00865A, 3); return true;
    // src/text/close_window.asm:183 TAX
    case 0xC3E65A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:184 STX @VIRTUAL02
    case 0xC3E65B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/close_window.asm:186 INC @VIRTUAL02
    case 0xC3E65D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:187 INC @VIRTUAL02
    case 0xC3E65F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:193 LDA @LOCAL02
    case 0xC3E661: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:194 CMP @VIRTUAL02
    case 0xC3E663: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:196 BNE @UNKNOWN12
    case 0xC3E665: cpu.execute_instruction<0xD0>(0x0000CF, 2); return true;
    // src/text/close_window.asm:201 STX @VIRTUAL02
    case 0xC3E667: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/close_window.asm:203 LDA #32
    case 0xC3E669: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/text/close_window.asm:203 LDA #32
    // Overlapping static entry reached from 0xC3E669.
    case 0xC3E66B: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/close_window.asm:204 SEC
    case 0xC3E66C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/close_window.asm:205 SBC @VIRTUAL02
    case 0xC3E66D: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/close_window.asm:206 DEC
    case 0xC3E66F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:207 DEC
    case 0xC3E670: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:208 ASL
    case 0xC3E671: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:214 PHA
    case 0xC3E672: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/close_window.asm:215 LDA @LOCAL00
    case 0xC3E673: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/close_window.asm:216 STA @VIRTUAL02
    case 0xC3E675: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:217 PLY
    case 0xC3E677: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/close_window.asm:218 STY @VIRTUAL02
    case 0xC3E678: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/close_window.asm:220 CLC
    case 0xC3E67A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:221 ADC @VIRTUAL02
    case 0xC3E67B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/close_window.asm:231 STA @VIRTUAL02
    case 0xC3E67D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:232 STA @LOCAL00
    case 0xC3E67F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/close_window.asm:233 LDY @LOCAL01
    case 0xC3E681: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/close_window.asm:234 INY
    case 0xC3E683: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:235 STY @LOCAL01
    case 0xC3E684: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/close_window.asm:238 LDA @VIRTUAL04
    case 0xC3E686: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    case 0xC3E688: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E688.
    case 0xC3E68A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:240 JSL MULT168
    case 0xC3E68B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:241 TAX
    case 0xC3E68F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:246 STX @LOCAL02
    case 0xC3E690: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/close_window.asm:248 LDA WINDOW_STATS + window_stats::height,X
    case 0xC3E692: cpu.execute_instruction<0xBD>(0x00865C, 3); return true;
    // src/text/close_window.asm:249 STA @VIRTUAL02
    case 0xC3E695: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:250 INC @VIRTUAL02
    case 0xC3E697: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:251 INC @VIRTUAL02
    case 0xC3E699: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:255 LDY @LOCAL01
    case 0xC3E69B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/close_window.asm:256 TYA
    case 0xC3E69D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:258 CMP @VIRTUAL02
    case 0xC3E69E: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:259 BNE @UNKNOWN11
    case 0xC3E6A0: cpu.execute_instruction<0xD0>(0x00008D, 2); return true;
    // src/text/close_window.asm:261 JSL UNKNOWN_C45E96
    case 0xC3E6A2: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/text/close_window.asm:262 LDX @LOCAL02
    case 0xC3E6A6: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/close_window.asm:264 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC3E6A8: cpu.execute_instruction<0xBD>(0x00868B, 3); return true;
    // src/text/close_window.asm:265 AND #$00FF
    case 0xC3E6AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC3E6AB.
    case 0xC3E6AD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/close_window.asm:266 BEQ @UNKNOWN15
    case 0xC3E6AE: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/close_window.asm:267 AND #$00FF
    case 0xC3E6B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC3E6B0.
    case 0xC3E6B2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/close_window.asm:268 DEC
    case 0xC3E6B3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:269 ASL
    case 0xC3E6B4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:270 TAX
    case 0xC3E6B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    case 0xC3E6B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E6B6.
    case 0xC3E6B8: cpu.execute_instruction<0xFF>(0x894E9D, 4); return true;
    // src/text/close_window.asm:272 STA TITLED_WINDOWS,X
    case 0xC3E6B9: cpu.execute_instruction<0x9D>(0x00894E, 3); return true;
    // src/text/close_window.asm:274 LDA @VIRTUAL04
    case 0xC3E6BC: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    case 0xC3E6BE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC3E6BE.
    case 0xC3E6C0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:276 JSL MULT168
    case 0xC3E6C1: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/close_window.asm:277 TAX
    case 0xC3E6C5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E6C6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/close_window.asm:279 STZ WINDOW_STATS + window_stats::unknown59,X
    case 0xC3E6C8: cpu.execute_instruction<0x9E>(0x00868B, 3); return true;
    // src/text/close_window.asm:280 LDA #1
    case 0xC3E6CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    case 0xC3E6CD: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC3E6CB.
    case 0xC3E6CE: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/text/close_window.asm:282 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6D0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/close_window.asm:283 LDA PAGINATION_WINDOW
    case 0xC3E6D2: cpu.execute_instruction<0xAD>(0x005E7A, 3); return true;
    // src/text/close_window.asm:284 CMP @LOCAL04
    case 0xC3E6D5: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/text/close_window.asm:285 BNE @UNKNOWN16
    case 0xC3E6D7: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    case 0xC3E6D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC3E6D9.
    case 0xC3E6DB: cpu.execute_instruction<0xFF>(0x5E7A8D, 4); return true;
    // src/text/close_window.asm:287 STA PAGINATION_WINDOW
    case 0xC3E6DC: cpu.execute_instruction<0x8D>(0x005E7A, 3); return true;
    // src/text/close_window.asm:290 LDA EXTRA_TICK_ON_WINDOW_CLOSE
    case 0xC3E6DF: cpu.execute_instruction<0xAD>(0x005E70, 3); return true;
    // src/text/close_window.asm:291 AND #$00FF
    case 0xC3E6E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:291 AND #$00FF
    // Overlapping static entry reached from 0xC3E6E2.
    case 0xC3E6E4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/close_window.asm:292 BNE @UNKNOWN17
    case 0xC3E6E5: cpu.execute_instruction<0xD0>(0x000008, 2); return true;
    // src/text/close_window.asm:293 JSL WINDOW_TICK_WITHOUT_INSTANT_PRINTING
    case 0xC3E6E7: cpu.execute_instruction<0x22>(0xC3E4E0, 4); return true;
    // src/text/close_window.asm:294 JSL CLEAR_INSTANT_PRINTING
    case 0xC3E6EB: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/close_window.asm:297 SEP #PROC_FLAGS::ACCUM8
    case 0xC3E6EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/close_window.asm:298 STZ VWF_INDENT_NEW_LINE
    case 0xC3E6F1: cpu.execute_instruction<0x9C>(0x005E75, 3); return true;
    // src/text/close_window.asm:303 REP #PROC_FLAGS::ACCUM8
    case 0xC3E6F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC3E6F6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC3E6F7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/coffee_tea_scene.asm (source_named).
bool execute_text_coffee_tea_scene_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/coffee_tea_scene.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC49D6A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC49D6F.
    case 0xC49D71: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D72: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/coffee_tea_scene.asm:7 END_STACK_VARS
    case 0xC49D73: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:8 STA @VIRTUAL02
    case 0xC49D74: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/coffee_tea_scene.asm:8 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC49D71.
    case 0xC49D75: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/text/coffee_tea_scene.asm:9 LDY #0
    case 0xC49D76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/coffee_tea_scene.asm:9 LDY #0
    // Overlapping static entry reached from 0xC49D76.
    case 0xC49D78: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/coffee_tea_scene.asm:10 LDX #1
    case 0xC49D79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene.asm:10 LDX #1
    // Overlapping static entry reached from 0xC49D79.
    case 0xC49D7B: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene.asm:11 TXA
    case 0xC49D7C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:12 JSL FADE_OUT_WITH_MOSAIC
    case 0xC49D7D: cpu.execute_instruction<0x22>(0xC08814, 4); return true;
    // src/text/coffee_tea_scene.asm:13 JSL UNKNOWN_C49A56
    case 0xC49D81: cpu.execute_instruction<0x22>(0xC49A56, 4); return true;
    // src/text/coffee_tea_scene.asm:14 JSL OAM_CLEAR
    case 0xC49D85: cpu.execute_instruction<0x22>(0xC088B1, 4); return true;
    // src/text/coffee_tea_scene.asm:15 LDA @VIRTUAL02
    case 0xC49D89: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/coffee_tea_scene.asm:16 BNE @SELECT_COFFEE_BG1
    case 0xC49D8B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/coffee_tea_scene.asm:17 LDX #BATTLEBG_LAYER::COFFEE2
    case 0xC49D8D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E8, 2); else cpu.execute_instruction<0xA2>(0x0000E8, 3); return true;
    // src/text/coffee_tea_scene.asm:17 LDX #BATTLEBG_LAYER::COFFEE2
    // Overlapping static entry reached from 0xC49D8D.
    case 0xC49D8F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/coffee_tea_scene.asm:18 BRA @SKIP_COFFEE_BG1
    case 0xC49D90: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene.asm:20 LDX #BATTLEBG_LAYER::TEA2
    case 0xC49D92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EA, 2); else cpu.execute_instruction<0xA2>(0x0000EA, 3); return true;
    // src/text/coffee_tea_scene.asm:20 LDX #BATTLEBG_LAYER::TEA2
    // Overlapping static entry reached from 0xC49D92.
    case 0xC49D94: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/coffee_tea_scene.asm:22 LDA @VIRTUAL02
    case 0xC49D95: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/coffee_tea_scene.asm:23 BNE @SELECT_COFFEE_BG2
    case 0xC49D97: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/coffee_tea_scene.asm:24 LDY #BATTLEBG_LAYER::COFFEE1
    case 0xC49D99: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E7, 2); else cpu.execute_instruction<0xA0>(0x0000E7, 3); return true;
    // src/text/coffee_tea_scene.asm:24 LDY #BATTLEBG_LAYER::COFFEE1
    // Overlapping static entry reached from 0xC49D99.
    case 0xC49D9B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/coffee_tea_scene.asm:25 BRA @SKIP_COFFEE_BG2
    case 0xC49D9C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene.asm:27 LDY #BATTLEBG_LAYER::TEA1
    case 0xC49D9E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E9, 2); else cpu.execute_instruction<0xA0>(0x0000E9, 3); return true;
    // src/text/coffee_tea_scene.asm:27 LDY #BATTLEBG_LAYER::TEA1
    // Overlapping static entry reached from 0xC49D9E.
    case 0xC49DA0: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/coffee_tea_scene.asm:29 TYA
    case 0xC49DA1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:30 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC49DA2: cpu.execute_instruction<0x22>(0xC47370, 4); return true;
    // src/text/coffee_tea_scene.asm:31 LDX #1
    case 0xC49DA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene.asm:31 LDX #1
    // Overlapping static entry reached from 0xC49DA6.
    case 0xC49DA8: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene.asm:32 TXA
    case 0xC49DA9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:33 JSL FADE_IN
    case 0xC49DAA: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/text/coffee_tea_scene.asm:34 LDA #28
    case 0xC49DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/text/coffee_tea_scene.asm:34 LDA #28
    // Overlapping static entry reached from 0xC49DAE.
    case 0xC49DB0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/coffee_tea_scene.asm:35 STA FLYOVER_SCREEN_OFFSET
    case 0xC49DB1: cpu.execute_instruction<0x8D>(0x009F2D, 3); return true;
    // src/text/coffee_tea_scene.asm:36 LDA #0
    case 0xC49DB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/coffee_tea_scene.asm:36 LDA #0
    // Overlapping static entry reached from 0xC49DB4.
    case 0xC49DB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/coffee_tea_scene.asm:37 STA @VIRTUAL04
    case 0xC49DB7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/coffee_tea_scene.asm:38 LDA @VIRTUAL02
    case 0xC49DB9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/coffee_tea_scene.asm:39 BNE @SELECT_COFFEE_TEXT
    case 0xC49DBB: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DBD.
    case 0xC49DBF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DC2.
    case 0xC49DC4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene.asm:40 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/coffee_tea_scene.asm:41 BRA @SKIP_COFFEE_TEXT
    case 0xC49DC7: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DC9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000652, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DC9.
    case 0xC49DCB: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DCC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DCB.
    case 0xC49DCD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DCE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DCD.
    case 0xC49DCF: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC49DCE.
    case 0xC49DD0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene.asm:43 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC49DD1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/coffee_tea_scene.asm:45 STZ ENABLE_WORD_WRAP
    case 0xC49DD3: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/text/coffee_tea_scene.asm:47 LDA [@VIRTUAL06]
    case 0xC49DD6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene.asm:48 AND #$00FF
    case 0xC49DD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC49DD8.
    case 0xC49DDA: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/text/coffee_tea_scene.asm:49 INC @VIRTUAL06
    case 0xC49DDB: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene.asm:50 CMP #$00
    case 0xC49DDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/coffee_tea_scene.asm:50 CMP #$00
    // Overlapping static entry reached from 0xC49DDD.
    case 0xC49DDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene.asm:51 BEQ @END_OF_SCRIPT
    case 0xC49DE0: cpu.execute_instruction<0xF0>(0x000076, 2); return true;
    // src/text/coffee_tea_scene.asm:52 CMP #$09
    case 0xC49DE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/coffee_tea_scene.asm:52 CMP #$09
    // Overlapping static entry reached from 0xC49DE2.
    case 0xC49DE4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene.asm:53 BEQ @PARSE_09
    case 0xC49DE5: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/coffee_tea_scene.asm:54 CMP #$01
    case 0xC49DE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/coffee_tea_scene.asm:54 CMP #$01
    // Overlapping static entry reached from 0xC49DE7.
    case 0xC49DE9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene.asm:55 BEQ @PARSE_01
    case 0xC49DEA: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/text/coffee_tea_scene.asm:56 CMP #$08
    case 0xC49DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/coffee_tea_scene.asm:56 CMP #$08
    // Overlapping static entry reached from 0xC49DEC.
    case 0xC49DEE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene.asm:57 BEQ @PARSE_08
    case 0xC49DEF: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/coffee_tea_scene.asm:58 BRA @PRINT_TEXT
    case 0xC49DF1: cpu.execute_instruction<0x80>(0x000058, 2); return true;
    // src/text/coffee_tea_scene.asm:60 LDA @VIRTUAL04
    case 0xC49DF3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/coffee_tea_scene.asm:61 JSL UNKNOWN_C49D1E
    case 0xC49DF5: cpu.execute_instruction<0x22>(0xC49D1E, 4); return true;
    // src/text/coffee_tea_scene.asm:62 TAX
    case 0xC49DF9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:63 STX @LOCAL00
    case 0xC49DFA: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/coffee_tea_scene.asm:64 LDA #24
    case 0xC49DFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/text/coffee_tea_scene.asm:64 LDA #24
    // Overlapping static entry reached from 0xC49DFC.
    case 0xC49DFE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/coffee_tea_scene.asm:65 JSL UNKNOWN_C49B6E
    case 0xC49DFF: cpu.execute_instruction<0x22>(0xC49B6E, 4); return true;
    // src/text/coffee_tea_scene.asm:66 JSL UNKNOWN_C2DB3F
    case 0xC49E03: cpu.execute_instruction<0x22>(0xC2DB3F, 4); return true;
    // src/text/coffee_tea_scene.asm:67 BRA @UNKNOWN9
    case 0xC49E07: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/coffee_tea_scene.asm:69 TXA
    case 0xC49E09: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:70 JSL UNKNOWN_C49D1E
    case 0xC49E0A: cpu.execute_instruction<0x22>(0xC49D1E, 4); return true;
    // src/text/coffee_tea_scene.asm:71 TAX
    case 0xC49E0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:72 STX @LOCAL00
    case 0xC49E0F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/coffee_tea_scene.asm:73 JSR UNKNOWN_C49A4B
    case 0xC49E11: cpu.execute_instruction<0x20>(0x009A4B, 3); return true;
    // src/text/coffee_tea_scene.asm:75 LDX @LOCAL00
    case 0xC49E14: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/coffee_tea_scene.asm:76 CPX #8192
    case 0xC49E16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x002000, 3); return true;
    // src/text/coffee_tea_scene.asm:76 CPX #8192
    // Overlapping static entry reached from 0xC49E16.
    case 0xC49E18: cpu.execute_instruction<0x20>(0x00EE90, 3); return true;
    // src/text/coffee_tea_scene.asm:77 BCC @UNKNOWN8
    case 0xC49E19: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/text/coffee_tea_scene.asm:78 TXA
    case 0xC49E1B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:79 SEC
    case 0xC49E1C: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:80 SBC #8192
    case 0xC49E1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x002000, 3); return true;
    // src/text/coffee_tea_scene.asm:80 SBC #8192
    // Overlapping static entry reached from 0xC49E1D.
    case 0xC49E1F: cpu.execute_instruction<0x20>(0x000485, 3); return true;
    // src/text/coffee_tea_scene.asm:81 STA @VIRTUAL04
    case 0xC49E20: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/coffee_tea_scene.asm:82 LDA #24
    case 0xC49E22: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/text/coffee_tea_scene.asm:82 LDA #24
    // Overlapping static entry reached from 0xC49E22.
    case 0xC49E24: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/coffee_tea_scene.asm:83 JSL UNKNOWN_C49C56
    case 0xC49E25: cpu.execute_instruction<0x22>(0xC49C56, 4); return true;
    // src/text/coffee_tea_scene.asm:84 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49E29: cpu.execute_instruction<0x80>(0x0000AB, 2); return true;
    // src/text/coffee_tea_scene.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC49E2B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/coffee_tea_scene.asm:87 LDA [@VIRTUAL06]
    case 0xC49E2D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene.asm:88 REP #PROC_FLAGS::ACCUM8
    case 0xC49E2F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/coffee_tea_scene.asm:89 INC @VIRTUAL06
    case 0xC49E31: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene.asm:90 JSL UNKNOWN_C49CA8
    case 0xC49E33: cpu.execute_instruction<0x22>(0xC49CA8, 4); return true;
    // src/text/coffee_tea_scene.asm:91 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49E37: cpu.execute_instruction<0x80>(0x00009D, 2); return true;
    // src/text/coffee_tea_scene.asm:93 LDA [@VIRTUAL06]
    case 0xC49E39: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene.asm:94 AND #$00FF
    case 0xC49E3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene.asm:94 AND #$00FF
    // Overlapping static entry reached from 0xC49E3B.
    case 0xC49E3D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/coffee_tea_scene.asm:95 TAY
    case 0xC49E3E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:96 INC @VIRTUAL06
    case 0xC49E3F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene.asm:97 LDX #12
    case 0xC49E41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/coffee_tea_scene.asm:97 LDX #12
    // Overlapping static entry reached from 0xC49E41.
    case 0xC49E43: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/coffee_tea_scene.asm:98 TYA
    case 0xC49E44: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:99 JSL UNKNOWN_C49CC3
    case 0xC49E45: cpu.execute_instruction<0x22>(0xC49CC3, 4); return true;
    // src/text/coffee_tea_scene.asm:100 BRA @SCRIPT_PARSE_BEGIN
    case 0xC49E49: cpu.execute_instruction<0x80>(0x00008B, 2); return true;
    // src/text/coffee_tea_scene.asm:102 LDY #12
    case 0xC49E4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/text/coffee_tea_scene.asm:102 LDY #12
    // Overlapping static entry reached from 0xC49E4B.
    case 0xC49E4D: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/coffee_tea_scene.asm:103 LDX #0
    case 0xC49E4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/coffee_tea_scene.asm:103 LDX #0
    // Overlapping static entry reached from 0xC49E4E.
    case 0xC49E50: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/coffee_tea_scene.asm:104 JSL UNKNOWN_C49D16
    case 0xC49E51: cpu.execute_instruction<0x22>(0xC49D16, 4); return true;
    // src/text/coffee_tea_scene.asm:105 JMP @SCRIPT_PARSE_BEGIN
    case 0xC49E55: cpu.execute_instruction<0x4C>(0x009DD6, 3); return true;
    // src/text/coffee_tea_scene.asm:107 LDX #1
    case 0xC49E58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene.asm:107 LDX #1
    // Overlapping static entry reached from 0xC49E58.
    case 0xC49E5A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene.asm:108 TXA
    case 0xC49E5B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:109 JSL FADE_OUT
    case 0xC49E5C: cpu.execute_instruction<0x22>(0xC0887A, 4); return true;
    // src/text/coffee_tea_scene.asm:110 BRA @UNKNOWN15
    case 0xC49E60: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene.asm:112 JSR UNKNOWN_C49A4B
    case 0xC49E62: cpu.execute_instruction<0x20>(0x009A4B, 3); return true;
    // src/text/coffee_tea_scene.asm:114 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC49E65: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/text/coffee_tea_scene.asm:115 AND #$00FF
    case 0xC49E68: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene.asm:115 AND #$00FF
    // Overlapping static entry reached from 0xC49E68.
    case 0xC49E6A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/coffee_tea_scene.asm:116 BNE @UNKNOWN14
    case 0xC49E6B: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/text/coffee_tea_scene.asm:117 JSL UNKNOWN_C08726
    case 0xC49E6D: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/text/coffee_tea_scene.asm:118 JSL RELOAD_MAP
    case 0xC49E71: cpu.execute_instruction<0x22>(0xC018F3, 4); return true;
    // src/text/coffee_tea_scene.asm:119 LDY #.LOWORD(BG2_BUFFER)
    case 0xC49E75: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000FE, 2); else cpu.execute_instruction<0xA0>(0x007DFE, 3); return true;
    // src/text/coffee_tea_scene.asm:119 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC49E75.
    case 0xC49E77: cpu.execute_instruction<0x7D>(0x0080A2, 3); return true;
    // src/text/coffee_tea_scene.asm:120 LDX #896
    case 0xC49E78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/text/coffee_tea_scene.asm:120 LDX #896
    // Overlapping static entry reached from 0xC49E78.
    case 0xC49E7A: cpu.execute_instruction<0x03>(0x000080, 2); return true;
    // src/text/coffee_tea_scene.asm:121 BRA @UNKNOWN17
    case 0xC49E7B: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/coffee_tea_scene.asm:121 BRA @UNKNOWN17
    // Overlapping static entry reached from 0xC49E7A.
    case 0xC49E7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A9, 2); else cpu.execute_instruction<0x09>(0x0000A9, 3); return true;
    // src/text/coffee_tea_scene.asm:123 LDA #0
    case 0xC49E7D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/coffee_tea_scene.asm:123 LDA #0
    // Overlapping static entry reached from 0xC49E7C.
    case 0xC49E7E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/coffee_tea_scene.asm:123 LDA #0
    // Overlapping static entry reached from 0xC49E7D.
    case 0xC49E7F: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/text/coffee_tea_scene.asm:124 STA __BSS_START__,Y
    case 0xC49E80: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/coffee_tea_scene.asm:125 INY
    case 0xC49E83: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:126 INY
    case 0xC49E84: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:127 DEX
    case 0xC49E85: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:129 BNE @UNKNOWN16
    case 0xC49E86: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/text/coffee_tea_scene.asm:130 LDA #$00FF
    case 0xC49E88: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene.asm:130 LDA #$00FF
    // Overlapping static entry reached from 0xC49E88.
    case 0xC49E8A: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/coffee_tea_scene.asm:131 STA ENABLE_WORD_WRAP
    case 0xC49E8B: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/text/coffee_tea_scene.asm:132 JSL UNKNOWN_C08726
    case 0xC49E8E: cpu.execute_instruction<0x22>(0xC08726, 4); return true;
    // src/text/coffee_tea_scene.asm:132 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC49ED2.
    case 0xC49E91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x000B22, 3); return true;
    // src/text/coffee_tea_scene.asm:133 JSL UNDRAW_FLYOVER_TEXT
    case 0xC49E92: cpu.execute_instruction<0x22>(0xC4800B, 4); return true;
    // src/text/coffee_tea_scene.asm:133 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC49E91.
    case 0xC49E93: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:133 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC49E91.
    case 0xC49E94: cpu.execute_instruction<0x80>(0x0000C4, 2); return true;
    // src/text/coffee_tea_scene.asm:134 JSL UNKNOWN_C08744
    case 0xC49E96: cpu.execute_instruction<0x22>(0xC08744, 4); return true;
    // src/text/coffee_tea_scene.asm:135 LDX #1
    case 0xC49E9A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene.asm:135 LDX #1
    // Overlapping static entry reached from 0xC49E9A.
    case 0xC49E9C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene.asm:136 TXA
    case 0xC49E9D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene.asm:137 JSL FADE_IN
    case 0xC49E9E: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/coffee_tea_scene.asm:138 END_C_FUNCTION
    case 0xC49EA2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/coffee_tea_scene.asm:138 END_C_FUNCTION
    case 0xC49EA3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/copy_enemy_name.asm (source_named).
bool execute_text_copy_enemy_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/copy_enemy_name.asm:3 BEGIN_C_FUNCTION
    case 0xC23B66: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23B68: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23B69: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23B6A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23B6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23B6B.
    case 0xC23B6D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23B6E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23B6F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:11 STX @VIRTUAL02
    case 0xC23B70: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC23B6D.
    case 0xC23B71: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/text/copy_enemy_name.asm:12 TAY
    case 0xC23B72: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23B73: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23B75: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23B77: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23B79: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/copy_enemy_name.asm:14 BRA @UNKNOWN5
    case 0xC23B7B: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/copy_enemy_name.asm:16 LDA [@VIRTUAL06]
    case 0xC23B7D: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/copy_enemy_name.asm:17 AND #$00FF
    case 0xC23B7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/copy_enemy_name.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC23B7F.
    case 0xC23B81: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/copy_enemy_name.asm:18 TAX
    case 0xC23B82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:19 BEQ @UNKNOWN6
    case 0xC23B83: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/text/copy_enemy_name.asm:20 CPX #CHAR::NESS_PLACEHOLDER
    case 0xC23B85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AC, 2); else cpu.execute_instruction<0xE0>(0x0000AC, 3); return true;
    // src/text/copy_enemy_name.asm:20 CPX #CHAR::NESS_PLACEHOLDER
    // Overlapping static entry reached from 0xC23B85.
    case 0xC23B87: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/copy_enemy_name.asm:21 BNE @UNKNOWN3
    case 0xC23B88: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/text/copy_enemy_name.asm:22 LDX #0
    case 0xC23B8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:22 LDX #0
    // Overlapping static entry reached from 0xC23B8A.
    case 0xC23B8C: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/copy_enemy_name.asm:23 BRA @UNKNOWN2
    case 0xC23B8D: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/copy_enemy_name.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B8F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:26 LDA PARTY_CHARACTERS+char_struct::name,X
    case 0xC23B91: cpu.execute_instruction<0xBD>(0x0099CE, 3); return true;
    // src/text/copy_enemy_name.asm:27 STA @LOCAL00
    case 0xC23B94: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/copy_enemy_name.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC23B96: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:29 AND #$00FF
    case 0xC23B98: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/copy_enemy_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23B98.
    case 0xC23B9A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/copy_enemy_name.asm:30 BEQ @UNKNOWN4
    case 0xC23B9B: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/text/copy_enemy_name.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B9D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:32 LDA @LOCAL00
    case 0xC23B9F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/copy_enemy_name.asm:33 STA __BSS_START__,Y
    case 0xC23BA1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:34 INY
    case 0xC23BA4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:35 INX
    case 0xC23BA5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:37 CPX #.SIZEOF(char_struct::name)
    case 0xC23BA6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000005, 2); else cpu.execute_instruction<0xE0>(0x000005, 3); return true;
    // src/text/copy_enemy_name.asm:37 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23BA6.
    case 0xC23BA8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/copy_enemy_name.asm:38 BCC @UNKNOWN1
    case 0xC23BA9: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/text/copy_enemy_name.asm:39 BRA @UNKNOWN4
    case 0xC23BAB: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/copy_enemy_name.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:42 STA __BSS_START__,Y
    case 0xC23BAF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:43 INY
    case 0xC23BB2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC23BB3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:46 INC @VIRTUAL06
    case 0xC23BB5: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/copy_enemy_name.asm:48 LDX @VIRTUAL02
    case 0xC23BB7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:49 LDA @VIRTUAL02
    case 0xC23BB9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:50 DEC
    case 0xC23BBB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:51 STA @VIRTUAL02
    case 0xC23BBC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:52 CPX #0
    case 0xC23BBE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:52 CPX #0
    // Overlapping static entry reached from 0xC23BBE.
    case 0xC23BC0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/copy_enemy_name.asm:53 BNE @UNKNOWN0
    case 0xC23BC1: cpu.execute_instruction<0xD0>(0x0000BA, 2); return true;
    // src/text/copy_enemy_name.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BC3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:56 LDA #0
    case 0xC23BC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009900, 3); return true;
    // src/text/copy_enemy_name.asm:57 STA __BSS_START__,Y
    case 0xC23BC7: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:57 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC23BC5.
    case 0xC23BC8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/copy_enemy_name.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC23BCA: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:59 TYA
    case 0xC23BCC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/copy_enemy_name.asm:60 END_C_FUNCTION
    case 0xC23BCD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/copy_enemy_name.asm:60 END_C_FUNCTION
    case 0xC23BCE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/create_window.asm (source_named).
bool execute_text_create_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window.asm:3 BEGIN_C_FUNCTION
    case 0xC104EE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F1: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC104F3.
    case 0xC104F5: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC104F7: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/create_window.asm:29 TAY
    case 0xC104F8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/create_window.asm:30 STY @LOCAL03
    case 0xC104F9: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/create_window.asm:36 TYA
    case 0xC104FB: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:37 ASL
    case 0xC104FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:38 CLC
    case 0xC104FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC104FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x0088E4, 3); return true;
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC104FE.
    case 0xC10500: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/create_window.asm:40 TAX
    case 0xC10501: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:41 STX @LOCAL02_1
    case 0xC10502: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/create_window.asm:42 LDA __BSS_START__,X
    case 0xC10504: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/create_window.asm:43 CMP #$FFFF
    case 0xC10507: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:43 CMP #$FFFF
    // Overlapping static entry reached from 0xC10507.
    case 0xC10509: cpu.execute_instruction<0xFF>(0x8C1CF0, 4); return true;
    // src/text/create_window.asm:44 BEQ @UNKNOWN0
    case 0xC1050A: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    case 0xC1050C: cpu.execute_instruction<0x8C>(0x008958, 3); return true;
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10509.
    case 0xC1050D: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1050D.
    case 0xC1050E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000020, 2); else cpu.execute_instruction<0x89>(0x008320, 3); return true;
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    case 0xC1050F: cpu.execute_instruction<0x20>(0x001383, 3); return true;
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    // Overlapping static entry reached from 0xC1050E.
    case 0xC10510: cpu.execute_instruction<0x83>(0x000013, 2); return true;
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    // Overlapping static entry reached from 0xC1050E.
    case 0xC10511: cpu.execute_instruction<0x13>(0x0000A6, 2); return true;
    // src/text/create_window.asm:47 LDX @LOCAL02_1
    case 0xC10512: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/create_window.asm:47 LDX @LOCAL02_1
    // Overlapping static entry reached from 0xC10511.
    case 0xC10513: cpu.execute_instruction<0x12>(0x0000BD, 2); return true;
    // src/text/create_window.asm:48 LDA __BSS_START__,X
    case 0xC10514: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/create_window.asm:48 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC10513.
    case 0xC10515: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC10517: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10517.
    case 0xC10519: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:50 JSL MULT168
    case 0xC1051A: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/create_window.asm:51 CLC
    case 0xC1051E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1051F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1051F.
    case 0xC10521: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/text/create_window.asm:53 TAX
    case 0xC10522: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:54 STX @LOCAL01
    case 0xC10523: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/create_window.asm:55 JMP @UNKNOWN8
    case 0xC10525: cpu.execute_instruction<0x4C>(0x000644, 3); return true;
    // src/text/create_window.asm:57 JSR UNKNOWN_C3E4EF
    case 0xC10528: cpu.execute_instruction<0x22>(0xC3E4EF, 4); return true;
    // src/text/create_window.asm:58 STA @LOCAL00
    case 0xC1052C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/create_window.asm:59 CMP #$FFFF
    case 0xC1052E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:59 CMP #$FFFF
    // Overlapping static entry reached from 0xC1052E.
    case 0xC10530: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC10531: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC10533: cpu.execute_instruction<0x4C>(0x00078B, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC10530.
    case 0xC10534: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC10534.
    case 0xC10535: cpu.execute_instruction<0x07>(0x0000A0, 2); return true;
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC10536: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10535.
    case 0xC10537: cpu.execute_instruction<0x52>(0x000000, 2); return true;
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10536.
    case 0xC10538: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:62 JSL MULT168
    case 0xC10539: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/create_window.asm:63 CLC
    case 0xC1053D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1053E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1053E.
    case 0xC10540: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/text/create_window.asm:65 TAX
    case 0xC10541: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:66 STX @LOCAL01
    case 0xC10542: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/create_window.asm:67 LDY @LOCAL03
    case 0xC10544: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/create_window.asm:68 CPY #10
    case 0xC10546: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/text/create_window.asm:68 CPY #10
    // Overlapping static entry reached from 0xC10546.
    case 0xC10548: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/create_window.asm:69 BNE @UNKNOWN4
    case 0xC10549: cpu.execute_instruction<0xD0>(0x00003A, 2); return true;
    // src/text/create_window.asm:70 LDA WINDOW_HEAD
    case 0xC1054B: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/text/create_window.asm:71 CMP #$FFFF
    case 0xC1054E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:71 CMP #$FFFF
    // Overlapping static entry reached from 0xC1054E.
    case 0xC10550: cpu.execute_instruction<0xFF>(0xA90DD0, 4); return true;
    // src/text/create_window.asm:72 BNE @UNKNOWN2
    case 0xC10551: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/text/create_window.asm:73 LDA #$FFFF
    case 0xC10553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC10550.
    case 0xC10554: cpu.execute_instruction<0xFF>(0x029DFF, 4); return true;
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC10553.
    case 0xC10555: cpu.execute_instruction<0xFF>(0x00029D, 4); return true;
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    case 0xC10556: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC10554.
    case 0xC10558: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/create_window.asm:75 LDA @LOCAL00
    case 0xC10559: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:76 STA WINDOW_TAIL
    case 0xC1055B: cpu.execute_instruction<0x8D>(0x0088E2, 3); return true;
    // src/text/create_window.asm:77 BRA @UNKNOWN3
    case 0xC1055E: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/create_window.asm:79 LDA WINDOW_HEAD
    case 0xC10560: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    case 0xC10563: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10563.
    case 0xC10565: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:81 JSL MULT168
    case 0xC10566: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/create_window.asm:82 TAX
    case 0xC1056A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:83 LDA @LOCAL00
    case 0xC1056B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:84 STA WINDOW_STATS + window_stats::prev,X
    case 0xC1056D: cpu.execute_instruction<0x9D>(0x008650, 3); return true;
    // src/text/create_window.asm:85 LDA WINDOW_HEAD
    case 0xC10570: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/text/create_window.asm:86 LDX @LOCAL01
    case 0xC10573: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:87 STA a:window_stats::next,X
    case 0xC10575: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/text/create_window.asm:89 LDA #$FFFF
    case 0xC10578: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:89 LDA #$FFFF
    // Overlapping static entry reached from 0xC10578.
    case 0xC1057A: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/text/create_window.asm:90 STA a:window_stats::prev,X
    case 0xC1057B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/create_window.asm:91 LDA @LOCAL00
    case 0xC1057E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:92 STA WINDOW_HEAD
    case 0xC10580: cpu.execute_instruction<0x8D>(0x0088E0, 3); return true;
    // src/text/create_window.asm:93 BRA @UNKNOWN7
    case 0xC10583: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/text/create_window.asm:95 LDA WINDOW_HEAD
    case 0xC10585: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/text/create_window.asm:96 CMP #$FFFF
    case 0xC10588: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:96 CMP #$FFFF
    // Overlapping static entry reached from 0xC10588.
    case 0xC1058A: cpu.execute_instruction<0xFF>(0xA90DD0, 4); return true;
    // src/text/create_window.asm:97 BNE @UNKNOWN5
    case 0xC1058B: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/text/create_window.asm:98 LDA #$FFFF
    case 0xC1058D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC1058A.
    case 0xC1058E: cpu.execute_instruction<0xFF>(0x009DFF, 4); return true;
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC1058D.
    case 0xC1058F: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    case 0xC10590: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    // Overlapping static entry reached from 0xC1058E.
    case 0xC10592: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/create_window.asm:100 LDA @LOCAL00
    case 0xC10593: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:101 STA WINDOW_HEAD
    case 0xC10595: cpu.execute_instruction<0x8D>(0x0088E0, 3); return true;
    // src/text/create_window.asm:102 BRA @UNKNOWN6
    case 0xC10598: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/create_window.asm:104 LDA WINDOW_TAIL
    case 0xC1059A: cpu.execute_instruction<0xAD>(0x0088E2, 3); return true;
    // src/text/create_window.asm:105 STA a:window_stats::prev,X
    case 0xC1059D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/create_window.asm:106 LDA WINDOW_TAIL
    case 0xC105A0: cpu.execute_instruction<0xAD>(0x0088E2, 3); return true;
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    case 0xC105A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC105A3.
    case 0xC105A5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:108 JSL MULT168
    case 0xC105A6: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/create_window.asm:109 TAX
    case 0xC105AA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:110 LDA @LOCAL00
    case 0xC105AB: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:111 STA WINDOW_STATS + window_stats::next,X
    case 0xC105AD: cpu.execute_instruction<0x9D>(0x008652, 3); return true;
    // src/text/create_window.asm:113 STA WINDOW_TAIL
    case 0xC105B0: cpu.execute_instruction<0x8D>(0x0088E2, 3); return true;
    // src/text/create_window.asm:114 LDA #$FFFF
    case 0xC105B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:114 LDA #$FFFF
    // Overlapping static entry reached from 0xC105B3.
    case 0xC105B5: cpu.execute_instruction<0xFF>(0x9D10A6, 4); return true;
    // src/text/create_window.asm:115 LDX @LOCAL01
    case 0xC105B6: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    case 0xC105B8: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC105B5.
    case 0xC105B9: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/create_window.asm:118 LDY @LOCAL03
    case 0xC105BB: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/create_window.asm:119 TYA
    case 0xC105BD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:120 STA a:window_stats::id,X
    case 0xC105BE: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/text/create_window.asm:121 TYA
    case 0xC105C1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:122 ASL
    case 0xC105C2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:123 TAX
    case 0xC105C3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:124 LDA @LOCAL00
    case 0xC105C4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:125 STA OPEN_WINDOW_TABLE,X
    case 0xC105C6: cpu.execute_instruction<0x9D>(0x0088E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x00E250, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105C9.
    case 0xC105CB: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105CC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105CB.
    case 0xC105CD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105CD.
    case 0xC105CF: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC105CE.
    case 0xC105D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC105D1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:127 TYA
    case 0xC105D3: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:128 ASL
    case 0xC105D4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:129 ASL
    case 0xC105D5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:130 ASL
    case 0xC105D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:131 STA @TMP00
    case 0xC105D7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105D9: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105DB: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105DD: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC105DF: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/create_window.asm:133 CLC
    case 0xC105E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:134 ADC @VIRTUAL0A
    case 0xC105E2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/create_window.asm:135 STA @VIRTUAL0A
    case 0xC105E4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/create_window.asm:136 LDA [@VIRTUAL0A]
    case 0xC105E6: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/create_window.asm:137 LDX @LOCAL01
    case 0xC105E8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:138 STA a:window_stats::window_x,X
    case 0xC105EA: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/create_window.asm:139 LDA @TMP00
    case 0xC105ED: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:140 INC
    case 0xC105EF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:141 INC
    case 0xC105F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F1: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F3: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F5: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC105F7: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10636.
    case 0xC105F8: cpu.execute_instruction<0x0C>(0x006518, 3); return true;
    // src/text/create_window.asm:143 CLC
    case 0xC105F9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    case 0xC105FA: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC105F8.
    case 0xC105FB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:145 STA @VIRTUAL0A
    case 0xC105FC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/create_window.asm:146 LDA [@VIRTUAL0A]
    case 0xC105FE: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/create_window.asm:147 STA a:window_stats::window_y,X
    case 0xC10600: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/text/create_window.asm:148 LDA @TMP00
    case 0xC10603: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:149 INC
    case 0xC10605: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:150 INC
    case 0xC10606: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:151 INC
    case 0xC10607: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:152 INC
    case 0xC10608: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10609: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1060B: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1060D: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1060F: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/text/create_window.asm:154 CLC
    case 0xC10611: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:155 ADC @VIRTUAL0A
    case 0xC10612: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/create_window.asm:156 STA @VIRTUAL0A
    case 0xC10614: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/create_window.asm:157 LDA [@VIRTUAL0A]
    case 0xC10616: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/create_window.asm:158 DEC
    case 0xC10618: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:159 DEC
    case 0xC10619: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:160 STA a:window_stats::width,X
    case 0xC1061A: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/text/create_window.asm:161 LDA @TMP00
    case 0xC1061D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:162 CLC
    case 0xC1061F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:163 ADC #6
    case 0xC10620: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/create_window.asm:163 ADC #6
    // Overlapping static entry reached from 0xC10620.
    case 0xC10622: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/create_window.asm:164 CLC
    case 0xC10623: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:165 ADC @VIRTUAL06
    case 0xC10624: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/create_window.asm:166 STA @VIRTUAL06
    case 0xC10626: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/create_window.asm:167 LDA [@VIRTUAL06]
    case 0xC10628: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/create_window.asm:168 DEC
    case 0xC1062A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:169 DEC
    case 0xC1062B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:170 STA a:window_stats::height,X
    case 0xC1062C: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/text/create_window.asm:171 LDY #504 * 2
    case 0xC1062F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0003F0, 3); return true;
    // src/text/create_window.asm:171 LDY #504 * 2
    // Overlapping static entry reached from 0xC1062F.
    case 0xC10631: cpu.execute_instruction<0x03>(0x0000A5, 2); return true;
    // src/text/create_window.asm:172 LDA @LOCAL00
    case 0xC10632: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:172 LDA @LOCAL00
    // Overlapping static entry reached from 0xC10631.
    case 0xC10633: cpu.execute_instruction<0x0E>(0x003222, 3); return true;
    // src/text/create_window.asm:173 JSL MULT16
    case 0xC10634: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/text/create_window.asm:173 JSL MULT16
    // Overlapping static entry reached from 0xC10633.
    case 0xC10636: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/text/create_window.asm:174 CLC
    case 0xC10638: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    case 0xC10639: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007E, 2); else cpu.execute_instruction<0x69>(0x005E7E, 3); return true;
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    // Overlapping static entry reached from 0xC10639.
    case 0xC1063B: cpu.execute_instruction<0x5E>(0x00359D, 3); return true;
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    case 0xC1063C: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    // Overlapping static entry reached from 0xC1063B.
    case 0xC1063E: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/create_window.asm:177 LDY @LOCAL03
    case 0xC1063F: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/create_window.asm:178 STY CURRENT_FOCUS_WINDOW
    case 0xC10641: cpu.execute_instruction<0x8C>(0x008958, 3); return true;
    // src/text/create_window.asm:181 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10644: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/create_window.asm:182 STA @LOCAL02_1
    case 0xC10647: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/create_window.asm:183 LDX @LOCAL01
    case 0xC10649: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:185 STZ a:window_stats::text_y,X
    case 0xC1064B: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/text/create_window.asm:186 STZ a:window_stats::text_x,X
    case 0xC1064E: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/text/create_window.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC10651: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/create_window.asm:188 LDA #128
    case 0xC10653: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x009D80, 3); return true;
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    case 0xC10655: cpu.execute_instruction<0x9D>(0x000012, 3); return true;
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    // Overlapping static entry reached from 0xC10653.
    case 0xC10656: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/text/create_window.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC10658: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/create_window.asm:191 STZ a:window_stats::curr_tile_attributes,X
    case 0xC1065A: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/text/create_window.asm:192 STZ a:window_stats::font,X
    case 0xC1065D: cpu.execute_instruction<0x9E>(0x000015, 3); return true;
    // src/text/create_window.asm:193 LDA @LOCAL02_2
    case 0xC10660: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:194 CLC
    case 0xC10662: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    case 0xC10663: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10663.
    case 0xC10665: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:196 TAY
    case 0xC10666: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10667: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1066A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1066C: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1066F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:198 TXA
    case 0xC10671: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:199 CLC
    case 0xC10672: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    case 0xC10673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10673.
    case 0xC10675: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:201 TAY
    case 0xC10676: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10677: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10679: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1067E: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:203 LDA @LOCAL02_2
    case 0xC10681: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:204 CLC
    case 0xC10683: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    case 0xC10684: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10684.
    case 0xC10686: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:206 TAY
    case 0xC10687: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10688: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1068B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1068D: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10690: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:208 TXA
    case 0xC10692: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:209 CLC
    case 0xC10693: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    case 0xC10694: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10694.
    case 0xC10696: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:211 TAY
    case 0xC10697: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10698: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1069A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1069D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1069F: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:213 LDA @LOCAL02_2
    case 0xC106A2: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:214 CLC
    case 0xC106A4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    case 0xC106A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC106A5.
    case 0xC106A7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:216 TAY
    case 0xC106A8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106A9: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106AE: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106B1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:218 TXA
    case 0xC106B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:219 CLC
    case 0xC106B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    case 0xC106B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC106B5.
    case 0xC106B7: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:221 TAY
    case 0xC106B8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106B9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106BB: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106BE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106C0: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:223 LDA @LOCAL02_2
    case 0xC106C3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:224 CLC
    case 0xC106C5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    case 0xC106C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC106C6.
    case 0xC106C8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:226 TAY
    case 0xC106C9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106CA: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106CF: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC106D2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:228 TXA
    case 0xC106D4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:229 CLC
    case 0xC106D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    case 0xC106D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC106D6.
    case 0xC106D8: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:231 TAY
    case 0xC106D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106DA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106DC: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106DF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC106E1: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:236 LDA @LOCAL02_2
    case 0xC106E4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:237 TAX
    case 0xC106E6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:239 LDA a:window_stats::secondary_memory,X
    case 0xC106E7: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/text/create_window.asm:240 LDX @LOCAL01
    case 0xC106EA: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:241 STA a:window_stats::secondary_memory,X
    case 0xC106EC: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/text/create_window.asm:245 LDA @LOCAL02_2
    case 0xC106EF: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:246 TAX
    case 0xC106F1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:248 LDA a:window_stats::secondary_memory_storage,X
    case 0xC106F2: cpu.execute_instruction<0xBD>(0x000029, 3); return true;
    // src/text/create_window.asm:249 LDX @LOCAL01
    case 0xC106F5: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:250 STA a:window_stats::secondary_memory_storage,X
    case 0xC106F7: cpu.execute_instruction<0x9D>(0x000029, 3); return true;
    // src/text/create_window.asm:251 LDA #$FFFF
    case 0xC106FA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:251 LDA #$FFFF
    // Overlapping static entry reached from 0xC106FA.
    case 0xC106FC: cpu.execute_instruction<0xFF>(0x002F9D, 4); return true;
    // src/text/create_window.asm:252 STA a:window_stats::selected_option,X
    case 0xC106FD: cpu.execute_instruction<0x9D>(0x00002F, 3); return true;
    // src/text/create_window.asm:253 STA a:window_stats::option_count,X
    case 0xC10700: cpu.execute_instruction<0x9D>(0x00002D, 3); return true;
    // src/text/create_window.asm:254 STA a:window_stats::current_option,X
    case 0xC10703: cpu.execute_instruction<0x9D>(0x00002B, 3); return true;
    // src/text/create_window.asm:255 LDA #1
    case 0xC10706: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/create_window.asm:255 LDA #1
    // Overlapping static entry reached from 0xC10706.
    case 0xC10708: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/text/create_window.asm:256 STA a:window_stats::unknown49,X
    case 0xC10709: cpu.execute_instruction<0x9D>(0x000031, 3); return true;
    // src/text/create_window.asm:257 STA a:window_stats::menu_page_number,X
    case 0xC1070C: cpu.execute_instruction<0x9D>(0x000033, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1070F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1070F.
    case 0xC10711: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10712: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10714: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC10714.
    case 0xC10716: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10717: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:259 TXA
    case 0xC10719: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:260 CLC
    case 0xC1071A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    case 0xC1071B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1071B.
    case 0xC1071D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:262 TAY
    case 0xC1071E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1071F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10721: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10724: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10726: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:264 LDY a:window_stats::tilemap_address,X
    case 0xC10729: cpu.execute_instruction<0xBC>(0x000035, 3); return true;
    // src/text/create_window.asm:265 STY @LOCAL00
    case 0xC1072C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/create_window.asm:266 LDY a:window_stats::height,X
    case 0xC1072E: cpu.execute_instruction<0xBC>(0x00000C, 3); return true;
    // src/text/create_window.asm:267 LDA a:window_stats::width,X
    case 0xC10731: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/create_window.asm:268 JSL MULT16
    case 0xC10734: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/text/create_window.asm:269 STA @LOCAL02_3
    case 0xC10738: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/create_window.asm:270 BRA @UNKNOWN11
    case 0xC1073A: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/create_window.asm:273 LDY @LOCAL00
    case 0xC1073C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/create_window.asm:274 LDA __BSS_START__,Y
    case 0xC1073E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/create_window.asm:275 BEQ @UNKNOWN10
    case 0xC10741: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/create_window.asm:276 JSL FREE_TILE_SAFE
    case 0xC10743: cpu.execute_instruction<0x22>(0xC44E4D, 4); return true;
    // src/text/create_window.asm:279 LDA #64
    case 0xC10747: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/create_window.asm:279 LDA #64
    // Overlapping static entry reached from 0xC10747.
    case 0xC10749: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/create_window.asm:280 LDY @LOCAL00
    case 0xC1074A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/create_window.asm:281 STA __BSS_START__,Y
    case 0xC1074C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/create_window.asm:282 INY
    case 0xC1074F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/create_window.asm:283 INY
    case 0xC10750: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/create_window.asm:284 STY @LOCAL00
    case 0xC10751: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/create_window.asm:285 LDA @LOCAL02_3
    case 0xC10753: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:286 DEC
    case 0xC10755: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:287 STA @LOCAL02_3
    case 0xC10756: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/create_window.asm:292 LDA @LOCAL02_3
    case 0xC10758: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:294 BNE @UNKNOWN9
    case 0xC1075A: cpu.execute_instruction<0xD0>(0x0000E0, 2); return true;
    // src/text/create_window.asm:296 LDX @LOCAL01
    case 0xC1075C: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:298 LDA a:window_stats::unknown59,X
    case 0xC1075E: cpu.execute_instruction<0xBD>(0x00003B, 3); return true;
    // src/text/create_window.asm:299 AND #$00FF
    case 0xC10761: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/create_window.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC10761.
    case 0xC10763: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/create_window.asm:300 BEQ @UNKNOWN12
    case 0xC10764: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/create_window.asm:301 AND #$00FF
    case 0xC10766: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/create_window.asm:301 AND #$00FF
    // Overlapping static entry reached from 0xC10766.
    case 0xC10768: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/create_window.asm:302 DEC
    case 0xC10769: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:303 ASL
    case 0xC1076A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:304 TAX
    case 0xC1076B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:305 LDA #$FFFF
    case 0xC1076C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:305 LDA #$FFFF
    // Overlapping static entry reached from 0xC1076C.
    case 0xC1076E: cpu.execute_instruction<0xFF>(0x894E9D, 4); return true;
    // src/text/create_window.asm:306 STA TITLED_WINDOWS,X
    case 0xC1076F: cpu.execute_instruction<0x9D>(0x00894E, 3); return true;
    // src/text/create_window.asm:308 LDX @LOCAL01
    case 0xC10772: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:309 SEP #PROC_FLAGS::ACCUM8
    case 0xC10774: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/create_window.asm:310 STZ a:window_stats::title,X
    case 0xC10776: cpu.execute_instruction<0x9E>(0x00003C, 3); return true;
    // src/text/create_window.asm:311 STZ a:window_stats::unknown59,X
    case 0xC10779: cpu.execute_instruction<0x9E>(0x00003B, 3); return true;
    // src/text/create_window.asm:312 JSL UNKNOWN_C45E96
    case 0xC1077C: cpu.execute_instruction<0x22>(0xC45E96, 4); return true;
    // src/text/create_window.asm:313 SEP #PROC_FLAGS::ACCUM8
    case 0xC10780: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/create_window.asm:314 LDA #1
    case 0xC10782: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    case 0xC10784: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10782.
    case 0xC10785: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/text/create_window.asm:316 JSL UNKNOWN_C07C5B
    case 0xC10787: cpu.execute_instruction<0x22>(0xC07C5B, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC1078B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC1078C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/create_window_redirect.asm (source_named).
bool execute_text_create_window_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD47: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/create_window_redirect.asm:6 JSR CREATE_WINDOW
    case 0xC1DD49: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/create_window_redirect.asm:7 END_C_FUNCTION
    case 0xC1DD4C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/display_in_battle_text.asm (source_named).
bool execute_text_display_in_battle_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_in_battle_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DC1C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DC1E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DC1F: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DC20: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DC20.
    case 0xC1DC22: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DC23: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DC24: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DC26: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DC28: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DC2A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_in_battle_text.asm:9 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    case 0xC1DC2C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B1, 2); else cpu.execute_instruction<0xA2>(0x0098B1, 3); return true;
    // src/text/display_in_battle_text.asm:9 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC1DC2C.
    case 0xC1DC2E: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/display_in_battle_text.asm:10 LDA __BSS_START__,X
    case 0xC1DC2F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/display_in_battle_text.asm:11 AND #$00FF
    case 0xC1DC32: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_in_battle_text.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1DC32.
    case 0xC1DC34: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_in_battle_text.asm:12 BEQ @UNKNOWN0
    case 0xC1DC35: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/text/display_in_battle_text.asm:13 LDA PAD_STATE
    case 0xC1DC37: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/text/display_in_battle_text.asm:14 AND #PAD::B_BUTTON
    case 0xC1DC3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/text/display_in_battle_text.asm:14 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC1DC3A.
    case 0xC1DC3C: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/text/display_in_battle_text.asm:15 BEQ @UNKNOWN0
    case 0xC1DC3D: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/text/display_in_battle_text.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DC3F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/display_in_battle_text.asm:17 LDA #0
    case 0xC1DC41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/text/display_in_battle_text.asm:18 STA __BSS_START__,X
    case 0xC1DC43: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/display_in_battle_text.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1DC41.
    case 0xC1DC44: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/display_in_battle_text.asm:19 JSL UNKNOWN_C20293
    case 0xC1DC46: cpu.execute_instruction<0x22>(0xC20293, 4); return true;
    // src/text/display_in_battle_text.asm:22 LDA BATTLE_MODE_FLAG
    case 0xC1DC4A: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/text/display_in_battle_text.asm:23 BEQ @NO_PROMPT
    case 0xC1DC4D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/display_in_battle_text.asm:24 LDA #2
    case 0xC1DC4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/display_in_battle_text.asm:24 LDA #2
    // Overlapping static entry reached from 0xC1DC4F.
    case 0xC1DC51: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_in_battle_text.asm:25 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DC52: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC55: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC57: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC59: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC5B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_in_battle_text.asm:28 JSL DISPLAY_TEXT
    case 0xC1DC5D: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/display_in_battle_text.asm:29 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DC61: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_in_battle_text.asm:30 END_C_FUNCTION
    case 0xC1DC64: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_in_battle_text.asm:30 END_C_FUNCTION
    case 0xC1DC65: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/display_text.asm (source_named).
bool execute_text_display_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC186B1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    // Overlapping static entry reached from 0xC186B5.
    case 0xC186B7: cpu.execute_instruction<0xFF>(0x32A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text.asm:14 END_STACK_VARS
    case 0xC186B8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186B9: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186BD: cpu.execute_instruction<0xA5>(0x000034, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:15 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC186BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C3: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:16 MOVE_INT @VIRTUAL06, @LOCAL06
    case 0xC186C7: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/display_text.asm:17 LDY #0
    case 0xC186C9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/display_text.asm:17 LDY #0
    // Overlapping static entry reached from 0xC186C9.
    case 0xC186CB: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/display_text.asm:18 STY @LOCAL05
    case 0xC186CC: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00550E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    // Overlapping static entry reached from 0xC186CE.
    case 0xC186D0: cpu.execute_instruction<0x55>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186D1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    // Overlapping static entry reached from 0xC186D0.
    case 0xC186D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    // Overlapping static entry reached from 0xC186D3.
    case 0xC186D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:19 LOADPTR BATTLE_BACK_ROW_TEXT+12, @VIRTUAL0A
    case 0xC186D6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186D8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186DA: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186DC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:20 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC186DE: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC186E0.
    case 0xC186E2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC186E5.
    case 0xC186E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/display_text.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC186E8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186EC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186EE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:22 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC186F0: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:23 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC186F8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC186FA: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC186FC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC186FE: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:24 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18700: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text.asm:25 CMP @VIRTUAL0A+2
    case 0xC18702: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/display_text.asm:26 BNE @UNKNOWN0
    case 0xC18704: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/display_text.asm:27 LDA @VIRTUAL06
    case 0xC18706: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/display_text.asm:28 CMP @VIRTUAL0A
    case 0xC18708: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/display_text.asm:30 BNE @UNKNOWN1
    case 0xC1870A: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC1870C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC1870E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18710: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:31 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18712: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18714: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18716: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18718: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:32 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1871A: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/text/display_text.asm:33 JMP @UNKNOWN74
    case 0xC1871C: cpu.execute_instruction<0x4C>(0x008B2A, 3); return true;
    // src/text/display_text.asm:35 JSR UNKNOWN_C14012
    case 0xC1871F: cpu.execute_instruction<0x20>(0x004012, 3); return true;
    // src/text/display_text.asm:36 STA @LOCAL02
    case 0xC18722: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18724: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18726: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC18728: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:37 MOVE_INT @LOCAL06, @VIRTUAL06
    case 0xC1872A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1872C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1872E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18730: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:38 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18732: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text.asm:39 LDA @LOCAL02
    case 0xC18734: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/display_text.asm:40 JSR UNKNOWN_C1866D
    case 0xC18736: cpu.execute_instruction<0x20>(0x00866D, 3); return true;
    // src/text/display_text.asm:41 STA @VIRTUAL02
    case 0xC18739: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:42 STA @LOCAL01
    case 0xC1873B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/display_text.asm:43 LDA @VIRTUAL02
    case 0xC1873D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text.asm:44 BNE @UNKNOWN2
    case 0xC1873F: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18741: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18743: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18745: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:45 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC18747: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18749: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1874B: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1874D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1874F: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/text/display_text.asm:47 JMP @UNKNOWN74
    case 0xC18751: cpu.execute_instruction<0x4C>(0x008B2A, 3); return true;
    // src/text/display_text.asm:49 LDA ENABLE_WORD_WRAP
    case 0xC18754: cpu.execute_instruction<0xAD>(0x005E6E, 3); return true;
    // src/text/display_text.asm:50 BEQ @UNKNOWN4
    case 0xC18757: cpu.execute_instruction<0xF0>(0x00002E, 2); return true;
    // src/text/display_text.asm:51 LDY @LOCAL05
    case 0xC18759: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/text/display_text.asm:52 BNE @UNKNOWN4
    case 0xC1875B: cpu.execute_instruction<0xD0>(0x00002A, 2); return true;
    // src/text/display_text.asm:53 LDA UPCOMING_WORD_LENGTH
    case 0xC1875D: cpu.execute_instruction<0xAD>(0x009660, 3); return true;
    // src/text/display_text.asm:54 BNE @UNKNOWN3
    case 0xC18760: cpu.execute_instruction<0xD0>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18762: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18764: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18766: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:55 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18768: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1876A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1876C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1876E: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:56 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC18770: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18772: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18774: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18776: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:57 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18778: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text.asm:58 LDA @LOCAL01
    case 0xC1877A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:59 STA @VIRTUAL02
    case 0xC1877C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:60 JSL UNKNOWN_C445E1
    case 0xC1877E: cpu.execute_instruction<0x22>(0xC445E1, 4); return true;
    // src/text/display_text.asm:61 BRA @UNKNOWN4
    case 0xC18782: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/display_text.asm:63 DEC UPCOMING_WORD_LENGTH
    case 0xC18784: cpu.execute_instruction<0xCE>(0x009660, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18787: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC18789: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1878B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:65 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC1878D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/display_text.asm:66 LDA [@VIRTUAL0A]
    case 0xC1878F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/display_text.asm:67 AND #$00FF
    case 0xC18791: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC18791.
    case 0xC18793: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_text.asm:68 BEQ @UNKNOWN5
    case 0xC18794: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/display_text.asm:69 AND #$00FF
    case 0xC18796: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC18796.
    case 0xC18798: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/display_text.asm:70 STA @LOCAL02
    case 0xC18799: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/display_text.asm:71 INC @VIRTUAL0A
    case 0xC1879B: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC1879D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC1879F: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC187A1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:72 MOVE_INT @VIRTUAL0A, @LOCAL04
    case 0xC187A3: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/display_text.asm:73 BRA @UNKNOWN6
    case 0xC187A5: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // src/text/display_text.asm:75 LDA @LOCAL01
    case 0xC187A7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:76 STA @VIRTUAL02
    case 0xC187A9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:77 LDX @VIRTUAL02
    case 0xC187AB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/display_text.asm:78 TXY
    case 0xC187AD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187AE: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187B1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187B3: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:79 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC187B6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text.asm:80 LDA [@VIRTUAL06]
    case 0xC187B8: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/display_text.asm:81 AND #$00FF
    case 0xC187BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:81 AND #$00FF
    // Overlapping static entry reached from 0xC187BA.
    case 0xC187BC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/display_text.asm:82 STA @LOCAL02
    case 0xC187BD: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/display_text.asm:83 INC @VIRTUAL06
    case 0xC187BF: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/display_text.asm:84 TXY
    case 0xC187C1: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C4: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:85 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC187C9: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/display_text.asm:87 LDY @LOCAL05
    case 0xC187CC: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/text/display_text.asm:88 BEQ @UNKNOWN7
    case 0xC187CE: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/text/display_text.asm:89 LDA @LOCAL02
    case 0xC187D0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/display_text.asm:90 TAX
    case 0xC187D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/display_text.asm:91 LDA @LOCAL01
    case 0xC187D3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:92 STA @VIRTUAL02
    case 0xC187D5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:93 STY @VIRTUAL02
    case 0xC187D7: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/display_text.asm:94 STA TEMP_REGISTER
    case 0xC187D9: cpu.execute_instruction<0x8D>(0x0000C0, 3); return true;
    // src/text/display_text.asm:95 PEA .LOWORD(@UNK)
    case 0xC187DC: cpu.execute_instruction<0xF4>(0x0087E6, 3); return true;
    // src/text/display_text.asm:96 LDA @VIRTUAL02
    case 0xC187DF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text.asm:97 DEC
    case 0xC187E1: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/display_text.asm:98 PHA
    case 0xC187E2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/display_text.asm:99 LDA TEMP_REGISTER
    case 0xC187E3: cpu.execute_instruction<0xAD>(0x0000C0, 3); return true;
    // src/text/display_text.asm:101 RTS
    case 0xC187E6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/display_text.asm:102 TAY
    case 0xC187E7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/display_text.asm:103 STY @LOCAL05
    case 0xC187E8: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:104 JMP @UNKNOWN2
    case 0xC187EA: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:106 LDA @LOCAL02
    case 0xC187ED: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/display_text.asm:107 CMP #$15
    case 0xC187EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000015, 2); else cpu.execute_instruction<0xC9>(0x000015, 3); return true;
    // src/text/display_text.asm:107 CMP #$15
    // Overlapping static entry reached from 0xC187EF.
    case 0xC187F1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_text.asm:108 BEQ @COMPRESSION_BANK_ONE
    case 0xC187F2: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/display_text.asm:109 CMP #$16
    case 0xC187F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000016, 2); else cpu.execute_instruction<0xC9>(0x000016, 3); return true;
    // src/text/display_text.asm:109 CMP #$16
    // Overlapping static entry reached from 0xC187F4.
    case 0xC187F6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_text.asm:110 BEQ @COMPRESSION_BANK_TWO
    case 0xC187F7: cpu.execute_instruction<0xF0>(0x000065, 2); return true;
    // src/text/display_text.asm:111 CMP #$17
    case 0xC187F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000017, 2); else cpu.execute_instruction<0xC9>(0x000017, 3); return true;
    // src/text/display_text.asm:111 CMP #$17
    // Overlapping static entry reached from 0xC187F9.
    case 0xC187FB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:112 BEQL @COMPRESSION_BANK_THREE
    case 0xC187FC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:112 BEQL @COMPRESSION_BANK_THREE
    case 0xC187FE: cpu.execute_instruction<0x4C>(0x0088B7, 3); return true;
    // src/text/display_text.asm:113 JMP @UNKNOWN12
    case 0xC18801: cpu.execute_instruction<0x4C>(0x00890E, 3); return true;
    // src/text/display_text.asm:115 LDA @LOCAL01
    case 0xC18804: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:116 STA @VIRTUAL02
    case 0xC18806: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:117 LDX @VIRTUAL02
    case 0xC18808: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/display_text.asm:118 TXY
    case 0xC1880A: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1880B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1880E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18810: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:119 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18813: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC18815: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00CDED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC18815.
    case 0xC18817: cpu.execute_instruction<0xCD>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC18818: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC1881A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    // Overlapping static entry reached from 0xC1881A.
    case 0xC1881C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:120 LOADPTR COMPRESSED_TEXT_PTRS, @VIRTUAL06
    case 0xC1881D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text.asm:121 LDA [@VIRTUAL0A]
    case 0xC1881F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/display_text.asm:122 AND #$00FF
    case 0xC18821: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:122 AND #$00FF
    // Overlapping static entry reached from 0xC18821.
    case 0xC18823: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/text/display_text.asm:123 ASL
    case 0xC18824: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/display_text.asm:124 ASL
    case 0xC18825: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/display_text.asm:125 CLC
    case 0xC18826: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/display_text.asm:126 ADC @VIRTUAL06
    case 0xC18827: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/display_text.asm:127 STA @VIRTUAL06
    case 0xC18829: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1882B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC1882B.
    case 0xC1882D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1882E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18830: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18831: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18833: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/display_text.asm:128 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18835: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/text/display_text.asm:129 INC @VIRTUAL0A
    case 0xC18837: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/text/display_text.asm:130 TXY
    case 0xC18839: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1883A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1883C: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1883F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:131 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18841: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/display_text.asm:132 LDA [@VIRTUAL06]
    case 0xC18844: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/display_text.asm:133 AND #$00FF
    case 0xC18846: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:133 AND #$00FF
    // Overlapping static entry reached from 0xC18846.
    case 0xC18848: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18849: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1884B: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1884D: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:134 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC1884F: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/display_text.asm:135 INC @VIRTUAL0A
    case 0xC18851: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18853: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18855: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18857: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:136 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18859: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/display_text.asm:137 JMP @UNKNOWN12
    case 0xC1885B: cpu.execute_instruction<0x4C>(0x00890E, 3); return true;
    // src/text/display_text.asm:139 LDA @LOCAL01
    case 0xC1885E: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:140 STA @VIRTUAL02
    case 0xC18860: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:141 LDX @VIRTUAL02
    case 0xC18862: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/display_text.asm:142 TXY
    case 0xC18864: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18865: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC18868: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1886A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:143 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC1886D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC1886F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00D1ED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC1886F.
    case 0xC18871: cpu.execute_instruction<0xD1>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC18872: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC18871.
    case 0xC18873: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC18874: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC18873.
    case 0xC18875: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    // Overlapping static entry reached from 0xC18874.
    case 0xC18876: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:144 LOADPTR COMPRESSED_TEXT_PTRS+1024, @VIRTUAL06
    case 0xC18877: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text.asm:145 LDA [@VIRTUAL0A]
    case 0xC18879: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/display_text.asm:146 AND #$00FF
    case 0xC1887B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:146 AND #$00FF
    // Overlapping static entry reached from 0xC1887B.
    case 0xC1887D: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/text/display_text.asm:147 ASL
    case 0xC1887E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/display_text.asm:148 ASL
    case 0xC1887F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/display_text.asm:149 CLC
    case 0xC18880: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/display_text.asm:150 ADC @VIRTUAL06
    case 0xC18881: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/display_text.asm:151 STA @VIRTUAL06
    case 0xC18883: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18885: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC18885.
    case 0xC18887: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC18888: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888A: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/display_text.asm:152 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC1888F: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/text/display_text.asm:153 INC @VIRTUAL0A
    case 0xC18891: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/text/display_text.asm:154 TXY
    case 0xC18893: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18894: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18896: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC18899: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:155 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC1889B: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/display_text.asm:156 LDA [@VIRTUAL06]
    case 0xC1889E: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/display_text.asm:157 AND #$00FF
    case 0xC188A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:157 AND #$00FF
    // Overlapping static entry reached from 0xC188A0.
    case 0xC188A2: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A3: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A5: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A7: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:158 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188A9: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/display_text.asm:159 INC @VIRTUAL0A
    case 0xC188AB: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188AD: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188AF: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188B1: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:160 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC188B3: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/display_text.asm:161 BRA @UNKNOWN12
    case 0xC188B5: cpu.execute_instruction<0x80>(0x000057, 2); return true;
    // src/text/display_text.asm:163 LDA @LOCAL01
    case 0xC188B7: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:164 STA @VIRTUAL02
    case 0xC188B9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:165 LDX @VIRTUAL02
    case 0xC188BB: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/display_text.asm:166 TXY
    case 0xC188BD: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188BE: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188C3: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:167 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC188C6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000ED, 2); else cpu.execute_instruction<0xA9>(0x00D5ED, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188C8.
    case 0xC188CA: cpu.execute_instruction<0xD5>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188CA.
    case 0xC188CC: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188CD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C8, 2); else cpu.execute_instruction<0xA9>(0x0000C8, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188CC.
    case 0xC188CE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    // Overlapping static entry reached from 0xC188CD.
    case 0xC188CF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/display_text.asm:168 LOADPTR COMPRESSED_TEXT_PTRS+2048, @VIRTUAL06
    case 0xC188D0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text.asm:169 LDA [@VIRTUAL0A]
    case 0xC188D2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/display_text.asm:170 AND #$00FF
    case 0xC188D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:170 AND #$00FF
    // Overlapping static entry reached from 0xC188D4.
    case 0xC188D6: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/text/display_text.asm:171 ASL
    case 0xC188D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/display_text.asm:172 ASL
    case 0xC188D8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/display_text.asm:173 CLC
    case 0xC188D9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/display_text.asm:174 ADC @VIRTUAL06
    case 0xC188DA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/display_text.asm:175 STA @VIRTUAL06
    case 0xC188DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC188DE.
    case 0xC188E0: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E1: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E4: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/display_text.asm:176 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC188E8: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/text/display_text.asm:177 INC @VIRTUAL0A
    case 0xC188EA: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // src/text/display_text.asm:178 TXY
    case 0xC188EC: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188ED: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188EF: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188F2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text.asm:179 MOVE_INT_YPTRDEST @VIRTUAL0A, __BSS_START__
    case 0xC188F4: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/display_text.asm:180 LDA [@VIRTUAL06]
    case 0xC188F7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/display_text.asm:181 AND #$00FF
    case 0xC188F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text.asm:181 AND #$00FF
    // Overlapping static entry reached from 0xC188F9.
    case 0xC188FB: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188FC: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC188FE: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18900: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:182 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC18902: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/display_text.asm:183 INC @VIRTUAL0A
    case 0xC18904: cpu.execute_instruction<0xE6>(0x00000A, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18906: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC18908: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC1890A: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/display_text.asm:184 MOVE_INTX @VIRTUAL0A, @LOCAL04
    case 0xC1890C: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/display_text.asm:186 CMP #$20
    case 0xC1890E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/display_text.asm:186 CMP #$20
    // Overlapping static entry reached from 0xC1890E.
    case 0xC18910: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/display_text.asm:187 BCC @UNKNOWN13
    case 0xC18911: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/text/display_text.asm:188 JMP @UNKNOWN72
    case 0xC18913: cpu.execute_instruction<0x4C>(0x008B04, 3); return true;
    // src/text/display_text.asm:190 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC18916: cpu.execute_instruction<0x9C>(0x0097CA, 3); return true;
    // src/text/display_text.asm:191 CMP #$00
    case 0xC18919: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/display_text.asm:191 CMP #$00
    // Overlapping static entry reached from 0xC18919.
    case 0xC1891B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:192 BEQL @CC_00
    case 0xC1891C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:192 BEQL @CC_00
    case 0xC1891E: cpu.execute_instruction<0x4C>(0x008A04, 3); return true;
    // src/text/display_text.asm:193 CMP #$01
    case 0xC18921: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/display_text.asm:193 CMP #$01
    // Overlapping static entry reached from 0xC18921.
    case 0xC18923: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:194 BEQL @CC_01
    case 0xC18924: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:194 BEQL @CC_01
    case 0xC18926: cpu.execute_instruction<0x4C>(0x008A0B, 3); return true;
    // src/text/display_text.asm:195 CMP #$02
    case 0xC18929: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/display_text.asm:195 CMP #$02
    // Overlapping static entry reached from 0xC18929.
    case 0xC1892B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:196 BEQL @UNKNOWN73
    case 0xC1892C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:196 BEQL @UNKNOWN73
    case 0xC1892E: cpu.execute_instruction<0x4C>(0x008B0A, 3); return true;
    // src/text/display_text.asm:197 CMP #$03
    case 0xC18931: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/display_text.asm:197 CMP #$03
    // Overlapping static entry reached from 0xC18931.
    case 0xC18933: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:198 BEQL @UNKNOWN46
    case 0xC18934: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:198 BEQL @UNKNOWN46
    case 0xC18936: cpu.execute_instruction<0x4C>(0x008A1D, 3); return true;
    // src/text/display_text.asm:199 CMP #$04
    case 0xC18939: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/display_text.asm:199 CMP #$04
    // Overlapping static entry reached from 0xC18939.
    case 0xC1893B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:200 BEQL @UNKNOWN47
    case 0xC1893C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:200 BEQL @UNKNOWN47
    case 0xC1893E: cpu.execute_instruction<0x4C>(0x008A29, 3); return true;
    // src/text/display_text.asm:201 CMP #$05
    case 0xC18941: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/display_text.asm:201 CMP #$05
    // Overlapping static entry reached from 0xC18941.
    case 0xC18943: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:202 BEQL @UNKNOWN48
    case 0xC18944: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:202 BEQL @UNKNOWN48
    case 0xC18946: cpu.execute_instruction<0x4C>(0x008A31, 3); return true;
    // src/text/display_text.asm:203 CMP #$06
    case 0xC18949: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/display_text.asm:203 CMP #$06
    // Overlapping static entry reached from 0xC18949.
    case 0xC1894B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:204 BEQL @UNKNOWN49
    case 0xC1894C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:204 BEQL @UNKNOWN49
    case 0xC1894E: cpu.execute_instruction<0x4C>(0x008A39, 3); return true;
    // src/text/display_text.asm:205 CMP #$07
    case 0xC18951: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/display_text.asm:205 CMP #$07
    // Overlapping static entry reached from 0xC18951.
    case 0xC18953: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:206 BEQL @UNKNOWN50
    case 0xC18954: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:206 BEQL @UNKNOWN50
    case 0xC18956: cpu.execute_instruction<0x4C>(0x008A41, 3); return true;
    // src/text/display_text.asm:207 CMP #$08
    case 0xC18959: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/display_text.asm:207 CMP #$08
    // Overlapping static entry reached from 0xC18959.
    case 0xC1895B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:208 BEQL @UNKNOWN51
    case 0xC1895C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:208 BEQL @UNKNOWN51
    case 0xC1895E: cpu.execute_instruction<0x4C>(0x008A49, 3); return true;
    // src/text/display_text.asm:209 CMP #$09
    case 0xC18961: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/display_text.asm:209 CMP #$09
    // Overlapping static entry reached from 0xC18961.
    case 0xC18963: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:210 BEQL @UNKNOWN52
    case 0xC18964: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:210 BEQL @UNKNOWN52
    case 0xC18966: cpu.execute_instruction<0x4C>(0x008A51, 3); return true;
    // src/text/display_text.asm:211 CMP #$0A
    case 0xC18969: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/display_text.asm:211 CMP #$0A
    // Overlapping static entry reached from 0xC18969.
    case 0xC1896B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:212 BEQL @UNKNOWN53
    case 0xC1896C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:212 BEQL @UNKNOWN53
    case 0xC1896E: cpu.execute_instruction<0x4C>(0x008A59, 3); return true;
    // src/text/display_text.asm:213 CMP #$0B
    case 0xC18971: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/display_text.asm:213 CMP #$0B
    // Overlapping static entry reached from 0xC18971.
    case 0xC18973: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:214 BEQL @UNKNOWN54
    case 0xC18974: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:214 BEQL @UNKNOWN54
    case 0xC18976: cpu.execute_instruction<0x4C>(0x008A61, 3); return true;
    // src/text/display_text.asm:215 CMP #$0C
    case 0xC18979: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/display_text.asm:215 CMP #$0C
    // Overlapping static entry reached from 0xC18979.
    case 0xC1897B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:216 BEQL @UNKNOWN55
    case 0xC1897C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:216 BEQL @UNKNOWN55
    case 0xC1897E: cpu.execute_instruction<0x4C>(0x008A69, 3); return true;
    // src/text/display_text.asm:217 CMP #$0D
    case 0xC18981: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/display_text.asm:217 CMP #$0D
    // Overlapping static entry reached from 0xC18981.
    case 0xC18983: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:218 BEQL @UNKNOWN56
    case 0xC18984: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:218 BEQL @UNKNOWN56
    case 0xC18986: cpu.execute_instruction<0x4C>(0x008A71, 3); return true;
    // src/text/display_text.asm:219 CMP #$0E
    case 0xC18989: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/display_text.asm:219 CMP #$0E
    // Overlapping static entry reached from 0xC18989.
    case 0xC1898B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:220 BEQL @UNKNOWN57
    case 0xC1898C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:220 BEQL @UNKNOWN57
    case 0xC1898E: cpu.execute_instruction<0x4C>(0x008A79, 3); return true;
    // src/text/display_text.asm:221 CMP #$0F
    case 0xC18991: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/text/display_text.asm:221 CMP #$0F
    // Overlapping static entry reached from 0xC18991.
    case 0xC18993: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:222 BEQL @UNKNOWN58
    case 0xC18994: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:222 BEQL @UNKNOWN58
    case 0xC18996: cpu.execute_instruction<0x4C>(0x008A81, 3); return true;
    // src/text/display_text.asm:223 CMP #$10
    case 0xC18999: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/display_text.asm:223 CMP #$10
    // Overlapping static entry reached from 0xC18999.
    case 0xC1899B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:224 BEQL @UNKNOWN59
    case 0xC1899C: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:224 BEQL @UNKNOWN59
    case 0xC1899E: cpu.execute_instruction<0x4C>(0x008A87, 3); return true;
    // src/text/display_text.asm:225 CMP #$11
    case 0xC189A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/display_text.asm:225 CMP #$11
    // Overlapping static entry reached from 0xC189A1.
    case 0xC189A3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:226 BEQL @UNKNOWN60
    case 0xC189A4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:226 BEQL @UNKNOWN60
    case 0xC189A6: cpu.execute_instruction<0x4C>(0x008A8F, 3); return true;
    // src/text/display_text.asm:227 CMP #$12
    case 0xC189A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/display_text.asm:227 CMP #$12
    // Overlapping static entry reached from 0xC189A9.
    case 0xC189AB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:228 BEQL @UNKNOWN61
    case 0xC189AC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:228 BEQL @UNKNOWN61
    case 0xC189AE: cpu.execute_instruction<0x4C>(0x008AAA, 3); return true;
    // src/text/display_text.asm:229 CMP #$13
    case 0xC189B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/display_text.asm:229 CMP #$13
    // Overlapping static entry reached from 0xC189B1.
    case 0xC189B3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:230 BEQL @UNKNOWN62
    case 0xC189B4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:230 BEQL @UNKNOWN62
    case 0xC189B6: cpu.execute_instruction<0x4C>(0x008AB0, 3); return true;
    // src/text/display_text.asm:231 CMP #$14
    case 0xC189B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/display_text.asm:231 CMP #$14
    // Overlapping static entry reached from 0xC189B9.
    case 0xC189BB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:232 BEQL @UNKNOWN63
    case 0xC189BC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:232 BEQL @UNKNOWN63
    case 0xC189BE: cpu.execute_instruction<0x4C>(0x008ABA, 3); return true;
    // src/text/display_text.asm:233 CMP #$18
    case 0xC189C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/display_text.asm:233 CMP #$18
    // Overlapping static entry reached from 0xC189C1.
    case 0xC189C3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:234 BEQL @UNKNOWN64
    case 0xC189C4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:234 BEQL @UNKNOWN64
    case 0xC189C6: cpu.execute_instruction<0x4C>(0x008AC4, 3); return true;
    // src/text/display_text.asm:235 CMP #$19
    case 0xC189C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/display_text.asm:235 CMP #$19
    // Overlapping static entry reached from 0xC189C9.
    case 0xC189CB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:236 BEQL @UNKNOWN65
    case 0xC189CC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:236 BEQL @UNKNOWN65
    case 0xC189CE: cpu.execute_instruction<0x4C>(0x008ACC, 3); return true;
    // src/text/display_text.asm:237 CMP #$1A
    case 0xC189D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/text/display_text.asm:237 CMP #$1A
    // Overlapping static entry reached from 0xC189D1.
    case 0xC189D3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:238 BEQL @UNKNOWN66
    case 0xC189D4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:238 BEQL @UNKNOWN66
    case 0xC189D6: cpu.execute_instruction<0x4C>(0x008AD4, 3); return true;
    // src/text/display_text.asm:239 CMP #$1B
    case 0xC189D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/text/display_text.asm:239 CMP #$1B
    // Overlapping static entry reached from 0xC189D9.
    case 0xC189DB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:240 BEQL @UNKNOWN67
    case 0xC189DC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:240 BEQL @UNKNOWN67
    case 0xC189DE: cpu.execute_instruction<0x4C>(0x008ADC, 3); return true;
    // src/text/display_text.asm:241 CMP #$1C
    case 0xC189E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001C, 2); else cpu.execute_instruction<0xC9>(0x00001C, 3); return true;
    // src/text/display_text.asm:241 CMP #$1C
    // Overlapping static entry reached from 0xC189E1.
    case 0xC189E3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:242 BEQL @UNKNOWN68
    case 0xC189E4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:242 BEQL @UNKNOWN68
    case 0xC189E6: cpu.execute_instruction<0x4C>(0x008AE4, 3); return true;
    // src/text/display_text.asm:243 CMP #$1D
    case 0xC189E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/text/display_text.asm:243 CMP #$1D
    // Overlapping static entry reached from 0xC189E9.
    case 0xC189EB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:244 BEQL @UNKNOWN69
    case 0xC189EC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:244 BEQL @UNKNOWN69
    case 0xC189EE: cpu.execute_instruction<0x4C>(0x008AEC, 3); return true;
    // src/text/display_text.asm:245 CMP #$1E
    case 0xC189F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/text/display_text.asm:245 CMP #$1E
    // Overlapping static entry reached from 0xC189F1.
    case 0xC189F3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:246 BEQL @UNKNOWN70
    case 0xC189F4: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:246 BEQL @UNKNOWN70
    case 0xC189F6: cpu.execute_instruction<0x4C>(0x008AF4, 3); return true;
    // src/text/display_text.asm:247 CMP #$1F
    case 0xC189F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/text/display_text.asm:247 CMP #$1F
    // Overlapping static entry reached from 0xC189F9.
    case 0xC189FB: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:248 BEQL @UNKNOWN71
    case 0xC189FC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:248 BEQL @UNKNOWN71
    case 0xC189FE: cpu.execute_instruction<0x4C>(0x008AFC, 3); return true;
    // src/text/display_text.asm:249 JMP @UNKNOWN2
    case 0xC18A01: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:251 JSL PRINT_NEWLINE
    case 0xC18A04: cpu.execute_instruction<0x22>(0xC438B1, 4); return true;
    // src/text/display_text.asm:252 JMP @UNKNOWN2
    case 0xC18A08: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:254 JSR GET_TEXT_X
    case 0xC18A0B: cpu.execute_instruction<0x20>(0x0004B5, 3); return true;
    // src/text/display_text.asm:255 CMP #0
    case 0xC18A0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/display_text.asm:255 CMP #0
    // Overlapping static entry reached from 0xC18A0E.
    case 0xC18A10: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text.asm:256 BEQL @UNKNOWN2
    case 0xC18A11: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text.asm:256 BEQL @UNKNOWN2
    case 0xC18A13: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:257 JSL PRINT_NEWLINE
    case 0xC18A16: cpu.execute_instruction<0x22>(0xC438B1, 4); return true;
    // src/text/display_text.asm:258 JMP @UNKNOWN2
    case 0xC18A1A: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:260 LDX #0
    case 0xC18A1D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/display_text.asm:260 LDX #0
    // Overlapping static entry reached from 0xC18A1D.
    case 0xC18A1F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/display_text.asm:261 LDA #1
    case 0xC18A20: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/display_text.asm:261 LDA #1
    // Overlapping static entry reached from 0xC18A20.
    case 0xC18A22: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_text.asm:262 JSR CC_13_14
    case 0xC18A23: cpu.execute_instruction<0x20>(0x000166, 3); return true;
    // src/text/display_text.asm:263 JMP @UNKNOWN2
    case 0xC18A26: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:265 LDY #.LOWORD(CC_04)
    case 0xC18A29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000065, 2); else cpu.execute_instruction<0xA0>(0x004265, 3); return true;
    // src/text/display_text.asm:265 LDY #.LOWORD(CC_04)
    // Overlapping static entry reached from 0xC18A29.
    case 0xC18A2B: cpu.execute_instruction<0x42>(0x000084, 2); return true;
    // src/text/display_text.asm:266 STY @LOCAL05
    case 0xC18A2C: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:266 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A2B.
    case 0xC18A2D: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:267 JMP @UNKNOWN2
    case 0xC18A2E: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:267 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A2D.
    case 0xC18A30: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:269 LDY #.LOWORD(CC_05)
    case 0xC18A31: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AD, 2); else cpu.execute_instruction<0xA0>(0x0042AD, 3); return true;
    // src/text/display_text.asm:269 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18A30.
    case 0xC18A32: cpu.execute_instruction<0xAD>(0x008442, 3); return true;
    // src/text/display_text.asm:269 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18A31.
    case 0xC18A33: cpu.execute_instruction<0x42>(0x000084, 2); return true;
    // src/text/display_text.asm:270 STY @LOCAL05
    case 0xC18A34: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:270 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A33.
    case 0xC18A35: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:271 JMP @UNKNOWN2
    case 0xC18A36: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:271 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A35.
    case 0xC18A38: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:273 LDY #.LOWORD(CC_06)
    case 0xC18A39: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F5, 2); else cpu.execute_instruction<0xA0>(0x0042F5, 3); return true;
    // src/text/display_text.asm:273 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18A38.
    case 0xC18A3A: cpu.execute_instruction<0xF5>(0x000042, 2); return true;
    // src/text/display_text.asm:273 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18A39.
    case 0xC18A3B: cpu.execute_instruction<0x42>(0x000084, 2); return true;
    // src/text/display_text.asm:274 STY @LOCAL05
    case 0xC18A3C: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:274 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A3B.
    case 0xC18A3D: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:275 JMP @UNKNOWN2
    case 0xC18A3E: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:275 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A3D.
    case 0xC18A40: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:277 LDY #.LOWORD(CC_07)
    case 0xC18A41: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00435F, 3); return true;
    // src/text/display_text.asm:277 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18A40.
    case 0xC18A42: cpu.execute_instruction<0x5F>(0x1E8443, 4); return true;
    // src/text/display_text.asm:277 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18A41.
    case 0xC18A43: cpu.execute_instruction<0x43>(0x000084, 2); return true;
    // src/text/display_text.asm:278 STY @LOCAL05
    case 0xC18A44: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:278 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A43.
    case 0xC18A45: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:279 JMP @UNKNOWN2
    case 0xC18A46: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:279 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A45.
    case 0xC18A48: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:281 LDY #.LOWORD(CC_08)
    case 0xC18A49: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D6, 2); else cpu.execute_instruction<0xA0>(0x0043D6, 3); return true;
    // src/text/display_text.asm:281 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18A48.
    case 0xC18A4A: cpu.execute_instruction<0xD6>(0x000043, 2); return true;
    // src/text/display_text.asm:281 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18A49.
    case 0xC18A4B: cpu.execute_instruction<0x43>(0x000084, 2); return true;
    // src/text/display_text.asm:282 STY @LOCAL05
    case 0xC18A4C: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:282 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A4B.
    case 0xC18A4D: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:283 JMP @UNKNOWN2
    case 0xC18A4E: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:283 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A4D.
    case 0xC18A50: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:285 LDY #.LOWORD(CC_09)
    case 0xC18A51: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0041D0, 3); return true;
    // src/text/display_text.asm:285 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18A50.
    case 0xC18A52: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/text/display_text.asm:285 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18A51.
    case 0xC18A53: cpu.execute_instruction<0x41>(0x000084, 2); return true;
    // src/text/display_text.asm:286 STY @LOCAL05
    case 0xC18A54: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:286 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A53.
    case 0xC18A55: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:287 JMP @UNKNOWN2
    case 0xC18A56: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:287 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A55.
    case 0xC18A58: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:289 LDY #.LOWORD(CC_0A)
    case 0xC18A59: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x004103, 3); return true;
    // src/text/display_text.asm:289 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18A58.
    case 0xC18A5A: cpu.execute_instruction<0x03>(0x000041, 2); return true;
    // src/text/display_text.asm:289 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18A59.
    case 0xC18A5B: cpu.execute_instruction<0x41>(0x000084, 2); return true;
    // src/text/display_text.asm:290 STY @LOCAL05
    case 0xC18A5C: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:290 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A5B.
    case 0xC18A5D: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:291 JMP @UNKNOWN2
    case 0xC18A5E: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:291 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A5D.
    case 0xC18A60: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:293 LDY #.LOWORD(CC_0B)
    case 0xC18A61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000058, 2); else cpu.execute_instruction<0xA0>(0x004558, 3); return true;
    // src/text/display_text.asm:293 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18A60.
    case 0xC18A62: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/display_text.asm:293 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18A61.
    case 0xC18A63: cpu.execute_instruction<0x45>(0x000084, 2); return true;
    // src/text/display_text.asm:294 STY @LOCAL05
    case 0xC18A64: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:294 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A63.
    case 0xC18A65: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:295 JMP @UNKNOWN2
    case 0xC18A66: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:295 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A65.
    case 0xC18A68: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:297 LDY #.LOWORD(CC_0C)
    case 0xC18A69: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000091, 2); else cpu.execute_instruction<0xA0>(0x004591, 3); return true;
    // src/text/display_text.asm:297 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18A68.
    case 0xC18A6A: cpu.execute_instruction<0x91>(0x000045, 2); return true;
    // src/text/display_text.asm:297 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18A69.
    case 0xC18A6B: cpu.execute_instruction<0x45>(0x000084, 2); return true;
    // src/text/display_text.asm:298 STY @LOCAL05
    case 0xC18A6C: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:298 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A6B.
    case 0xC18A6D: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:299 JMP @UNKNOWN2
    case 0xC18A6E: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:299 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A6D.
    case 0xC18A70: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:301 LDY #.LOWORD(CC_0D)
    case 0xC18A71: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000EF, 2); else cpu.execute_instruction<0xA0>(0x0045EF, 3); return true;
    // src/text/display_text.asm:301 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18A70.
    case 0xC18A72: cpu.execute_instruction<0xEF>(0x1E8445, 4); return true;
    // src/text/display_text.asm:301 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18A71.
    case 0xC18A73: cpu.execute_instruction<0x45>(0x000084, 2); return true;
    // src/text/display_text.asm:302 STY @LOCAL05
    case 0xC18A74: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:302 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A73.
    case 0xC18A75: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:303 JMP @UNKNOWN2
    case 0xC18A76: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:303 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A75.
    case 0xC18A78: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:305 LDY #.LOWORD(CC_0E)
    case 0xC18A79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001A, 2); else cpu.execute_instruction<0xA0>(0x00461A, 3); return true;
    // src/text/display_text.asm:305 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18A78.
    case 0xC18A7A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/display_text.asm:305 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18A79.
    case 0xC18A7B: cpu.execute_instruction<0x46>(0x000084, 2); return true;
    // src/text/display_text.asm:306 STY @LOCAL05
    case 0xC18A7C: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:306 STY @LOCAL05
    // Overlapping static entry reached from 0xC18A7B.
    case 0xC18A7D: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:307 JMP @UNKNOWN2
    case 0xC18A7E: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:307 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A7D.
    case 0xC18A80: cpu.execute_instruction<0x87>(0x000020, 2); return true;
    // src/text/display_text.asm:309 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC18A81: cpu.execute_instruction<0x20>(0x00042E, 3); return true;
    // src/text/display_text.asm:309 JSR INCREMENT_SECONDARY_MEMORY
    // Overlapping static entry reached from 0xC18A80.
    case 0xC18A82: cpu.execute_instruction<0x2E>(0x004C04, 3); return true;
    // src/text/display_text.asm:310 JMP @UNKNOWN2
    case 0xC18A84: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:310 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18A82.
    case 0xC18A85: cpu.execute_instruction<0x54>(0x00A087, 3); return true;
    // src/text/display_text.asm:312 LDY #.LOWORD(CC_10)
    case 0xC18A87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AB, 2); else cpu.execute_instruction<0xA0>(0x004EAB, 3); return true;
    // src/text/display_text.asm:312 LDY #.LOWORD(CC_10)
    // Overlapping static entry reached from 0xC18A85.
    case 0xC18A88: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/display_text.asm:312 LDY #.LOWORD(CC_10)
    // Overlapping static entry reached from 0xC18A87.
    case 0xC18A89: cpu.execute_instruction<0x4E>(0x001E84, 3); return true;
    // src/text/display_text.asm:313 STY @LOCAL05
    case 0xC18A8A: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:314 JMP @UNKNOWN2
    case 0xC18A8C: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:316 LDA #1
    case 0xC18A8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/display_text.asm:316 LDA #1
    // Overlapping static entry reached from 0xC18A8F.
    case 0xC18A91: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_text.asm:317 JSR SELECTION_MENU
    case 0xC18A92: cpu.execute_instruction<0x20>(0x00196A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/display_text.asm:318 STORE_INT1632 @VIRTUAL06
    case 0xC18A95: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/display_text.asm:318 STORE_INT1632 @VIRTUAL06
    case 0xC18A97: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A99: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A9B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A9D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18A9F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text.asm:320 JSR SET_WORKING_MEMORY
    case 0xC18AA1: cpu.execute_instruction<0x20>(0x00045D, 3); return true;
    // src/text/display_text.asm:321 JSR UNKNOWN_C11383
    case 0xC18AA4: cpu.execute_instruction<0x20>(0x001383, 3); return true;
    // src/text/display_text.asm:322 JMP @UNKNOWN2
    case 0xC18AA7: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:324 JSR CC_12
    case 0xC18AAA: cpu.execute_instruction<0x20>(0x000BD3, 3); return true;
    // src/text/display_text.asm:325 JMP @UNKNOWN2
    case 0xC18AAD: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:327 LDX #0
    case 0xC18AB0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/display_text.asm:327 LDX #0
    // Overlapping static entry reached from 0xC18AB0.
    case 0xC18AB2: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/display_text.asm:328 TXA
    case 0xC18AB3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/display_text.asm:329 JSR CC_13_14
    case 0xC18AB4: cpu.execute_instruction<0x20>(0x000166, 3); return true;
    // src/text/display_text.asm:330 JMP @UNKNOWN2
    case 0xC18AB7: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:332 LDX #1
    case 0xC18ABA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/display_text.asm:332 LDX #1
    // Overlapping static entry reached from 0xC18ABA.
    case 0xC18ABC: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/display_text.asm:333 TXA
    case 0xC18ABD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/display_text.asm:334 JSR CC_13_14
    case 0xC18ABE: cpu.execute_instruction<0x20>(0x000166, 3); return true;
    // src/text/display_text.asm:335 JMP @UNKNOWN2
    case 0xC18AC1: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:337 LDY #.LOWORD(CC_18_TREE)
    case 0xC18AC4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000B, 2); else cpu.execute_instruction<0xA0>(0x00790B, 3); return true;
    // src/text/display_text.asm:337 LDY #.LOWORD(CC_18_TREE)
    // Overlapping static entry reached from 0xC18AC4.
    case 0xC18AC6: cpu.execute_instruction<0x79>(0x001E84, 3); return true;
    // src/text/display_text.asm:338 STY @LOCAL05
    case 0xC18AC7: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:339 JMP @UNKNOWN2
    case 0xC18AC9: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:341 LDY #.LOWORD(CC_19_TREE)
    case 0xC18ACC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AA, 2); else cpu.execute_instruction<0xA0>(0x0079AA, 3); return true;
    // src/text/display_text.asm:341 LDY #.LOWORD(CC_19_TREE)
    // Overlapping static entry reached from 0xC18ACC.
    case 0xC18ACE: cpu.execute_instruction<0x79>(0x001E84, 3); return true;
    // src/text/display_text.asm:342 STY @LOCAL05
    case 0xC18ACF: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:343 JMP @UNKNOWN2
    case 0xC18AD1: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:345 LDY #.LOWORD(CC_1A_TREE)
    case 0xC18AD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000056, 2); else cpu.execute_instruction<0xA0>(0x007B56, 3); return true;
    // src/text/display_text.asm:345 LDY #.LOWORD(CC_1A_TREE)
    // Overlapping static entry reached from 0xC18AD4.
    case 0xC18AD6: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/display_text.asm:346 STY @LOCAL05
    case 0xC18AD7: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:347 JMP @UNKNOWN2
    case 0xC18AD9: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:349 LDY #.LOWORD(CC_1B_TREE)
    case 0xC18ADC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000036, 2); else cpu.execute_instruction<0xA0>(0x007C36, 3); return true;
    // src/text/display_text.asm:349 LDY #.LOWORD(CC_1B_TREE)
    // Overlapping static entry reached from 0xC18ADC.
    case 0xC18ADE: cpu.execute_instruction<0x7C>(0x001E84, 3); return true;
    // src/text/display_text.asm:350 STY @LOCAL05
    case 0xC18ADF: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:351 JMP @UNKNOWN2
    case 0xC18AE1: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:353 LDY #.LOWORD(CC_1C_TREE)
    case 0xC18AE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000094, 2); else cpu.execute_instruction<0xA0>(0x007D94, 3); return true;
    // src/text/display_text.asm:353 LDY #.LOWORD(CC_1C_TREE)
    // Overlapping static entry reached from 0xC18AE4.
    case 0xC18AE6: cpu.execute_instruction<0x7D>(0x001E84, 3); return true;
    // src/text/display_text.asm:354 STY @LOCAL05
    case 0xC18AE7: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:355 JMP @UNKNOWN2
    case 0xC18AE9: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:357 LDY #.LOWORD(CC_1D_TREE)
    case 0xC18AEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000011, 2); else cpu.execute_instruction<0xA0>(0x007F11, 3); return true;
    // src/text/display_text.asm:357 LDY #.LOWORD(CC_1D_TREE)
    // Overlapping static entry reached from 0xC18AEC.
    case 0xC18AEE: cpu.execute_instruction<0x7F>(0x4C1E84, 4); return true;
    // src/text/display_text.asm:358 STY @LOCAL05
    case 0xC18AEF: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:359 JMP @UNKNOWN2
    case 0xC18AF1: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:359 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AEE.
    case 0xC18AF2: cpu.execute_instruction<0x54>(0x00A087, 3); return true;
    // src/text/display_text.asm:361 LDY #.LOWORD(CC_1E_TREE)
    case 0xC18AF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001F, 2); else cpu.execute_instruction<0xA0>(0x00811F, 3); return true;
    // src/text/display_text.asm:361 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18AF2.
    case 0xC18AF5: cpu.execute_instruction<0x1F>(0x1E8481, 4); return true;
    // src/text/display_text.asm:361 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18AF4.
    case 0xC18AF6: cpu.execute_instruction<0x81>(0x000084, 2); return true;
    // src/text/display_text.asm:362 STY @LOCAL05
    case 0xC18AF7: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:362 STY @LOCAL05
    // Overlapping static entry reached from 0xC18AF6.
    case 0xC18AF8: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:363 JMP @UNKNOWN2
    case 0xC18AF9: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:363 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AF8.
    case 0xC18AFB: cpu.execute_instruction<0x87>(0x0000A0, 2); return true;
    // src/text/display_text.asm:365 LDY #.LOWORD(CC_1F_TREE)
    case 0xC18AFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000BB, 2); else cpu.execute_instruction<0xA0>(0x0081BB, 3); return true;
    // src/text/display_text.asm:365 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18AFB.
    case 0xC18AFD: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/display_text.asm:365 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18AFC.
    case 0xC18AFE: cpu.execute_instruction<0x81>(0x000084, 2); return true;
    // src/text/display_text.asm:366 STY @LOCAL05
    case 0xC18AFF: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/display_text.asm:366 STY @LOCAL05
    // Overlapping static entry reached from 0xC18AFE.
    case 0xC18B00: cpu.execute_instruction<0x1E>(0x00544C, 3); return true;
    // src/text/display_text.asm:367 JMP @UNKNOWN2
    case 0xC18B01: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:367 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B00.
    case 0xC18B03: cpu.execute_instruction<0x87>(0x000020, 2); return true;
    // src/text/display_text.asm:369 JSR PRINT_LETTER
    case 0xC18B04: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // src/text/display_text.asm:369 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC18B03.
    case 0xC18B05: cpu.execute_instruction<0xB6>(0x00000C, 2); return true;
    // src/text/display_text.asm:370 JMP @UNKNOWN2
    case 0xC18B07: cpu.execute_instruction<0x4C>(0x008754, 3); return true;
    // src/text/display_text.asm:372 LDA @LOCAL01
    case 0xC18B0A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text.asm:373 STA @VIRTUAL02
    case 0xC18B0C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text.asm:374 LDY @VIRTUAL02
    case 0xC18B0E: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B10: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B13: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B15: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text.asm:375 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18B18: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text.asm:376 LDA @VIRTUAL02
    case 0xC18B1A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text.asm:377 JSR UNKNOWN_C1869D
    case 0xC18B1C: cpu.execute_instruction<0x20>(0x00869D, 3); return true;
    // src/text/display_text.asm:378 JSR UNKNOWN_C14049
    case 0xC18B1F: cpu.execute_instruction<0x20>(0x004049, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B22: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B24: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B26: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text.asm:379 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18B28: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text.asm:381 END_C_FUNCTION
    case 0xC18B2A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text.asm:381 END_C_FUNCTION
    case 0xC18B2B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/display_text_wait.asm (source_named).
bool execute_text_display_text_wait_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text_wait.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DC66: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC68: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DC6A.
    case 0xC1DC6C: cpu.execute_instruction<0xFF>(0x24A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DC6D: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC6E: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC70: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC72: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DC74: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC76: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC78: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC7A: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DC7C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/display_text_wait.asm:11 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    case 0xC1DC7E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B1, 2); else cpu.execute_instruction<0xA2>(0x0098B1, 3); return true;
    // src/text/display_text_wait.asm:11 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC1DC7E.
    case 0xC1DC80: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/display_text_wait.asm:12 LDA __BSS_START__,X
    case 0xC1DC81: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/display_text_wait.asm:13 AND #$00FF
    case 0xC1DC84: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text_wait.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1DC84.
    case 0xC1DC86: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_text_wait.asm:14 BEQ @UNKNOWN0
    case 0xC1DC87: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/text/display_text_wait.asm:15 LDA PAD_STATE
    case 0xC1DC89: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/text/display_text_wait.asm:16 AND #PAD::B_BUTTON
    case 0xC1DC8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/text/display_text_wait.asm:16 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC1DC8C.
    case 0xC1DC8E: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/text/display_text_wait.asm:17 BEQ @UNKNOWN0
    case 0xC1DC8F: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/text/display_text_wait.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DC91: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/display_text_wait.asm:19 LDA #0
    case 0xC1DC93: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/text/display_text_wait.asm:20 STA __BSS_START__,X
    case 0xC1DC95: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/display_text_wait.asm:20 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1DC93.
    case 0xC1DC96: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/display_text_wait.asm:21 JSL UNKNOWN_C20293
    case 0xC1DC98: cpu.execute_instruction<0x22>(0xC20293, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC9C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DC9E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCA0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCA2: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text_wait.asm:24 JSR UNKNOWN_C1AD0A
    case 0xC1DCA4: cpu.execute_instruction<0x20>(0x00AD0A, 3); return true;
    // src/text/display_text_wait.asm:26 LDA BATTLE_MODE_FLAG
    case 0xC1DCA7: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/text/display_text_wait.asm:27 BEQ @UNKNOWN1
    case 0xC1DCAA: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/display_text_wait.asm:28 LDA #2
    case 0xC1DCAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/display_text_wait.asm:28 LDA #2
    // Overlapping static entry reached from 0xC1DCAC.
    case 0xC1DCAE: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_text_wait.asm:29 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DCAF: cpu.execute_instruction<0x20>(0x000036, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB2: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB6: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:34 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1DCB8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCBA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCBC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCBE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:35 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DCC0: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text_wait.asm:37 JSL DISPLAY_TEXT
    case 0xC1DCC2: cpu.execute_instruction<0x22>(0xC186B1, 4); return true;
    // src/text/display_text_wait.asm:38 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DCC6: cpu.execute_instruction<0x20>(0x00003C, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text_wait.asm:39 END_C_FUNCTION
    case 0xC1DCC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text_wait.asm:39 END_C_FUNCTION
    case 0xC1DCCA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/enable_blinking_triangle.asm (source_named).
bool execute_text_enable_blinking_triangle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/enable_blinking_triangle.asm:3 BEGIN_C_FUNCTION
    case 0xC10036: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/enable_blinking_triangle.asm:5 STA BLINKING_TRIANGLE_FLAG
    case 0xC10038: cpu.execute_instruction<0x8D>(0x00964D, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/enable_blinking_triangle.asm:6 END_C_FUNCTION
    case 0xC1003B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/enter_your_name_please.asm (source_named).
bool execute_text_enter_your_name_please_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/enter_your_name_please.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1EAA6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAA8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAA9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1EAAB.
    case 0xC1EAAD: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/enter_your_name_please.asm:10 END_STACK_VARS
    case 0xC1EAAF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:11 TAX
    case 0xC1EAB0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:12 STX @LOCAL02
    case 0xC1EAB1: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/enter_your_name_please.asm:13 STZ ENABLE_WORD_WRAP
    case 0xC1EAB3: cpu.execute_instruction<0x9C>(0x005E6E, 3); return true;
    // src/text/enter_your_name_please.asm:14 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EAB6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:15 LDA #1
    case 0xC1EAB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/enter_your_name_please.asm:16 STA ALLOW_TEXT_OVERFLOW
    case 0xC1EABA: cpu.execute_instruction<0x8D>(0x00B49D, 3); return true;
    // src/text/enter_your_name_please.asm:16 STA ALLOW_TEXT_OVERFLOW
    // Overlapping static entry reached from 0xC1EAB8.
    case 0xC1EABB: cpu.execute_instruction<0x9D>(0x0022B4, 3); return true;
    // src/text/enter_your_name_please.asm:17 JSL SET_INSTANT_PRINTING
    case 0xC1EABD: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/enter_your_name_please.asm:17 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1EABB.
    case 0xC1EABE: cpu.execute_instruction<0xD4>(0x0000E4, 2); return true;
    // src/text/enter_your_name_please.asm:17 JSL SET_INSTANT_PRINTING
    // Overlapping static entry reached from 0xC1EABE.
    case 0xC1EAC0: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1EAC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAC0.
    case 0xC1EAC2: cpu.execute_instruction<0x27>(0x000000, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAC1.
    case 0xC1EAC3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/enter_your_name_please.asm:19 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1EAC4: cpu.execute_instruction<0x20>(0x0004EE, 3); return true;
    // src/text/enter_your_name_please.asm:20 LDX @LOCAL02
    case 0xC1EAC7: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/enter_your_name_please.asm:21 BEQL @UNKNOWN2
    case 0xC1EAC9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/enter_your_name_please.asm:21 BEQL @UNKNOWN2
    case 0xC1EACB: cpu.execute_instruction<0x4C>(0x00EB4C, 3); return true;
    // src/text/enter_your_name_please.asm:22 LDX #0
    case 0xC1EACE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:22 LDX #0
    // Overlapping static entry reached from 0xC1EACE.
    case 0xC1EAD0: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/enter_your_name_please.asm:23 TXA
    case 0xC1EAD1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:24 JSL UNKNOWN_C438A5
    case 0xC1EAD2: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EAD6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009801, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EAD6.
    case 0xC1EAD8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EAD9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EADF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please.asm:26 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1EAE1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC1EAE3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAE5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAE7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAE9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please.asm:28 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAEB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please.asm:29 LDA #24
    case 0xC1EAED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/text/enter_your_name_please.asm:29 LDA #24
    // Overlapping static entry reached from 0xC1EAED.
    case 0xC1EAEF: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:30 JSR PRINT_STRING
    case 0xC1EAF0: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/text/enter_your_name_please.asm:31 LDX #1
    case 0xC1EAF3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please.asm:31 LDX #1
    // Overlapping static entry reached from 0xC1EAF3.
    case 0xC1EAF5: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:32 LDA #0
    case 0xC1EAF6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:32 LDA #0
    // Overlapping static entry reached from 0xC1EAF6.
    case 0xC1EAF8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:33 JSL UNKNOWN_C438A5
    case 0xC1EAF9: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/enter_your_name_please.asm:34 LDA #12
    case 0xC1EAFD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/text/enter_your_name_please.asm:34 LDA #12
    // Overlapping static entry reached from 0xC1EAFD.
    case 0xC1EAFF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:35 JSL UNKNOWN_C441B7
    case 0xC1EB00: cpu.execute_instruction<0x22>(0xC441B7, 4); return true;
    // src/text/enter_your_name_please.asm:36 LDA GAME_STATE
    case 0xC1EB04: cpu.execute_instruction<0xAD>(0x0097F5, 3); return true;
    // src/text/enter_your_name_please.asm:37 AND #$00FF
    case 0xC1EB07: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/enter_your_name_please.asm:37 AND #$00FF
    // Overlapping static entry reached from 0xC1EB07.
    case 0xC1EB09: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/enter_your_name_please.asm:38 BEQ @UNKNOWN1
    case 0xC1EB0A: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB0C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0097F5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EB0C.
    case 0xC1EB0E: cpu.execute_instruction<0x97>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB0F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EB0E.
    case 0xC1EB10: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB11: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB12: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB14: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB15: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please.asm:39 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1EB17: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please.asm:40 REP #PROC_FLAGS::ACCUM8
    case 0xC1EB19: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB1B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB1D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB1F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please.asm:41 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EB21: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please.asm:42 LDA #12
    case 0xC1EB23: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/text/enter_your_name_please.asm:42 LDA #12
    // Overlapping static entry reached from 0xC1EB23.
    case 0xC1EB25: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:43 JSR PRINT_STRING
    case 0xC1EB26: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/text/enter_your_name_please.asm:45 LDX #1
    case 0xC1EB29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please.asm:45 LDX #1
    // Overlapping static entry reached from 0xC1EB29.
    case 0xC1EB2B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:46 LDA #0
    case 0xC1EB2C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:46 LDA #0
    // Overlapping static entry reached from 0xC1EB2C.
    case 0xC1EB2E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:47 JSL UNKNOWN_C438A5
    case 0xC1EB2F: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/enter_your_name_please.asm:48 STZ @LOCAL00
    case 0xC1EB33: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/enter_your_name_please.asm:49 LDA #.LOWORD(-1)
    case 0xC1EB35: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/enter_your_name_please.asm:49 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EB35.
    case 0xC1EB37: cpu.execute_instruction<0xFF>(0xA01085, 4); return true;
    // src/text/enter_your_name_please.asm:50 STA @LOCAL00+2
    case 0xC1EB38: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please.asm:51 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1EB3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F5, 2); else cpu.execute_instruction<0xA0>(0x0097F5, 3); return true;
    // src/text/enter_your_name_please.asm:51 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EB37.
    case 0xC1EB3B: cpu.execute_instruction<0xF5>(0x000097, 2); return true;
    // src/text/enter_your_name_please.asm:51 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EB3A.
    case 0xC1EB3C: cpu.execute_instruction<0x97>(0x0000A2, 2); return true;
    // src/text/enter_your_name_please.asm:52 LDX #12
    case 0xC1EB3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/enter_your_name_please.asm:52 LDX #12
    // Overlapping static entry reached from 0xC1EB3C.
    case 0xC1EB3E: cpu.execute_instruction<0x0C>(0x00A900, 3); return true;
    // src/text/enter_your_name_please.asm:52 LDX #12
    // Overlapping static entry reached from 0xC1EB3D.
    case 0xC1EB3F: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:53 LDA #WINDOW::UNKNOWN27
    case 0xC1EB40: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/text/enter_your_name_please.asm:53 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EB3E.
    case 0xC1EB41: cpu.execute_instruction<0x27>(0x000000, 2); return true;
    // src/text/enter_your_name_please.asm:53 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EB40.
    case 0xC1EB42: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:54 JSR TEXT_INPUT_DIALOG
    case 0xC1EB43: cpu.execute_instruction<0x20>(0x00E57F, 3); return true;
    // src/text/enter_your_name_please.asm:55 TAY
    case 0xC1EB46: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:56 STY @LOCAL01
    case 0xC1EB47: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/enter_your_name_please.asm:57 JMP @UNKNOWN4
    case 0xC1EB49: cpu.execute_instruction<0x4C>(0x00EBE4, 3); return true;
    // src/text/enter_your_name_please.asm:59 LDX #0
    case 0xC1EB4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:59 LDX #0
    // Overlapping static entry reached from 0xC1EB4C.
    case 0xC1EB4E: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/enter_your_name_please.asm:60 TXA
    case 0xC1EB4F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:61 JSL UNKNOWN_C438A5
    case 0xC1EB50: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB54: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002B, 2); else cpu.execute_instruction<0xA9>(0x00FB2B, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1EB54.
    case 0xC1EB56: cpu.execute_instruction<0xFB>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB57: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB59: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1EB59.
    case 0xC1EB5B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/enter_your_name_please.asm:62 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1EB5C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please.asm:63 LDA #26
    case 0xC1EB5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/text/enter_your_name_please.asm:63 LDA #26
    // Overlapping static entry reached from 0xC1EB5E.
    case 0xC1EB60: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:64 JSR PRINT_STRING
    case 0xC1EB61: cpu.execute_instruction<0x20>(0x000EFC, 3); return true;
    // src/text/enter_your_name_please.asm:65 JSL WAIT_DMA_FINISHED
    case 0xC1EB64: cpu.execute_instruction<0x22>(0xC08F8B, 4); return true;
    // src/text/enter_your_name_please.asm:66 LDX #1
    case 0xC1EB68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please.asm:66 LDX #1
    // Overlapping static entry reached from 0xC1EB68.
    case 0xC1EB6A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:67 LDA #0
    case 0xC1EB6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:67 LDA #0
    // Overlapping static entry reached from 0xC1EB6B.
    case 0xC1EB6D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:68 JSL UNKNOWN_C438A5
    case 0xC1EB6E: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/enter_your_name_please.asm:69 LDA #24
    case 0xC1EB72: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/text/enter_your_name_please.asm:69 LDA #24
    // Overlapping static entry reached from 0xC1EB72.
    case 0xC1EB74: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:70 JSL UNKNOWN_C441B7
    case 0xC1EB75: cpu.execute_instruction<0x22>(0xC441B7, 4); return true;
    // src/text/enter_your_name_please.asm:71 LDX #1
    case 0xC1EB79: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please.asm:71 LDX #1
    // Overlapping static entry reached from 0xC1EB79.
    case 0xC1EB7B: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:72 LDA #0
    case 0xC1EB7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:72 LDA #0
    // Overlapping static entry reached from 0xC1EB7C.
    case 0xC1EB7E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:73 JSL UNKNOWN_C438A5
    case 0xC1EB7F: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/enter_your_name_please.asm:74 LDY #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EB83: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x009801, 3); return true;
    // src/text/enter_your_name_please.asm:74 LDY #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EB83.
    case 0xC1EB85: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:75 LDA __BSS_START__,Y
    case 0xC1EB86: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:75 LDA __BSS_START__,Y
    // Overlapping static entry reached from 0xC1EBC1.
    case 0xC1EB87: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/enter_your_name_please.asm:76 AND #$00FF
    case 0xC1EB89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/enter_your_name_please.asm:76 AND #$00FF
    // Overlapping static entry reached from 0xC1EB89.
    case 0xC1EB8B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/enter_your_name_please.asm:77 BEQ @UNKNOWN3
    case 0xC1EB8C: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/enter_your_name_please.asm:78 LDX #24
    case 0xC1EB8E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/text/enter_your_name_please.asm:78 LDX #24
    // Overlapping static entry reached from 0xC1EB8E.
    case 0xC1EB90: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/enter_your_name_please.asm:79 TYA
    case 0xC1EB91: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:80 JSL UNKNOWN_C440B5
    case 0xC1EB92: cpu.execute_instruction<0x22>(0xC440B5, 4); return true;
    // src/text/enter_your_name_please.asm:82 LDX #1
    case 0xC1EB96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please.asm:82 LDX #1
    // Overlapping static entry reached from 0xC1EB96.
    case 0xC1EB98: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:83 LDA #0
    case 0xC1EB99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please.asm:83 LDA #0
    // Overlapping static entry reached from 0xC1EB99.
    case 0xC1EB9B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:84 JSL UNKNOWN_C438A5
    case 0xC1EB9C: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // src/text/enter_your_name_please.asm:85 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EBA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009801, 3); return true;
    // src/text/enter_your_name_please.asm:85 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EBA0.
    case 0xC1EBA2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:86 STA @VIRTUAL02
    case 0xC1EBA3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/enter_your_name_please.asm:87 STZ @LOCAL00
    case 0xC1EBA5: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/enter_your_name_please.asm:88 LDA #.LOWORD(-1)
    case 0xC1EBA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/enter_your_name_please.asm:88 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EBA7.
    case 0xC1EBA9: cpu.execute_instruction<0xFF>(0xA41085, 4); return true;
    // src/text/enter_your_name_please.asm:89 STA @LOCAL00+2
    case 0xC1EBAA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please.asm:90 LDY @VIRTUAL02
    case 0xC1EBAC: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/enter_your_name_please.asm:90 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC1EBA9.
    case 0xC1EBAD: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/text/enter_your_name_please.asm:91 LDX #24
    case 0xC1EBAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/text/enter_your_name_please.asm:91 LDX #24
    // Overlapping static entry reached from 0xC1EBAE.
    case 0xC1EBB0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:92 LDA #WINDOW::UNKNOWN27
    case 0xC1EBB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/text/enter_your_name_please.asm:92 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EBB1.
    case 0xC1EBB3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:93 JSR TEXT_INPUT_DIALOG
    case 0xC1EBB4: cpu.execute_instruction<0x20>(0x00E57F, 3); return true;
    // src/text/enter_your_name_please.asm:94 TAY
    case 0xC1EBB7: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/enter_your_name_please.asm:95 STY @LOCAL01
    case 0xC1EBB8: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/enter_your_name_please.asm:96 LDX @VIRTUAL02
    case 0xC1EBBA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/enter_your_name_please.asm:97 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1EBBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // src/text/enter_your_name_please.asm:97 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1EBBC.
    case 0xC1EBBE: cpu.execute_instruction<0x9C>(0x006522, 3); return true;
    // src/text/enter_your_name_please.asm:98 JSL UNKNOWN_C4D065
    case 0xC1EBBF: cpu.execute_instruction<0x22>(0xC4D065, 4); return true;
    // src/text/enter_your_name_please.asm:98 JSL UNKNOWN_C4D065
    // Overlapping static entry reached from 0xC1EBBE.
    case 0xC1EBC1: cpu.execute_instruction<0xD0>(0x0000C4, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009F, 2); else cpu.execute_instruction<0xA9>(0x009C9F, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EBC3.
    case 0xC1EBC5: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC8: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBC9: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBCB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBCC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please.asm:99 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EBCE: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please.asm:100 REP #PROC_FLAGS::ACCUM8
    case 0xC1EBD0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please.asm:101 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EBD8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please.asm:102 LDX #.SIZEOF(game_state::mother2_playername)
    case 0xC1EBDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/enter_your_name_please.asm:102 LDX #.SIZEOF(game_state::mother2_playername)
    // Overlapping static entry reached from 0xC1EBDA.
    case 0xC1EBDC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:103 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1EBDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x0097F5, 3); return true;
    // src/text/enter_your_name_please.asm:103 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EBDD.
    case 0xC1EBDF: cpu.execute_instruction<0x97>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:104 JSL MEMCPY16
    case 0xC1EBE0: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/text/enter_your_name_please.asm:104 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1EBDF.
    case 0xC1EBE1: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/text/enter_your_name_please.asm:104 JSL MEMCPY16
    // Overlapping static entry reached from 0xC1EBE1.
    case 0xC1EBE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x001CA9, 3); return true;
    // src/text/enter_your_name_please.asm:106 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EBE4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/text/enter_your_name_please.asm:106 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EBE3.
    case 0xC1EBE5: cpu.execute_instruction<0x1C>(0x002200, 3); return true;
    // src/text/enter_your_name_please.asm:106 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EBE4.
    case 0xC1EBE6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:107 JSL CLOSE_WINDOW
    case 0xC1EBE7: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/text/enter_your_name_please.asm:107 JSL CLOSE_WINDOW
    // Overlapping static entry reached from 0xC1EBE5.
    case 0xC1EBE8: cpu.execute_instruction<0x21>(0x0000E5, 2); return true;
    // src/text/enter_your_name_please.asm:107 JSL CLOSE_WINDOW
    // Overlapping static entry reached from 0xC1EBE8.
    case 0xC1EBEA: cpu.execute_instruction<0xC3>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please.asm:108 LDA #WINDOW::UNKNOWN27
    case 0xC1EBEB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/text/enter_your_name_please.asm:108 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EBEA.
    case 0xC1EBEC: cpu.execute_instruction<0x27>(0x000000, 2); return true;
    // src/text/enter_your_name_please.asm:108 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EBEB.
    case 0xC1EBED: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/enter_your_name_please.asm:109 JSL CLOSE_WINDOW
    case 0xC1EBEE: cpu.execute_instruction<0x22>(0xC3E521, 4); return true;
    // src/text/enter_your_name_please.asm:110 LDA #$00FF
    case 0xC1EBF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x0000FF, 3); return true;
    // src/text/enter_your_name_please.asm:110 LDA #$00FF
    // Overlapping static entry reached from 0xC1EBF2.
    case 0xC1EBF4: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/enter_your_name_please.asm:111 STA ENABLE_WORD_WRAP
    case 0xC1EBF5: cpu.execute_instruction<0x8D>(0x005E6E, 3); return true;
    // src/text/enter_your_name_please.asm:112 SEP #PROC_FLAGS::ACCUM8
    case 0xC1EBF8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:113 STZ ALLOW_TEXT_OVERFLOW
    case 0xC1EBFA: cpu.execute_instruction<0x9C>(0x00B49D, 3); return true;
    // src/text/enter_your_name_please.asm:114 LDY @LOCAL01
    case 0xC1EBFD: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/enter_your_name_please.asm:115 REP #PROC_FLAGS::ACCUM8
    case 0xC1EBFF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/enter_your_name_please.asm:116 TYA
    case 0xC1EC01: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/enter_your_name_please.asm:117 END_C_FUNCTION
    case 0xC1EC02: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/enter_your_name_please.asm:117 END_C_FUNCTION
    case 0xC1EC03: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/fix_attacker_name.asm (source_named).
bool execute_text_fix_attacker_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_attacker_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23BCF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23BD4.
    case 0xC23BD6: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23BD8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:11 TAY
    case 0xC23BD9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:12 STY @LOCAL03
    case 0xC23BDA: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BDC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:15 STZ PRINT_ATTACKER_ARTICLE
    case 0xC23BDE: cpu.execute_instruction<0x9C>(0x005E77, 3); return true;
    // include/macros.asm:1284 STZ dest
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    case 0xC23BE1: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    case 0xC23BE3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001C, 2); else cpu.execute_instruction<0xA2>(0x00001C, 3); return true;
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    // Overlapping static entry reached from 0xC23BE3.
    case 0xC23BE5: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_attacker_name.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC23BE6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23BE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00A983, 3); return true;
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23BE8.
    case 0xC23BEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00FC22, 3); return true;
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    case 0xC23BEB: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    // Overlapping static entry reached from 0xC23BEA.
    case 0xC23BEC: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    // Overlapping static entry reached from 0xC23BEA.
    case 0xC23BED: cpu.execute_instruction<0x8E>(0x00AEC0, 3); return true;
    // src/text/fix_attacker_name.asm:22 LDX CURRENT_ATTACKER
    case 0xC23BEF: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:22 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC23BED.
    case 0xC23BF0: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/text/fix_attacker_name.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC23BF2: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    case 0xC23BF5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC23BF5.
    case 0xC23BF7: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:25 CMP #1
    case 0xC23BF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:25 CMP #1
    // Overlapping static entry reached from 0xC23BF8.
    case 0xC23BFA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_attacker_name.asm:26 BEQ @UNKNOWN0
    case 0xC23BFB: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/fix_attacker_name.asm:27 LDX CURRENT_ATTACKER
    case 0xC23BFD: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:28 LDA a:battler::npc_id,X
    case 0xC23C00: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    case 0xC23C03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23C03.
    case 0xC23C05: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23C06: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23C08: cpu.execute_instruction<0x4C>(0x003CD7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C0B.
    case 0xC23C0D: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C0D.
    case 0xC23C0F: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C10: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C0F.
    case 0xC23C11: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C10.
    case 0xC23C12: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C13: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/fix_attacker_name.asm:33 LDX CURRENT_ATTACKER
    case 0xC23C15: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:34 LDA a:battler::id,X
    case 0xC23C18: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    case 0xC23C1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23C1B.
    case 0xC23C1D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_attacker_name.asm:36 JSL MULT168
    case 0xC23C1E: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/fix_attacker_name.asm:38 INC
    case 0xC23C22: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:40 CLC
    case 0xC23C23: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:41 ADC @VIRTUAL06
    case 0xC23C24: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/fix_attacker_name.asm:42 STA @VIRTUAL06
    case 0xC23C26: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/fix_attacker_name.asm:43 STA @LOCAL00
    case 0xC23C28: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/fix_attacker_name.asm:44 LDA @VIRTUAL06+2
    case 0xC23C2A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/fix_attacker_name.asm:45 STA @LOCAL00+2
    case 0xC23C2C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    case 0xC23C2E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23C2E.
    case 0xC23C30: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00A983, 3); return true;
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23C31.
    case 0xC23C33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x006620, 3); return true;
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    case 0xC23C34: cpu.execute_instruction<0x20>(0x003B66, 3); return true;
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23C33.
    case 0xC23C35: cpu.execute_instruction<0x66>(0x00003B, 2); return true;
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23C33.
    case 0xC23C36: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:49 TAX
    case 0xC23C37: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:50 STX @LOCAL02
    case 0xC23C38: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:51 LDX CURRENT_ATTACKER
    case 0xC23C3A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:52 LDA a:battler::ally_or_enemy,X
    case 0xC23C3D: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    case 0xC23C40: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC23C40.
    case 0xC23C42: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:54 CMP #1
    case 0xC23C43: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:54 CMP #1
    // Overlapping static entry reached from 0xC23C43.
    case 0xC23C45: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_attacker_name.asm:55 BNE @UNKNOWN2
    case 0xC23C46: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/text/fix_attacker_name.asm:56 LDY @LOCAL03
    case 0xC23C48: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:57 BNE @UNKNOWN_M2
    case 0xC23C4A: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/text/fix_attacker_name.asm:58 LDX CURRENT_ATTACKER
    case 0xC23C4C: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:59 LDA a:battler::the_flag,X
    case 0xC23C4F: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    case 0xC23C52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC23C52.
    case 0xC23C54: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:61 CMP #1
    case 0xC23C55: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:61 CMP #1
    // Overlapping static entry reached from 0xC23C55.
    case 0xC23C57: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_attacker_name.asm:62 BNE @UNKNOWN1
    case 0xC23C58: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:63 LDX CURRENT_ATTACKER
    case 0xC23C5A: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:64 LDA a:battler::unknown76,X
    case 0xC23C5D: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/text/fix_attacker_name.asm:65 JSL UNKNOWN_C2B66A
    case 0xC23C60: cpu.execute_instruction<0x22>(0xC2B66A, 4); return true;
    // src/text/fix_attacker_name.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC23C64: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    case 0xC23C66: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC23C66.
    case 0xC23C68: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:68 CMP #2
    case 0xC23C69: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/fix_attacker_name.asm:68 CMP #2
    // Overlapping static entry reached from 0xC23C69.
    case 0xC23C6B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_attacker_name.asm:69 BEQ @UNKNOWN_M2
    case 0xC23C6C: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/text/fix_attacker_name.asm:94 SEP #PROC_FLAGS::ACCUM8
    case 0xC23C6E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:95 LDA #CHAR::SPACE
    case 0xC23C70: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x00A650, 3); return true;
    // src/text/fix_attacker_name.asm:96 LDX @LOCAL02
    case 0xC23C72: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:96 LDX @LOCAL02
    // Overlapping static entry reached from 0xC23C70.
    case 0xC23C73: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/text/fix_attacker_name.asm:97 STA __BSS_START__,X
    case 0xC23C74: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:97 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23C73.
    case 0xC23C75: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_attacker_name.asm:98 INX
    case 0xC23C77: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:99 STX @LOCAL03
    case 0xC23C78: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:100 LDA #1
    case 0xC23C7A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/fix_attacker_name.asm:101 STA PRINT_ATTACKER_ARTICLE
    case 0xC23C7C: cpu.execute_instruction<0x8D>(0x005E77, 3); return true;
    // src/text/fix_attacker_name.asm:101 STA PRINT_ATTACKER_ARTICLE
    // Overlapping static entry reached from 0xC23C7A.
    case 0xC23C7D: cpu.execute_instruction<0x77>(0x00005E, 2); return true;
    // src/text/fix_attacker_name.asm:102 LDX CURRENT_ATTACKER
    case 0xC23C7F: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:103 LDA a:battler::the_flag,X
    case 0xC23C82: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_attacker_name.asm:104 CLC
    case 0xC23C85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:105 ADC #CHAR::A_ - 1
    case 0xC23C86: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000070, 2); else cpu.execute_instruction<0x69>(0x00A670, 3); return true;
    // src/text/fix_attacker_name.asm:106 LDX @LOCAL03
    case 0xC23C88: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:106 LDX @LOCAL03
    // Overlapping static entry reached from 0xC23C86.
    case 0xC23C89: cpu.execute_instruction<0x16>(0x00009D, 2); return true;
    // src/text/fix_attacker_name.asm:107 STA a:battler::id,X
    case 0xC23C8A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:107 STA a:battler::id,X
    // Overlapping static entry reached from 0xC23C89.
    case 0xC23C8B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_attacker_name.asm:111 LDX CURRENT_ATTACKER
    case 0xC23C8D: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC23C90: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:113 LDA a:battler::id,X
    case 0xC23C92: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    case 0xC23C95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0000A0, 3); return true;
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23C95.
    case 0xC23C97: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_attacker_name.asm:115 BNE @UNKNOWN3
    case 0xC23C98: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23C9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x009819, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C9A.
    case 0xC23C9C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23C9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23C9F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA5: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/fix_attacker_name.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC23CA7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:117 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23CC9.
    case 0xC23CA8: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CA9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CAB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CAD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CAF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_attacker_name.asm:119 LDX #6
    case 0xC23CB1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/fix_attacker_name.asm:119 LDX #6
    // Overlapping static entry reached from 0xC23CB1.
    case 0xC23CB3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00A983, 3); return true;
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CB4.
    case 0xC23CB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00D222, 3); return true;
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    case 0xC23CB7: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23CB6.
    case 0xC23CB8: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23CB6.
    case 0xC23CB9: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23CB8.
    case 0xC23CBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/text/fix_attacker_name.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC23CBB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:122 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23CB9.
    case 0xC23CBC: cpu.execute_instruction<0x20>(0x00899C, 3); return true;
    // src/text/fix_attacker_name.asm:123 STZ ATTACKER_NAME_ADJUST_SCRATCH+6
    case 0xC23CBD: cpu.execute_instruction<0x9C>(0x00A989, 3); return true;
    // src/text/fix_attacker_name.asm:123 STZ ATTACKER_NAME_ADJUST_SCRATCH+6
    // Overlapping static entry reached from 0xC23CBC.
    case 0xC23CBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A2, 2); else cpu.execute_instruction<0xA9>(0x001BA2, 3); return true;
    // src/text/fix_attacker_name.asm:128 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 3
    case 0xC23CC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/text/fix_attacker_name.asm:128 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 3
    // Overlapping static entry reached from 0xC23CBF.
    case 0xC23CC1: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:128 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 3
    // Overlapping static entry reached from 0xC23CC0.
    case 0xC23CC2: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_attacker_name.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC23CC3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23CC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000083, 2); else cpu.execute_instruction<0xA9>(0x00A983, 3); return true;
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CC5.
    case 0xC23CC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x007022, 3); return true;
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    case 0xC23CC8: cpu.execute_instruction<0x22>(0xC1DD70, 4); return true;
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23CC7.
    case 0xC23CC9: cpu.execute_instruction<0x70>(0x0000DD, 2); return true;
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23CC7.
    case 0xC23CCA: cpu.execute_instruction<0xDD>(0x00AEC1, 3); return true;
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    // Overlapping static entry reached from 0xC23CC9.
    case 0xC23CCB: cpu.execute_instruction<0xC1>(0x0000AE, 2); return true;
    // src/text/fix_attacker_name.asm:134 LDX CURRENT_ATTACKER
    case 0xC23CCC: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:134 LDX CURRENT_ATTACKER
    // Overlapping static entry reached from 0xC23CCA.
    case 0xC23CCD: cpu.execute_instruction<0x70>(0x0000A9, 2); return true;
    // src/text/fix_attacker_name.asm:135 LDA a:battler::id,X
    case 0xC23CCF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:136 STA ATTACKER_ENEMY_ID
    case 0xC23CD2: cpu.execute_instruction<0x8D>(0x009658, 3); return true;
    // src/text/fix_attacker_name.asm:138 BRA @UNKNOWN6
    case 0xC23CD5: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/fix_attacker_name.asm:140 LDX CURRENT_ATTACKER
    case 0xC23CD7: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:141 LDA a:battler::id,X
    case 0xC23CDA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:142 CMP #4
    case 0xC23CDD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/fix_attacker_name.asm:142 CMP #4
    // Overlapping static entry reached from 0xC23CDD.
    case 0xC23CDF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23CE0: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23CE2: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    case 0xC23CE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23CE4.
    case 0xC23CE6: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/fix_attacker_name.asm:145 STX @LOCAL01
    case 0xC23CE7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/fix_attacker_name.asm:146 LDX CURRENT_ATTACKER
    case 0xC23CE9: cpu.execute_instruction<0xAE>(0x00A970, 3); return true;
    // src/text/fix_attacker_name.asm:147 LDA a:battler::row,X
    case 0xC23CEC: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    case 0xC23CEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    // Overlapping static entry reached from 0xC23CEF.
    case 0xC23CF1: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    case 0xC23CF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23CF2.
    case 0xC23CF4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_attacker_name.asm:150 JSL MULT168
    case 0xC23CF5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/fix_attacker_name.asm:151 CLC
    case 0xC23CF9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23CFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23CFA.
    case 0xC23CFC: cpu.execute_instruction<0x99>(0x0012A6, 3); return true;
    // src/text/fix_attacker_name.asm:153 LDX @LOCAL01
    case 0xC23CFD: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/fix_attacker_name.asm:154 JSL REDIRECT_C1AC4A
    case 0xC23CFF: cpu.execute_instruction<0x22>(0xC1DD70, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23D03: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23D04: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/fix_target_name.asm (source_named).
bool execute_text_fix_target_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_target_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23D05: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D07: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D08: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D09: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23D09.
    case 0xC23D0B: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23D0C: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC23D0D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:16 STZ PRINT_TARGET_ARTICLE
    case 0xC23D0F: cpu.execute_instruction<0x9C>(0x005E78, 3); return true;
    // src/text/fix_target_name.asm:17 STZ @LOCAL00
    case 0xC23D12: cpu.execute_instruction<0x64>(0x00000E, 2); return true;
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23D14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23D14.
    case 0xC23D16: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_target_name.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC23D17: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23D19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00A99E, 3); return true;
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23D19.
    case 0xC23D1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00FC22, 3); return true;
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    case 0xC23D1C: cpu.execute_instruction<0x22>(0xC08EFC, 4); return true;
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    // Overlapping static entry reached from 0xC23D1B.
    case 0xC23D1D: cpu.execute_instruction<0xFC>(0x00C08E, 3); return true;
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    // Overlapping static entry reached from 0xC23D1B.
    case 0xC23D1E: cpu.execute_instruction<0x8E>(0x00AEC0, 3); return true;
    // src/text/fix_target_name.asm:23 LDX CURRENT_TARGET
    case 0xC23D20: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:23 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC23D1E.
    case 0xC23D21: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/text/fix_target_name.asm:24 LDA a:battler::ally_or_enemy,X
    case 0xC23D23: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_target_name.asm:25 AND #$00FF
    case 0xC23D26: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC23D26.
    case 0xC23D28: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:26 CMP #1
    case 0xC23D29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_target_name.asm:26 CMP #1
    // Overlapping static entry reached from 0xC23D29.
    case 0xC23D2B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_target_name.asm:27 BEQ @UNKNOWN0
    case 0xC23D2C: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/fix_target_name.asm:28 LDX CURRENT_TARGET
    case 0xC23D2E: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:29 LDA a:battler::npc_id,X
    case 0xC23D31: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/text/fix_target_name.asm:30 AND #$00FF
    case 0xC23D34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC23D34.
    case 0xC23D36: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23D37: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23D39: cpu.execute_instruction<0x4C>(0x003E04, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D3C.
    case 0xC23D3E: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D3F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D3E.
    case 0xC23D40: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D40.
    case 0xC23D42: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23D41.
    case 0xC23D43: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23D44: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/fix_target_name.asm:34 LDX CURRENT_TARGET
    case 0xC23D46: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:35 LDA __BSS_START__,X
    case 0xC23D49: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    case 0xC23D4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23D4C.
    case 0xC23D4E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_target_name.asm:37 JSL MULT168
    case 0xC23D4F: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/fix_target_name.asm:39 INC
    case 0xC23D53: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:41 CLC
    case 0xC23D54: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:42 ADC @VIRTUAL06
    case 0xC23D55: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/fix_target_name.asm:43 STA @VIRTUAL06
    case 0xC23D57: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/fix_target_name.asm:44 STA @LOCAL00
    case 0xC23D59: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/fix_target_name.asm:45 LDA @VIRTUAL08
    case 0xC23D5B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/fix_target_name.asm:46 STA @LOCAL00 + 2
    case 0xC23D5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    case 0xC23D5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000019, 2); else cpu.execute_instruction<0xA2>(0x000019, 3); return true;
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23D5F.
    case 0xC23D61: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23D62: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00A99E, 3); return true;
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23D62.
    case 0xC23D64: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x006620, 3); return true;
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    case 0xC23D65: cpu.execute_instruction<0x20>(0x003B66, 3); return true;
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23D64.
    case 0xC23D66: cpu.execute_instruction<0x66>(0x00003B, 2); return true;
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    // Overlapping static entry reached from 0xC23D64.
    case 0xC23D67: cpu.execute_instruction<0x3B>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:50 TAX
    case 0xC23D68: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:51 STX @LOCAL01
    case 0xC23D69: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/fix_target_name.asm:52 LDX CURRENT_TARGET
    case 0xC23D6B: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:53 LDA a:battler::ally_or_enemy,X
    case 0xC23D6E: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_target_name.asm:54 AND #$00FF
    case 0xC23D71: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC23D71.
    case 0xC23D73: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:55 CMP #1
    case 0xC23D74: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_target_name.asm:55 CMP #1
    // Overlapping static entry reached from 0xC23D74.
    case 0xC23D76: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_target_name.asm:56 BNE @UNKNOWN2
    case 0xC23D77: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/text/fix_target_name.asm:57 LDX CURRENT_TARGET
    case 0xC23D79: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:58 LDA a:battler::the_flag,X
    case 0xC23D7C: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_target_name.asm:59 AND #$00FF
    case 0xC23D7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC23D7F.
    case 0xC23D81: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:60 CMP #1
    case 0xC23D82: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_target_name.asm:60 CMP #1
    // Overlapping static entry reached from 0xC23D82.
    case 0xC23D84: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_target_name.asm:61 BNE @UNKNOWN1
    case 0xC23D85: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/fix_target_name.asm:62 LDX CURRENT_TARGET
    case 0xC23D87: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:63 LDA __BSS_START__+76,X
    case 0xC23D8A: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/text/fix_target_name.asm:64 JSL UNKNOWN_C2B66A
    case 0xC23D8D: cpu.execute_instruction<0x22>(0xC2B66A, 4); return true;
    // src/text/fix_target_name.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC23D91: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:66 AND #$00FF
    case 0xC23D93: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC23D93.
    case 0xC23D95: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:67 CMP #2
    case 0xC23D96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/fix_target_name.asm:67 CMP #2
    // Overlapping static entry reached from 0xC23D96.
    case 0xC23D98: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_target_name.asm:68 BEQ @UNKNOWN2
    case 0xC23D99: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/text/fix_target_name.asm:75 SEP #PROC_FLAGS::ACCUM8
    case 0xC23D9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:76 LDA #CHAR::SPACE
    case 0xC23D9D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000050, 2); else cpu.execute_instruction<0xA9>(0x00A650, 3); return true;
    // src/text/fix_target_name.asm:77 LDX @LOCAL01
    case 0xC23D9F: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/fix_target_name.asm:77 LDX @LOCAL01
    // Overlapping static entry reached from 0xC23D9D.
    case 0xC23DA0: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/text/fix_target_name.asm:78 STA __BSS_START__,X
    case 0xC23DA1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:78 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23DA0.
    case 0xC23DA2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_target_name.asm:79 INX
    case 0xC23DA4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:80 STX @LOCALX
    case 0xC23DA5: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/fix_target_name.asm:81 LDA #1
    case 0xC23DA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/fix_target_name.asm:82 STA PRINT_TARGET_ARTICLE
    case 0xC23DA9: cpu.execute_instruction<0x8D>(0x005E78, 3); return true;
    // src/text/fix_target_name.asm:82 STA PRINT_TARGET_ARTICLE
    // Overlapping static entry reached from 0xC23DA7.
    case 0xC23DAA: cpu.execute_instruction<0x78>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:82 STA PRINT_TARGET_ARTICLE
    // Overlapping static entry reached from 0xC23DAA.
    case 0xC23DAB: cpu.execute_instruction<0x5E>(0x0072AE, 3); return true;
    // src/text/fix_target_name.asm:83 LDX CURRENT_TARGET
    case 0xC23DAC: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:83 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC23DAB.
    case 0xC23DAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000BD, 2); else cpu.execute_instruction<0xA9>(0x000BBD, 3); return true;
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    case 0xC23DAF: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    // Overlapping static entry reached from 0xC23DAE.
    case 0xC23DB0: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    // Overlapping static entry reached from 0xC23DAE.
    case 0xC23DB1: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/fix_target_name.asm:87 CLC
    case 0xC23DB2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:88 ADC #CHAR::A_ - 1
    case 0xC23DB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000070, 2); else cpu.execute_instruction<0x69>(0x00A670, 3); return true;
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    case 0xC23DB5: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    // Overlapping static entry reached from 0xC23DB3.
    case 0xC23DB6: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    case 0xC23DB7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23DB6.
    case 0xC23DB8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_target_name.asm:92 LDX CURRENT_TARGET
    case 0xC23DBA: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC23DBD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:94 LDA __BSS_START__,X
    case 0xC23DBF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    case 0xC23DC2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0000A0, 3); return true;
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23DC2.
    case 0xC23DC4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_target_name.asm:96 BNE @UNKNOWN3
    case 0xC23DC5: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DC7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x009819, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23DC7.
    case 0xC23DC9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DCF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DD0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23DD2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/fix_target_name.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC23DD4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DD6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DD8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DDA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23DDC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_target_name.asm:100 LDX #6
    case 0xC23DDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/fix_target_name.asm:100 LDX #6
    // Overlapping static entry reached from 0xC23DDE.
    case 0xC23DE0: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23DE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00A99E, 3); return true;
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23DE1.
    case 0xC23DE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x00D222, 3); return true;
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    case 0xC23DE4: cpu.execute_instruction<0x22>(0xC08ED2, 4); return true;
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23DE3.
    case 0xC23DE5: cpu.execute_instruction<0xD2>(0x00008E, 2); return true;
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23DE3.
    case 0xC23DE6: cpu.execute_instruction<0x8E>(0x00E2C0, 3); return true;
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    // Overlapping static entry reached from 0xC23DE5.
    case 0xC23DE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/text/fix_target_name.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC23DE8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:103 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC23DE6.
    case 0xC23DE9: cpu.execute_instruction<0x20>(0x00A49C, 3); return true;
    // src/text/fix_target_name.asm:104 STZ TARGET_NAME_ADJUST_SCRATCH+6
    case 0xC23DEA: cpu.execute_instruction<0x9C>(0x00A9A4, 3); return true;
    // src/text/fix_target_name.asm:104 STZ TARGET_NAME_ADJUST_SCRATCH+6
    // Overlapping static entry reached from 0xC23DE9.
    case 0xC23DEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A2, 2); else cpu.execute_instruction<0xA9>(0x001BA2, 3); return true;
    // src/text/fix_target_name.asm:109 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23DED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001B, 2); else cpu.execute_instruction<0xA2>(0x00001B, 3); return true;
    // src/text/fix_target_name.asm:109 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23DEC.
    case 0xC23DEE: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:109 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23DED.
    case 0xC23DEF: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_target_name.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC23DF0: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23DF2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009E, 2); else cpu.execute_instruction<0xA9>(0x00A99E, 3); return true;
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23DF2.
    case 0xC23DF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000022, 2); else cpu.execute_instruction<0xA9>(0x007622, 3); return true;
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    case 0xC23DF5: cpu.execute_instruction<0x22>(0xC1DD76, 4); return true;
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    // Overlapping static entry reached from 0xC23DF4.
    case 0xC23DF6: cpu.execute_instruction<0x76>(0x0000DD, 2); return true;
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    // Overlapping static entry reached from 0xC23DF4.
    case 0xC23DF7: cpu.execute_instruction<0xDD>(0x00AEC1, 3); return true;
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    // Overlapping static entry reached from 0xC23DF6.
    case 0xC23DF8: cpu.execute_instruction<0xC1>(0x0000AE, 2); return true;
    // src/text/fix_target_name.asm:115 LDX CURRENT_TARGET
    case 0xC23DF9: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:115 LDX CURRENT_TARGET
    // Overlapping static entry reached from 0xC23DF7.
    case 0xC23DFA: cpu.execute_instruction<0x72>(0x0000A9, 2); return true;
    // src/text/fix_target_name.asm:116 LDA __BSS_START__,X
    case 0xC23DFC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:117 STA TARGET_ENEMY_ID
    case 0xC23DFF: cpu.execute_instruction<0x8D>(0x00965A, 3); return true;
    // src/text/fix_target_name.asm:119 BRA @UNKNOWN6
    case 0xC23E02: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/fix_target_name.asm:121 LDX CURRENT_TARGET
    case 0xC23E04: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:122 LDA __BSS_START__,X
    case 0xC23E07: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:123 CMP #4
    case 0xC23E0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/fix_target_name.asm:123 CMP #4
    // Overlapping static entry reached from 0xC23E0A.
    case 0xC23E0C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23E0D: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23E0F: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    case 0xC23E11: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000005, 2); else cpu.execute_instruction<0xA2>(0x000005, 3); return true;
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23E11.
    case 0xC23E13: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/fix_target_name.asm:126 STX @LOCAL01
    case 0xC23E14: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/fix_target_name.asm:127 LDX CURRENT_TARGET
    case 0xC23E16: cpu.execute_instruction<0xAE>(0x00A972, 3); return true;
    // src/text/fix_target_name.asm:128 LDA a:battler::row,X
    case 0xC23E19: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/text/fix_target_name.asm:129 AND #$00FF
    case 0xC23E1C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC23E1C.
    case 0xC23E1E: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    case 0xC23E1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23E1F.
    case 0xC23E21: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_target_name.asm:131 JSL MULT168
    case 0xC23E22: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/fix_target_name.asm:132 CLC
    case 0xC23E26: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23E27: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23E27.
    case 0xC23E29: cpu.execute_instruction<0x99>(0x0014A6, 3); return true;
    // src/text/fix_target_name.asm:134 LDX @LOCAL01
    case 0xC23E2A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/fix_target_name.asm:135 JSL REDIRECT_C1ACA1
    case 0xC23E2C: cpu.execute_instruction<0x22>(0xC1DD76, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23E30: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23E31: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/free_tile.asm (source_named).
bool execute_text_free_tile_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/free_tile.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44AF7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    case 0xC44AF9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    case 0xC44AFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    case 0xC44AFB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    case 0xC44AFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC44AFC.
    case 0xC44AFE: cpu.execute_instruction<0xFF>(0x29685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    case 0xC44AFF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/free_tile.asm:8 END_STACK_VARS
    case 0xC44B00: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/free_tile.asm:9 AND #$03FF
    case 0xC44B01: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/text/free_tile.asm:9 AND #$03FF
    // Overlapping static entry reached from 0xC44AFE.
    case 0xC44B02: cpu.execute_instruction<0xFF>(0x108503, 4); return true;
    // src/text/free_tile.asm:9 AND #$03FF
    // Overlapping static entry reached from 0xC44B01.
    case 0xC44B03: cpu.execute_instruction<0x03>(0x000085, 2); return true;
    // src/text/free_tile.asm:10 STA @LOCAL01
    case 0xC44B04: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/free_tile.asm:10 STA @LOCAL01
    // Overlapping static entry reached from 0xC44B03.
    case 0xC44B05: cpu.execute_instruction<0x10>(0x0000AA, 2); return true;
    // src/text/free_tile.asm:11 TAX
    case 0xC44B06: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/free_tile.asm:12 LDA f:LOCKED_TILES,X
    case 0xC44B07: cpu.execute_instruction<0xBF>(0xC43915, 4); return true;
    // src/text/free_tile.asm:13 AND #$00FF
    case 0xC44B0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/free_tile.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC44B0B.
    case 0xC44B0D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/free_tile.asm:14 BNE @UNKNOWN0
    case 0xC44B0E: cpu.execute_instruction<0xD0>(0x000028, 2); return true;
    // src/text/free_tile.asm:15 LDA @LOCAL01
    case 0xC44B10: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/free_tile.asm:16 LSR
    case 0xC44B12: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/free_tile.asm:17 LSR
    case 0xC44B13: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/free_tile.asm:18 LSR
    case 0xC44B14: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/free_tile.asm:19 LSR
    case 0xC44B15: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/free_tile.asm:20 TAX
    case 0xC44B16: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/free_tile.asm:21 LDA @LOCAL01
    case 0xC44B17: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/free_tile.asm:22 AND #$000F
    case 0xC44B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/text/free_tile.asm:22 AND #$000F
    // Overlapping static entry reached from 0xC44B19.
    case 0xC44B1B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/free_tile.asm:23 STA @LOCAL01
    case 0xC44B1C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/free_tile.asm:24 TXA
    case 0xC44B1E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/free_tile.asm:25 ASL
    case 0xC44B1F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/free_tile.asm:26 CLC
    case 0xC44B20: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/free_tile.asm:27 ADC #.LOWORD(USED_BG2_TILE_MAP)
    case 0xC44B21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x001AD6, 3); return true;
    // src/text/free_tile.asm:27 ADC #.LOWORD(USED_BG2_TILE_MAP)
    // Overlapping static entry reached from 0xC44B21.
    case 0xC44B23: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/free_tile.asm:28 TAX
    case 0xC44B24: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/free_tile.asm:29 STX @LOCAL00
    case 0xC44B25: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/free_tile.asm:30 LDA @LOCAL01
    case 0xC44B27: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/free_tile.asm:31 ASL
    case 0xC44B29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/free_tile.asm:32 PHA
    case 0xC44B2A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/free_tile.asm:33 LDA __BSS_START__,X
    case 0xC44B2B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/free_tile.asm:34 PLX
    case 0xC44B2E: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/free_tile.asm:35 AND f:UNKNOWN_C44AD7,X
    case 0xC44B2F: cpu.execute_instruction<0x3F>(0xC44AD7, 4); return true;
    // src/text/free_tile.asm:36 LDX @LOCAL00
    case 0xC44B33: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/free_tile.asm:37 STA __BSS_START__,X
    case 0xC44B35: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/free_tile.asm:39 END_C_FUNCTION
    case 0xC44B38: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/free_tile.asm:39 END_C_FUNCTION
    case 0xC44B39: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/free_tile_safe.asm (source_named).
bool execute_text_free_tile_safe_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/free_tile_safe.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC44E4D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/free_tile_safe.asm:5 AND #$03FF
    case 0xC44E4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0003FF, 3); return true;
    // src/text/free_tile_safe.asm:5 AND #$03FF
    // Overlapping static entry reached from 0xC44E4F.
    case 0xC44E51: cpu.execute_instruction<0x03>(0x0000C9, 2); return true;
    // src/text/free_tile_safe.asm:6 CMP #64
    case 0xC44E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/text/free_tile_safe.asm:6 CMP #64
    // Overlapping static entry reached from 0xC44E51.
    case 0xC44E53: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/free_tile_safe.asm:6 CMP #64
    // Overlapping static entry reached from 0xC44E52.
    case 0xC44E54: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/free_tile_safe.asm:7 BEQ @UNKNOWN0
    case 0xC44E55: cpu.execute_instruction<0xF0>(0x000009, 2); return true;
    // src/text/free_tile_safe.asm:8 CMP #0
    case 0xC44E57: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/free_tile_safe.asm:8 CMP #0
    // Overlapping static entry reached from 0xC44E57.
    case 0xC44E59: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/free_tile_safe.asm:9 BEQ @UNKNOWN0
    case 0xC44E5A: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/free_tile_safe.asm:10 JSL FREE_TILE
    case 0xC44E5C: cpu.execute_instruction<0x22>(0xC44AF7, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/free_tile_safe.asm:12 END_C_FUNCTION
    case 0xC44E60: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_active_window_address.asm (source_named).
bool execute_text_get_active_window_address_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_active_window_address.asm:3 BEGIN_C_FUNCTION
    case 0xC10301: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_active_window_address.asm:4 LDA WINDOW_HEAD
    case 0xC10303: cpu.execute_instruction<0xAD>(0x0088E0, 3); return true;
    // src/text/get_active_window_address.asm:5 CMP #$FFFF
    case 0xC10306: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/get_active_window_address.asm:5 CMP #$FFFF
    // Overlapping static entry reached from 0xC10306.
    case 0xC10308: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/text/get_active_window_address.asm:6 BNE @UNKNOWN0
    case 0xC10309: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    case 0xC1030B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FE, 2); else cpu.execute_instruction<0xA9>(0x0085FE, 3); return true;
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    // Overlapping static entry reached from 0xC10308.
    case 0xC1030C: cpu.execute_instruction<0xFE>(0x008085, 3); return true;
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    // Overlapping static entry reached from 0xC1030B.
    case 0xC1030D: cpu.execute_instruction<0x85>(0x000080, 2); return true;
    // src/text/get_active_window_address.asm:8 BRA @UNKNOWN1
    case 0xC1030E: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/get_active_window_address.asm:8 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC1030D.
    case 0xC1030F: cpu.execute_instruction<0x13>(0x0000AD, 2); return true;
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC10310: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1030F.
    case 0xC10311: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10311.
    case 0xC10312: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/text/get_active_window_address.asm:11 ASL
    case 0xC10313: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:12 TAX
    case 0xC10314: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:13 LDA OPEN_WINDOW_TABLE,X
    case 0xC10315: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/get_active_window_address.asm:14 LDY #.SIZEOF(window_stats)
    case 0xC10318: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/get_active_window_address.asm:14 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10318.
    case 0xC1031A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_active_window_address.asm:15 JSL MULT168
    case 0xC1031B: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/get_active_window_address.asm:16 CLC
    case 0xC1031F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:17 ADC #.LOWORD(WINDOW_STATS)
    case 0xC10320: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/get_active_window_address.asm:17 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC10320.
    case 0xC10322: cpu.execute_instruction<0x86>(0x000060, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_active_window_address.asm:19 END_C_FUNCTION
    case 0xC10323: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_argument_memory.asm (source_named).
bool execute_text_get_argument_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_argument_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC103DC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC103DE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC103DF: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC103E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC103E0.
    case 0xC103E2: cpu.execute_instruction<0xFF>(0x01205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC103E3: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/get_argument_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC103E4: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/get_argument_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC103E2.
    case 0xC103E6: cpu.execute_instruction<0x03>(0x000018, 2); return true;
    // src/text/get_argument_memory.asm:8 CLC
    case 0xC103E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_argument_memory.asm:9 ADC #window_stats::argument_memory
    case 0xC103E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/get_argument_memory.asm:9 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC103E8.
    case 0xC103EA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/get_argument_memory.asm:10 TAY
    case 0xC103EB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103EC: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103F1: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC103F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC103F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC103F8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC103FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC103FC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_argument_memory.asm:13 END_C_FUNCTION
    case 0xC103FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_argument_memory.asm:13 END_C_FUNCTION
    case 0xC103FF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_blinking_prompt.asm (source_named).
bool execute_text_get_blinking_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_blinking_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC10042: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_blinking_prompt.asm:5 LDA BLINKING_TRIANGLE_FLAG
    case 0xC10044: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_blinking_prompt.asm:6 END_C_FUNCTION
    case 0xC10047: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_character_at_cursor_position.asm (source_named).
bool execute_text_get_character_at_cursor_position_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_character_at_cursor_position.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4406A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC4406F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC4406F.
    case 0xC44071: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC44072: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_character_at_cursor_position.asm:9 END_STACK_VARS
    case 0xC44073: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:10 STA @VIRTUAL02
    case 0xC44074: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/get_character_at_cursor_position.asm:10 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC44071.
    case 0xC44075: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC44076: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D3, 2); else cpu.execute_instruction<0xA9>(0x00A6D3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44076.
    case 0xC44078: cpu.execute_instruction<0xA6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC44079: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC44078.
    case 0xC4407A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC4407B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EF, 2); else cpu.execute_instruction<0xA9>(0x0000EF, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC4407B.
    case 0xC4407D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_character_at_cursor_position.asm:11 LOADPTR NAME_INPUT_WINDOW_SELECTION_LAYOUT_POINTERS, @VIRTUAL0A
    case 0xC4407E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/get_character_at_cursor_position.asm:12 TYA
    case 0xC44080: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:13 ASL
    case 0xC44081: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:14 ASL
    case 0xC44082: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:15 CLC
    case 0xC44083: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:16 ADC @VIRTUAL0A
    case 0xC44084: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/get_character_at_cursor_position.asm:17 STA @VIRTUAL0A
    case 0xC44086: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC44088: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC44088.
    case 0xC4408A: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4408B: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4408D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC4408E: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC44090: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/get_character_at_cursor_position.asm:18 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC44092: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // src/text/get_character_at_cursor_position.asm:19 TXA
    case 0xC44094: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:574 STA scratch
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC44095: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:575 ASL
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC44097: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:576 ADC scratch
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC44098: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:577 ASL
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC4409A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:578 ADC scratch
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC4409B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:579 ASL
    // Macro caller: src/text/get_character_at_cursor_position.asm:20 OPTIMIZED_MULT @VIRTUAL04, 14
    case 0xC4409D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:21 CLC
    case 0xC4409E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:22 ADC @VIRTUAL02
    case 0xC4409F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/get_character_at_cursor_position.asm:23 TAX
    case 0xC440A1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:24 LDA f:NAME_ENTRY_GRID_CHARACTER_OFFSET_TABLE,X
    case 0xC440A2: cpu.execute_instruction<0xBF>(0xC20912, 4); return true;
    // src/text/get_character_at_cursor_position.asm:25 AND #$00FF
    case 0xC440A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/get_character_at_cursor_position.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC440A6.
    case 0xC440A8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/get_character_at_cursor_position.asm:26 CLC
    case 0xC440A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_character_at_cursor_position.asm:27 ADC @VIRTUAL06
    case 0xC440AA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/get_character_at_cursor_position.asm:28 STA @VIRTUAL06
    case 0xC440AC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/get_character_at_cursor_position.asm:29 LDA [@VIRTUAL06]
    case 0xC440AE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/get_character_at_cursor_position.asm:30 AND #$00FF
    case 0xC440B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/get_character_at_cursor_position.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC440B0.
    case 0xC440B2: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_character_at_cursor_position.asm:31 END_C_FUNCTION
    case 0xC440B3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_character_at_cursor_position.asm:31 END_C_FUNCTION
    case 0xC440B4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_event_flag.asm (source_named).
bool execute_text_get_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC21628: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC2162D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC2162D.
    case 0xC2162F: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC21630: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC21631: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:10 DEC
    case 0xC21632: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:11 STA @LOCAL00
    case 0xC21633: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/get_event_flag.asm:12 LSR
    case 0xC21635: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:13 LSR
    case 0xC21636: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:14 LSR
    case 0xC21637: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:15 PHA
    case 0xC21638: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:16 LDY #8
    case 0xC21639: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/get_event_flag.asm:16 LDY #8
    // Overlapping static entry reached from 0xC21639.
    case 0xC2163B: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/get_event_flag.asm:17 LDA @LOCAL00
    case 0xC2163C: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/get_event_flag.asm:18 JSL MODULUS16
    case 0xC2163E: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/text/get_event_flag.asm:19 TAX
    case 0xC21642: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC21643: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/get_event_flag.asm:21 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC21645: cpu.execute_instruction<0xBF>(0xC4562F, 4); return true;
    // src/text/get_event_flag.asm:22 PLX
    case 0xC21649: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:23 AND EVENT_FLAGS,X
    case 0xC2164A: cpu.execute_instruction<0x3D>(0x009C08, 3); return true;
    // src/text/get_event_flag.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC2164D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/get_event_flag.asm:25 AND #$00FF
    case 0xC2164F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/get_event_flag.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC2164F.
    case 0xC21651: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/get_event_flag.asm:26 BEQ @UNKNOWN0
    case 0xC21652: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/get_event_flag.asm:27 LDA #1
    case 0xC21654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/get_event_flag.asm:27 LDA #1
    // Overlapping static entry reached from 0xC21654.
    case 0xC21656: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/get_event_flag.asm:28 BRA @UNKNOWN1
    case 0xC21657: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/get_event_flag.asm:30 LDA #0
    case 0xC21659: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/get_event_flag.asm:30 LDA #0
    // Overlapping static entry reached from 0xC21659.
    case 0xC2165B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_event_flag.asm:32 END_C_FUNCTION
    case 0xC2165C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_event_flag.asm:32 END_C_FUNCTION
    case 0xC2165D: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_party_character_name.asm (source_named).
bool execute_text_get_party_character_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_party_character_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC222D3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC222D8.
    case 0xC222DA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222DB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC222DC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    case 0xC222DD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC222DA.
    case 0xC222DE: cpu.execute_instruction<0x0E>(0x0004C9, 3); return true;
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    case 0xC222DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC222DF.
    case 0xC222E1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC222E2: cpu.execute_instruction<0x90>(0x00004B, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC222E4: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    case 0xC222E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    // Overlapping static entry reached from 0xC222E6.
    case 0xC222E8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/get_party_character_name.asm:13 BNE @UNKNOWN0
    case 0xC222E9: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000019, 2); else cpu.execute_instruction<0xA9>(0x009819, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC222EB.
    case 0xC222ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC222F6: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/get_party_character_name.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC222F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC222FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC222FC: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC222FE: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22300: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/get_party_character_name.asm:17 BRA @RETURN
    case 0xC22302: cpu.execute_instruction<0x80>(0x00004B, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC22304: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000089, 2); else cpu.execute_instruction<0xA9>(0x009589, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22304.
    case 0xC22306: cpu.execute_instruction<0x95>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC22307: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22306.
    case 0xC22308: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC22309: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22308.
    case 0xC2230A: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC22309.
    case 0xC2230B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2230C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/get_party_character_name.asm:20 LDA @LOCAL00
    case 0xC2230E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/get_party_character_name.asm:21 ASL
    case 0xC22310: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:22 TAX
    case 0xC22311: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:23 INX
    case 0xC22312: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:24 LDA f:NPC_AI_TABLE,X
    case 0xC22313: cpu.execute_instruction<0xBF>(0xD58F23, 4); return true;
    // src/text/get_party_character_name.asm:25 AND #$00FF
    case 0xC22317: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/get_party_character_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC22317.
    case 0xC22319: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    case 0xC2231A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2231A.
    case 0xC2231C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_party_character_name.asm:27 JSL MULT168
    case 0xC2231D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/get_party_character_name.asm:29 INC
    case 0xC22321: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:31 CLC
    case 0xC22322: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:32 ADC @VIRTUAL06
    case 0xC22323: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/get_party_character_name.asm:33 STA @VIRTUAL06
    case 0xC22325: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/get_party_character_name.asm:34 STA @RETURNVAL
    case 0xC22327: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/get_party_character_name.asm:35 LDA @VIRTUAL06+2
    case 0xC22329: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/get_party_character_name.asm:36 STA @RETURNVAL+2
    case 0xC2232B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/get_party_character_name.asm:37 BRA @RETURN
    case 0xC2232D: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/get_party_character_name.asm:39 DEC
    case 0xC2232F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC22330: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC22330.
    case 0xC22332: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_party_character_name.asm:41 JSL MULT168
    case 0xC22333: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/get_party_character_name.asm:42 CLC
    case 0xC22337: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC22338: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC22338.
    case 0xC2233A: cpu.execute_instruction<0x99>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2233B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2233D: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2233E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC22340: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC22341: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC22343: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/get_party_character_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC22345: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22347: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22349: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2234B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2234D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC2234F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC22350: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_psi_name.asm (source_named).
bool execute_text_get_psi_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_psi_name.asm:3 BEGIN_C_FUNCTION
    case 0xC1C403: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C405: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C406: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C407: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C408: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C408.
    case 0xC1C40A: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C40B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C40C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_psi_name.asm:9 STA @LOCAL01
    case 0xC1C40D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/get_psi_name.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C40A.
    case 0xC1C40E: cpu.execute_instruction<0x12>(0x0000C9, 2); return true;
    // src/text/get_psi_name.asm:10 CMP #1
    case 0xC1C40F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/get_psi_name.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C40E.
    case 0xC1C410: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/get_psi_name.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C40F.
    case 0xC1C411: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/get_psi_name.asm:11 BNE @NOT_ROCKIN
    case 0xC1C412: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C414: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000025, 2); else cpu.execute_instruction<0xA9>(0x009825, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C414.
    case 0xC1C416: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C417: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C419: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C41A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C41C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C41D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C41F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/get_psi_name.asm:13 BRA @UNKNOWN1
    case 0xC1C421: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C423: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007A, 2); else cpu.execute_instruction<0xA9>(0x008D7A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C423.
    case 0xC1C425: cpu.execute_instruction<0x8D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C426: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C428: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C428.
    case 0xC1C42A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C42B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/get_psi_name.asm:17 LDA @LOCAL01
    case 0xC1C42D: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/get_psi_name.asm:18 DEC
    case 0xC1C42F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:630 STA scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C430: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:631 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C432: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:632 ADC scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C433: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:633 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C435: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:634 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C436: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:635 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C437: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:636 ADC scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C438: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/get_psi_name.asm:20 CLC
    case 0xC1C43A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_psi_name.asm:21 ADC @VIRTUAL06
    case 0xC1C43B: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/get_psi_name.asm:22 STA @VIRTUAL06
    case 0xC1C43D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/get_psi_name.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C43F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C441: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C443: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C445: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C447: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/get_psi_name.asm:26 LDA #.LOWORD(-1)
    case 0xC1C449: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/get_psi_name.asm:26 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1C449.
    case 0xC1C44B: cpu.execute_instruction<0xFF>(0x47FB22, 4); return true;
    // src/text/get_psi_name.asm:30 JSL UNKNOWN_C447FB
    case 0xC1C44C: cpu.execute_instruction<0x22>(0xC447FB, 4); return true;
    // src/text/get_psi_name.asm:30 JSL UNKNOWN_C447FB
    // Overlapping static entry reached from 0xC1C44B.
    case 0xC1C44F: cpu.execute_instruction<0xC4>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_psi_name.asm:32 END_C_FUNCTION
    case 0xC1C450: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_psi_name.asm:32 END_C_FUNCTION
    case 0xC1C451: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_secondary_memory.asm (source_named).
bool execute_text_get_secondary_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10400: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_secondary_memory.asm:5 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10402: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/get_secondary_memory.asm:6 TAX
    case 0xC10405: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_secondary_memory.asm:7 LDA a:window_stats::secondary_memory,X
    case 0xC10406: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_secondary_memory.asm:8 END_C_FUNCTION
    case 0xC10409: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_text_x.asm (source_named).
bool execute_text_get_text_x_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_text_x.asm:3 BEGIN_C_FUNCTION
    case 0xC104B5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_text_x.asm:6 LDA CURRENT_FOCUS_WINDOW
    case 0xC104B7: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/get_text_x.asm:7 CMP #.LOWORD(-1)
    case 0xC104BA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/get_text_x.asm:7 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC104BA.
    case 0xC104BC: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/text/get_text_x.asm:8 BNE @UNKNOWN0
    case 0xC104BD: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/get_text_x.asm:9 LDA #0
    case 0xC104BF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/get_text_x.asm:9 LDA #0
    // Overlapping static entry reached from 0xC104BC.
    case 0xC104C0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/get_text_x.asm:9 LDA #0
    // Overlapping static entry reached from 0xC104BF.
    case 0xC104C1: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/get_text_x.asm:10 BRA @UNKNOWN1
    case 0xC104C2: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/get_text_x.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC104C4: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/get_text_x.asm:14 ASL
    case 0xC104C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_text_x.asm:15 TAX
    case 0xC104C8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_x.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC104C9: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/get_text_x.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC104CC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/get_text_x.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC104CC.
    case 0xC104CE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_text_x.asm:18 JSL MULT168
    case 0xC104CF: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/get_text_x.asm:19 TAX
    case 0xC104D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_x.asm:20 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC104D4: cpu.execute_instruction<0xBD>(0x00865E, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_text_x.asm:22 END_C_FUNCTION
    case 0xC104D7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_text_y.asm (source_named).
bool execute_text_get_text_y_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_text_y.asm:3 BEGIN_C_FUNCTION
    case 0xC104D8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_text_y.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC104DA: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/get_text_y.asm:6 ASL
    case 0xC104DD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_text_y.asm:7 TAX
    case 0xC104DE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_y.asm:8 LDA OPEN_WINDOW_TABLE,X
    case 0xC104DF: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/get_text_y.asm:9 LDY #.SIZEOF(window_stats)
    case 0xC104E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/get_text_y.asm:9 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC104E2.
    case 0xC104E4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_text_y.asm:10 JSL MULT168
    case 0xC104E5: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/get_text_y.asm:10 JSL MULT168
    // Overlapping static entry reached from 0xC1A901.
    case 0xC104E6: cpu.execute_instruction<0xF7>(0x00008F, 2); return true;
    // src/text/get_text_y.asm:10 JSL MULT168
    // Overlapping static entry reached from 0xC104E6.
    case 0xC104E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000AA, 2); else cpu.execute_instruction<0xC0>(0x00BDAA, 3); return true;
    // src/text/get_text_y.asm:11 TAX
    case 0xC104E9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_y.asm:12 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC104EA: cpu.execute_instruction<0xBD>(0x008660, 3); return true;
    // src/text/get_text_y.asm:12 LDA WINDOW_STATS+window_stats::text_y,X
    // Overlapping static entry reached from 0xC104E8.
    case 0xC104EB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_text_y.asm:13 END_C_FUNCTION
    case 0xC104ED: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_window_focus.asm (source_named).
bool execute_text_get_window_focus_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_window_focus.asm:3 BEGIN_C_FUNCTION
    case 0xC10078: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_window_focus.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC1007A: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_window_focus.asm:6 END_C_FUNCTION
    case 0xC1007D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_working_memory.asm (source_named).
bool execute_text_get_working_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_working_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC1040A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC1040C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC1040D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC1040E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC1040E.
    case 0xC10410: cpu.execute_instruction<0xFF>(0x01205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC10411: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/get_working_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10412: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/get_working_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC10410.
    case 0xC10414: cpu.execute_instruction<0x03>(0x000018, 2); return true;
    // src/text/get_working_memory.asm:8 CLC
    case 0xC10415: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_working_memory.asm:9 ADC #window_stats::working_memory
    case 0xC10416: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/get_working_memory.asm:9 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10416.
    case 0xC10418: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/get_working_memory.asm:10 TAY
    case 0xC10419: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1041A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1041D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1041F: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10422: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10424: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10426: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10428: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1042A: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_working_memory.asm:13 END_C_FUNCTION
    case 0xC1042C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_working_memory.asm:13 END_C_FUNCTION
    case 0xC1042D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hide_hppp_windows.asm (source_named).
bool execute_text_hide_hppp_windows_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hide_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10A1D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10A1F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10A20: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10A21: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10A21.
    case 0xC10A23: cpu.execute_instruction<0xFF>(0xF8225B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10A24: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:7 JSR UNKNOWN_C3E6F8
    case 0xC10A25: cpu.execute_instruction<0x22>(0xC3E6F8, 4); return true;
    // src/text/hide_hppp_windows.asm:7 JSR UNKNOWN_C3E6F8
    // Overlapping static entry reached from 0xC10A23.
    case 0xC10A27: cpu.execute_instruction<0xE6>(0x0000C3, 2); return true;
    // src/text/hide_hppp_windows.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC10A29: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hide_hppp_windows.asm:9 STZ RENDER_HPPP_WINDOWS
    case 0xC10A2B: cpu.execute_instruction<0x9C>(0x0089C9, 3); return true;
    // src/text/hide_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10A2E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hide_hppp_windows.asm:11 LDA BATTLE_MODE_FLAG
    case 0xC10A30: cpu.execute_instruction<0xAD>(0x009643, 3); return true;
    // src/text/hide_hppp_windows.asm:12 BNE @UNKNOWN2
    case 0xC10A33: cpu.execute_instruction<0xD0>(0x000045, 2); return true;
    // src/text/hide_hppp_windows.asm:13 LDY #0
    case 0xC10A35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/hide_hppp_windows.asm:13 LDY #0
    // Overlapping static entry reached from 0xC10A35.
    case 0xC10A37: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/hide_hppp_windows.asm:14 STY @LOCAL00
    case 0xC10A38: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:15 BRA @UNKNOWN1
    case 0xC10A3A: cpu.execute_instruction<0x80>(0x000031, 2); return true;
    // src/text/hide_hppp_windows.asm:17 TYA
    case 0xC10A3C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:18 JSL UNDRAW_HP_PP_WINDOW
    case 0xC10A3D: cpu.execute_instruction<0x22>(0xC207E1, 4); return true;
    // src/text/hide_hppp_windows.asm:19 LDY @LOCAL00
    case 0xC10A41: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:27 LDA GAME_STATE + game_state::party_members,Y
    case 0xC10A43: cpu.execute_instruction<0xB9>(0x00986F, 3); return true;
    // src/text/hide_hppp_windows.asm:29 AND #$00FF
    case 0xC10A46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hide_hppp_windows.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC10A46.
    case 0xC10A48: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hide_hppp_windows.asm:30 DEC
    case 0xC10A49: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC10A4A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/hide_hppp_windows.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC10A4A.
    case 0xC10A4C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hide_hppp_windows.asm:32 JSL MULT168
    case 0xC10A4D: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/hide_hppp_windows.asm:33 CLC
    case 0xC10A51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC10A52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/text/hide_hppp_windows.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC10A52.
    case 0xC10A54: cpu.execute_instruction<0x99>(0x00BDAA, 3); return true;
    // src/text/hide_hppp_windows.asm:35 TAX
    case 0xC10A55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:36 LDA __BSS_START__ + char_struct::current_hp_target,X
    case 0xC10A56: cpu.execute_instruction<0xBD>(0x000047, 3); return true;
    // src/text/hide_hppp_windows.asm:36 LDA __BSS_START__ + char_struct::current_hp_target,X
    // Overlapping static entry reached from 0xC10A54.
    case 0xC10A57: cpu.execute_instruction<0x47>(0x000000, 2); return true;
    // src/text/hide_hppp_windows.asm:37 STA __BSS_START__ + char_struct::current_hp,X
    case 0xC10A59: cpu.execute_instruction<0x9D>(0x000045, 3); return true;
    // src/text/hide_hppp_windows.asm:38 LDA __BSS_START__ + char_struct::current_pp_target,X
    case 0xC10A5C: cpu.execute_instruction<0xBD>(0x00004D, 3); return true;
    // src/text/hide_hppp_windows.asm:39 STA __BSS_START__ + char_struct::current_pp,X
    case 0xC10A5F: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/text/hide_hppp_windows.asm:40 STZ __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC10A62: cpu.execute_instruction<0x9E>(0x000049, 3); return true;
    // src/text/hide_hppp_windows.asm:41 STZ __BSS_START__ + char_struct::current_hp_fraction,X
    case 0xC10A65: cpu.execute_instruction<0x9E>(0x000043, 3); return true;
    // src/text/hide_hppp_windows.asm:42 LDY @LOCAL00
    case 0xC10A68: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:43 INY
    case 0xC10A6A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:44 STY @LOCAL00
    case 0xC10A6B: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC10A6D: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/hide_hppp_windows.asm:47 AND #$00FF
    case 0xC10A70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hide_hppp_windows.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC10A70.
    case 0xC10A72: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hide_hppp_windows.asm:48 STA @VIRTUAL02
    case 0xC10A73: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hide_hppp_windows.asm:49 TYA
    case 0xC10A75: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:50 CMP @VIRTUAL02
    case 0xC10A76: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/hide_hppp_windows.asm:51 BNE @UNKNOWN0
    case 0xC10A78: cpu.execute_instruction<0xD0>(0x0000C2, 2); return true;
    // src/text/hide_hppp_windows.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC10A7A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hide_hppp_windows.asm:54 LDA #1
    case 0xC10A7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    case 0xC10A7E: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10A7C.
    case 0xC10A7F: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/text/hide_hppp_windows.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC10A81: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hide_hppp_windows.asm:57 END_C_FUNCTION
    case 0xC10A83: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hide_hppp_windows.asm:57 END_C_FUNCTION
    case 0xC10A84: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hide_hppp_windows_redirect.asm (source_named).
bool execute_text_hide_hppp_windows_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hide_hppp_windows_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DD41: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/hide_hppp_windows_redirect.asm:5 JSR HIDE_HPPP_WINDOWS
    case 0xC1DD43: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/hide_hppp_windows_redirect.asm:6 END_C_FUNCTION
    case 0xC1DD46: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/draw.asm (source_named).
bool execute_text_hp_pp_window_draw_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/draw.asm:4 BEGIN_C_FUNCTION
    case 0xC203C3: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C5: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C6: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC203C8.
    case 0xC203CA: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203CB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203CC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    case 0xC203CD: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    // Overlapping static entry reached from 0xC203CA.
    case 0xC203CE: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/text/hp_pp_window/draw.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC203CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/text/hp_pp_window/draw.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC203CE.
    case 0xC203D0: cpu.execute_instruction<0x6F>(0x26B198, 4); return true;
    // src/text/hp_pp_window/draw.asm:33 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC203CF.
    case 0xC203D1: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:34 LDA (@CHAR_ID),Y
    case 0xC203D2: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    case 0xC203D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC203D4.
    case 0xC203D6: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hp_pp_window/draw.asm:37 DEC
    case 0xC203D7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC203D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005F, 2); else cpu.execute_instruction<0xA0>(0x00005F, 3); return true;
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC203D8.
    case 0xC203DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:39 JSL MULT168
    case 0xC203DB: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/hp_pp_window/draw.asm:40 CLC
    case 0xC203DF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC203E0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x0099CE, 3); return true;
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC203E0.
    case 0xC203E2: cpu.execute_instruction<0x99>(0x002485, 3); return true;
    // src/text/hp_pp_window/draw.asm:42 STA @CHAR_ENTRY
    case 0xC203E3: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:43 CLC
    case 0xC203E5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    case 0xC203E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC203E6.
    case 0xC203E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:45 STA @VIRTUAL02
    case 0xC203E9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    case 0xC203EB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    // Overlapping static entry reached from 0xC203EB.
    case 0xC203ED: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/draw.asm:47 LDA @VIRTUAL02
    case 0xC203EE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:48 JSL UNKNOWN_C223D9
    case 0xC203F0: cpu.execute_instruction<0x22>(0xC223D9, 4); return true;
    // src/text/hp_pp_window/draw.asm:49 TAY
    case 0xC203F4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:50 STY @LOCAL08
    case 0xC203F5: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    case 0xC203F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    // Overlapping static entry reached from 0xC203F7.
    case 0xC203F9: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/draw.asm:52 LDA @VIRTUAL02
    case 0xC203FA: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:53 JSL UNKNOWN_C223D9
    case 0xC203FC: cpu.execute_instruction<0x22>(0xC223D9, 4); return true;
    // src/text/hp_pp_window/draw.asm:54 STA @VIRTUAL04
    case 0xC20400: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:55 LDY @LOCAL08
    case 0xC20402: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:56 TYA
    case 0xC20404: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    case 0xC20405: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    // Overlapping static entry reached from 0xC20405.
    case 0xC20407: cpu.execute_instruction<0xFF>(0x046518, 4); return true;
    // src/text/hp_pp_window/draw.asm:58 CLC
    case 0xC20408: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:59 ADC @VIRTUAL04
    case 0xC20409: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:64 STA @LOCAL07
    case 0xC2040B: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    case 0xC2040D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004F, 2); else cpu.execute_instruction<0xA0>(0x00004F, 3); return true;
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    // Overlapping static entry reached from 0xC2040D.
    case 0xC2040F: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:67 LDA (@CHAR_ENTRY),Y
    case 0xC20410: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:68 STA @VIRTUAL04
    case 0xC20412: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:69 STA @LOCAL06
    case 0xC20414: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:70 LDA @VIRTUAL04
    case 0xC20416: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    case 0xC20418: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000C00, 3); return true;
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    // Overlapping static entry reached from 0xC20418.
    case 0xC2041A: cpu.execute_instruction<0x0C>(0x0010D0, 3); return true;
    // src/text/hp_pp_window/draw.asm:72 BNE @UNKNOWN0
    case 0xC2041B: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    case 0xC2041D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000C00, 3); return true;
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    // Overlapping static entry reached from 0xC2041D.
    case 0xC2041F: cpu.execute_instruction<0x0C>(0x000285, 3); return true;
    // src/text/hp_pp_window/draw.asm:74 STA @VIRTUAL02
    case 0xC20420: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:75 STA @LOCAL05
    case 0xC20422: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:76 STA @LOCAL08
    case 0xC20424: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    case 0xC20426: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    // Overlapping static entry reached from 0xC20426.
    case 0xC20428: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:78 STA @LOCAL04
    case 0xC20429: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:79 BRA @UNKNOWN1
    case 0xC2042B: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:81 LDA @VIRTUAL02
    case 0xC2042D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:82 JSL UNKNOWN_C22474
    case 0xC2042F: cpu.execute_instruction<0x22>(0xC22474, 4); return true;
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    case 0xC20433: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    // Overlapping static entry reached from 0xC20433.
    case 0xC20435: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    case 0xC20436: cpu.execute_instruction<0x22>(0xC09032, 4); return true;
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC20435.
    case 0xC20437: cpu.execute_instruction<0x32>(0x000090, 2); return true;
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC20437.
    case 0xC20439: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000285, 3); return true;
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    case 0xC2043A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20439.
    case 0xC2043B: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:86 STA @LOCAL05
    case 0xC2043C: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    case 0xC2043E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001000, 3); return true;
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    // Overlapping static entry reached from 0xC2043E.
    case 0xC20440: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    case 0xC20441: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    // Overlapping static entry reached from 0xC20440.
    case 0xC20442: cpu.execute_instruction<0x22>(0xAD1A64, 4); return true;
    // src/text/hp_pp_window/draw.asm:89 STZ @LOCAL04
    case 0xC20443: cpu.execute_instruction<0x64>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC20445: cpu.execute_instruction<0xAD>(0x0089CA, 3); return true;
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC20442.
    case 0xC20446: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    // Overlapping static entry reached from 0xC20446.
    case 0xC20447: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C5, 2); else cpu.execute_instruction<0x89>(0x0026C5, 3); return true;
    // src/text/hp_pp_window/draw.asm:92 CMP @CHAR_ID
    case 0xC20448: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:92 CMP @CHAR_ID
    // Overlapping static entry reached from 0xC20447.
    case 0xC20449: cpu.execute_instruction<0x26>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/draw.asm:93 BNE @UNKNOWN2
    case 0xC2044A: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/hp_pp_window/draw.asm:93 BNE @UNKNOWN2
    // Overlapping static entry reached from 0xC20449.
    case 0xC2044B: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC2044C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC2044B.
    case 0xC2044D: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC2044C.
    case 0xC2044E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:95 STA @LOCAL03
    case 0xC2044F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:96 BRA @UNKNOWN3
    case 0xC20451: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC20453: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20453.
    case 0xC20455: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:99 STA @LOCAL03
    case 0xC20456: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:101 LDA @CHAR_ID
    case 0xC20458: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2045F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20460: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:103 PHA
    case 0xC20462: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20463: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    case 0xC20466: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC20466.
    case 0xC20468: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20469: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2046F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:107 PHA
    case 0xC20471: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:108 ASL
    case 0xC20472: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:109 PLA
    case 0xC20473: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:110 ROR
    case 0xC20474: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:111 STA @VIRTUAL02
    case 0xC20475: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    case 0xC20477: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    // Overlapping static entry reached from 0xC20477.
    case 0xC20479: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/hp_pp_window/draw.asm:113 SEC
    case 0xC2047A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:114 SBC @VIRTUAL02
    case 0xC2047B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:115 PLY
    case 0xC2047D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:116 STY @VIRTUAL02
    case 0xC2047E: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:117 CLC
    case 0xC20480: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:118 ADC @VIRTUAL02
    case 0xC20481: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:119 ASL
    case 0xC20483: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:120 STA @VIRTUAL02
    case 0xC20484: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:121 LDA @LOCAL03
    case 0xC20486: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20488: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20489: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2048D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:123 CLC
    case 0xC2048E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:124 ADC @VIRTUAL02
    case 0xC2048F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:125 CLC
    case 0xC20491: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    case 0xC20492: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20492.
    case 0xC20494: cpu.execute_instruction<0x7D>(0x00A5AA, 3); return true;
    // src/text/hp_pp_window/draw.asm:127 TAX
    case 0xC20495: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:128 LDA @LOCAL06
    case 0xC20496: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:128 LDA @LOCAL06
    // Overlapping static entry reached from 0xC20494.
    case 0xC20497: cpu.execute_instruction<0x1E>(0x000485, 3); return true;
    // src/text/hp_pp_window/draw.asm:129 STA @VIRTUAL04
    case 0xC20498: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:130 CLC
    case 0xC2049A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    case 0xC2049B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x002004, 3); return true;
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    // Overlapping static entry reached from 0xC2049B.
    case 0xC2049D: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    case 0xC2049E: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2049D.
    case 0xC204A0: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:133 INX
    case 0xC204A1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:134 INX
    case 0xC204A2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:139 LDY #HPPP_WINDOW_WIDTH - 2
    case 0xC204A3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/text/hp_pp_window/draw.asm:139 LDY #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC204A3.
    case 0xC204A5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:141 BRA @UNKNOWN5
    case 0xC204A6: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/hp_pp_window/draw.asm:143 LDA @VIRTUAL04
    case 0xC204A8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:144 CLC
    case 0xC204AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    case 0xC204AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x002005, 3); return true;
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    // Overlapping static entry reached from 0xC204AB.
    case 0xC204AD: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    case 0xC204AE: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC204AD.
    case 0xC204B0: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:147 INX
    case 0xC204B1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:148 INX
    case 0xC204B2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:154 DEY
    case 0xC204B3: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:264 BNE @UNKNOWN4
    case 0xC204B4: cpu.execute_instruction<0xD0>(0x0000F2, 2); return true;
    // src/text/hp_pp_window/draw.asm:265 LDA @VIRTUAL04
    case 0xC204B6: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:266 CLC
    case 0xC204B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:267 ADC #$6004
    case 0xC204B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x006004, 3); return true;
    // src/text/hp_pp_window/draw.asm:267 ADC #$6004
    // Overlapping static entry reached from 0xC204B9.
    case 0xC204BB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:268 STA __BSS_START__,X
    case 0xC204BC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:269 TXA
    case 0xC204BF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:270 INC
    case 0xC204C0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:271 INC
    case 0xC204C1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:272 CLC
    case 0xC204C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:273 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC204C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:273 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC204C3.
    case 0xC204C5: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:274 TAX
    case 0xC204C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:275 LDA @VIRTUAL04
    case 0xC204C7: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:276 CLC
    case 0xC204C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:277 ADC #$2006
    case 0xC204CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:277 ADC #$2006
    // Overlapping static entry reached from 0xC204CA.
    case 0xC204CC: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:278 STA __BSS_START__,X
    case 0xC204CD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:278 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC204CC.
    case 0xC204CF: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/hp_pp_window/draw.asm:279 TXA
    case 0xC204D0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:280 INC
    case 0xC204D1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:281 INC
    case 0xC204D2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:282 STA @TILEARRPTR
    case 0xC204D3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:283 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC204D5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/text/hp_pp_window/draw.asm:283 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC204D5.
    case 0xC204D7: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:284 LDA (@CHAR_ID),Y
    case 0xC204D8: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:285 AND #$00FF
    case 0xC204DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:285 AND #$00FF
    // Overlapping static entry reached from 0xC204DA.
    case 0xC204DC: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hp_pp_window/draw.asm:286 DEC
    case 0xC204DD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:287 ASL
    case 0xC204DE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:288 ASL
    case 0xC204DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:289 CLC
    case 0xC204E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:290 ADC #$22A0
    case 0xC204E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x0022A0, 3); return true;
    // src/text/hp_pp_window/draw.asm:290 ADC #$22A0
    // Overlapping static entry reached from 0xC204E1.
    case 0xC204E3: cpu.execute_instruction<0x22>(0x1484A8, 4); return true;
    // src/text/hp_pp_window/draw.asm:291 TAY
    case 0xC204E4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:292 STY @LOCAL02
    case 0xC204E5: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:293 LDA @CHAR_ENTRY
    case 0xC204E7: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/hp_pp_window/draw.asm:294 PROMOTENEARPTRA @VIRTUAL06
    case 0xC204F1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/hp_pp_window/draw.asm:295 REP #PROC_FLAGS::ACCUM8
    case 0xC204F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/hp_pp_window/draw.asm:296 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC204FB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:297 JSL STRLEN
    case 0xC204FD: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20501: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20503: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20504: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:298 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC20506: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:299 CLC
    case 0xC20507: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:300 ADC #9
    case 0xC20508: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/text/hp_pp_window/draw.asm:300 ADC #9
    // Overlapping static entry reached from 0xC20508.
    case 0xC2050A: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/text/hp_pp_window/draw.asm:301 LSR
    case 0xC2050B: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:302 LSR
    case 0xC2050C: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:303 LSR
    case 0xC2050D: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:304 STA @LOCAL01
    case 0xC2050E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:305 LDX #0
    case 0xC20510: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:305 LDX #0
    // Overlapping static entry reached from 0xC20510.
    case 0xC20512: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:306 BRA @UNKNOWN9
    case 0xC20513: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/text/hp_pp_window/draw.asm:308 LDA @LOCAL01
    case 0xC20515: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:309 BEQ @UNKNOWN7
    case 0xC20517: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:310 LDA @LOCAL05
    case 0xC20519: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:311 STA @VIRTUAL02
    case 0xC2051B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:312 LDY @LOCAL02
    case 0xC2051D: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:313 TYA
    case 0xC2051F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:314 CLC
    case 0xC20520: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:315 ADC @VIRTUAL02
    case 0xC20521: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:316 STA (@TILEARRPTR)
    case 0xC20523: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:317 INC @TILEARRPTR
    case 0xC20525: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:318 INC @TILEARRPTR
    case 0xC20527: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:319 INY
    case 0xC20529: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:320 STY @LOCAL02
    case 0xC2052A: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:321 LDA @LOCAL01
    case 0xC2052C: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:322 DEC
    case 0xC2052E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:323 STA @LOCAL01
    case 0xC2052F: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:324 BRA @UNKNOWN8
    case 0xC20531: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/hp_pp_window/draw.asm:326 LDA @LOCAL05
    case 0xC20533: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:327 STA @VIRTUAL02
    case 0xC20535: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:328 CLC
    case 0xC20537: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:329 ADC #$2007
    case 0xC20538: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x002007, 3); return true;
    // src/text/hp_pp_window/draw.asm:329 ADC #$2007
    // Overlapping static entry reached from 0xC20538.
    case 0xC2053A: cpu.execute_instruction<0x20>(0x001692, 3); return true;
    // src/text/hp_pp_window/draw.asm:330 STA (@TILEARRPTR)
    case 0xC2053B: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:331 INC @TILEARRPTR
    case 0xC2053D: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:332 INC @TILEARRPTR
    case 0xC2053F: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:334 INX
    case 0xC20541: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:336 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC20542: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/text/hp_pp_window/draw.asm:336 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC20542.
    case 0xC20544: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/draw.asm:337 BNE @UNKNOWN6
    case 0xC20545: cpu.execute_instruction<0xD0>(0x0000CE, 2); return true;
    // src/text/hp_pp_window/draw.asm:338 LDA @LOCAL05
    case 0xC20547: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:339 STA @VIRTUAL02
    case 0xC20549: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:340 CLC
    case 0xC2054B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:341 ADC @LOCAL07
    case 0xC2054C: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:342 CLC
    case 0xC2054E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:343 ADC #$2000
    case 0xC2054F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/text/hp_pp_window/draw.asm:343 ADC #$2000
    // Overlapping static entry reached from 0xC2054F.
    case 0xC20551: cpu.execute_instruction<0x20>(0x001692, 3); return true;
    // src/text/hp_pp_window/draw.asm:344 STA (@TILEARRPTR)
    case 0xC20552: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:345 LDX @TILEARRPTR
    case 0xC20554: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:346 INX
    case 0xC20556: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:347 INX
    case 0xC20557: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:348 LDA @LOCAL06
    case 0xC20558: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:349 STA @VIRTUAL04
    case 0xC2055A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:350 CLC
    case 0xC2055C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:351 ADC #$6006
    case 0xC2055D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:351 ADC #$6006
    // Overlapping static entry reached from 0xC2055D.
    case 0xC2055F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:352 STA __BSS_START__,X
    case 0xC20560: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:353 TXA
    case 0xC20563: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:354 INC
    case 0xC20564: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:355 INC
    case 0xC20565: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:356 CLC
    case 0xC20566: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:357 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20567: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:357 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20567.
    case 0xC20569: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:358 TAX
    case 0xC2056A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:359 LDA @VIRTUAL04
    case 0xC2056B: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:360 CLC
    case 0xC2056D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:361 ADC #$2006
    case 0xC2056E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:361 ADC #$2006
    // Overlapping static entry reached from 0xC2056E.
    case 0xC20570: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:362 STA __BSS_START__,X
    case 0xC20571: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:362 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20570.
    case 0xC20573: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/hp_pp_window/draw.asm:363 TXA
    case 0xC20574: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:364 INC
    case 0xC20575: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:365 INC
    case 0xC20576: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:366 STA @TILEARRPTR
    case 0xC20577: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:367 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    case 0xC20579: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006F, 2); else cpu.execute_instruction<0xA0>(0x00986F, 3); return true;
    // src/text/hp_pp_window/draw.asm:367 LDY #.LOWORD(GAME_STATE) + game_state::party_members
    // Overlapping static entry reached from 0xC20579.
    case 0xC2057B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:368 LDA (@CHAR_ID),Y
    case 0xC2057C: cpu.execute_instruction<0xB1>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:369 AND #$00FF
    case 0xC2057E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:369 AND #$00FF
    // Overlapping static entry reached from 0xC2057E.
    case 0xC20580: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hp_pp_window/draw.asm:370 DEC
    case 0xC20581: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:371 ASL
    case 0xC20582: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:372 ASL
    case 0xC20583: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:373 CLC
    case 0xC20584: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:374 ADC #$22B0
    case 0xC20585: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x0022B0, 3); return true;
    // src/text/hp_pp_window/draw.asm:374 ADC #$22B0
    // Overlapping static entry reached from 0xC20585.
    case 0xC20587: cpu.execute_instruction<0x22>(0x1484A8, 4); return true;
    // src/text/hp_pp_window/draw.asm:375 TAY
    case 0xC20588: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:376 STY @LOCAL02
    case 0xC20589: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:377 LDA @CHAR_ENTRY
    case 0xC2058B: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2058D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2058F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20590: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20592: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20593: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/hp_pp_window/draw.asm:378 PROMOTENEARPTRA @VIRTUAL06
    case 0xC20595: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/hp_pp_window/draw.asm:379 REP #PROC_FLAGS::ACCUM8
    case 0xC20597: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC20599: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2059B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2059D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/hp_pp_window/draw.asm:380 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2059F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:381 JSL STRLEN
    case 0xC205A1: cpu.execute_instruction<0x22>(0xC08F22, 4); return true;
    // include/macros.asm:534 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205A5: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:535 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:536 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205A8: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:537 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:382 OPTIMIZED_MULT @VIRTUAL04, 6
    case 0xC205AA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:383 CLC
    case 0xC205AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:384 ADC #9
    case 0xC205AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000009, 2); else cpu.execute_instruction<0x69>(0x000009, 3); return true;
    // src/text/hp_pp_window/draw.asm:384 ADC #9
    // Overlapping static entry reached from 0xC205AC.
    case 0xC205AE: cpu.execute_instruction<0x00>(0x00004A, 2); return true;
    // src/text/hp_pp_window/draw.asm:385 LSR
    case 0xC205AF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:386 LSR
    case 0xC205B0: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:387 LSR
    case 0xC205B1: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:388 STA @LOCAL01
    case 0xC205B2: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    case 0xC205B4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    // Overlapping static entry reached from 0xC205B4.
    case 0xC205B6: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:391 BRA @UNKNOWN13
    case 0xC205B7: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/text/hp_pp_window/draw.asm:408 LDA @LOCAL01
    case 0xC205B9: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:409 BEQ @UNKNOWN11
    case 0xC205BB: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:410 LDY @LOCAL02
    case 0xC205BD: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:411 TYA
    case 0xC205BF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:412 CLC
    case 0xC205C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:413 ADC @VIRTUAL02
    case 0xC205C1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:414 STA (@TILEARRPTR)
    case 0xC205C3: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:415 INC @TILEARRPTR
    case 0xC205C5: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:416 INC @TILEARRPTR
    case 0xC205C7: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:417 INY
    case 0xC205C9: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:418 STY @LOCAL02
    case 0xC205CA: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:419 LDA @LOCAL01
    case 0xC205CC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:420 DEC
    case 0xC205CE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:421 STA @LOCAL01
    case 0xC205CF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:423 BRA @UNKNOWN12
    case 0xC205D1: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/hp_pp_window/draw.asm:425 LDA @VIRTUAL02
    case 0xC205D3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:426 CLC
    case 0xC205D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    case 0xC205D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x002017, 3); return true;
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    // Overlapping static entry reached from 0xC205D6.
    case 0xC205D8: cpu.execute_instruction<0x20>(0x001692, 3); return true;
    // src/text/hp_pp_window/draw.asm:428 STA (@TILEARRPTR)
    case 0xC205D9: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:429 INC @TILEARRPTR
    case 0xC205DB: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:430 INC @TILEARRPTR
    case 0xC205DD: cpu.execute_instruction<0xE6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:432 INX
    case 0xC205DF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC205E0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC205E0.
    case 0xC205E2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/draw.asm:435 BNE @UNKNOWN10
    case 0xC205E3: cpu.execute_instruction<0xD0>(0x0000D4, 2); return true;
    // src/text/hp_pp_window/draw.asm:442 LDA @VIRTUAL02
    case 0xC205E5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:443 CLC
    case 0xC205E7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:444 ADC @LOCAL07
    case 0xC205E8: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:446 CLC
    case 0xC205EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    case 0xC205EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x002010, 3); return true;
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    // Overlapping static entry reached from 0xC205EB.
    case 0xC205ED: cpu.execute_instruction<0x20>(0x001692, 3); return true;
    // src/text/hp_pp_window/draw.asm:448 STA (@TILEARRPTR)
    case 0xC205EE: cpu.execute_instruction<0x92>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:449 LDX @TILEARRPTR
    case 0xC205F0: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:450 INX
    case 0xC205F2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:451 INX
    case 0xC205F3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:455 LDA @LOCAL06
    case 0xC205F4: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:456 STA @VIRTUAL04
    case 0xC205F6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:458 CLC
    case 0xC205F8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    case 0xC205F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    // Overlapping static entry reached from 0xC205F9.
    case 0xC205FB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:460 STA __BSS_START__,X
    case 0xC205FC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:461 TXA
    case 0xC205FF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:462 INC
    case 0xC20600: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:463 INC
    case 0xC20601: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:464 CLC
    case 0xC20602: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20603: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20603.
    case 0xC20605: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:466 STA @VIRTUAL02
    case 0xC20606: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    case 0xC20608: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000043, 2); else cpu.execute_instruction<0xA0>(0x000043, 3); return true;
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC20608.
    case 0xC2060A: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:468 LDA (@CHAR_ENTRY),Y
    case 0xC2060B: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:469 TAY
    case 0xC2060D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:473 STY @LOCAL02
    case 0xC2060E: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    case 0xC20610: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000045, 2); else cpu.execute_instruction<0xA0>(0x000045, 3); return true;
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC20610.
    case 0xC20612: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:476 LDA (@CHAR_ENTRY),Y
    case 0xC20613: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:477 TAX
    case 0xC20615: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:478 LDA @CHAR_ID
    case 0xC20616: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:482 LDY @LOCAL02
    case 0xC20618: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:484 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC2061A: cpu.execute_instruction<0x20>(0x000F08, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC2061D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F8, 2); else cpu.execute_instruction<0xA9>(0x00E3F8, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2061D.
    case 0xC2061F: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC20620: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC2061F.
    case 0xC20621: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC20622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC20621.
    case 0xC20623: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC20622.
    case 0xC20624: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC20625: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/hp_pp_window/draw.asm:486 LDA @CHAR_ID
    case 0xC20627: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20629: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2062F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20630: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:488 CLC
    case 0xC20631: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC20632: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000069, 2); else cpu.execute_instruction<0x69>(0x008969, 3); return true;
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC20632.
    case 0xC20634: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00A2A8, 3); return true;
    // src/text/hp_pp_window/draw.asm:490 TAY
    case 0xC20635: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    case 0xC20636: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC20634.
    case 0xC20637: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC20636.
    case 0xC20638: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/hp_pp_window/draw.asm:492 STX @LOCAL01
    case 0xC20639: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:493 BRA @UNKNOWN19
    case 0xC2063B: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/text/hp_pp_window/draw.asm:495 LDA @LOCAL06
    case 0xC2063D: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:496 STA @VIRTUAL04
    case 0xC2063F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:497 CLC
    case 0xC20641: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    case 0xC20642: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    // Overlapping static entry reached from 0xC20642.
    case 0xC20644: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:499 LDX @VIRTUAL02
    case 0xC20645: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:500 STA __BSS_START__,X
    case 0xC20647: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:501 INC @VIRTUAL02
    case 0xC2064A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:502 INC @VIRTUAL02
    case 0xC2064C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    case 0xC2064E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    // Overlapping static entry reached from 0xC2064E.
    case 0xC20650: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:504 STA @LOCAL07
    case 0xC20651: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:505 BRA @UNKNOWN16
    case 0xC20653: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:507 LDA [@VIRTUAL06]
    case 0xC20655: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    case 0xC20657: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    // Overlapping static entry reached from 0xC20657.
    case 0xC20659: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:509 CLC
    case 0xC2065A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:510 ADC @LOCAL08
    case 0xC2065B: cpu.execute_instruction<0x65>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:511 CLC
    case 0xC2065D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    case 0xC2065E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    // Overlapping static entry reached from 0xC2065E.
    case 0xC20660: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:513 LDX @VIRTUAL02
    case 0xC20661: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:514 STA __BSS_START__,X
    case 0xC20663: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:515 INC @VIRTUAL06
    case 0xC20666: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:516 INC @VIRTUAL02
    case 0xC20668: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:517 INC @VIRTUAL02
    case 0xC2066A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:518 LDA @LOCAL07
    case 0xC2066C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:519 DEC
    case 0xC2066E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:520 STA @LOCAL07
    case 0xC2066F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:522 BNE @UNKNOWN15
    case 0xC20671: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC20673: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC20673.
    case 0xC20675: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:524 STA @LOCAL07
    case 0xC20676: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:525 BRA @UNKNOWN18
    case 0xC20678: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:527 LDA __BSS_START__,Y
    case 0xC2067A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:528 CLC
    case 0xC2067D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:529 ADC @LOCAL04
    case 0xC2067E: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:530 LDX @VIRTUAL02
    case 0xC20680: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:531 STA __BSS_START__,X
    case 0xC20682: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:532 INY
    case 0xC20685: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:533 INY
    case 0xC20686: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:534 INC @VIRTUAL02
    case 0xC20687: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:535 INC @VIRTUAL02
    case 0xC20689: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:536 LDA @LOCAL07
    case 0xC2068B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:537 DEC
    case 0xC2068D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:538 STA @LOCAL07
    case 0xC2068E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:540 BNE @UNKNOWN17
    case 0xC20690: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:541 LDA @VIRTUAL04
    case 0xC20692: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:542 CLC
    case 0xC20694: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    case 0xC20695: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    // Overlapping static entry reached from 0xC20695.
    case 0xC20697: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:544 LDX @VIRTUAL02
    case 0xC20698: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:545 STA __BSS_START__,X
    case 0xC2069A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:546 LDA @VIRTUAL02
    case 0xC2069D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:547 INC
    case 0xC2069F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:548 INC
    case 0xC206A0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:549 CLC
    case 0xC206A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC206A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC206A2.
    case 0xC206A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:551 STA @VIRTUAL02
    case 0xC206A5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:552 LDX @LOCAL01
    case 0xC206A7: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:553 DEX
    case 0xC206A9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:554 STX @LOCAL01
    case 0xC206AA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:556 BNE @UNKNOWN14
    case 0xC206AC: cpu.execute_instruction<0xD0>(0x00008F, 2); return true;
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    case 0xC206AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000049, 2); else cpu.execute_instruction<0xA0>(0x000049, 3); return true;
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC206AE.
    case 0xC206B0: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:558 LDA (@CHAR_ENTRY),Y
    case 0xC206B1: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:559 STA @LOCAL00
    case 0xC206B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    case 0xC206B5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004B, 2); else cpu.execute_instruction<0xA0>(0x00004B, 3); return true;
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC206B5.
    case 0xC206B7: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:561 LDA (@CHAR_ENTRY),Y
    case 0xC206B8: cpu.execute_instruction<0xB1>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:562 TAY
    case 0xC206BA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:563 LDA @CHAR_ENTRY
    case 0xC206BB: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/hp_pp_window/draw.asm:564 CLC
    case 0xC206BD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    case 0xC206BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000E, 2); else cpu.execute_instruction<0x69>(0x00000E, 3); return true;
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC206BE.
    case 0xC206C0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:566 TAX
    case 0xC206C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:567 LDA @CHAR_ID
    case 0xC206C2: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/hp_pp_window/draw.asm:568 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC206C4: cpu.execute_instruction<0x20>(0x000F26, 3); return true;
    // src/text/hp_pp_window/draw.asm:569 LDA @CHAR_ID
    case 0xC206C7: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206C9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CC: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC206D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:571 CLC
    case 0xC206D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    case 0xC206D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000075, 2); else cpu.execute_instruction<0x69>(0x008975, 3); return true;
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    // Overlapping static entry reached from 0xC206D2.
    case 0xC206D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x00A2A8, 3); return true;
    // src/text/hp_pp_window/draw.asm:573 TAY
    case 0xC206D5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    case 0xC206D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC206D4.
    case 0xC206D7: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC206D6.
    case 0xC206D8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/hp_pp_window/draw.asm:575 STX @LOCAL01
    case 0xC206D9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:576 BRA @UNKNOWN25
    case 0xC206DB: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/text/hp_pp_window/draw.asm:578 LDA @LOCAL06
    case 0xC206DD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:579 STA @VIRTUAL04
    case 0xC206DF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:580 CLC
    case 0xC206E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    case 0xC206E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    // Overlapping static entry reached from 0xC206E2.
    case 0xC206E4: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:582 LDX @VIRTUAL02
    case 0xC206E5: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:583 STA __BSS_START__,X
    case 0xC206E7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:584 INC @VIRTUAL02
    case 0xC206EA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:585 INC @VIRTUAL02
    case 0xC206EC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    case 0xC206EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    // Overlapping static entry reached from 0xC206EE.
    case 0xC206F0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:587 STA @LOCAL07
    case 0xC206F1: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:588 BRA @UNKNOWN22
    case 0xC206F3: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:590 LDA [@VIRTUAL06]
    case 0xC206F5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    case 0xC206F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    // Overlapping static entry reached from 0xC206F7.
    case 0xC206F9: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:592 CLC
    case 0xC206FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:593 ADC @LOCAL08
    case 0xC206FB: cpu.execute_instruction<0x65>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:594 CLC
    case 0xC206FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    case 0xC206FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    // Overlapping static entry reached from 0xC206FE.
    case 0xC20700: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:596 LDX @VIRTUAL02
    case 0xC20701: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:597 STA __BSS_START__,X
    case 0xC20703: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:598 INC @VIRTUAL06
    case 0xC20706: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:599 INC @VIRTUAL02
    case 0xC20708: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:600 INC @VIRTUAL02
    case 0xC2070A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:601 LDA @LOCAL07
    case 0xC2070C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:602 DEC
    case 0xC2070E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:603 STA @LOCAL07
    case 0xC2070F: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:605 BNE @UNKNOWN21
    case 0xC20711: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC20713: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC20713.
    case 0xC20715: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:607 STA @LOCAL07
    case 0xC20716: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:608 BRA @UNKNOWN24
    case 0xC20718: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:610 LDA __BSS_START__,Y
    case 0xC2071A: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:611 CLC
    case 0xC2071D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:612 ADC @LOCAL04
    case 0xC2071E: cpu.execute_instruction<0x65>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:613 LDX @VIRTUAL02
    case 0xC20720: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:614 STA __BSS_START__,X
    case 0xC20722: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:615 INY
    case 0xC20725: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:616 INY
    case 0xC20726: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:617 INC @VIRTUAL02
    case 0xC20727: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:618 INC @VIRTUAL02
    case 0xC20729: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:619 LDA @LOCAL07
    case 0xC2072B: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:620 DEC
    case 0xC2072D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:621 STA @LOCAL07
    case 0xC2072E: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:623 BNE @UNKNOWN23
    case 0xC20730: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:624 LDA @VIRTUAL04
    case 0xC20732: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:625 CLC
    case 0xC20734: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    case 0xC20735: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    // Overlapping static entry reached from 0xC20735.
    case 0xC20737: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:627 LDX @VIRTUAL02
    case 0xC20738: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:628 STA __BSS_START__,X
    case 0xC2073A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:629 LDA @VIRTUAL02
    case 0xC2073D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:630 INC
    case 0xC2073F: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:631 INC
    case 0xC20740: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:632 CLC
    case 0xC20741: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20742: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20742.
    case 0xC20744: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:634 STA @VIRTUAL02
    case 0xC20745: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:635 LDX @LOCAL01
    case 0xC20747: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:636 DEX
    case 0xC20749: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:637 STX @LOCAL01
    case 0xC2074A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:639 BNE @UNKNOWN20
    case 0xC2074C: cpu.execute_instruction<0xD0>(0x00008F, 2); return true;
    // src/text/hp_pp_window/draw.asm:640 LDA @LOCAL06
    case 0xC2074E: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:641 STA @VIRTUAL04
    case 0xC20750: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:642 CLC
    case 0xC20752: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    case 0xC20753: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x00A004, 3); return true;
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    // Overlapping static entry reached from 0xC20753.
    case 0xC20755: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A6, 2); else cpu.execute_instruction<0xA0>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    case 0xC20756: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC20755.
    case 0xC20757: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/text/hp_pp_window/draw.asm:645 STA __BSS_START__,X
    case 0xC20758: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:646 LDX @VIRTUAL02
    case 0xC2075B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:647 INX
    case 0xC2075D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:648 INX
    case 0xC2075E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    case 0xC2075F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC2075F.
    case 0xC20761: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:650 BRA @UNKNOWN27
    case 0xC20762: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/hp_pp_window/draw.asm:652 LDA @VIRTUAL04
    case 0xC20764: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:653 CLC
    case 0xC20766: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    case 0xC20767: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x00A005, 3); return true;
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    // Overlapping static entry reached from 0xC20767.
    case 0xC20769: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009D, 2); else cpu.execute_instruction<0xA0>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    case 0xC2076A: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20769.
    case 0xC2076B: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20769.
    case 0xC2076C: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:656 INX
    case 0xC2076D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:657 INX
    case 0xC2076E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:658 DEY
    case 0xC2076F: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:660 BNE @UNKNOWN26
    case 0xC20770: cpu.execute_instruction<0xD0>(0x0000F2, 2); return true;
    // src/text/hp_pp_window/draw.asm:661 LDA @VIRTUAL04
    case 0xC20772: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:662 CLC
    case 0xC20774: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    case 0xC20775: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x00E004, 3); return true;
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    // Overlapping static entry reached from 0xC20775.
    case 0xC20777: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00009D, 2); else cpu.execute_instruction<0xE0>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    case 0xC20778: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20777.
    case 0xC20779: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20777.
    case 0xC2077A: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2077B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2077C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm (source_named).
bool execute_text_hp_pp_window_fill_character_hp_tile_buffer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20F08: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20F0A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20F0B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20F0C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20F0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC20F0D.
    case 0xC20F0F: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20F10: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20F11: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:10 STY @LOCAL00
    case 0xC20F12: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:10 STY @LOCAL00
    // Overlapping static entry reached from 0xC20F0F.
    case 0xC20F13: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:11 STA @VIRTUAL02
    case 0xC20F14: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:12 TXA
    case 0xC20F16: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:13 JSR SEPARATE_DECIMAL_DIGITS
    case 0xC20F17: cpu.execute_instruction<0x20>(0x000D3F, 3); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:14 LDY @LOCAL00
    case 0xC20F1A: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:15 LDX #0
    case 0xC20F1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:15 LDX #0
    // Overlapping static entry reached from 0xC20F1C.
    case 0xC20F1E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:16 LDA @VIRTUAL02
    case 0xC20F1F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:17 JSR FILL_HP_PP_TILE_BUFFER
    case 0xC20F21: cpu.execute_instruction<0x20>(0x000DC5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:18 END_C_FUNCTION
    case 0xC20F24: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:18 END_C_FUNCTION
    case 0xC20F25: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm (source_named).
bool execute_text_hp_pp_window_fill_character_pp_tile_buffer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20F26: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F28: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F29: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC20F2B.
    case 0xC20F2D: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20F2F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:11 STY @VIRTUAL04
    case 0xC20F30: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC20F2D.
    case 0xC20F31: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:12 STA @VIRTUAL02
    case 0xC20F32: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20F31.
    case 0xC20F33: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:13 LDY @PARAM03
    case 0xC20F34: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:14 STY @LOCAL00
    case 0xC20F36: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:15 LDA __BSS_START__ + STATUS_GROUP::CONCENTRATION,X
    case 0xC20F38: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:16 AND #$00FF
    case 0xC20F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC20F3B.
    case 0xC20F3D: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:17 BEQ @CAN_CONCENTRATE
    case 0xC20F3E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:18 LDA @VIRTUAL02
    case 0xC20F40: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:19 JSR FILL_HP_PP_TILE_BUFFER_X
    case 0xC20F42: cpu.execute_instruction<0x20>(0x000D89, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:20 BRA @RETURN
    case 0xC20F45: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:22 LDA @VIRTUAL04
    case 0xC20F47: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:23 JSR SEPARATE_DECIMAL_DIGITS
    case 0xC20F49: cpu.execute_instruction<0x20>(0x000D3F, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:24 LDY @LOCAL00
    case 0xC20F4C: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:25 LDX #1
    case 0xC20F4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:25 LDX #1
    // Overlapping static entry reached from 0xC20F4E.
    case 0xC20F50: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:26 LDA @VIRTUAL02
    case 0xC20F51: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:27 JSR FILL_HP_PP_TILE_BUFFER
    case 0xC20F53: cpu.execute_instruction<0x20>(0x000DC5, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:29 END_C_FUNCTION
    case 0xC20F56: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:29 END_C_FUNCTION
    case 0xC20F57: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_tile_buffer.asm (source_named).
bool execute_text_hp_pp_window_fill_tile_buffer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20DC5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DC7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DC8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DC9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DCA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC20DCA.
    case 0xC20DCC: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DCD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20DCE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    case 0xC20DCF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20DCC.
    case 0xC20DD0: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:15 TAX
    case 0xC20DD1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    case 0xC20DD2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x003000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    // Overlapping static entry reached from 0xC20DD2.
    case 0xC20DD4: cpu.execute_instruction<0x30>(0x0000B0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    case 0xC20DD5: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    // Overlapping static entry reached from 0xC20DD4.
    case 0xC20DD6: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    case 0xC20DD7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20DD6.
    case 0xC20DD8: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20DD7.
    case 0xC20DD9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:19 STA @LOCAL04
    case 0xC20DDA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:20 BRA @UNKNOWN1
    case 0xC20DDC: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:22 TYA
    case 0xC20DDE: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:23 SEC
    case 0xC20DDF: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    case 0xC20DE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x003000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    // Overlapping static entry reached from 0xC20DE0.
    case 0xC20DE2: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    case 0xC20DE3: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    // Overlapping static entry reached from 0xC20DE2.
    case 0xC20DE4: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DE5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003400, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DE4.
    case 0xC20DE6: cpu.execute_instruction<0x00>(0x000034, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DE5.
    case 0xC20DE7: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DE8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DE7.
    case 0xC20DE9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20DEA.
    case 0xC20DEC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20DED: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20DEF: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20DF1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20DF3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:29 JSL DIVISION32
    case 0xC20DF5: cpu.execute_instruction<0x22>(0xC090FF, 4); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:30 LDA @VIRTUAL06
    case 0xC20DF9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:31 TAY
    case 0xC20DFB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:32 LDA @VIRTUAL02
    case 0xC20DFC: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20DFE: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E00: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E01: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E03: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20E04: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:34 STA @VIRTUAL02
    case 0xC20E05: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:35 TXA
    case 0xC20E07: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E08: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20E0F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:37 CLC
    case 0xC20E10: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:38 ADC @VIRTUAL02
    case 0xC20E11: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:39 CLC
    case 0xC20E13: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    case 0xC20E14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00006D, 2); else cpu.execute_instruction<0x69>(0x00896D, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    // Overlapping static entry reached from 0xC20E14.
    case 0xC20E16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00ADAA, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:41 TAX
    case 0xC20E17: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    case 0xC20E18: cpu.execute_instruction<0xAD>(0x008968, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    // Overlapping static entry reached from 0xC20E16.
    case 0xC20E19: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    // Overlapping static entry reached from 0xC20E19.
    case 0xC20E1A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000029, 2); else cpu.execute_instruction<0x89>(0x00FF29, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    case 0xC20E1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC20E1A.
    case 0xC20E1C: cpu.execute_instruction<0xFF>(0x148500, 4); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC20E1B.
    case 0xC20E1D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:44 STA @LOCAL03
    case 0xC20E1E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:45 LDA HPPP_WINDOW_DIGIT_BUFFER + 1
    case 0xC20E20: cpu.execute_instruction<0xAD>(0x008967, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    case 0xC20E23: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC20E23.
    case 0xC20E25: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:47 STA @VIRTUAL04
    case 0xC20E26: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:48 LDA HPPP_WINDOW_DIGIT_BUFFER
    case 0xC20E28: cpu.execute_instruction<0xAD>(0x008966, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    case 0xC20E2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC20E2B.
    case 0xC20E2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:50 STA @LOCAL02
    case 0xC20E2E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:51 LDA @LOCAL03
    case 0xC20E30: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:52 LSR
    case 0xC20E32: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:53 LSR
    case 0xC20E33: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:54 ASL
    case 0xC20E34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:55 ASL
    case 0xC20E35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:56 ASL
    case 0xC20E36: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:57 ASL
    case 0xC20E37: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:58 STA @VIRTUAL02
    case 0xC20E38: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:59 LDA @LOCAL03
    case 0xC20E3A: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:60 ASL
    case 0xC20E3C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:61 ASL
    case 0xC20E3D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:62 CLC
    case 0xC20E3E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:63 ADC @VIRTUAL02
    case 0xC20E3F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:64 STY @VIRTUAL02
    case 0xC20E41: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:65 CLC
    case 0xC20E43: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:66 ADC @VIRTUAL02
    case 0xC20E44: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:67 CLC
    case 0xC20E46: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    case 0xC20E47: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002600, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    // Overlapping static entry reached from 0xC20E47.
    case 0xC20E49: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    case 0xC20E4A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20E49.
    case 0xC20E4B: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:70 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20E4C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:71 LDA @VIRTUAL02
    case 0xC20E4F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:72 CLC
    case 0xC20E51: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    case 0xC20E52: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    // Overlapping static entry reached from 0xC20E52.
    case 0xC20E54: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:74 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20E55: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:75 TXA
    case 0xC20E58: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:76 DEC
    case 0xC20E59: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:77 DEC
    case 0xC20E5A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:78 STA @VIRTUAL02
    case 0xC20E5B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:79 STA @LOCAL01
    case 0xC20E5D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:80 LDA @VIRTUAL04
    case 0xC20E5F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:81 BNE @UNKNOWN2
    case 0xC20E61: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:82 LDA @LOCAL02
    case 0xC20E63: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:83 BNE @UNKNOWN2
    case 0xC20E65: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    case 0xC20E67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000048, 2); else cpu.execute_instruction<0xA2>(0x000248, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    // Overlapping static entry reached from 0xC20E67.
    case 0xC20E69: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:85 BRA @UNKNOWN3
    case 0xC20E6A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    case 0xC20E6C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    // Overlapping static entry reached from 0xC20E6C.
    case 0xC20E6E: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:89 LDA @LOCAL03
    case 0xC20E6F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    case 0xC20E71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    // Overlapping static entry reached from 0xC20E71.
    case 0xC20E73: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:91 BNE @UNKNOWN4
    case 0xC20E74: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    case 0xC20E76: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    // Overlapping static entry reached from 0xC20E76.
    case 0xC20E78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:93 BNE @UNKNOWN5
    case 0xC20E79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    case 0xC20E7B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    // Overlapping static entry reached from 0xC20E7B.
    case 0xC20E7D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:97 LDA @VIRTUAL04
    case 0xC20E7E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:98 LSR
    case 0xC20E80: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:99 LSR
    case 0xC20E81: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:100 ASL
    case 0xC20E82: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:101 ASL
    case 0xC20E83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:102 ASL
    case 0xC20E84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:103 ASL
    case 0xC20E85: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:104 STA @VIRTUAL02
    case 0xC20E86: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:105 LDA @VIRTUAL04
    case 0xC20E88: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:106 ASL
    case 0xC20E8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:107 ASL
    case 0xC20E8B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:108 CLC
    case 0xC20E8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:109 ADC @VIRTUAL02
    case 0xC20E8D: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:110 STY @VIRTUAL02
    case 0xC20E8F: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:111 CLC
    case 0xC20E91: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:112 ADC @VIRTUAL02
    case 0xC20E92: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:113 STX @VIRTUAL02
    case 0xC20E94: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:114 CLC
    case 0xC20E96: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:115 ADC @VIRTUAL02
    case 0xC20E97: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:116 CLC
    case 0xC20E99: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    case 0xC20E9A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    // Overlapping static entry reached from 0xC20E9A.
    case 0xC20E9C: cpu.execute_instruction<0x24>(0x0000A6, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    case 0xC20E9D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    // Overlapping static entry reached from 0xC20E9C.
    case 0xC20E9E: cpu.execute_instruction<0x10>(0x000086, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    case 0xC20E9F: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20E9E.
    case 0xC20EA0: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:120 STA __BSS_START__,X
    case 0xC20EA1: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:121 CLC
    case 0xC20EA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    case 0xC20EA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    // Overlapping static entry reached from 0xC20EA5.
    case 0xC20EA7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:123 LDX @VIRTUAL02
    case 0xC20EA8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:124 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20EAA: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:125 LDA @VIRTUAL02
    case 0xC20EAD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:126 DEC
    case 0xC20EAF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:127 DEC
    case 0xC20EB0: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:128 STA @LOCAL00
    case 0xC20EB1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:129 LDA @LOCAL02
    case 0xC20EB3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:130 BNE @UNKNOWN6
    case 0xC20EB5: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    case 0xC20EB7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000048, 2); else cpu.execute_instruction<0xA2>(0x000248, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    // Overlapping static entry reached from 0xC20EB7.
    case 0xC20EB9: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:132 BRA @UNKNOWN7
    case 0xC20EBA: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    case 0xC20EBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    // Overlapping static entry reached from 0xC20EBC.
    case 0xC20EBE: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:136 LDA @VIRTUAL04
    case 0xC20EBF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    case 0xC20EC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    // Overlapping static entry reached from 0xC20EC1.
    case 0xC20EC3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:138 BNE @UNKNOWN8
    case 0xC20EC4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    case 0xC20EC6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    // Overlapping static entry reached from 0xC20EC6.
    case 0xC20EC8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:140 BNE @UNKNOWN9
    case 0xC20EC9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    case 0xC20ECB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    // Overlapping static entry reached from 0xC20ECB.
    case 0xC20ECD: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:144 STY @VIRTUAL04
    case 0xC20ECE: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:145 LDA @LOCAL02
    case 0xC20ED0: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:146 LSR
    case 0xC20ED2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:147 LSR
    case 0xC20ED3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:148 ASL
    case 0xC20ED4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:149 ASL
    case 0xC20ED5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:150 ASL
    case 0xC20ED6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:151 ASL
    case 0xC20ED7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:152 STA @VIRTUAL02
    case 0xC20ED8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:153 LDA @LOCAL02
    case 0xC20EDA: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:154 ASL
    case 0xC20EDC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:155 ASL
    case 0xC20EDD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:156 CLC
    case 0xC20EDE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:157 ADC @VIRTUAL02
    case 0xC20EDF: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:158 CLC
    case 0xC20EE1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:159 ADC @VIRTUAL04
    case 0xC20EE2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:160 STX @VIRTUAL02
    case 0xC20EE4: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:161 CLC
    case 0xC20EE6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:162 ADC @VIRTUAL02
    case 0xC20EE7: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:163 CLC
    case 0xC20EE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    case 0xC20EEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    // Overlapping static entry reached from 0xC20EEA.
    case 0xC20EEC: cpu.execute_instruction<0x24>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:165 TAX
    case 0xC20EED: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:166 STX @LOCAL02
    case 0xC20EEE: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:167 PHX
    case 0xC20EF0: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:168 LDA @LOCAL00
    case 0xC20EF1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:169 TAX
    case 0xC20EF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:170 PLA
    case 0xC20EF4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:171 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20EF5: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:172 LDA @LOCAL00
    case 0xC20EF8: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:173 PHA
    case 0xC20EFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:174 LDX @LOCAL02
    case 0xC20EFB: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:175 TXA
    case 0xC20EFD: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:176 CLC
    case 0xC20EFE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    case 0xC20EFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    // Overlapping static entry reached from 0xC20EFF.
    case 0xC20F01: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:178 PLX
    case 0xC20F02: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:179 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20F03: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20F06: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20F07: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_tile_buffer_x.asm (source_named).
bool execute_text_hp_pp_window_fill_tile_buffer_x_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:3 BEGIN_C_FUNCTION
    case 0xC20D89: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20D8E.
    case 0xC20D90: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D91: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20D92: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D93: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    // Overlapping static entry reached from 0xC20D90.
    case 0xC20D94: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D96: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D98: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D99: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20D9A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:9 CLC
    case 0xC20D9B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:10 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC20D9C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000075, 2); else cpu.execute_instruction<0x69>(0x008975, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:10 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC20D9C.
    case 0xC20D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00A9AA, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:11 TAX
    case 0xC20D9F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    case 0xC20DA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    // Overlapping static entry reached from 0xC20D9E.
    case 0xC20DA1: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    // Overlapping static entry reached from 0xC20DA0.
    case 0xC20DA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:13 STA @LOCAL00
    case 0xC20DA3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:14 BRA @UNKNOWN1
    case 0xC20DA5: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:16 CLC
    case 0xC20DA7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    case 0xC20DA8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x00264C, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    // Overlapping static entry reached from 0xC2B633.
    case 0xC20DA9: cpu.execute_instruction<0x4C>(0x009D26, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    // Overlapping static entry reached from 0xC20DA8.
    case 0xC20DAA: cpu.execute_instruction<0x26>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:18 STA __BSS_START__,X
    case 0xC20DAB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20DAA.
    case 0xC20DAC: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:19 LDA @LOCAL00
    case 0xC20DAE: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:20 CLC
    case 0xC20DB0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:21 ADC #$265C ;tile ids for bottom of X
    case 0xC20DB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00265C, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:21 ADC #$265C ;tile ids for bottom of X
    // Overlapping static entry reached from 0xC20DB1.
    case 0xC20DB3: cpu.execute_instruction<0x26>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:22 STA __BSS_START__+6,X
    case 0xC20DB4: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:22 STA __BSS_START__+6,X
    // Overlapping static entry reached from 0xC20DB3.
    case 0xC20DB5: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:23 LDA @LOCAL00
    case 0xC20DB7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:24 INC
    case 0xC20DB9: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:25 STA @LOCAL00
    case 0xC20DBA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:26 INX
    case 0xC20DBC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:27 INX
    case 0xC20DBD: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:29 CMP #3
    case 0xC20DBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:29 CMP #3
    // Overlapping static entry reached from 0xC20DBE.
    case 0xC20DC0: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:30 BCC @UNKNOWN0
    case 0xC20DC1: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:31 END_C_FUNCTION
    case 0xC20DC3: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:31 END_C_FUNCTION
    case 0xC20DC4: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/separate_decimal_digits.asm (source_named).
bool execute_text_hp_pp_window_separate_decimal_digits_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:3 BEGIN_C_FUNCTION
    case 0xC20D3F: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D41: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D42: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D43: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D44: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20D44.
    case 0xC20D46: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D47: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20D48: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    case 0xC20D49: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC20D46.
    case 0xC20D4A: cpu.execute_instruction<0x0E>(0x0068A2, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    case 0xC20D4B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000068, 2); else cpu.execute_instruction<0xA2>(0x008968, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    // Overlapping static entry reached from 0xC20D4B.
    case 0xC20D4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A0, 2); else cpu.execute_instruction<0x89>(0x000AA0, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    case 0xC20D4E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    // Overlapping static entry reached from 0xC20D4D.
    case 0xC20D4F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    // Overlapping static entry reached from 0xC20D4E.
    case 0xC20D50: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:12 JSL MODULUS16
    case 0xC20D51: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC20D55: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:14 STA __BSS_START__,X
    case 0xC20D57: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:16 DEX
    case 0xC20D5A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    case 0xC20D5B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    // Overlapping static entry reached from 0xC20D5B.
    case 0xC20D5D: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC20D5E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:19 LDA @LOCAL00
    case 0xC20D60: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:20 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20D62: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:21 STA @LOCAL00
    case 0xC20D66: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    case 0xC20D68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20DE2.
    case 0xC20D69: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20D68.
    case 0xC20D6A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:23 JSL MODULUS16
    case 0xC20D6B: cpu.execute_instruction<0x22>(0xC09231, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20D6F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:25 STA __BSS_START__,X
    case 0xC20D71: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:26 DEX
    case 0xC20D74: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    case 0xC20D75: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    // Overlapping static entry reached from 0xC20D75.
    case 0xC20D77: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC20D78: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:30 LDA @LOCAL00
    case 0xC20D7A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:31 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20D7C: cpu.execute_instruction<0x22>(0xC0915B, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC20D80: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:33 STA __BSS_START__,X
    case 0xC20D82: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20D85: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20DD4.
    case 0xC20D86: cpu.execute_instruction<0x20>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20D87: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20D88: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/undraw.asm (source_named).
bool execute_text_hp_pp_window_undraw_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/undraw.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC207E1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E3: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E4: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E5: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC207E6.
    case 0xC207E8: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207E9: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC207EA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:9 TAX
    case 0xC207EB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:10 STX @LOCAL01
    case 0xC207EC: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:11 LDA #1
    case 0xC207EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/hp_pp_window/undraw.asm:11 LDA #1
    // Overlapping static entry reached from 0xC207EE.
    case 0xC207F0: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:12 STA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC207F1: cpu.execute_instruction<0x8D>(0x009649, 3); return true;
    // src/text/hp_pp_window/undraw.asm:13 SEP #PROC_FLAGS::INDEX8
    case 0xC207F4: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:14 TXY
    case 0xC207F6: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:15 JSL ASL16_ENTRY2
    case 0xC207F7: cpu.execute_instruction<0x22>(0xC0923E, 4); return true;
    // src/text/hp_pp_window/undraw.asm:16 EOR #$FFFF
    case 0xC207FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/text/hp_pp_window/undraw.asm:16 EOR #$FFFF
    // Overlapping static entry reached from 0xC207FB.
    case 0xC207FD: cpu.execute_instruction<0xFF>(0x96472D, 4); return true;
    // src/text/hp_pp_window/undraw.asm:17 AND CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC207FE: cpu.execute_instruction<0x2D>(0x009647, 3); return true;
    // src/text/hp_pp_window/undraw.asm:18 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC20801: cpu.execute_instruction<0x8D>(0x009647, 3); return true;
    // src/text/hp_pp_window/undraw.asm:19 REP #PROC_FLAGS::INDEX8
    case 0xC20804: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:20 LDX @LOCAL01
    case 0xC20806: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:21 CPX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC20808: cpu.execute_instruction<0xEC>(0x0089CA, 3); return true;
    // src/text/hp_pp_window/undraw.asm:22 BNE @UNKNOWN0
    case 0xC2080B: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/hp_pp_window/undraw.asm:23 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC2080D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/hp_pp_window/undraw.asm:23 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC2080D.
    case 0xC2080F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/undraw.asm:24 STA @LOCAL00
    case 0xC20810: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:25 BRA @UNKNOWN1
    case 0xC20812: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/hp_pp_window/undraw.asm:27 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC20814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/text/hp_pp_window/undraw.asm:27 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20814.
    case 0xC20816: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/undraw.asm:28 STA @LOCAL00
    case 0xC20817: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:30 TXA
    case 0xC20819: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2081F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20820: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:32 PHA
    case 0xC20822: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:33 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20823: cpu.execute_instruction<0xAD>(0x0098A4, 3); return true;
    // src/text/hp_pp_window/undraw.asm:34 AND #$00FF
    case 0xC20826: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/undraw.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC20826.
    case 0xC20828: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20829: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2082F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:36 PHA
    case 0xC20831: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:37 ASL
    case 0xC20832: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:38 PLA
    case 0xC20833: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:39 ROR
    case 0xC20834: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:40 STA @VIRTUAL02
    case 0xC20835: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:41 LDA #16
    case 0xC20837: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/text/hp_pp_window/undraw.asm:41 LDA #16
    // Overlapping static entry reached from 0xC20837.
    case 0xC20839: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/hp_pp_window/undraw.asm:42 SEC
    case 0xC2083A: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:43 SBC @VIRTUAL02
    case 0xC2083B: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:44 PLY
    case 0xC2083D: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:45 STY @VIRTUAL04
    case 0xC2083E: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:46 CLC
    case 0xC20840: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:47 ADC @VIRTUAL04
    case 0xC20841: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:48 ASL
    case 0xC20843: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:49 STA @VIRTUAL02
    case 0xC20844: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:50 LDA @LOCAL00
    case 0xC20846: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:51 ASL
    case 0xC20848: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:52 ASL
    case 0xC20849: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:53 ASL
    case 0xC2084A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:54 ASL
    case 0xC2084B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:55 ASL
    case 0xC2084C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:56 ASL
    case 0xC2084D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:57 CLC
    case 0xC2084E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:58 ADC @VIRTUAL02
    case 0xC2084F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:59 CLC
    case 0xC20851: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:60 ADC #.LOWORD(BG2_BUFFER)
    case 0xC20852: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000FE, 2); else cpu.execute_instruction<0x69>(0x007DFE, 3); return true;
    // src/text/hp_pp_window/undraw.asm:60 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20852.
    case 0xC20854: cpu.execute_instruction<0x7D>(0x00A0AA, 3); return true;
    // src/text/hp_pp_window/undraw.asm:61 TAX
    case 0xC20855: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    case 0xC20856: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    // Overlapping static entry reached from 0xC20854.
    case 0xC20857: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    // Overlapping static entry reached from 0xC20856.
    case 0xC20858: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/undraw.asm:63 BRA @UNKNOWN5
    case 0xC20859: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:65 LDA #HPPP_WINDOW_WIDTH
    case 0xC2085B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/hp_pp_window/undraw.asm:65 LDA #HPPP_WINDOW_WIDTH
    // Overlapping static entry reached from 0xC2085B.
    case 0xC2085D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/undraw.asm:66 STA @LOCAL00
    case 0xC2085E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:67 BRA @UNKNOWN4
    case 0xC20860: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:69 LDA #0
    case 0xC20862: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/hp_pp_window/undraw.asm:69 LDA #0
    // Overlapping static entry reached from 0xC20862.
    case 0xC20864: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:70 STA __BSS_START__,X
    case 0xC20865: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/undraw.asm:71 INX
    case 0xC20868: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:72 INX
    case 0xC20869: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:73 LDA @LOCAL00
    case 0xC2086A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:74 DEC
    case 0xC2086C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:75 STA @LOCAL00
    case 0xC2086D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:77 BNE @UNKNOWN3
    case 0xC2086F: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/text/hp_pp_window/undraw.asm:78 TXA
    case 0xC20871: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:79 CLC
    case 0xC20872: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    case 0xC20873: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC208C5.
    case 0xC20874: cpu.execute_instruction<0x32>(0x000000, 2); return true;
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20873.
    case 0xC20875: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/undraw.asm:81 TAX
    case 0xC20876: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:82 DEY
    case 0xC20877: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:84 BNE @UNKNOWN2
    case 0xC20878: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/undraw.asm:85 END_C_FUNCTION
    case 0xC2087A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/hp_pp_window/undraw.asm:85 END_C_FUNCTION
    case 0xC2087B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/increment_secondary_memory.asm (source_named).
bool execute_text_increment_secondary_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/increment_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC1042E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/increment_secondary_memory.asm:5 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10430: cpu.execute_instruction<0x20>(0x000301, 3); return true;
    // src/text/increment_secondary_memory.asm:6 CLC
    case 0xC10433: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/increment_secondary_memory.asm:7 ADC #window_stats::secondary_memory
    case 0xC10434: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/text/increment_secondary_memory.asm:7 ADC #window_stats::secondary_memory
    // Overlapping static entry reached from 0xC10434.
    case 0xC10436: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/increment_secondary_memory.asm:8 TAX
    case 0xC10437: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/increment_secondary_memory.asm:9 LDA __BSS_START__,X
    case 0xC10438: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/increment_secondary_memory.asm:10 LDA __BSS_START__,X
    case 0xC1043B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/increment_secondary_memory.asm:11 INC
    case 0xC1043E: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/increment_secondary_memory.asm:12 STA __BSS_START__,X
    case 0xC1043F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/increment_secondary_memory.asm:13 END_C_FUNCTION
    case 0xC10442: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/lock_input.asm (source_named).
bool execute_text_lock_input_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/lock_input.asm:3 BEGIN_C_FUNCTION
    case 0xC100C7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/lock_input.asm:5 LDA #1
    case 0xC100C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/lock_input.asm:5 LDA #1
    // Overlapping static entry reached from 0xC100C9.
    case 0xC100CB: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/lock_input.asm:6 STA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC100CC: cpu.execute_instruction<0x8D>(0x009645, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/lock_input.asm:7 END_C_FUNCTION
    case 0xC100CF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/move_cursor.asm (source_named).
bool execute_text_move_cursor_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/move_cursor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC118E7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118E9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC118EC.
    case 0xC118EE: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118EF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC118F0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    case 0xC118F1: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC118EE.
    case 0xC118F2: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/text/move_cursor.asm:23 STX @LOCAL07
    case 0xC118F3: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/move_cursor.asm:23 STX @LOCAL07
    // Overlapping static entry reached from 0xC118F2.
    case 0xC118F4: cpu.execute_instruction<0x1C>(0x001A85, 3); return true;
    // src/text/move_cursor.asm:24 STA @LOCAL06
    case 0xC118F5: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/move_cursor.asm:25 LDY @WRAPY
    case 0xC118F7: cpu.execute_instruction<0xA4>(0x000032, 2); return true;
    // src/text/move_cursor.asm:26 STY @LOCAL05
    case 0xC118F9: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/text/move_cursor.asm:27 LDX @WRAPX
    case 0xC118FB: cpu.execute_instruction<0xA6>(0x000030, 2); return true;
    // src/text/move_cursor.asm:28 STX @LOCAL04
    case 0xC118FD: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/move_cursor.asm:29 LDA @SFX
    case 0xC118FF: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/text/move_cursor.asm:30 STA @LOCAL03
    case 0xC11901: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/move_cursor.asm:31 LDA @DELTAY
    case 0xC11903: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/text/move_cursor.asm:32 STA @VIRTUAL02
    case 0xC11905: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/move_cursor.asm:33 STA @LOCAL00
    case 0xC11907: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    case 0xC11909: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11909.
    case 0xC1190B: cpu.execute_instruction<0xFF>(0xA41085, 4); return true;
    // src/text/move_cursor.asm:35 STA @LOCAL01
    case 0xC1190C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    case 0xC1190E: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC1190B.
    case 0xC1190F: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    case 0xC11910: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    // Overlapping static entry reached from 0xC1190F.
    case 0xC11911: cpu.execute_instruction<0x1C>(0x001AA5, 3); return true;
    // src/text/move_cursor.asm:38 LDA @LOCAL06
    case 0xC11912: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/move_cursor.asm:39 JSL UNKNOWN_C20B65
    case 0xC11914: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/move_cursor.asm:40 TAX
    case 0xC11918: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/move_cursor.asm:41 STX @LOCAL02
    case 0xC11919: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    case 0xC1191B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1191B.
    case 0xC1191D: cpu.execute_instruction<0xFF>(0xA53AD0, 4); return true;
    // src/text/move_cursor.asm:43 BNE @UNKNOWN1
    case 0xC1191E: cpu.execute_instruction<0xD0>(0x00003A, 2); return true;
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    case 0xC11920: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC1191D.
    case 0xC11921: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/text/move_cursor.asm:45 STA @LOCAL00
    case 0xC11922: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    case 0xC11924: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11924.
    case 0xC11926: cpu.execute_instruction<0xFF>(0xA41085, 4); return true;
    // src/text/move_cursor.asm:47 STA @LOCAL01
    case 0xC11927: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    case 0xC11929: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC11926.
    case 0xC1192A: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    case 0xC1192B: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    // Overlapping static entry reached from 0xC1192A.
    case 0xC1192C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/move_cursor.asm:50 LDA @LOCAL04
    case 0xC1192D: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/move_cursor.asm:51 JSL UNKNOWN_C20B65
    case 0xC1192F: cpu.execute_instruction<0x22>(0xC20B65, 4); return true;
    // src/text/move_cursor.asm:52 TAX
    case 0xC11933: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/move_cursor.asm:53 STX @LOCAL02
    case 0xC11934: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:54 LDA @VIRTUAL04
    case 0xC11936: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/move_cursor.asm:55 BNE @UNKNOWN0
    case 0xC11938: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/move_cursor.asm:56 TXA
    case 0xC1193A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/move_cursor.asm:57 AND #$FF00
    case 0xC1193B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/text/move_cursor.asm:57 AND #$FF00
    // Overlapping static entry reached from 0xC1193B.
    case 0xC1193D: cpu.execute_instruction<0xFF>(0xFF29EB, 4); return true;
    // src/text/move_cursor.asm:58 XBA
    case 0xC1193E: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/text/move_cursor.asm:59 AND #$00FF
    case 0xC1193F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/move_cursor.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC1193F.
    case 0xC11941: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/text/move_cursor.asm:60 CMP @LOCAL07
    case 0xC11942: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/text/move_cursor.asm:61 BEQ @UNKNOWN1
    case 0xC11944: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    case 0xC11946: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11946.
    case 0xC11948: cpu.execute_instruction<0xFF>(0x801286, 4); return true;
    // src/text/move_cursor.asm:63 STX @LOCAL02
    case 0xC11949: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    case 0xC1194B: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC11948.
    case 0xC1194C: cpu.execute_instruction<0x0D>(0x00298A, 3); return true;
    // src/text/move_cursor.asm:66 TXA
    case 0xC1194D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/move_cursor.asm:67 AND #$00FF
    case 0xC1194E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1194C.
    case 0xC1194F: cpu.execute_instruction<0xFF>(0x1AC500, 4); return true;
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC1194E.
    case 0xC11950: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/text/move_cursor.asm:68 CMP @LOCAL06
    case 0xC11951: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/text/move_cursor.asm:69 BEQ @UNKNOWN1
    case 0xC11953: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    case 0xC11955: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11955.
    case 0xC11957: cpu.execute_instruction<0xFF>(0xE01286, 4); return true;
    // src/text/move_cursor.asm:71 STX @LOCAL02
    case 0xC11958: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    case 0xC1195A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11957.
    case 0xC1195B: cpu.execute_instruction<0xFF>(0x06F0FF, 4); return true;
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1195A.
    case 0xC1195C: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/text/move_cursor.asm:74 BEQ @UNKNOWN2
    case 0xC1195D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    case 0xC1195F: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    // Overlapping static entry reached from 0xC1195C.
    case 0xC11960: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    case 0xC11961: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC11960.
    case 0xC11962: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000AB, 2); else cpu.execute_instruction<0xE0>(0x00C0AB, 3); return true;
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC11962.
    case 0xC11964: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A6, 2); else cpu.execute_instruction<0xC0>(0x0012A6, 3); return true;
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    case 0xC11965: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    // Overlapping static entry reached from 0xC11964.
    case 0xC11966: cpu.execute_instruction<0x12>(0x00008A, 2); return true;
    // src/text/move_cursor.asm:79 TXA
    case 0xC11967: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC11968: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC11969: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/num_select_prompt.asm (source_named).
bool execute_text_num_select_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/num_select_prompt.asm:4 BEGIN_C_FUNCTION
    case 0xC1101C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC1101E: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC1101F: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11020: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11021: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC11021.
    case 0xC11023: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11024: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC11025: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    case 0xC11026: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    // Overlapping static entry reached from 0xC11023.
    case 0xC11027: cpu.execute_instruction<0x26>(0x0000AD, 2); return true;
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    case 0xC11028: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11027.
    case 0xC11029: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11029.
    case 0xC1102A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000C9, 2); else cpu.execute_instruction<0x89>(0x00FFC9, 3); return true;
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    case 0xC1102B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1102A.
    case 0xC1102C: cpu.execute_instruction<0xFF>(0x15D0FF, 4); return true;
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1102B.
    case 0xC1102D: cpu.execute_instruction<0xFF>(0xA915D0, 4); return true;
    // src/text/num_select_prompt.asm:26 BNE @UNKNOWN0
    case 0xC1102E: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11030: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1102D.
    case 0xC11031: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11030.
    case 0xC11032: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11033: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11035: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11035.
    case 0xC11037: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11038: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1103A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1103C: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1103E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11040: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/text/num_select_prompt.asm:29 JMP @UNKNOWN24
    case 0xC11042: cpu.execute_instruction<0x4C>(0x001349, 3); return true;
    // src/text/num_select_prompt.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC11045: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/num_select_prompt.asm:32 ASL
    case 0xC11048: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:33 TAX
    case 0xC11049: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC1104A: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC1104D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1104D.
    case 0xC1104F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:36 JSL MULT168
    case 0xC11050: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/num_select_prompt.asm:37 CLC
    case 0xC11054: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11055: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000050, 2); else cpu.execute_instruction<0x69>(0x008650, 3); return true;
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11055.
    case 0xC11057: cpu.execute_instruction<0x86>(0x0000AA, 2); return true;
    // src/text/num_select_prompt.asm:39 TAX
    case 0xC11058: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:40 LDA a:window_stats::text_x,X
    case 0xC11059: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/num_select_prompt.asm:41 STA @LOCAL07
    case 0xC1105C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:42 LDA a:window_stats::text_y,X
    case 0xC1105E: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/text/num_select_prompt.asm:43 STA @LOCAL06
    case 0xC11061: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11063: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11063.
    case 0xC11065: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11066: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11068: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11068.
    case 0xC1106A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1106B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1106D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1106F: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11071: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11073: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:46 LDA #1
    case 0xC11075: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/num_select_prompt.asm:46 LDA #1
    // Overlapping static entry reached from 0xC11075.
    case 0xC11077: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/num_select_prompt.asm:47 STA @LOCAL04
    case 0xC11078: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1107A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1107A.
    case 0xC1107C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1107D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1107F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1107F.
    case 0xC11081: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11082: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11084: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11086: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11088: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1108A: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/num_select_prompt.asm:51 JSR SET_INSTANT_PRINTING
    case 0xC1108C: cpu.execute_instruction<0x22>(0xC3E4D4, 4); return true;
    // src/text/num_select_prompt.asm:52 LDX @LOCAL06
    case 0xC11090: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:53 LDA @LOCAL07
    case 0xC11092: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:54 JSR UNKNOWN_C438A5
    case 0xC11094: cpu.execute_instruction<0x22>(0xC438A5, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11098: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1109A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1109C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1109E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC110A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/num_select_prompt.asm:57 JSR UNKNOWN_C10D7C
    case 0xC110A8: cpu.execute_instruction<0x20>(0x000D7C, 3); return true;
    // src/text/num_select_prompt.asm:58 STA @VIRTUAL02
    case 0xC110AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:59 LDA #7
    case 0xC110AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/num_select_prompt.asm:59 LDA #7
    // Overlapping static entry reached from 0xC110AD.
    case 0xC110AF: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/num_select_prompt.asm:60 SEC
    case 0xC110B0: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:61 SBC @VIRTUAL02
    case 0xC110B1: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:62 CLC
    case 0xC110B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC110B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005A, 2); else cpu.execute_instruction<0x69>(0x00895A, 3); return true;
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC110B4.
    case 0xC110B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/text/num_select_prompt.asm:64 STA @VIRTUAL04
    case 0xC110B7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/num_select_prompt.asm:64 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC110B6.
    case 0xC110B8: cpu.execute_instruction<0x04>(0x0000A4, 2); return true;
    // src/text/num_select_prompt.asm:65 LDY @LOCAL08
    case 0xC110B9: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/text/num_select_prompt.asm:65 LDY @LOCAL08
    // Overlapping static entry reached from 0xC110B8.
    case 0xC110BA: cpu.execute_instruction<0x26>(0x000084, 2); return true;
    // src/text/num_select_prompt.asm:66 STY @LOCAL02
    case 0xC110BB: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:66 STY @LOCAL02
    // Overlapping static entry reached from 0xC110BA.
    case 0xC110BC: cpu.execute_instruction<0x16>(0x000080, 2); return true;
    // src/text/num_select_prompt.asm:67 BRA @UNKNOWN5
    case 0xC110BD: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:67 BRA @UNKNOWN5
    // Overlapping static entry reached from 0xC110BC.
    case 0xC110BE: cpu.execute_instruction<0x16>(0x0000C4, 2); return true;
    // src/text/num_select_prompt.asm:69 CPY @LOCAL04
    case 0xC110BF: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:69 CPY @LOCAL04
    // Overlapping static entry reached from 0xC110BE.
    case 0xC110C0: cpu.execute_instruction<0x1C>(0x0005D0, 3); return true;
    // src/text/num_select_prompt.asm:70 BNE @UNKNOWN3
    case 0xC110C1: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/num_select_prompt.asm:71 LDX #16
    case 0xC110C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/text/num_select_prompt.asm:71 LDX #16
    // Overlapping static entry reached from 0xC110C3.
    case 0xC110C5: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/num_select_prompt.asm:72 BRA @UNKNOWN4
    case 0xC110C6: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/num_select_prompt.asm:74 LDX #48
    case 0xC110C8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x000030, 3); return true;
    // src/text/num_select_prompt.asm:74 LDX #48
    // Overlapping static entry reached from 0xC110C8.
    case 0xC110CA: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/num_select_prompt.asm:76 TXA
    case 0xC110CB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:77 JSR @PRINT_LETTER_FUNC
    case 0xC110CC: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/text/num_select_prompt.asm:78 LDY @LOCAL02
    case 0xC110D0: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:79 DEY
    case 0xC110D2: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:80 STY @LOCAL02
    case 0xC110D3: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:82 TYA
    case 0xC110D5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:83 CMP @VIRTUAL02
    case 0xC110D6: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC110D8: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC110DA: cpu.execute_instruction<0xB0>(0x0000E3, 2); return true;
    // src/text/num_select_prompt.asm:85 BRA @UNKNOWN10
    case 0xC110DC: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:87 CPY @LOCAL04
    case 0xC110DE: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:88 BNE @UNKNOWN8
    case 0xC110E0: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/num_select_prompt.asm:89 LDX #16
    case 0xC110E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/text/num_select_prompt.asm:89 LDX #16
    // Overlapping static entry reached from 0xC110E2.
    case 0xC110E4: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/num_select_prompt.asm:90 BRA @UNKNOWN9
    case 0xC110E5: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/num_select_prompt.asm:92 LDX #48
    case 0xC110E7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x000030, 3); return true;
    // src/text/num_select_prompt.asm:92 LDX #48
    // Overlapping static entry reached from 0xC110E7.
    case 0xC110E9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/num_select_prompt.asm:94 STX @VIRTUAL02
    case 0xC110EA: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:95 LDX @VIRTUAL04
    case 0xC110EC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/num_select_prompt.asm:96 LDA __BSS_START__,X
    case 0xC110EE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/num_select_prompt.asm:97 AND #$00FF
    case 0xC110F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/num_select_prompt.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC110F1.
    case 0xC110F3: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/num_select_prompt.asm:98 CLC
    case 0xC110F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:99 ADC @VIRTUAL02
    case 0xC110F5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:100 INC @VIRTUAL04
    case 0xC110F7: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/num_select_prompt.asm:101 JSR @PRINT_LETTER_FUNC
    case 0xC110F9: cpu.execute_instruction<0x22>(0xC43F77, 4); return true;
    // src/text/num_select_prompt.asm:102 LDY @LOCAL02
    case 0xC110FD: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:103 DEY
    case 0xC110FF: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:104 STY @LOCAL02
    case 0xC11100: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:106 CPY #0
    case 0xC11102: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/num_select_prompt.asm:106 CPY #0
    // Overlapping static entry reached from 0xC11102.
    case 0xC11104: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/num_select_prompt.asm:107 BNE @UNKNOWN7
    case 0xC11105: cpu.execute_instruction<0xD0>(0x0000D7, 2); return true;
    // src/text/num_select_prompt.asm:108 JSR CLEAR_INSTANT_PRINTING
    case 0xC11107: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/num_select_prompt.asm:109 JSL WINDOW_TICK
    case 0xC1110B: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/num_select_prompt.asm:111 JSL UNKNOWN_C12E42
    case 0xC1110F: cpu.execute_instruction<0x22>(0xC12E42, 4); return true;
    // src/text/num_select_prompt.asm:112 LDA PAD_PRESS
    case 0xC11113: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    case 0xC11116: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC11116.
    case 0xC11118: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/num_select_prompt.asm:114 BEQ @UNKNOWN12
    case 0xC11119: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/text/num_select_prompt.asm:115 LDA @LOCAL04
    case 0xC1111B: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:116 CMP @LOCAL08
    case 0xC1111D: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/text/num_select_prompt.asm:117 BCS @UNKNOWN12
    case 0xC1111F: cpu.execute_instruction<0xB0>(0x00003A, 2); return true;
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    case 0xC11121: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11121.
    case 0xC11123: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:119 JSL PLAY_SOUND
    case 0xC11124: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/num_select_prompt.asm:120 INC @LOCAL04
    case 0xC11128: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1112A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1112C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1112E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11130: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11132: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11134: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11136: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11138: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1113A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1113A.
    case 0xC1113C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1113D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1113F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1113F.
    case 0xC11141: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11142: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:124 JSL MULT32
    case 0xC11144: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11148: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1114A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1114C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1114E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11150: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11152: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11154: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11156: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/num_select_prompt.asm:127 JMP @UNKNOWN1
    case 0xC11158: cpu.execute_instruction<0x4C>(0x00108C, 3); return true;
    // src/text/num_select_prompt.asm:129 LDA PAD_PRESS
    case 0xC1115B: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    case 0xC1115E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC1115E.
    case 0xC11160: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    case 0xC11161: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xC11160.
    case 0xC11162: cpu.execute_instruction<0x43>(0x0000A5, 2); return true;
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    case 0xC11163: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    // Overlapping static entry reached from 0xC11162.
    case 0xC11164: cpu.execute_instruction<0x1C>(0x0001C9, 3); return true;
    // src/text/num_select_prompt.asm:133 CMP #1
    case 0xC11165: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/num_select_prompt.asm:133 CMP #1
    // Overlapping static entry reached from 0xC11165.
    case 0xC11167: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC11168: cpu.execute_instruction<0x90>(0x00003C, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC1116A: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    case 0xC1116C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1116C.
    case 0xC1116E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:136 JSL PLAY_SOUND
    case 0xC1116F: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/num_select_prompt.asm:137 DEC @LOCAL04
    case 0xC11173: cpu.execute_instruction<0xC6>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11175: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11177: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11179: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1117B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1117D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC1117F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11181: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11183: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11185.
    case 0xC11187: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11188: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1118A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1118A.
    case 0xC1118C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1118D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:141 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1118F: cpu.execute_instruction<0x22>(0xC091A6, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11193: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11195: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11197: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11199: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1119B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1119D: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1119F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC111A1: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/num_select_prompt.asm:144 JMP @UNKNOWN1
    case 0xC111A3: cpu.execute_instruction<0x4C>(0x00108C, 3); return true;
    // src/text/num_select_prompt.asm:146 LDA PAD_HELD
    case 0xC111A6: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    case 0xC111A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    // Overlapping static entry reached from 0xC111A9.
    case 0xC111AB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC111AC: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC111AE: cpu.execute_instruction<0x4C>(0x00125C, 3); return true;
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    case 0xC111B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC111B1.
    case 0xC111B3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:150 JSL PLAY_SOUND
    case 0xC111B4: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC111B8.
    case 0xC111BA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111BB: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC111BD.
    case 0xC111BF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC111C0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C2: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C6: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111C8: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:153 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC111CA: cpu.execute_instruction<0x22>(0xC091A6, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC111CE.
    case 0xC111D0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111D1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC111D3.
    case 0xC111D5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC111D6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:155 JSL MODULUS32
    case 0xC111D8: cpu.execute_instruction<0x22>(0xC09237, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111DC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111DE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111E0: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC111E2: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111E6: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111E8: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111EA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC111EC: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/num_select_prompt.asm:158 BEQ @UNKNOWN16
    case 0xC111EE: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F0: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F4: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC111F6: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111F8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111FA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111FC: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC111FE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:161 CLC
    case 0xC11200: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11201: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11203: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11205: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11207: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11209: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1120B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1120D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1120F: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11211: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11213: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:164 JMP @UNKNOWN1
    case 0xC11215: cpu.execute_instruction<0x4C>(0x00108C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11218: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1121A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1121C: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1121E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11220: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11222: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11224: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11226: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11228: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC1122A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC1122C: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC1122E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:169 JSL MULT32
    case 0xC11230: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11234: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11236: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11238: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1123A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1123C: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1123E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11240: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11242: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:172 SEC
    case 0xC11244: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11245: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11247: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11249: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1124B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1124D: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1124F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11251: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11253: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11255: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11257: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:175 JMP @UNKNOWN1
    case 0xC11259: cpu.execute_instruction<0x4C>(0x00108C, 3); return true;
    // src/text/num_select_prompt.asm:177 LDA PAD_HELD
    case 0xC1125C: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    case 0xC1125F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC1125F.
    case 0xC11261: cpu.execute_instruction<0x04>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11262: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11261.
    case 0xC11263: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11264: cpu.execute_instruction<0x4C>(0x00130C, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11263.
    case 0xC11265: cpu.execute_instruction<0x0C>(0x00A913, 3); return true;
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    case 0xC11267: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11265.
    case 0xC11268: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11267.
    case 0xC11269: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:181 JSL PLAY_SOUND
    case 0xC1126A: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1126E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11270: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11272: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11274: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:183 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC11276: cpu.execute_instruction<0x22>(0xC091A6, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1127A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1127A.
    case 0xC1127C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1127D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1127F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1127F.
    case 0xC11281: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11282: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:185 JSL MODULUS32
    case 0xC11284: cpu.execute_instruction<0x22>(0xC09237, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11288: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11288.
    case 0xC1128A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1128B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1128D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1128D.
    case 0xC1128F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11290: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11292: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11294: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11296: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11298: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1129A: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/num_select_prompt.asm:188 BEQ @UNKNOWN20
    case 0xC1129C: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1129E: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112A0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112A2: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112A4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    // Overlapping static entry reached from 0xC16901.
    case 0xC112A5: cpu.execute_instruction<0x0C>(0x001EA5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112A6: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112A8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112AA: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112AC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:191 SEC
    case 0xC112AE: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112AF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B1: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B7: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112B9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112BB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112BD: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112BF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC112C1: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:194 JMP @UNKNOWN1
    case 0xC112C3: cpu.execute_instruction<0x4C>(0x00108C, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112C6: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112C8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112CA: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC112CC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112CE: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112D0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112D2: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC112D4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC112D6.
    case 0xC112D8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112D9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC112DB.
    case 0xC112DD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC112DE: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:199 JSL MULT32
    case 0xC112E0: cpu.execute_instruction<0x22>(0xC09086, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112E4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112E6: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC112EA: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112EC: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112EE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112F0: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC112F2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:202 CLC
    case 0xC112F4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112F7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112F9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112FB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112FD: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC112FF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11301: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11303: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11305: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11307: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:205 JMP @UNKNOWN1
    case 0xC11309: cpu.execute_instruction<0x4C>(0x00108C, 3); return true;
    // src/text/num_select_prompt.asm:207 LDA PAD_PRESS
    case 0xC1130C: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC1130F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC1130F.
    case 0xC11311: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/num_select_prompt.asm:209 BEQ @UNKNOWN22
    case 0xC11312: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    case 0xC11314: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC11314.
    case 0xC11316: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:211 JSL PLAY_SOUND
    case 0xC11317: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1131B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1131D: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1131F: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11321: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/text/num_select_prompt.asm:213 BRA @UNKNOWN24
    case 0xC11323: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:215 LDA PAD_PRESS
    case 0xC11325: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC11328: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC11328.
    case 0xC1132A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC1132B: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1132A.
    case 0xC1132C: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC1132D: cpu.execute_instruction<0x4C>(0x00110F, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC1132C.
    case 0xC1132E: cpu.execute_instruction<0x0F>(0x02A911, 4); return true;
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    case 0xC11330: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11330.
    case 0xC11332: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:219 JSL PLAY_SOUND
    case 0xC11333: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC11337: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC11337.
    case 0xC11339: cpu.execute_instruction<0xFF>(0xA90685, 4); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC1133A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC1133C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC11339.
    case 0xC1133D: cpu.execute_instruction<0xFF>(0x0885FF, 4); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC1133C.
    case 0xC1133E: cpu.execute_instruction<0xFF>(0xA50885, 4); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC1133F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11341: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC1133E.
    case 0xC11342: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11343: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC11342.
    case 0xC11344: cpu.execute_instruction<0x2E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11345: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC11347: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC11349: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC1134A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/open_hppp_display.asm (source_named).
bool execute_text_open_hppp_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/open_hppp_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC13CA1: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/open_hppp_display.asm:5 JSL UNKNOWN_C0943C
    case 0xC13CA3: cpu.execute_instruction<0x22>(0xC0943C, 4); return true;
    // src/text/open_hppp_display.asm:6 LDA #SFX::CURSOR1
    case 0xC13CA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/open_hppp_display.asm:6 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC13CA7.
    case 0xC13CA9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/open_hppp_display.asm:7 JSL PLAY_SOUND
    case 0xC13CAA: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/open_hppp_display.asm:8 JSR UNKNOWN_C1134B
    case 0xC13CAE: cpu.execute_instruction<0x20>(0x00134B, 3); return true;
    // src/text/open_hppp_display.asm:10 JSL WINDOW_TICK
    case 0xC13CB1: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/open_hppp_display.asm:11 LDA PAD_PRESS
    case 0xC13CB5: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/open_hppp_display.asm:12 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13CB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/open_hppp_display.asm:12 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13CB8.
    case 0xC13CBA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/open_hppp_display.asm:13 BEQ @UNKNOWN1
    case 0xC13CBB: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/open_hppp_display.asm:14 JSL OPEN_MENU_BUTTON
    case 0xC13CBD: cpu.execute_instruction<0x22>(0xC134A7, 4); return true;
    // src/text/open_hppp_display.asm:15 BRA @UNKNOWN2
    case 0xC13CC1: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/text/open_hppp_display.asm:17 LDA PAD_PRESS
    case 0xC13CC3: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/open_hppp_display.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13CC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/open_hppp_display.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13CC6.
    case 0xC13CC8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00E6F0, 3); return true;
    // src/text/open_hppp_display.asm:19 BEQ @UNKNOWN0
    case 0xC13CC9: cpu.execute_instruction<0xF0>(0x0000E6, 2); return true;
    // src/text/open_hppp_display.asm:19 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC13CC8.
    case 0xC13CCA: cpu.execute_instruction<0xE6>(0x0000A9, 2); return true;
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    case 0xC13CCB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC13CCA.
    case 0xC13CCC: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC13CCB.
    case 0xC13CCD: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/open_hppp_display.asm:21 JSL PLAY_SOUND
    case 0xC13CCE: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/open_hppp_display.asm:22 JSR CLEAR_INSTANT_PRINTING
    case 0xC13CD2: cpu.execute_instruction<0x22>(0xC3E4CA, 4); return true;
    // src/text/open_hppp_display.asm:23 JSR HIDE_HPPP_WINDOWS
    case 0xC13CD6: cpu.execute_instruction<0x20>(0x000A1D, 3); return true;
    // src/text/open_hppp_display.asm:24 JSR UNKNOWN_C1008E
    case 0xC13CD9: cpu.execute_instruction<0x20>(0x00008E, 3); return true;
    // src/text/open_hppp_display.asm:25 JSL WINDOW_TICK
    case 0xC13CDC: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/open_hppp_display.asm:26 JSL UNKNOWN_C09451
    case 0xC13CE0: cpu.execute_instruction<0x22>(0xC09451, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/open_hppp_display.asm:28 END_C_FUNCTION
    case 0xC13CE4: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_letter.asm (source_named).
bool execute_text_print_letter_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_letter.asm:3 BEGIN_C_FUNCTION
    case 0xC10CB6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CB8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CB9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC10CBB.
    case 0xC10CBD: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_letter.asm:8 END_STACK_VARS
    case 0xC10CBF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/print_letter.asm:9 TAY
    case 0xC10CC0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_letter.asm:10 STY @LOCAL01
    case 0xC10CC1: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/print_letter.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC10CC3: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_letter.asm:12 CMP #.LOWORD(-1)
    case 0xC10CC6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_letter.asm:12 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC10CC6.
    case 0xC10CC8: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_letter.asm:13 BEQL @UNKNOWN9
    case 0xC10CC9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_letter.asm:13 BEQL @UNKNOWN9
    case 0xC10CCB: cpu.execute_instruction<0x4C>(0x000D5E, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_letter.asm:13 BEQL @UNKNOWN9
    // Overlapping static entry reached from 0xC10CC8.
    case 0xC10CCC: cpu.execute_instruction<0x5E>(0x00AD0D, 3); return true;
    // src/text/print_letter.asm:14 LDA CURRENT_FOCUS_WINDOW
    case 0xC10CCE: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_letter.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10CCC.
    case 0xC10CCF: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/text/print_letter.asm:14 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC102F1.
    case 0xC10CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x00000A, 2); else cpu.execute_instruction<0x89>(0x00AA0A, 3); return true;
    // src/text/print_letter.asm:15 ASL
    case 0xC10CD1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_letter.asm:16 TAX
    case 0xC10CD2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter.asm:17 LDA OPEN_WINDOW_TABLE,X
    case 0xC10CD3: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/print_letter.asm:18 LDY #.SIZEOF(window_stats)
    case 0xC10CD6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000052, 2); else cpu.execute_instruction<0xA0>(0x000052, 3); return true;
    // src/text/print_letter.asm:18 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10CD6.
    case 0xC10CD8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_letter.asm:19 JSL MULT168
    case 0xC10CD9: cpu.execute_instruction<0x22>(0xC08FF7, 4); return true;
    // src/text/print_letter.asm:20 TAX
    case 0xC10CDD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter.asm:21 LDA WINDOW_STATS+window_stats::font,X
    case 0xC10CDE: cpu.execute_instruction<0xBD>(0x008665, 3); return true;
    // src/text/print_letter.asm:22 LDY @LOCAL01
    case 0xC10CE1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_letter.asm:23 TYX
    case 0xC10CE3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/print_letter.asm:24 JSL UNKNOWN_C44E61
    case 0xC10CE4: cpu.execute_instruction<0x22>(0xC44E61, 4); return true;
    // src/text/print_letter.asm:25 LDA CURRENT_FOCUS_WINDOW
    case 0xC10CE8: cpu.execute_instruction<0xAD>(0x008958, 3); return true;
    // src/text/print_letter.asm:26 ASL
    case 0xC10CEB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_letter.asm:27 TAX
    case 0xC10CEC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter.asm:28 LDA OPEN_WINDOW_TABLE,X
    case 0xC10CED: cpu.execute_instruction<0xBD>(0x0088E4, 3); return true;
    // src/text/print_letter.asm:29 CMP WINDOW_TAIL
    case 0xC10CF0: cpu.execute_instruction<0xCD>(0x0088E2, 3); return true;
    // src/text/print_letter.asm:30 BEQ @UNKNOWN1
    case 0xC10CF3: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/print_letter.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC10CF5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_letter.asm:32 LDA #1
    case 0xC10CF7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/print_letter.asm:33 STA REDRAW_ALL_WINDOWS
    case 0xC10CF9: cpu.execute_instruction<0x8D>(0x009623, 3); return true;
    // src/text/print_letter.asm:33 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10CF7.
    case 0xC10CFA: cpu.execute_instruction<0x23>(0x000096, 2); return true;
    // src/text/print_letter.asm:35 REP #PROC_FLAGS::ACCUM8
    case 0xC10CFC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/print_letter.asm:36 LDA TEXT_SOUND_MODE
    case 0xC10CFE: cpu.execute_instruction<0xAD>(0x00964F, 3); return true;
    // src/text/print_letter.asm:37 CMP #2
    case 0xC10D01: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/print_letter.asm:37 CMP #2
    // Overlapping static entry reached from 0xC10D01.
    case 0xC10D03: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_letter.asm:38 BNE @UNKNOWN2
    case 0xC10D04: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/print_letter.asm:39 LDX #1
    case 0xC10D06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/print_letter.asm:39 LDX #1
    // Overlapping static entry reached from 0xC10D06.
    case 0xC10D08: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/print_letter.asm:40 BRA @UNKNOWN5
    case 0xC10D09: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/print_letter.asm:42 LDA TEXT_SOUND_MODE
    case 0xC10D0B: cpu.execute_instruction<0xAD>(0x00964F, 3); return true;
    // src/text/print_letter.asm:43 CMP #3
    case 0xC10D0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/print_letter.asm:43 CMP #3
    // Overlapping static entry reached from 0xC10D0E.
    case 0xC10D10: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_letter.asm:44 BNE @UNKNOWN3
    case 0xC10D11: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/print_letter.asm:45 LDX #0
    case 0xC10D13: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/print_letter.asm:45 LDX #0
    // Overlapping static entry reached from 0xC10D13.
    case 0xC10D15: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/print_letter.asm:46 BRA @UNKNOWN5
    case 0xC10D16: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/print_letter.asm:48 LDX #0
    case 0xC10D18: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/print_letter.asm:48 LDX #0
    // Overlapping static entry reached from 0xC10D18.
    case 0xC10D1A: cpu.execute_instruction<0x00>(0x0000AD, 2); return true;
    // src/text/print_letter.asm:49 LDA BLINKING_TRIANGLE_FLAG
    case 0xC10D1B: cpu.execute_instruction<0xAD>(0x00964D, 3); return true;
    // src/text/print_letter.asm:50 BNE @UNKNOWN5
    case 0xC10D1E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/print_letter.asm:51 LDX #1
    case 0xC10D20: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/print_letter.asm:51 LDX #1
    // Overlapping static entry reached from 0xC10D20.
    case 0xC10D22: cpu.execute_instruction<0x00>(0x0000E0, 2); return true;
    // src/text/print_letter.asm:53 CPX #0
    case 0xC10D23: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/print_letter.asm:53 CPX #0
    // Overlapping static entry reached from 0xC10D23.
    case 0xC10D25: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter.asm:54 BEQ @UNKNOWN6
    case 0xC10D26: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/print_letter.asm:55 LDA INSTANT_PRINTING
    case 0xC10D28: cpu.execute_instruction<0xAD>(0x009622, 3); return true;
    // src/text/print_letter.asm:56 AND #$00FF
    case 0xC10D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_letter.asm:56 AND #$00FF
    // Overlapping static entry reached from 0xC10D2B.
    case 0xC10D2D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_letter.asm:57 BNE @UNKNOWN6
    case 0xC10D2E: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/print_letter.asm:58 LDY @LOCAL01
    case 0xC10D30: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_letter.asm:59 CPY #32
    case 0xC10D32: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/text/print_letter.asm:59 CPY #32
    // Overlapping static entry reached from 0xC10D32.
    case 0xC10D34: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter.asm:60 BEQ @UNKNOWN6
    case 0xC10D35: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/print_letter.asm:62 CPY #CHAR::SPACE
    case 0xC10D37: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000050, 2); else cpu.execute_instruction<0xC0>(0x000050, 3); return true;
    // src/text/print_letter.asm:62 CPY #CHAR::SPACE
    // Overlapping static entry reached from 0xC10D37.
    case 0xC10D39: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter.asm:63 BEQ @UNKNOWN6
    case 0xC10D3A: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/print_letter.asm:65 LDA #SFX::TEXT_PRINT
    case 0xC10D3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/print_letter.asm:65 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC10D3C.
    case 0xC10D3E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_letter.asm:66 JSL PLAY_SOUND
    case 0xC10D3F: cpu.execute_instruction<0x22>(0xC0ABE0, 4); return true;
    // src/text/print_letter.asm:68 LDA INSTANT_PRINTING
    case 0xC10D43: cpu.execute_instruction<0xAD>(0x009622, 3); return true;
    // src/text/print_letter.asm:69 AND #$00FF
    case 0xC10D46: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_letter.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC10D46.
    case 0xC10D48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_letter.asm:70 BNE @UNKNOWN9
    case 0xC10D49: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/print_letter.asm:71 LDX SELECTED_TEXT_SPEED
    case 0xC10D4B: cpu.execute_instruction<0xAE>(0x009625, 3); return true;
    // src/text/print_letter.asm:72 INX
    case 0xC10D4E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_letter.asm:73 STX @LOCAL00
    case 0xC10D4F: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/print_letter.asm:74 BRA @UNKNOWN8
    case 0xC10D51: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/print_letter.asm:76 JSL WINDOW_TICK
    case 0xC10D53: cpu.execute_instruction<0x22>(0xC12DD5, 4); return true;
    // src/text/print_letter.asm:77 LDX @LOCAL00
    case 0xC10D57: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/print_letter.asm:78 DEX
    case 0xC10D59: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/print_letter.asm:79 STX @LOCAL00
    case 0xC10D5A: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/print_letter.asm:81 BNE @UNKNOWN7
    case 0xC10D5C: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_letter.asm:83 END_C_FUNCTION
    case 0xC10D5E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_letter.asm:83 END_C_FUNCTION
    case 0xC10D5F: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_letter_redirect.asm (source_named).
bool execute_text_print_letter_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_letter_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC10C86: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/print_letter_redirect.asm:5 JSR PRINT_LETTER
    case 0xC10C88: cpu.execute_instruction<0x20>(0x000CB6, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_letter_redirect.asm:6 END_C_FUNCTION
    case 0xC10C8B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::us
