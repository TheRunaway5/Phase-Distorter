// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/text/character_select_prompt-jp.asm (source_named).
bool execute_text_character_select_prompt_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/character_select_prompt-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC12EE7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EE9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CC, 2); else cpu.execute_instruction<0x69>(0x00FFCC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    // Overlapping static entry reached from 0xC12EEC.
    case 0xC12EEE: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EEF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/character_select_prompt-jp.asm:24 END_STACK_VARS
    case 0xC12EF0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:25 STX @LOCAL0D
    case 0xC12EF1: cpu.execute_instruction<0x86>(0x000032, 2); return true;
    // src/text/character_select_prompt-jp.asm:25 STX @LOCAL0D
    // Overlapping static entry reached from 0xC12EEE.
    case 0xC12EF2: cpu.execute_instruction<0x32>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:26 STA @LOCAL0C
    case 0xC12EF3: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:26 STA @LOCAL0C
    // Overlapping static entry reached from 0xC12EF2.
    case 0xC12EF4: cpu.execute_instruction<0x30>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EF5: cpu.execute_instruction<0xA5>(0x000046, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12EF4.
    case 0xC12EF6: cpu.execute_instruction<0x46>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EF7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12EF6.
    case 0xC12EF8: cpu.execute_instruction<0x06>(0x0000A5, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EF9: cpu.execute_instruction<0xA5>(0x000048, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    // Overlapping static entry reached from 0xC12EF8.
    case 0xC12EFA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:27 MOVE_INT @PARAM03, @VIRTUAL06
    case 0xC12EFB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12EFD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12EFF: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12F01: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:28 MOVE_INT @VIRTUAL06, @LOCAL0B
    case 0xC12F03: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F05: cpu.execute_instruction<0xA5>(0x000042, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F07: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F09: cpu.execute_instruction<0xA5>(0x000044, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:29 MOVE_INT @PARAM02, @VIRTUAL0A
    case 0xC12F0B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F0D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F0F: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F11: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:30 MOVE_INT @VIRTUAL0A, @LOCAL0A
    case 0xC12F13: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/text/character_select_prompt-jp.asm:31 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC12F15: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/character_select_prompt-jp.asm:32 STA @LOCAL09
    case 0xC12F18: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/character_select_prompt-jp.asm:33 CLC
    case 0xC12F1A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:34 ADC #window_stats::argument_memory
    case 0xC12F1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/character_select_prompt-jp.asm:34 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC12F1B.
    case 0xC12F1D: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/character_select_prompt-jp.asm:35 TAY
    case 0xC12F1E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F1F: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F22: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F24: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:36 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC12F27: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F29: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F2B: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F2D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:37 MOVE_INT @VIRTUAL06, @LOCAL08
    case 0xC12F2F: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/character_select_prompt-jp.asm:38 LDA @LOCAL0C
    case 0xC12F31: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:39 CMP #1
    case 0xC12F33: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/character_select_prompt-jp.asm:39 CMP #1
    // Overlapping static entry reached from 0xC12F33.
    case 0xC12F35: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/character_select_prompt-jp.asm:40 BNEL @UNKNOWN7
    case 0xC12F36: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:40 BNEL @UNKNOWN7
    case 0xC12F38: cpu.execute_instruction<0x4C>(0x003018, 3); return true;
    // src/text/character_select_prompt-jp.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC12F3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/text/character_select_prompt-jp.asm:41 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC12F3B.
    case 0xC12F3D: cpu.execute_instruction<0x9F>(0x08B122, 4); return true;
    // src/text/character_select_prompt-jp.asm:42 JSL UNKNOWN_C20A20
    case 0xC12F3E: cpu.execute_instruction<0x22>(0xC208B1, 4); return true;
    // src/text/character_select_prompt-jp.asm:42 JSL UNKNOWN_C20A20
    // Overlapping static entry reached from 0xC12F3D.
    case 0xC12F41: cpu.execute_instruction<0xC2>(0x0000AD, 2); return true;
    // src/text/character_select_prompt-jp.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12F42: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/character_select_prompt-jp.asm:43 LDA GAME_STATE+game_state::player_controlled_party_count
    // Overlapping static entry reached from 0xC12F41.
    case 0xC12F43: cpu.execute_instruction<0x55>(0x00009B, 2); return true;
    // src/text/character_select_prompt-jp.asm:44 AND #$00FF
    case 0xC12F45: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:44 AND #$00FF
    // Overlapping static entry reached from 0xC12F45.
    case 0xC12F47: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/character_select_prompt-jp.asm:45 CMP #1
    case 0xC12F48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/character_select_prompt-jp.asm:45 CMP #1
    // Overlapping static entry reached from 0xC12F48.
    case 0xC12F4A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt-jp.asm:46 BNE @UNKNOWN1
    case 0xC12F4B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:47 LDX #WINDOW::UNKNOWN33
    case 0xC12F4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000033, 2); else cpu.execute_instruction<0xA2>(0x000033, 3); return true;
    // src/text/character_select_prompt-jp.asm:47 LDX #WINDOW::UNKNOWN33
    // Overlapping static entry reached from 0xC12F4D.
    case 0xC12F4F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt-jp.asm:48 BRA @UNKNOWN2
    case 0xC12F50: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/character_select_prompt-jp.asm:50 CLC
    case 0xC12F52: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:51 ADC #WINDOW::UNKNOWN28
    case 0xC12F53: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000028, 2); else cpu.execute_instruction<0x69>(0x000028, 3); return true;
    // src/text/character_select_prompt-jp.asm:51 ADC #WINDOW::UNKNOWN28
    // Overlapping static entry reached from 0xC12F53.
    case 0xC12F55: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/character_select_prompt-jp.asm:52 TAX
    case 0xC12F56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:53 DEX
    case 0xC12F57: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:55 STX @LOCAL07
    case 0xC12F58: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/character_select_prompt-jp.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12F5A: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/character_select_prompt-jp.asm:56 CREATE_WINDOW_NEAR @LOCAL07
    case 0xC12F5C: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/text/character_select_prompt-jp.asm:57 LDA #0
    case 0xC12F5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:57 LDA #0
    // Overlapping static entry reached from 0xC12F5F.
    case 0xC12F61: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:58 STA @VIRTUAL02
    case 0xC12F62: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:59 BRA @UNKNOWN4
    case 0xC12F64: cpu.execute_instruction<0x80>(0x000075, 2); return true;
    // src/text/character_select_prompt-jp.asm:61 LDA @VIRTUAL02
    case 0xC12F66: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:62 CLC
    case 0xC12F68: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:64 ADC #.LOWORD(GAME_STATE)
    case 0xC12F69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/character_select_prompt-jp.asm:64 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC12F69.
    case 0xC12F6B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:65 CLC
    case 0xC12F6C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:66 ADC #game_state::party_members
    case 0xC12F6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000077, 2); else cpu.execute_instruction<0x69>(0x000077, 3); return true;
    // src/text/character_select_prompt-jp.asm:66 ADC #game_state::party_members
    // Overlapping static entry reached from 0xC12F6D.
    case 0xC12F6F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:70 STA @VIRTUAL04
    case 0xC12F70: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:71 STA @LOCAL06
    case 0xC12F72: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:72 LDX @VIRTUAL04
    case 0xC12F74: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:73 LDA __BSS_START__,X
    case 0xC12F76: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:74 AND #$00FF
    case 0xC12F79: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:74 AND #$00FF
    // Overlapping static entry reached from 0xC12F79.
    case 0xC12F7B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/character_select_prompt-jp.asm:75 JSL GET_PARTY_CHARACTER_NAME
    case 0xC12F7C: cpu.execute_instruction<0x22>(0xC22172, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F80: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F82: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F84: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:76 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12F86: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/character_select_prompt-jp.asm:77 LDX #4
    case 0xC12F88: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/text/character_select_prompt-jp.asm:77 LDX #4
    // Overlapping static entry reached from 0xC12F88.
    case 0xC12F8A: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/character_select_prompt-jp.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC12F8B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/text/character_select_prompt-jp.asm:78 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC12F8B.
    case 0xC12F8D: cpu.execute_instruction<0x9F>(0x8EC322, 4); return true;
    // src/text/character_select_prompt-jp.asm:79 JSL MEMCPY16
    case 0xC12F8E: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/text/character_select_prompt-jp.asm:79 JSL MEMCPY16
    // Overlapping static entry reached from 0xC12F8D.
    case 0xC12F91: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000E2, 2); else cpu.execute_instruction<0xC0>(0x0020E2, 3); return true;
    // src/text/character_select_prompt-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC12F92: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC12F91.
    case 0xC12F93: cpu.execute_instruction<0x20>(0x004E9C, 3); return true;
    // src/text/character_select_prompt-jp.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    case 0xC12F94: cpu.execute_instruction<0x9C>(0x009F4E, 3); return true;
    // src/text/character_select_prompt-jp.asm:81 STZ TEMPORARY_TEXT_BUFFER + .SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC12F93.
    case 0xC12F96: cpu.execute_instruction<0x9F>(0xA920C2, 4); return true;
    // src/text/character_select_prompt-jp.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC12F97: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC12F96.
    case 0xC12F9A: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC12F99.
    case 0xC12F9B: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F9C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F9E: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12F9F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12FA1: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12FA2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/character_select_prompt-jp.asm:83 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC12FA4: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/character_select_prompt-jp.asm:84 REP #PROC_FLAGS::ACCUM8
    case 0xC12FA6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FA8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FAA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FAC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:85 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC12FAE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC12FB0.
    case 0xC12FB2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB3: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    // Overlapping static entry reached from 0xC12FB5.
    case 0xC12FB7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:86 MOVE_INT_CONSTANT NULL, @LOCAL01
    case 0xC12FB8: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/character_select_prompt-jp.asm:87 LDY #0
    case 0xC12FBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:87 LDY #0
    // Overlapping static entry reached from 0xC12FBA.
    case 0xC12FBC: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/character_select_prompt-jp.asm:88 LDA @VIRTUAL02
    case 0xC12FBD: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:89 STA @VIRTUAL04
    case 0xC12FBF: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:90 ASL
    case 0xC12FC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:91 ADC @VIRTUAL04
    case 0xC12FC2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:92 ASL
    case 0xC12FC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:93 TAX
    case 0xC12FC5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:94 STX @LOCAL05
    case 0xC12FC6: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:95 LDA @LOCAL06
    case 0xC12FC8: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:96 STA @VIRTUAL04
    case 0xC12FCA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:97 LDX @VIRTUAL04
    case 0xC12FCC: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:98 LDA __BSS_START__,X
    case 0xC12FCE: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:99 AND #$00FF
    case 0xC12FD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:99 AND #$00FF
    // Overlapping static entry reached from 0xC12FD1.
    case 0xC12FD3: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/character_select_prompt-jp.asm:100 LDX @LOCAL05
    case 0xC12FD4: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:101 JSR UNKNOWN_C1153B
    case 0xC12FD6: cpu.execute_instruction<0x20>(0x001B27, 3); return true;
    // src/text/character_select_prompt-jp.asm:102 INC @VIRTUAL02
    case 0xC12FD9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC12FDB: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/character_select_prompt-jp.asm:105 AND #$00FF
    case 0xC12FDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC12FDE.
    case 0xC12FE0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/character_select_prompt-jp.asm:106 CLC
    case 0xC12FE1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:107 SBC @VIRTUAL02
    case 0xC12FE2: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:816 BVS :+
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FE4: cpu.execute_instruction<0x70>(0x000005, 2); return true;
    // include/macros.asm:817 BMI :++
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FE6: cpu.execute_instruction<0x30>(0x000008, 2); return true;
    // include/macros.asm:818 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FE8: cpu.execute_instruction<0x4C>(0x002F66, 3); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FEB: cpu.execute_instruction<0x10>(0x000003, 2); return true;
    // include/macros.asm:820 BPL :+
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    // Overlapping static entry reached from 0xC13021.
    case 0xC12FEC: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    case 0xC12FED: cpu.execute_instruction<0x4C>(0x002F66, 3); return true;
    // include/macros.asm:821 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:108 JUMPGTS @UNKNOWN3
    // Overlapping static entry reached from 0xC12FEC.
    case 0xC12FEE: cpu.execute_instruction<0x66>(0x00002F, 2); return true;
    // src/text/character_select_prompt-jp.asm:109 JSR PRINT_MENU_ITEMS
    case 0xC12FF0: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF3: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF7: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:111 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC12FF9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/character_select_prompt-jp.asm:116 JSR UNKNOWN_C11F5A
    case 0xC12FFB: cpu.execute_instruction<0x20>(0x00267B, 3); return true;
    // src/text/character_select_prompt-jp.asm:117 LDA @LOCAL0D
    case 0xC12FFE: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/text/character_select_prompt-jp.asm:118 JSR SELECTION_MENU
    case 0xC13000: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // src/text/character_select_prompt-jp.asm:119 TAX
    case 0xC13003: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:120 STX @LOCAL06
    case 0xC13004: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:121 JSR UNKNOWN_C11F8A
    case 0xC13006: cpu.execute_instruction<0x20>(0x0026AB, 3); return true;
    // src/text/character_select_prompt-jp.asm:122 LDA @LOCAL07
    case 0xC13009: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:123 JSR CLOSE_WINDOW
    case 0xC1300B: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/text/character_select_prompt-jp.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    case 0xC1300E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000035, 2); else cpu.execute_instruction<0xA9>(0x009F35, 3); return true;
    // src/text/character_select_prompt-jp.asm:124 LDA #.LOWORD(WINDOW_TEXT_ATTRIBUTES_BACKUP)
    // Overlapping static entry reached from 0xC1300E.
    case 0xC13010: cpu.execute_instruction<0x9F>(0x094D22, 4); return true;
    // src/text/character_select_prompt-jp.asm:125 JSL UNKNOWN_C20ABC
    case 0xC13011: cpu.execute_instruction<0x22>(0xC2094D, 4); return true;
    // src/text/character_select_prompt-jp.asm:125 JSL UNKNOWN_C20ABC
    // Overlapping static entry reached from 0xC13010.
    case 0xC13014: cpu.execute_instruction<0xC2>(0x00004C, 2); return true;
    // src/text/character_select_prompt-jp.asm:126 JMP @UNKNOWN44
    case 0xC13015: cpu.execute_instruction<0x4C>(0x0032B7, 3); return true;
    // src/text/character_select_prompt-jp.asm:126 JMP @UNKNOWN44
    // Overlapping static entry reached from 0xC13014.
    case 0xC13016: cpu.execute_instruction<0xB7>(0x000032, 2); return true;
    // src/text/character_select_prompt-jp.asm:128 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC13018: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/text/character_select_prompt-jp.asm:129 CMP #.LOWORD(-1)
    case 0xC1301B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt-jp.asm:129 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1301B.
    case 0xC1301D: cpu.execute_instruction<0xFF>(0xA507F0, 4); return true;
    // src/text/character_select_prompt-jp.asm:130 BEQ @UNKNOWN8
    case 0xC1301E: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/character_select_prompt-jp.asm:131 LDA @LOCAL0C
    case 0xC13020: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:131 LDA @LOCAL0C
    // Overlapping static entry reached from 0xC1301D.
    case 0xC13021: cpu.execute_instruction<0x30>(0x0000C9, 2); return true;
    // src/text/character_select_prompt-jp.asm:132 CMP #2
    case 0xC13022: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/character_select_prompt-jp.asm:132 CMP #2
    // Overlapping static entry reached from 0xC13021.
    case 0xC13023: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/character_select_prompt-jp.asm:132 CMP #2
    // Overlapping static entry reached from 0xC13022.
    case 0xC13024: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt-jp.asm:133 BNE @UNKNOWN9
    case 0xC13025: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:135 LDX #0
    case 0xC13027: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:135 LDX #0
    // Overlapping static entry reached from 0xC13027.
    case 0xC13029: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt-jp.asm:136 BRA @UNKNOWN10
    case 0xC1302A: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt-jp.asm:138 LDX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC1302C: cpu.execute_instruction<0xAE>(0x008D08, 3); return true;
    // src/text/character_select_prompt-jp.asm:140 STX @VIRTUAL04
    case 0xC1302F: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13031: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13031.
    case 0xC13033: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13034: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13036: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13036.
    case 0xC13038: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:141 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13039: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1303B: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1303D: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC1303F: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13041: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:142 CMP32 @VIRTUAL0A, @VIRTUAL06
    case 0xC13043: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/text/character_select_prompt-jp.asm:143 BEQ @UNKNOWN12
    case 0xC13045: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/text/character_select_prompt-jp.asm:145 LDA @VIRTUAL04
    case 0xC13047: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:146 CLC
    case 0xC13049: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:147 ADC #.LOWORD(GAME_STATE)
    case 0xC1304A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/character_select_prompt-jp.asm:147 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1304A.
    case 0xC1304C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:148 TAX
    case 0xC1304D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:149 LDA a:game_state::party_members,X
    case 0xC1304E: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/character_select_prompt-jp.asm:154 AND #$00FF
    case 0xC13051: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:154 AND #$00FF
    // Overlapping static entry reached from 0xC13051.
    case 0xC13053: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/character_select_prompt-jp.asm:155 PHA
    case 0xC13054: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC13055: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC13057: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1305A: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:156 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1305C: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/text/character_select_prompt-jp.asm:157 PLA
    case 0xC1305F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:158 JSL UNKNOWN_C09279
    case 0xC13060: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/text/character_select_prompt-jp.asm:160 STZ PAGINATION_ANIMATION_FRAME
    case 0xC13064: cpu.execute_instruction<0x9C>(0x0061F4, 3); return true;
    // src/text/character_select_prompt-jp.asm:161 LDA #10
    case 0xC13067: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/character_select_prompt-jp.asm:161 LDA #10
    // Overlapping static entry reached from 0xC13067.
    case 0xC13069: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:162 STA @VIRTUAL02
    case 0xC1306A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:163 STA @LOCAL07
    case 0xC1306C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:165 LDA @LOCAL0C
    case 0xC1306E: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:166 BNE @UNKNOWN14
    case 0xC13070: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:167 LDA @VIRTUAL04
    case 0xC13072: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:168 JSR UNKNOWN_C43573
    case 0xC13074: cpu.execute_instruction<0x20>(0x000C40, 3); return true;
    // src/text/character_select_prompt-jp.asm:170 JSR CLEAR_INSTANT_PRINTING
    case 0xC13077: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/character_select_prompt-jp.asm:171 JSL WINDOW_TICK
    case 0xC1307A: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/character_select_prompt-jp.asm:172 LDA @VIRTUAL04
    case 0xC1307E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:173 STA @LOCAL04
    case 0xC13080: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/character_select_prompt-jp.asm:174 LDA PAGINATION_WINDOW
    case 0xC13082: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/text/character_select_prompt-jp.asm:175 CMP #.LOWORD(-1)
    case 0xC13085: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt-jp.asm:175 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13085.
    case 0xC13087: cpu.execute_instruction<0xFF>(0xAD1AF0, 4); return true;
    // src/text/character_select_prompt-jp.asm:176 BEQ @UNKNOWN15
    case 0xC13088: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/text/character_select_prompt-jp.asm:177 LDA PAGINATION_WINDOW
    case 0xC1308A: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/text/character_select_prompt-jp.asm:177 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC13087.
    case 0xC1308B: cpu.execute_instruction<0xF2>(0x000061, 2); return true;
    // src/text/character_select_prompt-jp.asm:178 ASL
    case 0xC1308D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:179 TAX
    case 0xC1308E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:180 LDA OPEN_WINDOW_TABLE,X
    case 0xC1308F: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/character_select_prompt-jp.asm:181 CMP #.LOWORD(-1)
    case 0xC13092: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt-jp.asm:181 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC13092.
    case 0xC13094: cpu.execute_instruction<0xFF>(0xA00DF0, 4); return true;
    // src/text/character_select_prompt-jp.asm:182 BEQ @UNKNOWN15
    case 0xC13095: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/text/character_select_prompt-jp.asm:183 LDY #.SIZEOF(window_stats)
    case 0xC13097: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/character_select_prompt-jp.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC13094.
    case 0xC13098: cpu.execute_instruction<0x4C>(0x002200, 3); return true;
    // src/text/character_select_prompt-jp.asm:183 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC13097.
    case 0xC13099: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/character_select_prompt-jp.asm:184 JSL MULT168
    case 0xC1309A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/character_select_prompt-jp.asm:185 CLC
    case 0xC1309E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:186 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1309F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/character_select_prompt-jp.asm:186 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1309F.
    case 0xC130A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x001885, 3); return true;
    // src/text/character_select_prompt-jp.asm:187 STA @LOCAL03
    case 0xC130A2: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/character_select_prompt-jp.asm:187 STA @LOCAL03
    // Overlapping static entry reached from 0xC130A1.
    case 0xC130A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:189 LDA PAGINATION_WINDOW
    case 0xC130A4: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/text/character_select_prompt-jp.asm:190 CMP #.LOWORD(-1)
    case 0xC130A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt-jp.asm:190 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC130A7.
    case 0xC130A9: cpu.execute_instruction<0xFF>(0xAD62F0, 4); return true;
    // src/text/character_select_prompt-jp.asm:191 BEQ @UNKNOWN16
    case 0xC130AA: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/text/character_select_prompt-jp.asm:192 LDA PAGINATION_WINDOW
    case 0xC130AC: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/text/character_select_prompt-jp.asm:192 LDA PAGINATION_WINDOW
    // Overlapping static entry reached from 0xC130A9.
    case 0xC130AD: cpu.execute_instruction<0xF2>(0x000061, 2); return true;
    // src/text/character_select_prompt-jp.asm:193 ASL
    case 0xC130AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:194 TAX
    case 0xC130B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:195 LDA OPEN_WINDOW_TABLE,X
    case 0xC130B1: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/character_select_prompt-jp.asm:196 CMP #.LOWORD(-1)
    case 0xC130B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt-jp.asm:196 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC130B4.
    case 0xC130B6: cpu.execute_instruction<0xFF>(0xA955F0, 4); return true;
    // src/text/character_select_prompt-jp.asm:197 BEQ @UNKNOWN16
    case 0xC130B7: cpu.execute_instruction<0xF0>(0x000055, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x00E41E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130B6.
    case 0xC130BA: cpu.execute_instruction<0x1E>(0x0085E4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130B9.
    case 0xC130BB: cpu.execute_instruction<0xE4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130BB.
    case 0xC130BD: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130BD.
    case 0xC130BF: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC130BE.
    case 0xC130C0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/character_select_prompt-jp.asm:198 LOADPTR UNKNOWN_C3E41C_PTR_TABLE, @VIRTUAL06
    case 0xC130C1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/character_select_prompt-jp.asm:199 LDA PAGINATION_ANIMATION_FRAME
    case 0xC130C3: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/text/character_select_prompt-jp.asm:200 ASL
    case 0xC130C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:201 ASL
    case 0xC130C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:202 CLC
    case 0xC130C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:203 ADC @VIRTUAL06
    case 0xC130C9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/character_select_prompt-jp.asm:204 STA @VIRTUAL06
    case 0xC130CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC130CD.
    case 0xC130CF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:205 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC130D7: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130D9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:206 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC130DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/character_select_prompt-jp.asm:207 LDY #window_stats::window_y
    case 0xC130E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/character_select_prompt-jp.asm:207 LDY #window_stats::window_y
    // Overlapping static entry reached from 0xC130E1.
    case 0xC130E3: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/character_select_prompt-jp.asm:208 LDA (@LOCAL03),Y
    case 0xC130E4: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // include/macros.asm:656 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:657 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:658 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:659 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:660 ASL
    // Macro caller: src/text/character_select_prompt-jp.asm:209 OPTIMIZED_MULT @VIRTUAL04, 32
    case 0xC130EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:210 STA @VIRTUAL02
    case 0xC130EB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:211 LDY #window_stats::window_x
    case 0xC130ED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000006, 2); else cpu.execute_instruction<0xA0>(0x000006, 3); return true;
    // src/text/character_select_prompt-jp.asm:211 LDY #window_stats::window_x
    // Overlapping static entry reached from 0xC130ED.
    case 0xC130EF: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/character_select_prompt-jp.asm:212 LDA (@LOCAL03),Y
    case 0xC130F0: cpu.execute_instruction<0xB1>(0x000018, 2); return true;
    // src/text/character_select_prompt-jp.asm:213 LDY #window_stats::width
    case 0xC130F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/character_select_prompt-jp.asm:213 LDY #window_stats::width
    // Overlapping static entry reached from 0xC130F2.
    case 0xC130F4: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/character_select_prompt-jp.asm:214 CLC
    case 0xC130F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:215 ADC (@LOCAL03),Y
    case 0xC130F6: cpu.execute_instruction<0x71>(0x000018, 2); return true;
    // src/text/character_select_prompt-jp.asm:216 DEC
    case 0xC130F8: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:217 DEC
    case 0xC130F9: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:218 DEC
    case 0xC130FA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:219 CLC
    case 0xC130FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:220 ADC @VIRTUAL02
    case 0xC130FC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:221 CLC
    case 0xC130FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    case 0xC130FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x007C00, 3); return true;
    // src/text/character_select_prompt-jp.asm:222 ADC #VRAM::TEXT_LAYER_TILEMAP
    // Overlapping static entry reached from 0xC130FF.
    case 0xC13101: cpu.execute_instruction<0x7C>(0x00A2A8, 3); return true;
    // src/text/character_select_prompt-jp.asm:223 TAY
    case 0xC13102: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:224 LDX #8
    case 0xC13103: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000008, 2); else cpu.execute_instruction<0xA2>(0x000008, 3); return true;
    // src/text/character_select_prompt-jp.asm:224 LDX #8
    // Overlapping static entry reached from 0xC13103.
    case 0xC13105: cpu.execute_instruction<0x00>(0x0000E2, 2); return true;
    // src/text/character_select_prompt-jp.asm:225 SEP #PROC_FLAGS::ACCUM8
    case 0xC13106: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:226 LDA #0
    case 0xC13108: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // src/text/character_select_prompt-jp.asm:227 JSL PREPARE_VRAM_COPY
    case 0xC1310A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // src/text/character_select_prompt-jp.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC13108.
    case 0xC1310B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // src/text/character_select_prompt-jp.asm:227 JSL PREPARE_VRAM_COPY
    // Overlapping static entry reached from 0xC1310B.
    case 0xC1310D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // src/text/character_select_prompt-jp.asm:230 LDA #0
    case 0xC1310E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:230 LDA #0
    // Overlapping static entry reached from 0xC1310D.
    case 0xC1310F: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/character_select_prompt-jp.asm:230 LDA #0
    // Overlapping static entry reached from 0xC1310E.
    case 0xC13110: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:231 STA @LOCAL06
    case 0xC13111: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:232 JMP @UNKNOWN28
    case 0xC13113: cpu.execute_instruction<0x4C>(0x0031B4, 3); return true;
    // src/text/character_select_prompt-jp.asm:234 JSL UNKNOWN_C12E42
    case 0xC13116: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/text/character_select_prompt-jp.asm:235 LDA PAD_PRESS
    case 0xC1311A: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt-jp.asm:236 AND #PAD::LEFT
    case 0xC1311D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/character_select_prompt-jp.asm:236 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC1311D.
    case 0xC1311F: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/character_select_prompt-jp.asm:237 BEQ @UNKNOWN20
    case 0xC13120: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:238 LDX @LOCAL04
    case 0xC13122: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt-jp.asm:239 DEX
    case 0xC13124: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:240 STX @LOCAL06
    case 0xC13125: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:241 LDA @LOCAL0C
    case 0xC13127: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:242 BEQ @UNKNOWN18
    case 0xC13129: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:243 LDY #SFX::CURSOR2
    case 0xC1312B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/character_select_prompt-jp.asm:243 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1312B.
    case 0xC1312D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt-jp.asm:244 BRA @UNKNOWN19
    case 0xC1312E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt-jp.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC13130: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/text/character_select_prompt-jp.asm:246 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13130.
    case 0xC13132: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/character_select_prompt-jp.asm:248 STY @LOCAL05
    case 0xC13133: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:249 LDA #2
    case 0xC13135: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/character_select_prompt-jp.asm:249 LDA #2
    // Overlapping static entry reached from 0xC13135.
    case 0xC13137: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/character_select_prompt-jp.asm:250 STA PAGINATION_ANIMATION_FRAME
    case 0xC13138: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // src/text/character_select_prompt-jp.asm:251 JMP @UNKNOWN32
    case 0xC1313B: cpu.execute_instruction<0x4C>(0x0031DB, 3); return true;
    // src/text/character_select_prompt-jp.asm:253 LDA PAD_PRESS
    case 0xC1313E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt-jp.asm:254 AND #PAD::RIGHT
    case 0xC13141: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/character_select_prompt-jp.asm:254 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC13141.
    case 0xC13143: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/character_select_prompt-jp.asm:255 BEQ @UNKNOWN23
    case 0xC13144: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:255 BEQ @UNKNOWN23
    // Overlapping static entry reached from 0xC13143.
    case 0xC13145: cpu.execute_instruction<0x1C>(0x001AA6, 3); return true;
    // src/text/character_select_prompt-jp.asm:256 LDX @LOCAL04
    case 0xC13146: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/text/character_select_prompt-jp.asm:257 INX
    case 0xC13148: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:258 STX @LOCAL06
    case 0xC13149: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:259 LDA @LOCAL0C
    case 0xC1314B: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:260 BEQ @UNKNOWN21
    case 0xC1314D: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:261 LDY #SFX::CURSOR2
    case 0xC1314F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/character_select_prompt-jp.asm:261 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1314F.
    case 0xC13151: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt-jp.asm:262 BRA @UNKNOWN22
    case 0xC13152: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt-jp.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC13154: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/text/character_select_prompt-jp.asm:264 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC13154.
    case 0xC13156: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/character_select_prompt-jp.asm:266 STY @LOCAL05
    case 0xC13157: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:267 LDA #3
    case 0xC13159: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/character_select_prompt-jp.asm:267 LDA #3
    // Overlapping static entry reached from 0xC13159.
    case 0xC1315B: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/character_select_prompt-jp.asm:268 STA PAGINATION_ANIMATION_FRAME
    case 0xC1315C: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // src/text/character_select_prompt-jp.asm:269 JMP @UNKNOWN32
    case 0xC1315F: cpu.execute_instruction<0x4C>(0x0031DB, 3); return true;
    // src/text/character_select_prompt-jp.asm:271 LDA PAD_PRESS
    case 0xC13162: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt-jp.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC13165: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/character_select_prompt-jp.asm:272 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC13165.
    case 0xC13167: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/character_select_prompt-jp.asm:273 BEQ @UNKNOWN24
    case 0xC13168: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/text/character_select_prompt-jp.asm:274 LDA @VIRTUAL04
    case 0xC1316A: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:275 CLC
    case 0xC1316C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:276 ADC #.LOWORD(GAME_STATE)
    case 0xC1316D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/character_select_prompt-jp.asm:276 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC1316D.
    case 0xC1316F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:277 TAX
    case 0xC13170: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:278 LDA a:game_state::party_members,X
    case 0xC13171: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/character_select_prompt-jp.asm:279 AND #$00FF
    case 0xC13174: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:279 AND #$00FF
    // Overlapping static entry reached from 0xC13174.
    case 0xC13176: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/character_select_prompt-jp.asm:280 TAX
    case 0xC13177: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:281 STX @LOCAL06
    case 0xC13178: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:282 LDA #SFX::CURSOR1
    case 0xC1317A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/character_select_prompt-jp.asm:282 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC1317A.
    case 0xC1317C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/character_select_prompt-jp.asm:283 JSL PLAY_SOUND
    case 0xC1317D: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/character_select_prompt-jp.asm:284 JMP @UNKNOWN44
    case 0xC13181: cpu.execute_instruction<0x4C>(0x0032B7, 3); return true;
    // src/text/character_select_prompt-jp.asm:286 LDA PAD_PRESS
    case 0xC13184: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/character_select_prompt-jp.asm:287 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC13187: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/character_select_prompt-jp.asm:287 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC13187.
    case 0xC13189: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0023F0, 3); return true;
    // src/text/character_select_prompt-jp.asm:288 BEQ @UNKNOWN27
    case 0xC1318A: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/text/character_select_prompt-jp.asm:288 BEQ @UNKNOWN27
    // Overlapping static entry reached from 0xC13189.
    case 0xC1318B: cpu.execute_instruction<0x23>(0x0000A5, 2); return true;
    // src/text/character_select_prompt-jp.asm:289 LDA @LOCAL0D
    case 0xC1318C: cpu.execute_instruction<0xA5>(0x000032, 2); return true;
    // src/text/character_select_prompt-jp.asm:289 LDA @LOCAL0D
    // Overlapping static entry reached from 0xC1318B.
    case 0xC1318D: cpu.execute_instruction<0x32>(0x0000C9, 2); return true;
    // src/text/character_select_prompt-jp.asm:290 CMP #1
    case 0xC1318E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/character_select_prompt-jp.asm:290 CMP #1
    // Overlapping static entry reached from 0xC1318D.
    case 0xC1318F: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/character_select_prompt-jp.asm:290 CMP #1
    // Overlapping static entry reached from 0xC1318E.
    case 0xC13190: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt-jp.asm:291 BNE @UNKNOWN27
    case 0xC13191: cpu.execute_instruction<0xD0>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:292 LDX #0
    case 0xC13193: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:292 LDX #0
    // Overlapping static entry reached from 0xC13193.
    case 0xC13195: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/character_select_prompt-jp.asm:293 STX @LOCAL06
    case 0xC13196: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:294 LDA @LOCAL0C
    case 0xC13198: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/text/character_select_prompt-jp.asm:295 BEQ @UNKNOWN25
    case 0xC1319A: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:296 LDY #SFX::CURSOR2
    case 0xC1319C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/text/character_select_prompt-jp.asm:296 LDY #SFX::CURSOR2
    // Overlapping static entry reached from 0xC1319C.
    case 0xC1319E: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt-jp.asm:297 BRA @UNKNOWN26
    case 0xC1319F: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt-jp.asm:299 LDY #SFX::MENU_OPEN_CLOSE
    case 0xC131A1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x00001B, 3); return true;
    // src/text/character_select_prompt-jp.asm:299 LDY #SFX::MENU_OPEN_CLOSE
    // Overlapping static entry reached from 0xC131A1.
    case 0xC131A3: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/character_select_prompt-jp.asm:301 TYA
    case 0xC131A4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:302 JSL PLAY_SOUND
    case 0xC131A5: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/character_select_prompt-jp.asm:303 JSR UNKNOWN_C3E6F8
    case 0xC131A9: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/text/character_select_prompt-jp.asm:304 JMP @UNKNOWN44
    case 0xC131AC: cpu.execute_instruction<0x4C>(0x0032B7, 3); return true;
    // src/text/character_select_prompt-jp.asm:306 LDA @LOCAL06
    case 0xC131AF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:307 INC
    case 0xC131B1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:308 STA @LOCAL06
    case 0xC131B2: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:310 LDX @LOCAL07
    case 0xC131B4: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:311 STX @VIRTUAL02
    case 0xC131B6: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:312 CMP @VIRTUAL02
    case 0xC131B8: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/text/character_select_prompt-jp.asm:313 BCCL @UNKNOWN17
    case 0xC131BA: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/text/character_select_prompt-jp.asm:313 BCCL @UNKNOWN17
    case 0xC131BC: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/text/character_select_prompt-jp.asm:313 BCCL @UNKNOWN17
    case 0xC131BE: cpu.execute_instruction<0x4C>(0x003116, 3); return true;
    // src/text/character_select_prompt-jp.asm:314 LDA PAGINATION_ANIMATION_FRAME
    case 0xC131C1: cpu.execute_instruction<0xAD>(0x0061F4, 3); return true;
    // src/text/character_select_prompt-jp.asm:315 BNE @UNKNOWN30
    case 0xC131C4: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/character_select_prompt-jp.asm:316 LDX #1
    case 0xC131C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/character_select_prompt-jp.asm:316 LDX #1
    // Overlapping static entry reached from 0xC131C6.
    case 0xC131C8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/character_select_prompt-jp.asm:317 BRA @UNKNOWN31
    case 0xC131C9: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/character_select_prompt-jp.asm:319 LDX #0
    case 0xC131CB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:319 LDX #0
    // Overlapping static entry reached from 0xC131CB.
    case 0xC131CD: cpu.execute_instruction<0x00>(0x00008E, 2); return true;
    // src/text/character_select_prompt-jp.asm:321 STX PAGINATION_ANIMATION_FRAME
    case 0xC131CE: cpu.execute_instruction<0x8E>(0x0061F4, 3); return true;
    // src/text/character_select_prompt-jp.asm:322 LDA #10
    case 0xC131D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/text/character_select_prompt-jp.asm:322 LDA #10
    // Overlapping static entry reached from 0xC131D1.
    case 0xC131D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:323 STA @VIRTUAL02
    case 0xC131D4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:324 STA @LOCAL07
    case 0xC131D6: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:325 JMP @UNKNOWN15
    case 0xC131D8: cpu.execute_instruction<0x4C>(0x0030A4, 3); return true;
    // src/text/character_select_prompt-jp.asm:327 TXA
    case 0xC131DB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:328 SEC
    case 0xC131DC: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:329 SBC @VIRTUAL04
    case 0xC131DD: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:330 STA @VIRTUAL02
    case 0xC131DF: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:331 STA @LOCAL02
    case 0xC131E1: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/character_select_prompt-jp.asm:333 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC131E3: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/character_select_prompt-jp.asm:334 AND #$00FF
    case 0xC131E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:334 AND #$00FF
    // Overlapping static entry reached from 0xC131E6.
    case 0xC131E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:335 STA @LOCAL07
    case 0xC131E9: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:336 STX @VIRTUAL02
    case 0xC131EB: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:337 CLC
    case 0xC131ED: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:338 SBC @VIRTUAL02
    case 0xC131EE: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F0: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F2: cpu.execute_instruction<0x10>(0x00000B, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F4: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/text/character_select_prompt-jp.asm:339 BRANCHGTS @UNKNOWN36
    case 0xC131F6: cpu.execute_instruction<0x30>(0x000007, 2); return true;
    // src/text/character_select_prompt-jp.asm:340 LDX #0
    case 0xC131F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:340 LDX #0
    // Overlapping static entry reached from 0xC131F8.
    case 0xC131FA: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/character_select_prompt-jp.asm:341 STX @LOCAL06
    case 0xC131FB: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:342 BRA @UNKNOWN39
    case 0xC131FD: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/character_select_prompt-jp.asm:344 STX @VIRTUAL02
    case 0xC131FF: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:345 LDA #0
    case 0xC13201: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:345 LDA #0
    // Overlapping static entry reached from 0xC13201.
    case 0xC13203: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/character_select_prompt-jp.asm:346 CLC
    case 0xC13204: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:347 SBC @VIRTUAL02
    case 0xC13205: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:807 BVC :+
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC13207: cpu.execute_instruction<0x50>(0x000004, 2); return true;
    // include/macros.asm:808 BPL dest
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC13209: cpu.execute_instruction<0x10>(0x00000A, 2); return true;
    // include/macros.asm:809 BRA :++
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC1320B: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:811 BMI dest
    // Macro caller: src/text/character_select_prompt-jp.asm:348 BRANCHLTEQS @UNKNOWN39
    case 0xC1320D: cpu.execute_instruction<0x30>(0x000006, 2); return true;
    // src/text/character_select_prompt-jp.asm:349 LDA @LOCAL07
    case 0xC1320F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:350 TAX
    case 0xC13211: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:351 DEX
    case 0xC13212: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:352 STX @LOCAL06
    case 0xC13213: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13215: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC13215.
    case 0xC13217: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC13218: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1321A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1321A.
    case 0xC1321C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:354 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1321D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC1321F: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC13221: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC13223: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:355 MOVE_INT @LOCAL0B, @VIRTUAL06
    case 0xC13225: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/character_select_prompt-jp.asm:356 CMP @VIRTUAL0A+2
    case 0xC13227: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // src/text/character_select_prompt-jp.asm:357 BNE @UNKNOWN40
    case 0xC13229: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:358 LDA @VIRTUAL06
    case 0xC1322B: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/character_select_prompt-jp.asm:359 CMP @VIRTUAL0A
    case 0xC1322D: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/character_select_prompt-jp.asm:361 BEQ @UNKNOWN41
    case 0xC1322F: cpu.execute_instruction<0xF0>(0x000031, 2); return true;
    // src/text/character_select_prompt-jp.asm:362 TXA
    case 0xC13231: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:363 CLC
    case 0xC13232: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:364 ADC #.LOWORD(GAME_STATE)
    case 0xC13233: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/character_select_prompt-jp.asm:364 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC13233.
    case 0xC13235: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:365 TAX
    case 0xC13236: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:366 LDA a:game_state::party_members,X
    case 0xC13237: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/character_select_prompt-jp.asm:367 AND #$00FF
    case 0xC1323A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:367 AND #$00FF
    // Overlapping static entry reached from 0xC1323A.
    case 0xC1323C: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/character_select_prompt-jp.asm:368 PHA
    case 0xC1323D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC1323E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC13240: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC13243: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:369 MOVE_INT @VIRTUAL06, TEMP_FUNCTION_POINTER
    case 0xC13245: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/text/character_select_prompt-jp.asm:370 PLA
    case 0xC13248: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:371 JSL UNKNOWN_C09279
    case 0xC13249: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/text/character_select_prompt-jp.asm:372 CMP #0
    case 0xC1324D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/character_select_prompt-jp.asm:372 CMP #0
    // Overlapping static entry reached from 0xC1324D.
    case 0xC1324F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/character_select_prompt-jp.asm:373 BNE @UNKNOWN41
    case 0xC13250: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/text/character_select_prompt-jp.asm:374 LDA @LOCAL02
    case 0xC13252: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/character_select_prompt-jp.asm:375 STA @VIRTUAL02
    case 0xC13254: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:376 LDX @LOCAL06
    case 0xC13256: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:377 TXA
    case 0xC13258: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:378 CLC
    case 0xC13259: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:379 ADC @VIRTUAL02
    case 0xC1325A: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:380 TAX
    case 0xC1325C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:381 STX @LOCAL06
    case 0xC1325D: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:382 JMP @UNKNOWN33
    case 0xC1325F: cpu.execute_instruction<0x4C>(0x0031E3, 3); return true;
    // src/text/character_select_prompt-jp.asm:384 LDX @LOCAL06
    case 0xC13262: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:385 TXA
    case 0xC13264: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:386 CMP @VIRTUAL04
    case 0xC13265: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:387 BEQ @UNKNOWN43
    case 0xC13267: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/text/character_select_prompt-jp.asm:388 LDY @LOCAL05
    case 0xC13269: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/text/character_select_prompt-jp.asm:389 TYA
    case 0xC1326B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:390 JSL PLAY_SOUND
    case 0xC1326C: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/character_select_prompt-jp.asm:391 LDX @LOCAL06
    case 0xC13270: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:392 STX @VIRTUAL04
    case 0xC13272: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13274: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13274.
    case 0xC13276: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13277: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC13279: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC13279.
    case 0xC1327B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:393 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1327C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC1327E: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC13280: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC13282: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:394 MOVE_INT @LOCAL0A, @VIRTUAL0A
    case 0xC13284: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/character_select_prompt-jp.asm:395 CMP @VIRTUAL06+2
    case 0xC13286: cpu.execute_instruction<0xC5>(0x000008, 2); return true;
    // src/text/character_select_prompt-jp.asm:396 BNE @UNKNOWN42
    case 0xC13288: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:397 LDA @VIRTUAL0A
    case 0xC1328A: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // src/text/character_select_prompt-jp.asm:398 CMP @VIRTUAL06
    case 0xC1328C: cpu.execute_instruction<0xC5>(0x000006, 2); return true;
    // src/text/character_select_prompt-jp.asm:400 BEQ @UNKNOWN43
    case 0xC1328E: cpu.execute_instruction<0xF0>(0x00001D, 2); return true;
    // src/text/character_select_prompt-jp.asm:401 LDA @VIRTUAL04
    case 0xC13290: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/character_select_prompt-jp.asm:402 CLC
    case 0xC13292: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:403 ADC #.LOWORD(GAME_STATE)
    case 0xC13293: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/character_select_prompt-jp.asm:403 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC13293.
    case 0xC13295: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:404 TAX
    case 0xC13296: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:405 LDA a:game_state::party_members,X
    case 0xC13297: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/character_select_prompt-jp.asm:406 AND #$00FF
    case 0xC1329A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/character_select_prompt-jp.asm:406 AND #$00FF
    // Overlapping static entry reached from 0xC1329A.
    case 0xC1329C: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/text/character_select_prompt-jp.asm:407 PHA
    case 0xC1329D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC1329E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC132A0: cpu.execute_instruction<0x8D>(0x0000BA, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC132A3: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:408 MOVE_INT @VIRTUAL0A, TEMP_FUNCTION_POINTER
    case 0xC132A5: cpu.execute_instruction<0x8D>(0x0000BC, 3); return true;
    // src/text/character_select_prompt-jp.asm:409 PLA
    case 0xC132A8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:410 JSL UNKNOWN_C09279
    case 0xC132A9: cpu.execute_instruction<0x22>(0xC0925B, 4); return true;
    // src/text/character_select_prompt-jp.asm:412 LDA #4
    case 0xC132AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/text/character_select_prompt-jp.asm:412 LDA #4
    // Overlapping static entry reached from 0xC132AD.
    case 0xC132AF: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/character_select_prompt-jp.asm:413 STA @VIRTUAL02
    case 0xC132B0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/character_select_prompt-jp.asm:414 STA @LOCAL07
    case 0xC132B2: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/character_select_prompt-jp.asm:415 JMP @UNKNOWN13
    case 0xC132B4: cpu.execute_instruction<0x4C>(0x00306E, 3); return true;
    // src/text/character_select_prompt-jp.asm:417 LDA #.LOWORD(-1)
    case 0xC132B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/character_select_prompt-jp.asm:417 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC132B7.
    case 0xC132B9: cpu.execute_instruction<0xFF>(0x61F48D, 4); return true;
    // src/text/character_select_prompt-jp.asm:418 STA PAGINATION_ANIMATION_FRAME
    case 0xC132BA: cpu.execute_instruction<0x8D>(0x0061F4, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132BD: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132BF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132C1: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/character_select_prompt-jp.asm:419 MOVE_INT @LOCAL08, @VIRTUAL06
    case 0xC132C3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/character_select_prompt-jp.asm:420 LDA @LOCAL09
    case 0xC132C5: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/text/character_select_prompt-jp.asm:421 CLC
    case 0xC132C7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/character_select_prompt-jp.asm:422 ADC #window_stats::argument_memory
    case 0xC132C8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/character_select_prompt-jp.asm:422 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC132C8.
    case 0xC132CA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/character_select_prompt-jp.asm:423 TAY
    case 0xC132CB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132CC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132CE: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132D1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/character_select_prompt-jp.asm:424 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC132D3: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/character_select_prompt-jp.asm:425 LDX @LOCAL06
    case 0xC132D6: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/text/character_select_prompt-jp.asm:426 TXA
    case 0xC132D8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/character_select_prompt-jp.asm:427 END_C_FUNCTION
    case 0xC132D9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/character_select_prompt-jp.asm:427 END_C_FUNCTION
    case 0xC132DA: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/clear_blinking_prompt.asm (source_named).
bool execute_text_clear_blinking_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_blinking_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC10038: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/clear_blinking_prompt.asm:5 STZ BLINKING_TRIANGLE_FLAG
    case 0xC1003A: cpu.execute_instruction<0x9C>(0x009945, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/clear_blinking_prompt.asm:6 END_C_FUNCTION
    case 0xC1003D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/clear_instant_printing.asm (source_named).
bool execute_text_clear_instant_printing_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/clear_instant_printing.asm:4 BEGIN_C_FUNCTION
    case 0xC100ED: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/clear_instant_printing.asm:9 SEP #PROC_FLAGS::ACCUM8
    case 0xC100EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/clear_instant_printing.asm:10 STZ INSTANT_PRINTING
    case 0xC100F1: cpu.execute_instruction<0x9C>(0x00991A, 3); return true;
    // src/text/clear_instant_printing.asm:11 REP #PROC_FLAGS::ACCUM8
    case 0xC100F4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/clear_instant_printing.asm:12 END_C_FUNCTION
    case 0xC100F6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/close_focus_window.asm (source_named).
bool execute_text_close_focus_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_focus_window.asm:3 BEGIN_C_FUNCTION
    case 0xC102A6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/close_focus_window.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC102A8: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/close_focus_window.asm:6 JSR CLOSE_WINDOW
    case 0xC102AB: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/close_focus_window.asm:7 END_C_FUNCTION
    case 0xC102AE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/close_focus_window_redirect.asm (source_named).
bool execute_text_close_focus_window_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_focus_window_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB36: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/close_focus_window_redirect.asm:5 JSR CLOSE_FOCUS_WINDOW
    case 0xC1DB38: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/close_focus_window_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB3B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/close_window.asm (source_named).
bool execute_text_close_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/close_window.asm:4 BEGIN_C_FUNCTION
    case 0xC10141: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10143: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10144: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10145: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10146: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    // Overlapping static entry reached from 0xC10146.
    case 0xC10148: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC10149: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/close_window.asm:15 END_STACK_VARS
    case 0xC1014A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/close_window.asm:16 STA @LOCAL04
    case 0xC1014B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/close_window.asm:16 STA @LOCAL04
    // Overlapping static entry reached from 0xC10148.
    case 0xC1014C: cpu.execute_instruction<0x16>(0x0000C9, 2); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    case 0xC1014D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1014C.
    case 0xC1014E: cpu.execute_instruction<0xFF>(0x03D0FF, 4); return true;
    // src/text/close_window.asm:17 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1014D.
    case 0xC1014F: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC10150: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    case 0xC10152: cpu.execute_instruction<0x4C>(0x0002A4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:18 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC1014F.
    case 0xC10153: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/close_window.asm:19 LDA @LOCAL04
    case 0xC10155: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:20 ASL
    case 0xC10157: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:21 TAX
    case 0xC10158: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:22 LDA OPEN_WINDOW_TABLE,X
    case 0xC10159: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/close_window.asm:23 STA @VIRTUAL04
    case 0xC1015C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    case 0xC1015E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:24 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1015E.
    case 0xC10160: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC10161: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    case 0xC10163: cpu.execute_instruction<0x4C>(0x0002A4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/close_window.asm:25 BEQL @UNKNOWN18
    // Overlapping static entry reached from 0xC10160.
    case 0xC10164: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/close_window.asm:26 LDA CURRENT_FOCUS_WINDOW
    case 0xC10166: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/close_window.asm:27 CMP @LOCAL04
    case 0xC10169: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/text/close_window.asm:28 BNE @UNKNOWN2
    case 0xC1016B: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    case 0xC1016D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:29 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1016D.
    case 0xC1016F: cpu.execute_instruction<0xFF>(0x8C968D, 4); return true;
    // src/text/close_window.asm:30 STA CURRENT_FOCUS_WINDOW
    case 0xC10170: cpu.execute_instruction<0x8D>(0x008C96, 3); return true;
    // src/text/close_window.asm:32 LDA @LOCAL04
    case 0xC10173: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:33 JSR UNKNOWN_C3E7E3
    case 0xC10175: cpu.execute_instruction<0x20>(0x00193C, 3); return true;
    // src/text/close_window.asm:34 LDA @VIRTUAL04
    case 0xC10178: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC1017A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1017A.
    case 0xC1017C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:36 JSL MULT168
    case 0xC1017D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:37 TAX
    case 0xC10181: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:38 LDY WINDOW_STATS + window_stats::next,X
    case 0xC10182: cpu.execute_instruction<0xBC>(0x0089C4, 3); return true;
    // src/text/close_window.asm:39 STY @LOCAL03
    case 0xC10185: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/close_window.asm:40 LDA WINDOW_STATS + window_stats::prev,X
    case 0xC10187: cpu.execute_instruction<0xBD>(0x0089C2, 3); return true;
    // src/text/close_window.asm:41 STA @LOCAL02
    case 0xC1018A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    case 0xC1018C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000FF, 2); else cpu.execute_instruction<0xC0>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:42 CPY #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1018C.
    case 0xC1018E: cpu.execute_instruction<0xFF>(0x8D05D0, 4); return true;
    // src/text/close_window.asm:43 BNE @UNKNOWN3
    case 0xC1018F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    case 0xC10191: cpu.execute_instruction<0x8D>(0x008C24, 3); return true;
    // src/text/close_window.asm:44 STA WINDOW_TAIL
    // Overlapping static entry reached from 0xC1018E.
    case 0xC10192: cpu.execute_instruction<0x24>(0x00008C, 2); return true;
    // src/text/close_window.asm:45 BRA @UNKNOWN4
    case 0xC10194: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/close_window.asm:47 TYA
    case 0xC10196: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    case 0xC10197: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:48 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10197.
    case 0xC10199: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:49 JSL MULT168
    case 0xC1019A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:50 TAX
    case 0xC1019E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:51 LDA @LOCAL02
    case 0xC1019F: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:52 STA WINDOW_STATS + window_stats::prev,X
    case 0xC101A1: cpu.execute_instruction<0x9D>(0x0089C2, 3); return true;
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    case 0xC101A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:54 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC101A4.
    case 0xC101A6: cpu.execute_instruction<0xFF>(0xA407D0, 4); return true;
    // src/text/close_window.asm:55 BNE @UNKNOWN5
    case 0xC101A7: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/close_window.asm:56 LDY @LOCAL03
    case 0xC101A9: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:56 LDY @LOCAL03
    // Overlapping static entry reached from 0xC101A6.
    case 0xC101AA: cpu.execute_instruction<0x14>(0x00008C, 2); return true;
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    case 0xC101AB: cpu.execute_instruction<0x8C>(0x008C22, 3); return true;
    // src/text/close_window.asm:57 STY WINDOW_HEAD
    // Overlapping static entry reached from 0xC101AA.
    case 0xC101AC: cpu.execute_instruction<0x22>(0x0E808C, 4); return true;
    // src/text/close_window.asm:58 BRA @UNKNOWN6
    case 0xC101AE: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    case 0xC101B0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:60 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC101B0.
    case 0xC101B2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:61 JSL MULT168
    case 0xC101B3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:62 TAX
    case 0xC101B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:63 LDY @LOCAL03
    case 0xC101B8: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/close_window.asm:64 TYA
    case 0xC101BA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:65 STA WINDOW_STATS + window_stats::next,X
    case 0xC101BB: cpu.execute_instruction<0x9D>(0x0089C4, 3); return true;
    // src/text/close_window.asm:67 LDA @VIRTUAL04
    case 0xC101BE: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    case 0xC101C0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:68 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC101C0.
    case 0xC101C2: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:69 JSL MULT168
    case 0xC101C3: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:70 TAX
    case 0xC101C7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:71 STX @LOCAL01
    case 0xC101C8: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    case 0xC101CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:72 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC101CA.
    case 0xC101CC: cpu.execute_instruction<0xFF>(0x89C69D, 4); return true;
    // src/text/close_window.asm:73 STA WINDOW_STATS + window_stats::id,X
    case 0xC101CD: cpu.execute_instruction<0x9D>(0x0089C6, 3); return true;
    // src/text/close_window.asm:74 LDA @LOCAL04
    case 0xC101D0: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/close_window.asm:75 ASL
    case 0xC101D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:76 TAX
    case 0xC101D3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    case 0xC101D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:77 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC101D4.
    case 0xC101D6: cpu.execute_instruction<0xFF>(0x8C269D, 4); return true;
    // src/text/close_window.asm:78 STA OPEN_WINDOW_TABLE,X
    case 0xC101D7: cpu.execute_instruction<0x9D>(0x008C26, 3); return true;
    // src/text/close_window.asm:79 LDX @LOCAL01
    case 0xC101DA: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/close_window.asm:80 LDA WINDOW_STATS + window_stats::window_x,X
    case 0xC101DC: cpu.execute_instruction<0xBD>(0x0089C8, 3); return true;
    // src/text/close_window.asm:81 ASL
    case 0xC101DF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:82 STA @VIRTUAL02
    case 0xC101E0: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:83 LDA WINDOW_STATS + window_stats::window_y,X
    case 0xC101E2: cpu.execute_instruction<0xBD>(0x0089CA, 3); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/text/close_window.asm:84 OPTIMIZED_MULT @VIRTUAL04, 64
    case 0xC101EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:85 CLC
    case 0xC101EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:86 ADC @VIRTUAL02
    case 0xC101EC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/close_window.asm:87 CLC
    case 0xC101EE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    case 0xC101EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/text/close_window.asm:88 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC101EF.
    case 0xC101F1: cpu.execute_instruction<0x81>(0x0000A8, 2); return true;
    // src/text/close_window.asm:90 TAY
    case 0xC101F2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/close_window.asm:91 STY @LOCAL00
    case 0xC101F3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/close_window.asm:92 LDA #0
    case 0xC101F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/close_window.asm:92 LDA #0
    // Overlapping static entry reached from 0xC101F5.
    case 0xC101F7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/close_window.asm:93 STA @VIRTUAL02
    case 0xC101F8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:94 STA @LOCAL01
    case 0xC101FA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/close_window.asm:140 BRA @UNKNOWN14
    case 0xC101FC: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // src/text/close_window.asm:143 LDX #0
    case 0xC101FE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/close_window.asm:143 LDX #0
    // Overlapping static entry reached from 0xC101FE.
    case 0xC10200: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/close_window.asm:144 STX @LOCAL03
    case 0xC10201: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/close_window.asm:149 BRA @UNKNOWN13
    case 0xC10203: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/text/close_window.asm:152 LDA #0
    case 0xC10205: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/close_window.asm:152 LDA #0
    // Overlapping static entry reached from 0xC10205.
    case 0xC10207: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/close_window.asm:153 LDY @LOCAL00
    case 0xC10208: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/close_window.asm:154 STA __BSS_START__,Y
    case 0xC1020A: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/close_window.asm:155 INY
    case 0xC1020D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:156 INY
    case 0xC1020E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/close_window.asm:157 STY @LOCAL00
    case 0xC1020F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/close_window.asm:158 INX
    case 0xC10211: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/close_window.asm:159 STX @LOCAL03
    case 0xC10212: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/close_window.asm:174 LDA @VIRTUAL04
    case 0xC10214: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    case 0xC10216: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:175 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10216.
    case 0xC10218: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:176 JSL MULT168
    case 0xC10219: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:177 TAX
    case 0xC1021D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:178 LDA WINDOW_STATS + window_stats::width,X
    case 0xC1021E: cpu.execute_instruction<0xBD>(0x0089CC, 3); return true;
    // src/text/close_window.asm:180 STA @LOCAL02
    case 0xC10221: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/close_window.asm:181 STA @VIRTUAL02
    case 0xC10223: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:186 INC @VIRTUAL02
    case 0xC10225: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:187 INC @VIRTUAL02
    case 0xC10227: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:189 LDX @LOCAL03
    case 0xC10229: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/close_window.asm:190 TXA
    case 0xC1022B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/close_window.asm:191 CMP @VIRTUAL02
    case 0xC1022C: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:196 BNE @UNKNOWN12
    case 0xC1022E: cpu.execute_instruction<0xD0>(0x0000D5, 2); return true;
    // src/text/close_window.asm:198 LDA @LOCAL02
    case 0xC10230: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/close_window.asm:199 STA @VIRTUAL02
    case 0xC10232: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:203 LDA #32
    case 0xC10234: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/text/close_window.asm:203 LDA #32
    // Overlapping static entry reached from 0xC10234.
    case 0xC10236: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/close_window.asm:204 SEC
    case 0xC10237: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/close_window.asm:205 SBC @VIRTUAL02
    case 0xC10238: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/close_window.asm:206 DEC
    case 0xC1023A: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:207 DEC
    case 0xC1023B: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:208 ASL
    case 0xC1023C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:210 STA @VIRTUAL02
    case 0xC1023D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:211 LDY @LOCAL00
    case 0xC1023F: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/close_window.asm:212 TYA
    case 0xC10241: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/close_window.asm:220 CLC
    case 0xC10242: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/close_window.asm:221 ADC @VIRTUAL02
    case 0xC10243: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/close_window.asm:223 TAY
    case 0xC10245: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/close_window.asm:224 STY @LOCAL00
    case 0xC10246: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/close_window.asm:225 LDA @LOCAL01
    case 0xC10248: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/close_window.asm:226 STA @VIRTUAL02
    case 0xC1024A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:227 INC @VIRTUAL02
    case 0xC1024C: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:228 LDA @VIRTUAL02
    case 0xC1024E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/close_window.asm:229 STA @LOCAL01
    case 0xC10250: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/close_window.asm:238 LDA @VIRTUAL04
    case 0xC10252: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    case 0xC10254: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:239 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10254.
    case 0xC10256: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:240 JSL MULT168
    case 0xC10257: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:241 TAX
    case 0xC1025B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:243 LDA @VIRTUAL02
    case 0xC1025C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/close_window.asm:244 PHA
    case 0xC1025E: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/close_window.asm:248 LDA WINDOW_STATS + window_stats::height,X
    case 0xC1025F: cpu.execute_instruction<0xBD>(0x0089CE, 3); return true;
    // src/text/close_window.asm:249 STA @VIRTUAL02
    case 0xC10262: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/close_window.asm:250 INC @VIRTUAL02
    case 0xC10264: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:251 INC @VIRTUAL02
    case 0xC10266: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/close_window.asm:253 PLA
    case 0xC10268: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/close_window.asm:258 CMP @VIRTUAL02
    case 0xC10269: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/close_window.asm:259 BNE @UNKNOWN11
    case 0xC1026B: cpu.execute_instruction<0xD0>(0x000091, 2); return true;
    // src/text/close_window.asm:264 LDA WINDOW_STATS + window_stats::unknown59,X
    case 0xC1026D: cpu.execute_instruction<0xBD>(0x0089FD, 3); return true;
    // src/text/close_window.asm:265 AND #$00FF
    case 0xC10270: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:265 AND #$00FF
    // Overlapping static entry reached from 0xC10270.
    case 0xC10272: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/close_window.asm:266 BEQ @UNKNOWN15
    case 0xC10273: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/close_window.asm:267 AND #$00FF
    case 0xC10275: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/close_window.asm:267 AND #$00FF
    // Overlapping static entry reached from 0xC10275.
    case 0xC10277: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/close_window.asm:268 DEC
    case 0xC10278: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/close_window.asm:269 ASL
    case 0xC10279: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/close_window.asm:270 TAX
    case 0xC1027A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    case 0xC1027B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:271 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1027B.
    case 0xC1027D: cpu.execute_instruction<0xFF>(0x8C8E9D, 4); return true;
    // src/text/close_window.asm:272 STA TITLED_WINDOWS,X
    case 0xC1027E: cpu.execute_instruction<0x9D>(0x008C8E, 3); return true;
    // src/text/close_window.asm:274 LDA @VIRTUAL04
    case 0xC10281: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    case 0xC10283: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/close_window.asm:275 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10283.
    case 0xC10285: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/close_window.asm:276 JSL MULT168
    case 0xC10286: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/close_window.asm:277 TAX
    case 0xC1028A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/close_window.asm:278 SEP #PROC_FLAGS::ACCUM8
    case 0xC1028B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/close_window.asm:279 STZ WINDOW_STATS + window_stats::unknown59,X
    case 0xC1028D: cpu.execute_instruction<0x9E>(0x0089FD, 3); return true;
    // src/text/close_window.asm:280 LDA #1
    case 0xC10290: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    case 0xC10292: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10290.
    case 0xC10293: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/close_window.asm:281 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10293.
    case 0xC10294: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/text/close_window.asm:282 REP #PROC_FLAGS::ACCUM8
    case 0xC10295: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/close_window.asm:283 LDA PAGINATION_WINDOW
    case 0xC10297: cpu.execute_instruction<0xAD>(0x0061F2, 3); return true;
    // src/text/close_window.asm:284 CMP @LOCAL04
    case 0xC1029A: cpu.execute_instruction<0xC5>(0x000016, 2); return true;
    // src/text/close_window.asm:285 BNE @UNKNOWN16
    case 0xC1029C: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    case 0xC1029E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/close_window.asm:286 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1029E.
    case 0xC102A0: cpu.execute_instruction<0xFF>(0x61F28D, 4); return true;
    // src/text/close_window.asm:287 STA PAGINATION_WINDOW
    case 0xC102A1: cpu.execute_instruction<0x8D>(0x0061F2, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC102A4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/close_window.asm:305 END_C_FUNCTION
    case 0xC102A5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/coffee_tea_scene-jp.asm (source_named).
bool execute_text_coffee_tea_scene_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/coffee_tea_scene-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC4723E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47240: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47241: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47242: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47243: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC47243.
    case 0xC47245: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47246: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/coffee_tea_scene-jp.asm:8 END_STACK_VARS
    case 0xC47247: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:9 STA @VIRTUAL02
    case 0xC47248: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:9 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC47245.
    case 0xC47249: cpu.execute_instruction<0x02>(0x0000A0, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:10 LDY #0
    case 0xC4724A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:10 LDY #0
    // Overlapping static entry reached from 0xC4724A.
    case 0xC4724C: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:11 LDX #1
    case 0xC4724D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:11 LDX #1
    // Overlapping static entry reached from 0xC4724D.
    case 0xC4724F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:12 TXA
    case 0xC47250: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:13 JSL FADE_OUT_WITH_MOSAIC
    case 0xC47251: cpu.execute_instruction<0x22>(0xC0880A, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:14 JSL UNKNOWN_C49A56
    case 0xC47255: cpu.execute_instruction<0x22>(0xC46EA0, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:15 JSL OAM_CLEAR
    case 0xC47259: cpu.execute_instruction<0x22>(0xC088A3, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:16 LDA @VIRTUAL02
    case 0xC4725D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:17 BNE @SELECT_COFFEE_BG1
    case 0xC4725F: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:18 LDX #BATTLEBG_LAYER::COFFEE2
    case 0xC47261: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000E8, 2); else cpu.execute_instruction<0xA2>(0x0000E8, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:18 LDX #BATTLEBG_LAYER::COFFEE2
    // Overlapping static entry reached from 0xC47261.
    case 0xC47263: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:19 BRA @SKIP_COFFEE_BG1
    case 0xC47264: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:21 LDX #BATTLEBG_LAYER::TEA2
    case 0xC47266: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000EA, 2); else cpu.execute_instruction<0xA2>(0x0000EA, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:21 LDX #BATTLEBG_LAYER::TEA2
    // Overlapping static entry reached from 0xC47266.
    case 0xC47268: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:23 LDA @VIRTUAL02
    case 0xC47269: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:24 BNE @SELECT_COFFEE_BG2
    case 0xC4726B: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:25 LDY #BATTLEBG_LAYER::COFFEE1
    case 0xC4726D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E7, 2); else cpu.execute_instruction<0xA0>(0x0000E7, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:25 LDY #BATTLEBG_LAYER::COFFEE1
    // Overlapping static entry reached from 0xC4726D.
    case 0xC4726F: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:26 BRA @SKIP_COFFEE_BG2
    case 0xC47270: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:28 LDY #BATTLEBG_LAYER::TEA1
    case 0xC47272: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000E9, 2); else cpu.execute_instruction<0xA0>(0x0000E9, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:28 LDY #BATTLEBG_LAYER::TEA1
    // Overlapping static entry reached from 0xC47272.
    case 0xC47274: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:30 TYA
    case 0xC47275: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:31 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC47276: cpu.execute_instruction<0x22>(0xC450F4, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:32 LDX #1
    case 0xC4727A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:32 LDX #1
    // Overlapping static entry reached from 0xC4727A.
    case 0xC4727C: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:33 TXA
    case 0xC4727D: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:34 JSL FADE_IN
    case 0xC4727E: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:35 LDA #28
    case 0xC47282: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:35 LDA #28
    // Overlapping static entry reached from 0xC47282.
    case 0xC47284: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:36 STA FLYOVER_SCREEN_OFFSET
    case 0xC47285: cpu.execute_instruction<0x8D>(0x00A133, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:37 LDA #0
    case 0xC47288: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:37 LDA #0
    // Overlapping static entry reached from 0xC47288.
    case 0xC4728A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:38 STA @VIRTUAL04
    case 0xC4728B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:39 LDA @VIRTUAL02
    case 0xC4728D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:40 BNE @SELECT_COFFEE_TEXT
    case 0xC4728F: cpu.execute_instruction<0xD0>(0x00000C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47291: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x001602, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47291.
    case 0xC47293: cpu.execute_instruction<0x16>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47294: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47293.
    case 0xC47295: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47296: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47295.
    case 0xC47297: cpu.execute_instruction<0xE1>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC47296.
    case 0xC47298: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene-jp.asm:41 LOADPTR COFFEE_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC47299: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:42 BRA @SKIP_COFFEE_TEXT
    case 0xC4729B: cpu.execute_instruction<0x80>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC4729D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x001B1C, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC4729D.
    case 0xC4729F: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC472A0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC472A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E1, 2); else cpu.execute_instruction<0xA9>(0x0000E1, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    // Overlapping static entry reached from 0xC472A2.
    case 0xC472A4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/coffee_tea_scene-jp.asm:44 LOADPTR TEA_SEQUENCE_TEXT, @VIRTUAL06
    case 0xC472A5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:47 LDA [@VIRTUAL06]
    case 0xC472A7: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:48 AND #$00FF
    case 0xC472A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:48 AND #$00FF
    // Overlapping static entry reached from 0xC472A9.
    case 0xC472AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:49 STA @LOCAL01
    case 0xC472AC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:50 INC @VIRTUAL06
    case 0xC472AE: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:51 CMP #$00
    case 0xC472B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:51 CMP #$00
    // Overlapping static entry reached from 0xC472B0.
    case 0xC472B2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/coffee_tea_scene-jp.asm:52 BEQL @END_OF_SCRIPT
    case 0xC472B3: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/coffee_tea_scene-jp.asm:52 BEQL @END_OF_SCRIPT
    case 0xC472B5: cpu.execute_instruction<0x4C>(0x007336, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:53 CMP #$09
    case 0xC472B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:53 CMP #$09
    // Overlapping static entry reached from 0xC472B8.
    case 0xC472BA: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:54 BEQ @PARSE_09
    case 0xC472BB: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:55 CMP #$01
    case 0xC472BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:55 CMP #$01
    // Overlapping static entry reached from 0xC472BD.
    case 0xC472BF: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:56 BEQ @PARSE_01
    case 0xC472C0: cpu.execute_instruction<0xF0>(0x00003F, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:57 CMP #$08
    case 0xC472C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:57 CMP #$08
    // Overlapping static entry reached from 0xC472C2.
    case 0xC472C4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:58 BEQ @PARSE_08
    case 0xC472C5: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:59 BRA @PRINT_TEXT
    case 0xC472C7: cpu.execute_instruction<0x80>(0x000059, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:61 LDA @VIRTUAL04
    case 0xC472C9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:62 JSL UNKNOWN_C49D1E
    case 0xC472CB: cpu.execute_instruction<0x22>(0xC471F2, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:63 TAX
    case 0xC472CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:64 STX @LOCAL00
    case 0xC472D0: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:65 LDA #18
    case 0xC472D2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:65 LDA #18
    // Overlapping static entry reached from 0xC472D2.
    case 0xC472D4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:66 JSL UNKNOWN_C49B6E
    case 0xC472D5: cpu.execute_instruction<0x22>(0xC46FB2, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:67 JSL UNKNOWN_C2DB3F
    case 0xC472D9: cpu.execute_instruction<0x22>(0xC2DAB4, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:68 BRA @UNKNOWN9
    case 0xC472DD: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:70 TXA
    case 0xC472DF: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:71 JSL UNKNOWN_C49D1E
    case 0xC472E0: cpu.execute_instruction<0x22>(0xC471F2, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:72 TAX
    case 0xC472E4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:73 STX @LOCAL00
    case 0xC472E5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:74 JSR UNKNOWN_C49A4B
    case 0xC472E7: cpu.execute_instruction<0x20>(0x006E95, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:76 LDX @LOCAL00
    case 0xC472EA: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:77 CPX #4608
    case 0xC472EC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x001200, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:77 CPX #4608
    // Overlapping static entry reached from 0xC472EC.
    case 0xC472EE: cpu.execute_instruction<0x12>(0x000090, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:78 BCC @UNKNOWN8
    case 0xC472EF: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:78 BCC @UNKNOWN8
    // Overlapping static entry reached from 0xC472EE.
    case 0xC472F0: cpu.execute_instruction<0xEE>(0x00388A, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:79 TXA
    case 0xC472F1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:80 SEC
    case 0xC472F2: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:81 SBC #4608
    case 0xC472F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x001200, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:81 SBC #4608
    // Overlapping static entry reached from 0xC472F3.
    case 0xC472F5: cpu.execute_instruction<0x12>(0x000085, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:82 STA @VIRTUAL04
    case 0xC472F6: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:82 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC472F5.
    case 0xC472F7: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:83 LDA #18
    case 0xC472F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:83 LDA #18
    // Overlapping static entry reached from 0xC472F7.
    case 0xC472F9: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:83 LDA #18
    // Overlapping static entry reached from 0xC472F8.
    case 0xC472FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:84 JSL UNKNOWN_C49C56
    case 0xC472FB: cpu.execute_instruction<0x22>(0xC47095, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:85 BRA @SCRIPT_PARSE_BEGIN
    case 0xC472FF: cpu.execute_instruction<0x80>(0x0000A6, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:87 SEP #PROC_FLAGS::ACCUM8
    case 0xC47301: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:88 LDA [@VIRTUAL06]
    case 0xC47303: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:89 REP #PROC_FLAGS::ACCUM8
    case 0xC47305: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:90 INC @VIRTUAL06
    case 0xC47307: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:91 JSL UNKNOWN_C49CA8
    case 0xC47309: cpu.execute_instruction<0x22>(0xC4713D, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:92 BRA @SCRIPT_PARSE_BEGIN
    case 0xC4730D: cpu.execute_instruction<0x80>(0x000098, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:94 LDA [@VIRTUAL06]
    case 0xC4730F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:95 AND #$00FF
    case 0xC47311: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:95 AND #$00FF
    // Overlapping static entry reached from 0xC47311.
    case 0xC47313: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:96 TAY
    case 0xC47314: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:97 INC @VIRTUAL06
    case 0xC47315: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:98 LDX #12
    case 0xC47317: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:98 LDX #12
    // Overlapping static entry reached from 0xC47317.
    case 0xC47319: cpu.execute_instruction<0x00>(0x000098, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:99 TYA
    case 0xC4731A: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:100 JSL UNKNOWN_C49CC3
    case 0xC4731B: cpu.execute_instruction<0x22>(0xC47169, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:101 JMP @SCRIPT_PARSE_BEGIN
    case 0xC4731F: cpu.execute_instruction<0x4C>(0x0072A7, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:103 LDA [@VIRTUAL06]
    case 0xC47322: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:104 AND #$00FF
    case 0xC47324: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:104 AND #$00FF
    // Overlapping static entry reached from 0xC47324.
    case 0xC47326: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:105 TAX
    case 0xC47327: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:106 INC @VIRTUAL06
    case 0xC47328: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:107 LDY #12
    case 0xC4732A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000C, 2); else cpu.execute_instruction<0xA0>(0x00000C, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:107 LDY #12
    // Overlapping static entry reached from 0xC4732A.
    case 0xC4732C: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:108 LDA @LOCAL01
    case 0xC4732D: cpu.execute_instruction<0xA5>(0x000010, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:109 JSL UNKNOWN_C49D16
    case 0xC4732F: cpu.execute_instruction<0x22>(0xC471C9, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:110 JMP @SCRIPT_PARSE_BEGIN
    case 0xC47333: cpu.execute_instruction<0x4C>(0x0072A7, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:112 LDX #1
    case 0xC47336: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:112 LDX #1
    // Overlapping static entry reached from 0xC47336.
    case 0xC47338: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:113 TXA
    case 0xC47339: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:114 JSL FADE_OUT
    case 0xC4733A: cpu.execute_instruction<0x22>(0xC0886C, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:115 BRA @UNKNOWN15
    case 0xC4733E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:117 JSR UNKNOWN_C49A4B
    case 0xC47340: cpu.execute_instruction<0x20>(0x006E95, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:119 LDA FADE_PARAMETERS + fade_parameters::step
    case 0xC47343: cpu.execute_instruction<0xAD>(0x000028, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:120 AND #$00FF
    case 0xC47346: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:120 AND #$00FF
    // Overlapping static entry reached from 0xC47346.
    case 0xC47348: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:121 BNE @UNKNOWN14
    case 0xC47349: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:122 JSL UNKNOWN_C08726
    case 0xC4734B: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:123 JSL RELOAD_MAP
    case 0xC4734F: cpu.execute_instruction<0x22>(0xC01909, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:124 LDY #.LOWORD(BG2_BUFFER)
    case 0xC47353: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000076, 2); else cpu.execute_instruction<0xA0>(0x008176, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:124 LDY #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC47353.
    case 0xC47355: cpu.execute_instruction<0x81>(0x0000A2, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:125 LDX #896
    case 0xC47356: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000080, 2); else cpu.execute_instruction<0xA2>(0x000380, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:125 LDX #896
    // Overlapping static entry reached from 0xC47355.
    case 0xC47357: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:125 LDX #896
    // Overlapping static entry reached from 0xC47356.
    case 0xC47358: cpu.execute_instruction<0x03>(0x000080, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:126 BRA @UNKNOWN17
    case 0xC47359: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:126 BRA @UNKNOWN17
    // Overlapping static entry reached from 0xC47358.
    case 0xC4735A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x0000A9, 2); else cpu.execute_instruction<0x09>(0x0000A9, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:128 LDA #0
    case 0xC4735B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:128 LDA #0
    // Overlapping static entry reached from 0xC47357.
    case 0xC4735C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:128 LDA #0
    // Overlapping static entry reached from 0xC4735B.
    case 0xC4735D: cpu.execute_instruction<0x00>(0x000099, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:129 STA __BSS_START__,Y
    case 0xC4735E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:130 INY
    case 0xC47361: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:131 INY
    case 0xC47362: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:132 DEX
    case 0xC47363: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:134 BNE @UNKNOWN16
    case 0xC47364: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:135 JSL UNKNOWN_C08726
    case 0xC47366: cpu.execute_instruction<0x22>(0xC0871F, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:135 JSL UNKNOWN_C08726
    // Overlapping static entry reached from 0xC473AA.
    case 0xC47369: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000022, 2); else cpu.execute_instruction<0xC0>(0x00A222, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    case 0xC4736A: cpu.execute_instruction<0x22>(0xC45CA2, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC47369.
    case 0xC4736B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00005C, 2); else cpu.execute_instruction<0xA2>(0x00C45C, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC47369.
    case 0xC4736C: cpu.execute_instruction<0x5C>(0x3A22C4, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:136 JSL UNDRAW_FLYOVER_TEXT
    // Overlapping static entry reached from 0xC4736B.
    case 0xC4736D: cpu.execute_instruction<0xC4>(0x000022, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:137 JSL UNKNOWN_C08744
    case 0xC4736E: cpu.execute_instruction<0x22>(0xC0873A, 4); return true;
    // src/text/coffee_tea_scene-jp.asm:137 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xC4736D.
    case 0xC4736F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:137 JSL UNKNOWN_C08744
    // Overlapping static entry reached from 0xC4736F.
    case 0xC47370: cpu.execute_instruction<0x87>(0x0000C0, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:138 LDX #1
    case 0xC47372: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/coffee_tea_scene-jp.asm:138 LDX #1
    // Overlapping static entry reached from 0xC47372.
    case 0xC47374: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/coffee_tea_scene-jp.asm:139 TXA
    case 0xC47375: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/coffee_tea_scene-jp.asm:140 JSL FADE_IN
    case 0xC47376: cpu.execute_instruction<0x22>(0xC0885E, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/coffee_tea_scene-jp.asm:141 END_C_FUNCTION
    case 0xC4737A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/coffee_tea_scene-jp.asm:141 END_C_FUNCTION
    case 0xC4737B: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/copy_enemy_name.asm (source_named).
bool execute_text_copy_enemy_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/copy_enemy_name.asm:3 BEGIN_C_FUNCTION
    case 0xC23A50: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A52: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A53: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A54: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A55: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F1, 2); else cpu.execute_instruction<0x69>(0x00FFF1, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23A55.
    case 0xC23A57: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A58: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/copy_enemy_name.asm:10 END_STACK_VARS
    case 0xC23A59: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:11 STX @VIRTUAL02
    case 0xC23A5A: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:11 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC23A57.
    case 0xC23A5B: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/text/copy_enemy_name.asm:12 TAY
    case 0xC23A5C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A5D: cpu.execute_instruction<0xA5>(0x00001D, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A61: cpu.execute_instruction<0xA5>(0x00001F, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/copy_enemy_name.asm:13 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC23A63: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/copy_enemy_name.asm:14 BRA @UNKNOWN5
    case 0xC23A65: cpu.execute_instruction<0x80>(0x00003A, 2); return true;
    // src/text/copy_enemy_name.asm:16 LDA [@VIRTUAL06]
    case 0xC23A67: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/copy_enemy_name.asm:17 AND #$00FF
    case 0xC23A69: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/copy_enemy_name.asm:17 AND #$00FF
    // Overlapping static entry reached from 0xC23A69.
    case 0xC23A6B: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/copy_enemy_name.asm:18 TAX
    case 0xC23A6C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:19 BEQ @UNKNOWN6
    case 0xC23A6D: cpu.execute_instruction<0xF0>(0x00003E, 2); return true;
    // src/text/copy_enemy_name.asm:20 CPX #CHAR::NESS_PLACEHOLDER
    case 0xC23A6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00003E, 2); else cpu.execute_instruction<0xE0>(0x00003E, 3); return true;
    // src/text/copy_enemy_name.asm:20 CPX #CHAR::NESS_PLACEHOLDER
    // Overlapping static entry reached from 0xC23A6F.
    case 0xC23A71: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/copy_enemy_name.asm:21 BNE @UNKNOWN3
    case 0xC23A72: cpu.execute_instruction<0xD0>(0x000023, 2); return true;
    // src/text/copy_enemy_name.asm:22 LDX #0
    case 0xC23A74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:22 LDX #0
    // Overlapping static entry reached from 0xC23A74.
    case 0xC23A76: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/copy_enemy_name.asm:23 BRA @UNKNOWN2
    case 0xC23A77: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/copy_enemy_name.asm:25 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A79: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:26 LDA PARTY_CHARACTERS+char_struct::name,X
    case 0xC23A7B: cpu.execute_instruction<0xBD>(0x009C7F, 3); return true;
    // src/text/copy_enemy_name.asm:27 STA @LOCAL00
    case 0xC23A7E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/copy_enemy_name.asm:28 REP #PROC_FLAGS::ACCUM8
    case 0xC23A80: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:29 AND #$00FF
    case 0xC23A82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/copy_enemy_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23A82.
    case 0xC23A84: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/copy_enemy_name.asm:30 BEQ @UNKNOWN4
    case 0xC23A85: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/text/copy_enemy_name.asm:31 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A87: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:32 LDA @LOCAL00
    case 0xC23A89: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/copy_enemy_name.asm:33 STA __BSS_START__,Y
    case 0xC23A8B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:34 INY
    case 0xC23A8E: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:35 INX
    case 0xC23A8F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:37 CPX #.SIZEOF(char_struct::name)
    case 0xC23A90: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/text/copy_enemy_name.asm:37 CPX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23A90.
    case 0xC23A92: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/copy_enemy_name.asm:38 BCC @UNKNOWN1
    case 0xC23A93: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/text/copy_enemy_name.asm:39 BRA @UNKNOWN4
    case 0xC23A95: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/copy_enemy_name.asm:41 SEP #PROC_FLAGS::ACCUM8
    case 0xC23A97: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:42 STA __BSS_START__,Y
    case 0xC23A99: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:43 INY
    case 0xC23A9C: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC23A9D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:46 INC @VIRTUAL06
    case 0xC23A9F: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/copy_enemy_name.asm:48 LDX @VIRTUAL02
    case 0xC23AA1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:49 LDA @VIRTUAL02
    case 0xC23AA3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:50 DEC
    case 0xC23AA5: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/copy_enemy_name.asm:51 STA @VIRTUAL02
    case 0xC23AA6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/copy_enemy_name.asm:52 CPX #0
    case 0xC23AA8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:52 CPX #0
    // Overlapping static entry reached from 0xC23AA8.
    case 0xC23AAA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/copy_enemy_name.asm:53 BNE @UNKNOWN0
    case 0xC23AAB: cpu.execute_instruction<0xD0>(0x0000BA, 2); return true;
    // src/text/copy_enemy_name.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC23AAD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:56 LDA #0
    case 0xC23AAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009900, 3); return true;
    // src/text/copy_enemy_name.asm:57 STA __BSS_START__,Y
    case 0xC23AB1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/copy_enemy_name.asm:57 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC23AAF.
    case 0xC23AB2: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/copy_enemy_name.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC23AB4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/copy_enemy_name.asm:59 TYA
    case 0xC23AB6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/copy_enemy_name.asm:60 END_C_FUNCTION
    case 0xC23AB7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/copy_enemy_name.asm:60 END_C_FUNCTION
    case 0xC23AB8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/create_window.asm (source_named).
bool execute_text_create_window_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window.asm:3 BEGIN_C_FUNCTION
    case 0xC106E4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC1073F.
    case 0xC106E5: cpu.execute_instruction<0x31>(0x00000B, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    // Overlapping static entry reached from 0xC106E9.
    case 0xC106EB: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106EC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/create_window.asm:12 END_STACK_VARS
    case 0xC106ED: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/create_window.asm:29 TAY
    case 0xC106EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/create_window.asm:30 STY @LOCAL03
    case 0xC106EF: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/create_window.asm:32 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC106F1: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/create_window.asm:33 STA @VIRTUAL02
    case 0xC106F4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/create_window.asm:34 LDY @LOCAL03
    case 0xC106F6: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/create_window.asm:36 TYA
    case 0xC106F8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:37 ASL
    case 0xC106F9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:38 CLC
    case 0xC106FA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    case 0xC106FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000026, 2); else cpu.execute_instruction<0x69>(0x008C26, 3); return true;
    // src/text/create_window.asm:39 ADC #.LOWORD(OPEN_WINDOW_TABLE)
    // Overlapping static entry reached from 0xC106FB.
    case 0xC106FD: cpu.execute_instruction<0x8C>(0x0086AA, 3); return true;
    // src/text/create_window.asm:40 TAX
    case 0xC106FE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:41 STX @LOCAL02_1
    case 0xC106FF: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/create_window.asm:41 STX @LOCAL02_1
    // Overlapping static entry reached from 0xC106FD.
    case 0xC10700: cpu.execute_instruction<0x10>(0x0000BD, 2); return true;
    // src/text/create_window.asm:42 LDA __BSS_START__,X
    case 0xC10701: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/create_window.asm:42 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC10700.
    case 0xC10702: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/create_window.asm:43 CMP #$FFFF
    case 0xC10704: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:43 CMP #$FFFF
    // Overlapping static entry reached from 0xC10704.
    case 0xC10706: cpu.execute_instruction<0xFF>(0x8C1CF0, 4); return true;
    // src/text/create_window.asm:44 BEQ @UNKNOWN0
    case 0xC10707: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    case 0xC10709: cpu.execute_instruction<0x8C>(0x008C96, 3); return true;
    // src/text/create_window.asm:45 STY CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10706.
    case 0xC1070A: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/text/create_window.asm:46 JSR UNKNOWN_C11383
    case 0xC1070C: cpu.execute_instruction<0x20>(0x0019AB, 3); return true;
    // src/text/create_window.asm:47 LDX @LOCAL02_1
    case 0xC1070F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:48 LDA __BSS_START__,X
    case 0xC10711: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    case 0xC10714: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/create_window.asm:49 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10714.
    case 0xC10716: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:50 JSL MULT168
    case 0xC10717: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/create_window.asm:51 CLC
    case 0xC1071B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1071C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/create_window.asm:52 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1071C.
    case 0xC1071E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0086AA, 3); return true;
    // src/text/create_window.asm:53 TAX
    case 0xC1071F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:54 STX @LOCAL01
    case 0xC10720: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/create_window.asm:54 STX @LOCAL01
    // Overlapping static entry reached from 0xC1071E.
    case 0xC10721: cpu.execute_instruction<0x10>(0x00004C, 2); return true;
    // src/text/create_window.asm:55 JMP @UNKNOWN8
    case 0xC10722: cpu.execute_instruction<0x4C>(0x000840, 3); return true;
    // src/text/create_window.asm:55 JMP @UNKNOWN8
    // Overlapping static entry reached from 0xC10721.
    case 0xC10723: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/text/create_window.asm:57 JSR UNKNOWN_C3E4EF
    case 0xC10725: cpu.execute_instruction<0x20>(0x000103, 3); return true;
    // src/text/create_window.asm:58 STA @LOCAL00
    case 0xC10728: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/create_window.asm:59 CMP #$FFFF
    case 0xC1072A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:59 CMP #$FFFF
    // Overlapping static entry reached from 0xC1072A.
    case 0xC1072C: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC1072D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    case 0xC1072F: cpu.execute_instruction<0x4C>(0x000972, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/create_window.asm:60 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC1072C.
    case 0xC10730: cpu.execute_instruction<0x72>(0x000009, 2); return true;
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    case 0xC10732: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/create_window.asm:61 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC10732.
    case 0xC10734: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:62 JSL MULT168
    case 0xC10735: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/create_window.asm:63 CLC
    case 0xC10739: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1073A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/create_window.asm:64 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1073A.
    case 0xC1073C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0086AA, 3); return true;
    // src/text/create_window.asm:65 TAX
    case 0xC1073D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:66 STX @LOCAL01
    case 0xC1073E: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/create_window.asm:66 STX @LOCAL01
    // Overlapping static entry reached from 0xC1073C.
    case 0xC1073F: cpu.execute_instruction<0x10>(0x0000A4, 2); return true;
    // src/text/create_window.asm:67 LDY @LOCAL03
    case 0xC10740: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/create_window.asm:67 LDY @LOCAL03
    // Overlapping static entry reached from 0xC1073F.
    case 0xC10741: cpu.execute_instruction<0x12>(0x0000C0, 2); return true;
    // src/text/create_window.asm:68 CPY #10
    case 0xC10742: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00000A, 2); else cpu.execute_instruction<0xC0>(0x00000A, 3); return true;
    // src/text/create_window.asm:68 CPY #10
    // Overlapping static entry reached from 0xC10741.
    case 0xC10743: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:68 CPY #10
    // Overlapping static entry reached from 0xC10742.
    case 0xC10744: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/create_window.asm:69 BNE @UNKNOWN4
    case 0xC10745: cpu.execute_instruction<0xD0>(0x00003A, 2); return true;
    // src/text/create_window.asm:70 LDA WINDOW_HEAD
    case 0xC10747: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/text/create_window.asm:71 CMP #$FFFF
    case 0xC1074A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:71 CMP #$FFFF
    // Overlapping static entry reached from 0xC1074A.
    case 0xC1074C: cpu.execute_instruction<0xFF>(0xA90DD0, 4); return true;
    // src/text/create_window.asm:72 BNE @UNKNOWN2
    case 0xC1074D: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/text/create_window.asm:73 LDA #$FFFF
    case 0xC1074F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC1074C.
    case 0xC10750: cpu.execute_instruction<0xFF>(0x029DFF, 4); return true;
    // src/text/create_window.asm:73 LDA #$FFFF
    // Overlapping static entry reached from 0xC1074F.
    case 0xC10751: cpu.execute_instruction<0xFF>(0x00029D, 4); return true;
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    case 0xC10752: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/text/create_window.asm:74 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC10750.
    case 0xC10754: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/create_window.asm:75 LDA @LOCAL00
    case 0xC10755: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:76 STA WINDOW_TAIL
    case 0xC10757: cpu.execute_instruction<0x8D>(0x008C24, 3); return true;
    // src/text/create_window.asm:77 BRA @UNKNOWN3
    case 0xC1075A: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/create_window.asm:79 LDA WINDOW_HEAD
    case 0xC1075C: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    case 0xC1075F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/create_window.asm:80 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1075F.
    case 0xC10761: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:81 JSL MULT168
    case 0xC10762: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/create_window.asm:82 TAX
    case 0xC10766: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:83 LDA @LOCAL00
    case 0xC10767: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:84 STA WINDOW_STATS + window_stats::prev,X
    case 0xC10769: cpu.execute_instruction<0x9D>(0x0089C2, 3); return true;
    // src/text/create_window.asm:85 LDA WINDOW_HEAD
    case 0xC1076C: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/text/create_window.asm:86 LDX @LOCAL01
    case 0xC1076F: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:87 STA a:window_stats::next,X
    case 0xC10771: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/text/create_window.asm:89 LDA #$FFFF
    case 0xC10774: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:89 LDA #$FFFF
    // Overlapping static entry reached from 0xC10774.
    case 0xC10776: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/text/create_window.asm:90 STA a:window_stats::prev,X
    case 0xC10777: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/create_window.asm:91 LDA @LOCAL00
    case 0xC1077A: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:92 STA WINDOW_HEAD
    case 0xC1077C: cpu.execute_instruction<0x8D>(0x008C22, 3); return true;
    // src/text/create_window.asm:93 BRA @UNKNOWN7
    case 0xC1077F: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/text/create_window.asm:95 LDA WINDOW_HEAD
    case 0xC10781: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/text/create_window.asm:96 CMP #$FFFF
    case 0xC10784: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:96 CMP #$FFFF
    // Overlapping static entry reached from 0xC10784.
    case 0xC10786: cpu.execute_instruction<0xFF>(0xA90DD0, 4); return true;
    // src/text/create_window.asm:97 BNE @UNKNOWN5
    case 0xC10787: cpu.execute_instruction<0xD0>(0x00000D, 2); return true;
    // src/text/create_window.asm:98 LDA #$FFFF
    case 0xC10789: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC10786.
    case 0xC1078A: cpu.execute_instruction<0xFF>(0x009DFF, 4); return true;
    // src/text/create_window.asm:98 LDA #$FFFF
    // Overlapping static entry reached from 0xC10789.
    case 0xC1078B: cpu.execute_instruction<0xFF>(0x00009D, 4); return true;
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    case 0xC1078C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/create_window.asm:99 STA a:window_stats::prev,X
    // Overlapping static entry reached from 0xC1078A.
    case 0xC1078E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/create_window.asm:100 LDA @LOCAL00
    case 0xC1078F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:101 STA WINDOW_HEAD
    case 0xC10791: cpu.execute_instruction<0x8D>(0x008C22, 3); return true;
    // src/text/create_window.asm:102 BRA @UNKNOWN6
    case 0xC10794: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/create_window.asm:104 LDA WINDOW_TAIL
    case 0xC10796: cpu.execute_instruction<0xAD>(0x008C24, 3); return true;
    // src/text/create_window.asm:105 STA a:window_stats::prev,X
    case 0xC10799: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/create_window.asm:106 LDA WINDOW_TAIL
    case 0xC1079C: cpu.execute_instruction<0xAD>(0x008C24, 3); return true;
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    case 0xC1079F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/create_window.asm:107 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1079F.
    case 0xC107A1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/create_window.asm:108 JSL MULT168
    case 0xC107A2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/create_window.asm:109 TAX
    case 0xC107A6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:110 LDA @LOCAL00
    case 0xC107A7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:111 STA WINDOW_STATS + window_stats::next,X
    case 0xC107A9: cpu.execute_instruction<0x9D>(0x0089C4, 3); return true;
    // src/text/create_window.asm:113 STA WINDOW_TAIL
    case 0xC107AC: cpu.execute_instruction<0x8D>(0x008C24, 3); return true;
    // src/text/create_window.asm:114 LDA #$FFFF
    case 0xC107AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:114 LDA #$FFFF
    // Overlapping static entry reached from 0xC107AF.
    case 0xC107B1: cpu.execute_instruction<0xFF>(0x9D10A6, 4); return true;
    // src/text/create_window.asm:115 LDX @LOCAL01
    case 0xC107B2: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    case 0xC107B4: cpu.execute_instruction<0x9D>(0x000002, 3); return true;
    // src/text/create_window.asm:116 STA a:window_stats::next,X
    // Overlapping static entry reached from 0xC107B1.
    case 0xC107B5: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/create_window.asm:118 LDY @LOCAL03
    case 0xC107B7: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/create_window.asm:119 TYA
    case 0xC107B9: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:120 STA a:window_stats::id,X
    case 0xC107BA: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/text/create_window.asm:121 TYA
    case 0xC107BD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:122 ASL
    case 0xC107BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:123 TAX
    case 0xC107BF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:124 LDA @LOCAL00
    case 0xC107C0: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:125 STA OPEN_WINDOW_TABLE,X
    case 0xC107C2: cpu.execute_instruction<0x9D>(0x008C26, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x00E23A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107C5.
    case 0xC107C7: cpu.execute_instruction<0xE2>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107C8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107C7.
    case 0xC107C9: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107C9.
    case 0xC107CB: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC107CA.
    case 0xC107CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/create_window.asm:126 LOADPTR WINDOW_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC107CD: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:127 TYA
    case 0xC107CF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/create_window.asm:128 ASL
    case 0xC107D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:129 ASL
    case 0xC107D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:130 ASL
    case 0xC107D2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:131 STA @TMP00
    case 0xC107D3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107D5: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107D7: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107D9: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/text/create_window.asm:132 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC107DB: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/text/create_window.asm:133 CLC
    case 0xC107DD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:134 ADC @VIRTUAL0A
    case 0xC107DE: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/create_window.asm:135 STA @VIRTUAL0A
    case 0xC107E0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/create_window.asm:136 LDA [@VIRTUAL0A]
    case 0xC107E2: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/create_window.asm:137 LDX @LOCAL01
    case 0xC107E4: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:138 STA a:window_stats::window_x,X
    case 0xC107E6: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/create_window.asm:139 LDA @TMP00
    case 0xC107E9: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/create_window.asm:140 INC
    case 0xC107EB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:141 INC
    case 0xC107EC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107ED: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107EF: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107F1: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC107F3: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:142 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10832.
    case 0xC107F4: cpu.execute_instruction<0x0C>(0x006518, 3); return true;
    // src/text/create_window.asm:143 CLC
    case 0xC107F5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    case 0xC107F6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/create_window.asm:144 ADC @VIRTUAL0A
    // Overlapping static entry reached from 0xC107F4.
    case 0xC107F7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:145 STA @VIRTUAL0A
    case 0xC107F8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/create_window.asm:146 LDA [@VIRTUAL0A]
    case 0xC107FA: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/create_window.asm:147 STA a:window_stats::window_y,X
    case 0xC107FC: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/text/create_window.asm:148 LDA @TMP00
    case 0xC107FF: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/create_window.asm:149 INC
    case 0xC10801: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:150 INC
    case 0xC10802: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:151 INC
    case 0xC10803: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/create_window.asm:152 INC
    case 0xC10804: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1044 LDY src
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10805: cpu.execute_instruction<0xA4>(0x000006, 2); return true;
    // include/macros.asm:1045 STY dest
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10807: cpu.execute_instruction<0x84>(0x00000A, 2); return true;
    // include/macros.asm:1046 LDY src+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC10809: cpu.execute_instruction<0xA4>(0x000008, 2); return true;
    // include/macros.asm:1047 STY dest+2
    // Macro caller: src/text/create_window.asm:153 MOVE_INTY @VIRTUAL06, @VIRTUAL0A
    case 0xC1080B: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // src/text/create_window.asm:154 CLC
    case 0xC1080D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:155 ADC @VIRTUAL0A
    case 0xC1080E: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/text/create_window.asm:156 STA @VIRTUAL0A
    case 0xC10810: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/text/create_window.asm:157 LDA [@VIRTUAL0A]
    case 0xC10812: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/text/create_window.asm:158 DEC
    case 0xC10814: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:159 DEC
    case 0xC10815: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:160 STA a:window_stats::width,X
    case 0xC10816: cpu.execute_instruction<0x9D>(0x00000A, 3); return true;
    // src/text/create_window.asm:161 LDA @TMP00
    case 0xC10819: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/create_window.asm:162 CLC
    case 0xC1081B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:163 ADC #6
    case 0xC1081C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x000006, 3); return true;
    // src/text/create_window.asm:163 ADC #6
    // Overlapping static entry reached from 0xC1081C.
    case 0xC1081E: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/create_window.asm:164 CLC
    case 0xC1081F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:165 ADC @VIRTUAL06
    case 0xC10820: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/create_window.asm:166 STA @VIRTUAL06
    case 0xC10822: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/create_window.asm:167 LDA [@VIRTUAL06]
    case 0xC10824: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/create_window.asm:168 DEC
    case 0xC10826: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:169 DEC
    case 0xC10827: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:170 STA a:window_stats::height,X
    case 0xC10828: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/text/create_window.asm:171 LDY #504 * 2
    case 0xC1082B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x0003F0, 3); return true;
    // src/text/create_window.asm:171 LDY #504 * 2
    // Overlapping static entry reached from 0xC1082B.
    case 0xC1082D: cpu.execute_instruction<0x03>(0x0000A5, 2); return true;
    // src/text/create_window.asm:172 LDA @LOCAL00
    case 0xC1082E: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/create_window.asm:172 LDA @LOCAL00
    // Overlapping static entry reached from 0xC1082D.
    case 0xC1082F: cpu.execute_instruction<0x0E>(0x001422, 3); return true;
    // src/text/create_window.asm:173 JSL MULT16
    case 0xC10830: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/text/create_window.asm:173 JSL MULT16
    // Overlapping static entry reached from 0xC1082F.
    case 0xC10832: cpu.execute_instruction<0x90>(0x0000C0, 2); return true;
    // src/text/create_window.asm:174 CLC
    case 0xC10834: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    case 0xC10835: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F6, 2); else cpu.execute_instruction<0x69>(0x0061F6, 3); return true;
    // src/text/create_window.asm:175 ADC #.LOWORD(TEXT_TILEMAP_BUFFER)
    // Overlapping static entry reached from 0xC10835.
    case 0xC10837: cpu.execute_instruction<0x61>(0x00009D, 2); return true;
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    case 0xC10838: cpu.execute_instruction<0x9D>(0x000035, 3); return true;
    // src/text/create_window.asm:176 STA a:window_stats::tilemap_address,X
    // Overlapping static entry reached from 0xC10837.
    case 0xC10839: cpu.execute_instruction<0x35>(0x000000, 2); return true;
    // src/text/create_window.asm:177 LDY @LOCAL03
    case 0xC1083B: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/create_window.asm:178 STY CURRENT_FOCUS_WINDOW
    case 0xC1083D: cpu.execute_instruction<0x8C>(0x008C96, 3); return true;
    // src/text/create_window.asm:185 STZ a:window_stats::text_y,X
    case 0xC10840: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/text/create_window.asm:186 STZ a:window_stats::text_x,X
    case 0xC10843: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // src/text/create_window.asm:187 SEP #PROC_FLAGS::ACCUM8
    case 0xC10846: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/create_window.asm:188 LDA #128
    case 0xC10848: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x009D80, 3); return true;
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    case 0xC1084A: cpu.execute_instruction<0x9D>(0x000012, 3); return true;
    // src/text/create_window.asm:189 STA a:window_stats::number_padding,X
    // Overlapping static entry reached from 0xC10848.
    case 0xC1084B: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/text/create_window.asm:190 REP #PROC_FLAGS::ACCUM8
    case 0xC1084D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/create_window.asm:191 STZ a:window_stats::curr_tile_attributes,X
    case 0xC1084F: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/text/create_window.asm:192 STZ a:window_stats::font,X
    case 0xC10852: cpu.execute_instruction<0x9E>(0x000015, 3); return true;
    // src/text/create_window.asm:193 LDA @LOCAL02_2
    case 0xC10855: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:194 CLC
    case 0xC10857: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    case 0xC10858: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/create_window.asm:195 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10858.
    case 0xC1085A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:196 TAY
    case 0xC1085B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1085C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1085F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10861: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:197 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10864: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:198 TXA
    case 0xC10866: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:199 CLC
    case 0xC10867: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    case 0xC10868: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/create_window.asm:200 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10868.
    case 0xC1086A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:201 TAY
    case 0xC1086B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1086C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1086E: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10871: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:202 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10873: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:203 LDA @LOCAL02_2
    case 0xC10876: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:204 CLC
    case 0xC10878: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    case 0xC10879: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/create_window.asm:205 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10879.
    case 0xC1087B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:206 TAY
    case 0xC1087C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1087D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10880: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10882: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:207 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10885: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:208 TXA
    case 0xC10887: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:209 CLC
    case 0xC10888: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    case 0xC10889: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/create_window.asm:210 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC10889.
    case 0xC1088B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:211 TAY
    case 0xC1088C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1088D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1088F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10892: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:212 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10894: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:213 LDA @LOCAL02_2
    case 0xC10897: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:214 CLC
    case 0xC10899: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    case 0xC1089A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/create_window.asm:215 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC1089A.
    case 0xC1089C: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:216 TAY
    case 0xC1089D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1089E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108A1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108A3: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:217 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108A6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:218 TXA
    case 0xC108A8: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:219 CLC
    case 0xC108A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    case 0xC108AA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000021, 2); else cpu.execute_instruction<0x69>(0x000021, 3); return true;
    // src/text/create_window.asm:220 ADC #window_stats::working_memory_storage
    // Overlapping static entry reached from 0xC108AA.
    case 0xC108AC: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:221 TAY
    case 0xC108AD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108AE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108B0: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108B3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:222 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108B5: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:223 LDA @LOCAL02_2
    case 0xC108B8: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/create_window.asm:224 CLC
    case 0xC108BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    case 0xC108BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/create_window.asm:225 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC108BB.
    case 0xC108BD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:226 TAY
    case 0xC108BE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108BF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108C2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108C4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/create_window.asm:227 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC108C7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:228 TXA
    case 0xC108C9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:229 CLC
    case 0xC108CA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    case 0xC108CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000025, 2); else cpu.execute_instruction<0x69>(0x000025, 3); return true;
    // src/text/create_window.asm:230 ADC #window_stats::argument_memory_storage
    // Overlapping static entry reached from 0xC108CB.
    case 0xC108CD: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:231 TAY
    case 0xC108CE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108D1: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108D4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:232 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC108D6: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:234 LDX @LOCAL02_2
    case 0xC108D9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/create_window.asm:239 LDA a:window_stats::secondary_memory,X
    case 0xC108DB: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // src/text/create_window.asm:240 LDX @LOCAL01
    case 0xC108DE: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:241 STA a:window_stats::secondary_memory,X
    case 0xC108E0: cpu.execute_instruction<0x9D>(0x00001F, 3); return true;
    // src/text/create_window.asm:243 LDX @LOCAL02_2
    case 0xC108E3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/create_window.asm:248 LDA a:window_stats::secondary_memory_storage,X
    case 0xC108E5: cpu.execute_instruction<0xBD>(0x000029, 3); return true;
    // src/text/create_window.asm:249 LDX @LOCAL01
    case 0xC108E8: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:250 STA a:window_stats::secondary_memory_storage,X
    case 0xC108EA: cpu.execute_instruction<0x9D>(0x000029, 3); return true;
    // src/text/create_window.asm:251 LDA #$FFFF
    case 0xC108ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:251 LDA #$FFFF
    // Overlapping static entry reached from 0xC108ED.
    case 0xC108EF: cpu.execute_instruction<0xFF>(0x002F9D, 4); return true;
    // src/text/create_window.asm:252 STA a:window_stats::selected_option,X
    case 0xC108F0: cpu.execute_instruction<0x9D>(0x00002F, 3); return true;
    // src/text/create_window.asm:253 STA a:window_stats::option_count,X
    case 0xC108F3: cpu.execute_instruction<0x9D>(0x00002D, 3); return true;
    // src/text/create_window.asm:254 STA a:window_stats::current_option,X
    case 0xC108F6: cpu.execute_instruction<0x9D>(0x00002B, 3); return true;
    // src/text/create_window.asm:255 LDA #1
    case 0xC108F9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/create_window.asm:255 LDA #1
    // Overlapping static entry reached from 0xC108F9.
    case 0xC108FB: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/text/create_window.asm:256 STA a:window_stats::unknown49,X
    case 0xC108FC: cpu.execute_instruction<0x9D>(0x000031, 3); return true;
    // src/text/create_window.asm:257 STA a:window_stats::menu_page_number,X
    case 0xC108FF: cpu.execute_instruction<0x9D>(0x000033, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10902: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC10902.
    case 0xC10904: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10905: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC10907: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC10907.
    case 0xC10909: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/create_window.asm:258 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1090A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/create_window.asm:259 TXA
    case 0xC1090C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/create_window.asm:260 CLC
    case 0xC1090D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    case 0xC1090E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000037, 2); else cpu.execute_instruction<0x69>(0x000037, 3); return true;
    // src/text/create_window.asm:261 ADC #window_stats::cursor_move_callback
    // Overlapping static entry reached from 0xC1090E.
    case 0xC10910: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/create_window.asm:262 TAY
    case 0xC10911: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10912: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10914: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10917: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/create_window.asm:263 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC10919: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/create_window.asm:264 LDY a:window_stats::tilemap_address,X
    case 0xC1091C: cpu.execute_instruction<0xBC>(0x000035, 3); return true;
    // src/text/create_window.asm:265 STY @LOCAL00
    case 0xC1091F: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/create_window.asm:266 LDY a:window_stats::height,X
    case 0xC10921: cpu.execute_instruction<0xBC>(0x00000C, 3); return true;
    // src/text/create_window.asm:267 LDA a:window_stats::width,X
    case 0xC10924: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/create_window.asm:268 JSL MULT16
    case 0xC10927: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/text/create_window.asm:269 STA @LOCAL02_3
    case 0xC1092B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/create_window.asm:270 BRA @UNKNOWN11
    case 0xC1092D: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/text/create_window.asm:279 LDA #64
    case 0xC1092F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/create_window.asm:279 LDA #64
    // Overlapping static entry reached from 0xC1092F.
    case 0xC10931: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/text/create_window.asm:280 LDY @LOCAL00
    case 0xC10932: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/create_window.asm:281 STA __BSS_START__,Y
    case 0xC10934: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/text/create_window.asm:282 INY
    case 0xC10937: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/create_window.asm:283 INY
    case 0xC10938: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/create_window.asm:284 STY @LOCAL00
    case 0xC10939: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/create_window.asm:285 LDA @LOCAL02_3
    case 0xC1093B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/create_window.asm:286 DEC
    case 0xC1093D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:287 STA @LOCAL02_3
    case 0xC1093E: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/create_window.asm:290 CMP #0
    case 0xC10940: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/create_window.asm:290 CMP #0
    // Overlapping static entry reached from 0xC10940.
    case 0xC10942: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/create_window.asm:294 BNE @UNKNOWN9
    case 0xC10943: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // src/text/create_window.asm:298 LDA a:window_stats::unknown59,X
    case 0xC10945: cpu.execute_instruction<0xBD>(0x00003B, 3); return true;
    // src/text/create_window.asm:299 AND #$00FF
    case 0xC10948: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/create_window.asm:299 AND #$00FF
    // Overlapping static entry reached from 0xC10948.
    case 0xC1094A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/create_window.asm:300 BEQ @UNKNOWN12
    case 0xC1094B: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/create_window.asm:301 AND #$00FF
    case 0xC1094D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/create_window.asm:301 AND #$00FF
    // Overlapping static entry reached from 0xC1094D.
    case 0xC1094F: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/create_window.asm:302 DEC
    case 0xC10950: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/create_window.asm:303 ASL
    case 0xC10951: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/create_window.asm:304 TAX
    case 0xC10952: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/create_window.asm:305 LDA #$FFFF
    case 0xC10953: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/create_window.asm:305 LDA #$FFFF
    // Overlapping static entry reached from 0xC10953.
    case 0xC10955: cpu.execute_instruction<0xFF>(0x8C8E9D, 4); return true;
    // src/text/create_window.asm:306 STA TITLED_WINDOWS,X
    case 0xC10956: cpu.execute_instruction<0x9D>(0x008C8E, 3); return true;
    // src/text/create_window.asm:308 LDX @LOCAL01
    case 0xC10959: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/create_window.asm:309 SEP #PROC_FLAGS::ACCUM8
    case 0xC1095B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/create_window.asm:310 STZ a:window_stats::title,X
    case 0xC1095D: cpu.execute_instruction<0x9E>(0x00003C, 3); return true;
    // src/text/create_window.asm:311 STZ a:window_stats::unknown59,X
    case 0xC10960: cpu.execute_instruction<0x9E>(0x00003B, 3); return true;
    // src/text/create_window.asm:312 JSL UNKNOWN_C45E96
    case 0xC10963: cpu.execute_instruction<0x22>(0xC43BE8, 4); return true;
    // src/text/create_window.asm:313 SEP #PROC_FLAGS::ACCUM8
    case 0xC10967: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/create_window.asm:314 LDA #1
    case 0xC10969: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    case 0xC1096B: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10969.
    case 0xC1096C: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/create_window.asm:315 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC1096C.
    case 0xC1096D: cpu.execute_instruction<0x99>(0x00AB22, 3); return true;
    // src/text/create_window.asm:316 JSL UNKNOWN_C07C5B
    case 0xC1096E: cpu.execute_instruction<0x22>(0xC07EAB, 4); return true;
    // src/text/create_window.asm:316 JSL UNKNOWN_C07C5B
    // Overlapping static entry reached from 0xC1096D.
    case 0xC10970: cpu.execute_instruction<0x7E>(0x002BC0, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC10972: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/create_window.asm:318 END_C_FUNCTION
    case 0xC10973: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/create_window_redirect.asm (source_named).
bool execute_text_create_window_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/create_window_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB24: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/create_window_redirect.asm:6 JSR CREATE_WINDOW
    case 0xC1DB26: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/create_window_redirect.asm:7 END_C_FUNCTION
    case 0xC1DB29: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/display_in_battle_text.asm (source_named).
bool execute_text_display_in_battle_text_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_in_battle_text.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1D9FF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA01: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA02: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DA03.
    case 0xC1DA05: cpu.execute_instruction<0xFF>(0x20A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_in_battle_text.asm:7 END_STACK_VARS
    case 0xC1DA06: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA07: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA09: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA0B: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_in_battle_text.asm:8 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1DA0D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_in_battle_text.asm:9 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    case 0xC1DA0F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000062, 2); else cpu.execute_instruction<0xA2>(0x009B62, 3); return true;
    // src/text/display_in_battle_text.asm:9 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC1DA0F.
    case 0xC1DA11: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/display_in_battle_text.asm:10 LDA __BSS_START__,X
    case 0xC1DA12: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/display_in_battle_text.asm:11 AND #$00FF
    case 0xC1DA15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_in_battle_text.asm:11 AND #$00FF
    // Overlapping static entry reached from 0xC1DA15.
    case 0xC1DA17: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_in_battle_text.asm:12 BEQ @UNKNOWN0
    case 0xC1DA18: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/text/display_in_battle_text.asm:13 LDA PAD_STATE
    case 0xC1DA1A: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/text/display_in_battle_text.asm:14 AND #PAD::B_BUTTON
    case 0xC1DA1D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/text/display_in_battle_text.asm:14 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC1DA1D.
    case 0xC1DA1F: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/text/display_in_battle_text.asm:15 BEQ @UNKNOWN0
    case 0xC1DA20: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/text/display_in_battle_text.asm:16 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DA22: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/display_in_battle_text.asm:17 LDA #0
    case 0xC1DA24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/text/display_in_battle_text.asm:18 STA __BSS_START__,X
    case 0xC1DA26: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/display_in_battle_text.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1DA24.
    case 0xC1DA27: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/display_in_battle_text.asm:19 JSL UNKNOWN_C20293
    case 0xC1DA29: cpu.execute_instruction<0x22>(0xC2022E, 4); return true;
    // src/text/display_in_battle_text.asm:22 LDA BATTLE_MODE_FLAG
    case 0xC1DA2D: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/text/display_in_battle_text.asm:23 BEQ @NO_PROMPT
    case 0xC1DA30: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/display_in_battle_text.asm:24 LDA #2
    case 0xC1DA32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/display_in_battle_text.asm:24 LDA #2
    // Overlapping static entry reached from 0xC1DA32.
    case 0xC1DA34: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_in_battle_text.asm:25 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DA35: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA38: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA3A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA3C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_in_battle_text.asm:27 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA3E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_in_battle_text.asm:28 JSL DISPLAY_TEXT
    case 0xC1DA40: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/text/display_in_battle_text.asm:29 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DA44: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_in_battle_text.asm:30 END_C_FUNCTION
    case 0xC1DA47: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_in_battle_text.asm:30 END_C_FUNCTION
    case 0xC1DA48: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/display_text-jp.asm (source_named).
bool execute_text_display_text_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC18913: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC18915: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC18916: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC18917: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC18917.
    case 0xC18919: cpu.execute_instruction<0xFF>(0x26A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text-jp.asm:11 END_STACK_VARS
    case 0xC1891A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1891B: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1891D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC1891F: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:12 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC18921: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text-jp.asm:13 LDY #0
    case 0xC18923: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/display_text-jp.asm:13 LDY #0
    // Overlapping static entry reached from 0xC18923.
    case 0xC18925: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:14 STY @LOCAL03
    case 0xC18926: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC18928: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC18928.
    case 0xC1892A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1892B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1892D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1892D.
    case 0xC1892F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:15 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC18930: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18932: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18934: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18936: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC18938: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/display_text-jp.asm:16 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1893A: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/display_text-jp.asm:17 BNE @UNKNOWN1
    case 0xC1893C: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1893E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18940: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18942: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:18 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18944: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/display_text-jp.asm:19 JMP @UNKNOWN74
    case 0xC18946: cpu.execute_instruction<0x4C>(0x008BC9, 3); return true;
    // src/text/display_text-jp.asm:21 JSR UNKNOWN_C14012
    case 0xC18949: cpu.execute_instruction<0x20>(0x004454, 3); return true;
    // src/text/display_text-jp.asm:22 STA @LOCAL02
    case 0xC1894C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1894E: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18950: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18952: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18954: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text-jp.asm:24 LDA @LOCAL02
    case 0xC18956: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/display_text-jp.asm:25 JSR UNKNOWN_C1866D
    case 0xC18958: cpu.execute_instruction<0x20>(0x0088CF, 3); return true;
    // src/text/display_text-jp.asm:26 STA @VIRTUAL02
    case 0xC1895B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:27 STA @LOCAL02
    case 0xC1895D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/display_text-jp.asm:28 LDA @VIRTUAL02
    case 0xC1895F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:29 BNE @UNKNOWN2
    case 0xC18961: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18963: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18965: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18967: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:30 MOVE_INT @VIRTUAL0A, @RETURNVAL
    case 0xC18969: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/display_text-jp.asm:31 JMP @UNKNOWN74
    case 0xC1896B: cpu.execute_instruction<0x4C>(0x008BC9, 3); return true;
    // src/text/display_text-jp.asm:33 LDA @LOCAL02
    case 0xC1896E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/display_text-jp.asm:34 STA @VIRTUAL02
    case 0xC18970: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:35 LDX @VIRTUAL02
    case 0xC18972: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:36 TXY
    case 0xC18974: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18975: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18978: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1897A: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:37 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1897D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text-jp.asm:38 LDA [@VIRTUAL06]
    case 0xC1897F: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/display_text-jp.asm:39 AND #$00FF
    case 0xC18981: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text-jp.asm:39 AND #$00FF
    // Overlapping static entry reached from 0xC18981.
    case 0xC18983: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/display_text-jp.asm:40 STA @LOCAL01
    case 0xC18984: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/display_text-jp.asm:41 INC @VIRTUAL06
    case 0xC18986: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/display_text-jp.asm:42 TXY
    case 0xC18988: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18989: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1898B: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC1898E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/text/display_text-jp.asm:43 MOVE_INT_YPTRDEST @VIRTUAL06, __BSS_START__
    case 0xC18990: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/text/display_text-jp.asm:45 LDY @LOCAL03
    case 0xC18993: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:46 BEQ @UNKNOWN7
    case 0xC18995: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/text/display_text-jp.asm:47 LDA @LOCAL01
    case 0xC18997: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text-jp.asm:48 TAX
    case 0xC18999: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:49 LDA @VIRTUAL02
    case 0xC1899A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:50 STY @VIRTUAL02
    case 0xC1899C: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:51 STA TEMP_REGISTER
    case 0xC1899E: cpu.execute_instruction<0x8D>(0x0000BE, 3); return true;
    // src/text/display_text-jp.asm:52 PEA .LOWORD(@UNK)
    case 0xC189A1: cpu.execute_instruction<0xF4>(0x0089AB, 3); return true;
    // src/text/display_text-jp.asm:53 LDA @VIRTUAL02
    case 0xC189A4: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:54 DEC
    case 0xC189A6: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:55 PHA
    case 0xC189A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:56 LDA TEMP_REGISTER
    case 0xC189A8: cpu.execute_instruction<0xAD>(0x0000BE, 3); return true;
    // src/text/display_text-jp.asm:58 RTS
    case 0xC189AB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:59 TAY
    case 0xC189AC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:60 STY @LOCAL03
    case 0xC189AD: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:61 BRA @UNKNOWN2
    case 0xC189AF: cpu.execute_instruction<0x80>(0x0000BD, 2); return true;
    // src/text/display_text-jp.asm:63 LDA @LOCAL01
    case 0xC189B1: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/display_text-jp.asm:64 CMP #$20
    case 0xC189B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/text/display_text-jp.asm:64 CMP #$20
    // Overlapping static entry reached from 0xC189B3.
    case 0xC189B5: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/display_text-jp.asm:65 BCC @UNKNOWN13
    case 0xC189B6: cpu.execute_instruction<0x90>(0x000003, 2); return true;
    // src/text/display_text-jp.asm:66 JMP @UNKNOWN72
    case 0xC189B8: cpu.execute_instruction<0x4C>(0x008BA7, 3); return true;
    // src/text/display_text-jp.asm:68 STZ CC_ARGUMENT_GATHERING_LOOP_COUNTER
    case 0xC189BB: cpu.execute_instruction<0x9C>(0x009A7E, 3); return true;
    // src/text/display_text-jp.asm:69 CMP #$00
    case 0xC189BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/display_text-jp.asm:69 CMP #$00
    // Overlapping static entry reached from 0xC189BE.
    case 0xC189C0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:70 BEQL @CC_00
    case 0xC189C1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:70 BEQL @CC_00
    case 0xC189C3: cpu.execute_instruction<0x4C>(0x008AA9, 3); return true;
    // src/text/display_text-jp.asm:71 CMP #$01
    case 0xC189C6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/display_text-jp.asm:71 CMP #$01
    // Overlapping static entry reached from 0xC189C6.
    case 0xC189C8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:72 BEQL @CC_01
    case 0xC189C9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:72 BEQL @CC_01
    case 0xC189CB: cpu.execute_instruction<0x4C>(0x008AAF, 3); return true;
    // src/text/display_text-jp.asm:73 CMP #$02
    case 0xC189CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/display_text-jp.asm:73 CMP #$02
    // Overlapping static entry reached from 0xC189CE.
    case 0xC189D0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:74 BEQL @UNKNOWN73
    case 0xC189D1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:74 BEQL @UNKNOWN73
    case 0xC189D3: cpu.execute_instruction<0x4C>(0x008BAD, 3); return true;
    // src/text/display_text-jp.asm:75 CMP #$03
    case 0xC189D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/display_text-jp.asm:75 CMP #$03
    // Overlapping static entry reached from 0xC189D6.
    case 0xC189D8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:76 BEQL @UNKNOWN46
    case 0xC189D9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:76 BEQL @UNKNOWN46
    case 0xC189DB: cpu.execute_instruction<0x4C>(0x008AC0, 3); return true;
    // src/text/display_text-jp.asm:77 CMP #$04
    case 0xC189DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/display_text-jp.asm:77 CMP #$04
    // Overlapping static entry reached from 0xC189DE.
    case 0xC189E0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:78 BEQL @UNKNOWN47
    case 0xC189E1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:78 BEQL @UNKNOWN47
    case 0xC189E3: cpu.execute_instruction<0x4C>(0x008ACC, 3); return true;
    // src/text/display_text-jp.asm:79 CMP #$05
    case 0xC189E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/display_text-jp.asm:79 CMP #$05
    // Overlapping static entry reached from 0xC189E6.
    case 0xC189E8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:80 BEQL @UNKNOWN48
    case 0xC189E9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:80 BEQL @UNKNOWN48
    case 0xC189EB: cpu.execute_instruction<0x4C>(0x008AD4, 3); return true;
    // src/text/display_text-jp.asm:81 CMP #$06
    case 0xC189EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/text/display_text-jp.asm:81 CMP #$06
    // Overlapping static entry reached from 0xC189EE.
    case 0xC189F0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:82 BEQL @UNKNOWN49
    case 0xC189F1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:82 BEQL @UNKNOWN49
    case 0xC189F3: cpu.execute_instruction<0x4C>(0x008ADC, 3); return true;
    // src/text/display_text-jp.asm:83 CMP #$07
    case 0xC189F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/display_text-jp.asm:83 CMP #$07
    // Overlapping static entry reached from 0xC189F6.
    case 0xC189F8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:84 BEQL @UNKNOWN50
    case 0xC189F9: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:84 BEQL @UNKNOWN50
    case 0xC189FB: cpu.execute_instruction<0x4C>(0x008AE4, 3); return true;
    // src/text/display_text-jp.asm:85 CMP #$08
    case 0xC189FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000008, 2); else cpu.execute_instruction<0xC9>(0x000008, 3); return true;
    // src/text/display_text-jp.asm:85 CMP #$08
    // Overlapping static entry reached from 0xC189FE.
    case 0xC18A00: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:86 BEQL @UNKNOWN51
    case 0xC18A01: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:86 BEQL @UNKNOWN51
    case 0xC18A03: cpu.execute_instruction<0x4C>(0x008AEC, 3); return true;
    // src/text/display_text-jp.asm:87 CMP #$09
    case 0xC18A06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/display_text-jp.asm:87 CMP #$09
    // Overlapping static entry reached from 0xC18A06.
    case 0xC18A08: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:88 BEQL @UNKNOWN52
    case 0xC18A09: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:88 BEQL @UNKNOWN52
    case 0xC18A0B: cpu.execute_instruction<0x4C>(0x008AF4, 3); return true;
    // src/text/display_text-jp.asm:89 CMP #$0A
    case 0xC18A0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/display_text-jp.asm:89 CMP #$0A
    // Overlapping static entry reached from 0xC18A0E.
    case 0xC18A10: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:90 BEQL @UNKNOWN53
    case 0xC18A11: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:90 BEQL @UNKNOWN53
    case 0xC18A13: cpu.execute_instruction<0x4C>(0x008AFC, 3); return true;
    // src/text/display_text-jp.asm:91 CMP #$0B
    case 0xC18A16: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/display_text-jp.asm:91 CMP #$0B
    // Overlapping static entry reached from 0xC18A16.
    case 0xC18A18: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:92 BEQL @UNKNOWN54
    case 0xC18A19: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:92 BEQL @UNKNOWN54
    case 0xC18A1B: cpu.execute_instruction<0x4C>(0x008B04, 3); return true;
    // src/text/display_text-jp.asm:93 CMP #$0C
    case 0xC18A1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/display_text-jp.asm:93 CMP #$0C
    // Overlapping static entry reached from 0xC18A1E.
    case 0xC18A20: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:94 BEQL @UNKNOWN55
    case 0xC18A21: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:94 BEQL @UNKNOWN55
    case 0xC18A23: cpu.execute_instruction<0x4C>(0x008B0C, 3); return true;
    // src/text/display_text-jp.asm:95 CMP #$0D
    case 0xC18A26: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000D, 2); else cpu.execute_instruction<0xC9>(0x00000D, 3); return true;
    // src/text/display_text-jp.asm:95 CMP #$0D
    // Overlapping static entry reached from 0xC18A26.
    case 0xC18A28: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:96 BEQL @UNKNOWN56
    case 0xC18A29: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:96 BEQL @UNKNOWN56
    case 0xC18A2B: cpu.execute_instruction<0x4C>(0x008B14, 3); return true;
    // src/text/display_text-jp.asm:97 CMP #$0E
    case 0xC18A2E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000E, 2); else cpu.execute_instruction<0xC9>(0x00000E, 3); return true;
    // src/text/display_text-jp.asm:97 CMP #$0E
    // Overlapping static entry reached from 0xC18A2E.
    case 0xC18A30: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:98 BEQL @UNKNOWN57
    case 0xC18A31: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:98 BEQL @UNKNOWN57
    case 0xC18A33: cpu.execute_instruction<0x4C>(0x008B1C, 3); return true;
    // src/text/display_text-jp.asm:99 CMP #$0F
    case 0xC18A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000F, 2); else cpu.execute_instruction<0xC9>(0x00000F, 3); return true;
    // src/text/display_text-jp.asm:99 CMP #$0F
    // Overlapping static entry reached from 0xC18A36.
    case 0xC18A38: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:100 BEQL @UNKNOWN58
    case 0xC18A39: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:100 BEQL @UNKNOWN58
    case 0xC18A3B: cpu.execute_instruction<0x4C>(0x008B24, 3); return true;
    // src/text/display_text-jp.asm:101 CMP #$10
    case 0xC18A3E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/text/display_text-jp.asm:101 CMP #$10
    // Overlapping static entry reached from 0xC18A3E.
    case 0xC18A40: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:102 BEQL @UNKNOWN59
    case 0xC18A41: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:102 BEQL @UNKNOWN59
    case 0xC18A43: cpu.execute_instruction<0x4C>(0x008B2A, 3); return true;
    // src/text/display_text-jp.asm:103 CMP #$11
    case 0xC18A46: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000011, 2); else cpu.execute_instruction<0xC9>(0x000011, 3); return true;
    // src/text/display_text-jp.asm:103 CMP #$11
    // Overlapping static entry reached from 0xC18A46.
    case 0xC18A48: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:104 BEQL @UNKNOWN60
    case 0xC18A49: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:104 BEQL @UNKNOWN60
    case 0xC18A4B: cpu.execute_instruction<0x4C>(0x008B32, 3); return true;
    // src/text/display_text-jp.asm:105 CMP #$12
    case 0xC18A4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000012, 2); else cpu.execute_instruction<0xC9>(0x000012, 3); return true;
    // src/text/display_text-jp.asm:105 CMP #$12
    // Overlapping static entry reached from 0xC18A4E.
    case 0xC18A50: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:106 BEQL @UNKNOWN61
    case 0xC18A51: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:106 BEQL @UNKNOWN61
    case 0xC18A53: cpu.execute_instruction<0x4C>(0x008B4D, 3); return true;
    // src/text/display_text-jp.asm:107 CMP #$13
    case 0xC18A56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000013, 2); else cpu.execute_instruction<0xC9>(0x000013, 3); return true;
    // src/text/display_text-jp.asm:107 CMP #$13
    // Overlapping static entry reached from 0xC18A56.
    case 0xC18A58: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:108 BEQL @UNKNOWN62
    case 0xC18A59: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:108 BEQL @UNKNOWN62
    case 0xC18A5B: cpu.execute_instruction<0x4C>(0x008B53, 3); return true;
    // src/text/display_text-jp.asm:109 CMP #$14
    case 0xC18A5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000014, 2); else cpu.execute_instruction<0xC9>(0x000014, 3); return true;
    // src/text/display_text-jp.asm:109 CMP #$14
    // Overlapping static entry reached from 0xC18A5E.
    case 0xC18A60: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:110 BEQL @UNKNOWN63
    case 0xC18A61: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:110 BEQL @UNKNOWN63
    case 0xC18A63: cpu.execute_instruction<0x4C>(0x008B5D, 3); return true;
    // src/text/display_text-jp.asm:111 CMP #$18
    case 0xC18A66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/display_text-jp.asm:111 CMP #$18
    // Overlapping static entry reached from 0xC18A66.
    case 0xC18A68: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:112 BEQL @UNKNOWN64
    case 0xC18A69: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:112 BEQL @UNKNOWN64
    case 0xC18A6B: cpu.execute_instruction<0x4C>(0x008B67, 3); return true;
    // src/text/display_text-jp.asm:113 CMP #$19
    case 0xC18A6E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000019, 2); else cpu.execute_instruction<0xC9>(0x000019, 3); return true;
    // src/text/display_text-jp.asm:113 CMP #$19
    // Overlapping static entry reached from 0xC18A6E.
    case 0xC18A70: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:114 BEQL @UNKNOWN65
    case 0xC18A71: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:114 BEQL @UNKNOWN65
    case 0xC18A73: cpu.execute_instruction<0x4C>(0x008B6F, 3); return true;
    // src/text/display_text-jp.asm:115 CMP #$1A
    case 0xC18A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001A, 2); else cpu.execute_instruction<0xC9>(0x00001A, 3); return true;
    // src/text/display_text-jp.asm:115 CMP #$1A
    // Overlapping static entry reached from 0xC18A76.
    case 0xC18A78: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:116 BEQL @UNKNOWN66
    case 0xC18A79: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:116 BEQL @UNKNOWN66
    case 0xC18A7B: cpu.execute_instruction<0x4C>(0x008B77, 3); return true;
    // src/text/display_text-jp.asm:117 CMP #$1B
    case 0xC18A7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001B, 2); else cpu.execute_instruction<0xC9>(0x00001B, 3); return true;
    // src/text/display_text-jp.asm:117 CMP #$1B
    // Overlapping static entry reached from 0xC18A7E.
    case 0xC18A80: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:118 BEQL @UNKNOWN67
    case 0xC18A81: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:118 BEQL @UNKNOWN67
    case 0xC18A83: cpu.execute_instruction<0x4C>(0x008B7F, 3); return true;
    // src/text/display_text-jp.asm:119 CMP #$1C
    case 0xC18A86: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001C, 2); else cpu.execute_instruction<0xC9>(0x00001C, 3); return true;
    // src/text/display_text-jp.asm:119 CMP #$1C
    // Overlapping static entry reached from 0xC18A86.
    case 0xC18A88: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:120 BEQL @UNKNOWN68
    case 0xC18A89: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:120 BEQL @UNKNOWN68
    case 0xC18A8B: cpu.execute_instruction<0x4C>(0x008B87, 3); return true;
    // src/text/display_text-jp.asm:121 CMP #$1D
    case 0xC18A8E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001D, 2); else cpu.execute_instruction<0xC9>(0x00001D, 3); return true;
    // src/text/display_text-jp.asm:121 CMP #$1D
    // Overlapping static entry reached from 0xC18A8E.
    case 0xC18A90: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:122 BEQL @UNKNOWN69
    case 0xC18A91: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:122 BEQL @UNKNOWN69
    case 0xC18A93: cpu.execute_instruction<0x4C>(0x008B8F, 3); return true;
    // src/text/display_text-jp.asm:123 CMP #$1E
    case 0xC18A96: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001E, 2); else cpu.execute_instruction<0xC9>(0x00001E, 3); return true;
    // src/text/display_text-jp.asm:123 CMP #$1E
    // Overlapping static entry reached from 0xC18A96.
    case 0xC18A98: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:124 BEQL @UNKNOWN70
    case 0xC18A99: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:124 BEQL @UNKNOWN70
    case 0xC18A9B: cpu.execute_instruction<0x4C>(0x008B97, 3); return true;
    // src/text/display_text-jp.asm:125 CMP #$1F
    case 0xC18A9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00001F, 2); else cpu.execute_instruction<0xC9>(0x00001F, 3); return true;
    // src/text/display_text-jp.asm:125 CMP #$1F
    // Overlapping static entry reached from 0xC18A9E.
    case 0xC18AA0: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:126 BEQL @UNKNOWN71
    case 0xC18AA1: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:126 BEQL @UNKNOWN71
    case 0xC18AA3: cpu.execute_instruction<0x4C>(0x008B9F, 3); return true;
    // src/text/display_text-jp.asm:127 JMP @UNKNOWN2
    case 0xC18AA6: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:129 JSR PRINT_NEWLINE
    case 0xC18AA9: cpu.execute_instruction<0x20>(0x001174, 3); return true;
    // src/text/display_text-jp.asm:130 JMP @UNKNOWN2
    case 0xC18AAC: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:132 JSR GET_TEXT_X
    case 0xC18AAF: cpu.execute_instruction<0x20>(0x0006B8, 3); return true;
    // src/text/display_text-jp.asm:133 CMP #0
    case 0xC18AB2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/display_text-jp.asm:133 CMP #0
    // Overlapping static entry reached from 0xC18AB2.
    case 0xC18AB4: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/display_text-jp.asm:134 BEQL @UNKNOWN2
    case 0xC18AB5: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/display_text-jp.asm:134 BEQL @UNKNOWN2
    case 0xC18AB7: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:135 JSR PRINT_NEWLINE
    case 0xC18ABA: cpu.execute_instruction<0x20>(0x001174, 3); return true;
    // src/text/display_text-jp.asm:136 JMP @UNKNOWN2
    case 0xC18ABD: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:138 LDX #0
    case 0xC18AC0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/display_text-jp.asm:138 LDX #0
    // Overlapping static entry reached from 0xC18AC0.
    case 0xC18AC2: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/display_text-jp.asm:139 LDA #1
    case 0xC18AC3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/display_text-jp.asm:139 LDA #1
    // Overlapping static entry reached from 0xC18AC3.
    case 0xC18AC5: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_text-jp.asm:140 JSR CC_13_14
    case 0xC18AC6: cpu.execute_instruction<0x20>(0x00036B, 3); return true;
    // src/text/display_text-jp.asm:141 JMP @UNKNOWN2
    case 0xC18AC9: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:143 LDY #.LOWORD(CC_04)
    case 0xC18ACC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000087, 2); else cpu.execute_instruction<0xA0>(0x004687, 3); return true;
    // src/text/display_text-jp.asm:143 LDY #.LOWORD(CC_04)
    // Overlapping static entry reached from 0xC18ACC.
    case 0xC18ACE: cpu.execute_instruction<0x46>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:144 STY @LOCAL03
    case 0xC18ACF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:144 STY @LOCAL03
    // Overlapping static entry reached from 0xC18ACE.
    case 0xC18AD0: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:145 JMP @UNKNOWN2
    case 0xC18AD1: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:145 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AD0.
    case 0xC18AD2: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:147 LDY #.LOWORD(CC_05)
    case 0xC18AD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CF, 2); else cpu.execute_instruction<0xA0>(0x0046CF, 3); return true;
    // src/text/display_text-jp.asm:147 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18AD2.
    case 0xC18AD5: cpu.execute_instruction<0xCF>(0x168446, 4); return true;
    // src/text/display_text-jp.asm:147 LDY #.LOWORD(CC_05)
    // Overlapping static entry reached from 0xC18AD4.
    case 0xC18AD6: cpu.execute_instruction<0x46>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:148 STY @LOCAL03
    case 0xC18AD7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:148 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AD6.
    case 0xC18AD8: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:149 JMP @UNKNOWN2
    case 0xC18AD9: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:149 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AD8.
    case 0xC18ADA: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:151 LDY #.LOWORD(CC_06)
    case 0xC18ADC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000017, 2); else cpu.execute_instruction<0xA0>(0x004717, 3); return true;
    // src/text/display_text-jp.asm:151 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18ADA.
    case 0xC18ADD: cpu.execute_instruction<0x17>(0x000047, 2); return true;
    // src/text/display_text-jp.asm:151 LDY #.LOWORD(CC_06)
    // Overlapping static entry reached from 0xC18ADC.
    case 0xC18ADE: cpu.execute_instruction<0x47>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:152 STY @LOCAL03
    case 0xC18ADF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:152 STY @LOCAL03
    // Overlapping static entry reached from 0xC18ADE.
    case 0xC18AE0: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:153 JMP @UNKNOWN2
    case 0xC18AE1: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:153 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AE0.
    case 0xC18AE2: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:155 LDY #.LOWORD(CC_07)
    case 0xC18AE4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000081, 2); else cpu.execute_instruction<0xA0>(0x004781, 3); return true;
    // src/text/display_text-jp.asm:155 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18AE2.
    case 0xC18AE5: cpu.execute_instruction<0x81>(0x000047, 2); return true;
    // src/text/display_text-jp.asm:155 LDY #.LOWORD(CC_07)
    // Overlapping static entry reached from 0xC18AE4.
    case 0xC18AE6: cpu.execute_instruction<0x47>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:156 STY @LOCAL03
    case 0xC18AE7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:156 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AE6.
    case 0xC18AE8: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:157 JMP @UNKNOWN2
    case 0xC18AE9: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:157 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AE8.
    case 0xC18AEA: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:159 LDY #.LOWORD(CC_08)
    case 0xC18AEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F8, 2); else cpu.execute_instruction<0xA0>(0x0047F8, 3); return true;
    // src/text/display_text-jp.asm:159 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18AEA.
    case 0xC18AED: cpu.execute_instruction<0xF8>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:159 LDY #.LOWORD(CC_08)
    // Overlapping static entry reached from 0xC18AEC.
    case 0xC18AEE: cpu.execute_instruction<0x47>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:160 STY @LOCAL03
    case 0xC18AEF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:160 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AEE.
    case 0xC18AF0: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:161 JMP @UNKNOWN2
    case 0xC18AF1: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:161 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AF0.
    case 0xC18AF2: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:163 LDY #.LOWORD(CC_09)
    case 0xC18AF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F2, 2); else cpu.execute_instruction<0xA0>(0x0045F2, 3); return true;
    // src/text/display_text-jp.asm:163 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18AF2.
    case 0xC18AF5: cpu.execute_instruction<0xF2>(0x000045, 2); return true;
    // src/text/display_text-jp.asm:163 LDY #.LOWORD(CC_09)
    // Overlapping static entry reached from 0xC18AF4.
    case 0xC18AF6: cpu.execute_instruction<0x45>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:164 STY @LOCAL03
    case 0xC18AF7: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:164 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AF6.
    case 0xC18AF8: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:165 JMP @UNKNOWN2
    case 0xC18AF9: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:165 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18AF8.
    case 0xC18AFA: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:167 LDY #.LOWORD(CC_0A)
    case 0xC18AFC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000025, 2); else cpu.execute_instruction<0xA0>(0x004525, 3); return true;
    // src/text/display_text-jp.asm:167 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18AFA.
    case 0xC18AFD: cpu.execute_instruction<0x25>(0x000045, 2); return true;
    // src/text/display_text-jp.asm:167 LDY #.LOWORD(CC_0A)
    // Overlapping static entry reached from 0xC18AFC.
    case 0xC18AFE: cpu.execute_instruction<0x45>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:168 STY @LOCAL03
    case 0xC18AFF: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:168 STY @LOCAL03
    // Overlapping static entry reached from 0xC18AFE.
    case 0xC18B00: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:169 JMP @UNKNOWN2
    case 0xC18B01: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:169 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B00.
    case 0xC18B02: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:171 LDY #.LOWORD(CC_0B)
    case 0xC18B04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005C, 2); else cpu.execute_instruction<0xA0>(0x00495C, 3); return true;
    // src/text/display_text-jp.asm:171 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18B02.
    case 0xC18B05: cpu.execute_instruction<0x5C>(0x168449, 4); return true;
    // src/text/display_text-jp.asm:171 LDY #.LOWORD(CC_0B)
    // Overlapping static entry reached from 0xC18B04.
    case 0xC18B06: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000084, 2); else cpu.execute_instruction<0x49>(0x001684, 3); return true;
    // src/text/display_text-jp.asm:172 STY @LOCAL03
    case 0xC18B07: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:172 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B06.
    case 0xC18B08: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:173 JMP @UNKNOWN2
    case 0xC18B09: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:173 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B08.
    case 0xC18B0A: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:175 LDY #.LOWORD(CC_0C)
    case 0xC18B0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000095, 2); else cpu.execute_instruction<0xA0>(0x004995, 3); return true;
    // src/text/display_text-jp.asm:175 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18B0A.
    case 0xC18B0D: cpu.execute_instruction<0x95>(0x000049, 2); return true;
    // src/text/display_text-jp.asm:175 LDY #.LOWORD(CC_0C)
    // Overlapping static entry reached from 0xC18B0C.
    case 0xC18B0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000084, 2); else cpu.execute_instruction<0x49>(0x001684, 3); return true;
    // src/text/display_text-jp.asm:176 STY @LOCAL03
    case 0xC18B0F: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:176 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B0E.
    case 0xC18B10: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:177 JMP @UNKNOWN2
    case 0xC18B11: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:177 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B10.
    case 0xC18B12: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:179 LDY #.LOWORD(CC_0D)
    case 0xC18B14: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F3, 2); else cpu.execute_instruction<0xA0>(0x0049F3, 3); return true;
    // src/text/display_text-jp.asm:179 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18B12.
    case 0xC18B15: cpu.execute_instruction<0xF3>(0x000049, 2); return true;
    // src/text/display_text-jp.asm:179 LDY #.LOWORD(CC_0D)
    // Overlapping static entry reached from 0xC18B14.
    case 0xC18B16: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000084, 2); else cpu.execute_instruction<0x49>(0x001684, 3); return true;
    // src/text/display_text-jp.asm:180 STY @LOCAL03
    case 0xC18B17: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:180 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B16.
    case 0xC18B18: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:181 JMP @UNKNOWN2
    case 0xC18B19: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:181 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B18.
    case 0xC18B1A: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:183 LDY #.LOWORD(CC_0E)
    case 0xC18B1C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x004A1E, 3); return true;
    // src/text/display_text-jp.asm:183 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18B1A.
    case 0xC18B1D: cpu.execute_instruction<0x1E>(0x00844A, 3); return true;
    // src/text/display_text-jp.asm:183 LDY #.LOWORD(CC_0E)
    // Overlapping static entry reached from 0xC18B1C.
    case 0xC18B1E: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:184 STY @LOCAL03
    case 0xC18B1F: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:184 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B1D.
    case 0xC18B20: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:185 JMP @UNKNOWN2
    case 0xC18B21: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:185 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B20.
    case 0xC18B22: cpu.execute_instruction<0x6E>(0x002089, 3); return true;
    // src/text/display_text-jp.asm:187 JSR INCREMENT_SECONDARY_MEMORY
    case 0xC18B24: cpu.execute_instruction<0x20>(0x000631, 3); return true;
    // src/text/display_text-jp.asm:187 JSR INCREMENT_SECONDARY_MEMORY
    // Overlapping static entry reached from 0xC18B22.
    case 0xC18B25: cpu.execute_instruction<0x31>(0x000006, 2); return true;
    // src/text/display_text-jp.asm:188 JMP @UNKNOWN2
    case 0xC18B27: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:190 LDY #.LOWORD(CC_10)
    case 0xC18B2A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AB, 2); else cpu.execute_instruction<0xA0>(0x0052AB, 3); return true;
    // src/text/display_text-jp.asm:190 LDY #.LOWORD(CC_10)
    // Overlapping static entry reached from 0xC18B2A.
    case 0xC18B2C: cpu.execute_instruction<0x52>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:191 STY @LOCAL03
    case 0xC18B2D: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:191 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B2C.
    case 0xC18B2E: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:192 JMP @UNKNOWN2
    case 0xC18B2F: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:192 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B2E.
    case 0xC18B30: cpu.execute_instruction<0x6E>(0x00A989, 3); return true;
    // src/text/display_text-jp.asm:194 LDA #1
    case 0xC18B32: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/display_text-jp.asm:194 LDA #1
    // Overlapping static entry reached from 0xC18B30.
    case 0xC18B33: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/display_text-jp.asm:194 LDA #1
    // Overlapping static entry reached from 0xC18B32.
    case 0xC18B34: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_text-jp.asm:195 JSR SELECTION_MENU
    case 0xC18B35: cpu.execute_instruction<0x20>(0x002109, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/display_text-jp.asm:196 STORE_INT1632 @VIRTUAL06
    case 0xC18B38: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/display_text-jp.asm:196 STORE_INT1632 @VIRTUAL06
    case 0xC18B3A: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B3E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:197 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC18B42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text-jp.asm:198 JSR SET_WORKING_MEMORY
    case 0xC18B44: cpu.execute_instruction<0x20>(0x000660, 3); return true;
    // src/text/display_text-jp.asm:199 JSR UNKNOWN_C11383
    case 0xC18B47: cpu.execute_instruction<0x20>(0x0019AB, 3); return true;
    // src/text/display_text-jp.asm:200 JMP @UNKNOWN2
    case 0xC18B4A: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:202 JSR CC_12
    case 0xC18B4D: cpu.execute_instruction<0x20>(0x0011C9, 3); return true;
    // src/text/display_text-jp.asm:203 JMP @UNKNOWN2
    case 0xC18B50: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:205 LDX #0
    case 0xC18B53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/display_text-jp.asm:205 LDX #0
    // Overlapping static entry reached from 0xC18B53.
    case 0xC18B55: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/display_text-jp.asm:206 TXA
    case 0xC18B56: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:207 JSR CC_13_14
    case 0xC18B57: cpu.execute_instruction<0x20>(0x00036B, 3); return true;
    // src/text/display_text-jp.asm:208 JMP @UNKNOWN2
    case 0xC18B5A: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:210 LDX #1
    case 0xC18B5D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/display_text-jp.asm:210 LDX #1
    // Overlapping static entry reached from 0xC18B5D.
    case 0xC18B5F: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/display_text-jp.asm:211 TXA
    case 0xC18B60: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:212 JSR CC_13_14
    case 0xC18B61: cpu.execute_instruction<0x20>(0x00036B, 3); return true;
    // src/text/display_text-jp.asm:213 JMP @UNKNOWN2
    case 0xC18B64: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:215 LDY #.LOWORD(CC_18_TREE)
    case 0xC18B67: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00007C, 2); else cpu.execute_instruction<0xA0>(0x007B7C, 3); return true;
    // src/text/display_text-jp.asm:215 LDY #.LOWORD(CC_18_TREE)
    // Overlapping static entry reached from 0xC18B67.
    case 0xC18B69: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // src/text/display_text-jp.asm:216 STY @LOCAL03
    case 0xC18B6A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:217 JMP @UNKNOWN2
    case 0xC18B6C: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:219 LDY #.LOWORD(CC_19_TREE)
    case 0xC18B6F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001B, 2); else cpu.execute_instruction<0xA0>(0x007C1B, 3); return true;
    // src/text/display_text-jp.asm:219 LDY #.LOWORD(CC_19_TREE)
    // Overlapping static entry reached from 0xC18B6F.
    case 0xC18B71: cpu.execute_instruction<0x7C>(0x001684, 3); return true;
    // src/text/display_text-jp.asm:220 STY @LOCAL03
    case 0xC18B72: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:221 JMP @UNKNOWN2
    case 0xC18B74: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:223 LDY #.LOWORD(CC_1A_TREE)
    case 0xC18B77: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000CB, 2); else cpu.execute_instruction<0xA0>(0x007DCB, 3); return true;
    // src/text/display_text-jp.asm:223 LDY #.LOWORD(CC_1A_TREE)
    // Overlapping static entry reached from 0xC18B77.
    case 0xC18B79: cpu.execute_instruction<0x7D>(0x001684, 3); return true;
    // src/text/display_text-jp.asm:224 STY @LOCAL03
    case 0xC18B7A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:225 JMP @UNKNOWN2
    case 0xC18B7C: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:227 LDY #.LOWORD(CC_1B_TREE)
    case 0xC18B7F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AB, 2); else cpu.execute_instruction<0xA0>(0x007EAB, 3); return true;
    // src/text/display_text-jp.asm:227 LDY #.LOWORD(CC_1B_TREE)
    // Overlapping static entry reached from 0xC18B7F.
    case 0xC18B81: cpu.execute_instruction<0x7E>(0x001684, 3); return true;
    // src/text/display_text-jp.asm:228 STY @LOCAL03
    case 0xC18B82: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:229 JMP @UNKNOWN2
    case 0xC18B84: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:231 LDY #.LOWORD(CC_1C_TREE)
    case 0xC18B87: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x008001, 3); return true;
    // src/text/display_text-jp.asm:231 LDY #.LOWORD(CC_1C_TREE)
    // Overlapping static entry reached from 0xC18B87.
    case 0xC18B89: cpu.execute_instruction<0x80>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:232 STY @LOCAL03
    case 0xC18B8A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:233 JMP @UNKNOWN2
    case 0xC18B8C: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:235 LDY #.LOWORD(CC_1D_TREE)
    case 0xC18B8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000073, 2); else cpu.execute_instruction<0xA0>(0x008173, 3); return true;
    // src/text/display_text-jp.asm:235 LDY #.LOWORD(CC_1D_TREE)
    // Overlapping static entry reached from 0xC18B8F.
    case 0xC18B91: cpu.execute_instruction<0x81>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:236 STY @LOCAL03
    case 0xC18B92: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:236 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B91.
    case 0xC18B93: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:237 JMP @UNKNOWN2
    case 0xC18B94: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:237 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B93.
    case 0xC18B95: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:239 LDY #.LOWORD(CC_1E_TREE)
    case 0xC18B97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000081, 2); else cpu.execute_instruction<0xA0>(0x008381, 3); return true;
    // src/text/display_text-jp.asm:239 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18B95.
    case 0xC18B98: cpu.execute_instruction<0x81>(0x000083, 2); return true;
    // src/text/display_text-jp.asm:239 LDY #.LOWORD(CC_1E_TREE)
    // Overlapping static entry reached from 0xC18B97.
    case 0xC18B99: cpu.execute_instruction<0x83>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:240 STY @LOCAL03
    case 0xC18B9A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:240 STY @LOCAL03
    // Overlapping static entry reached from 0xC18B99.
    case 0xC18B9B: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:241 JMP @UNKNOWN2
    case 0xC18B9C: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:241 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18B9B.
    case 0xC18B9D: cpu.execute_instruction<0x6E>(0x00A089, 3); return true;
    // src/text/display_text-jp.asm:243 LDY #.LOWORD(CC_1F_TREE)
    case 0xC18B9F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001D, 2); else cpu.execute_instruction<0xA0>(0x00841D, 3); return true;
    // src/text/display_text-jp.asm:243 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18B9D.
    case 0xC18BA0: cpu.execute_instruction<0x1D>(0x008484, 3); return true;
    // src/text/display_text-jp.asm:243 LDY #.LOWORD(CC_1F_TREE)
    // Overlapping static entry reached from 0xC18B9F.
    case 0xC18BA1: cpu.execute_instruction<0x84>(0x000084, 2); return true;
    // src/text/display_text-jp.asm:244 STY @LOCAL03
    case 0xC18BA2: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/display_text-jp.asm:244 STY @LOCAL03
    // Overlapping static entry reached from 0xC18BA1.
    case 0xC18BA3: cpu.execute_instruction<0x16>(0x00004C, 2); return true;
    // src/text/display_text-jp.asm:245 JMP @UNKNOWN2
    case 0xC18BA4: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:245 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18BA3.
    case 0xC18BA5: cpu.execute_instruction<0x6E>(0x002089, 3); return true;
    // src/text/display_text-jp.asm:247 JSR PRINT_LETTER
    case 0xC18BA7: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/display_text-jp.asm:247 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC18BA5.
    case 0xC18BA8: cpu.execute_instruction<0xEC>(0x004C11, 3); return true;
    // src/text/display_text-jp.asm:248 JMP @UNKNOWN2
    case 0xC18BAA: cpu.execute_instruction<0x4C>(0x00896E, 3); return true;
    // src/text/display_text-jp.asm:248 JMP @UNKNOWN2
    // Overlapping static entry reached from 0xC18BA8.
    case 0xC18BAB: cpu.execute_instruction<0x6E>(0x00A489, 3); return true;
    // src/text/display_text-jp.asm:250 LDY @VIRTUAL02
    case 0xC18BAD: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:250 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC18BAB.
    case 0xC18BAE: cpu.execute_instruction<0x02>(0x0000B9, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BAF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BB2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BB4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:251 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC18BB7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/display_text-jp.asm:252 LDA @VIRTUAL02
    case 0xC18BB9: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/display_text-jp.asm:253 JSR UNKNOWN_C1869D
    case 0xC18BBB: cpu.execute_instruction<0x20>(0x0088FF, 3); return true;
    // src/text/display_text-jp.asm:254 JSR UNKNOWN_C14049
    case 0xC18BBE: cpu.execute_instruction<0x20>(0x00448B, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC3: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text-jp.asm:255 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC18BC7: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text-jp.asm:257 END_C_FUNCTION
    case 0xC18BC9: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text-jp.asm:257 END_C_FUNCTION
    case 0xC18BCA: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/display_text_wait.asm (source_named).
bool execute_text_display_text_wait_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/display_text_wait.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DA49: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DA4B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DA4C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DA4D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1DA4D.
    case 0xC1DA4F: cpu.execute_instruction<0xFF>(0x24A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/display_text_wait.asm:8 END_STACK_VARS
    case 0xC1DA50: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DA51: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DA53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DA55: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:9 MOVE_INT @PARAM01, @VIRTUAL06
    case 0xC1DA57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DA59: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DA5B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DA5D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:10 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1DA5F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/display_text_wait.asm:11 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    case 0xC1DA61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000062, 2); else cpu.execute_instruction<0xA2>(0x009B62, 3); return true;
    // src/text/display_text_wait.asm:11 LDX #.LOWORD(GAME_STATE) + game_state::auto_fight_enable
    // Overlapping static entry reached from 0xC1DA61.
    case 0xC1DA63: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/display_text_wait.asm:12 LDA __BSS_START__,X
    case 0xC1DA64: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/display_text_wait.asm:13 AND #$00FF
    case 0xC1DA67: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/display_text_wait.asm:13 AND #$00FF
    // Overlapping static entry reached from 0xC1DA67.
    case 0xC1DA69: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/display_text_wait.asm:14 BEQ @UNKNOWN0
    case 0xC1DA6A: cpu.execute_instruction<0xF0>(0x000013, 2); return true;
    // src/text/display_text_wait.asm:15 LDA PAD_STATE
    case 0xC1DA6C: cpu.execute_instruction<0xAD>(0x000065, 3); return true;
    // src/text/display_text_wait.asm:16 AND #PAD::B_BUTTON
    case 0xC1DA6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x008000, 3); return true;
    // src/text/display_text_wait.asm:16 AND #PAD::B_BUTTON
    // Overlapping static entry reached from 0xC1DA6F.
    case 0xC1DA71: cpu.execute_instruction<0x80>(0x0000F0, 2); return true;
    // src/text/display_text_wait.asm:17 BEQ @UNKNOWN0
    case 0xC1DA72: cpu.execute_instruction<0xF0>(0x00000B, 2); return true;
    // src/text/display_text_wait.asm:18 SEP #PROC_FLAGS::ACCUM8
    case 0xC1DA74: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/display_text_wait.asm:19 LDA #0
    case 0xC1DA76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/text/display_text_wait.asm:20 STA __BSS_START__,X
    case 0xC1DA78: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/display_text_wait.asm:20 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC1DA76.
    case 0xC1DA79: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/display_text_wait.asm:21 JSL UNKNOWN_C20293
    case 0xC1DA7B: cpu.execute_instruction<0x22>(0xC2022E, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA7F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA81: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA83: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:23 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1DA85: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text_wait.asm:24 JSR UNKNOWN_C1AD0A
    case 0xC1DA87: cpu.execute_instruction<0x20>(0x00ABC6, 3); return true;
    // src/text/display_text_wait.asm:26 LDA BATTLE_MODE_FLAG
    case 0xC1DA8A: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/text/display_text_wait.asm:27 BEQ @UNKNOWN1
    case 0xC1DA8D: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/display_text_wait.asm:28 LDA #2
    case 0xC1DA8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/display_text_wait.asm:28 LDA #2
    // Overlapping static entry reached from 0xC1DA8F.
    case 0xC1DA91: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/display_text_wait.asm:29 JSR ENABLE_BLINKING_TRIANGLE
    case 0xC1DA92: cpu.execute_instruction<0x20>(0x000032, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/display_text_wait.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DA95: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/display_text_wait.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DA97: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/display_text_wait.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DA99: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/display_text_wait.asm:32 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC1DA9B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/display_text_wait.asm:37 JSL DISPLAY_TEXT
    case 0xC1DA9D: cpu.execute_instruction<0x22>(0xC18913, 4); return true;
    // src/text/display_text_wait.asm:38 JSR CLEAR_BLINKING_PROMPT
    case 0xC1DAA1: cpu.execute_instruction<0x20>(0x000038, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/display_text_wait.asm:39 END_C_FUNCTION
    case 0xC1DAA4: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/display_text_wait.asm:39 END_C_FUNCTION
    case 0xC1DAA5: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/enable_blinking_triangle.asm (source_named).
bool execute_text_enable_blinking_triangle_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/enable_blinking_triangle.asm:3 BEGIN_C_FUNCTION
    case 0xC10032: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/enable_blinking_triangle.asm:5 STA BLINKING_TRIANGLE_FLAG
    case 0xC10034: cpu.execute_instruction<0x8D>(0x009945, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/enable_blinking_triangle.asm:6 END_C_FUNCTION
    case 0xC10037: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/enter_your_name_please-jp.asm (source_named).
bool execute_text_enter_your_name_please_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/enter_your_name_please-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1E8F6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8F8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8F9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EA, 2); else cpu.execute_instruction<0x69>(0x00FFEA, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC1E8FB.
    case 0xC1E8FD: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:10 END_STACK_VARS
    case 0xC1E8FF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:11 TAX
    case 0xC1E900: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:12 STX @LOCAL02
    case 0xC1E901: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:13 JSR SET_INSTANT_PRINTING
    case 0xC1E903: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1E906: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // include/macros.asm:735 LDA arg
    // Macro caller: src/text/enter_your_name_please-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1E906.
    case 0xC1E908: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:736 JSR CREATE_WINDOW
    // Macro caller: src/text/enter_your_name_please-jp.asm:15 CREATE_WINDOW_NEAR #WINDOW::UNKNOWN27
    case 0xC1E909: cpu.execute_instruction<0x20>(0x0006E4, 3); return true;
    // src/text/enter_your_name_please-jp.asm:16 LDX @LOCAL02
    case 0xC1E90C: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/enter_your_name_please-jp.asm:17 BEQL @UNKNOWN4_
    case 0xC1E90E: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:17 BEQL @UNKNOWN4_
    case 0xC1E910: cpu.execute_instruction<0x4C>(0x00E9EB, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E913: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x009AB5, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E913.
    case 0xC1E915: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E916: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E918: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E919: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E91B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E91C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:19 PROMOTENEARPTR GAME_STATE + game_state::earthbound_playername, @VIRTUAL06
    case 0xC1E91E: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please-jp.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC1E920: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E922: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E924: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E926: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:21 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E928: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:22 LDA #24
    case 0xC1E92A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/text/enter_your_name_please-jp.asm:22 LDA #24
    // Overlapping static entry reached from 0xC1E92A.
    case 0xC1E92C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:23 JSR PRINT_STRING
    case 0xC1E92D: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/enter_your_name_please-jp.asm:24 LDX #1
    case 0xC1E930: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please-jp.asm:24 LDX #1
    // Overlapping static entry reached from 0xC1E930.
    case 0xC1E932: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:25 LDA #0
    case 0xC1E933: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:25 LDA #0
    // Overlapping static entry reached from 0xC1E933.
    case 0xC1E935: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:26 JSR UNKNOWN_C438A5
    case 0xC1E936: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/enter_your_name_please-jp.asm:27 LDX #0
    case 0xC1E939: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:27 LDX #0
    // Overlapping static entry reached from 0xC1E939.
    case 0xC1E93B: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/enter_your_name_please-jp.asm:28 STX @LOCAL02
    case 0xC1E93C: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:29 BRA @UNKNOWN2
    case 0xC1E93E: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/enter_your_name_please-jp.asm:31 LDA #CHAR::PLACEHOLDER
    case 0xC1E940: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00005C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:31 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1E940.
    case 0xC1E942: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:32 JSR PRINT_LETTER
    case 0xC1E943: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/enter_your_name_please-jp.asm:33 LDX @LOCAL02
    case 0xC1E946: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:34 INX
    case 0xC1E948: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:35 STX @LOCAL02
    case 0xC1E949: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:37 CPX #12
    case 0xC1E94B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00000C, 2); else cpu.execute_instruction<0xE0>(0x00000C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:37 CPX #12
    // Overlapping static entry reached from 0xC1E94B.
    case 0xC1E94D: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/enter_your_name_please-jp.asm:38 BCC @UNKNOWN1
    case 0xC1E94E: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/text/enter_your_name_please-jp.asm:39 LDX #1
    case 0xC1E950: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please-jp.asm:39 LDX #1
    // Overlapping static entry reached from 0xC1E950.
    case 0xC1E952: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:40 LDA #0
    case 0xC1E953: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:40 LDA #0
    // Overlapping static entry reached from 0xC1E953.
    case 0xC1E955: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:41 JSR UNKNOWN_C438A5
    case 0xC1E956: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/enter_your_name_please-jp.asm:42 LDA GAME_STATE
    case 0xC1E959: cpu.execute_instruction<0xAD>(0x009AA9, 3); return true;
    // src/text/enter_your_name_please-jp.asm:43 AND #$00FF
    case 0xC1E95C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/enter_your_name_please-jp.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC1E95C.
    case 0xC1E95E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/enter_your_name_please-jp.asm:44 BEQ @UNKNOWN3
    case 0xC1E95F: cpu.execute_instruction<0xF0>(0x00005F, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E961: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x009AA9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    // Overlapping static entry reached from 0xC1E961.
    case 0xC1E963: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E964: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E966: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E967: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E969: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E96A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:45 PROMOTENEARPTR GAME_STATE + game_state::mother2_playername, @VIRTUAL06
    case 0xC1E96C: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please-jp.asm:46 REP #PROC_FLAGS::ACCUM8
    case 0xC1E96E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E970: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E972: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E974: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:47 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1E976: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:48 LDA #12
    case 0xC1E978: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000C, 2); else cpu.execute_instruction<0xA9>(0x00000C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:48 LDA #12
    // Overlapping static entry reached from 0xC1E978.
    case 0xC1E97A: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:49 JSR PRINT_STRING
    case 0xC1E97B: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/enter_your_name_please-jp.asm:50 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    case 0xC1E97E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0089D0, 3); return true;
    // src/text/enter_your_name_please-jp.asm:50 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    // Overlapping static entry reached from 0xC1E97E.
    case 0xC1E980: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/enter_your_name_please-jp.asm:51 STA @VIRTUAL02
    case 0xC1E981: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:51 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1E980.
    case 0xC1E982: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/text/enter_your_name_please-jp.asm:52 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E983: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/enter_your_name_please-jp.asm:53 ASL
    case 0xC1E986: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:54 TAX
    case 0xC1E987: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:55 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E988: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E98B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E98B.
    case 0xC1E98D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:56 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E98E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/enter_your_name_please-jp.asm:57 CLC
    case 0xC1E992: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:58 ADC @VIRTUAL02
    case 0xC1E993: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:59 TAX
    case 0xC1E995: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:60 LDA __BSS_START__,X
    case 0xC1E996: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:61 CMP #12
    case 0xC1E999: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000C, 2); else cpu.execute_instruction<0xC9>(0x00000C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:61 CMP #12
    // Overlapping static entry reached from 0xC1E999.
    case 0xC1E99B: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/enter_your_name_please-jp.asm:62 BCS @UNKNOWN4
    case 0xC1E99C: cpu.execute_instruction<0xB0>(0x000031, 2); return true;
    // src/text/enter_your_name_please-jp.asm:63 LDA #CHAR::BULLET
    case 0xC1E99E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/enter_your_name_please-jp.asm:63 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E99E.
    case 0xC1E9A0: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:64 JSR PRINT_LETTER
    case 0xC1E9A1: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/enter_your_name_please-jp.asm:65 LDA CURRENT_FOCUS_WINDOW
    case 0xC1E9A4: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/enter_your_name_please-jp.asm:66 ASL
    case 0xC1E9A7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:67 TAX
    case 0xC1E9A8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:68 LDA OPEN_WINDOW_TABLE,X
    case 0xC1E9A9: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E9AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1E9AC.
    case 0xC1E9AE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:69 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1E9AF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/enter_your_name_please-jp.asm:70 CLC
    case 0xC1E9B3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:71 ADC @VIRTUAL02
    case 0xC1E9B4: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:72 TAX
    case 0xC1E9B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:73 LDA __BSS_START__,X
    case 0xC1E9B7: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:74 DEC
    case 0xC1E9BA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:75 STA __BSS_START__,X
    case 0xC1E9BB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:76 BRA @UNKNOWN4
    case 0xC1E9BE: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/text/enter_your_name_please-jp.asm:78 LDA #CHAR::BULLET
    case 0xC1E9C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/enter_your_name_please-jp.asm:78 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1E9C0.
    case 0xC1E9C2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:79 JSR PRINT_LETTER
    case 0xC1E9C3: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/enter_your_name_please-jp.asm:80 LDX #1
    case 0xC1E9C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please-jp.asm:80 LDX #1
    // Overlapping static entry reached from 0xC1E9C6.
    case 0xC1E9C8: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:81 LDA #0
    case 0xC1E9C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:81 LDA #0
    // Overlapping static entry reached from 0xC1E9C9.
    case 0xC1E9CB: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:82 JSR UNKNOWN_C438A5
    case 0xC1E9CC: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/enter_your_name_please-jp.asm:84 LDA #0
    case 0xC1E9CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:84 LDA #0
    // Overlapping static entry reached from 0xC1E9CF.
    case 0xC1E9D1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/enter_your_name_please-jp.asm:85 STA @LOCAL00
    case 0xC1E9D2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/enter_your_name_please-jp.asm:86 LDA #.LOWORD(-1)
    case 0xC1E9D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/enter_your_name_please-jp.asm:86 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1E9D4.
    case 0xC1E9D6: cpu.execute_instruction<0xFF>(0xA01085, 4); return true;
    // src/text/enter_your_name_please-jp.asm:87 STA @LOCAL00+2
    case 0xC1E9D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:88 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1E9D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A9, 2); else cpu.execute_instruction<0xA0>(0x009AA9, 3); return true;
    // src/text/enter_your_name_please-jp.asm:88 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1E9D6.
    case 0xC1E9DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009A, 2); else cpu.execute_instruction<0xA9>(0x00A29A, 3); return true;
    // src/text/enter_your_name_please-jp.asm:88 LDY #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1E9D9.
    case 0xC1E9DB: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:89 LDX #12
    case 0xC1E9DC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:89 LDX #12
    // Overlapping static entry reached from 0xC1E9DA.
    case 0xC1E9DD: cpu.execute_instruction<0x0C>(0x00A900, 3); return true;
    // src/text/enter_your_name_please-jp.asm:89 LDX #12
    // Overlapping static entry reached from 0xC1E9DC.
    case 0xC1E9DE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:90 LDA #WINDOW::UNKNOWN27
    case 0xC1E9DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/text/enter_your_name_please-jp.asm:90 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1E9DD.
    case 0xC1E9E0: cpu.execute_instruction<0x27>(0x000000, 2); return true;
    // src/text/enter_your_name_please-jp.asm:90 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1E9DF.
    case 0xC1E9E1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:91 JSR TEXT_INPUT_DIALOG
    case 0xC1E9E2: cpu.execute_instruction<0x20>(0x00E498, 3); return true;
    // src/text/enter_your_name_please-jp.asm:92 TAY
    case 0xC1E9E5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:93 STY @LOCAL01
    case 0xC1E9E6: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/enter_your_name_please-jp.asm:94 JMP @UNKNOWN9
    case 0xC1E9E8: cpu.execute_instruction<0x4C>(0x00EAE2, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000070, 2); else cpu.execute_instruction<0xA9>(0x00F670, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1E9EB.
    case 0xC1E9ED: cpu.execute_instruction<0xF6>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9EE: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1E9ED.
    case 0xC1E9EF: cpu.execute_instruction<0x0E>(0x00C3A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    // Overlapping static entry reached from 0xC1E9F0.
    case 0xC1E9F2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:96 LOADPTR NAME_REGISTRY_REQUEST_STRING, @LOCAL00
    case 0xC1E9F3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:97 LDA #11
    case 0xC1E9F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000B, 2); else cpu.execute_instruction<0xA9>(0x00000B, 3); return true;
    // src/text/enter_your_name_please-jp.asm:97 LDA #11
    // Overlapping static entry reached from 0xC1E9F5.
    case 0xC1E9F7: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:98 JSR PRINT_STRING
    case 0xC1E9F8: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/enter_your_name_please-jp.asm:99 LDX #1
    case 0xC1E9FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please-jp.asm:99 LDX #1
    // Overlapping static entry reached from 0xC1E9FB.
    case 0xC1E9FD: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:100 LDA #0
    case 0xC1E9FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:100 LDA #0
    // Overlapping static entry reached from 0xC1E9FE.
    case 0xC1EA00: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:101 JSR UNKNOWN_C438A5
    case 0xC1EA01: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/enter_your_name_please-jp.asm:102 LDX #0
    case 0xC1EA04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:102 LDX #0
    // Overlapping static entry reached from 0xC1EA04.
    case 0xC1EA06: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/enter_your_name_please-jp.asm:103 STX @LOCAL02
    case 0xC1EA07: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:104 BRA @UNKNOWN6
    case 0xC1EA09: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/enter_your_name_please-jp.asm:106 LDA #CHAR::PLACEHOLDER
    case 0xC1EA0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00005C, 2); else cpu.execute_instruction<0xA9>(0x00005C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:106 LDA #CHAR::PLACEHOLDER
    // Overlapping static entry reached from 0xC1EA0B.
    case 0xC1EA0D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:107 JSR PRINT_LETTER
    case 0xC1EA0E: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/enter_your_name_please-jp.asm:108 LDX @LOCAL02
    case 0xC1EA11: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:109 INX
    case 0xC1EA13: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:110 STX @LOCAL02
    case 0xC1EA14: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/enter_your_name_please-jp.asm:112 CPX #24
    case 0xC1EA16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000018, 2); else cpu.execute_instruction<0xE0>(0x000018, 3); return true;
    // src/text/enter_your_name_please-jp.asm:112 CPX #24
    // Overlapping static entry reached from 0xC1EA16.
    case 0xC1EA18: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/enter_your_name_please-jp.asm:113 BCC @UNKNOWN5
    case 0xC1EA19: cpu.execute_instruction<0x90>(0x0000F0, 2); return true;
    // src/text/enter_your_name_please-jp.asm:114 LDX #1
    case 0xC1EA1B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please-jp.asm:114 LDX #1
    // Overlapping static entry reached from 0xC1EA1B.
    case 0xC1EA1D: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:115 LDA #0
    case 0xC1EA1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:115 LDA #0
    // Overlapping static entry reached from 0xC1EA1E.
    case 0xC1EA20: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:116 JSR UNKNOWN_C438A5
    case 0xC1EA21: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/enter_your_name_please-jp.asm:117 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EA24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000B5, 2); else cpu.execute_instruction<0xA2>(0x009AB5, 3); return true;
    // src/text/enter_your_name_please-jp.asm:117 LDX #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EA24.
    case 0xC1EA26: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:118 LDA __BSS_START__,X
    case 0xC1EA27: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:119 AND #$00FF
    case 0xC1EA2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/enter_your_name_please-jp.asm:119 AND #$00FF
    // Overlapping static entry reached from 0xC1EA2A.
    case 0xC1EA2C: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/enter_your_name_please-jp.asm:120 BEQ @UNKNOWN7
    case 0xC1EA2D: cpu.execute_instruction<0xF0>(0x00005D, 2); return true;
    // src/text/enter_your_name_please-jp.asm:121 TXA
    case 0xC1EA2F: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA30: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA32: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA33: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA35: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA36: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:122 PROMOTENEARPTRA @VIRTUAL06
    case 0xC1EA38: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please-jp.asm:123 REP #PROC_FLAGS::ACCUM8
    case 0xC1EA3A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA3C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA3E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA40: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:124 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EA42: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:125 LDA #24
    case 0xC1EA44: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000018, 2); else cpu.execute_instruction<0xA9>(0x000018, 3); return true;
    // src/text/enter_your_name_please-jp.asm:125 LDA #24
    // Overlapping static entry reached from 0xC1EA44.
    case 0xC1EA46: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:126 JSR PRINT_STRING
    case 0xC1EA47: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/enter_your_name_please-jp.asm:127 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    case 0xC1EA4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D0, 2); else cpu.execute_instruction<0xA9>(0x0089D0, 3); return true;
    // src/text/enter_your_name_please-jp.asm:127 LDA #.LOWORD(WINDOW_STATS) + window_stats::text_x
    // Overlapping static entry reached from 0xC1EA4A.
    case 0xC1EA4C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000285, 3); return true;
    // src/text/enter_your_name_please-jp.asm:128 STA @VIRTUAL02
    case 0xC1EA4D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:128 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC1EA4C.
    case 0xC1EA4E: cpu.execute_instruction<0x02>(0x0000AD, 2); return true;
    // src/text/enter_your_name_please-jp.asm:129 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EA4F: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/enter_your_name_please-jp.asm:130 ASL
    case 0xC1EA52: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:131 TAX
    case 0xC1EA53: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:132 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EA54: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EA57.
    case 0xC1EA59: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:133 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA5A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/enter_your_name_please-jp.asm:134 CLC
    case 0xC1EA5E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:135 ADC @VIRTUAL02
    case 0xC1EA5F: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:136 TAX
    case 0xC1EA61: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:137 LDA __BSS_START__,X
    case 0xC1EA62: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:138 CMP #24
    case 0xC1EA65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000018, 2); else cpu.execute_instruction<0xC9>(0x000018, 3); return true;
    // src/text/enter_your_name_please-jp.asm:138 CMP #24
    // Overlapping static entry reached from 0xC1EA65.
    case 0xC1EA67: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // src/text/enter_your_name_please-jp.asm:139 BCS @UNKNOWN8
    case 0xC1EA68: cpu.execute_instruction<0xB0>(0x000031, 2); return true;
    // src/text/enter_your_name_please-jp.asm:140 LDA #CHAR::BULLET
    case 0xC1EA6A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/enter_your_name_please-jp.asm:140 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EA6A.
    case 0xC1EA6C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:141 JSR PRINT_LETTER
    case 0xC1EA6D: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/enter_your_name_please-jp.asm:142 LDA CURRENT_FOCUS_WINDOW
    case 0xC1EA70: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/enter_your_name_please-jp.asm:143 ASL
    case 0xC1EA73: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:144 TAX
    case 0xC1EA74: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:145 LDA OPEN_WINDOW_TABLE,X
    case 0xC1EA75: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA78: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // include/macros.asm:729 LDY #amount
    // Macro caller: src/text/enter_your_name_please-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1EA78.
    case 0xC1EA7A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:730 JSL MULT168
    // Macro caller: src/text/enter_your_name_please-jp.asm:146 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(window_stats)
    case 0xC1EA7B: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/enter_your_name_please-jp.asm:147 CLC
    case 0xC1EA7F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:148 ADC @VIRTUAL02
    case 0xC1EA80: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:149 TAX
    case 0xC1EA82: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:150 LDA __BSS_START__,X
    case 0xC1EA83: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:151 DEC
    case 0xC1EA86: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:152 STA __BSS_START__,X
    case 0xC1EA87: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:153 BRA @UNKNOWN8
    case 0xC1EA8A: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/text/enter_your_name_please-jp.asm:155 LDA #CHAR::BULLET
    case 0xC1EA8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000040, 3); return true;
    // src/text/enter_your_name_please-jp.asm:155 LDA #CHAR::BULLET
    // Overlapping static entry reached from 0xC1EA8C.
    case 0xC1EA8E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:156 JSR PRINT_LETTER
    case 0xC1EA8F: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/enter_your_name_please-jp.asm:157 LDX #1
    case 0xC1EA92: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/enter_your_name_please-jp.asm:157 LDX #1
    // Overlapping static entry reached from 0xC1EA92.
    case 0xC1EA94: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:158 LDA #0
    case 0xC1EA95: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/enter_your_name_please-jp.asm:158 LDA #0
    // Overlapping static entry reached from 0xC1EA95.
    case 0xC1EA97: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:159 JSR UNKNOWN_C438A5
    case 0xC1EA98: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/enter_your_name_please-jp.asm:161 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    case 0xC1EA9B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B5, 2); else cpu.execute_instruction<0xA9>(0x009AB5, 3); return true;
    // src/text/enter_your_name_please-jp.asm:161 LDA #.LOWORD(GAME_STATE) + game_state::earthbound_playername
    // Overlapping static entry reached from 0xC1EA9B.
    case 0xC1EA9D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:162 STA @VIRTUAL02
    case 0xC1EA9E: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:163 LDA #2
    case 0xC1EAA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/enter_your_name_please-jp.asm:163 LDA #2
    // Overlapping static entry reached from 0xC1EAA0.
    case 0xC1EAA2: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/enter_your_name_please-jp.asm:164 STA @LOCAL00
    case 0xC1EAA3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/enter_your_name_please-jp.asm:165 LDA #.LOWORD(-1)
    case 0xC1EAA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/enter_your_name_please-jp.asm:165 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1EAA5.
    case 0xC1EAA7: cpu.execute_instruction<0xFF>(0xA41085, 4); return true;
    // src/text/enter_your_name_please-jp.asm:166 STA @LOCAL00+2
    case 0xC1EAA8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:167 LDY @VIRTUAL02
    case 0xC1EAAA: cpu.execute_instruction<0xA4>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:167 LDY @VIRTUAL02
    // Overlapping static entry reached from 0xC1EAA7.
    case 0xC1EAAB: cpu.execute_instruction<0x02>(0x0000A2, 2); return true;
    // src/text/enter_your_name_please-jp.asm:168 LDX #24
    case 0xC1EAAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000018, 2); else cpu.execute_instruction<0xA2>(0x000018, 3); return true;
    // src/text/enter_your_name_please-jp.asm:168 LDX #24
    // Overlapping static entry reached from 0xC1EAAC.
    case 0xC1EAAE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:169 LDA #WINDOW::UNKNOWN27
    case 0xC1EAAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/text/enter_your_name_please-jp.asm:169 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAAF.
    case 0xC1EAB1: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:170 JSR TEXT_INPUT_DIALOG
    case 0xC1EAB2: cpu.execute_instruction<0x20>(0x00E498, 3); return true;
    // src/text/enter_your_name_please-jp.asm:171 TAY
    case 0xC1EAB5: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:172 STY @LOCAL01
    case 0xC1EAB6: cpu.execute_instruction<0x84>(0x000012, 2); return true;
    // src/text/enter_your_name_please-jp.asm:173 LDX @VIRTUAL02
    case 0xC1EAB8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/enter_your_name_please-jp.asm:174 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC1EABA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // src/text/enter_your_name_please-jp.asm:174 LDA #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1EABA.
    case 0xC1EABC: cpu.execute_instruction<0x9F>(0xA33522, 4); return true;
    // src/text/enter_your_name_please-jp.asm:175 JSL UNKNOWN_C4D065
    case 0xC1EABD: cpu.execute_instruction<0x22>(0xC4A335, 4); return true;
    // src/text/enter_your_name_please-jp.asm:175 JSL UNKNOWN_C4D065
    // Overlapping static entry reached from 0xC1EABC.
    case 0xC1EAC0: cpu.execute_instruction<0xC4>(0x0000A9, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EAC0.
    case 0xC1EAC2: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC1EAC1.
    case 0xC1EAC3: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC6: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EAC9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EACA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/enter_your_name_please-jp.asm:176 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC1EACC: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/enter_your_name_please-jp.asm:177 REP #PROC_FLAGS::ACCUM8
    case 0xC1EACE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/enter_your_name_please-jp.asm:178 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1EAD6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/enter_your_name_please-jp.asm:179 LDX #.SIZEOF(game_state::mother2_playername)
    case 0xC1EAD8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:179 LDX #.SIZEOF(game_state::mother2_playername)
    // Overlapping static entry reached from 0xC1EAD8.
    case 0xC1EADA: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/enter_your_name_please-jp.asm:180 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    case 0xC1EADB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x009AA9, 3); return true;
    // src/text/enter_your_name_please-jp.asm:180 LDA #.LOWORD(GAME_STATE) + game_state::mother2_playername
    // Overlapping static entry reached from 0xC1EADB.
    case 0xC1EADD: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/enter_your_name_please-jp.asm:181 JSL MEMCPY16
    case 0xC1EADE: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/text/enter_your_name_please-jp.asm:183 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    case 0xC1EAE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001C, 2); else cpu.execute_instruction<0xA9>(0x00001C, 3); return true;
    // src/text/enter_your_name_please-jp.asm:183 LDA #WINDOW::FILE_SELECT_NAMING_KEYBOARD
    // Overlapping static entry reached from 0xC1EAE2.
    case 0xC1EAE4: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:184 JSR CLOSE_WINDOW
    case 0xC1EAE5: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/text/enter_your_name_please-jp.asm:185 LDA #WINDOW::UNKNOWN27
    case 0xC1EAE8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000027, 2); else cpu.execute_instruction<0xA9>(0x000027, 3); return true;
    // src/text/enter_your_name_please-jp.asm:185 LDA #WINDOW::UNKNOWN27
    // Overlapping static entry reached from 0xC1EAE8.
    case 0xC1EAEA: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/enter_your_name_please-jp.asm:186 JSR CLOSE_WINDOW
    case 0xC1EAEB: cpu.execute_instruction<0x20>(0x000141, 3); return true;
    // src/text/enter_your_name_please-jp.asm:187 LDY @LOCAL01
    case 0xC1EAEE: cpu.execute_instruction<0xA4>(0x000012, 2); return true;
    // src/text/enter_your_name_please-jp.asm:188 TYA
    case 0xC1EAF0: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/enter_your_name_please-jp.asm:189 END_C_FUNCTION
    case 0xC1EAF1: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/enter_your_name_please-jp.asm:189 END_C_FUNCTION
    case 0xC1EAF2: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/fix_attacker_name.asm (source_named).
bool execute_text_fix_attacker_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_attacker_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23AB9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABD: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23ABE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23ABE.
    case 0xC23AC0: cpu.execute_instruction<0xFF>(0xA8685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23AC1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/fix_attacker_name.asm:10 END_STACK_VARS
    case 0xC23AC2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:11 TAY
    case 0xC23AC3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:12 STY @LOCAL03
    case 0xC23AC4: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC23AC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    case 0xC23AC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    case 0xC23ACA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:17 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC23AC8.
    case 0xC23ACB: cpu.execute_instruction<0x0E>(0x000CA2, 3); return true;
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    case 0xC23ACC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/fix_attacker_name.asm:18 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    // Overlapping static entry reached from 0xC23ACC.
    case 0xC23ACE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_attacker_name.asm:19 REP #PROC_FLAGS::ACCUM8
    case 0xC23ACF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23AD1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x00AB85, 3); return true;
    // src/text/fix_attacker_name.asm:20 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23AD1.
    case 0xC23AD3: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:21 JSL MEMSET16
    case 0xC23AD4: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/text/fix_attacker_name.asm:22 LDX CURRENT_ATTACKER
    case 0xC23AD8: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC23ADB: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    case 0xC23ADE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC23ADE.
    case 0xC23AE0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:25 CMP #1
    case 0xC23AE1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:25 CMP #1
    // Overlapping static entry reached from 0xC23AE1.
    case 0xC23AE3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_attacker_name.asm:26 BEQ @UNKNOWN0
    case 0xC23AE4: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/fix_attacker_name.asm:27 LDX CURRENT_ATTACKER
    case 0xC23AE6: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:28 LDA a:battler::npc_id,X
    case 0xC23AE9: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    case 0xC23AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC23AEC.
    case 0xC23AEE: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23AEF: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_attacker_name.asm:30 BEQL @UNKNOWN4
    case 0xC23AF1: cpu.execute_instruction<0x4C>(0x003BC6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF4.
    case 0xC23AF6: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AF7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF6.
    case 0xC23AF8: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AF9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF8.
    case 0xC23AFA: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23AF9.
    case 0xC23AFB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_attacker_name.asm:32 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23AFC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/fix_attacker_name.asm:33 LDX CURRENT_ATTACKER
    case 0xC23AFE: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:34 LDA a:battler::id,X
    case 0xC23B01: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    case 0xC23B04: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/text/fix_attacker_name.asm:35 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23B04.
    case 0xC23B06: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_attacker_name.asm:36 JSL MULT168
    case 0xC23B07: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/fix_attacker_name.asm:40 CLC
    case 0xC23B0B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:41 ADC @VIRTUAL06
    case 0xC23B0C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/fix_attacker_name.asm:42 STA @VIRTUAL06
    case 0xC23B0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/fix_attacker_name.asm:43 STA @LOCAL00
    case 0xC23B10: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/fix_attacker_name.asm:44 LDA @VIRTUAL06+2
    case 0xC23B12: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/fix_attacker_name.asm:45 STA @LOCAL00+2
    case 0xC23B14: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    case 0xC23B16: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/text/fix_attacker_name.asm:46 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23B16.
    case 0xC23B18: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x00AB85, 3); return true;
    // src/text/fix_attacker_name.asm:47 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23B19.
    case 0xC23B1B: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:48 JSR COPY_ENEMY_NAME
    case 0xC23B1C: cpu.execute_instruction<0x20>(0x003A50, 3); return true;
    // src/text/fix_attacker_name.asm:49 TAX
    case 0xC23B1F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:50 STX @LOCAL02
    case 0xC23B20: cpu.execute_instruction<0x86>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:51 LDX CURRENT_ATTACKER
    case 0xC23B22: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:52 LDA a:battler::ally_or_enemy,X
    case 0xC23B25: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    case 0xC23B28: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC23B28.
    case 0xC23B2A: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:54 CMP #1
    case 0xC23B2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:54 CMP #1
    // Overlapping static entry reached from 0xC23B2B.
    case 0xC23B2D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_attacker_name.asm:55 BNE @UNKNOWN2
    case 0xC23B2E: cpu.execute_instruction<0xD0>(0x000055, 2); return true;
    // src/text/fix_attacker_name.asm:56 LDY @LOCAL03
    case 0xC23B30: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:57 BNE @UNKNOWN_M2
    case 0xC23B32: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/text/fix_attacker_name.asm:58 LDX CURRENT_ATTACKER
    case 0xC23B34: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:59 LDA a:battler::the_flag,X
    case 0xC23B37: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    case 0xC23B3A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:60 AND #$00FF
    // Overlapping static entry reached from 0xC23B3A.
    case 0xC23B3C: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:61 CMP #1
    case 0xC23B3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:61 CMP #1
    // Overlapping static entry reached from 0xC23B3D.
    case 0xC23B3F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_attacker_name.asm:62 BNE @UNKNOWN1
    case 0xC23B40: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:63 LDX CURRENT_ATTACKER
    case 0xC23B42: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:64 LDA a:battler::unknown76,X
    case 0xC23B45: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/text/fix_attacker_name.asm:65 JSL UNKNOWN_C2B66A
    case 0xC23B48: cpu.execute_instruction<0x22>(0xC2B60F, 4); return true;
    // src/text/fix_attacker_name.asm:66 REP #PROC_FLAGS::ACCUM8
    case 0xC23B4C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    case 0xC23B4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC23B4E.
    case 0xC23B50: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_attacker_name.asm:68 CMP #2
    case 0xC23B51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/fix_attacker_name.asm:68 CMP #2
    // Overlapping static entry reached from 0xC23B51.
    case 0xC23B53: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_attacker_name.asm:69 BEQ @UNKNOWN_M2
    case 0xC23B54: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/fix_attacker_name.asm:72 LDX CURRENT_ATTACKER
    case 0xC23B56: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B59: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:74 LDA a:battler::the_flag,X
    case 0xC23B5B: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_attacker_name.asm:75 CLC
    case 0xC23B5E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:76 ADC #CHAR::A_ - 1
    case 0xC23B5F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x00A640, 3); return true;
    // src/text/fix_attacker_name.asm:77 LDX @LOCAL02
    case 0xC23B61: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:77 LDX @LOCAL02
    // Overlapping static entry reached from 0xC23B5F.
    case 0xC23B62: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/text/fix_attacker_name.asm:78 STA __BSS_START__,X
    case 0xC23B63: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:78 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B62.
    case 0xC23B64: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_attacker_name.asm:80 LDY @LOCAL03
    case 0xC23B66: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/fix_attacker_name.asm:81 BEQ @UNKNOWN2
    case 0xC23B68: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/fix_attacker_name.asm:82 REP #PROC_FLAGS::ACCUM8
    case 0xC23B6A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:83 LDA ENEMIES_IN_BATTLE
    case 0xC23B6C: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/text/fix_attacker_name.asm:84 CMP #1
    case 0xC23B6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_attacker_name.asm:84 CMP #1
    // Overlapping static entry reached from 0xC23B6F.
    case 0xC23B71: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/fix_attacker_name.asm:85 BLTEQ @UNKNOWN2
    case 0xC23B72: cpu.execute_instruction<0x90>(0x000011, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/fix_attacker_name.asm:85 BLTEQ @UNKNOWN2
    case 0xC23B74: cpu.execute_instruction<0xF0>(0x00000F, 2); return true;
    // src/text/fix_attacker_name.asm:86 SEP #PROC_FLAGS::ACCUM8
    case 0xC23B76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:87 LDA #102
    case 0xC23B78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000066, 2); else cpu.execute_instruction<0xA9>(0x00A666, 3); return true;
    // src/text/fix_attacker_name.asm:88 LDX @LOCAL02
    case 0xC23B7A: cpu.execute_instruction<0xA6>(0x000014, 2); return true;
    // src/text/fix_attacker_name.asm:88 LDX @LOCAL02
    // Overlapping static entry reached from 0xC23B78.
    case 0xC23B7B: cpu.execute_instruction<0x14>(0x00009D, 2); return true;
    // src/text/fix_attacker_name.asm:89 STA __BSS_START__,X
    case 0xC23B7C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:89 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B7B.
    case 0xC23B7D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_attacker_name.asm:90 INX
    case 0xC23B7F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:91 LDA #118
    case 0xC23B80: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x009D76, 3); return true;
    // src/text/fix_attacker_name.asm:92 STA __BSS_START__,X
    case 0xC23B82: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23B80.
    case 0xC23B83: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_attacker_name.asm:111 LDX CURRENT_ATTACKER
    case 0xC23B85: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:112 REP #PROC_FLAGS::ACCUM8
    case 0xC23B88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:113 LDA a:battler::id,X
    case 0xC23B8A: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    case 0xC23B8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0000A0, 3); return true;
    // src/text/fix_attacker_name.asm:114 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23B8D.
    case 0xC23B8F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_attacker_name.asm:115 BNE @UNKNOWN3
    case 0xC23B90: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B92: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x009ACD, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23B92.
    case 0xC23B94: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B95: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B97: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B98: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B9A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B9B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_attacker_name.asm:116 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23B9D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/fix_attacker_name.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC23B9F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_attacker_name.asm:118 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23BA7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_attacker_name.asm:119 LDX #6
    case 0xC23BA9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/fix_attacker_name.asm:119 LDX #6
    // Overlapping static entry reached from 0xC23BA9.
    case 0xC23BAB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23BAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x00AB85, 3); return true;
    // src/text/fix_attacker_name.asm:120 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23BAC.
    case 0xC23BAE: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:121 JSL MEMCPY16
    case 0xC23BAF: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/text/fix_attacker_name.asm:122 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BB3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:123 STZ ATTACKER_NAME_ADJUST_SCRATCH+6
    case 0xC23BB5: cpu.execute_instruction<0x9C>(0x00AB8B, 3); return true;
    // src/text/fix_attacker_name.asm:126 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    case 0xC23BB8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/fix_attacker_name.asm:126 LDX #.SIZEOF(enemy_data::name) + .SIZEOF(char_struct::name) - 2
    // Overlapping static entry reached from 0xC23BB8.
    case 0xC23BBA: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_attacker_name.asm:130 REP #PROC_FLAGS::ACCUM8
    case 0xC23BBB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    case 0xC23BBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000085, 2); else cpu.execute_instruction<0xA9>(0x00AB85, 3); return true;
    // src/text/fix_attacker_name.asm:131 LDA #.LOWORD(ATTACKER_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23BBD.
    case 0xC23BBF: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:132 JSL REDIRECT_C1AC4A
    case 0xC23BC0: cpu.execute_instruction<0x22>(0xC1DB4D, 4); return true;
    // src/text/fix_attacker_name.asm:138 BRA @UNKNOWN6
    case 0xC23BC4: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/fix_attacker_name.asm:140 LDX CURRENT_ATTACKER
    case 0xC23BC6: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:141 LDA a:battler::id,X
    case 0xC23BC9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_attacker_name.asm:142 CMP #4
    case 0xC23BCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/fix_attacker_name.asm:142 CMP #4
    // Overlapping static entry reached from 0xC23BCC.
    case 0xC23BCE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23BCF: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_attacker_name.asm:143 BGT @UNKNOWN6
    case 0xC23BD1: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    case 0xC23BD3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/text/fix_attacker_name.asm:144 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23BD3.
    case 0xC23BD5: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/fix_attacker_name.asm:145 STX @LOCAL01
    case 0xC23BD6: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/fix_attacker_name.asm:146 LDX CURRENT_ATTACKER
    case 0xC23BD8: cpu.execute_instruction<0xAE>(0x00AB72, 3); return true;
    // src/text/fix_attacker_name.asm:147 LDA a:battler::row,X
    case 0xC23BDB: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    case 0xC23BDE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_attacker_name.asm:148 AND #$00FF
    // Overlapping static entry reached from 0xC23BDE.
    case 0xC23BE0: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    case 0xC23BE1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/fix_attacker_name.asm:149 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23BE1.
    case 0xC23BE3: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_attacker_name.asm:150 JSL MULT168
    case 0xC23BE4: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/fix_attacker_name.asm:151 CLC
    case 0xC23BE8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23BE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/text/fix_attacker_name.asm:152 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23BE9.
    case 0xC23BEB: cpu.execute_instruction<0x9C>(0x0012A6, 3); return true;
    // src/text/fix_attacker_name.asm:153 LDX @LOCAL01
    case 0xC23BEC: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/fix_attacker_name.asm:154 JSL REDIRECT_C1AC4A
    case 0xC23BEE: cpu.execute_instruction<0x22>(0xC1DB4D, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23BF2: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_attacker_name.asm:156 END_C_FUNCTION
    case 0xC23BF3: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/fix_target_name.asm (source_named).
bool execute_text_fix_target_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/fix_target_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC23BF4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BF6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BF7: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC23BF8.
    case 0xC23BFA: cpu.execute_instruction<0xFF>(0x20E25B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/fix_target_name.asm:10 END_STACK_VARS
    case 0xC23BFB: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:11 SEP #PROC_FLAGS::ACCUM8
    case 0xC23BFC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:13 LDA #0
    case 0xC23BFE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // src/text/fix_target_name.asm:14 STA @LOCAL00
    case 0xC23C00: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/fix_target_name.asm:14 STA @LOCAL00
    // Overlapping static entry reached from 0xC23BFE.
    case 0xC23C01: cpu.execute_instruction<0x0E>(0x000CA2, 3); return true;
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    case 0xC23C02: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000C, 2); else cpu.execute_instruction<0xA2>(0x00000C, 3); return true;
    // src/text/fix_target_name.asm:19 LDX #.SIZEOF(enemy_data::name) + 2
    // Overlapping static entry reached from 0xC23C02.
    case 0xC23C04: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_target_name.asm:20 REP #PROC_FLAGS::ACCUM8
    case 0xC23C05: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23C07: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00AB91, 3); return true;
    // src/text/fix_target_name.asm:21 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23C07.
    case 0xC23C09: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:22 JSL MEMSET16
    case 0xC23C0A: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/text/fix_target_name.asm:23 LDX CURRENT_TARGET
    case 0xC23C0E: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:24 LDA a:battler::ally_or_enemy,X
    case 0xC23C11: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_target_name.asm:25 AND #$00FF
    case 0xC23C14: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC23C14.
    case 0xC23C16: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:26 CMP #1
    case 0xC23C17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_target_name.asm:26 CMP #1
    // Overlapping static entry reached from 0xC23C17.
    case 0xC23C19: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_target_name.asm:27 BEQ @UNKNOWN0
    case 0xC23C1A: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/text/fix_target_name.asm:28 LDX CURRENT_TARGET
    case 0xC23C1C: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:29 LDA a:battler::npc_id,X
    case 0xC23C1F: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/text/fix_target_name.asm:30 AND #$00FF
    case 0xC23C22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:30 AND #$00FF
    // Overlapping static entry reached from 0xC23C22.
    case 0xC23C24: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23C25: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/fix_target_name.asm:31 BEQL @UNKNOWN4
    case 0xC23C27: cpu.execute_instruction<0x4C>(0x003CD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C2A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2A.
    case 0xC23C2C: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C2D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2C.
    case 0xC23C2E: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2E.
    case 0xC23C30: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC23C2F.
    case 0xC23C31: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/fix_target_name.asm:33 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC23C32: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/fix_target_name.asm:34 LDX CURRENT_TARGET
    case 0xC23C34: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:35 LDA __BSS_START__,X
    case 0xC23C37: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    case 0xC23C3A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/text/fix_target_name.asm:36 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC23C3A.
    case 0xC23C3C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_target_name.asm:37 JSL MULT168
    case 0xC23C3D: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/fix_target_name.asm:41 CLC
    case 0xC23C41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:42 ADC @VIRTUAL06
    case 0xC23C42: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/fix_target_name.asm:43 STA @VIRTUAL06
    case 0xC23C44: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/fix_target_name.asm:44 STA @LOCAL00
    case 0xC23C46: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/fix_target_name.asm:45 LDA @VIRTUAL08
    case 0xC23C48: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/fix_target_name.asm:46 STA @LOCAL00 + 2
    case 0xC23C4A: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    case 0xC23C4C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000A, 2); else cpu.execute_instruction<0xA2>(0x00000A, 3); return true;
    // src/text/fix_target_name.asm:47 LDX #.SIZEOF(enemy_data::name)
    // Overlapping static entry reached from 0xC23C4C.
    case 0xC23C4E: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23C4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00AB91, 3); return true;
    // src/text/fix_target_name.asm:48 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23C4F.
    case 0xC23C51: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:49 JSR COPY_ENEMY_NAME
    case 0xC23C52: cpu.execute_instruction<0x20>(0x003A50, 3); return true;
    // src/text/fix_target_name.asm:50 TAX
    case 0xC23C55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:51 STX @LOCAL01
    case 0xC23C56: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/fix_target_name.asm:52 LDX CURRENT_TARGET
    case 0xC23C58: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:53 LDA a:battler::ally_or_enemy,X
    case 0xC23C5B: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/fix_target_name.asm:54 AND #$00FF
    case 0xC23C5E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:54 AND #$00FF
    // Overlapping static entry reached from 0xC23C5E.
    case 0xC23C60: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:55 CMP #1
    case 0xC23C61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_target_name.asm:55 CMP #1
    // Overlapping static entry reached from 0xC23C61.
    case 0xC23C63: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_target_name.asm:56 BNE @UNKNOWN2
    case 0xC23C64: cpu.execute_instruction<0xD0>(0x000032, 2); return true;
    // src/text/fix_target_name.asm:57 LDX CURRENT_TARGET
    case 0xC23C66: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:58 LDA a:battler::the_flag,X
    case 0xC23C69: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_target_name.asm:59 AND #$00FF
    case 0xC23C6C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC23C6C.
    case 0xC23C6E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:60 CMP #1
    case 0xC23C6F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/fix_target_name.asm:60 CMP #1
    // Overlapping static entry reached from 0xC23C6F.
    case 0xC23C71: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_target_name.asm:61 BNE @UNKNOWN1
    case 0xC23C72: cpu.execute_instruction<0xD0>(0x000014, 2); return true;
    // src/text/fix_target_name.asm:62 LDX CURRENT_TARGET
    case 0xC23C74: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:63 LDA __BSS_START__+76,X
    case 0xC23C77: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/text/fix_target_name.asm:64 JSL UNKNOWN_C2B66A
    case 0xC23C7A: cpu.execute_instruction<0x22>(0xC2B60F, 4); return true;
    // src/text/fix_target_name.asm:65 REP #PROC_FLAGS::ACCUM8
    case 0xC23C7E: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:66 AND #$00FF
    case 0xC23C80: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:66 AND #$00FF
    // Overlapping static entry reached from 0xC23C80.
    case 0xC23C82: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/fix_target_name.asm:67 CMP #2
    case 0xC23C83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/fix_target_name.asm:67 CMP #2
    // Overlapping static entry reached from 0xC23C83.
    case 0xC23C85: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/fix_target_name.asm:68 BEQ @UNKNOWN2
    case 0xC23C86: cpu.execute_instruction<0xF0>(0x000010, 2); return true;
    // src/text/fix_target_name.asm:71 LDX CURRENT_TARGET
    case 0xC23C88: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:72 SEP #PROC_FLAGS::ACCUM8
    case 0xC23C8B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:86 LDA a:battler::the_flag,X
    case 0xC23C8D: cpu.execute_instruction<0xBD>(0x00000B, 3); return true;
    // src/text/fix_target_name.asm:87 CLC
    case 0xC23C90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:88 ADC #CHAR::A_ - 1
    case 0xC23C91: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000040, 2); else cpu.execute_instruction<0x69>(0x00A640, 3); return true;
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    case 0xC23C93: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/fix_target_name.asm:89 LDX @LETTER_POSITION
    // Overlapping static entry reached from 0xC23C91.
    case 0xC23C94: cpu.execute_instruction<0x12>(0x00009D, 2); return true;
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    case 0xC23C95: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:90 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC23C94.
    case 0xC23C96: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/fix_target_name.asm:92 LDX CURRENT_TARGET
    case 0xC23C98: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:93 REP #PROC_FLAGS::ACCUM8
    case 0xC23C9B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:94 LDA __BSS_START__,X
    case 0xC23C9D: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    case 0xC23CA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000A0, 2); else cpu.execute_instruction<0xC9>(0x0000A0, 3); return true;
    // src/text/fix_target_name.asm:95 CMP #ENEMY::MY_PET
    // Overlapping static entry reached from 0xC23CA0.
    case 0xC23CA2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/fix_target_name.asm:96 BNE @UNKNOWN3
    case 0xC23CA3: cpu.execute_instruction<0xD0>(0x000026, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x009ACD, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC23CA5.
    case 0xC23CA7: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CA8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAA: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CAE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/fix_target_name.asm:97 PROMOTENEARPTR GAME_STATE + game_state::pet_name, @VIRTUAL06
    case 0xC23CB0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/fix_target_name.asm:98 REP #PROC_FLAGS::ACCUM8
    case 0xC23CB2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CB4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CB6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CB8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/fix_target_name.asm:99 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC23CBA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/fix_target_name.asm:100 LDX #6
    case 0xC23CBC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000006, 2); else cpu.execute_instruction<0xA2>(0x000006, 3); return true;
    // src/text/fix_target_name.asm:100 LDX #6
    // Overlapping static entry reached from 0xC23CBC.
    case 0xC23CBE: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23CBF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00AB91, 3); return true;
    // src/text/fix_target_name.asm:101 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CBF.
    case 0xC23CC1: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:102 JSL MEMCPY16
    case 0xC23CC2: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/text/fix_target_name.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC23CC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:104 STZ TARGET_NAME_ADJUST_SCRATCH+6
    case 0xC23CC8: cpu.execute_instruction<0x9C>(0x00AB97, 3); return true;
    // src/text/fix_target_name.asm:107 LDX #.SIZEOF(enemy_data::name) + 1
    case 0xC23CCB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00000B, 2); else cpu.execute_instruction<0xA2>(0x00000B, 3); return true;
    // src/text/fix_target_name.asm:107 LDX #.SIZEOF(enemy_data::name) + 1
    // Overlapping static entry reached from 0xC23CCB.
    case 0xC23CCD: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/fix_target_name.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC23CCE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    case 0xC23CD0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000091, 2); else cpu.execute_instruction<0xA9>(0x00AB91, 3); return true;
    // src/text/fix_target_name.asm:112 LDA #.LOWORD(TARGET_NAME_ADJUST_SCRATCH)
    // Overlapping static entry reached from 0xC23CD0.
    case 0xC23CD2: cpu.execute_instruction<0xAB>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:113 JSL REDIRECT_C1ACA1
    case 0xC23CD3: cpu.execute_instruction<0x22>(0xC1DB53, 4); return true;
    // src/text/fix_target_name.asm:119 BRA @UNKNOWN6
    case 0xC23CD7: cpu.execute_instruction<0x80>(0x00002C, 2); return true;
    // src/text/fix_target_name.asm:121 LDX CURRENT_TARGET
    case 0xC23CD9: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:122 LDA __BSS_START__,X
    case 0xC23CDC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/fix_target_name.asm:123 CMP #4
    case 0xC23CDF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/fix_target_name.asm:123 CMP #4
    // Overlapping static entry reached from 0xC23CDF.
    case 0xC23CE1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23CE2: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/fix_target_name.asm:124 BGT @UNKNOWN6
    case 0xC23CE4: cpu.execute_instruction<0xB0>(0x00001F, 2); return true;
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    case 0xC23CE6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000004, 2); else cpu.execute_instruction<0xA2>(0x000004, 3); return true;
    // src/text/fix_target_name.asm:125 LDX #.SIZEOF(char_struct::name)
    // Overlapping static entry reached from 0xC23CE6.
    case 0xC23CE8: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/fix_target_name.asm:126 STX @LOCAL01
    case 0xC23CE9: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/fix_target_name.asm:127 LDX CURRENT_TARGET
    case 0xC23CEB: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/text/fix_target_name.asm:128 LDA a:battler::row,X
    case 0xC23CEE: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/text/fix_target_name.asm:129 AND #$00FF
    case 0xC23CF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/fix_target_name.asm:129 AND #$00FF
    // Overlapping static entry reached from 0xC23CF1.
    case 0xC23CF3: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    case 0xC23CF4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/fix_target_name.asm:130 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC23CF4.
    case 0xC23CF6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/fix_target_name.asm:131 JSL MULT168
    case 0xC23CF7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/fix_target_name.asm:132 CLC
    case 0xC23CFB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC23CFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/text/fix_target_name.asm:133 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC23CFC.
    case 0xC23CFE: cpu.execute_instruction<0x9C>(0x0012A6, 3); return true;
    // src/text/fix_target_name.asm:134 LDX @LOCAL01
    case 0xC23CFF: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/fix_target_name.asm:135 JSL REDIRECT_C1ACA1
    case 0xC23D01: cpu.execute_instruction<0x22>(0xC1DB53, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23D05: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/fix_target_name.asm:137 END_C_FUNCTION
    case 0xC23D06: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_active_window_address.asm (source_named).
bool execute_text_get_active_window_address_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_active_window_address.asm:3 BEGIN_C_FUNCTION
    case 0xC10504: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_active_window_address.asm:4 LDA WINDOW_HEAD
    case 0xC10506: cpu.execute_instruction<0xAD>(0x008C22, 3); return true;
    // src/text/get_active_window_address.asm:5 CMP #$FFFF
    case 0xC10509: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/get_active_window_address.asm:5 CMP #$FFFF
    // Overlapping static entry reached from 0xC10509.
    case 0xC1050B: cpu.execute_instruction<0xFF>(0xA905D0, 4); return true;
    // src/text/get_active_window_address.asm:6 BNE @UNKNOWN0
    case 0xC1050C: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    case 0xC1050E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000076, 2); else cpu.execute_instruction<0xA9>(0x008976, 3); return true;
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    // Overlapping static entry reached from 0xC1050B.
    case 0xC1050F: cpu.execute_instruction<0x76>(0x000089, 2); return true;
    // src/text/get_active_window_address.asm:7 LDA #.LOWORD(DUMMY_WINDOW)
    // Overlapping static entry reached from 0xC1050E.
    case 0xC10510: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000080, 2); else cpu.execute_instruction<0x89>(0x001380, 3); return true;
    // src/text/get_active_window_address.asm:8 BRA @UNKNOWN1
    case 0xC10511: cpu.execute_instruction<0x80>(0x000013, 2); return true;
    // src/text/get_active_window_address.asm:8 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC10510.
    case 0xC10512: cpu.execute_instruction<0x13>(0x0000AD, 2); return true;
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    case 0xC10513: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/get_active_window_address.asm:10 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10512.
    case 0xC10514: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/text/get_active_window_address.asm:11 ASL
    case 0xC10516: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:12 TAX
    case 0xC10517: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:13 LDA OPEN_WINDOW_TABLE,X
    case 0xC10518: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/get_active_window_address.asm:14 LDY #.SIZEOF(window_stats)
    case 0xC1051B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/get_active_window_address.asm:14 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC1051B.
    case 0xC1051D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_active_window_address.asm:15 JSL MULT168
    case 0xC1051E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/get_active_window_address.asm:16 CLC
    case 0xC10522: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_active_window_address.asm:17 ADC #.LOWORD(WINDOW_STATS)
    case 0xC10523: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/get_active_window_address.asm:17 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC10523.
    case 0xC10525: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000060, 2); else cpu.execute_instruction<0x89>(0x00C260, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_active_window_address.asm:19 END_C_FUNCTION
    case 0xC10526: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_argument_memory.asm (source_named).
bool execute_text_get_argument_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_argument_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC105DF: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E1: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E2: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC105E3.
    case 0xC105E5: cpu.execute_instruction<0xFF>(0x04205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_argument_memory.asm:6 END_STACK_VARS
    case 0xC105E6: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/get_argument_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC105E7: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/get_argument_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC105E5.
    case 0xC105E9: cpu.execute_instruction<0x05>(0x000018, 2); return true;
    // src/text/get_argument_memory.asm:8 CLC
    case 0xC105EA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_argument_memory.asm:9 ADC #window_stats::argument_memory
    case 0xC105EB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001B, 2); else cpu.execute_instruction<0x69>(0x00001B, 3); return true;
    // src/text/get_argument_memory.asm:9 ADC #window_stats::argument_memory
    // Overlapping static entry reached from 0xC105EB.
    case 0xC105ED: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/get_argument_memory.asm:10 TAY
    case 0xC105EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105EF: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105F2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105F4: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/get_argument_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC105F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105F9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105FB: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105FD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_argument_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC105FF: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_argument_memory.asm:13 END_C_FUNCTION
    case 0xC10601: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_argument_memory.asm:13 END_C_FUNCTION
    case 0xC10602: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_blinking_prompt.asm (source_named).
bool execute_text_get_blinking_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_blinking_prompt.asm:3 BEGIN_C_FUNCTION
    case 0xC1003E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_blinking_prompt.asm:5 LDA BLINKING_TRIANGLE_FLAG
    case 0xC10040: cpu.execute_instruction<0xAD>(0x009945, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_blinking_prompt.asm:6 END_C_FUNCTION
    case 0xC10043: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_event_flag.asm (source_named).
bool execute_text_get_event_flag_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_event_flag.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC214D0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC214D2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC214D3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC214D4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC214D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC214D5.
    case 0xC214D7: cpu.execute_instruction<0xFF>(0x3A685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC214D8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_event_flag.asm:9 END_STACK_VARS
    case 0xC214D9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:10 DEC
    case 0xC214DA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:11 STA @LOCAL00
    case 0xC214DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/get_event_flag.asm:12 LSR
    case 0xC214DD: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:13 LSR
    case 0xC214DE: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:14 LSR
    case 0xC214DF: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:15 PHA
    case 0xC214E0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:16 LDY #8
    case 0xC214E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/get_event_flag.asm:16 LDY #8
    // Overlapping static entry reached from 0xC214E1.
    case 0xC214E3: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/get_event_flag.asm:17 LDA @LOCAL00
    case 0xC214E4: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/get_event_flag.asm:18 JSL MODULUS16
    case 0xC214E6: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/text/get_event_flag.asm:19 TAX
    case 0xC214EA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:20 SEP #PROC_FLAGS::ACCUM8
    case 0xC214EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/get_event_flag.asm:21 LDA f:POWERS_OF_TWO_8BIT,X
    case 0xC214ED: cpu.execute_instruction<0xBF>(0xC43425, 4); return true;
    // src/text/get_event_flag.asm:22 PLX
    case 0xC214F1: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/get_event_flag.asm:23 AND EVENT_FLAGS,X
    case 0xC214F2: cpu.execute_instruction<0x3D>(0x009EB3, 3); return true;
    // src/text/get_event_flag.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC214F5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/get_event_flag.asm:25 AND #$00FF
    case 0xC214F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/get_event_flag.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC214F7.
    case 0xC214F9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/get_event_flag.asm:26 BEQ @UNKNOWN0
    case 0xC214FA: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/get_event_flag.asm:27 LDA #1
    case 0xC214FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/get_event_flag.asm:27 LDA #1
    // Overlapping static entry reached from 0xC214FC.
    case 0xC214FE: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/get_event_flag.asm:28 BRA @UNKNOWN1
    case 0xC214FF: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/get_event_flag.asm:30 LDA #0
    case 0xC21501: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/get_event_flag.asm:30 LDA #0
    // Overlapping static entry reached from 0xC21501.
    case 0xC21503: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_event_flag.asm:32 END_C_FUNCTION
    case 0xC21504: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_event_flag.asm:32 END_C_FUNCTION
    case 0xC21505: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_party_character_name.asm (source_named).
bool execute_text_get_party_character_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_party_character_name.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC22172: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22174: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22175: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22176: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC22177: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC22177.
    case 0xC22179: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC2217A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_party_character_name.asm:8 END_STACK_VARS
    case 0xC2217B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    case 0xC2217C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/get_party_character_name.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC22179.
    case 0xC2217D: cpu.execute_instruction<0x0E>(0x0004C9, 3); return true;
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    case 0xC2217E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/text/get_party_character_name.asm:10 CMP #PARTY_MEMBER::POO
    // Overlapping static entry reached from 0xC2217E.
    case 0xC22180: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC22181: cpu.execute_instruction<0x90>(0x00004A, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/get_party_character_name.asm:11 BLTEQ @UNKNOWN1
    case 0xC22183: cpu.execute_instruction<0xF0>(0x000048, 2); return true;
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    case 0xC22185: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/get_party_character_name.asm:12 CMP #PARTY_MEMBER::KING
    // Overlapping static entry reached from 0xC22185.
    case 0xC22187: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/get_party_character_name.asm:13 BNE @UNKNOWN0
    case 0xC22188: cpu.execute_instruction<0xD0>(0x000019, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC2218A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CD, 2); else cpu.execute_instruction<0xA9>(0x009ACD, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    // Overlapping static entry reached from 0xC2218A.
    case 0xC2218C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC2218D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC2218F: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22190: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22192: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22193: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:14 PROMOTENEARPTR GAME_STATE+game_state::pet_name, @VIRTUAL06
    case 0xC22195: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/get_party_character_name.asm:15 REP #PROC_FLAGS::ACCUM8
    case 0xC22197: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC22199: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2219B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2219D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:16 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC2219F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/get_party_character_name.asm:17 BRA @RETURN
    case 0xC221A1: cpu.execute_instruction<0x80>(0x00004A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221A3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A3.
    case 0xC221A5: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221A6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A5.
    case 0xC221A7: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A7.
    case 0xC221A9: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC221A8.
    case 0xC221AA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_party_character_name.asm:19 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC221AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/get_party_character_name.asm:20 LDA @LOCAL00
    case 0xC221AD: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/get_party_character_name.asm:21 ASL
    case 0xC221AF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:22 TAX
    case 0xC221B0: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:23 INX
    case 0xC221B1: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:24 LDA f:NPC_AI_TABLE,X
    case 0xC221B2: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/text/get_party_character_name.asm:25 AND #$00FF
    case 0xC221B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/get_party_character_name.asm:25 AND #$00FF
    // Overlapping static entry reached from 0xC221B6.
    case 0xC221B8: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    case 0xC221B9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/text/get_party_character_name.asm:26 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC221B9.
    case 0xC221BB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_party_character_name.asm:27 JSL MULT168
    case 0xC221BC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/get_party_character_name.asm:31 CLC
    case 0xC221C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:32 ADC @VIRTUAL06
    case 0xC221C1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/get_party_character_name.asm:33 STA @VIRTUAL06
    case 0xC221C3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/get_party_character_name.asm:34 STA @RETURNVAL
    case 0xC221C5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/get_party_character_name.asm:35 LDA @VIRTUAL06+2
    case 0xC221C7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/get_party_character_name.asm:36 STA @RETURNVAL+2
    case 0xC221C9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/get_party_character_name.asm:37 BRA @RETURN
    case 0xC221CB: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/get_party_character_name.asm:39 DEC
    case 0xC221CD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    case 0xC221CE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/get_party_character_name.asm:40 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC221CE.
    case 0xC221D0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_party_character_name.asm:41 JSL MULT168
    case 0xC221D1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/get_party_character_name.asm:42 CLC
    case 0xC221D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC221D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/text/get_party_character_name.asm:43 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC221D6.
    case 0xC221D8: cpu.execute_instruction<0x9C>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221D9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DB: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221DF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_party_character_name.asm:44 PROMOTENEARPTRA @VIRTUAL06
    case 0xC221E1: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/get_party_character_name.asm:45 REP #PROC_FLAGS::ACCUM8
    case 0xC221E3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221E5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221E7: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221E9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_party_character_name.asm:46 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC221EB: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC221ED: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/get_party_character_name.asm:48 END_C_FUNCTION
    case 0xC221EE: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_psi_name.asm (source_named).
bool execute_text_get_psi_name_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_psi_name.asm:3 BEGIN_C_FUNCTION
    case 0xC1C26D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C26F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C270: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C271: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C272: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EC, 2); else cpu.execute_instruction<0x69>(0x00FFEC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC1C272.
    case 0xC1C274: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C275: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/get_psi_name.asm:8 END_STACK_VARS
    case 0xC1C276: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/get_psi_name.asm:9 STA @LOCAL01
    case 0xC1C277: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/get_psi_name.asm:9 STA @LOCAL01
    // Overlapping static entry reached from 0xC1C274.
    case 0xC1C278: cpu.execute_instruction<0x12>(0x0000C9, 2); return true;
    // src/text/get_psi_name.asm:10 CMP #1
    case 0xC1C279: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/get_psi_name.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C278.
    case 0xC1C27A: cpu.execute_instruction<0x01>(0x000000, 2); return true;
    // src/text/get_psi_name.asm:10 CMP #1
    // Overlapping static entry reached from 0xC1C279.
    case 0xC1C27B: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/get_psi_name.asm:11 BNE @NOT_ROCKIN
    case 0xC1C27C: cpu.execute_instruction<0xD0>(0x00000F, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C27E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x009AD9, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C27E.
    case 0xC1C280: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C281: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C283: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C284: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C286: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C287: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/get_psi_name.asm:12 PROMOTENEARPTR GAME_STATE + game_state::favourite_thing, @VIRTUAL06
    case 0xC1C289: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/get_psi_name.asm:13 BRA @UNKNOWN1
    case 0xC1C28B: cpu.execute_instruction<0x80>(0x000019, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C28D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000030, 2); else cpu.execute_instruction<0xA9>(0x009D30, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C28D.
    case 0xC1C28F: cpu.execute_instruction<0x9D>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C290: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C292: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC1C292.
    case 0xC1C294: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/get_psi_name.asm:16 LOADPTR PSI_NAME_TABLE, @VIRTUAL06
    case 0xC1C295: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/get_psi_name.asm:17 LDA @LOCAL01
    case 0xC1C297: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/get_psi_name.asm:18 DEC
    case 0xC1C299: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:555 STA scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:556 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:557 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:558 ADC scratch
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C29E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:559 ASL
    // Macro caller: src/text/get_psi_name.asm:19 OPTIMIZED_MULT @VIRTUAL04, PSI_NAME_SIZE
    case 0xC1C2A0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_psi_name.asm:20 CLC
    case 0xC1C2A1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_psi_name.asm:21 ADC @VIRTUAL06
    case 0xC1C2A2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/text/get_psi_name.asm:22 STA @VIRTUAL06
    case 0xC1C2A4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/text/get_psi_name.asm:24 REP #PROC_FLAGS::ACCUM8
    case 0xC1C2A6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2A8: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2AA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2AC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_psi_name.asm:25 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1C2AE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/get_psi_name.asm:26 LDA #.LOWORD(-1)
    case 0xC1C2B0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/get_psi_name.asm:26 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC1C2B0.
    case 0xC1C2B2: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/text/get_psi_name.asm:28 JSR PRINT_STRING
    case 0xC1C2B3: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_psi_name.asm:32 END_C_FUNCTION
    case 0xC1C2B6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_psi_name.asm:32 END_C_FUNCTION
    case 0xC1C2B7: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_secondary_memory.asm (source_named).
bool execute_text_get_secondary_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10603: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_secondary_memory.asm:5 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10605: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/get_secondary_memory.asm:6 TAX
    case 0xC10608: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_secondary_memory.asm:7 LDA a:window_stats::secondary_memory,X
    case 0xC10609: cpu.execute_instruction<0xBD>(0x00001F, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_secondary_memory.asm:8 END_C_FUNCTION
    case 0xC1060C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_text_x.asm (source_named).
bool execute_text_get_text_x_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_text_x.asm:3 BEGIN_C_FUNCTION
    case 0xC106B8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_text_x.asm:13 LDA CURRENT_FOCUS_WINDOW
    case 0xC106BA: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/get_text_x.asm:14 ASL
    case 0xC106BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_text_x.asm:15 TAX
    case 0xC106BE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_x.asm:16 LDA OPEN_WINDOW_TABLE,X
    case 0xC106BF: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/get_text_x.asm:17 LDY #.SIZEOF(window_stats)
    case 0xC106C2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/get_text_x.asm:17 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC106C2.
    case 0xC106C4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_text_x.asm:18 JSL MULT168
    case 0xC106C5: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/get_text_x.asm:19 TAX
    case 0xC106C9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_x.asm:20 LDA WINDOW_STATS+window_stats::text_x,X
    case 0xC106CA: cpu.execute_instruction<0xBD>(0x0089D0, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_text_x.asm:22 END_C_FUNCTION
    case 0xC106CD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_text_y.asm (source_named).
bool execute_text_get_text_y_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_text_y.asm:3 BEGIN_C_FUNCTION
    case 0xC106CE: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/get_text_y.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC106D0: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/get_text_y.asm:6 ASL
    case 0xC106D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/get_text_y.asm:7 TAX
    case 0xC106D4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_y.asm:8 LDA OPEN_WINDOW_TABLE,X
    case 0xC106D5: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/get_text_y.asm:9 LDY #.SIZEOF(window_stats)
    case 0xC106D8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/get_text_y.asm:9 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC106D8.
    case 0xC106DA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/get_text_y.asm:10 JSL MULT168
    case 0xC106DB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/get_text_y.asm:11 TAX
    case 0xC106DF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/get_text_y.asm:12 LDA WINDOW_STATS+window_stats::text_y,X
    case 0xC106E0: cpu.execute_instruction<0xBD>(0x0089D2, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_text_y.asm:13 END_C_FUNCTION
    case 0xC106E3: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_window_focus.asm (source_named).
bool execute_text_get_window_focus_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_window_focus.asm:3 BEGIN_C_FUNCTION
    case 0xC10135: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_window_focus.asm:3 BEGIN_C_FUNCTION
    // Overlapping static entry reached from 0xC10132.
    case 0xC10136: cpu.execute_instruction<0x31>(0x0000AD, 2); return true;
    // src/text/get_window_focus.asm:5 LDA CURRENT_FOCUS_WINDOW
    case 0xC10137: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/get_window_focus.asm:5 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC10136.
    case 0xC10138: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_window_focus.asm:6 END_C_FUNCTION
    case 0xC1013A: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/get_working_memory.asm (source_named).
bool execute_text_get_working_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/get_working_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC1060D: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC1060F: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC10610: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC10611: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F2, 2); else cpu.execute_instruction<0x69>(0x00FFF2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10611.
    case 0xC10613: cpu.execute_instruction<0xFF>(0x04205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/get_working_memory.asm:6 END_STACK_VARS
    case 0xC10614: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/get_working_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10615: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/get_working_memory.asm:7 JSR GET_ACTIVE_WINDOW_ADDRESS
    // Overlapping static entry reached from 0xC10613.
    case 0xC10617: cpu.execute_instruction<0x05>(0x000018, 2); return true;
    // src/text/get_working_memory.asm:8 CLC
    case 0xC10618: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/get_working_memory.asm:9 ADC #window_stats::working_memory
    case 0xC10619: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x000017, 3); return true;
    // src/text/get_working_memory.asm:9 ADC #window_stats::working_memory
    // Overlapping static entry reached from 0xC10619.
    case 0xC1061B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/get_working_memory.asm:10 TAY
    case 0xC1061C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC1061D: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10620: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10622: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/text/get_working_memory.asm:11 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL06
    case 0xC10625: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10627: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC10629: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1062B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/get_working_memory.asm:12 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC1062D: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/get_working_memory.asm:13 END_C_FUNCTION
    case 0xC1062F: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/get_working_memory.asm:13 END_C_FUNCTION
    case 0xC10630: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hide_hppp_windows.asm (source_named).
bool execute_text_hide_hppp_windows_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hide_hppp_windows.asm:3 BEGIN_C_FUNCTION
    case 0xC10E72: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E74: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E75: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E76: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC10E76.
    case 0xC10E78: cpu.execute_instruction<0xFF>(0xDB205B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hide_hppp_windows.asm:6 END_STACK_VARS
    case 0xC10E79: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:7 JSR UNKNOWN_C3E6F8
    case 0xC10E7A: cpu.execute_instruction<0x20>(0x000BDB, 3); return true;
    // src/text/hide_hppp_windows.asm:7 JSR UNKNOWN_C3E6F8
    // Overlapping static entry reached from 0xC10E78.
    case 0xC10E7C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:8 SEP #PROC_FLAGS::ACCUM8
    case 0xC10E7D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hide_hppp_windows.asm:9 STZ RENDER_HPPP_WINDOWS
    case 0xC10E7F: cpu.execute_instruction<0x9C>(0x008D07, 3); return true;
    // src/text/hide_hppp_windows.asm:10 REP #PROC_FLAGS::ACCUM8
    case 0xC10E82: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hide_hppp_windows.asm:11 LDA BATTLE_MODE_FLAG
    case 0xC10E84: cpu.execute_instruction<0xAD>(0x00993B, 3); return true;
    // src/text/hide_hppp_windows.asm:12 BNE @UNKNOWN2
    case 0xC10E87: cpu.execute_instruction<0xD0>(0x00004B, 2); return true;
    // src/text/hide_hppp_windows.asm:13 LDY #0
    case 0xC10E89: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/hide_hppp_windows.asm:13 LDY #0
    // Overlapping static entry reached from 0xC10E89.
    case 0xC10E8B: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/hide_hppp_windows.asm:14 STY @LOCAL00
    case 0xC10E8C: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:15 BRA @UNKNOWN1
    case 0xC10E8E: cpu.execute_instruction<0x80>(0x000037, 2); return true;
    // src/text/hide_hppp_windows.asm:17 TYA
    case 0xC10E90: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:18 JSL UNDRAW_HP_PP_WINDOW
    case 0xC10E91: cpu.execute_instruction<0x22>(0xC20782, 4); return true;
    // src/text/hide_hppp_windows.asm:19 LDY @LOCAL00
    case 0xC10E95: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:21 TYA
    case 0xC10E97: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:22 CLC
    case 0xC10E98: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:23 ADC #.LOWORD(GAME_STATE)
    case 0xC10E99: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/hide_hppp_windows.asm:23 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC10E99.
    case 0xC10E9B: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:24 TAX
    case 0xC10E9C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:25 LDA a:game_state::party_members,X
    case 0xC10E9D: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/hide_hppp_windows.asm:29 AND #$00FF
    case 0xC10EA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hide_hppp_windows.asm:29 AND #$00FF
    // Overlapping static entry reached from 0xC10EA0.
    case 0xC10EA2: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hide_hppp_windows.asm:30 DEC
    case 0xC10EA3: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:31 LDY #.SIZEOF(char_struct)
    case 0xC10EA4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/hide_hppp_windows.asm:31 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC10EA4.
    case 0xC10EA6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hide_hppp_windows.asm:32 JSL MULT168
    case 0xC10EA7: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/hide_hppp_windows.asm:33 CLC
    case 0xC10EAB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC10EAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/text/hide_hppp_windows.asm:34 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC10EAC.
    case 0xC10EAE: cpu.execute_instruction<0x9C>(0x00BDAA, 3); return true;
    // src/text/hide_hppp_windows.asm:35 TAX
    case 0xC10EAF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:36 LDA __BSS_START__ + char_struct::current_hp_target,X
    case 0xC10EB0: cpu.execute_instruction<0xBD>(0x000046, 3); return true;
    // src/text/hide_hppp_windows.asm:36 LDA __BSS_START__ + char_struct::current_hp_target,X
    // Overlapping static entry reached from 0xC10EAE.
    case 0xC10EB1: cpu.execute_instruction<0x46>(0x000000, 2); return true;
    // src/text/hide_hppp_windows.asm:37 STA __BSS_START__ + char_struct::current_hp,X
    case 0xC10EB3: cpu.execute_instruction<0x9D>(0x000044, 3); return true;
    // src/text/hide_hppp_windows.asm:38 LDA __BSS_START__ + char_struct::current_pp_target,X
    case 0xC10EB6: cpu.execute_instruction<0xBD>(0x00004C, 3); return true;
    // src/text/hide_hppp_windows.asm:39 STA __BSS_START__ + char_struct::current_pp,X
    case 0xC10EB9: cpu.execute_instruction<0x9D>(0x00004A, 3); return true;
    // src/text/hide_hppp_windows.asm:40 STZ __BSS_START__ + char_struct::current_pp_fraction,X
    case 0xC10EBC: cpu.execute_instruction<0x9E>(0x000048, 3); return true;
    // src/text/hide_hppp_windows.asm:41 STZ __BSS_START__ + char_struct::current_hp_fraction,X
    case 0xC10EBF: cpu.execute_instruction<0x9E>(0x000042, 3); return true;
    // src/text/hide_hppp_windows.asm:42 LDY @LOCAL00
    case 0xC10EC2: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:43 INY
    case 0xC10EC4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:44 STY @LOCAL00
    case 0xC10EC5: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hide_hppp_windows.asm:46 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC10EC7: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/hide_hppp_windows.asm:47 AND #$00FF
    case 0xC10ECA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hide_hppp_windows.asm:47 AND #$00FF
    // Overlapping static entry reached from 0xC10ECA.
    case 0xC10ECC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hide_hppp_windows.asm:48 STA @VIRTUAL02
    case 0xC10ECD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hide_hppp_windows.asm:49 TYA
    case 0xC10ECF: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:50 CMP @VIRTUAL02
    case 0xC10ED0: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/hide_hppp_windows.asm:51 BNE @UNKNOWN0
    case 0xC10ED2: cpu.execute_instruction<0xD0>(0x0000BC, 2); return true;
    // src/text/hide_hppp_windows.asm:53 SEP #PROC_FLAGS::ACCUM8
    case 0xC10ED4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hide_hppp_windows.asm:54 LDA #1
    case 0xC10ED6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    case 0xC10ED8: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10ED6.
    case 0xC10ED9: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/hide_hppp_windows.asm:55 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC10ED9.
    case 0xC10EDA: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/text/hide_hppp_windows.asm:56 REP #PROC_FLAGS::ACCUM8
    case 0xC10EDB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hide_hppp_windows.asm:57 END_C_FUNCTION
    case 0xC10EDD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hide_hppp_windows.asm:57 END_C_FUNCTION
    case 0xC10EDE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hide_hppp_windows_redirect.asm (source_named).
bool execute_text_hide_hppp_windows_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hide_hppp_windows_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DB1E: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/hide_hppp_windows_redirect.asm:5 JSR HIDE_HPPP_WINDOWS
    case 0xC1DB20: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/hide_hppp_windows_redirect.asm:6 END_C_FUNCTION
    case 0xC1DB23: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/draw.asm (source_named).
bool execute_text_hp_pp_window_draw_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/draw.asm:4 BEGIN_C_FUNCTION
    case 0xC203A4: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A6: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A7: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A8: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    // Overlapping static entry reached from 0xC203A9.
    case 0xC203AB: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203AC: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/draw.asm:25 END_STACK_VARS
    case 0xC203AD: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    case 0xC203AE: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:26 STA @CHAR_ID
    // Overlapping static entry reached from 0xC203AB.
    case 0xC203AF: cpu.execute_instruction<0x22>(0xA96918, 4); return true;
    // src/text/hp_pp_window/draw.asm:28 CLC
    case 0xC203B0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:29 ADC #.LOWORD(GAME_STATE)
    case 0xC203B1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/hp_pp_window/draw.asm:29 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC203B1.
    case 0xC203B3: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:30 TAX
    case 0xC203B4: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:31 LDA a:game_state::party_members,X
    case 0xC203B5: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    case 0xC203B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:36 AND #$00FF
    // Overlapping static entry reached from 0xC203B8.
    case 0xC203BA: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hp_pp_window/draw.asm:37 DEC
    case 0xC203BB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    case 0xC203BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/text/hp_pp_window/draw.asm:38 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC203BC.
    case 0xC203BE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:39 JSL MULT168
    case 0xC203BF: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/hp_pp_window/draw.asm:40 CLC
    case 0xC203C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    case 0xC203C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x009C7F, 3); return true;
    // src/text/hp_pp_window/draw.asm:41 ADC #.LOWORD(PARTY_CHARACTERS)
    // Overlapping static entry reached from 0xC203C4.
    case 0xC203C6: cpu.execute_instruction<0x9C>(0x002085, 3); return true;
    // src/text/hp_pp_window/draw.asm:42 STA @CHAR_ENTRY
    case 0xC203C7: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:43 CLC
    case 0xC203C9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    case 0xC203CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/text/hp_pp_window/draw.asm:44 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC203CA.
    case 0xC203CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:45 STA @VIRTUAL02
    case 0xC203CD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    case 0xC203CF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/hp_pp_window/draw.asm:46 LDX #1
    // Overlapping static entry reached from 0xC203CF.
    case 0xC203D1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/draw.asm:47 LDA @VIRTUAL02
    case 0xC203D2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:48 JSL UNKNOWN_C223D9
    case 0xC203D4: cpu.execute_instruction<0x22>(0xC22280, 4); return true;
    // src/text/hp_pp_window/draw.asm:49 TAY
    case 0xC203D8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:50 STY @LOCAL08
    case 0xC203D9: cpu.execute_instruction<0x84>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    case 0xC203DB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/hp_pp_window/draw.asm:51 LDX #1
    // Overlapping static entry reached from 0xC203DB.
    case 0xC203DD: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/draw.asm:52 LDA @VIRTUAL02
    case 0xC203DE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:53 JSL UNKNOWN_C223D9
    case 0xC203E0: cpu.execute_instruction<0x22>(0xC22280, 4); return true;
    // src/text/hp_pp_window/draw.asm:54 STA @VIRTUAL04
    case 0xC203E4: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:55 LDY @LOCAL08
    case 0xC203E6: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:56 TYA
    case 0xC203E8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    case 0xC203E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000F0, 2); else cpu.execute_instruction<0x29>(0x00FFF0, 3); return true;
    // src/text/hp_pp_window/draw.asm:57 AND #$FFF0
    // Overlapping static entry reached from 0xC203E9.
    case 0xC203EB: cpu.execute_instruction<0xFF>(0x046518, 4); return true;
    // src/text/hp_pp_window/draw.asm:58 CLC
    case 0xC203EC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:59 ADC @VIRTUAL04
    case 0xC203ED: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:61 TAY
    case 0xC203EF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:62 STY @LOCAL07
    case 0xC203F0: cpu.execute_instruction<0x84>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    case 0xC203F2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/text/hp_pp_window/draw.asm:66 LDY #char_struct::hp_pp_window_options
    // Overlapping static entry reached from 0xC203F2.
    case 0xC203F4: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:67 LDA (@CHAR_ENTRY),Y
    case 0xC203F5: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:68 STA @VIRTUAL04
    case 0xC203F7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:69 STA @LOCAL06
    case 0xC203F9: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:70 LDA @VIRTUAL04
    case 0xC203FB: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    case 0xC203FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000C00, 3); return true;
    // src/text/hp_pp_window/draw.asm:71 CMP #$0C00
    // Overlapping static entry reached from 0xC203FD.
    case 0xC203FF: cpu.execute_instruction<0x0C>(0x0010D0, 3); return true;
    // src/text/hp_pp_window/draw.asm:72 BNE @UNKNOWN0
    case 0xC20400: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    case 0xC20402: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000C00, 3); return true;
    // src/text/hp_pp_window/draw.asm:73 LDA #$0C00
    // Overlapping static entry reached from 0xC20402.
    case 0xC20404: cpu.execute_instruction<0x0C>(0x000285, 3); return true;
    // src/text/hp_pp_window/draw.asm:74 STA @VIRTUAL02
    case 0xC20405: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:75 STA @LOCAL05
    case 0xC20407: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:76 STA @LOCAL08
    case 0xC20409: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    case 0xC2040B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000800, 3); return true;
    // src/text/hp_pp_window/draw.asm:77 LDA #$0800
    // Overlapping static entry reached from 0xC2040B.
    case 0xC2040D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:78 STA @LOCAL04
    case 0xC2040E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:79 BRA @UNKNOWN1
    case 0xC20410: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:81 LDA @VIRTUAL02
    case 0xC20412: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:82 JSL UNKNOWN_C22474
    case 0xC20414: cpu.execute_instruction<0x22>(0xC2231B, 4); return true;
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    case 0xC20418: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000400, 3); return true;
    // src/text/hp_pp_window/draw.asm:83 LDY #$0400
    // Overlapping static entry reached from 0xC20418.
    case 0xC2041A: cpu.execute_instruction<0x04>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    case 0xC2041B: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC2041A.
    case 0xC2041C: cpu.execute_instruction<0x14>(0x000090, 2); return true;
    // src/text/hp_pp_window/draw.asm:84 JSL MULT16
    // Overlapping static entry reached from 0xC2041C.
    case 0xC2041E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000085, 2); else cpu.execute_instruction<0xC0>(0x000285, 3); return true;
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    case 0xC2041F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:85 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2041E.
    case 0xC20420: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:86 STA @LOCAL05
    case 0xC20421: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    case 0xC20423: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x001000, 3); return true;
    // src/text/hp_pp_window/draw.asm:87 LDA #$1000
    // Overlapping static entry reached from 0xC20423.
    case 0xC20425: cpu.execute_instruction<0x10>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    case 0xC20426: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:88 STA @LOCAL08
    // Overlapping static entry reached from 0xC20425.
    case 0xC20427: cpu.execute_instruction<0x1E>(0x001664, 3); return true;
    // src/text/hp_pp_window/draw.asm:89 STZ @LOCAL04
    case 0xC20428: cpu.execute_instruction<0x64>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:91 LDA BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC2042A: cpu.execute_instruction<0xAD>(0x008D08, 3); return true;
    // src/text/hp_pp_window/draw.asm:92 CMP @CHAR_ID
    case 0xC2042D: cpu.execute_instruction<0xC5>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:93 BNE @UNKNOWN2
    case 0xC2042F: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC20431: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/hp_pp_window/draw.asm:94 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20431.
    case 0xC20433: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:95 STA @LOCAL03
    case 0xC20434: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:96 BRA @UNKNOWN3
    case 0xC20436: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC20438: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/text/hp_pp_window/draw.asm:98 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC20438.
    case 0xC2043A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:99 STA @LOCAL03
    case 0xC2043B: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:101 LDA @CHAR_ID
    case 0xC2043D: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2043F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20441: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20442: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20444: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:102 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20445: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:103 PHA
    case 0xC20447: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:104 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC20448: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    case 0xC2044B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:105 AND #$00FF
    // Overlapping static entry reached from 0xC2044B.
    case 0xC2044D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC2044E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20450: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20451: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20453: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:106 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC20454: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:107 PHA
    case 0xC20456: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:108 ASL
    case 0xC20457: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:109 PLA
    case 0xC20458: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:110 ROR
    case 0xC20459: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:111 STA @VIRTUAL02
    case 0xC2045A: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    case 0xC2045C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/text/hp_pp_window/draw.asm:112 LDA #16
    // Overlapping static entry reached from 0xC2045C.
    case 0xC2045E: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/hp_pp_window/draw.asm:113 SEC
    case 0xC2045F: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:114 SBC @VIRTUAL02
    case 0xC20460: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:115 PLY
    case 0xC20462: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:116 STY @VIRTUAL02
    case 0xC20463: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:117 CLC
    case 0xC20465: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:118 ADC @VIRTUAL02
    case 0xC20466: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:119 ASL
    case 0xC20468: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:120 STA @VIRTUAL02
    case 0xC20469: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:121 LDA @LOCAL03
    case 0xC2046B: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:696 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2046D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:697 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2046E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:698 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC2046F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:699 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20470: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:700 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20471: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:701 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:122 OPTIMIZED_MULT @VIRTUAL04, SCREEN_X_TILE_RESOLUTION * 2
    case 0xC20472: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:123 CLC
    case 0xC20473: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:124 ADC @VIRTUAL02
    case 0xC20474: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:125 CLC
    case 0xC20476: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    case 0xC20477: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/text/hp_pp_window/draw.asm:126 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC20477.
    case 0xC20479: cpu.execute_instruction<0x81>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:127 TAX
    case 0xC2047A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:128 LDA @LOCAL06
    case 0xC2047B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:129 STA @VIRTUAL04
    case 0xC2047D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:130 CLC
    case 0xC2047F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    case 0xC20480: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x002004, 3); return true;
    // src/text/hp_pp_window/draw.asm:131 ADC #$2004
    // Overlapping static entry reached from 0xC20480.
    case 0xC20482: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    case 0xC20483: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:132 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20482.
    case 0xC20485: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:133 INX
    case 0xC20486: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:134 INX
    case 0xC20487: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:136 LDA #HPPP_WINDOW_WIDTH - 2
    case 0xC20488: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000005, 2); else cpu.execute_instruction<0xA9>(0x000005, 3); return true;
    // src/text/hp_pp_window/draw.asm:136 LDA #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC20488.
    case 0xC2048A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:137 STA @LOCAL01
    case 0xC2048B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:141 BRA @UNKNOWN5
    case 0xC2048D: cpu.execute_instruction<0x80>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:143 LDA @VIRTUAL04
    case 0xC2048F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:144 CLC
    case 0xC20491: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    case 0xC20492: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x002005, 3); return true;
    // src/text/hp_pp_window/draw.asm:145 ADC #$2005
    // Overlapping static entry reached from 0xC20492.
    case 0xC20494: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    case 0xC20495: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:146 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20494.
    case 0xC20497: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:147 INX
    case 0xC20498: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:148 INX
    case 0xC20499: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:150 LDA @LOCAL01
    case 0xC2049A: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:151 DEC
    case 0xC2049C: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:152 STA @LOCAL01
    case 0xC2049D: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:158 BNE @UNKNOWN4
    case 0xC2049F: cpu.execute_instruction<0xD0>(0x0000EE, 2); return true;
    // src/text/hp_pp_window/draw.asm:159 LDA @VIRTUAL04
    case 0xC204A1: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:160 CLC
    case 0xC204A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:161 ADC #$6004
    case 0xC204A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x006004, 3); return true;
    // src/text/hp_pp_window/draw.asm:161 ADC #$6004
    // Overlapping static entry reached from 0xC22B00.
    case 0xC204A5: cpu.execute_instruction<0x04>(0x000060, 2); return true;
    // src/text/hp_pp_window/draw.asm:161 ADC #$6004
    // Overlapping static entry reached from 0xC204A4.
    case 0xC204A6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:162 STA __BSS_START__,X
    case 0xC204A7: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:163 TXA
    case 0xC204AA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:164 INC
    case 0xC204AB: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:165 INC
    case 0xC204AC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:166 CLC
    case 0xC204AD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:167 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC204AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:167 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC204AE.
    case 0xC204B0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:168 TAX
    case 0xC204B1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:169 LDA @VIRTUAL04
    case 0xC204B2: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:170 CLC
    case 0xC204B4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:171 ADC #$2006
    case 0xC204B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:171 ADC #$2006
    // Overlapping static entry reached from 0xC204B5.
    case 0xC204B7: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:172 STA __BSS_START__,X
    case 0xC204B8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:172 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC204B7.
    case 0xC204BA: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/hp_pp_window/draw.asm:173 TXA
    case 0xC204BB: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:174 INC
    case 0xC204BC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:175 INC
    case 0xC204BD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:176 STA @TILEARRPTR
    case 0xC204BE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:176 STA @TILEARRPTR
    // Overlapping static entry reached from 0xC2DBC1.
    case 0xC204BF: cpu.execute_instruction<0x10>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/draw.asm:177 LDA @CHAR_ID
    case 0xC204C0: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:177 LDA @CHAR_ID
    // Overlapping static entry reached from 0xC204BF.
    case 0xC204C1: cpu.execute_instruction<0x22>(0xA96918, 4); return true;
    // src/text/hp_pp_window/draw.asm:178 CLC
    case 0xC204C2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:179 ADC #.LOWORD(GAME_STATE)
    case 0xC204C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/hp_pp_window/draw.asm:179 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC204C3.
    case 0xC204C5: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:180 TAX
    case 0xC204C6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:181 LDA a:game_state::party_members,X
    case 0xC204C7: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/hp_pp_window/draw.asm:182 AND #$00FF
    case 0xC204CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC204CA.
    case 0xC204CC: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hp_pp_window/draw.asm:183 DEC
    case 0xC204CD: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:184 ASL
    case 0xC204CE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:185 ASL
    case 0xC204CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:186 CLC
    case 0xC204D0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:187 ADC #$22A0
    case 0xC204D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A0, 2); else cpu.execute_instruction<0x69>(0x0022A0, 3); return true;
    // src/text/hp_pp_window/draw.asm:187 ADC #$22A0
    // Overlapping static entry reached from 0xC204D1.
    case 0xC204D3: cpu.execute_instruction<0x22>(0xA21485, 4); return true;
    // src/text/hp_pp_window/draw.asm:188 STA @LOCAL03
    case 0xC204D4: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:189 LDX #0
    case 0xC204D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:189 LDX #0
    // Overlapping static entry reached from 0xC204D3.
    case 0xC204D7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:189 LDX #0
    // Overlapping static entry reached from 0xC204D6.
    case 0xC204D8: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:190 BRA @UNKNOWN9
    case 0xC204D9: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/text/hp_pp_window/draw.asm:192 TXY
    case 0xC204DB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:193 LDA (@CHAR_ENTRY),Y
    case 0xC204DC: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:194 AND #$00FF
    case 0xC204DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:194 AND #$00FF
    // Overlapping static entry reached from 0xC204DE.
    case 0xC204E0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/hp_pp_window/draw.asm:195 BEQ @UNKNOWN7
    case 0xC204E1: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:196 LDA @LOCAL05
    case 0xC204E3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:197 STA @VIRTUAL02
    case 0xC204E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:198 LDA @LOCAL03
    case 0xC204E7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:199 CLC
    case 0xC204E9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:200 ADC @VIRTUAL02
    case 0xC204EA: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:201 STA (@TILEARRPTR)
    case 0xC204EC: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:202 INC @TILEARRPTR
    case 0xC204EE: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:203 INC @TILEARRPTR
    case 0xC204F0: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:204 LDA @LOCAL03
    case 0xC204F2: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:205 INC
    case 0xC204F4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:206 STA @LOCAL03
    case 0xC204F5: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:207 BRA @UNKNOWN8
    case 0xC204F7: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/hp_pp_window/draw.asm:209 LDA @LOCAL05
    case 0xC204F9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:210 STA @VIRTUAL02
    case 0xC204FB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:211 CLC
    case 0xC204FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:212 ADC #$2007
    case 0xC204FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000007, 2); else cpu.execute_instruction<0x69>(0x002007, 3); return true;
    // src/text/hp_pp_window/draw.asm:212 ADC #$2007
    // Overlapping static entry reached from 0xC204FE.
    case 0xC20500: cpu.execute_instruction<0x20>(0x001092, 3); return true;
    // src/text/hp_pp_window/draw.asm:213 STA (@TILEARRPTR)
    case 0xC20501: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:214 INC @TILEARRPTR
    case 0xC20503: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:215 INC @TILEARRPTR
    case 0xC20505: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:217 INX
    case 0xC20507: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:219 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC20508: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/text/hp_pp_window/draw.asm:219 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC20508.
    case 0xC2050A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/draw.asm:220 BNE @UNKNOWN6
    case 0xC2050B: cpu.execute_instruction<0xD0>(0x0000CE, 2); return true;
    // src/text/hp_pp_window/draw.asm:221 LDA @LOCAL05
    case 0xC2050D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:222 STA @VIRTUAL02
    case 0xC2050F: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:223 LDY @LOCAL07
    case 0xC20511: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:224 TYA
    case 0xC20513: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:225 CLC
    case 0xC20514: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:226 ADC @VIRTUAL02
    case 0xC20515: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:227 CLC
    case 0xC20517: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:228 ADC #$2000
    case 0xC20518: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/text/hp_pp_window/draw.asm:228 ADC #$2000
    // Overlapping static entry reached from 0xC20518.
    case 0xC2051A: cpu.execute_instruction<0x20>(0x001092, 3); return true;
    // src/text/hp_pp_window/draw.asm:229 STA (@TILEARRPTR)
    case 0xC2051B: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:230 LDX @TILEARRPTR
    case 0xC2051D: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:231 INX
    case 0xC2051F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:232 INX
    case 0xC20520: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:233 LDA @VIRTUAL04
    case 0xC20521: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:234 CLC
    case 0xC20523: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:235 ADC #$6006
    case 0xC20524: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:235 ADC #$6006
    // Overlapping static entry reached from 0xC20524.
    case 0xC20526: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:236 STA __BSS_START__,X
    case 0xC20527: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:237 TXA
    case 0xC2052A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:238 INC
    case 0xC2052B: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:239 INC
    case 0xC2052C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:240 CLC
    case 0xC2052D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:241 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC2052E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:241 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC2052E.
    case 0xC20530: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:242 TAX
    case 0xC20531: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:243 LDA @VIRTUAL04
    case 0xC20532: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:244 CLC
    case 0xC20534: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:245 ADC #$2006
    case 0xC20535: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:245 ADC #$2006
    // Overlapping static entry reached from 0xC20535.
    case 0xC20537: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:246 STA __BSS_START__,X
    case 0xC20538: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:246 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20537.
    case 0xC2053A: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/hp_pp_window/draw.asm:247 TXA
    case 0xC2053B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:248 INC
    case 0xC2053C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:249 INC
    case 0xC2053D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:250 STA @TILEARRPTR
    case 0xC2053E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:251 LDA @CHAR_ID
    case 0xC20540: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:252 CLC
    case 0xC20542: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:253 ADC #.LOWORD(GAME_STATE)
    case 0xC20543: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/text/hp_pp_window/draw.asm:253 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC20543.
    case 0xC20545: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:254 TAX
    case 0xC20546: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:255 LDA a:game_state::party_members,X
    case 0xC20547: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/text/hp_pp_window/draw.asm:256 AND #$00FF
    case 0xC2054A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:256 AND #$00FF
    // Overlapping static entry reached from 0xC2054A.
    case 0xC2054C: cpu.execute_instruction<0x00>(0x00003A, 2); return true;
    // src/text/hp_pp_window/draw.asm:257 DEC
    case 0xC2054D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:258 ASL
    case 0xC2054E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:259 ASL
    case 0xC2054F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:260 CLC
    case 0xC20550: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:261 ADC #$22B0
    case 0xC20551: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B0, 2); else cpu.execute_instruction<0x69>(0x0022B0, 3); return true;
    // src/text/hp_pp_window/draw.asm:261 ADC #$22B0
    // Overlapping static entry reached from 0xC20551.
    case 0xC20553: cpu.execute_instruction<0x22>(0xA21485, 4); return true;
    // src/text/hp_pp_window/draw.asm:262 STA @LOCAL03
    case 0xC20554: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    case 0xC20556: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    // Overlapping static entry reached from 0xC20553.
    case 0xC20557: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:390 LDX #0
    // Overlapping static entry reached from 0xC20556.
    case 0xC20558: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:391 BRA @UNKNOWN13
    case 0xC20559: cpu.execute_instruction<0x80>(0x000027, 2); return true;
    // src/text/hp_pp_window/draw.asm:394 TXY
    case 0xC2055B: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:395 LDA (@CHAR_ENTRY),Y
    case 0xC2055C: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:396 AND #$00FF
    case 0xC2055E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:396 AND #$00FF
    // Overlapping static entry reached from 0xC2055E.
    case 0xC20560: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/hp_pp_window/draw.asm:397 BEQ @UNKNOWN11
    case 0xC20561: cpu.execute_instruction<0xF0>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:398 LDA @LOCAL03
    case 0xC20563: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:399 CLC
    case 0xC20565: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:400 ADC @VIRTUAL02
    case 0xC20566: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:401 STA (@TILEARRPTR)
    case 0xC20568: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:402 INC @TILEARRPTR
    case 0xC2056A: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:403 INC @TILEARRPTR
    case 0xC2056C: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:404 LDA @LOCAL03
    case 0xC2056E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:405 INC
    case 0xC20570: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:406 STA @LOCAL03
    case 0xC20571: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/draw.asm:423 BRA @UNKNOWN12
    case 0xC20573: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/hp_pp_window/draw.asm:425 LDA @VIRTUAL02
    case 0xC20575: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:426 CLC
    case 0xC20577: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    case 0xC20578: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000017, 2); else cpu.execute_instruction<0x69>(0x002017, 3); return true;
    // src/text/hp_pp_window/draw.asm:427 ADC #$2017
    // Overlapping static entry reached from 0xC20578.
    case 0xC2057A: cpu.execute_instruction<0x20>(0x001092, 3); return true;
    // src/text/hp_pp_window/draw.asm:428 STA (@TILEARRPTR)
    case 0xC2057B: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:429 INC @TILEARRPTR
    case 0xC2057D: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:430 INC @TILEARRPTR
    case 0xC2057F: cpu.execute_instruction<0xE6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:432 INX
    case 0xC20581: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    case 0xC20582: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000004, 2); else cpu.execute_instruction<0xE0>(0x000004, 3); return true;
    // src/text/hp_pp_window/draw.asm:434 CPX #HPPP_WINDOW_WIDTH - 3
    // Overlapping static entry reached from 0xC20582.
    case 0xC20584: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/draw.asm:435 BNE @UNKNOWN10
    case 0xC20585: cpu.execute_instruction<0xD0>(0x0000D4, 2); return true;
    // src/text/hp_pp_window/draw.asm:437 LDY @LOCAL07
    case 0xC20587: cpu.execute_instruction<0xA4>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:438 TYA
    case 0xC20589: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:439 CLC
    case 0xC2058A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:440 ADC @VIRTUAL02
    case 0xC2058B: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:446 CLC
    case 0xC2058D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    case 0xC2058E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x002010, 3); return true;
    // src/text/hp_pp_window/draw.asm:447 ADC #$2010
    // Overlapping static entry reached from 0xC2058E.
    case 0xC20590: cpu.execute_instruction<0x20>(0x001092, 3); return true;
    // src/text/hp_pp_window/draw.asm:448 STA (@TILEARRPTR)
    case 0xC20591: cpu.execute_instruction<0x92>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:449 LDX @TILEARRPTR
    case 0xC20593: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/hp_pp_window/draw.asm:450 INX
    case 0xC20595: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:451 INX
    case 0xC20596: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:453 LDA @VIRTUAL04
    case 0xC20597: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:458 CLC
    case 0xC20599: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    case 0xC2059A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:459 ADC #$6006
    // Overlapping static entry reached from 0xC2059A.
    case 0xC2059C: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:460 STA __BSS_START__,X
    case 0xC2059D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:461 TXA
    case 0xC205A0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:462 INC
    case 0xC205A1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:463 INC
    case 0xC205A2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:464 CLC
    case 0xC205A3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC205A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:465 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC205A4.
    case 0xC205A6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:466 STA @VIRTUAL02
    case 0xC205A7: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    case 0xC205A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000042, 2); else cpu.execute_instruction<0xA0>(0x000042, 3); return true;
    // src/text/hp_pp_window/draw.asm:467 LDY #char_struct::current_hp_fraction
    // Overlapping static entry reached from 0xC205A9.
    case 0xC205AB: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:468 LDA (@CHAR_ENTRY),Y
    case 0xC205AC: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:469 TAY
    case 0xC205AE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:471 STY @LOCAL05
    case 0xC205AF: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    case 0xC205B1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/text/hp_pp_window/draw.asm:475 LDY #char_struct::current_hp
    // Overlapping static entry reached from 0xC205B1.
    case 0xC205B3: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:476 LDA (@CHAR_ENTRY),Y
    case 0xC205B4: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:477 TAX
    case 0xC205B6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:478 LDA @CHAR_ID
    case 0xC205B7: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:480 LDY @LOCAL05
    case 0xC205B9: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:484 JSR FILL_CHARACTER_HP_TILE_BUFFER
    case 0xC205BB: cpu.execute_instruction<0x20>(0x000D99, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000DA, 2); else cpu.execute_instruction<0xA9>(0x00E3DA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205BE.
    case 0xC205C0: cpu.execute_instruction<0xE3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205C1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205C0.
    case 0xC205C2: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205C2.
    case 0xC205C4: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    // Overlapping static entry reached from 0xC205C3.
    case 0xC205C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/text/hp_pp_window/draw.asm:485 LOADPTR UNKNOWN_C3E3F8, @VIRTUAL06
    case 0xC205C6: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/hp_pp_window/draw.asm:486 LDA @CHAR_ID
    case 0xC205C8: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205D0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:487 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC205D1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:488 CLC
    case 0xC205D2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    case 0xC205D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A7, 2); else cpu.execute_instruction<0x69>(0x008CA7, 3); return true;
    // src/text/hp_pp_window/draw.asm:489 ADC #.LOWORD(HPPP_WINDOW_BUFFER)
    // Overlapping static entry reached from 0xC205D3.
    case 0xC205D5: cpu.execute_instruction<0x8C>(0x00A2A8, 3); return true;
    // src/text/hp_pp_window/draw.asm:490 TAY
    case 0xC205D6: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    case 0xC205D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC205D5.
    case 0xC205D8: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:491 LDX #2
    // Overlapping static entry reached from 0xC205D7.
    case 0xC205D9: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/hp_pp_window/draw.asm:492 STX @LOCAL01
    case 0xC205DA: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:493 BRA @UNKNOWN19
    case 0xC205DC: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/text/hp_pp_window/draw.asm:495 LDA @LOCAL06
    case 0xC205DE: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:496 STA @VIRTUAL04
    case 0xC205E0: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:497 CLC
    case 0xC205E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    case 0xC205E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:498 ADC #$2006
    // Overlapping static entry reached from 0xC205E3.
    case 0xC205E5: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:499 LDX @VIRTUAL02
    case 0xC205E6: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:500 STA __BSS_START__,X
    case 0xC205E8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:501 INC @VIRTUAL02
    case 0xC205EB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:502 INC @VIRTUAL02
    case 0xC205ED: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    case 0xC205EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:503 LDA #2
    // Overlapping static entry reached from 0xC205EF.
    case 0xC205F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:504 STA @LOCAL07
    case 0xC205F2: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:505 BRA @UNKNOWN16
    case 0xC205F4: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:507 LDA [@VIRTUAL06]
    case 0xC205F6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    case 0xC205F8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:508 AND #$00FF
    // Overlapping static entry reached from 0xC205F8.
    case 0xC205FA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:509 CLC
    case 0xC205FB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:510 ADC @LOCAL08
    case 0xC205FC: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:511 CLC
    case 0xC205FE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    case 0xC205FF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/text/hp_pp_window/draw.asm:512 ADC #$2000
    // Overlapping static entry reached from 0xC205FF.
    case 0xC20601: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:513 LDX @VIRTUAL02
    case 0xC20602: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:514 STA __BSS_START__,X
    case 0xC20604: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:515 INC @VIRTUAL06
    case 0xC20607: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:516 INC @VIRTUAL02
    case 0xC20609: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:517 INC @VIRTUAL02
    case 0xC2060B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:518 LDA @LOCAL07
    case 0xC2060D: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:519 DEC
    case 0xC2060F: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:520 STA @LOCAL07
    case 0xC20610: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:522 BNE @UNKNOWN15
    case 0xC20612: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC20614: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/hp_pp_window/draw.asm:523 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC20614.
    case 0xC20616: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:524 STA @LOCAL07
    case 0xC20617: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:525 BRA @UNKNOWN18
    case 0xC20619: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:527 LDA __BSS_START__,Y
    case 0xC2061B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:528 CLC
    case 0xC2061E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:529 ADC @LOCAL04
    case 0xC2061F: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:530 LDX @VIRTUAL02
    case 0xC20621: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:531 STA __BSS_START__,X
    case 0xC20623: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:532 INY
    case 0xC20626: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:533 INY
    case 0xC20627: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:534 INC @VIRTUAL02
    case 0xC20628: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:535 INC @VIRTUAL02
    case 0xC2062A: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:536 LDA @LOCAL07
    case 0xC2062C: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:537 DEC
    case 0xC2062E: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:538 STA @LOCAL07
    case 0xC2062F: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:540 BNE @UNKNOWN17
    case 0xC20631: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:541 LDA @VIRTUAL04
    case 0xC20633: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:542 CLC
    case 0xC20635: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    case 0xC20636: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:543 ADC #$6006
    // Overlapping static entry reached from 0xC20636.
    case 0xC20638: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:544 LDX @VIRTUAL02
    case 0xC20639: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:545 STA __BSS_START__,X
    case 0xC2063B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:546 LDA @VIRTUAL02
    case 0xC2063E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:547 INC
    case 0xC20640: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:548 INC
    case 0xC20641: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:549 CLC
    case 0xC20642: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC20643: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:550 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20643.
    case 0xC20645: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:551 STA @VIRTUAL02
    case 0xC20646: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:552 LDX @LOCAL01
    case 0xC20648: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:553 DEX
    case 0xC2064A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:554 STX @LOCAL01
    case 0xC2064B: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:556 BNE @UNKNOWN14
    case 0xC2064D: cpu.execute_instruction<0xD0>(0x00008F, 2); return true;
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    case 0xC2064F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000048, 2); else cpu.execute_instruction<0xA0>(0x000048, 3); return true;
    // src/text/hp_pp_window/draw.asm:557 LDY #char_struct::current_pp_fraction
    // Overlapping static entry reached from 0xC2064F.
    case 0xC20651: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:558 LDA (@CHAR_ENTRY),Y
    case 0xC20652: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:559 STA @LOCAL00
    case 0xC20654: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    case 0xC20656: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004A, 2); else cpu.execute_instruction<0xA0>(0x00004A, 3); return true;
    // src/text/hp_pp_window/draw.asm:560 LDY #char_struct::current_pp
    // Overlapping static entry reached from 0xC20656.
    case 0xC20658: cpu.execute_instruction<0x00>(0x0000B1, 2); return true;
    // src/text/hp_pp_window/draw.asm:561 LDA (@CHAR_ENTRY),Y
    case 0xC20659: cpu.execute_instruction<0xB1>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:562 TAY
    case 0xC2065B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:563 LDA @CHAR_ENTRY
    case 0xC2065C: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/text/hp_pp_window/draw.asm:564 CLC
    case 0xC2065E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    case 0xC2065F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000D, 2); else cpu.execute_instruction<0x69>(0x00000D, 3); return true;
    // src/text/hp_pp_window/draw.asm:565 ADC #char_struct::afflictions
    // Overlapping static entry reached from 0xC2065F.
    case 0xC20661: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/draw.asm:566 TAX
    case 0xC20662: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:567 LDA @CHAR_ID
    case 0xC20663: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/text/hp_pp_window/draw.asm:568 JSR FILL_CHARACTER_PP_TILE_BUFFER
    case 0xC20665: cpu.execute_instruction<0x20>(0x000DB7, 3); return true;
    // src/text/hp_pp_window/draw.asm:569 LDA @CHAR_ID
    case 0xC20668: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066D: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC2066F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20670: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/draw.asm:570 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20671: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:571 CLC
    case 0xC20672: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    case 0xC20673: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B3, 2); else cpu.execute_instruction<0x69>(0x008CB3, 3); return true;
    // src/text/hp_pp_window/draw.asm:572 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + hp_pp_window_buffer::pp1
    // Overlapping static entry reached from 0xC20673.
    case 0xC20675: cpu.execute_instruction<0x8C>(0x00A2A8, 3); return true;
    // src/text/hp_pp_window/draw.asm:573 TAY
    case 0xC20676: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    case 0xC20677: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000002, 2); else cpu.execute_instruction<0xA2>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC20675.
    case 0xC20678: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:574 LDX #2
    // Overlapping static entry reached from 0xC20677.
    case 0xC20679: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/hp_pp_window/draw.asm:575 STX @LOCAL01
    case 0xC2067A: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:576 BRA @UNKNOWN25
    case 0xC2067C: cpu.execute_instruction<0x80>(0x00006F, 2); return true;
    // src/text/hp_pp_window/draw.asm:578 LDA @LOCAL06
    case 0xC2067E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:579 STA @VIRTUAL04
    case 0xC20680: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:580 CLC
    case 0xC20682: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    case 0xC20683: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x002006, 3); return true;
    // src/text/hp_pp_window/draw.asm:581 ADC #$2006
    // Overlapping static entry reached from 0xC20683.
    case 0xC20685: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:582 LDX @VIRTUAL02
    case 0xC20686: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:583 STA __BSS_START__,X
    case 0xC20688: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:584 INC @VIRTUAL02
    case 0xC2068B: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:585 INC @VIRTUAL02
    case 0xC2068D: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    case 0xC2068F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/hp_pp_window/draw.asm:586 LDA #2
    // Overlapping static entry reached from 0xC2068F.
    case 0xC20691: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:587 STA @LOCAL07
    case 0xC20692: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:588 BRA @UNKNOWN22
    case 0xC20694: cpu.execute_instruction<0x80>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:590 LDA [@VIRTUAL06]
    case 0xC20696: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    case 0xC20698: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/draw.asm:591 AND #$00FF
    // Overlapping static entry reached from 0xC20698.
    case 0xC2069A: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/hp_pp_window/draw.asm:592 CLC
    case 0xC2069B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:593 ADC @LOCAL08
    case 0xC2069C: cpu.execute_instruction<0x65>(0x00001E, 2); return true;
    // src/text/hp_pp_window/draw.asm:594 CLC
    case 0xC2069E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    case 0xC2069F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002000, 3); return true;
    // src/text/hp_pp_window/draw.asm:595 ADC #$2000
    // Overlapping static entry reached from 0xC2069F.
    case 0xC206A1: cpu.execute_instruction<0x20>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:596 LDX @VIRTUAL02
    case 0xC206A2: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:597 STA __BSS_START__,X
    case 0xC206A4: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:597 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2C8CE.
    case 0xC206A5: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:598 INC @VIRTUAL06
    case 0xC206A7: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/hp_pp_window/draw.asm:599 INC @VIRTUAL02
    case 0xC206A9: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:600 INC @VIRTUAL02
    case 0xC206AB: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:601 LDA @LOCAL07
    case 0xC206AD: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:602 DEC
    case 0xC206AF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:603 STA @LOCAL07
    case 0xC206B0: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:605 BNE @UNKNOWN21
    case 0xC206B2: cpu.execute_instruction<0xD0>(0x0000E2, 2); return true;
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    case 0xC206B4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/hp_pp_window/draw.asm:606 LDA #HPPP_WINDOW_WIDTH - 4
    // Overlapping static entry reached from 0xC206B4.
    case 0xC206B6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:607 STA @LOCAL07
    case 0xC206B7: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:608 BRA @UNKNOWN24
    case 0xC206B9: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:610 LDA __BSS_START__,Y
    case 0xC206BB: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:611 CLC
    case 0xC206BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:612 ADC @LOCAL04
    case 0xC206BF: cpu.execute_instruction<0x65>(0x000016, 2); return true;
    // src/text/hp_pp_window/draw.asm:613 LDX @VIRTUAL02
    case 0xC206C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:614 STA __BSS_START__,X
    case 0xC206C3: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:615 INY
    case 0xC206C6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:616 INY
    case 0xC206C7: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:617 INC @VIRTUAL02
    case 0xC206C8: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:618 INC @VIRTUAL02
    case 0xC206CA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:619 LDA @LOCAL07
    case 0xC206CC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:620 DEC
    case 0xC206CE: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:621 STA @LOCAL07
    case 0xC206CF: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/text/hp_pp_window/draw.asm:623 BNE @UNKNOWN23
    case 0xC206D1: cpu.execute_instruction<0xD0>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:624 LDA @VIRTUAL04
    case 0xC206D3: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:625 CLC
    case 0xC206D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    case 0xC206D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000006, 2); else cpu.execute_instruction<0x69>(0x006006, 3); return true;
    // src/text/hp_pp_window/draw.asm:626 ADC #$6006
    // Overlapping static entry reached from 0xC206D6.
    case 0xC206D8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:627 LDX @VIRTUAL02
    case 0xC206D9: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:628 STA __BSS_START__,X
    case 0xC206DB: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:629 LDA @VIRTUAL02
    case 0xC206DE: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:630 INC
    case 0xC206E0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:631 INC
    case 0xC206E1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:632 CLC
    case 0xC206E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    case 0xC206E3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/draw.asm:633 ADC #SCREEN_X_TILE_RESOLUTION * 2 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC206E3.
    case 0xC206E5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/draw.asm:634 STA @VIRTUAL02
    case 0xC206E6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:635 LDX @LOCAL01
    case 0xC206E8: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:636 DEX
    case 0xC206EA: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:637 STX @LOCAL01
    case 0xC206EB: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/draw.asm:639 BNE @UNKNOWN20
    case 0xC206ED: cpu.execute_instruction<0xD0>(0x00008F, 2); return true;
    // src/text/hp_pp_window/draw.asm:640 LDA @LOCAL06
    case 0xC206EF: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/hp_pp_window/draw.asm:641 STA @VIRTUAL04
    case 0xC206F1: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:642 CLC
    case 0xC206F3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    case 0xC206F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x00A004, 3); return true;
    // src/text/hp_pp_window/draw.asm:643 ADC #$A004
    // Overlapping static entry reached from 0xC206F4.
    case 0xC206F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000A6, 2); else cpu.execute_instruction<0xA0>(0x0002A6, 3); return true;
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    case 0xC206F7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:644 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC206F6.
    case 0xC206F8: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/text/hp_pp_window/draw.asm:645 STA __BSS_START__,X
    case 0xC206F9: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:646 LDX @VIRTUAL02
    case 0xC206FC: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/draw.asm:647 INX
    case 0xC206FE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:648 INX
    case 0xC206FF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    case 0xC20700: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/text/hp_pp_window/draw.asm:649 LDY #HPPP_WINDOW_WIDTH - 2
    // Overlapping static entry reached from 0xC20700.
    case 0xC20702: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/draw.asm:650 BRA @UNKNOWN27
    case 0xC20703: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/text/hp_pp_window/draw.asm:652 LDA @VIRTUAL04
    case 0xC20705: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:653 CLC
    case 0xC20707: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    case 0xC20708: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000005, 2); else cpu.execute_instruction<0x69>(0x00A005, 3); return true;
    // src/text/hp_pp_window/draw.asm:654 ADC #$A005
    // Overlapping static entry reached from 0xC20708.
    case 0xC2070A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00009D, 2); else cpu.execute_instruction<0xA0>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    case 0xC2070B: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2070A.
    case 0xC2070C: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:655 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2070A.
    case 0xC2070D: cpu.execute_instruction<0x00>(0x0000E8, 2); return true;
    // src/text/hp_pp_window/draw.asm:656 INX
    case 0xC2070E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:657 INX
    case 0xC2070F: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:658 DEY
    case 0xC20710: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:660 BNE @UNKNOWN26
    case 0xC20711: cpu.execute_instruction<0xD0>(0x0000F2, 2); return true;
    // src/text/hp_pp_window/draw.asm:661 LDA @VIRTUAL04
    case 0xC20713: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/draw.asm:662 CLC
    case 0xC20715: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    case 0xC20716: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000004, 2); else cpu.execute_instruction<0x69>(0x00E004, 3); return true;
    // src/text/hp_pp_window/draw.asm:663 ADC #$E004
    // Overlapping static entry reached from 0xC20716.
    case 0xC20718: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x00009D, 2); else cpu.execute_instruction<0xE0>(0x00009D, 3); return true;
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    case 0xC20719: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20718.
    case 0xC2071A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/draw.asm:664 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20718.
    case 0xC2071B: cpu.execute_instruction<0x00>(0x00002B, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2071C: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/draw.asm:665 END_C_FUNCTION
    case 0xC2071D: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm (source_named).
bool execute_text_hp_pp_window_fill_character_hp_tile_buffer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20D99: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9B: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9D: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20D9E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    // Overlapping static entry reached from 0xC20D9E.
    case 0xC20DA0: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20DA1: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:9 END_STACK_VARS
    case 0xC20DA2: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:10 STY @LOCAL00
    case 0xC20DA3: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:10 STY @LOCAL00
    // Overlapping static entry reached from 0xC20DA0.
    case 0xC20DA4: cpu.execute_instruction<0x0E>(0x000285, 3); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:11 STA @VIRTUAL02
    case 0xC20DA5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:12 TXA
    case 0xC20DA7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:13 JSR SEPARATE_DECIMAL_DIGITS
    case 0xC20DA8: cpu.execute_instruction<0x20>(0x000BD0, 3); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:13 JSR SEPARATE_DECIMAL_DIGITS
    // Overlapping static entry reached from 0xC2B5D8.
    case 0xC20DA9: cpu.execute_instruction<0xD0>(0x00000B, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:14 LDY @LOCAL00
    case 0xC20DAB: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:15 LDX #0
    case 0xC20DAD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:15 LDX #0
    // Overlapping static entry reached from 0xC20DAD.
    case 0xC20DAF: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:16 LDA @VIRTUAL02
    case 0xC20DB0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:17 JSR FILL_HP_PP_TILE_BUFFER
    case 0xC20DB2: cpu.execute_instruction<0x20>(0x000C56, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:18 END_C_FUNCTION
    case 0xC20DB5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_character_hp_tile_buffer.asm:18 END_C_FUNCTION
    case 0xC20DB6: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm (source_named).
bool execute_text_hp_pp_window_fill_character_pp_tile_buffer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20DB7: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20DB9: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20DBA: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20DBB: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20DBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC20DBC.
    case 0xC20DBE: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20DBF: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:10 END_STACK_VARS
    case 0xC20DC0: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:11 STY @VIRTUAL04
    case 0xC20DC1: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:11 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC20DBE.
    case 0xC20DC2: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:12 STA @VIRTUAL02
    case 0xC20DC3: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:12 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20DC2.
    case 0xC20DC4: cpu.execute_instruction<0x02>(0x0000A4, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:13 LDY @PARAM03
    case 0xC20DC5: cpu.execute_instruction<0xA4>(0x00001E, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:14 STY @LOCAL00
    case 0xC20DC7: cpu.execute_instruction<0x84>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:15 LDA __BSS_START__ + STATUS_GROUP::CONCENTRATION,X
    case 0xC20DC9: cpu.execute_instruction<0xBD>(0x000004, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:16 AND #$00FF
    case 0xC20DCC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC20DCC.
    case 0xC20DCE: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:17 BEQ @CAN_CONCENTRATE
    case 0xC20DCF: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:18 LDA @VIRTUAL02
    case 0xC20DD1: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:19 JSR FILL_HP_PP_TILE_BUFFER_X
    case 0xC20DD3: cpu.execute_instruction<0x20>(0x000C1A, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:20 BRA @RETURN
    case 0xC20DD6: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:22 LDA @VIRTUAL04
    case 0xC20DD8: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:23 JSR SEPARATE_DECIMAL_DIGITS
    case 0xC20DDA: cpu.execute_instruction<0x20>(0x000BD0, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:24 LDY @LOCAL00
    case 0xC20DDD: cpu.execute_instruction<0xA4>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:25 LDX #1
    case 0xC20DDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:25 LDX #1
    // Overlapping static entry reached from 0xC20DDF.
    case 0xC20DE1: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:26 LDA @VIRTUAL02
    case 0xC20DE2: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:27 JSR FILL_HP_PP_TILE_BUFFER
    case 0xC20DE4: cpu.execute_instruction<0x20>(0x000C56, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:29 END_C_FUNCTION
    case 0xC20DE7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_character_pp_tile_buffer.asm:29 END_C_FUNCTION
    case 0xC20DE8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_tile_buffer.asm (source_named).
bool execute_text_hp_pp_window_fill_tile_buffer_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:3 BEGIN_C_FUNCTION
    case 0xC20C56: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C58: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C59: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    // Overlapping static entry reached from 0xC20C5B.
    case 0xC20C5D: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:13 END_STACK_VARS
    case 0xC20C5F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    case 0xC20C60: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:14 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20C5D.
    case 0xC20C61: cpu.execute_instruction<0x02>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:15 TAX
    case 0xC20C62: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    case 0xC20C63: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x003000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:16 CPY #$3000
    // Overlapping static entry reached from 0xC20C63.
    case 0xC20C65: cpu.execute_instruction<0x30>(0x0000B0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    case 0xC20C66: cpu.execute_instruction<0xB0>(0x000007, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:17 BCS @UNKNOWN0
    // Overlapping static entry reached from 0xC20C65.
    case 0xC20C67: cpu.execute_instruction<0x07>(0x0000A9, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    case 0xC20C68: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20C67.
    case 0xC20C69: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:18 LDA #0
    // Overlapping static entry reached from 0xC20C68.
    case 0xC20C6A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:19 STA @LOCAL04
    case 0xC20C6B: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:20 BRA @UNKNOWN1
    case 0xC20C6D: cpu.execute_instruction<0x80>(0x000007, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:22 TYA
    case 0xC20C6F: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:23 SEC
    case 0xC20C70: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    case 0xC20C71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xE9>(0x000000, 2); else cpu.execute_instruction<0xE9>(0x003000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:24 SBC #$3000
    // Overlapping static entry reached from 0xC20C71.
    case 0xC20C73: cpu.execute_instruction<0x30>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    case 0xC20C74: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:25 STA @LOCAL04
    // Overlapping static entry reached from 0xC20C73.
    case 0xC20C75: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x003400, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C75.
    case 0xC20C77: cpu.execute_instruction<0x00>(0x000034, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C76.
    case 0xC20C78: cpu.execute_instruction<0x34>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C79: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C78.
    case 0xC20C7A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    // Overlapping static entry reached from 0xC20C7B.
    case 0xC20C7D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:27 MOVE_INT_CONSTANT $3400, @VIRTUAL0A ;13312/65536 is close to 1/5. 13107/65536 is closer, but more expensive
    case 0xC20C7E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:865 LDA src
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20C80: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20C82: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:28 MOVE_INT1632 @LOCAL04, @VIRTUAL06
    case 0xC20C84: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:29 JSL DIVISION32
    case 0xC20C86: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:30 LDA @VIRTUAL06
    case 0xC20C8A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:31 TAY
    case 0xC20C8C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:32 LDA @VIRTUAL02
    case 0xC20C8D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C8F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C91: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C92: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C94: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:33 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC20C95: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:34 STA @VIRTUAL02
    case 0xC20C96: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:35 TXA
    case 0xC20C98: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C99: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9C: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C9F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:36 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20CA0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:37 CLC
    case 0xC20CA1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:38 ADC @VIRTUAL02
    case 0xC20CA2: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:39 CLC
    case 0xC20CA4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    case 0xC20CA5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AB, 2); else cpu.execute_instruction<0x69>(0x008CAB, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:40 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + .SIZEOF(hp_pp_window_buffer::hp1) - (1 * 2)
    // Overlapping static entry reached from 0xC20CA5.
    case 0xC20CA7: cpu.execute_instruction<0x8C>(0x00ADAA, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:41 TAX
    case 0xC20CA8: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    case 0xC20CA9: cpu.execute_instruction<0xAD>(0x008CA6, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:42 LDA HPPP_WINDOW_DIGIT_BUFFER + 2
    // Overlapping static entry reached from 0xC20CA7.
    case 0xC20CAA: cpu.execute_instruction<0xA6>(0x00008C, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    case 0xC20CAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:43 AND #$00FF
    // Overlapping static entry reached from 0xC20CAC.
    case 0xC20CAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:44 STA @LOCAL03
    case 0xC20CAF: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:45 LDA HPPP_WINDOW_DIGIT_BUFFER + 1
    case 0xC20CB1: cpu.execute_instruction<0xAD>(0x008CA5, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    case 0xC20CB4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC20CB4.
    case 0xC20CB6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:47 STA @VIRTUAL04
    case 0xC20CB7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:48 LDA HPPP_WINDOW_DIGIT_BUFFER
    case 0xC20CB9: cpu.execute_instruction<0xAD>(0x008CA4, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    case 0xC20CBC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:49 AND #$00FF
    // Overlapping static entry reached from 0xC20CBC.
    case 0xC20CBE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:50 STA @LOCAL02
    case 0xC20CBF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:51 LDA @LOCAL03
    case 0xC20CC1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:52 LSR
    case 0xC20CC3: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:53 LSR
    case 0xC20CC4: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:54 ASL
    case 0xC20CC5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:55 ASL
    case 0xC20CC6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:56 ASL
    case 0xC20CC7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:57 ASL
    case 0xC20CC8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:58 STA @VIRTUAL02
    case 0xC20CC9: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:59 LDA @LOCAL03
    case 0xC20CCB: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:60 ASL
    case 0xC20CCD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:61 ASL
    case 0xC20CCE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:62 CLC
    case 0xC20CCF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:63 ADC @VIRTUAL02
    case 0xC20CD0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:64 STY @VIRTUAL02
    case 0xC20CD2: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:65 CLC
    case 0xC20CD4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:66 ADC @VIRTUAL02
    case 0xC20CD5: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:67 CLC
    case 0xC20CD7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    case 0xC20CD8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002600, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:68 ADC #$2600
    // Overlapping static entry reached from 0xC20CD8.
    case 0xC20CDA: cpu.execute_instruction<0x26>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    case 0xC20CDB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:69 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC20CDA.
    case 0xC20CDC: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:70 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20CDD: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:71 LDA @VIRTUAL02
    case 0xC20CE0: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:72 CLC
    case 0xC20CE2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    case 0xC20CE3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:73 ADC #$0010
    // Overlapping static entry reached from 0xC20CE3.
    case 0xC20CE5: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:74 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20CE6: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:75 TXA
    case 0xC20CE9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:76 DEC
    case 0xC20CEA: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:77 DEC
    case 0xC20CEB: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:78 STA @VIRTUAL02
    case 0xC20CEC: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:79 STA @LOCAL01
    case 0xC20CEE: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:80 LDA @VIRTUAL04
    case 0xC20CF0: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:81 BNE @UNKNOWN2
    case 0xC20CF2: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:82 LDA @LOCAL02
    case 0xC20CF4: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:83 BNE @UNKNOWN2
    case 0xC20CF6: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    case 0xC20CF8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000048, 2); else cpu.execute_instruction<0xA2>(0x000248, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:84 LDX #$0248
    // Overlapping static entry reached from 0xC20CF8.
    case 0xC20CFA: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:85 BRA @UNKNOWN3
    case 0xC20CFB: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    case 0xC20CFD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:87 LDX #$0200
    // Overlapping static entry reached from 0xC20CFD.
    case 0xC20CFF: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:89 LDA @LOCAL03
    case 0xC20D00: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    case 0xC20D02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:90 CMP #9
    // Overlapping static entry reached from 0xC20D02.
    case 0xC20D04: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:91 BNE @UNKNOWN4
    case 0xC20D05: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    case 0xC20D07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:92 CPY #0
    // Overlapping static entry reached from 0xC20D07.
    case 0xC20D09: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:93 BNE @UNKNOWN5
    case 0xC20D0A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    case 0xC20D0C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:95 LDY #0
    // Overlapping static entry reached from 0xC20D0C.
    case 0xC20D0E: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:97 LDA @VIRTUAL04
    case 0xC20D0F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:98 LSR
    case 0xC20D11: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:99 LSR
    case 0xC20D12: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:100 ASL
    case 0xC20D13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:101 ASL
    case 0xC20D14: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:102 ASL
    case 0xC20D15: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:103 ASL
    case 0xC20D16: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:104 STA @VIRTUAL02
    case 0xC20D17: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:105 LDA @VIRTUAL04
    case 0xC20D19: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:106 ASL
    case 0xC20D1B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:107 ASL
    case 0xC20D1C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:108 CLC
    case 0xC20D1D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:109 ADC @VIRTUAL02
    case 0xC20D1E: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:110 STY @VIRTUAL02
    case 0xC20D20: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:111 CLC
    case 0xC20D22: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:112 ADC @VIRTUAL02
    case 0xC20D23: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:113 STX @VIRTUAL02
    case 0xC20D25: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:114 CLC
    case 0xC20D27: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:115 ADC @VIRTUAL02
    case 0xC20D28: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:116 CLC
    case 0xC20D2A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    case 0xC20D2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:117 ADC #$2400
    // Overlapping static entry reached from 0xC20D2B.
    case 0xC20D2D: cpu.execute_instruction<0x24>(0x0000A6, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    case 0xC20D2E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:118 LDX @LOCAL01
    // Overlapping static entry reached from 0xC20D2D.
    case 0xC20D2F: cpu.execute_instruction<0x10>(0x000086, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    case 0xC20D30: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:119 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC20D2F.
    case 0xC20D31: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:120 STA __BSS_START__,X
    case 0xC20D32: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:121 CLC
    case 0xC20D35: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    case 0xC20D36: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:122 ADC #$0010
    // Overlapping static entry reached from 0xC20D36.
    case 0xC20D38: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:123 LDX @VIRTUAL02
    case 0xC20D39: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:124 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20D3B: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:125 LDA @VIRTUAL02
    case 0xC20D3E: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:126 DEC
    case 0xC20D40: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:127 DEC
    case 0xC20D41: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:128 STA @LOCAL00
    case 0xC20D42: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:129 LDA @LOCAL02
    case 0xC20D44: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:130 BNE @UNKNOWN6
    case 0xC20D46: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    case 0xC20D48: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000048, 2); else cpu.execute_instruction<0xA2>(0x000248, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:131 LDX #$0248
    // Overlapping static entry reached from 0xC20D48.
    case 0xC20D4A: cpu.execute_instruction<0x02>(0x000080, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:132 BRA @UNKNOWN7
    case 0xC20D4B: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    case 0xC20D4D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000200, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:134 LDX #$0200
    // Overlapping static entry reached from 0xC20D4D.
    case 0xC20D4F: cpu.execute_instruction<0x02>(0x0000A5, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:136 LDA @VIRTUAL04
    case 0xC20D50: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    case 0xC20D52: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000009, 2); else cpu.execute_instruction<0xC9>(0x000009, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:137 CMP #9
    // Overlapping static entry reached from 0xC20D52.
    case 0xC20D54: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:138 BNE @UNKNOWN8
    case 0xC20D55: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    case 0xC20D57: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:139 CPY #0
    // Overlapping static entry reached from 0xC20D57.
    case 0xC20D59: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:140 BNE @UNKNOWN9
    case 0xC20D5A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    case 0xC20D5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:142 LDY #0
    // Overlapping static entry reached from 0xC20D5C.
    case 0xC20D5E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:144 STY @VIRTUAL04
    case 0xC20D5F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:145 LDA @LOCAL02
    case 0xC20D61: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:146 LSR
    case 0xC20D63: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:147 LSR
    case 0xC20D64: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:148 ASL
    case 0xC20D65: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:149 ASL
    case 0xC20D66: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:150 ASL
    case 0xC20D67: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:151 ASL
    case 0xC20D68: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:152 STA @VIRTUAL02
    case 0xC20D69: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:153 LDA @LOCAL02
    case 0xC20D6B: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:154 ASL
    case 0xC20D6D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:155 ASL
    case 0xC20D6E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:156 CLC
    case 0xC20D6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:157 ADC @VIRTUAL02
    case 0xC20D70: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:158 CLC
    case 0xC20D72: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:159 ADC @VIRTUAL04
    case 0xC20D73: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:160 STX @VIRTUAL02
    case 0xC20D75: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:161 CLC
    case 0xC20D77: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:162 ADC @VIRTUAL02
    case 0xC20D78: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:163 CLC
    case 0xC20D7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    case 0xC20D7B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000000, 2); else cpu.execute_instruction<0x69>(0x002400, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:164 ADC #$2400
    // Overlapping static entry reached from 0xC20D7B.
    case 0xC20D7D: cpu.execute_instruction<0x24>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:165 TAX
    case 0xC20D7E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:166 STX @LOCAL02
    case 0xC20D7F: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:167 PHX
    case 0xC20D81: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:168 LDA @LOCAL00
    case 0xC20D82: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:169 TAX
    case 0xC20D84: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:170 PLA
    case 0xC20D85: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:171 STA __BSS_START__ + hp_pp_window_buffer::hp1,X
    case 0xC20D86: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:172 LDA @LOCAL00
    case 0xC20D89: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:173 PHA
    case 0xC20D8B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:174 LDX @LOCAL02
    case 0xC20D8C: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:175 TXA
    case 0xC20D8E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:176 CLC
    case 0xC20D8F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    case 0xC20D90: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:177 ADC #$0010
    // Overlapping static entry reached from 0xC20D90.
    case 0xC20D92: cpu.execute_instruction<0x00>(0x0000FA, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:178 PLX
    case 0xC20D93: cpu.execute_instruction<0xFA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer.asm:179 STA __BSS_START__ + hp_pp_window_buffer::hp2,X
    case 0xC20D94: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20D97: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer.asm:180 END_C_FUNCTION
    case 0xC20D98: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/fill_tile_buffer_x.asm (source_named).
bool execute_text_hp_pp_window_fill_tile_buffer_x_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:3 BEGIN_C_FUNCTION
    case 0xC20C1A: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20C1C: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20C1D: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20C1E: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20C1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20C1F.
    case 0xC20C21: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20C22: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:7 END_STACK_VARS
    case 0xC20C23: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C24: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:623 STA scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    // Overlapping static entry reached from 0xC20C21.
    case 0xC20C25: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:624 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:625 ADC scratch
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C27: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:626 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:627 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:628 ASL
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:8 OPTIMIZED_MULT @VIRTUAL04, 24
    case 0xC20C2B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:9 CLC
    case 0xC20C2C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:10 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    case 0xC20C2D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000B3, 2); else cpu.execute_instruction<0x69>(0x008CB3, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:10 ADC #.LOWORD(HPPP_WINDOW_BUFFER) + 12
    // Overlapping static entry reached from 0xC20C2D.
    case 0xC20C2F: cpu.execute_instruction<0x8C>(0x00A9AA, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:11 TAX
    case 0xC20C30: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    case 0xC20C31: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    // Overlapping static entry reached from 0xC20C2F.
    case 0xC20C32: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:12 LDA #0
    // Overlapping static entry reached from 0xC20C31.
    case 0xC20C33: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:13 STA @LOCAL00
    case 0xC20C34: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:14 BRA @UNKNOWN1
    case 0xC20C36: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:16 CLC
    case 0xC20C38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    case 0xC20C39: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004C, 2); else cpu.execute_instruction<0x69>(0x00264C, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:17 ADC #$264C ;tile ids for top of X
    // Overlapping static entry reached from 0xC20C39.
    case 0xC20C3B: cpu.execute_instruction<0x26>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:18 STA __BSS_START__,X
    case 0xC20C3C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:18 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC20C3B.
    case 0xC20C3D: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:19 LDA @LOCAL00
    case 0xC20C3F: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:20 CLC
    case 0xC20C41: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:21 ADC #$265C ;tile ids for bottom of X
    case 0xC20C42: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00005C, 2); else cpu.execute_instruction<0x69>(0x00265C, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:21 ADC #$265C ;tile ids for bottom of X
    // Overlapping static entry reached from 0xC20C42.
    case 0xC20C44: cpu.execute_instruction<0x26>(0x00009D, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:22 STA __BSS_START__+6,X
    case 0xC20C45: cpu.execute_instruction<0x9D>(0x000006, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:22 STA __BSS_START__+6,X
    // Overlapping static entry reached from 0xC20C44.
    case 0xC20C46: cpu.execute_instruction<0x06>(0x000000, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:23 LDA @LOCAL00
    case 0xC20C48: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:24 INC
    case 0xC20C4A: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:25 STA @LOCAL00
    case 0xC20C4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:26 INX
    case 0xC20C4D: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:27 INX
    case 0xC20C4E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:29 CMP #3
    case 0xC20C4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:29 CMP #3
    // Overlapping static entry reached from 0xC20C4F.
    case 0xC20C51: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/hp_pp_window/fill_tile_buffer_x.asm:30 BCC @UNKNOWN0
    case 0xC20C52: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:31 END_C_FUNCTION
    case 0xC20C54: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/fill_tile_buffer_x.asm:31 END_C_FUNCTION
    case 0xC20C55: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/separate_decimal_digits.asm (source_named).
bool execute_text_hp_pp_window_separate_decimal_digits_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:3 BEGIN_C_FUNCTION
    case 0xC20BD0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD4: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    // Overlapping static entry reached from 0xC20BD5.
    case 0xC20BD7: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD8: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:7 END_STACK_VARS
    case 0xC20BD9: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    case 0xC20BDA: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:8 STA @LOCAL00
    // Overlapping static entry reached from 0xC20BD7.
    case 0xC20BDB: cpu.execute_instruction<0x0E>(0x00A6A2, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    case 0xC20BDC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000A6, 2); else cpu.execute_instruction<0xA2>(0x008CA6, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:9 LDX #.LOWORD(HPPP_WINDOW_DIGIT_BUFFER) + 2
    // Overlapping static entry reached from 0xC20BDC.
    case 0xC20BDE: cpu.execute_instruction<0x8C>(0x000AA0, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    case 0xC20BDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:11 LDY #10
    // Overlapping static entry reached from 0xC20BDF.
    case 0xC20BE1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:12 JSL MODULUS16
    case 0xC20BE2: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:13 SEP #PROC_FLAGS::ACCUM8
    case 0xC20BE6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:14 STA __BSS_START__,X
    case 0xC20BE8: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:16 DEX
    case 0xC20BEB: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    case 0xC20BEC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:17 LDY #10
    // Overlapping static entry reached from 0xC20BEC.
    case 0xC20BEE: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:18 REP #PROC_FLAGS::ACCUM8
    case 0xC20BEF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:19 LDA @LOCAL00
    case 0xC20BF1: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:20 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20BF3: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:21 STA @LOCAL00
    case 0xC20BF7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    case 0xC20BF9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20C73.
    case 0xC20BFA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:22 LDY #10
    // Overlapping static entry reached from 0xC20BF9.
    case 0xC20BFB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:23 JSL MODULUS16
    case 0xC20BFC: cpu.execute_instruction<0x22>(0xC09213, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC20C00: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:25 STA __BSS_START__,X
    case 0xC20C02: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:26 DEX
    case 0xC20C05: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    case 0xC20C06: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:28 LDY #10
    // Overlapping static entry reached from 0xC20C06.
    case 0xC20C08: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:29 REP #PROC_FLAGS::ACCUM8
    case 0xC20C09: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:30 LDA @LOCAL00
    case 0xC20C0B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:31 JSL DIVISION16S_DIVISOR_POSITIVE
    case 0xC20C0D: cpu.execute_instruction<0x22>(0xC0913D, 4); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:32 SEP #PROC_FLAGS::ACCUM8
    case 0xC20C11: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:33 STA __BSS_START__,X
    case 0xC20C13: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    case 0xC20C16: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/hp_pp_window/separate_decimal_digits.asm:34 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC20C65.
    case 0xC20C17: cpu.execute_instruction<0x20>(0x00602B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20C18: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/hp_pp_window/separate_decimal_digits.asm:35 END_C_FUNCTION
    case 0xC20C19: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/hp_pp_window/undraw.asm (source_named).
bool execute_text_hp_pp_window_undraw_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/hp_pp_window/undraw.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC20782: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC20784: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC20785: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC20786: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC20787: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC20787.
    case 0xC20789: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC2078A: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/hp_pp_window/undraw.asm:8 END_STACK_VARS
    case 0xC2078B: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:9 TAX
    case 0xC2078C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:10 STX @LOCAL01
    case 0xC2078D: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:11 LDA #1
    case 0xC2078F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/hp_pp_window/undraw.asm:11 LDA #1
    // Overlapping static entry reached from 0xC2078F.
    case 0xC20791: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:12 STA HPPP_METER_AREA_NEEDS_UPDATE
    case 0xC20792: cpu.execute_instruction<0x8D>(0x009941, 3); return true;
    // src/text/hp_pp_window/undraw.asm:13 SEP #PROC_FLAGS::INDEX8
    case 0xC20795: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:14 TXY
    case 0xC20797: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:15 JSL ASL16_ENTRY2
    case 0xC20798: cpu.execute_instruction<0x22>(0xC09220, 4); return true;
    // src/text/hp_pp_window/undraw.asm:16 EOR #$FFFF
    case 0xC2079C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x0000FF, 2); else cpu.execute_instruction<0x49>(0x00FFFF, 3); return true;
    // src/text/hp_pp_window/undraw.asm:16 EOR #$FFFF
    // Overlapping static entry reached from 0xC2079C.
    case 0xC2079E: cpu.execute_instruction<0xFF>(0x993F2D, 4); return true;
    // src/text/hp_pp_window/undraw.asm:17 AND CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC2079F: cpu.execute_instruction<0x2D>(0x00993F, 3); return true;
    // src/text/hp_pp_window/undraw.asm:18 STA CURRENTLY_DRAWN_HPPP_WINDOWS
    case 0xC207A2: cpu.execute_instruction<0x8D>(0x00993F, 3); return true;
    // src/text/hp_pp_window/undraw.asm:19 REP #PROC_FLAGS::INDEX8
    case 0xC207A5: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:20 LDX @LOCAL01
    case 0xC207A7: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/hp_pp_window/undraw.asm:21 CPX BATTLE_MENU_CURRENT_CHARACTER_ID
    case 0xC207A9: cpu.execute_instruction<0xEC>(0x008D08, 3); return true;
    // src/text/hp_pp_window/undraw.asm:22 BNE @UNKNOWN0
    case 0xC207AC: cpu.execute_instruction<0xD0>(0x000007, 2); return true;
    // src/text/hp_pp_window/undraw.asm:23 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    case 0xC207AE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000012, 2); else cpu.execute_instruction<0xA9>(0x000012, 3); return true;
    // src/text/hp_pp_window/undraw.asm:23 LDA #ACTIVE_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC207AE.
    case 0xC207B0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/undraw.asm:24 STA @LOCAL00
    case 0xC207B1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:25 BRA @UNKNOWN1
    case 0xC207B3: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/text/hp_pp_window/undraw.asm:27 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    case 0xC207B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/text/hp_pp_window/undraw.asm:27 LDA #NORMAL_HPPP_WINDOW_Y_OFFSET
    // Overlapping static entry reached from 0xC207B5.
    case 0xC207B7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/undraw.asm:28 STA @LOCAL00
    case 0xC207B8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:30 TXA
    case 0xC207BA: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207BB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207BD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207BE: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:31 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207C1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:32 PHA
    case 0xC207C3: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:33 LDA GAME_STATE+game_state::player_controlled_party_count
    case 0xC207C4: cpu.execute_instruction<0xAD>(0x009B55, 3); return true;
    // src/text/hp_pp_window/undraw.asm:34 AND #$00FF
    case 0xC207C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/hp_pp_window/undraw.asm:34 AND #$00FF
    // Overlapping static entry reached from 0xC207C7.
    case 0xC207C9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:539 STA scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207CA: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:540 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207CC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:541 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207CD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:542 ASL
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207CF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:543 ADC scratch
    // Macro caller: src/text/hp_pp_window/undraw.asm:35 OPTIMIZED_MULT @VIRTUAL04, 7
    case 0xC207D0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:36 PHA
    case 0xC207D2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:37 ASL
    case 0xC207D3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:38 PLA
    case 0xC207D4: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:39 ROR
    case 0xC207D5: cpu.execute_instruction<0x6A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:40 STA @VIRTUAL02
    case 0xC207D6: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:41 LDA #16
    case 0xC207D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000010, 2); else cpu.execute_instruction<0xA9>(0x000010, 3); return true;
    // src/text/hp_pp_window/undraw.asm:41 LDA #16
    // Overlapping static entry reached from 0xC207D8.
    case 0xC207DA: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/hp_pp_window/undraw.asm:42 SEC
    case 0xC207DB: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:43 SBC @VIRTUAL02
    case 0xC207DC: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:44 PLY
    case 0xC207DE: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:45 STY @VIRTUAL04
    case 0xC207DF: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:46 CLC
    case 0xC207E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:47 ADC @VIRTUAL04
    case 0xC207E2: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/text/hp_pp_window/undraw.asm:48 ASL
    case 0xC207E4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:49 STA @VIRTUAL02
    case 0xC207E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:50 LDA @LOCAL00
    case 0xC207E7: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:51 ASL
    case 0xC207E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:52 ASL
    case 0xC207EA: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:53 ASL
    case 0xC207EB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:54 ASL
    case 0xC207EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:55 ASL
    case 0xC207ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:56 ASL
    case 0xC207EE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:57 CLC
    case 0xC207EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:58 ADC @VIRTUAL02
    case 0xC207F0: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/hp_pp_window/undraw.asm:59 CLC
    case 0xC207F2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:60 ADC #.LOWORD(BG2_BUFFER)
    case 0xC207F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000076, 2); else cpu.execute_instruction<0x69>(0x008176, 3); return true;
    // src/text/hp_pp_window/undraw.asm:60 ADC #.LOWORD(BG2_BUFFER)
    // Overlapping static entry reached from 0xC207F3.
    case 0xC207F5: cpu.execute_instruction<0x81>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/undraw.asm:61 TAX
    case 0xC207F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    case 0xC207F7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/text/hp_pp_window/undraw.asm:62 LDY #HPPP_WINDOW_HEIGHT
    // Overlapping static entry reached from 0xC207F7.
    case 0xC207F9: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/hp_pp_window/undraw.asm:63 BRA @UNKNOWN5
    case 0xC207FA: cpu.execute_instruction<0x80>(0x00001D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:65 LDA #HPPP_WINDOW_WIDTH
    case 0xC207FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/hp_pp_window/undraw.asm:65 LDA #HPPP_WINDOW_WIDTH
    // Overlapping static entry reached from 0xC207FC.
    case 0xC207FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/hp_pp_window/undraw.asm:66 STA @LOCAL00
    case 0xC207FF: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:67 BRA @UNKNOWN4
    case 0xC20801: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:69 LDA #0
    case 0xC20803: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/hp_pp_window/undraw.asm:69 LDA #0
    // Overlapping static entry reached from 0xC20803.
    case 0xC20805: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/text/hp_pp_window/undraw.asm:70 STA __BSS_START__,X
    case 0xC20806: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/hp_pp_window/undraw.asm:71 INX
    case 0xC20809: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:72 INX
    case 0xC2080A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:73 LDA @LOCAL00
    case 0xC2080B: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:74 DEC
    case 0xC2080D: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:75 STA @LOCAL00
    case 0xC2080E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/hp_pp_window/undraw.asm:77 BNE @UNKNOWN3
    case 0xC20810: cpu.execute_instruction<0xD0>(0x0000F1, 2); return true;
    // src/text/hp_pp_window/undraw.asm:78 TXA
    case 0xC20812: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:79 CLC
    case 0xC20813: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    case 0xC20814: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000032, 2); else cpu.execute_instruction<0x69>(0x000032, 3); return true;
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20866.
    case 0xC20815: cpu.execute_instruction<0x32>(0x000000, 2); return true;
    // src/text/hp_pp_window/undraw.asm:80 ADC #64 - HPPP_WINDOW_WIDTH * 2
    // Overlapping static entry reached from 0xC20814.
    case 0xC20816: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/hp_pp_window/undraw.asm:81 TAX
    case 0xC20817: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:82 DEY
    case 0xC20818: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/hp_pp_window/undraw.asm:84 BNE @UNKNOWN2
    case 0xC20819: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/hp_pp_window/undraw.asm:85 END_C_FUNCTION
    case 0xC2081B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/hp_pp_window/undraw.asm:85 END_C_FUNCTION
    case 0xC2081C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/increment_secondary_memory.asm (source_named).
bool execute_text_increment_secondary_memory_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/increment_secondary_memory.asm:3 BEGIN_C_FUNCTION
    case 0xC10631: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/increment_secondary_memory.asm:5 JSR GET_ACTIVE_WINDOW_ADDRESS
    case 0xC10633: cpu.execute_instruction<0x20>(0x000504, 3); return true;
    // src/text/increment_secondary_memory.asm:6 CLC
    case 0xC10636: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/increment_secondary_memory.asm:7 ADC #window_stats::secondary_memory
    case 0xC10637: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00001F, 2); else cpu.execute_instruction<0x69>(0x00001F, 3); return true;
    // src/text/increment_secondary_memory.asm:7 ADC #window_stats::secondary_memory
    // Overlapping static entry reached from 0xC10637.
    case 0xC10639: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/increment_secondary_memory.asm:8 TAX
    case 0xC1063A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/increment_secondary_memory.asm:9 LDA __BSS_START__,X
    case 0xC1063B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/increment_secondary_memory.asm:10 LDA __BSS_START__,X
    case 0xC1063E: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/increment_secondary_memory.asm:11 INC
    case 0xC10641: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/increment_secondary_memory.asm:12 STA __BSS_START__,X
    case 0xC10642: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/increment_secondary_memory.asm:13 END_C_FUNCTION
    case 0xC10645: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/lock_input.asm (source_named).
bool execute_text_lock_input_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/lock_input.asm:3 BEGIN_C_FUNCTION
    case 0xC102CD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/lock_input.asm:5 LDA #1
    case 0xC102CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/lock_input.asm:5 LDA #1
    // Overlapping static entry reached from 0xC102CF.
    case 0xC102D1: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/text/lock_input.asm:6 STA TEXT_PROMPT_WAITING_FOR_INPUT
    case 0xC102D2: cpu.execute_instruction<0x8D>(0x00993D, 3); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/lock_input.asm:7 END_C_FUNCTION
    case 0xC102D5: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/move_cursor.asm (source_named).
bool execute_text_move_cursor_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/move_cursor.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC12086: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC12088: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC12089: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208A: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E2, 2); else cpu.execute_instruction<0x69>(0x00FFE2, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    // Overlapping static entry reached from 0xC1208B.
    case 0xC1208D: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208E: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/move_cursor.asm:21 END_STACK_VARS
    case 0xC1208F: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    case 0xC12090: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/move_cursor.asm:22 STY @VIRTUAL04
    // Overlapping static entry reached from 0xC1208D.
    case 0xC12091: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/text/move_cursor.asm:23 STX @LOCAL07
    case 0xC12092: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/text/move_cursor.asm:23 STX @LOCAL07
    // Overlapping static entry reached from 0xC12091.
    case 0xC12093: cpu.execute_instruction<0x1C>(0x001A85, 3); return true;
    // src/text/move_cursor.asm:24 STA @LOCAL06
    case 0xC12094: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/move_cursor.asm:25 LDY @WRAPY
    case 0xC12096: cpu.execute_instruction<0xA4>(0x000032, 2); return true;
    // src/text/move_cursor.asm:26 STY @LOCAL05
    case 0xC12098: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/text/move_cursor.asm:27 LDX @WRAPX
    case 0xC1209A: cpu.execute_instruction<0xA6>(0x000030, 2); return true;
    // src/text/move_cursor.asm:28 STX @LOCAL04
    case 0xC1209C: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/move_cursor.asm:29 LDA @SFX
    case 0xC1209E: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/text/move_cursor.asm:30 STA @LOCAL03
    case 0xC120A0: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/move_cursor.asm:31 LDA @DELTAY
    case 0xC120A2: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // src/text/move_cursor.asm:32 STA @VIRTUAL02
    case 0xC120A4: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/move_cursor.asm:33 STA @LOCAL00
    case 0xC120A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    case 0xC120A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:34 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120A8.
    case 0xC120AA: cpu.execute_instruction<0xFF>(0xA41085, 4); return true;
    // src/text/move_cursor.asm:35 STA @LOCAL01
    case 0xC120AB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    case 0xC120AD: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/text/move_cursor.asm:36 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC120AA.
    case 0xC120AE: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    case 0xC120AF: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/text/move_cursor.asm:37 LDX @LOCAL07
    // Overlapping static entry reached from 0xC120AE.
    case 0xC120B0: cpu.execute_instruction<0x1C>(0x001AA5, 3); return true;
    // src/text/move_cursor.asm:38 LDA @LOCAL06
    case 0xC120B1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/text/move_cursor.asm:39 JSL UNKNOWN_C20B65
    case 0xC120B3: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/move_cursor.asm:40 TAX
    case 0xC120B7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/move_cursor.asm:41 STX @LOCAL02
    case 0xC120B8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    case 0xC120BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:42 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120BA.
    case 0xC120BC: cpu.execute_instruction<0xFF>(0xA53AD0, 4); return true;
    // src/text/move_cursor.asm:43 BNE @UNKNOWN1
    case 0xC120BD: cpu.execute_instruction<0xD0>(0x00003A, 2); return true;
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    case 0xC120BF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/move_cursor.asm:44 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC120BC.
    case 0xC120C0: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // src/text/move_cursor.asm:45 STA @LOCAL00
    case 0xC120C1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    case 0xC120C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:46 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120C3.
    case 0xC120C5: cpu.execute_instruction<0xFF>(0xA41085, 4); return true;
    // src/text/move_cursor.asm:47 STA @LOCAL01
    case 0xC120C6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    case 0xC120C8: cpu.execute_instruction<0xA4>(0x000004, 2); return true;
    // src/text/move_cursor.asm:48 LDY @VIRTUAL04
    // Overlapping static entry reached from 0xC120C5.
    case 0xC120C9: cpu.execute_instruction<0x04>(0x0000A6, 2); return true;
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    case 0xC120CA: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/text/move_cursor.asm:49 LDX @LOCAL05
    // Overlapping static entry reached from 0xC120C9.
    case 0xC120CB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/move_cursor.asm:50 LDA @LOCAL04
    case 0xC120CC: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/move_cursor.asm:51 JSL UNKNOWN_C20B65
    case 0xC120CE: cpu.execute_instruction<0x22>(0xC209F6, 4); return true;
    // src/text/move_cursor.asm:52 TAX
    case 0xC120D2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/move_cursor.asm:53 STX @LOCAL02
    case 0xC120D3: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:54 LDA @VIRTUAL04
    case 0xC120D5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/move_cursor.asm:55 BNE @UNKNOWN0
    case 0xC120D7: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/move_cursor.asm:56 TXA
    case 0xC120D9: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/move_cursor.asm:57 AND #$FF00
    case 0xC120DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00FF00, 3); return true;
    // src/text/move_cursor.asm:57 AND #$FF00
    // Overlapping static entry reached from 0xC120DA.
    case 0xC120DC: cpu.execute_instruction<0xFF>(0xFF29EB, 4); return true;
    // src/text/move_cursor.asm:58 XBA
    case 0xC120DD: cpu.execute_instruction<0xEB>(0x000000, 1); return true;
    // src/text/move_cursor.asm:59 AND #$00FF
    case 0xC120DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/move_cursor.asm:59 AND #$00FF
    // Overlapping static entry reached from 0xC120DE.
    case 0xC120E0: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/text/move_cursor.asm:60 CMP @LOCAL07
    case 0xC120E1: cpu.execute_instruction<0xC5>(0x00001C, 2); return true;
    // src/text/move_cursor.asm:61 BEQ @UNKNOWN1
    case 0xC120E3: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    case 0xC120E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:62 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120E5.
    case 0xC120E7: cpu.execute_instruction<0xFF>(0x801286, 4); return true;
    // src/text/move_cursor.asm:63 STX @LOCAL02
    case 0xC120E8: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    case 0xC120EA: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/text/move_cursor.asm:64 BRA @UNKNOWN1
    // Overlapping static entry reached from 0xC120E7.
    case 0xC120EB: cpu.execute_instruction<0x0D>(0x00298A, 3); return true;
    // src/text/move_cursor.asm:66 TXA
    case 0xC120EC: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/move_cursor.asm:67 AND #$00FF
    case 0xC120ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC120EB.
    case 0xC120EE: cpu.execute_instruction<0xFF>(0x1AC500, 4); return true;
    // src/text/move_cursor.asm:67 AND #$00FF
    // Overlapping static entry reached from 0xC120ED.
    case 0xC120EF: cpu.execute_instruction<0x00>(0x0000C5, 2); return true;
    // src/text/move_cursor.asm:68 CMP @LOCAL06
    case 0xC120F0: cpu.execute_instruction<0xC5>(0x00001A, 2); return true;
    // src/text/move_cursor.asm:69 BEQ @UNKNOWN1
    case 0xC120F2: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    case 0xC120F4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:70 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120F4.
    case 0xC120F6: cpu.execute_instruction<0xFF>(0xE01286, 4); return true;
    // src/text/move_cursor.asm:71 STX @LOCAL02
    case 0xC120F7: cpu.execute_instruction<0x86>(0x000012, 2); return true;
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    case 0xC120F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x0000FF, 2); else cpu.execute_instruction<0xE0>(0x00FFFF, 3); return true;
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120F6.
    case 0xC120FA: cpu.execute_instruction<0xFF>(0x06F0FF, 4); return true;
    // src/text/move_cursor.asm:73 CPX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC120F9.
    case 0xC120FB: cpu.execute_instruction<0xFF>(0xA506F0, 4); return true;
    // src/text/move_cursor.asm:74 BEQ @UNKNOWN2
    case 0xC120FC: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    case 0xC120FE: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/move_cursor.asm:75 LDA @LOCAL03
    // Overlapping static entry reached from 0xC120FB.
    case 0xC120FF: cpu.execute_instruction<0x14>(0x000022, 2); return true;
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    case 0xC12100: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/move_cursor.asm:76 JSL PLAY_SOUND
    // Overlapping static entry reached from 0xC120FF.
    case 0xC12101: cpu.execute_instruction<0xBF>(0xA6C0AB, 4); return true;
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    case 0xC12104: cpu.execute_instruction<0xA6>(0x000012, 2); return true;
    // src/text/move_cursor.asm:78 LDX @LOCAL02
    // Overlapping static entry reached from 0xC12101.
    case 0xC12105: cpu.execute_instruction<0x12>(0x00008A, 2); return true;
    // src/text/move_cursor.asm:79 TXA
    case 0xC12106: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC12107: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/move_cursor.asm:80 END_C_FUNCTION
    case 0xC12108: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/num_select_prompt.asm (source_named).
bool execute_text_num_select_prompt_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/num_select_prompt.asm:4 BEGIN_C_FUNCTION
    case 0xC115D6: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115D8: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115D9: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DA: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D8, 2); else cpu.execute_instruction<0x69>(0x00FFD8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    // Overlapping static entry reached from 0xC115DB.
    case 0xC115DD: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DE: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/num_select_prompt.asm:17 END_STACK_VARS
    case 0xC115DF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    case 0xC115E0: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/text/num_select_prompt.asm:23 STA @LOCAL08
    // Overlapping static entry reached from 0xC115DD.
    case 0xC115E1: cpu.execute_instruction<0x26>(0x0000AD, 2); return true;
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    case 0xC115E2: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/num_select_prompt.asm:24 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC115E1.
    case 0xC115E3: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    case 0xC115E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/num_select_prompt.asm:25 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC115E5.
    case 0xC115E7: cpu.execute_instruction<0xFF>(0xA915D0, 4); return true;
    // src/text/num_select_prompt.asm:26 BNE @UNKNOWN0
    case 0xC115E8: cpu.execute_instruction<0xD0>(0x000015, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC115E7.
    case 0xC115EB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC115EA.
    case 0xC115EC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115ED: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC115EF.
    case 0xC115F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:27 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC115F2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115F6: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115F8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:28 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC115FA: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/text/num_select_prompt.asm:29 JMP @UNKNOWN24
    case 0xC115FC: cpu.execute_instruction<0x4C>(0x0018FE, 3); return true;
    // src/text/num_select_prompt.asm:31 LDA CURRENT_FOCUS_WINDOW
    case 0xC115FF: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/num_select_prompt.asm:32 ASL
    case 0xC11602: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:33 TAX
    case 0xC11603: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:34 LDA OPEN_WINDOW_TABLE,X
    case 0xC11604: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    case 0xC11607: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/num_select_prompt.asm:35 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11607.
    case 0xC11609: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:36 JSL MULT168
    case 0xC1160A: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/num_select_prompt.asm:37 CLC
    case 0xC1160E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1160F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/num_select_prompt.asm:38 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1160F.
    case 0xC11611: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x00BDAA, 3); return true;
    // src/text/num_select_prompt.asm:39 TAX
    case 0xC11612: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:40 LDA a:window_stats::text_x,X
    case 0xC11613: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/text/num_select_prompt.asm:40 LDA a:window_stats::text_x,X
    // Overlapping static entry reached from 0xC11611.
    case 0xC11614: cpu.execute_instruction<0x0E>(0x008500, 3); return true;
    // src/text/num_select_prompt.asm:41 STA @LOCAL07
    case 0xC11616: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:41 STA @LOCAL07
    // Overlapping static entry reached from 0xC11614.
    case 0xC11617: cpu.execute_instruction<0x24>(0x0000BD, 2); return true;
    // src/text/num_select_prompt.asm:42 LDA a:window_stats::text_y,X
    case 0xC11618: cpu.execute_instruction<0xBD>(0x000010, 3); return true;
    // src/text/num_select_prompt.asm:42 LDA a:window_stats::text_y,X
    // Overlapping static entry reached from 0xC11617.
    case 0xC11619: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/text/num_select_prompt.asm:43 STA @LOCAL06
    case 0xC1161B: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC1161D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC1161D.
    case 0xC1161F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11620: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11622: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    // Overlapping static entry reached from 0xC11622.
    case 0xC11624: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:44 MOVE_INT_CONSTANT NULL, @VIRTUAL06
    case 0xC11625: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11627: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11629: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1162B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:45 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1162D: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:46 LDA #1
    case 0xC1162F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/num_select_prompt.asm:46 LDA #1
    // Overlapping static entry reached from 0xC1162F.
    case 0xC11631: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/num_select_prompt.asm:47 STA @LOCAL04
    case 0xC11632: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11634: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11634.
    case 0xC11636: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11637: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC11639: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11639.
    case 0xC1163B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:48 MOVE_INT_CONSTANT 1, @VIRTUAL0A
    case 0xC1163C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1163E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11640: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11642: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:49 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11644: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/num_select_prompt.asm:51 JSR SET_INSTANT_PRINTING
    case 0xC11646: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/text/num_select_prompt.asm:52 LDX @LOCAL06
    case 0xC11649: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:53 LDA @LOCAL07
    case 0xC1164B: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:54 JSR UNKNOWN_C438A5
    case 0xC1164D: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11650: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11652: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11654: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:55 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11656: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11658: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1165A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1165C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:56 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC1165E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/num_select_prompt.asm:57 JSR UNKNOWN_C10D7C
    case 0xC11660: cpu.execute_instruction<0x20>(0x0012CA, 3); return true;
    // src/text/num_select_prompt.asm:58 STA @VIRTUAL02
    case 0xC11663: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:59 LDA #7
    case 0xC11665: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/num_select_prompt.asm:59 LDA #7
    // Overlapping static entry reached from 0xC11665.
    case 0xC11667: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/num_select_prompt.asm:60 SEC
    case 0xC11668: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:61 SBC @VIRTUAL02
    case 0xC11669: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:62 CLC
    case 0xC1166B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC1166C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000098, 2); else cpu.execute_instruction<0x69>(0x008C98, 3); return true;
    // src/text/num_select_prompt.asm:63 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC1166C.
    case 0xC1166E: cpu.execute_instruction<0x8C>(0x000485, 3); return true;
    // src/text/num_select_prompt.asm:64 STA @VIRTUAL04
    case 0xC1166F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/num_select_prompt.asm:65 LDY @LOCAL08
    case 0xC11671: cpu.execute_instruction<0xA4>(0x000026, 2); return true;
    // src/text/num_select_prompt.asm:66 STY @LOCAL02
    case 0xC11673: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:67 BRA @UNKNOWN5
    case 0xC11675: cpu.execute_instruction<0x80>(0x000015, 2); return true;
    // src/text/num_select_prompt.asm:69 CPY @LOCAL04
    case 0xC11677: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:70 BNE @UNKNOWN3
    case 0xC11679: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/num_select_prompt.asm:71 LDX #16
    case 0xC1167B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/text/num_select_prompt.asm:71 LDX #16
    // Overlapping static entry reached from 0xC1167B.
    case 0xC1167D: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/num_select_prompt.asm:72 BRA @UNKNOWN4
    case 0xC1167E: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/num_select_prompt.asm:74 LDX #48
    case 0xC11680: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x000030, 3); return true;
    // src/text/num_select_prompt.asm:74 LDX #48
    // Overlapping static entry reached from 0xC11680.
    case 0xC11682: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/text/num_select_prompt.asm:76 TXA
    case 0xC11683: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:77 JSR @PRINT_LETTER_FUNC
    case 0xC11684: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/num_select_prompt.asm:78 LDY @LOCAL02
    case 0xC11687: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:79 DEY
    case 0xC11689: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:80 STY @LOCAL02
    case 0xC1168A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:82 TYA
    case 0xC1168C: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:83 CMP @VIRTUAL02
    case 0xC1168D: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC1168F: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/text/num_select_prompt.asm:84 BGT @UNKNOWN2
    case 0xC11691: cpu.execute_instruction<0xB0>(0x0000E4, 2); return true;
    // src/text/num_select_prompt.asm:85 BRA @UNKNOWN10
    case 0xC11693: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // src/text/num_select_prompt.asm:87 CPY @LOCAL04
    case 0xC11695: cpu.execute_instruction<0xC4>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:88 BNE @UNKNOWN8
    case 0xC11697: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/num_select_prompt.asm:89 LDX #16
    case 0xC11699: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000010, 2); else cpu.execute_instruction<0xA2>(0x000010, 3); return true;
    // src/text/num_select_prompt.asm:89 LDX #16
    // Overlapping static entry reached from 0xC11699.
    case 0xC1169B: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/num_select_prompt.asm:90 BRA @UNKNOWN9
    case 0xC1169C: cpu.execute_instruction<0x80>(0x000003, 2); return true;
    // src/text/num_select_prompt.asm:92 LDX #48
    case 0xC1169E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000030, 2); else cpu.execute_instruction<0xA2>(0x000030, 3); return true;
    // src/text/num_select_prompt.asm:92 LDX #48
    // Overlapping static entry reached from 0xC1169E.
    case 0xC116A0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/text/num_select_prompt.asm:94 STX @VIRTUAL02
    case 0xC116A1: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:95 LDX @VIRTUAL04
    case 0xC116A3: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/num_select_prompt.asm:96 LDA __BSS_START__,X
    case 0xC116A5: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/num_select_prompt.asm:97 AND #$00FF
    case 0xC116A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/num_select_prompt.asm:97 AND #$00FF
    // Overlapping static entry reached from 0xC116A8.
    case 0xC116AA: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/num_select_prompt.asm:98 CLC
    case 0xC116AB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:99 ADC @VIRTUAL02
    case 0xC116AC: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/text/num_select_prompt.asm:100 INC @VIRTUAL04
    case 0xC116AE: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/text/num_select_prompt.asm:101 JSR @PRINT_LETTER_FUNC
    case 0xC116B0: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/num_select_prompt.asm:102 LDY @LOCAL02
    case 0xC116B3: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:103 DEY
    case 0xC116B5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/num_select_prompt.asm:104 STY @LOCAL02
    case 0xC116B6: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:106 CPY #0
    case 0xC116B8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/num_select_prompt.asm:106 CPY #0
    // Overlapping static entry reached from 0xC116B8.
    case 0xC116BA: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/num_select_prompt.asm:107 BNE @UNKNOWN7
    case 0xC116BB: cpu.execute_instruction<0xD0>(0x0000D8, 2); return true;
    // src/text/num_select_prompt.asm:108 JSR CLEAR_INSTANT_PRINTING
    case 0xC116BD: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/num_select_prompt.asm:109 JSL WINDOW_TICK
    case 0xC116C0: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/num_select_prompt.asm:111 JSL UNKNOWN_C12E42
    case 0xC116C4: cpu.execute_instruction<0x22>(0xC1355E, 4); return true;
    // src/text/num_select_prompt.asm:112 LDA PAD_PRESS
    case 0xC116C8: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    case 0xC116CB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000200, 3); return true;
    // src/text/num_select_prompt.asm:113 AND #PAD::LEFT
    // Overlapping static entry reached from 0xC116CB.
    case 0xC116CD: cpu.execute_instruction<0x02>(0x0000F0, 2); return true;
    // src/text/num_select_prompt.asm:114 BEQ @UNKNOWN12
    case 0xC116CE: cpu.execute_instruction<0xF0>(0x000040, 2); return true;
    // src/text/num_select_prompt.asm:115 LDA @LOCAL04
    case 0xC116D0: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:116 CMP @LOCAL08
    case 0xC116D2: cpu.execute_instruction<0xC5>(0x000026, 2); return true;
    // src/text/num_select_prompt.asm:117 BCS @UNKNOWN12
    case 0xC116D4: cpu.execute_instruction<0xB0>(0x00003A, 2); return true;
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    case 0xC116D6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/num_select_prompt.asm:118 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC116D6.
    case 0xC116D8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:119 JSL PLAY_SOUND
    case 0xC116D9: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/num_select_prompt.asm:120 INC @LOCAL04
    case 0xC116DD: cpu.execute_instruction<0xE6>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116DF: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116E1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116E3: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:121 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC116E5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116E7: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116E9: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116EB: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:122 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC116ED: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC116EF.
    case 0xC116F1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116F2: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC116F4.
    case 0xC116F6: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:123 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC116F7: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:124 JSL MULT32
    case 0xC116F9: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC116FD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC116FF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11701: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:125 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11703: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11705: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11707: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11709: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:126 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC1170B: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/num_select_prompt.asm:127 JMP @UNKNOWN1
    case 0xC1170D: cpu.execute_instruction<0x4C>(0x001646, 3); return true;
    // src/text/num_select_prompt.asm:129 LDA PAD_PRESS
    case 0xC11710: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    case 0xC11713: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000100, 3); return true;
    // src/text/num_select_prompt.asm:130 AND #PAD::RIGHT
    // Overlapping static entry reached from 0xC11713.
    case 0xC11715: cpu.execute_instruction<0x01>(0x0000F0, 2); return true;
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    case 0xC11716: cpu.execute_instruction<0xF0>(0x000043, 2); return true;
    // src/text/num_select_prompt.asm:131 BEQ @UNKNOWN13
    // Overlapping static entry reached from 0xC11715.
    case 0xC11717: cpu.execute_instruction<0x43>(0x0000A5, 2); return true;
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    case 0xC11718: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // src/text/num_select_prompt.asm:132 LDA @LOCAL04
    // Overlapping static entry reached from 0xC11717.
    case 0xC11719: cpu.execute_instruction<0x1C>(0x0001C9, 3); return true;
    // src/text/num_select_prompt.asm:133 CMP #1
    case 0xC1171A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/text/num_select_prompt.asm:133 CMP #1
    // Overlapping static entry reached from 0xC1171A.
    case 0xC1171C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC1171D: cpu.execute_instruction<0x90>(0x00003C, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/text/num_select_prompt.asm:134 BLTEQ @UNKNOWN13
    case 0xC1171F: cpu.execute_instruction<0xF0>(0x00003A, 2); return true;
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    case 0xC11721: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/num_select_prompt.asm:135 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC11721.
    case 0xC11723: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:136 JSL PLAY_SOUND
    case 0xC11724: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/num_select_prompt.asm:137 DEC @LOCAL04
    case 0xC11728: cpu.execute_instruction<0xC6>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1172A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1172C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1172E: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:138 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11730: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11732: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11734: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11736: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:139 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11738: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1173A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1173A.
    case 0xC1173C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1173D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1173F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1173F.
    case 0xC11741: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:140 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11742: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:141 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC11744: cpu.execute_instruction<0x22>(0xC09188, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11748: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1174A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1174C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:142 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1174E: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11750: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11752: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11754: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:143 MOVE_INT @VIRTUAL0A, @LOCAL03
    case 0xC11756: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/text/num_select_prompt.asm:144 JMP @UNKNOWN1
    case 0xC11758: cpu.execute_instruction<0x4C>(0x001646, 3); return true;
    // src/text/num_select_prompt.asm:146 LDA PAD_HELD
    case 0xC1175B: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    case 0xC1175E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000800, 3); return true;
    // src/text/num_select_prompt.asm:147 AND #PAD::UP
    // Overlapping static entry reached from 0xC1175E.
    case 0xC11760: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC11761: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:148 BEQL @UNKNOWN17
    case 0xC11763: cpu.execute_instruction<0x4C>(0x001811, 3); return true;
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    case 0xC11766: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/num_select_prompt.asm:149 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC11766.
    case 0xC11768: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:150 JSL PLAY_SOUND
    case 0xC11769: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC1176D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC1176D.
    case 0xC1176F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC11770: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC11772: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    // Overlapping static entry reached from 0xC11772.
    case 0xC11774: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:151 MOVE_INT_CONSTANT 9, @LOCAL01
    case 0xC11775: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11777: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11779: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1177B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:152 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1177D: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:153 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1177F: cpu.execute_instruction<0x22>(0xC09188, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11783: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11783.
    case 0xC11785: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11786: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11788: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11788.
    case 0xC1178A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:154 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1178B: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:155 JSL MODULUS32
    case 0xC1178D: cpu.execute_instruction<0x22>(0xC09219, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11791: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11793: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11795: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:156 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC11797: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11799: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1179B: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1179D: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1179F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:157 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC117A1: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/num_select_prompt.asm:158 BEQ @UNKNOWN16
    case 0xC117A3: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117A5: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    // Overlapping static entry reached from 0xC10A4D.
    case 0xC117A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117A9: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:159 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117AB: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117AD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117AF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117B1: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:160 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117B3: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:161 CLC
    case 0xC117B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117B6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117B8: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117BA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117BE: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:162 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117C0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C4: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:163 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC117C8: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:164 JMP @UNKNOWN1
    case 0xC117CA: cpu.execute_instruction<0x4C>(0x001646, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117CD: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117CF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117D1: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:166 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC117D3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117D5: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117D7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117D9: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:167 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC117DB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117DD: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117DF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117E1: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:168 MOVE_INT @LOCAL01, @VIRTUAL0A
    case 0xC117E3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:169 JSL MULT32
    case 0xC117E5: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117E9: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117EB: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117ED: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:170 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC117EF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:171 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC117F7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:172 SEC
    case 0xC117F9: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117FA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117FC: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC117FE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11800: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11802: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:173 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11804: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11806: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11808: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1180A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:174 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC1180C: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:175 JMP @UNKNOWN1
    case 0xC1180E: cpu.execute_instruction<0x4C>(0x001646, 3); return true;
    // src/text/num_select_prompt.asm:177 LDA PAD_HELD
    case 0xC11811: cpu.execute_instruction<0xAD>(0x000069, 3); return true;
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    case 0xC11814: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x000400, 3); return true;
    // src/text/num_select_prompt.asm:178 AND #PAD::DOWN
    // Overlapping static entry reached from 0xC11814.
    case 0xC11816: cpu.execute_instruction<0x04>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11817: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11816.
    case 0xC11818: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    case 0xC11819: cpu.execute_instruction<0x4C>(0x0018C1, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:179 BEQL @UNKNOWN21
    // Overlapping static entry reached from 0xC11818.
    case 0xC1181A: cpu.execute_instruction<0xC1>(0x000018, 2); return true;
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    case 0xC1181C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/text/num_select_prompt.asm:180 LDA #SFX::CURSOR3
    // Overlapping static entry reached from 0xC1181C.
    case 0xC1181E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:181 JSL PLAY_SOUND
    case 0xC1181F: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11823: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11825: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11827: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:182 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11829: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:183 JSL DIVISION32S_DIVISOR_POSITIVE
    case 0xC1182B: cpu.execute_instruction<0x22>(0xC09188, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC1182F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1182F.
    case 0xC11831: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11832: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11834: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11834.
    case 0xC11836: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:184 MOVE_INT_CONSTANT 10, @VIRTUAL0A
    case 0xC11837: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:185 JSL MODULUS32
    case 0xC11839: cpu.execute_instruction<0x22>(0xC09219, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC1183D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1183D.
    case 0xC1183F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11840: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11842: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11842.
    case 0xC11844: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:186 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC11845: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11847: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC11849: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1184B: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1184D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/text/num_select_prompt.asm:187 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC1184F: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/num_select_prompt.asm:188 BEQ @UNKNOWN20
    case 0xC11851: cpu.execute_instruction<0xF0>(0x000028, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11853: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11855: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11857: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:189 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11859: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1185B: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1185D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC1185F: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:190 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC11861: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:191 SEC
    case 0xC11863: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // include/macros.asm:1007 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11864: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1008 SBC val2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11866: cpu.execute_instruction<0xE5>(0x00000A, 2); return true;
    // include/macros.asm:1009 STA dest
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC11868: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1010 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1186A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1011 SBC val2+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1186C: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // include/macros.asm:1012 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:192 SUB_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC1186E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11870: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11872: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11874: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:193 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC11876: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:194 JMP @UNKNOWN1
    case 0xC11878: cpu.execute_instruction<0x4C>(0x001646, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1187B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1187D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC1187F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:196 MOVE_INT @LOCAL03, @VIRTUAL0A
    case 0xC11881: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11883: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11885: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11887: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:197 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC11889: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1188B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1188B.
    case 0xC1188D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC1188E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC11890: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11890.
    case 0xC11892: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:198 MOVE_INT_CONSTANT 9, @VIRTUAL0A
    case 0xC11893: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/num_select_prompt.asm:199 JSL MULT32
    case 0xC11895: cpu.execute_instruction<0x22>(0xC09068, 4); return true;
    // src/text/num_select_prompt.asm:199 JSL MULT32
    // Overlapping static entry reached from 0xC1CC97.
    case 0xC11898: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11899: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC11898.
    case 0xC1189A: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1189B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC1189A.
    case 0xC1189C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1189D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:200 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC1189F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A1: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A5: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:201 MOVE_INT @LOCAL05, @VIRTUAL06
    case 0xC118A7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/num_select_prompt.asm:202 CLC
    case 0xC118A9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118AA: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118AC: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118AE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118B0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118B2: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:203 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC118B4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118B6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118B8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118BA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:204 MOVE_INT @VIRTUAL06, @LOCAL05
    case 0xC118BC: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/text/num_select_prompt.asm:205 JMP @UNKNOWN1
    case 0xC118BE: cpu.execute_instruction<0x4C>(0x001646, 3); return true;
    // src/text/num_select_prompt.asm:207 LDA PAD_PRESS
    case 0xC118C1: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC118C4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/num_select_prompt.asm:208 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC118C4.
    case 0xC118C6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/num_select_prompt.asm:209 BEQ @UNKNOWN22
    case 0xC118C7: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    case 0xC118C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/num_select_prompt.asm:210 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC118C9.
    case 0xC118CB: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:211 JSL PLAY_SOUND
    case 0xC118CC: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D2: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:212 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118D6: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/text/num_select_prompt.asm:213 BRA @UNKNOWN24
    case 0xC118D8: cpu.execute_instruction<0x80>(0x000024, 2); return true;
    // src/text/num_select_prompt.asm:215 LDA PAD_PRESS
    case 0xC118DA: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC118DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/num_select_prompt.asm:216 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC118DD.
    case 0xC118DF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000D0, 2); else cpu.execute_instruction<0xA0>(0x0003D0, 3); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC118E0: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC118DF.
    case 0xC118E1: cpu.execute_instruction<0x03>(0x00004C, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    case 0xC118E2: cpu.execute_instruction<0x4C>(0x0016C4, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/num_select_prompt.asm:217 BEQL @UNKNOWN11
    // Overlapping static entry reached from 0xC118E1.
    case 0xC118E3: cpu.execute_instruction<0xC4>(0x000016, 2); return true;
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    case 0xC118E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/num_select_prompt.asm:218 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC118E5.
    case 0xC118E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/num_select_prompt.asm:219 JSL PLAY_SOUND
    case 0xC118E8: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC118EC.
    case 0xC118EE: cpu.execute_instruction<0xFF>(0xA90685, 4); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118EF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC118EE.
    case 0xC118F2: cpu.execute_instruction<0xFF>(0x0885FF, 4); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    // Overlapping static entry reached from 0xC118F1.
    case 0xC118F3: cpu.execute_instruction<0xFF>(0xA50885, 4); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:220 MOVE_INT_CONSTANT -1, @VIRTUAL06
    case 0xC118F4: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118F6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC118F3.
    case 0xC118F7: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118F8: cpu.execute_instruction<0x85>(0x00002E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    // Overlapping static entry reached from 0xC118F7.
    case 0xC118F9: cpu.execute_instruction<0x2E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118FA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/num_select_prompt.asm:221 MOVE_INT @VIRTUAL06, @RETURNVAL
    case 0xC118FC: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC118FE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/num_select_prompt.asm:223 END_C_FUNCTION
    case 0xC118FF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/open_hppp_display.asm (source_named).
bool execute_text_open_hppp_display_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/open_hppp_display.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1410C: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/open_hppp_display.asm:5 JSL UNKNOWN_C0943C
    case 0xC1410E: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // src/text/open_hppp_display.asm:6 LDA #SFX::CURSOR1
    case 0xC14112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/text/open_hppp_display.asm:6 LDA #SFX::CURSOR1
    // Overlapping static entry reached from 0xC14112.
    case 0xC14114: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/open_hppp_display.asm:7 JSL PLAY_SOUND
    case 0xC14115: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/open_hppp_display.asm:8 JSR UNKNOWN_C1134B
    case 0xC14119: cpu.execute_instruction<0x20>(0x001900, 3); return true;
    // src/text/open_hppp_display.asm:10 JSL WINDOW_TICK
    case 0xC1411C: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/open_hppp_display.asm:11 LDA PAD_PRESS
    case 0xC14120: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/open_hppp_display.asm:12 AND #PAD::A_BUTTON | PAD::L_BUTTON
    case 0xC14123: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000A0, 2); else cpu.execute_instruction<0x29>(0x0000A0, 3); return true;
    // src/text/open_hppp_display.asm:12 AND #PAD::A_BUTTON | PAD::L_BUTTON
    // Overlapping static entry reached from 0xC14123.
    case 0xC14125: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/open_hppp_display.asm:13 BEQ @UNKNOWN1
    case 0xC14126: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/open_hppp_display.asm:14 JSL OPEN_MENU_BUTTON
    case 0xC14128: cpu.execute_instruction<0x22>(0xC13A85, 4); return true;
    // src/text/open_hppp_display.asm:15 BRA @UNKNOWN2
    case 0xC1412C: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/open_hppp_display.asm:17 LDA PAD_PRESS
    case 0xC1412E: cpu.execute_instruction<0xAD>(0x00006D, 3); return true;
    // src/text/open_hppp_display.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    case 0xC14131: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000000, 2); else cpu.execute_instruction<0x29>(0x00A000, 3); return true;
    // src/text/open_hppp_display.asm:18 AND #PAD::B_BUTTON | PAD::SELECT_BUTTON
    // Overlapping static entry reached from 0xC14131.
    case 0xC14133: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000F0, 2); else cpu.execute_instruction<0xA0>(0x00E6F0, 3); return true;
    // src/text/open_hppp_display.asm:19 BEQ @UNKNOWN0
    case 0xC14134: cpu.execute_instruction<0xF0>(0x0000E6, 2); return true;
    // src/text/open_hppp_display.asm:19 BEQ @UNKNOWN0
    // Overlapping static entry reached from 0xC14133.
    case 0xC14135: cpu.execute_instruction<0xE6>(0x0000A9, 2); return true;
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    case 0xC14136: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC14135.
    case 0xC14137: cpu.execute_instruction<0x02>(0x000000, 2); return true;
    // src/text/open_hppp_display.asm:20 LDA #SFX::CURSOR2
    // Overlapping static entry reached from 0xC14136.
    case 0xC14138: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/open_hppp_display.asm:21 JSL PLAY_SOUND
    case 0xC14139: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/open_hppp_display.asm:22 JSR CLEAR_INSTANT_PRINTING
    case 0xC1413D: cpu.execute_instruction<0x20>(0x0000ED, 3); return true;
    // src/text/open_hppp_display.asm:23 JSR HIDE_HPPP_WINDOWS
    case 0xC14140: cpu.execute_instruction<0x20>(0x000E72, 3); return true;
    // src/text/open_hppp_display.asm:24 JSR UNKNOWN_C1008E
    case 0xC14143: cpu.execute_instruction<0x20>(0x0002AF, 3); return true;
    // src/text/open_hppp_display.asm:25 JSL WINDOW_TICK
    case 0xC14146: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/open_hppp_display.asm:26 JSL UNKNOWN_C09451
    case 0xC1414A: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/open_hppp_display.asm:28 END_C_FUNCTION
    case 0xC1414E: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_letter-jp.asm (source_named).
bool execute_text_print_letter_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_letter-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC111EC: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111EE: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111EF: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F0: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC111F1.
    case 0xC111F3: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F4: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_letter-jp.asm:8 END_STACK_VARS
    case 0xC111F5: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:9 TAX
    case 0xC111F6: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:10 STX @LOCAL01
    case 0xC111F7: cpu.execute_instruction<0x86>(0x000010, 2); return true;
    // src/text/print_letter-jp.asm:11 LDA CURRENT_FOCUS_WINDOW
    case 0xC111F9: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_letter-jp.asm:12 ASL
    case 0xC111FC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:13 TAX
    case 0xC111FD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:14 LDA OPEN_WINDOW_TABLE,X
    case 0xC111FE: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/print_letter-jp.asm:15 LDY #.SIZEOF(window_stats)
    case 0xC11201: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/print_letter-jp.asm:15 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11201.
    case 0xC11203: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_letter-jp.asm:16 JSL MULT168
    case 0xC11204: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/print_letter-jp.asm:17 TAX
    case 0xC11208: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:18 LDA WINDOW_STATS + window_stats::font,X
    case 0xC11209: cpu.execute_instruction<0xBD>(0x0089D7, 3); return true;
    // src/text/print_letter-jp.asm:19 BEQ @UNKNOWN2
    case 0xC1120C: cpu.execute_instruction<0xF0>(0x00003C, 2); return true;
    // src/text/print_letter-jp.asm:20 LDX @LOCAL01
    case 0xC1120E: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/print_letter-jp.asm:21 TXA
    case 0xC11210: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:22 JSR UNKNOWN_C1C046
    case 0xC11211: cpu.execute_instruction<0x20>(0x00BEAC, 3); return true;
    // src/text/print_letter-jp.asm:23 LDX @LOCAL01
    case 0xC11214: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/print_letter-jp.asm:24 CPX #$0060
    case 0xC11216: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000060, 2); else cpu.execute_instruction<0xE0>(0x000060, 3); return true;
    // src/text/print_letter-jp.asm:24 CPX #$0060
    // Overlapping static entry reached from 0xC11216.
    case 0xC11218: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/text/print_letter-jp.asm:25 BCC @UNKNOWN3
    case 0xC11219: cpu.execute_instruction<0x90>(0x000035, 2); return true;
    // src/text/print_letter-jp.asm:26 TXA
    case 0xC1121B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:27 AND #$000F
    case 0xC1121C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/text/print_letter-jp.asm:27 AND #$000F
    // Overlapping static entry reached from 0xC1121C.
    case 0xC1121E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/print_letter-jp.asm:28 CMP #3
    case 0xC1121F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/print_letter-jp.asm:28 CMP #3
    // Overlapping static entry reached from 0xC1121F.
    case 0xC11221: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:29 BEQ @UNKNOWN0
    case 0xC11222: cpu.execute_instruction<0xF0>(0x000016, 2); return true;
    // src/text/print_letter-jp.asm:30 CMP #5
    case 0xC11224: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/text/print_letter-jp.asm:30 CMP #5
    // Overlapping static entry reached from 0xC11224.
    case 0xC11226: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:31 BEQ @UNKNOWN0
    case 0xC11227: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/text/print_letter-jp.asm:32 CMP #7
    case 0xC11229: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000007, 2); else cpu.execute_instruction<0xC9>(0x000007, 3); return true;
    // src/text/print_letter-jp.asm:32 CMP #7
    // Overlapping static entry reached from 0xC11229.
    case 0xC1122B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:33 BEQ @UNKNOWN0
    case 0xC1122C: cpu.execute_instruction<0xF0>(0x00000C, 2); return true;
    // src/text/print_letter-jp.asm:34 CMP #10
    case 0xC1122E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000A, 2); else cpu.execute_instruction<0xC9>(0x00000A, 3); return true;
    // src/text/print_letter-jp.asm:34 CMP #10
    // Overlapping static entry reached from 0xC1122E.
    case 0xC11230: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:35 BEQ @UNKNOWN0
    case 0xC11231: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/print_letter-jp.asm:36 CMP #11
    case 0xC11233: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00000B, 2); else cpu.execute_instruction<0xC9>(0x00000B, 3); return true;
    // src/text/print_letter-jp.asm:36 CMP #11
    // Overlapping static entry reached from 0xC11233.
    case 0xC11235: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:37 BEQ @UNKNOWN1
    case 0xC11236: cpu.execute_instruction<0xF0>(0x00000A, 2); return true;
    // src/text/print_letter-jp.asm:38 BRA @UNKNOWN3
    case 0xC11238: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/print_letter-jp.asm:40 LDA #26
    case 0xC1123A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001A, 2); else cpu.execute_instruction<0xA9>(0x00001A, 3); return true;
    // src/text/print_letter-jp.asm:40 LDA #26
    // Overlapping static entry reached from 0xC1123A.
    case 0xC1123C: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_letter-jp.asm:41 JSR UNKNOWN_C1C046
    case 0xC1123D: cpu.execute_instruction<0x20>(0x00BEAC, 3); return true;
    // src/text/print_letter-jp.asm:42 BRA @UNKNOWN3
    case 0xC11240: cpu.execute_instruction<0x80>(0x00000E, 2); return true;
    // src/text/print_letter-jp.asm:44 LDA #27
    case 0xC11242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001B, 2); else cpu.execute_instruction<0xA9>(0x00001B, 3); return true;
    // src/text/print_letter-jp.asm:44 LDA #27
    // Overlapping static entry reached from 0xC11242.
    case 0xC11244: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_letter-jp.asm:45 JSR UNKNOWN_C1C046
    case 0xC11245: cpu.execute_instruction<0x20>(0x00BEAC, 3); return true;
    // src/text/print_letter-jp.asm:46 BRA @UNKNOWN3
    case 0xC11248: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/print_letter-jp.asm:48 LDX @LOCAL01
    case 0xC1124A: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/print_letter-jp.asm:49 TXA
    case 0xC1124C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:50 JSR UNKNOWN_C10BA1
    case 0xC1124D: cpu.execute_instruction<0x20>(0x00110E, 3); return true;
    // src/text/print_letter-jp.asm:52 LDA CURRENT_FOCUS_WINDOW
    case 0xC11250: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_letter-jp.asm:53 ASL
    case 0xC11253: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:54 TAX
    case 0xC11254: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:55 LDA OPEN_WINDOW_TABLE + window_stats::prev,X
    case 0xC11255: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/print_letter-jp.asm:56 CMP WINDOW_TAIL
    case 0xC11258: cpu.execute_instruction<0xCD>(0x008C24, 3); return true;
    // src/text/print_letter-jp.asm:57 BEQ @UNKNOWN4
    case 0xC1125B: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/print_letter-jp.asm:58 SEP #PROC_FLAGS::ACCUM8
    case 0xC1125D: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_letter-jp.asm:59 LDA #1
    case 0xC1125F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/text/print_letter-jp.asm:60 STA REDRAW_ALL_WINDOWS
    case 0xC11261: cpu.execute_instruction<0x8D>(0x00991B, 3); return true;
    // src/text/print_letter-jp.asm:60 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC1125F.
    case 0xC11262: cpu.execute_instruction<0x1B>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:60 STA REDRAW_ALL_WINDOWS
    // Overlapping static entry reached from 0xC11262.
    case 0xC11263: cpu.execute_instruction<0x99>(0x0020C2, 3); return true;
    // src/text/print_letter-jp.asm:62 REP #PROC_FLAGS::ACCUM8
    case 0xC11264: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/print_letter-jp.asm:63 LDA TEXT_SOUND_MODE
    case 0xC11266: cpu.execute_instruction<0xAD>(0x009947, 3); return true;
    // src/text/print_letter-jp.asm:64 CMP #2
    case 0xC11269: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/text/print_letter-jp.asm:64 CMP #2
    // Overlapping static entry reached from 0xC11269.
    case 0xC1126B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:65 BEQ @UNKNOWN5
    case 0xC1126C: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/text/print_letter-jp.asm:66 LDA TEXT_SOUND_MODE
    case 0xC1126E: cpu.execute_instruction<0xAD>(0x009947, 3); return true;
    // src/text/print_letter-jp.asm:67 CMP #3
    case 0xC11271: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/text/print_letter-jp.asm:67 CMP #3
    // Overlapping static entry reached from 0xC11271.
    case 0xC11273: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:68 BEQ @UNKNOWN6
    case 0xC11274: cpu.execute_instruction<0xF0>(0x00001B, 2); return true;
    // src/text/print_letter-jp.asm:69 LDA BLINKING_TRIANGLE_FLAG
    case 0xC11276: cpu.execute_instruction<0xAD>(0x009945, 3); return true;
    // src/text/print_letter-jp.asm:70 BNE @UNKNOWN6
    case 0xC11279: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/text/print_letter-jp.asm:72 LDA INSTANT_PRINTING
    case 0xC1127B: cpu.execute_instruction<0xAD>(0x00991A, 3); return true;
    // src/text/print_letter-jp.asm:73 AND #$00FF
    case 0xC1127E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_letter-jp.asm:73 AND #$00FF
    // Overlapping static entry reached from 0xC1127E.
    case 0xC11280: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_letter-jp.asm:74 BNE @UNKNOWN6
    case 0xC11281: cpu.execute_instruction<0xD0>(0x00000E, 2); return true;
    // src/text/print_letter-jp.asm:75 LDX @LOCAL01
    case 0xC11283: cpu.execute_instruction<0xA6>(0x000010, 2); return true;
    // src/text/print_letter-jp.asm:76 CPX #32
    case 0xC11285: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/text/print_letter-jp.asm:76 CPX #32
    // Overlapping static entry reached from 0xC11285.
    case 0xC11287: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_letter-jp.asm:77 BEQ @UNKNOWN6
    case 0xC11288: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/text/print_letter-jp.asm:78 LDA #SFX::TEXT_PRINT
    case 0xC1128A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/print_letter-jp.asm:78 LDA #SFX::TEXT_PRINT
    // Overlapping static entry reached from 0xC1128A.
    case 0xC1128C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_letter-jp.asm:79 JSL PLAY_SOUND
    case 0xC1128D: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/text/print_letter-jp.asm:81 LDA INSTANT_PRINTING
    case 0xC11291: cpu.execute_instruction<0xAD>(0x00991A, 3); return true;
    // src/text/print_letter-jp.asm:82 AND #$00FF
    case 0xC11294: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_letter-jp.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC11294.
    case 0xC11296: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_letter-jp.asm:83 BNE @UNKNOWN9
    case 0xC11297: cpu.execute_instruction<0xD0>(0x000013, 2); return true;
    // src/text/print_letter-jp.asm:84 LDA SELECTED_TEXT_SPEED
    case 0xC11299: cpu.execute_instruction<0xAD>(0x00991D, 3); return true;
    // src/text/print_letter-jp.asm:85 INC
    case 0xC1129C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:86 STA @LOCAL00
    case 0xC1129D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/print_letter-jp.asm:87 BRA @UNKNOWN8
    case 0xC1129F: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/print_letter-jp.asm:89 JSL WINDOW_TICK
    case 0xC112A1: cpu.execute_instruction<0x22>(0xC13502, 4); return true;
    // src/text/print_letter-jp.asm:90 LDA @LOCAL00
    case 0xC112A5: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/print_letter-jp.asm:91 DEC
    case 0xC112A7: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_letter-jp.asm:92 STA @LOCAL00
    case 0xC112A8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/print_letter-jp.asm:94 BNE @UNKNOWN7
    case 0xC112AA: cpu.execute_instruction<0xD0>(0x0000F5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_letter-jp.asm:96 END_C_FUNCTION
    case 0xC112AC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_letter-jp.asm:96 END_C_FUNCTION
    case 0xC112AD: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_menu_items-jp.asm (source_named).
bool execute_text_print_menu_items_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_menu_items-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC11BF0: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF2: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF3: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E5, 2); else cpu.execute_instruction<0x69>(0x00FFE5, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC11BF4.
    case 0xC11BF6: cpu.execute_instruction<0xFF>(0x96AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_menu_items-jp.asm:11 END_STACK_VARS
    case 0xC11BF7: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC11BF8: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_menu_items-jp.asm:12 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11BF6.
    case 0xC11BFA: cpu.execute_instruction<0x8C>(0x00FFC9, 3); return true;
    // src/text/print_menu_items-jp.asm:13 CMP #.LOWORD(-1)
    case 0xC11BFB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items-jp.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11BFB.
    case 0xC11BFD: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items-jp.asm:14 BEQL @UNKNOWN13
    case 0xC11BFE: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:14 BEQL @UNKNOWN13
    case 0xC11C00: cpu.execute_instruction<0x4C>(0x001DBD, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:14 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC11BFD.
    case 0xC11C01: cpu.execute_instruction<0xBD>(0x00AD1D, 3); return true;
    // src/text/print_menu_items-jp.asm:15 LDA CURRENT_FOCUS_WINDOW
    case 0xC11C03: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_menu_items-jp.asm:15 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC11C01.
    case 0xC11C04: cpu.execute_instruction<0x96>(0x00008C, 2); return true;
    // src/text/print_menu_items-jp.asm:16 ASL
    case 0xC11C06: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:17 TAX
    case 0xC11C07: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:18 LDA OPEN_WINDOW_TABLE,X
    case 0xC11C08: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/print_menu_items-jp.asm:19 LDY #.SIZEOF(window_stats)
    case 0xC11C0B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/print_menu_items-jp.asm:19 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11C0B.
    case 0xC11C0D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_menu_items-jp.asm:20 JSL MULT168
    case 0xC11C0E: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/print_menu_items-jp.asm:21 CLC
    case 0xC11C12: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:22 ADC #.LOWORD(WINDOW_STATS)
    case 0xC11C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/print_menu_items-jp.asm:22 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC11C13.
    case 0xC11C15: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x000085, 2); else cpu.execute_instruction<0x89>(0x000485, 3); return true;
    // src/text/print_menu_items-jp.asm:23 STA @VIRTUAL04
    case 0xC11C16: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:23 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC11C15.
    case 0xC11C17: cpu.execute_instruction<0x04>(0x000085, 2); return true;
    // src/text/print_menu_items-jp.asm:24 STA @LOCAL05
    case 0xC11C18: cpu.execute_instruction<0x85>(0x000019, 2); return true;
    // src/text/print_menu_items-jp.asm:24 STA @LOCAL05
    // Overlapping static entry reached from 0xC11C17.
    case 0xC11C19: cpu.execute_instruction<0x19>(0x0004A6, 3); return true;
    // src/text/print_menu_items-jp.asm:25 LDX @VIRTUAL04
    case 0xC11C1A: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:26 LDA a:window_stats::current_option,X
    case 0xC11C1C: cpu.execute_instruction<0xBD>(0x00002B, 3); return true;
    // src/text/print_menu_items-jp.asm:27 CMP #.LOWORD(-1)
    case 0xC11C1F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items-jp.asm:27 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11C1F.
    case 0xC11C21: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items-jp.asm:28 BEQL @UNKNOWN13
    case 0xC11C22: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:28 BEQL @UNKNOWN13
    case 0xC11C24: cpu.execute_instruction<0x4C>(0x001DBD, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:28 BEQL @UNKNOWN13
    // Overlapping static entry reached from 0xC11C21.
    case 0xC11C25: cpu.execute_instruction<0xBD>(0x00851D, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C27: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11C25.
    case 0xC11C28: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C29: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C2E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C30: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:29 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11C31: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:31 CLC
    case 0xC11C32: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11C33: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/print_menu_items-jp.asm:32 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11C33.
    case 0xC11C35: cpu.execute_instruction<0x8D>(0x000285, 3); return true;
    // src/text/print_menu_items-jp.asm:33 STA @VIRTUAL02
    case 0xC11C36: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:34 JSR SET_INSTANT_PRINTING
    case 0xC11C38: cpu.execute_instruction<0x20>(0x0000F7, 3); return true;
    // src/text/print_menu_items-jp.asm:36 LDX @VIRTUAL02
    case 0xC11C3B: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:37 LDA a:menu_option::page,X
    case 0xC11C3D: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // src/text/print_menu_items-jp.asm:38 LDX @LOCAL05
    case 0xC11C40: cpu.execute_instruction<0xA6>(0x000019, 2); return true;
    // src/text/print_menu_items-jp.asm:39 STX @VIRTUAL04
    case 0xC11C42: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:40 CMP a:window_stats::menu_page_number,X
    case 0xC11C44: cpu.execute_instruction<0xDD>(0x000033, 3); return true;
    // src/text/print_menu_items-jp.asm:41 BEQ @UNKNOWN3
    case 0xC11C47: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/print_menu_items-jp.asm:42 CMP #0
    case 0xC11C49: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:42 CMP #0
    // Overlapping static entry reached from 0xC11C49.
    case 0xC11C4B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items-jp.asm:43 BNEL @UNKNOWN12
    case 0xC11C4C: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:43 BNEL @UNKNOWN12
    case 0xC11C4E: cpu.execute_instruction<0x4C>(0x001D9F, 3); return true;
    // src/text/print_menu_items-jp.asm:45 LDX @VIRTUAL02
    case 0xC11C51: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:46 LDA a:menu_option::text_y,X
    case 0xC11C53: cpu.execute_instruction<0xBD>(0x00000A, 3); return true;
    // src/text/print_menu_items-jp.asm:47 TAX
    case 0xC11C56: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:48 STX @LOCAL04
    case 0xC11C57: cpu.execute_instruction<0x86>(0x000017, 2); return true;
    // src/text/print_menu_items-jp.asm:49 LDX @VIRTUAL02
    case 0xC11C59: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:50 LDA a:menu_option::text_x,X
    case 0xC11C5B: cpu.execute_instruction<0xBD>(0x000008, 3); return true;
    // src/text/print_menu_items-jp.asm:51 LDX @LOCAL04
    case 0xC11C5E: cpu.execute_instruction<0xA6>(0x000017, 2); return true;
    // src/text/print_menu_items-jp.asm:52 JSR UNKNOWN_C438A5
    case 0xC11C60: cpu.execute_instruction<0x20>(0x001169, 3); return true;
    // src/text/print_menu_items-jp.asm:53 LDA #$2F
    case 0xC11C63: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/text/print_menu_items-jp.asm:53 LDA #$2F
    // Overlapping static entry reached from 0xC11C63.
    case 0xC11C65: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:54 JSR PRINT_LETTER
    case 0xC11C66: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_menu_items-jp.asm:55 LDX @VIRTUAL02
    case 0xC11C69: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:56 LDA a:menu_option::page,X
    case 0xC11C6B: cpu.execute_instruction<0xBD>(0x000006, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/text/print_menu_items-jp.asm:57 BNEL @UNKNOWN11
    case 0xC11C6E: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:57 BNEL @UNKNOWN11
    case 0xC11C70: cpu.execute_instruction<0x4C>(0x001D7F, 3); return true;
    // src/text/print_menu_items-jp.asm:58 LDA #0
    case 0xC11C73: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:58 LDA #0
    // Overlapping static entry reached from 0xC11C73.
    case 0xC11C75: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:59 JSR UNKNOWN_C10FEA
    case 0xC11C76: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/print_menu_items-jp.asm:60 LDA #$014F
    case 0xC11C79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004F, 2); else cpu.execute_instruction<0xA9>(0x00014F, 3); return true;
    // src/text/print_menu_items-jp.asm:60 LDA #$014F
    // Overlapping static entry reached from 0xC11C79.
    case 0xC11C7B: cpu.execute_instruction<0x01>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:61 JSR PRINT_LETTER
    case 0xC11C7C: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_menu_items-jp.asm:61 JSR PRINT_LETTER
    // Overlapping static entry reached from 0xC11C7B.
    case 0xC11C7D: cpu.execute_instruction<0xEC>(0x00A911, 3); return true;
    // src/text/print_menu_items-jp.asm:62 LDA #0
    case 0xC11C7F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:62 LDA #0
    // Overlapping static entry reached from 0xC11C7D.
    case 0xC11C80: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items-jp.asm:62 LDA #0
    // Overlapping static entry reached from 0xC11C7F.
    case 0xC11C81: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:63 JSR UNKNOWN_C10FEA
    case 0xC11C82: cpu.execute_instruction<0x20>(0x0015A4, 3); return true;
    // src/text/print_menu_items-jp.asm:64 LDA @VIRTUAL04
    case 0xC11C85: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:65 CLC
    case 0xC11C87: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:66 ADC #window_stats::title
    case 0xC11C88: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/text/print_menu_items-jp.asm:66 ADC #window_stats::title
    // Overlapping static entry reached from 0xC11C88.
    case 0xC11C8A: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/print_menu_items-jp.asm:67 TAY
    case 0xC11C8B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:68 LDA __BSS_START__,Y
    case 0xC11C8C: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:69 AND #$00FF
    case 0xC11C8F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_menu_items-jp.asm:69 AND #$00FF
    // Overlapping static entry reached from 0xC11C8F.
    case 0xC11C91: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_menu_items-jp.asm:70 BEQL @UNKNOWN11
    case 0xC11C92: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_menu_items-jp.asm:70 BEQL @UNKNOWN11
    case 0xC11C94: cpu.execute_instruction<0x4C>(0x001D7F, 3); return true;
    // src/text/print_menu_items-jp.asm:71 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    case 0xC11C97: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004A, 2); else cpu.execute_instruction<0xA2>(0x009F4A, 3); return true;
    // src/text/print_menu_items-jp.asm:71 LDX #.LOWORD(TEMPORARY_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC11C97.
    case 0xC11C99: cpu.execute_instruction<0x9F>(0xE20980, 4); return true;
    // src/text/print_menu_items-jp.asm:72 BRA @UNKNOWN7
    case 0xC11C9A: cpu.execute_instruction<0x80>(0x000009, 2); return true;
    // src/text/print_menu_items-jp.asm:74 SEP #PROC_FLAGS::ACCUM8
    case 0xC11C9C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:74 SEP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC11C99.
    case 0xC11C9D: cpu.execute_instruction<0x20>(0x0016A5, 3); return true;
    // src/text/print_menu_items-jp.asm:75 LDA @LOCAL03
    case 0xC11C9E: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // src/text/print_menu_items-jp.asm:76 STA __BSS_START__,X
    case 0xC11CA0: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:77 INY
    case 0xC11CA3: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:78 INX
    case 0xC11CA4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:80 SEP #PROC_FLAGS::ACCUM8
    case 0xC11CA5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:81 LDA __BSS_START__,Y
    case 0xC11CA7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:82 STA @LOCAL03
    case 0xC11CAA: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // src/text/print_menu_items-jp.asm:83 REP #PROC_FLAGS::ACCUM8
    case 0xC11CAC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:84 AND #$00FF
    case 0xC11CAE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_menu_items-jp.asm:84 AND #$00FF
    // Overlapping static entry reached from 0xC11CAE.
    case 0xC11CB0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_menu_items-jp.asm:85 BEQ @UNKNOWN8
    case 0xC11CB1: cpu.execute_instruction<0xF0>(0x000008, 2); return true;
    // src/text/print_menu_items-jp.asm:86 AND #$00FF
    case 0xC11CB3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_menu_items-jp.asm:86 AND #$00FF
    // Overlapping static entry reached from 0xC11CB3.
    case 0xC11CB5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/text/print_menu_items-jp.asm:87 CMP #58
    case 0xC11CB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x00003A, 2); else cpu.execute_instruction<0xC9>(0x00003A, 3); return true;
    // src/text/print_menu_items-jp.asm:87 CMP #58
    // Overlapping static entry reached from 0xC11CB6.
    case 0xC11CB8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_menu_items-jp.asm:88 BNE @UNKNOWN6
    case 0xC11CB9: cpu.execute_instruction<0xD0>(0x0000E1, 2); return true;
    // src/text/print_menu_items-jp.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC11CBB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:91 LDA #58
    case 0xC11CBD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003A, 2); else cpu.execute_instruction<0xA9>(0x009D3A, 3); return true;
    // src/text/print_menu_items-jp.asm:92 STA __BSS_START__,X
    case 0xC11CBF: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:92 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CBD.
    case 0xC11CC0: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items-jp.asm:93 INX
    case 0xC11CC2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:94 REP #PROC_FLAGS::ACCUM8
    case 0xC11CC3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:95 LDA @VIRTUAL04
    case 0xC11CC5: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:96 CLC
    case 0xC11CC7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:97 ADC #window_stats::menu_page_number
    case 0xC11CC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000033, 2); else cpu.execute_instruction<0x69>(0x000033, 3); return true;
    // src/text/print_menu_items-jp.asm:97 ADC #window_stats::menu_page_number
    // Overlapping static entry reached from 0xC11CC8.
    case 0xC11CCA: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/text/print_menu_items-jp.asm:98 TAY
    case 0xC11CCB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:99 STY @LOCAL02
    case 0xC11CCC: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/print_menu_items-jp.asm:100 SEP #PROC_FLAGS::ACCUM8
    case 0xC11CCE: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:101 LDA __BSS_START__,Y
    case 0xC11CD0: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:102 CLC
    case 0xC11CD3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:103 ADC #CHAR::ZERO
    case 0xC11CD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x009D30, 3); return true;
    // src/text/print_menu_items-jp.asm:104 STA __BSS_START__,X
    case 0xC11CD6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:104 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CD4.
    case 0xC11CD7: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items-jp.asm:105 INX
    case 0xC11CD9: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:106 LDA #59
    case 0xC11CDA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x009D3B, 3); return true;
    // src/text/print_menu_items-jp.asm:107 STA __BSS_START__,X
    case 0xC11CDC: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:107 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CDA.
    case 0xC11CDD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items-jp.asm:108 INX
    case 0xC11CDF: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:109 LDA #0
    case 0xC11CE0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/text/print_menu_items-jp.asm:110 STA __BSS_START__,X
    case 0xC11CE2: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:110 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC11CE0.
    case 0xC11CE3: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/text/print_menu_items-jp.asm:111 REP #PROC_FLAGS::ACCUM8
    case 0xC11CE5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CE7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004A, 2); else cpu.execute_instruction<0xA9>(0x009F4A, 3); return true;
    // include/macros.asm:903 LDA #.LOWORD(src)
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC11CE7.
    case 0xC11CE9: cpu.execute_instruction<0x9F>(0x8B0685, 4); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CEA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CEC: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CED: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CEF: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CF0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items-jp.asm:112 PROMOTENEARPTR TEMPORARY_TEXT_BUFFER, @VIRTUAL06
    case 0xC11CF2: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/print_menu_items-jp.asm:113 REP #PROC_FLAGS::ACCUM8
    case 0xC11CF4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CF6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CF8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CFA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:114 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11CFC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items-jp.asm:115 LDX #.LOWORD(-1)
    case 0xC11CFE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/text/print_menu_items-jp.asm:115 LDX #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11CFE.
    case 0xC11D00: cpu.execute_instruction<0xFF>(0x8C96AD, 4); return true;
    // src/text/print_menu_items-jp.asm:116 LDA CURRENT_FOCUS_WINDOW
    case 0xC11D01: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_menu_items-jp.asm:117 JSL SET_WINDOW_TITLE
    case 0xC11D04: cpu.execute_instruction<0x22>(0xC2030C, 4); return true;
    // src/text/print_menu_items-jp.asm:118 LDA @VIRTUAL04
    case 0xC11D08: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:119 CLC
    case 0xC11D0A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:120 ADC #60
    case 0xC11D0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003C, 2); else cpu.execute_instruction<0x69>(0x00003C, 3); return true;
    // src/text/print_menu_items-jp.asm:120 ADC #60
    // Overlapping static entry reached from 0xC11D0B.
    case 0xC11D0D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D0E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D10: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D11: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D13: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D14: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items-jp.asm:121 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D16: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/print_menu_items-jp.asm:122 REP #PROC_FLAGS::ACCUM8
    case 0xC11D18: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D1A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D1C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D1E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:123 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D20: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items-jp.asm:124 JSL STRLEN
    case 0xC11D22: cpu.execute_instruction<0x22>(0xC08F13, 4); return true;
    // src/text/print_menu_items-jp.asm:125 STA @LOCAL01
    case 0xC11D26: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D28: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D2A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D2C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:126 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D2E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items-jp.asm:127 LDA @LOCAL01
    case 0xC11D30: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/print_menu_items-jp.asm:128 DEC
    case 0xC11D32: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:129 DEC
    case 0xC11D33: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:130 JSR PRINT_STRING
    case 0xC11D34: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/print_menu_items-jp.asm:131 LDY @LOCAL02
    case 0xC11D37: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/print_menu_items-jp.asm:132 LDA __BSS_START__,Y
    case 0xC11D39: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/text/print_menu_items-jp.asm:133 STA @LOCAL02
    case 0xC11D3C: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/text/print_menu_items-jp.asm:134 LDX @VIRTUAL04
    case 0xC11D3E: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:135 LDA a:window_stats::option_count,X
    case 0xC11D40: cpu.execute_instruction<0xBD>(0x00002D, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D43: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D45: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D46: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D47: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D49: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D4A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D4C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:136 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:137 TAX
    case 0xC11D4E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:138 LDA MENU_OPTIONS + menu_option::previous,X
    case 0xC11D4F: cpu.execute_instruction<0xBD>(0x008D16, 3); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D52: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D54: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D55: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D56: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D58: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D59: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D5B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:139 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11D5C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:140 TAX
    case 0xC11D5D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:141 LDA @LOCAL02
    case 0xC11D5E: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // src/text/print_menu_items-jp.asm:142 CMP MENU_OPTIONS + menu_option::page,X
    case 0xC11D60: cpu.execute_instruction<0xDD>(0x008D18, 3); return true;
    // src/text/print_menu_items-jp.asm:143 BNE @UNKNOWN9
    case 0xC11D63: cpu.execute_instruction<0xD0>(0x000005, 2); return true;
    // src/text/print_menu_items-jp.asm:144 LDA #49
    case 0xC11D65: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000031, 2); else cpu.execute_instruction<0xA9>(0x000031, 3); return true;
    // src/text/print_menu_items-jp.asm:144 LDA #49
    // Overlapping static entry reached from 0xC11D65.
    case 0xC11D67: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/text/print_menu_items-jp.asm:145 BRA @UNKNOWN10
    case 0xC11D68: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/text/print_menu_items-jp.asm:147 CLC
    case 0xC11D6A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:148 ADC #CHAR::ONE
    case 0xC11D6B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000031, 2); else cpu.execute_instruction<0x69>(0x000031, 3); return true;
    // src/text/print_menu_items-jp.asm:148 ADC #CHAR::ONE
    // Overlapping static entry reached from 0xC11D6B.
    case 0xC11D6D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:150 JSR PRINT_LETTER
    case 0xC11D6E: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_menu_items-jp.asm:151 LDA #59
    case 0xC11D71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003B, 2); else cpu.execute_instruction<0xA9>(0x00003B, 3); return true;
    // src/text/print_menu_items-jp.asm:151 LDA #59
    // Overlapping static entry reached from 0xC11D71.
    case 0xC11D73: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:152 JSR PRINT_LETTER
    case 0xC11D74: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_menu_items-jp.asm:153 LDA #153
    case 0xC11D77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000099, 2); else cpu.execute_instruction<0xA9>(0x000099, 3); return true;
    // src/text/print_menu_items-jp.asm:153 LDA #153
    // Overlapping static entry reached from 0xC11D77.
    case 0xC11D79: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:154 JSR PRINT_LETTER
    case 0xC11D7A: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_menu_items-jp.asm:155 BRA @UNKNOWN12
    case 0xC11D7D: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/text/print_menu_items-jp.asm:157 LDA @VIRTUAL02
    case 0xC11D7F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:158 CLC
    case 0xC11D81: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:159 ADC #menu_option::label
    case 0xC11D82: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000013, 2); else cpu.execute_instruction<0x69>(0x000013, 3); return true;
    // src/text/print_menu_items-jp.asm:159 ADC #menu_option::label
    // Overlapping static entry reached from 0xC11D82.
    case 0xC11D84: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D85: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D87: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D88: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D8A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D8B: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/text/print_menu_items-jp.asm:160 PROMOTENEARPTRA @VIRTUAL06
    case 0xC11D8D: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/text/print_menu_items-jp.asm:161 REP #PROC_FLAGS::ACCUM8
    case 0xC11D8F: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D91: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D93: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D95: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_menu_items-jp.asm:162 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC11D97: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_menu_items-jp.asm:163 LDA #.LOWORD(-1)
    case 0xC11D99: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items-jp.asm:163 LDA #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11D99.
    case 0xC11D9B: cpu.execute_instruction<0xFF>(0x14DD20, 4); return true;
    // src/text/print_menu_items-jp.asm:164 JSR PRINT_STRING
    case 0xC11D9C: cpu.execute_instruction<0x20>(0x0014DD, 3); return true;
    // src/text/print_menu_items-jp.asm:166 LDX @VIRTUAL02
    case 0xC11D9F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:167 LDA a:menu_option::next,X
    case 0xC11DA1: cpu.execute_instruction<0xBD>(0x000002, 3); return true;
    // src/text/print_menu_items-jp.asm:168 CMP #.LOWORD(-1)
    case 0xC11DA4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_menu_items-jp.asm:168 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11DA4.
    case 0xC11DA6: cpu.execute_instruction<0xFF>(0x8514F0, 4); return true;
    // src/text/print_menu_items-jp.asm:169 BEQ @UNKNOWN13
    case 0xC11DA7: cpu.execute_instruction<0xF0>(0x000014, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DA9: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:679 STA scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    // Overlapping static entry reached from 0xC11DA6.
    case 0xC11DAA: cpu.execute_instruction<0x04>(0x00000A, 2); return true;
    // include/macros.asm:680 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:681 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:682 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAD: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:683 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DAF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:684 ADC scratch
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DB0: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:685 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DB2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:686 ASL
    // Macro caller: src/text/print_menu_items-jp.asm:170 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(menu_option)
    case 0xC11DB3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:171 CLC
    case 0xC11DB4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_menu_items-jp.asm:172 ADC #.LOWORD(MENU_OPTIONS)
    case 0xC11DB5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000012, 2); else cpu.execute_instruction<0x69>(0x008D12, 3); return true;
    // src/text/print_menu_items-jp.asm:172 ADC #.LOWORD(MENU_OPTIONS)
    // Overlapping static entry reached from 0xC11DB5.
    case 0xC11DB7: cpu.execute_instruction<0x8D>(0x000285, 3); return true;
    // src/text/print_menu_items-jp.asm:173 STA @VIRTUAL02
    case 0xC11DB8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_menu_items-jp.asm:174 JMP @UNKNOWN2
    case 0xC11DBA: cpu.execute_instruction<0x4C>(0x001C3B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_menu_items-jp.asm:176 END_C_FUNCTION
    case 0xC11DBD: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_menu_items-jp.asm:176 END_C_FUNCTION
    case 0xC11DBE: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_menu_items_redirect.asm (source_named).
bool execute_text_print_menu_items_redirect_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_menu_items_redirect.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC1DBE8: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // src/text/print_menu_items_redirect.asm:5 JSR PRINT_MENU_ITEMS
    case 0xC1DBEA: cpu.execute_instruction<0x20>(0x001BF0, 3); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/text/print_menu_items_redirect.asm:6 END_C_FUNCTION
    case 0xC1DBED: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_newline.asm (source_named).
bool execute_text_print_newline_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_newline.asm:4 BEGIN_C_FUNCTION
    case 0xC11174: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC11176: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC11177: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC11178: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    // Overlapping static entry reached from 0xC11178.
    case 0xC1117A: cpu.execute_instruction<0xFF>(0x96AD5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_newline.asm:11 END_STACK_VARS
    case 0xC1117B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    case 0xC1117C: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_newline.asm:17 LDA CURRENT_FOCUS_WINDOW
    // Overlapping static entry reached from 0xC1117A.
    case 0xC1117E: cpu.execute_instruction<0x8C>(0x00AA0A, 3); return true;
    // src/text/print_newline.asm:18 ASL
    case 0xC1117F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_newline.asm:19 TAX
    case 0xC11180: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_newline.asm:20 LDA OPEN_WINDOW_TABLE,X
    case 0xC11181: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/print_newline.asm:21 LDY #.SIZEOF(window_stats)
    case 0xC11184: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/print_newline.asm:21 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11184.
    case 0xC11186: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_newline.asm:22 JSL MULT168
    case 0xC11187: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/print_newline.asm:23 CLC
    case 0xC1118B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_newline.asm:24 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1118C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/print_newline.asm:24 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1118C.
    case 0xC1118E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000A8, 2); else cpu.execute_instruction<0x89>(0x0084A8, 3); return true;
    // src/text/print_newline.asm:25 TAY
    case 0xC1118F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_newline.asm:26 STY @LOCAL01
    case 0xC11190: cpu.execute_instruction<0x84>(0x000010, 2); return true;
    // src/text/print_newline.asm:26 STY @LOCAL01
    // Overlapping static entry reached from 0xC1118E.
    case 0xC11191: cpu.execute_instruction<0x10>(0x0000B9, 2); return true;
    // src/text/print_newline.asm:31 LDA a:window_stats::font,Y
    case 0xC11192: cpu.execute_instruction<0xB9>(0x000015, 3); return true;
    // src/text/print_newline.asm:31 LDA a:window_stats::font,Y
    // Overlapping static entry reached from 0xC11191.
    case 0xC11193: cpu.execute_instruction<0x15>(0x000000, 2); return true;
    // src/text/print_newline.asm:32 BEQ @UNKNOWN0
    case 0xC11195: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/print_newline.asm:33 JSL UNKNOWN_C45E96
    case 0xC11197: cpu.execute_instruction<0x22>(0xC43BE8, 4); return true;
    // src/text/print_newline.asm:35 LDY @LOCAL01
    case 0xC1119B: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_newline.asm:36 TYA
    case 0xC1119D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/text/print_newline.asm:37 CLC
    case 0xC1119E: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_newline.asm:38 ADC #window_stats::text_y
    case 0xC1119F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/text/print_newline.asm:38 ADC #window_stats::text_y
    // Overlapping static entry reached from 0xC1119F.
    case 0xC111A1: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/print_newline.asm:39 TAX
    case 0xC111A2: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_newline.asm:40 LDA __BSS_START__,X
    case 0xC111A3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/print_newline.asm:41 STA @LOCAL00
    case 0xC111A6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/text/print_newline.asm:42 LDA a:window_stats::height,Y
    case 0xC111A8: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/text/print_newline.asm:43 LSR
    case 0xC111AB: cpu.execute_instruction<0x4A>(0x000000, 1); return true;
    // src/text/print_newline.asm:44 DEC
    case 0xC111AC: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/text/print_newline.asm:45 STA @VIRTUAL02
    case 0xC111AD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_newline.asm:46 LDA @LOCAL00
    case 0xC111AF: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/text/print_newline.asm:47 CMP @VIRTUAL02
    case 0xC111B1: cpu.execute_instruction<0xC5>(0x000002, 2); return true;
    // src/text/print_newline.asm:48 BEQ @UNKNOWN1
    case 0xC111B3: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/text/print_newline.asm:49 INC
    case 0xC111B5: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/text/print_newline.asm:50 STA __BSS_START__,X
    case 0xC111B6: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/text/print_newline.asm:51 BRA @UNKNOWN2
    case 0xC111B9: cpu.execute_instruction<0x80>(0x000006, 2); return true;
    // src/text/print_newline.asm:53 LDA CURRENT_FOCUS_WINDOW
    case 0xC111BB: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_newline.asm:55 JSR UNKNOWN_C437B8
    case 0xC111BE: cpu.execute_instruction<0x20>(0x000F65, 3); return true;
    // src/text/print_newline.asm:60 LDY @LOCAL01
    case 0xC111C1: cpu.execute_instruction<0xA4>(0x000010, 2); return true;
    // src/text/print_newline.asm:61 TYX
    case 0xC111C3: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/print_newline.asm:62 STZ a:window_stats::text_x,X
    case 0xC111C4: cpu.execute_instruction<0x9E>(0x00000E, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_newline.asm:64 END_C_FUNCTION
    case 0xC111C7: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_newline.asm:64 END_C_FUNCTION
    case 0xC111C8: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_number-jp.asm (source_named).
bool execute_text_print_number_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_number-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC11344: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC11346: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC11347: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC11348: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E8, 2); else cpu.execute_instruction<0x69>(0x00FFE8, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC11348.
    case 0xC1134A: cpu.execute_instruction<0xFF>(0x26A55B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_number-jp.asm:10 END_STACK_VARS
    case 0xC1134B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1134C: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC1134E: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC11350: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL0A
    case 0xC11352: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/print_number-jp.asm:12 LDA CURRENT_FOCUS_WINDOW
    case 0xC11354: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_number-jp.asm:13 CMP #.LOWORD(-1)
    case 0xC11357: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000FF, 2); else cpu.execute_instruction<0xC9>(0x00FFFF, 3); return true;
    // src/text/print_number-jp.asm:13 CMP #.LOWORD(-1)
    // Overlapping static entry reached from 0xC11357.
    case 0xC11359: cpu.execute_instruction<0xFF>(0x4C03D0, 4); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/text/print_number-jp.asm:14 BEQL @UNKNOWN6
    case 0xC1135A: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number-jp.asm:14 BEQL @UNKNOWN6
    case 0xC1135C: cpu.execute_instruction<0x4C>(0x001402, 3); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/text/print_number-jp.asm:14 BEQL @UNKNOWN6
    // Overlapping static entry reached from 0xC11359.
    case 0xC1135D: cpu.execute_instruction<0x02>(0x000014, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC1135F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00967F, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC1135F.
    case 0xC11361: cpu.execute_instruction<0x96>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC11362: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC11361.
    case 0xC11363: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC11364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC11363.
    case 0xC11365: cpu.execute_instruction<0xFF>(0x0885FF, 4); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    // Overlapping static entry reached from 0xC11364.
    case 0xC11366: cpu.execute_instruction<0xFF>(0xA50885, 4); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:16 MOVE_INT_CONSTANT $FFFF967F, @VIRTUAL06 ; fun with C enums?
    case 0xC11367: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/print_number-jp.asm:20 LDA @VIRTUAL06
    case 0xC11369: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // src/text/print_number-jp.asm:20 LDA @VIRTUAL06
    // Overlapping static entry reached from 0xC11366.
    case 0xC1136A: cpu.execute_instruction<0x06>(0x0000C5, 2); return true;
    // src/text/print_number-jp.asm:21 CMP @VIRTUAL0A
    case 0xC1136B: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/text/print_number-jp.asm:21 CMP @VIRTUAL0A
    // Overlapping static entry reached from 0xC1136A.
    case 0xC1136C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:22 LDA @VIRTUAL06+2
    case 0xC1136D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/text/print_number-jp.asm:23 SBC @VIRTUAL0A+2
    case 0xC1136F: cpu.execute_instruction<0xE5>(0x00000C, 2); return true;
    // src/text/print_number-jp.asm:24 BCS @UNKNOWN1
    case 0xC11371: cpu.execute_instruction<0xB0>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11373: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11375: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11377: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:25 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC11379: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/text/print_number-jp.asm:27 LDA CURRENT_FOCUS_WINDOW
    case 0xC1137B: cpu.execute_instruction<0xAD>(0x008C96, 3); return true;
    // src/text/print_number-jp.asm:28 ASL
    case 0xC1137E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:29 TAX
    case 0xC1137F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:30 LDA OPEN_WINDOW_TABLE,X
    case 0xC11380: cpu.execute_instruction<0xBD>(0x008C26, 3); return true;
    // src/text/print_number-jp.asm:31 LDY #.SIZEOF(window_stats)
    case 0xC11383: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004C, 2); else cpu.execute_instruction<0xA0>(0x00004C, 3); return true;
    // src/text/print_number-jp.asm:31 LDY #.SIZEOF(window_stats)
    // Overlapping static entry reached from 0xC11383.
    case 0xC11385: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/text/print_number-jp.asm:32 JSL MULT168
    case 0xC11386: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/text/print_number-jp.asm:33 CLC
    case 0xC1138A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:34 ADC #.LOWORD(WINDOW_STATS)
    case 0xC1138B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000C2, 2); else cpu.execute_instruction<0x69>(0x0089C2, 3); return true;
    // src/text/print_number-jp.asm:34 ADC #.LOWORD(WINDOW_STATS)
    // Overlapping static entry reached from 0xC1138B.
    case 0xC1138D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x89>(0x0000AA, 2); else cpu.execute_instruction<0x89>(0x0086AA, 3); return true;
    // src/text/print_number-jp.asm:35 TAX
    case 0xC1138E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:36 STX @LOCAL03
    case 0xC1138F: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:36 STX @LOCAL03
    // Overlapping static entry reached from 0xC1138D.
    case 0xC11390: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11391: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    // Overlapping static entry reached from 0xC11390.
    case 0xC11392: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11393: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11395: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_number-jp.asm:37 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC11397: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/text/print_number-jp.asm:38 JSR UNKNOWN_C10D7C
    case 0xC11399: cpu.execute_instruction<0x20>(0x0012CA, 3); return true;
    // src/text/print_number-jp.asm:39 TAY
    case 0xC1139C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:40 STY @LOCAL02
    case 0xC1139D: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/print_number-jp.asm:41 STY @VIRTUAL04
    case 0xC1139F: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/print_number-jp.asm:42 LDA #7
    case 0xC113A1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/text/print_number-jp.asm:42 LDA #7
    // Overlapping static entry reached from 0xC113A1.
    case 0xC113A3: cpu.execute_instruction<0x00>(0x000038, 2); return true;
    // src/text/print_number-jp.asm:43 SEC
    case 0xC113A4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:44 SBC @VIRTUAL04
    case 0xC113A5: cpu.execute_instruction<0xE5>(0x000004, 2); return true;
    // src/text/print_number-jp.asm:45 CLC
    case 0xC113A7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    case 0xC113A8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000098, 2); else cpu.execute_instruction<0x69>(0x008C98, 3); return true;
    // src/text/print_number-jp.asm:46 ADC #.LOWORD(NUMBER_TEXT_BUFFER)
    // Overlapping static entry reached from 0xC113A8.
    case 0xC113AA: cpu.execute_instruction<0x8C>(0x000285, 3); return true;
    // src/text/print_number-jp.asm:47 STA @VIRTUAL02
    case 0xC113AB: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/text/print_number-jp.asm:48 LDX @LOCAL03
    case 0xC113AD: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:49 LDA a:window_stats::number_padding,X
    case 0xC113AF: cpu.execute_instruction<0xBD>(0x000012, 3); return true;
    // src/text/print_number-jp.asm:50 AND #$00FF
    case 0xC113B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_number-jp.asm:50 AND #$00FF
    // Overlapping static entry reached from 0xC113B2.
    case 0xC113B4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/text/print_number-jp.asm:51 STA @LOCAL01
    case 0xC113B5: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // src/text/print_number-jp.asm:52 AND #$0080
    case 0xC113B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000080, 2); else cpu.execute_instruction<0x29>(0x000080, 3); return true;
    // src/text/print_number-jp.asm:52 AND #$0080
    // Overlapping static entry reached from 0xC113B7.
    case 0xC113B9: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_number-jp.asm:53 BNE @UNKNOWN5
    case 0xC113BA: cpu.execute_instruction<0xD0>(0x000041, 2); return true;
    // src/text/print_number-jp.asm:54 LDA @LOCAL01
    case 0xC113BC: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // src/text/print_number-jp.asm:55 AND #$000F
    case 0xC113BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/text/print_number-jp.asm:55 AND #$000F
    // Overlapping static entry reached from 0xC113BE.
    case 0xC113C0: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/text/print_number-jp.asm:56 TAX
    case 0xC113C1: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:57 INX
    case 0xC113C2: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:58 STX @LOCAL03
    case 0xC113C3: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:59 STY @VIRTUAL04
    case 0xC113C5: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/print_number-jp.asm:60 TXA
    case 0xC113C7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:61 CMP @VIRTUAL04
    case 0xC113C8: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/text/print_number-jp.asm:62 BCS @UNKNOWN3
    case 0xC113CA: cpu.execute_instruction<0xB0>(0x000010, 2); return true;
    // src/text/print_number-jp.asm:63 TYX
    case 0xC113CC: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:64 STX @LOCAL03
    case 0xC113CD: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:65 BRA @UNKNOWN3
    case 0xC113CF: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/print_number-jp.asm:67 LDA #CHAR::SPACE
    case 0xC113D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/text/print_number-jp.asm:67 LDA #CHAR::SPACE
    // Overlapping static entry reached from 0xC113D1.
    case 0xC113D3: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/text/print_number-jp.asm:68 JSR PRINT_LETTER
    case 0xC113D4: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_number-jp.asm:69 LDX @LOCAL03
    case 0xC113D7: cpu.execute_instruction<0xA6>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:70 DEX
    case 0xC113D9: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:71 STX @LOCAL03
    case 0xC113DA: cpu.execute_instruction<0x86>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:73 LDY @LOCAL02
    case 0xC113DC: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/print_number-jp.asm:74 STY @VIRTUAL04
    case 0xC113DE: cpu.execute_instruction<0x84>(0x000004, 2); return true;
    // src/text/print_number-jp.asm:75 TXA
    case 0xC113E0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:76 CMP @VIRTUAL04
    case 0xC113E1: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/text/print_number-jp.asm:77 BNE @UNKNOWN2
    case 0xC113E3: cpu.execute_instruction<0xD0>(0x0000EC, 2); return true;
    // src/text/print_number-jp.asm:78 BRA @UNKNOWN5
    case 0xC113E5: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/text/print_number-jp.asm:80 LDX @VIRTUAL02
    case 0xC113E7: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/text/print_number-jp.asm:81 LDA __BSS_START__,X
    case 0xC113E9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/text/print_number-jp.asm:82 AND #$00FF
    case 0xC113EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_number-jp.asm:82 AND #$00FF
    // Overlapping static entry reached from 0xC113EC.
    case 0xC113EE: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/text/print_number-jp.asm:83 CLC
    case 0xC113EF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:84 ADC #CHAR::ZERO
    case 0xC113F0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000030, 2); else cpu.execute_instruction<0x69>(0x000030, 3); return true;
    // src/text/print_number-jp.asm:84 ADC #CHAR::ZERO
    // Overlapping static entry reached from 0xC113F0.
    case 0xC113F2: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/text/print_number-jp.asm:85 INC @VIRTUAL02
    case 0xC113F3: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/text/print_number-jp.asm:86 JSR PRINT_LETTER
    case 0xC113F5: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_number-jp.asm:87 LDY @LOCAL02
    case 0xC113F8: cpu.execute_instruction<0xA4>(0x000014, 2); return true;
    // src/text/print_number-jp.asm:88 DEY
    case 0xC113FA: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/text/print_number-jp.asm:89 STY @LOCAL02
    case 0xC113FB: cpu.execute_instruction<0x84>(0x000014, 2); return true;
    // src/text/print_number-jp.asm:91 CPY #0
    case 0xC113FD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000000, 2); else cpu.execute_instruction<0xC0>(0x000000, 3); return true;
    // src/text/print_number-jp.asm:91 CPY #0
    // Overlapping static entry reached from 0xC113FD.
    case 0xC113FF: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/text/print_number-jp.asm:92 BNE @UNKNOWN4
    case 0xC11400: cpu.execute_instruction<0xD0>(0x0000E5, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_number-jp.asm:94 END_C_FUNCTION
    case 0xC11402: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_number-jp.asm:94 END_C_FUNCTION
    case 0xC11403: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/text/print_string-jp.asm (source_named).
bool execute_text_print_string_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/text/print_string-jp.asm:3 BEGIN_C_FUNCTION
    case 0xC114DD: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114DF: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E0: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E1: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC114E2.
    case 0xC114E4: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E5: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/text/print_string-jp.asm:8 END_STACK_VARS
    case 0xC114E6: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/text/print_string-jp.asm:9 TAX
    case 0xC114E7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/text/print_string-jp.asm:10 STX @LOCAL00
    case 0xC114E8: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114EA: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114EC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114EE: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/text/print_string-jp.asm:11 MOVE_INT @PARAM00, @VIRTUAL06
    case 0xC114F0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/text/print_string-jp.asm:12 BRA @UNKNOWN1
    case 0xC114F2: cpu.execute_instruction<0x80>(0x00000B, 2); return true;
    // src/text/print_string-jp.asm:14 DEX
    case 0xC114F4: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // src/text/print_string-jp.asm:15 STX @LOCAL00
    case 0xC114F5: cpu.execute_instruction<0x86>(0x00000E, 2); return true;
    // src/text/print_string-jp.asm:16 AND #$00FF
    case 0xC114F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_string-jp.asm:16 AND #$00FF
    // Overlapping static entry reached from 0xC114F7.
    case 0xC114F9: cpu.execute_instruction<0x00>(0x0000E6, 2); return true;
    // src/text/print_string-jp.asm:17 INC @VIRTUAL06
    case 0xC114FA: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // src/text/print_string-jp.asm:18 JSR PRINT_LETTER
    case 0xC114FC: cpu.execute_instruction<0x20>(0x0011EC, 3); return true;
    // src/text/print_string-jp.asm:20 LDA [@VIRTUAL06]
    case 0xC114FF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/text/print_string-jp.asm:21 AND #$00FF
    case 0xC11501: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/text/print_string-jp.asm:21 AND #$00FF
    // Overlapping static entry reached from 0xC11501.
    case 0xC11503: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/text/print_string-jp.asm:22 BEQ @UNKNOWN2
    case 0xC11504: cpu.execute_instruction<0xF0>(0x000004, 2); return true;
    // src/text/print_string-jp.asm:23 LDX @LOCAL00
    case 0xC11506: cpu.execute_instruction<0xA6>(0x00000E, 2); return true;
    // src/text/print_string-jp.asm:24 BNE @UNKNOWN0
    case 0xC11508: cpu.execute_instruction<0xD0>(0x0000EA, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/text/print_string-jp.asm:26 END_C_FUNCTION
    case 0xC1150A: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/text/print_string-jp.asm:26 END_C_FUNCTION
    case 0xC1150B: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
