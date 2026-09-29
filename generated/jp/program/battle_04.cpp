// Generated from ca65 instruction spans and source ownership. Do not edit.
#include "eb/main_cpu_65816.hpp"
#include <cstdint>

namespace eb::jp {
// Assembly routine source: src/battle/instant_win_handler.asm (source_named).
bool execute_battle_instant_win_handler_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/instant_win_handler.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC260E9: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260EB: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260EC: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260ED: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000E4, 2); else cpu.execute_instruction<0x69>(0x00FFE4, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    // Overlapping static entry reached from 0xC260ED.
    case 0xC260EF: cpu.execute_instruction<0xFF>(0x429C5B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/instant_win_handler.asm:10 END_STACK_VARS
    case 0xC260F0: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    case 0xC260F1: cpu.execute_instruction<0x9C>(0x005142, 3); return true;
    // src/battle/instant_win_handler.asm:20 STZ BATTLE_INITIATIVE
    // Overlapping static entry reached from 0xC260EF.
    case 0xC260F3: cpu.execute_instruction<0x51>(0x0000A9, 2); return true;
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    case 0xC260F4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B7, 2); else cpu.execute_instruction<0xA9>(0x0000B7, 3); return true;
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    // Overlapping static entry reached from 0xC260F3.
    case 0xC260F5: cpu.execute_instruction<0xB7>(0x000000, 2); return true;
    // src/battle/instant_win_handler.asm:21 LDA #MUSIC::SUDDEN_VICTORY
    // Overlapping static entry reached from 0xC260F4.
    case 0xC260F6: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:22 JSL CHANGE_MUSIC
    case 0xC260F7: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/battle/instant_win_handler.asm:23 JSL UNKNOWN_C2E9ED
    case 0xC260FB: cpu.execute_instruction<0x22>(0xC2E906, 4); return true;
    // src/battle/instant_win_handler.asm:24 LDX #0
    case 0xC260FF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:24 LDX #0
    // Overlapping static entry reached from 0xC260FF.
    case 0xC26101: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_handler.asm:25 STX @LOCAL04
    case 0xC26102: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:26 BRA @UNKNOWN1
    case 0xC26104: cpu.execute_instruction<0x80>(0x000017, 2); return true;
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    case 0xC26106: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0003E0, 3); return true;
    // src/battle/instant_win_handler.asm:28 LDA #$03E0
    // Overlapping static entry reached from 0xC26106.
    case 0xC26108: cpu.execute_instruction<0x03>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    case 0xC26109: cpu.execute_instruction<0x20>(0x0060B5, 3); return true;
    // src/battle/instant_win_handler.asm:29 JSR UNKNOWN_C26189
    // Overlapping static entry reached from 0xC26108.
    case 0xC2610A: cpu.execute_instruction<0xB5>(0x000060, 2); return true;
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    case 0xC2610C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/instant_win_handler.asm:30 LDA #$001F
    // Overlapping static entry reached from 0xC2610C.
    case 0xC2610E: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:31 JSR UNKNOWN_C26189
    case 0xC2610F: cpu.execute_instruction<0x20>(0x0060B5, 3); return true;
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    case 0xC26112: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x007C00, 3); return true;
    // src/battle/instant_win_handler.asm:32 LDA #$7C00
    // Overlapping static entry reached from 0xC26112.
    case 0xC26114: cpu.execute_instruction<0x7C>(0x00B520, 3); return true;
    // src/battle/instant_win_handler.asm:33 JSR UNKNOWN_C26189
    case 0xC26115: cpu.execute_instruction<0x20>(0x0060B5, 3); return true;
    // src/battle/instant_win_handler.asm:34 LDX @LOCAL04
    case 0xC26118: cpu.execute_instruction<0xA6>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:35 INX
    case 0xC2611A: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:36 STX @LOCAL04
    case 0xC2611B: cpu.execute_instruction<0x86>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:38 CPX #2
    case 0xC2611D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:38 CPX #2
    // Overlapping static entry reached from 0xC2611D.
    case 0xC2611F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:39 BCC @UNKNOWN0
    case 0xC26120: cpu.execute_instruction<0x90>(0x0000E4, 2); return true;
    // src/battle/instant_win_handler.asm:40 LDA #0
    case 0xC26122: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:40 LDA #0
    // Overlapping static entry reached from 0xC26122.
    case 0xC26124: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:41 JSR UNKNOWN_C26189
    case 0xC26125: cpu.execute_instruction<0x20>(0x0060B5, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26128: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC26128.
    case 0xC2612A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC2612B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC2612D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    // Overlapping static entry reached from 0xC2612D.
    case 0xC2612F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:42 LOADPTR BUFFER, @LOCAL00
    case 0xC26130: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26132: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC26132.
    case 0xC26134: cpu.execute_instruction<0x20>(0x001285, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26135: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC26137: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    // Overlapping static entry reached from 0xC26137.
    case 0xC26139: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:43 LOADPTR BUFFER + $2000, @LOCAL01
    case 0xC2613A: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    case 0xC2613C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/battle/instant_win_handler.asm:44 LDA #$0200
    // Overlapping static entry reached from 0xC2613C.
    case 0xC2613E: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:45 JSL MEMCPY24
    case 0xC2613F: cpu.execute_instruction<0x22>(0xC08EDE, 4); return true;
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    case 0xC26143: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000FF, 2); else cpu.execute_instruction<0xA2>(0x00FFFF, 3); return true;
    // src/battle/instant_win_handler.asm:46 LDX #$FFFF
    // Overlapping static entry reached from 0xC26143.
    case 0xC26145: cpu.execute_instruction<0xFF>(0x0006A9, 4); return true;
    // src/battle/instant_win_handler.asm:47 LDA #6
    case 0xC26146: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000006, 2); else cpu.execute_instruction<0xA9>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:47 LDA #6
    // Overlapping static entry reached from 0xC26146.
    case 0xC26148: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:48 JSL UNKNOWN_C496E7
    case 0xC26149: cpu.execute_instruction<0x22>(0xC46D31, 4); return true;
    // src/battle/instant_win_handler.asm:49 LDX #0
    case 0xC2614D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:49 LDX #0
    // Overlapping static entry reached from 0xC2614D.
    case 0xC2614F: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/instant_win_handler.asm:50 STX @LOCAL03
    case 0xC26150: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:51 BRA @UNKNOWN3
    case 0xC26152: cpu.execute_instruction<0x80>(0x00000D, 2); return true;
    // src/battle/instant_win_handler.asm:53 JSL UPDATE_MAP_PALETTE_ANIMATION
    case 0xC26154: cpu.execute_instruction<0x22>(0xC4262B, 4); return true;
    // src/battle/instant_win_handler.asm:54 JSL WAIT_UNTIL_NEXT_FRAME
    case 0xC26158: cpu.execute_instruction<0x22>(0xC0874C, 4); return true;
    // src/battle/instant_win_handler.asm:55 LDX @LOCAL03
    case 0xC2615C: cpu.execute_instruction<0xA6>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:56 INX
    case 0xC2615E: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:57 STX @LOCAL03
    case 0xC2615F: cpu.execute_instruction<0x86>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:59 CPX #6
    case 0xC26161: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000006, 2); else cpu.execute_instruction<0xE0>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:59 CPX #6
    // Overlapping static entry reached from 0xC26161.
    case 0xC26163: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:60 BCC @UNKNOWN2
    case 0xC26164: cpu.execute_instruction<0x90>(0x0000EE, 2); return true;
    // src/battle/instant_win_handler.asm:61 JSL UNKNOWN_C49740
    case 0xC26166: cpu.execute_instruction<0x22>(0xC46D8A, 4); return true;
    // src/battle/instant_win_handler.asm:62 JSL UNKNOWN_C0943C
    case 0xC2616A: cpu.execute_instruction<0x22>(0xC0941B, 4); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC2616E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000E, 2); else cpu.execute_instruction<0xA9>(0x00000E, 3); return true;
    // include/macros.asm:740 LDA arg
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    // Overlapping static entry reached from 0xC2616E.
    case 0xC26170: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // include/macros.asm:741 JSL REDIRECT_CREATE_WINDOW
    // Macro caller: src/battle/instant_win_handler.asm:63 CREATE_WINDOW_FAR #WINDOW::TEXT_BATTLE
    case 0xC26171: cpu.execute_instruction<0x22>(0xC1DB24, 4); return true;
    // src/battle/instant_win_handler.asm:64 STZ BATTLE_MONEY_SCRATCH
    case 0xC26175: cpu.execute_instruction<0x9C>(0x00AB7A, 3); return true;
    // src/battle/instant_win_handler.asm:65 LDA #0
    case 0xC26178: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:65 LDA #0
    // Overlapping static entry reached from 0xC26178.
    case 0xC2617A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:66 STA @LOCAL03
    case 0xC2617B: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:67 BRA @UNKNOWN5
    case 0xC2617D: cpu.execute_instruction<0x80>(0x000021, 2); return true;
    // src/battle/instant_win_handler.asm:69 ASL
    case 0xC2617F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:70 TAX
    case 0xC26180: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:71 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26181: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    case 0xC26184: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_handler.asm:72 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26184.
    case 0xC26186: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:73 JSL MULT168
    case 0xC26187: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_handler.asm:74 CLC
    case 0xC2618B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    case 0xC2618C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000018, 2); else cpu.execute_instruction<0x69>(0x000018, 3); return true;
    // src/battle/instant_win_handler.asm:75 ADC #enemy_data::money
    // Overlapping static entry reached from 0xC2618C.
    case 0xC2618E: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_handler.asm:76 TAX
    case 0xC2618F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:77 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC26190: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/instant_win_handler.asm:78 CLC
    case 0xC26194: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:79 ADC BATTLE_MONEY_SCRATCH
    case 0xC26195: cpu.execute_instruction<0x6D>(0x00AB7A, 3); return true;
    // src/battle/instant_win_handler.asm:80 STA BATTLE_MONEY_SCRATCH
    case 0xC26198: cpu.execute_instruction<0x8D>(0x00AB7A, 3); return true;
    // src/battle/instant_win_handler.asm:81 LDA @LOCAL03
    case 0xC2619B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:82 INC
    case 0xC2619D: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:83 STA @LOCAL03
    case 0xC2619E: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:85 CMP ENEMIES_IN_BATTLE
    case 0xC261A0: cpu.execute_instruction<0xCD>(0x00A18C, 3); return true;
    // src/battle/instant_win_handler.asm:86 BCC @UNKNOWN4
    case 0xC261A3: cpu.execute_instruction<0x90>(0x0000DA, 2); return true;
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    case 0xC261A5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00006A, 2); else cpu.execute_instruction<0xA0>(0x009B6A, 3); return true;
    // src/battle/instant_win_handler.asm:87 LDY #.LOWORD(GAME_STATE) + game_state::unknownC4
    // Overlapping static entry reached from 0xC261A5.
    case 0xC261A7: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:88 STY @LOCAL02ALT
    case 0xC261A8: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:89 LDA BATTLE_MONEY_SCRATCH
    case 0xC261AA: cpu.execute_instruction<0xAD>(0x00AB7A, 3); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC261AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:90 STORE_INT1632 @VIRTUAL06
    case 0xC261AF: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:91 MOVE_INT @VIRTUAL06, @LOCAL00 ;@LOCAL00 = @VIRTUAL06
    case 0xC261B7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/instant_win_handler.asm:92 JSL DEPOSIT_INTO_ATM
    case 0xC261B9: cpu.execute_instruction<0x22>(0xC226E9, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261BD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261BF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261C1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:93 MOVE_INT @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL0A = @VIRTUAL06
    case 0xC261C3: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:94 LDY @LOCAL02ALT
    case 0xC261C5: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261C7: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261CA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261CC: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:95 MOVE_INT_YPTRSRC 0, @VIRTUAL06 ;@VIRTUAL06 = game_state.unknownC4
    case 0xC261CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:96 CLC
    case 0xC261D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261D8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261DA: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:97 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A ;@VIRTUAL06 += @VIRTUAL0A
    case 0xC261DC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1075 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261DE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:1076 STA dest, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261E0: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // include/macros.asm:1077 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261E3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:1078 STA dest+2, Y
    // Macro caller: src/battle/instant_win_handler.asm:98 MOVE_INT_YPTRDEST @VIRTUAL06, 0 ;game_state.unknownC4 = @VIRTUAL06
    case 0xC261E5: cpu.execute_instruction<0x99>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:99 LDY #0
    case 0xC261E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:99 LDY #0
    // Overlapping static entry reached from 0xC261E8.
    case 0xC261EA: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/instant_win_handler.asm:100 STY @LOCAL03
    case 0xC261EB: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:101 BRA @UNKNOWN7
    case 0xC261ED: cpu.execute_instruction<0x80>(0x00001E, 2); return true;
    // src/battle/instant_win_handler.asm:103 SEP #PROC_FLAGS::ACCUM8
    case 0xC261EF: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    case 0xC261F1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008500, 3); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    case 0xC261F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:104 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC261F1.
    case 0xC261F4: cpu.execute_instruction<0x0E>(0x004EA2, 3); return true;
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    case 0xC261F5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00004E, 2); else cpu.execute_instruction<0xA2>(0x00004E, 3); return true;
    // src/battle/instant_win_handler.asm:105 LDX #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC261F5.
    case 0xC261F7: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/instant_win_handler.asm:106 REP #PROC_FLAGS::ACCUM8
    case 0xC261F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:107 TYA
    case 0xC261FA: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:108 TXY
    case 0xC261FB: cpu.execute_instruction<0x9B>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:109 JSL MULT168
    case 0xC261FC: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_handler.asm:110 CLC
    case 0xC26200: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC26201: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/instant_win_handler.asm:111 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26201.
    case 0xC26203: cpu.execute_instruction<0xA1>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    case 0xC26204: cpu.execute_instruction<0x22>(0xC08EED, 4); return true;
    // src/battle/instant_win_handler.asm:112 JSL MEMSET16
    // Overlapping static entry reached from 0xC26203.
    case 0xC26205: cpu.execute_instruction<0xED>(0x00C08E, 3); return true;
    // src/battle/instant_win_handler.asm:113 LDY @LOCAL03
    case 0xC26208: cpu.execute_instruction<0xA4>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:114 INY
    case 0xC2620A: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:115 STY @LOCAL03
    case 0xC2620B: cpu.execute_instruction<0x84>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    case 0xC2620D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/instant_win_handler.asm:117 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC2620D.
    case 0xC2620F: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:118 BCC @UNKNOWN6
    case 0xC26210: cpu.execute_instruction<0x90>(0x0000DD, 2); return true;
    // src/battle/instant_win_handler.asm:119 LDY #0
    case 0xC26212: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:119 LDY #0
    // Overlapping static entry reached from 0xC26212.
    case 0xC26214: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/instant_win_handler.asm:120 STY @LOCAL02ALT2
    case 0xC26215: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:121 BRA @UNKNOWN11
    case 0xC26217: cpu.execute_instruction<0x80>(0x00002F, 2); return true;
    // src/battle/instant_win_handler.asm:124 TYA
    case 0xC26219: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:125 CLC
    case 0xC2621A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:126 ADC #.LOWORD(GAME_STATE)
    case 0xC2621B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/instant_win_handler.asm:126 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2621B.
    case 0xC2621D: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:127 TAX
    case 0xC2621E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:128 LDA a:game_state::party_members,X
    case 0xC2621F: cpu.execute_instruction<0xBD>(0x000077, 3); return true;
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    case 0xC26222: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:132 AND #$00FF
    // Overlapping static entry reached from 0xC26222.
    case 0xC26224: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:133 STA @LOCAL03
    case 0xC26225: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:134 BEQ @UNKNOWN10
    case 0xC26227: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:135 CMP #4
    case 0xC26229: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/instant_win_handler.asm:135 CMP #4
    // Overlapping static entry reached from 0xC26229.
    case 0xC2622B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:766 BEQ :+
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC2622C: cpu.execute_instruction<0xF0>(0x000002, 2); return true;
    // include/macros.asm:767 BCS dest
    // Macro caller: src/battle/instant_win_handler.asm:136 BGT @UNKNOWN10
    case 0xC2622E: cpu.execute_instruction<0xB0>(0x000013, 2); return true;
    // src/battle/instant_win_handler.asm:137 TYA
    case 0xC26230: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    case 0xC26231: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/instant_win_handler.asm:138 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26231.
    case 0xC26233: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:139 JSL MULT168
    case 0xC26234: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_handler.asm:140 CLC
    case 0xC26238: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC26239: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/instant_win_handler.asm:141 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26239.
    case 0xC2623B: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/instant_win_handler.asm:142 TAX
    case 0xC2623C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:143 LDA @LOCAL03
    case 0xC2623D: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:144 JSL BATTLE_INIT_PLAYER_STATS
    case 0xC2623F: cpu.execute_instruction<0x22>(0xC2B8D9, 4); return true;
    // src/battle/instant_win_handler.asm:146 LDY @LOCAL02ALT2
    case 0xC26243: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:147 INY
    case 0xC26245: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:148 STY @LOCAL02ALT2
    case 0xC26246: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    case 0xC26248: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:150 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC26248.
    case 0xC2624A: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:151 BCC @UNKNOWN8
    case 0xC2624B: cpu.execute_instruction<0x90>(0x0000CC, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC2624D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC2624D.
    case 0xC2624F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26250: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26253: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    // Overlapping static entry reached from 0xC26253.
    case 0xC26255: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:152 MOVE_INT_CONSTANT 0, BATTLE_EXP_SCRATCH
    case 0xC26256: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/instant_win_handler.asm:153 LDA #0
    case 0xC26259: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:153 LDA #0
    // Overlapping static entry reached from 0xC26259.
    case 0xC2625B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:154 STA @LOCAL03
    case 0xC2625C: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:155 BRA @UNKNOWN13
    case 0xC2625E: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26260: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26260.
    case 0xC26262: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26263: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26262.
    case 0xC26264: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26265: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26264.
    case 0xC26266: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26265.
    case 0xC26267: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:157 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26268: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:158 LDA @LOCAL03
    case 0xC2626A: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:159 ASL
    case 0xC2626C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:160 TAX
    case 0xC2626D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:161 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC2626E: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    case 0xC26271: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_handler.asm:162 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26271.
    case 0xC26273: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:163 JSL MULT168
    case 0xC26274: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_handler.asm:164 CLC
    case 0xC26278: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    case 0xC26279: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000014, 2); else cpu.execute_instruction<0x69>(0x000014, 3); return true;
    // src/battle/instant_win_handler.asm:165 ADC #enemy_data::exp
    // Overlapping static entry reached from 0xC26279.
    case 0xC2627B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:166 CLC
    case 0xC2627C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:167 ADC @VIRTUAL06
    case 0xC2627D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:168 STA @VIRTUAL06
    case 0xC2627F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26281: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26281.
    case 0xC26283: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26284: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26286: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26287: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26289: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/instant_win_handler.asm:169 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2628B: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2628D: cpu.execute_instruction<0xAD>(0x00AB76, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26290: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26292: cpu.execute_instruction<0xAD>(0x00AB78, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:170 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26295: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:171 CLC
    case 0xC26297: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26298: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2629A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2629C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC2629E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262A0: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:172 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262A2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262A4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262A6: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262A9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:173 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262AB: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/instant_win_handler.asm:174 LDA @LOCAL03
    case 0xC262AE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:175 INC
    case 0xC262B0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:176 STA @LOCAL03
    case 0xC262B1: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:178 CMP ENEMIES_IN_BATTLE
    case 0xC262B3: cpu.execute_instruction<0xCD>(0x00A18C, 3); return true;
    // src/battle/instant_win_handler.asm:179 BCC @UNKNOWN12
    case 0xC262B6: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/battle/instant_win_handler.asm:180 LDA #0
    case 0xC262B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:180 LDA #0
    // Overlapping static entry reached from 0xC262B8.
    case 0xC262BA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:181 JSL COUNT_CHARS
    case 0xC262BB: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/instant_win_handler.asm:182 DEC
    case 0xC262BF: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC262C0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:183 STORE_INT1632 @VIRTUAL0A
    case 0xC262C2: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262C4: cpu.execute_instruction<0xAD>(0x00AB76, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262C7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262C9: cpu.execute_instruction<0xAD>(0x00AB78, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:184 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC262CC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:185 CLC
    case 0xC262CE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D7: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:186 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC262D9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262DB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262DD: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262E0: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:187 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262E2: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/instant_win_handler.asm:188 LDA #0
    case 0xC262E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:188 LDA #0
    // Overlapping static entry reached from 0xC262E5.
    case 0xC262E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:189 JSL COUNT_CHARS
    case 0xC262E8: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC262EC: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/instant_win_handler.asm:190 STORE_INT1632 @VIRTUAL0A
    case 0xC262EE: cpu.execute_instruction<0x64>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:191 JSL DIVISION32
    case 0xC262F0: cpu.execute_instruction<0x22>(0xC090E1, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262F4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262F6: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:192 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC262FB: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC262FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000098, 2); else cpu.execute_instruction<0xA9>(0x004798, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC262FE.
    case 0xC26300: cpu.execute_instruction<0x47>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC26301: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC26300.
    case 0xC26302: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC26303: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    // Overlapping static entry reached from 0xC26303.
    case 0xC26305: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:193 LOADPTR MSG_BTL_PLAYER_WIN_FORCE, @LOCAL00
    case 0xC26306: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC26308: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2630A: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2630C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:194 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2630E: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/instant_win_handler.asm:195 JSL DISPLAY_TEXT_WAIT
    case 0xC26310: cpu.execute_instruction<0x22>(0xC1DA49, 4); return true;
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    case 0xC26314: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000AE, 2); else cpu.execute_instruction<0xA0>(0x00A1AE, 3); return true;
    // src/battle/instant_win_handler.asm:196 LDY #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC26314.
    case 0xC26316: cpu.execute_instruction<0xA1>(0x000084, 2); return true;
    // src/battle/instant_win_handler.asm:197 STY @LOCAL04ALT
    case 0xC26317: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:197 STY @LOCAL04ALT
    // Overlapping static entry reached from 0xC26316.
    case 0xC26318: cpu.execute_instruction<0x16>(0x0000A9, 2); return true;
    // src/battle/instant_win_handler.asm:198 LDA #0
    case 0xC26319: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC26318.
    case 0xC2631A: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/instant_win_handler.asm:198 LDA #0
    // Overlapping static entry reached from 0xC26319.
    case 0xC2631B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/instant_win_handler.asm:199 STA @VIRTUAL02
    case 0xC2631C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/instant_win_handler.asm:200 BRA @UNKNOWN16
    case 0xC2631E: cpu.execute_instruction<0x80>(0x000051, 2); return true;
    // src/battle/instant_win_handler.asm:202 LDA a:battler::consciousness,Y
    case 0xC26320: cpu.execute_instruction<0xB9>(0x00000C, 3); return true;
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    case 0xC26323: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:203 AND #$00FF
    // Overlapping static entry reached from 0xC26323.
    case 0xC26325: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:204 BEQ @UNKNOWN15
    case 0xC26326: cpu.execute_instruction<0xF0>(0x00003D, 2); return true;
    // src/battle/instant_win_handler.asm:205 LDA a:battler::ally_or_enemy,Y
    case 0xC26328: cpu.execute_instruction<0xB9>(0x00000E, 3); return true;
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    case 0xC2632B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:206 AND #$00FF
    // Overlapping static entry reached from 0xC2632B.
    case 0xC2632D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_handler.asm:207 BNE @UNKNOWN15
    case 0xC2632E: cpu.execute_instruction<0xD0>(0x000035, 2); return true;
    // src/battle/instant_win_handler.asm:208 LDA a:battler::npc_id,Y
    case 0xC26330: cpu.execute_instruction<0xB9>(0x00000F, 3); return true;
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    case 0xC26333: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:209 AND #$00FF
    // Overlapping static entry reached from 0xC26333.
    case 0xC26335: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_handler.asm:210 BNE @UNKNOWN15
    case 0xC26336: cpu.execute_instruction<0xD0>(0x00002D, 2); return true;
    // src/battle/instant_win_handler.asm:211 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,Y
    case 0xC26338: cpu.execute_instruction<0xB9>(0x00001D, 3); return true;
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    case 0xC2633B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:212 AND #$00FF
    // Overlapping static entry reached from 0xC2633B.
    case 0xC2633D: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/instant_win_handler.asm:213 TAX
    case 0xC2633E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    case 0xC2633F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000001, 2); else cpu.execute_instruction<0xE0>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:214 CPX #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC2633F.
    case 0xC26341: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:215 BEQ @UNKNOWN15
    case 0xC26342: cpu.execute_instruction<0xF0>(0x000021, 2); return true;
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    case 0xC26344: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000002, 2); else cpu.execute_instruction<0xE0>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:216 CPX #STATUS_0::DIAMONDIZED
    // Overlapping static entry reached from 0xC26344.
    case 0xC26346: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:217 BEQ @UNKNOWN15
    case 0xC26347: cpu.execute_instruction<0xF0>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26349: cpu.execute_instruction<0xAD>(0x00AB76, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2634C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC2634E: cpu.execute_instruction<0xAD>(0x00AB78, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:218 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC26351: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26353: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26355: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26357: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/instant_win_handler.asm:219 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC26359: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/instant_win_handler.asm:220 LDX #1
    case 0xC2635B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:220 LDX #1
    // Overlapping static entry reached from 0xC2635B.
    case 0xC2635D: cpu.execute_instruction<0x00>(0x0000B9, 2); return true;
    // src/battle/instant_win_handler.asm:221 LDA __BSS_START__,Y
    case 0xC2635E: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/instant_win_handler.asm:222 JSL GAIN_EXP
    case 0xC26361: cpu.execute_instruction<0x22>(0xC1D7E4, 4); return true;
    // src/battle/instant_win_handler.asm:224 LDY @LOCAL04ALT
    case 0xC26365: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:225 TYA
    case 0xC26367: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:226 CLC
    case 0xC26368: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    case 0xC26369: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/instant_win_handler.asm:227 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC26369.
    case 0xC2636B: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/instant_win_handler.asm:228 TAY
    case 0xC2636C: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:229 STY @LOCAL04ALT
    case 0xC2636D: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/instant_win_handler.asm:230 INC @VIRTUAL02
    case 0xC2636F: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/instant_win_handler.asm:232 LDA @VIRTUAL02
    case 0xC26371: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    case 0xC26373: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000020, 2); else cpu.execute_instruction<0xC9>(0x000020, 3); return true;
    // src/battle/instant_win_handler.asm:233 CMP #BATTLER_COUNT
    // Overlapping static entry reached from 0xC26373.
    case 0xC26375: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/instant_win_handler.asm:234 BCC @UNKNOWN14
    case 0xC26376: cpu.execute_instruction<0x90>(0x0000A8, 2); return true;
    // src/battle/instant_win_handler.asm:235 LDA ENEMIES_IN_BATTLE
    case 0xC26378: cpu.execute_instruction<0xAD>(0x00A18C, 3); return true;
    // src/battle/instant_win_handler.asm:236 JSR RAND_LIMIT
    case 0xC2637B: cpu.execute_instruction<0x20>(0x00696C, 3); return true;
    // src/battle/instant_win_handler.asm:237 ASL
    case 0xC2637E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:238 TAX
    case 0xC2637F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:239 LDA ENEMIES_IN_BATTLE_IDS,X
    case 0xC26380: cpu.execute_instruction<0xBD>(0x00A18E, 3); return true;
    // src/battle/instant_win_handler.asm:240 STA @LOCAL02ALT2
    case 0xC26383: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26385: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26385.
    case 0xC26387: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC26388: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26387.
    case 0xC26389: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2638A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC26389.
    case 0xC2638B: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2638A.
    case 0xC2638C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:241 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL06
    case 0xC2638D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/instant_win_handler.asm:242 LDA @LOCAL02ALT2
    case 0xC2638F: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    case 0xC26391: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/instant_win_handler.asm:243 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC26391.
    case 0xC26393: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:244 JSL MULT168
    case 0xC26394: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/instant_win_handler.asm:245 STA @LOCAL03
    case 0xC26398: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:246 CLC
    case 0xC2639A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    case 0xC2639B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000047, 2); else cpu.execute_instruction<0x69>(0x000047, 3); return true;
    // src/battle/instant_win_handler.asm:247 ADC #enemy_data::item_dropped
    // Overlapping static entry reached from 0xC2639B.
    case 0xC2639D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2639E: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC263A0: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC263A2: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/instant_win_handler.asm:248 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC263A4: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:249 CLC
    case 0xC263A6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:250 ADC @VIRTUAL0A
    case 0xC263A7: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/instant_win_handler.asm:251 STA @VIRTUAL0A
    case 0xC263A9: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/instant_win_handler.asm:252 LDA [@VIRTUAL0A]
    case 0xC263AB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    case 0xC263AD: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:253 AND #$00FF
    // Overlapping static entry reached from 0xC263AD.
    case 0xC263AF: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/instant_win_handler.asm:254 STA ITEM_DROPPED
    case 0xC263B0: cpu.execute_instruction<0x8D>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:255 LDA @LOCAL03
    case 0xC263B3: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:256 CLC
    case 0xC263B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    case 0xC263B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000046, 2); else cpu.execute_instruction<0x69>(0x000046, 3); return true;
    // src/battle/instant_win_handler.asm:257 ADC #enemy_data::item_drop_rate
    // Overlapping static entry reached from 0xC263B6.
    case 0xC263B8: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/instant_win_handler.asm:258 CLC
    case 0xC263B9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/instant_win_handler.asm:259 ADC @VIRTUAL06
    case 0xC263BA: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:260 STA @VIRTUAL06
    case 0xC263BC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:261 LDA [@VIRTUAL06]
    case 0xC263BE: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    case 0xC263C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/instant_win_handler.asm:262 AND #$00FF
    // Overlapping static entry reached from 0xC263C0.
    case 0xC263C2: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:263 BEQ @UNKNOWN17
    case 0xC263C3: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:264 CMP #1
    case 0xC263C5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:264 CMP #1
    // Overlapping static entry reached from 0xC263C5.
    case 0xC263C7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:265 BEQ @UNKNOWN18
    case 0xC263C8: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/instant_win_handler.asm:266 CMP #2
    case 0xC263CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/instant_win_handler.asm:266 CMP #2
    // Overlapping static entry reached from 0xC263CA.
    case 0xC263CC: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:267 BEQ @UNKNOWN19
    case 0xC263CD: cpu.execute_instruction<0xF0>(0x000032, 2); return true;
    // src/battle/instant_win_handler.asm:268 CMP #3
    case 0xC263CF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/instant_win_handler.asm:268 CMP #3
    // Overlapping static entry reached from 0xC263CF.
    case 0xC263D1: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:269 BEQ @UNKNOWN20
    case 0xC263D2: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/instant_win_handler.asm:270 CMP #4
    case 0xC263D4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/instant_win_handler.asm:270 CMP #4
    // Overlapping static entry reached from 0xC263D4.
    case 0xC263D6: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:271 BEQ @UNKNOWN21
    case 0xC263D7: cpu.execute_instruction<0xF0>(0x000044, 2); return true;
    // src/battle/instant_win_handler.asm:272 CMP #5
    case 0xC263D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/instant_win_handler.asm:272 CMP #5
    // Overlapping static entry reached from 0xC263D9.
    case 0xC263DB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:273 BEQ @UNKNOWN22
    case 0xC263DC: cpu.execute_instruction<0xF0>(0x00004D, 2); return true;
    // src/battle/instant_win_handler.asm:274 CMP #6
    case 0xC263DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/instant_win_handler.asm:274 CMP #6
    // Overlapping static entry reached from 0xC263DE.
    case 0xC263E0: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:275 BEQ @UNKNOWN23
    case 0xC263E1: cpu.execute_instruction<0xF0>(0x000056, 2); return true;
    // src/battle/instant_win_handler.asm:276 BRA @UNKNOWN24
    case 0xC263E3: cpu.execute_instruction<0x80>(0x000060, 2); return true;
    // src/battle/instant_win_handler.asm:278 JSL RAND
    case 0xC263E5: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    case 0xC263E9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00007F, 2); else cpu.execute_instruction<0x29>(0x00007F, 3); return true;
    // src/battle/instant_win_handler.asm:279 AND #ITEM_RARITY_0
    // Overlapping static entry reached from 0xC263E9.
    case 0xC263EB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:280 BEQ @UNKNOWN24
    case 0xC263EC: cpu.execute_instruction<0xF0>(0x000057, 2); return true;
    // src/battle/instant_win_handler.asm:281 STZ ITEM_DROPPED
    case 0xC263EE: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:282 BRA @UNKNOWN24
    case 0xC263F1: cpu.execute_instruction<0x80>(0x000052, 2); return true;
    // src/battle/instant_win_handler.asm:284 JSL RAND
    case 0xC263F3: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    case 0xC263F7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00003F, 2); else cpu.execute_instruction<0x29>(0x00003F, 3); return true;
    // src/battle/instant_win_handler.asm:285 AND #ITEM_RARITY_1
    // Overlapping static entry reached from 0xC263F7.
    case 0xC263F9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:286 BEQ @UNKNOWN24
    case 0xC263FA: cpu.execute_instruction<0xF0>(0x000049, 2); return true;
    // src/battle/instant_win_handler.asm:287 STZ ITEM_DROPPED
    case 0xC263FC: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:288 BRA @UNKNOWN24
    case 0xC263FF: cpu.execute_instruction<0x80>(0x000044, 2); return true;
    // src/battle/instant_win_handler.asm:290 JSL RAND
    case 0xC26401: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    case 0xC26405: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00001F, 2); else cpu.execute_instruction<0x29>(0x00001F, 3); return true;
    // src/battle/instant_win_handler.asm:291 AND #ITEM_RARITY_2
    // Overlapping static entry reached from 0xC26405.
    case 0xC26407: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:292 BEQ @UNKNOWN24
    case 0xC26408: cpu.execute_instruction<0xF0>(0x00003B, 2); return true;
    // src/battle/instant_win_handler.asm:293 STZ ITEM_DROPPED
    case 0xC2640A: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:294 BRA @UNKNOWN24
    case 0xC2640D: cpu.execute_instruction<0x80>(0x000036, 2); return true;
    // src/battle/instant_win_handler.asm:296 JSL RAND
    case 0xC2640F: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    case 0xC26413: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/instant_win_handler.asm:297 AND #ITEM_RARITY_3
    // Overlapping static entry reached from 0xC26413.
    case 0xC26415: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:298 BEQ @UNKNOWN24
    case 0xC26416: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/instant_win_handler.asm:299 STZ ITEM_DROPPED
    case 0xC26418: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:300 BRA @UNKNOWN24
    case 0xC2641B: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/instant_win_handler.asm:302 JSL RAND
    case 0xC2641D: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    case 0xC26421: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000007, 2); else cpu.execute_instruction<0x29>(0x000007, 3); return true;
    // src/battle/instant_win_handler.asm:303 AND #ITEM_RARITY_4
    // Overlapping static entry reached from 0xC26421.
    case 0xC26423: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:304 BEQ @UNKNOWN24
    case 0xC26424: cpu.execute_instruction<0xF0>(0x00001F, 2); return true;
    // src/battle/instant_win_handler.asm:305 STZ ITEM_DROPPED
    case 0xC26426: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:306 BRA @UNKNOWN24
    case 0xC26429: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/battle/instant_win_handler.asm:308 JSL RAND
    case 0xC2642B: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    case 0xC2642F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/instant_win_handler.asm:309 AND #ITEM_RARITY_5
    // Overlapping static entry reached from 0xC2642F.
    case 0xC26431: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:310 BEQ @UNKNOWN24
    case 0xC26432: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/instant_win_handler.asm:311 STZ ITEM_DROPPED
    case 0xC26434: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:312 BRA @UNKNOWN24
    case 0xC26437: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/instant_win_handler.asm:314 JSL RAND
    case 0xC26439: cpu.execute_instruction<0x22>(0xC08E8B, 4); return true;
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    case 0xC2643D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000001, 2); else cpu.execute_instruction<0x29>(0x000001, 3); return true;
    // src/battle/instant_win_handler.asm:315 AND #ITEM_RARITY_6
    // Overlapping static entry reached from 0xC2643D.
    case 0xC2643F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/instant_win_handler.asm:316 BEQ @UNKNOWN24
    case 0xC26440: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/instant_win_handler.asm:317 STZ ITEM_DROPPED
    case 0xC26442: cpu.execute_instruction<0x9C>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:319 LDA ITEM_DROPPED
    case 0xC26445: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:320 BEQ @UNKNOWN25
    case 0xC26448: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/instant_win_handler.asm:321 SEP #PROC_FLAGS::ACCUM8
    case 0xC2644A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/instant_win_handler.asm:322 LDA ITEM_DROPPED
    case 0xC2644C: cpu.execute_instruction<0xAD>(0x00ABE5, 3); return true;
    // src/battle/instant_win_handler.asm:323 JSL REDIRECT_C1ACF8
    case 0xC2644F: cpu.execute_instruction<0x22>(0xC1DB59, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26453: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x004917, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26453.
    case 0xC26455: if (cpu.status_register & 0x20) cpu.execute_instruction<0x49>(0x000085, 2); else cpu.execute_instruction<0x49>(0x000E85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26456: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26455.
    case 0xC26457: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC26458: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    // Overlapping static entry reached from 0xC26458.
    case 0xC2645A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2645B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/instant_win_handler.asm:325 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_PRESENT
    case 0xC2645D: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/instant_win_handler.asm:327 JSL UNKNOWN_C1DD5F
    case 0xC26461: cpu.execute_instruction<0x22>(0xC1DB3C, 4); return true;
    // src/battle/instant_win_handler.asm:328 LDA GAME_STATE+game_state::walking_style
    case 0xC26465: cpu.execute_instruction<0xAD>(0x009B34, 3); return true;
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    case 0xC26468: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/instant_win_handler.asm:329 CMP #WALKING_STYLE::BICYCLE
    // Overlapping static entry reached from 0xC26468.
    case 0xC2646A: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/instant_win_handler.asm:330 BNE @UNKNOWN26
    case 0xC2646B: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    case 0xC2646D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000052, 2); else cpu.execute_instruction<0xA9>(0x000052, 3); return true;
    // src/battle/instant_win_handler.asm:331 LDA #MUSIC::BICYCLE
    // Overlapping static entry reached from 0xC2646D.
    case 0xC2646F: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/instant_win_handler.asm:332 JSL CHANGE_MUSIC
    case 0xC26470: cpu.execute_instruction<0x22>(0xC4CF5C, 4); return true;
    // src/battle/instant_win_handler.asm:333 BRA @UNKNOWN27
    case 0xC26474: cpu.execute_instruction<0x80>(0x000004, 2); return true;
    // src/battle/instant_win_handler.asm:335 JSL UNKNOWN_C06A07
    case 0xC26476: cpu.execute_instruction<0x22>(0xC06C35, 4); return true;
    // src/battle/instant_win_handler.asm:337 JSL UNKNOWN_C09451
    case 0xC2647A: cpu.execute_instruction<0x22>(0xC09430, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2647E: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/instant_win_handler.asm:338 END_C_FUNCTION
    case 0xC2647F: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/is_char_targetted.asm (source_named).
bool execute_battle_is_char_targetted_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/is_char_targetted.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC26F68: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC26F6A: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC26F6B: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC26F6C: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC26F6D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC26F6D.
    case 0xC26F6F: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC26F70: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/is_char_targetted.asm:8 END_STACK_VARS
    case 0xC26F71: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:9 STA @LOCAL00
    case 0xC26F72: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/is_char_targetted.asm:9 STA @LOCAL00
    // Overlapping static entry reached from 0xC26F6F.
    case 0xC26F73: cpu.execute_instruction<0x0E>(0x0000A2, 3); return true;
    // src/battle/is_char_targetted.asm:10 LDX #0
    case 0xC26F74: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/is_char_targetted.asm:10 LDX #0
    // Overlapping static entry reached from 0xC26F74.
    case 0xC26F76: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F77: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E6, 2); else cpu.execute_instruction<0xA9>(0x0076E6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F77.
    case 0xC26F79: cpu.execute_instruction<0x76>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F7A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F79.
    case 0xC26F7B: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F7C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C4, 2); else cpu.execute_instruction<0xA9>(0x0000C4, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F7B.
    case 0xC26F7D: cpu.execute_instruction<0xC4>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    // Overlapping static entry reached from 0xC26F7C.
    case 0xC26F7E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/is_char_targetted.asm:11 LOADPTR POWERS_OF_TWO_32BIT, @VIRTUAL06
    case 0xC26F7F: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/is_char_targetted.asm:12 LDA @LOCAL00
    case 0xC26F81: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/is_char_targetted.asm:13 ASL
    case 0xC26F83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:14 ASL
    case 0xC26F84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:15 CLC
    case 0xC26F85: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/is_char_targetted.asm:16 ADC @VIRTUAL06
    case 0xC26F86: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/is_char_targetted.asm:17 STA @VIRTUAL06
    case 0xC26F88: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26F8A.
    case 0xC26F8C: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F8D: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F8F: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F90: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F92: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/is_char_targetted.asm:18 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC26F94: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F96: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F99: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F9B: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:19 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC26F9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:968 LDA val1
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:969 AND val2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA2: cpu.execute_instruction<0x25>(0x00000A, 2); return true;
    // include/macros.asm:970 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:971 LDA val1+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:972 AND val2+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26FA8: cpu.execute_instruction<0x25>(0x00000C, 2); return true;
    // include/macros.asm:973 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:20 AND_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC26FAA: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26FAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1061 LDA #.LOWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FAC.
    case 0xC26FAE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1062 STA dest
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26FAF: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26FB1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1063 LDA #.HIWORD(constant)
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    // Overlapping static entry reached from 0xC26FB1.
    case 0xC26FB3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1064 STA dest+2
    // Macro caller: src/battle/is_char_targetted.asm:21 MOVE_INT_CONSTANT NULL, @VIRTUAL0A
    case 0xC26FB4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:745 LDA src + 2
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FB6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:746 CMP dest + 2
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FB8: cpu.execute_instruction<0xC5>(0x00000C, 2); return true;
    // include/macros.asm:747 BNE :+
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FBA: cpu.execute_instruction<0xD0>(0x000004, 2); return true;
    // include/macros.asm:748 LDA src
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FBC: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:749 CMP dest
    // Macro caller: src/battle/is_char_targetted.asm:22 CMP32 @VIRTUAL06, @VIRTUAL0A
    case 0xC26FBE: cpu.execute_instruction<0xC5>(0x00000A, 2); return true;
    // src/battle/is_char_targetted.asm:23 BEQ @UNKNOWN1
    case 0xC26FC0: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // src/battle/is_char_targetted.asm:24 LDX #1
    case 0xC26FC2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/is_char_targetted.asm:24 LDX #1
    // Overlapping static entry reached from 0xC26FC2.
    case 0xC26FC4: cpu.execute_instruction<0x00>(0x00008A, 2); return true;
    // src/battle/is_char_targetted.asm:26 TXA
    case 0xC26FC5: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/is_char_targetted.asm:27 END_C_FUNCTION
    case 0xC26FC6: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/is_char_targetted.asm:27 END_C_FUNCTION
    case 0xC26FC7: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/ko_target.asm (source_named).
bool execute_battle_ko_target_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/ko_target.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC27491: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27493: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27494: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27495: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27496: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000DC, 2); else cpu.execute_instruction<0x69>(0x00FFDC, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    // Overlapping static entry reached from 0xC27496.
    case 0xC27498: cpu.execute_instruction<0xFF>(0x85685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC27499: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/ko_target.asm:19 END_STACK_VARS
    case 0xC2749A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    case 0xC2749B: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/ko_target.asm:20 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC27498.
    case 0xC2749C: cpu.execute_instruction<0x02>(0x00009C, 2); return true;
    // src/battle/ko_target.asm:21 STZ SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2749D: cpu.execute_instruction<0x9C>(0x00AC67, 3); return true;
    // src/battle/ko_target.asm:22 LDX @VIRTUAL02
    case 0xC274A0: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:23 LDA a:battler::ally_or_enemy,X
    case 0xC274A2: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/ko_target.asm:24 AND #$00FF
    case 0xC274A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:24 AND #$00FF
    // Overlapping static entry reached from 0xC274A5.
    case 0xC274A7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC274A8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:25 BNEL @UNKNOWN22
    case 0xC274AA: cpu.execute_instruction<0x4C>(0x007717, 3); return true;
    // src/battle/ko_target.asm:26 LDX @VIRTUAL02
    case 0xC274AD: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:27 LDA a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC274AF: cpu.execute_instruction<0xBD>(0x00001E, 3); return true;
    // src/battle/ko_target.asm:28 AND #$00FF
    case 0xC274B2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:28 AND #$00FF
    // Overlapping static entry reached from 0xC274B2.
    case 0xC274B4: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    case 0xC274B5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:29 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC274B5.
    case 0xC274B7: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC274B8: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:30 BNEL @UNKNOWN10
    case 0xC274BA: cpu.execute_instruction<0x4C>(0x00757A, 3); return true;
    // src/battle/ko_target.asm:31 LDY #0
    case 0xC274BD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:31 LDY #0
    // Overlapping static entry reached from 0xC274BD.
    case 0xC274BF: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/ko_target.asm:32 STY @LOCAL07
    case 0xC274C0: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:33 JMP @UNKNOWN9
    case 0xC274C2: cpu.execute_instruction<0x4C>(0x007570, 3); return true;
    // src/battle/ko_target.asm:35 TYA
    case 0xC274C5: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    case 0xC274C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:36 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC274C6.
    case 0xC274C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:37 JSL MULT168
    case 0xC274C9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:38 STA @LOCAL06
    case 0xC274CD: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/ko_target.asm:39 TAX
    case 0xC274CF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:40 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC274D0: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/ko_target.asm:41 AND #$00FF
    case 0xC274D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:41 AND #$00FF
    // Overlapping static entry reached from 0xC274D3.
    case 0xC274D5: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC274D6: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:42 BEQL @UNKNOWN8
    case 0xC274D8: cpu.execute_instruction<0x4C>(0x00756B, 3); return true;
    // src/battle/ko_target.asm:43 LDA @LOCAL06
    case 0xC274DB: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/ko_target.asm:44 TAX
    case 0xC274DD: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:45 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC274DE: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/ko_target.asm:46 AND #$00FF
    case 0xC274E1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:46 AND #$00FF
    // Overlapping static entry reached from 0xC274E1.
    case 0xC274E3: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC274E4: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:47 BNEL @UNKNOWN8
    case 0xC274E6: cpu.execute_instruction<0x4C>(0x00756B, 3); return true;
    // src/battle/ko_target.asm:48 LDA @LOCAL06
    case 0xC274E9: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/ko_target.asm:49 CLC
    case 0xC274EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC274EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/battle/ko_target.asm:50 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC274EC.
    case 0xC274EE: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:51 TAX
    case 0xC274EF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:52 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC274F0: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/ko_target.asm:53 AND #$00FF
    case 0xC274F3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:53 AND #$00FF
    // Overlapping static entry reached from 0xC274F3.
    case 0xC274F5: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    case 0xC274F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:54 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC274F6.
    case 0xC274F8: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:55 BNE @UNKNOWN8
    case 0xC274F9: cpu.execute_instruction<0xD0>(0x000070, 2); return true;
    // src/battle/ko_target.asm:56 LDA @LOCAL06
    case 0xC274FB: cpu.execute_instruction<0xA5>(0x000020, 2); return true;
    // src/battle/ko_target.asm:57 CLC
    case 0xC274FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    case 0xC274FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AE, 2); else cpu.execute_instruction<0x69>(0x00A1AE, 3); return true;
    // src/battle/ko_target.asm:58 ADC #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC274FE.
    case 0xC27500: cpu.execute_instruction<0xA1>(0x000085, 2); return true;
    // src/battle/ko_target.asm:59 STA @VIRTUAL04
    case 0xC27501: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:59 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC27500.
    case 0xC27502: cpu.execute_instruction<0x04>(0x0000A5, 2); return true;
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    case 0xC27503: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:60 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC27502.
    case 0xC27504: cpu.execute_instruction<0x02>(0x0000C5, 2); return true;
    // src/battle/ko_target.asm:61 CMP @VIRTUAL04
    case 0xC27505: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:62 BNE @UNKNOWN10
    case 0xC27507: cpu.execute_instruction<0xD0>(0x000071, 2); return true;
    // src/battle/ko_target.asm:63 LDA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27509: cpu.execute_instruction<0xAD>(0x00A391, 3); return true;
    // src/battle/ko_target.asm:64 AND #$00FF
    case 0xC2750C: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:64 AND #$00FF
    // Overlapping static entry reached from 0xC2750C.
    case 0xC2750E: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC2750F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D5, 2); else cpu.execute_instruction<0xC9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:65 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC2750F.
    case 0xC27511: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:66 BNE @UNKNOWN10
    case 0xC27512: cpu.execute_instruction<0xD0>(0x000066, 2); return true;
    // src/battle/ko_target.asm:67 SEP #PROC_FLAGS::ACCUM8
    case 0xC27514: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:68 STZ BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::consciousness
    case 0xC27516: cpu.execute_instruction<0x9C>(0x00A38E, 3); return true;
    // src/battle/ko_target.asm:69 BRA @UNKNOWN7
    case 0xC27519: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/ko_target.asm:71 REP #PROC_FLAGS::ACCUM8
    case 0xC2751B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:72 TYA
    case 0xC2751D: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    case 0xC2751E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:73 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC2751E.
    case 0xC27520: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:74 JSL MULT168
    case 0xC27521: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:75 TAX
    case 0xC27525: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:76 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27526: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/ko_target.asm:77 AND #$00FF
    case 0xC27529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:77 AND #$00FF
    // Overlapping static entry reached from 0xC27529.
    case 0xC2752B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:78 BEQ @UNKNOWN6
    case 0xC2752C: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/ko_target.asm:79 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2752E: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/ko_target.asm:80 AND #$00FF
    case 0xC27531: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:80 AND #$00FF
    // Overlapping static entry reached from 0xC27531.
    case 0xC27533: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:81 BNE @UNKNOWN6
    case 0xC27534: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/battle/ko_target.asm:82 TXA
    case 0xC27536: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:83 CLC
    case 0xC27537: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27538: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/battle/ko_target.asm:84 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27538.
    case 0xC2753A: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:85 TAX
    case 0xC2753B: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:86 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2753C: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/ko_target.asm:87 AND #$00FF
    case 0xC2753F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:87 AND #$00FF
    // Overlapping static entry reached from 0xC2753F.
    case 0xC27541: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    case 0xC27542: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:88 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27542.
    case 0xC27544: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:89 BNE @UNKNOWN6
    case 0xC27545: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27547: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000082, 2); else cpu.execute_instruction<0xA2>(0x00A382, 3); return true;
    // src/battle/ko_target.asm:90 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27547.
    case 0xC27549: cpu.execute_instruction<0xA3>(0x0000A9, 2); return true;
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC2754A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27549.
    case 0xC2754B: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // src/battle/ko_target.asm:91 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC2754A.
    case 0xC2754C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:92 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC2754D: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/ko_target.asm:93 SEP #PROC_FLAGS::ACCUM8
    case 0xC27551: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:94 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27553: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x008DD5, 3); return true;
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27555: cpu.execute_instruction<0x8D>(0x00A391, 3); return true;
    // src/battle/ko_target.asm:95 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27553.
    case 0xC27556: cpu.execute_instruction<0x91>(0x0000A3, 2); return true;
    // src/battle/ko_target.asm:96 LDA #1
    case 0xC27558: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    case 0xC2755A: cpu.execute_instruction<0x8D>(0x00A38F, 3); return true;
    // src/battle/ko_target.asm:97 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+13
    // Overlapping static entry reached from 0xC27558.
    case 0xC2755B: cpu.execute_instruction<0x8F>(0x22A4A3, 4); return true;
    // src/battle/ko_target.asm:99 LDY @LOCAL07
    case 0xC2755D: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:100 INY
    case 0xC2755F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:101 STY @LOCAL07
    case 0xC27560: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:103 LDY @LOCAL07
    case 0xC27562: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:104 CPY #6
    case 0xC27564: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:104 CPY #6
    // Overlapping static entry reached from 0xC27564.
    case 0xC27566: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:105 BCC @UNKNOWN5
    case 0xC27567: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // src/battle/ko_target.asm:106 BRA @UNKNOWN10
    case 0xC27569: cpu.execute_instruction<0x80>(0x00000F, 2); return true;
    // src/battle/ko_target.asm:108 LDY @LOCAL07
    case 0xC2756B: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:109 INY
    case 0xC2756D: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:110 STY @LOCAL07
    case 0xC2756E: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:112 CPY #6
    case 0xC27570: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:112 CPY #6
    // Overlapping static entry reached from 0xC27570.
    case 0xC27572: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27573: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27575: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/ko_target.asm:113 BCCL @UNKNOWN2
    case 0xC27577: cpu.execute_instruction<0x4C>(0x0074C5, 3); return true;
    // src/battle/ko_target.asm:115 SEP #PROC_FLAGS::ACCUM8
    case 0xC2757A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:116 LDA #STATUS_0::UNCONSCIOUS
    case 0xC2757C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    case 0xC2757E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:117 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2757C.
    case 0xC2757F: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:118 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27580: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:119 LDX @VIRTUAL02
    case 0xC27583: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:120 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27585: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/ko_target.asm:121 LDX @VIRTUAL02
    case 0xC27588: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:122 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC2758A: cpu.execute_instruction<0x9E>(0x000022, 3); return true;
    // src/battle/ko_target.asm:123 LDX @VIRTUAL02
    case 0xC2758D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:124 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC2758F: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/ko_target.asm:125 LDX @VIRTUAL02
    case 0xC27592: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:126 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27594: cpu.execute_instruction<0x9E>(0x000020, 3); return true;
    // src/battle/ko_target.asm:127 LDX @VIRTUAL02
    case 0xC27597: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:128 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27599: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:129 LDX @VIRTUAL02
    case 0xC2759C: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:130 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC2759E: cpu.execute_instruction<0x9E>(0x00001E, 3); return true;
    // src/battle/ko_target.asm:131 REP #PROC_FLAGS::ACCUM8
    case 0xC275A1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:132 LDA @VIRTUAL02
    case 0xC275A3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:133 CLC
    case 0xC275A5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    case 0xC275A6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00000F, 2); else cpu.execute_instruction<0x69>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:134 ADC #battler::npc_id
    // Overlapping static entry reached from 0xC275A6.
    case 0xC275A8: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:135 TAX
    case 0xC275A9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:136 STX @LOCAL07
    case 0xC275AA: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/ko_target.asm:137 LDA __BSS_START__,X
    case 0xC275AC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:138 AND #$00FF
    case 0xC275AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:138 AND #$00FF
    // Overlapping static entry reached from 0xC275AF.
    case 0xC275B1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC275B2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:139 BEQL @UNKNOWN21
    case 0xC275B4: cpu.execute_instruction<0x4C>(0x0076D1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275B7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC275B7.
    case 0xC275B9: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275BA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC275B9.
    case 0xC275BB: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC275BC.
    case 0xC275BE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:140 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC275BF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/ko_target.asm:141 LDX @VIRTUAL02
    case 0xC275C1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:142 LDA a:battler::id,X
    case 0xC275C3: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    case 0xC275C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:143 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC275C6.
    case 0xC275C8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:144 JSL MULT168
    case 0xC275C9: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:145 CLC
    case 0xC275CD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    case 0xC275CE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/battle/ko_target.asm:146 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC275CE.
    case 0xC275D0: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:147 CLC
    case 0xC275D1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:148 ADC @VIRTUAL0A
    case 0xC275D2: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:149 STA @VIRTUAL0A
    case 0xC275D4: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC275D6.
    case 0xC275D8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275D9: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275DB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275DC: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275DE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:150 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC275E0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:151 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC275E8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:152 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC275EA: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/ko_target.asm:153 LDX @VIRTUAL02
    case 0xC275EE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC275F0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:155 STZ a:battler::consciousness,X
    case 0xC275F2: cpu.execute_instruction<0x9E>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:156 LDX @LOCAL07
    case 0xC275F5: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/ko_target.asm:157 REP #PROC_FLAGS::ACCUM8
    case 0xC275F7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:158 LDA __BSS_START__,X ;battler::npc_id
    case 0xC275F9: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:159 AND #$00FF
    case 0xC275FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:159 AND #$00FF
    // Overlapping static entry reached from 0xC275FC.
    case 0xC275FE: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:160 TAX
    case 0xC275FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    case 0xC27600: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/ko_target.asm:161 CPX #PARTY_MEMBER::TEDDY_BEAR
    // Overlapping static entry reached from 0xC27600.
    case 0xC27602: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:162 BEQ @UNKNOWN12
    case 0xC27603: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    case 0xC27605: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000011, 2); else cpu.execute_instruction<0xE0>(0x000011, 3); return true;
    // src/battle/ko_target.asm:163 CPX #PARTY_MEMBER::PLUSH_TEDDY_BEAR
    // Overlapping static entry reached from 0xC27605.
    case 0xC27607: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:164 BNE @UNKNOWN14
    case 0xC27608: cpu.execute_instruction<0xD0>(0x000078, 2); return true;
    // src/battle/ko_target.asm:166 LDA @VIRTUAL02
    case 0xC2760A: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:167 CLC
    case 0xC2760C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:168 ADC #battler::row
    case 0xC2760D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/ko_target.asm:168 ADC #battler::row
    // Overlapping static entry reached from 0xC2760D.
    case 0xC2760F: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:169 TAX
    case 0xC27610: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:170 STX @LOCAL05
    case 0xC27611: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:171 LDA __BSS_START__,X
    case 0xC27613: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:172 AND #$00FF
    case 0xC27616: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:172 AND #$00FF
    // Overlapping static entry reached from 0xC27616.
    case 0xC27618: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:174 CLC
    case 0xC27619: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:175 ADC #.LOWORD(GAME_STATE)
    case 0xC2761A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/ko_target.asm:175 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2761A.
    case 0xC2761C: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:176 TAX
    case 0xC2761D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:177 LDA a:game_state::party_npc_1,X
    case 0xC2761E: cpu.execute_instruction<0xBD>(0x000042, 3); return true;
    // src/battle/ko_target.asm:182 AND #$00FF
    case 0xC27621: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:182 AND #$00FF
    // Overlapping static entry reached from 0xC27621.
    case 0xC27623: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC27624: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:183 BEQL @UNKNOWN62
    case 0xC27626: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:184 SEP #PROC_FLAGS::ACCUM8
    case 0xC27629: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:185 LDA #1
    case 0xC2762B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    case 0xC2762D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:186 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC2762B.
    case 0xC2762E: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:187 STA a:battler::consciousness,X
    case 0xC2762F: cpu.execute_instruction<0x9D>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:188 LDX @VIRTUAL02
    case 0xC27632: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:189 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27634: cpu.execute_instruction<0x9E>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:190 LDX @LOCAL05
    case 0xC27637: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:191 REP #PROC_FLAGS::ACCUM8
    case 0xC27639: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:192 LDA __BSS_START__,X
    case 0xC2763B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:193 AND #$00FF
    case 0xC2763E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:193 AND #$00FF
    // Overlapping static entry reached from 0xC2763E.
    case 0xC27640: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:194 ASL
    case 0xC27641: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:196 CLC
    case 0xC27642: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:197 ADC #.LOWORD(GAME_STATE)
    case 0xC27643: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/ko_target.asm:197 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC27643.
    case 0xC27645: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:198 TAX
    case 0xC27646: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:199 LDA a:game_state::party_npc_1_hp,X
    case 0xC27647: cpu.execute_instruction<0xBD>(0x000044, 3); return true;
    // src/battle/ko_target.asm:204 LDX @VIRTUAL02
    case 0xC2764A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:205 STA a:battler::hp_target,X
    case 0xC2764C: cpu.execute_instruction<0x9D>(0x000013, 3); return true;
    // src/battle/ko_target.asm:206 LDX @VIRTUAL02
    case 0xC2764F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:207 STA a:battler::hp,X
    case 0xC27651: cpu.execute_instruction<0x9D>(0x000011, 3); return true;
    // src/battle/ko_target.asm:208 LDX @LOCAL05
    case 0xC27654: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:209 LDA __BSS_START__,X
    case 0xC27656: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:210 AND #$00FF
    case 0xC27659: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:210 AND #$00FF
    // Overlapping static entry reached from 0xC27659.
    case 0xC2765B: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:212 CLC
    case 0xC2765C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:213 ADC #.LOWORD(GAME_STATE)
    case 0xC2765D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000A9, 2); else cpu.execute_instruction<0x69>(0x009AA9, 3); return true;
    // src/battle/ko_target.asm:213 ADC #.LOWORD(GAME_STATE)
    // Overlapping static entry reached from 0xC2765D.
    case 0xC2765F: cpu.execute_instruction<0x9A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:214 TAX
    case 0xC27660: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:215 SEP #PROC_FLAGS::ACCUM8
    case 0xC27661: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:216 LDA a:game_state::party_npc_1,X
    case 0xC27663: cpu.execute_instruction<0xBD>(0x000042, 3); return true;
    // src/battle/ko_target.asm:222 LDX @VIRTUAL02
    case 0xC27666: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:223 STA a:battler::npc_id,X
    case 0xC27668: cpu.execute_instruction<0x9D>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:224 REP #PROC_FLAGS::ACCUM8
    case 0xC2766B: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:225 AND #$00FF
    case 0xC2766D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:225 AND #$00FF
    // Overlapping static entry reached from 0xC2766D.
    case 0xC2766F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:226 ASL
    case 0xC27670: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:227 TAX
    case 0xC27671: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:228 INX
    case 0xC27672: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:229 LDA f:NPC_AI_TABLE,X
    case 0xC27673: cpu.execute_instruction<0xBF>(0xD59DDA, 4); return true;
    // src/battle/ko_target.asm:230 AND #$00FF
    case 0xC27677: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:230 AND #$00FF
    // Overlapping static entry reached from 0xC27677.
    case 0xC27679: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/ko_target.asm:231 LDX @VIRTUAL02
    case 0xC2767A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:232 STA a:battler::id,X
    case 0xC2767C: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/ko_target.asm:233 JMP @UNKNOWN62
    case 0xC2767F: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:235 LDA GAME_STATE+game_state::party_npc_1
    case 0xC27682: cpu.execute_instruction<0xAD>(0x009AEB, 3); return true;
    // src/battle/ko_target.asm:236 AND #$00FF
    case 0xC27685: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:236 AND #$00FF
    // Overlapping static entry reached from 0xC27685.
    case 0xC27687: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC27688: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:237 BEQL @UNKNOWN62
    case 0xC2768A: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    case 0xC2768D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x0000AE, 2); else cpu.execute_instruction<0xA2>(0x00A1AE, 3); return true;
    // src/battle/ko_target.asm:238 LDX #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC2768D.
    case 0xC2768F: cpu.execute_instruction<0xA1>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:239 LDY #0
    case 0xC27690: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:239 LDY #0
    // Overlapping static entry reached from 0xC2768F.
    case 0xC27691: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/ko_target.asm:239 LDY #0
    // Overlapping static entry reached from 0xC27690.
    case 0xC27692: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/ko_target.asm:240 BRA @UNKNOWN18
    case 0xC27693: cpu.execute_instruction<0x80>(0x000029, 2); return true;
    // src/battle/ko_target.asm:242 LDA a:battler::consciousness,X
    case 0xC27695: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:243 AND #$00FF
    case 0xC27698: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:243 AND #$00FF
    // Overlapping static entry reached from 0xC27698.
    case 0xC2769A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:244 BEQ @UNKNOWN17
    case 0xC2769B: cpu.execute_instruction<0xF0>(0x000018, 2); return true;
    // src/battle/ko_target.asm:245 LDA a:battler::ally_or_enemy,X
    case 0xC2769D: cpu.execute_instruction<0xBD>(0x00000E, 3); return true;
    // src/battle/ko_target.asm:246 AND #$00FF
    case 0xC276A0: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:246 AND #$00FF
    // Overlapping static entry reached from 0xC276A0.
    case 0xC276A2: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:247 BNE @UNKNOWN17
    case 0xC276A3: cpu.execute_instruction<0xD0>(0x000010, 2); return true;
    // src/battle/ko_target.asm:248 SEP #PROC_FLAGS::ACCUM8
    case 0xC276A5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:249 LDA a:battler::npc_id,X
    case 0xC276A7: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:250 CMP GAME_STATE+game_state::party_npc_1
    case 0xC276AA: cpu.execute_instruction<0xCD>(0x009AEB, 3); return true;
    // src/battle/ko_target.asm:251 BNE @UNKNOWN17
    case 0xC276AD: cpu.execute_instruction<0xD0>(0x000006, 2); return true;
    // src/battle/ko_target.asm:252 STZ a:battler::row,X
    case 0xC276AF: cpu.execute_instruction<0x9E>(0x000010, 3); return true;
    // src/battle/ko_target.asm:253 JMP @UNKNOWN62
    case 0xC276B2: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:255 REP #PROC_FLAGS::ACCUM8
    case 0xC276B5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:256 TXA
    case 0xC276B7: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:257 CLC
    case 0xC276B8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    case 0xC276B9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:258 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC276B9.
    case 0xC276BB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:259 TAX
    case 0xC276BC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:260 INY
    case 0xC276BD: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:262 STY @VIRTUAL02
    case 0xC276BE: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    case 0xC276C0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x000020, 3); return true;
    // src/battle/ko_target.asm:263 LDA #BATTLER_COUNT
    // Overlapping static entry reached from 0xC276C0.
    case 0xC276C2: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:264 CLC
    case 0xC276C3: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:265 SBC @VIRTUAL02
    case 0xC276C4: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // include/macros.asm:798 BVS :+
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276C6: cpu.execute_instruction<0x70>(0x000004, 2); return true;
    // include/macros.asm:799 BPL dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276C8: cpu.execute_instruction<0x10>(0x0000CB, 2); return true;
    // include/macros.asm:800 BRA :++
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276CA: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // include/macros.asm:802 BMI dest
    // Macro caller: src/battle/ko_target.asm:266 BRANCHGTS @UNKNOWN16
    case 0xC276CC: cpu.execute_instruction<0x30>(0x0000C7, 2); return true;
    // src/battle/ko_target.asm:267 JMP @UNKNOWN62
    case 0xC276CE: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:269 LDX @VIRTUAL02
    case 0xC276D1: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:270 STZ a:battler::hp_target,X
    case 0xC276D3: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/battle/ko_target.asm:271 LDA @VIRTUAL02
    case 0xC276D6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:272 CLC
    case 0xC276D8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:273 ADC #battler::row
    case 0xC276D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000010, 2); else cpu.execute_instruction<0x69>(0x000010, 3); return true;
    // src/battle/ko_target.asm:273 ADC #battler::row
    // Overlapping static entry reached from 0xC276D9.
    case 0xC276DB: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:274 TAX
    case 0xC276DC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:275 STX @LOCAL04
    case 0xC276DD: cpu.execute_instruction<0x86>(0x00001C, 2); return true;
    // src/battle/ko_target.asm:276 LDA __BSS_START__,X
    case 0xC276DF: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:277 AND #$00FF
    case 0xC276E2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:277 AND #$00FF
    // Overlapping static entry reached from 0xC276E2.
    case 0xC276E4: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    case 0xC276E5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:278 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC276E5.
    case 0xC276E7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:279 JSL MULT168
    case 0xC276E8: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:280 TAX
    case 0xC276EC: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:281 STZ PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC276ED: cpu.execute_instruction<0x9E>(0x009CC5, 3); return true;
    // src/battle/ko_target.asm:282 LDX @LOCAL04
    case 0xC276F0: cpu.execute_instruction<0xA6>(0x00001C, 2); return true;
    // src/battle/ko_target.asm:283 LDA __BSS_START__,X
    case 0xC276F2: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:284 AND #$00FF
    case 0xC276F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:284 AND #$00FF
    // Overlapping static entry reached from 0xC276F5.
    case 0xC276F7: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    case 0xC276F8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:285 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC276F8.
    case 0xC276FA: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:286 JSL MULT168
    case 0xC276FB: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:287 TAX
    case 0xC276FF: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:288 LDA #1
    case 0xC27700: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:288 LDA #1
    // Overlapping static entry reached from 0xC27700.
    case 0xC27702: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:289 STA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC27703: cpu.execute_instruction<0x9D>(0x009CC3, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC27706: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007D, 2); else cpu.execute_instruction<0xA9>(0x00317D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC27706.
    case 0xC27708: cpu.execute_instruction<0x31>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC27709: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC27708.
    case 0xC2770A: cpu.execute_instruction<0x0E>(0x00C7A9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2770B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C7, 2); else cpu.execute_instruction<0xA9>(0x0000C7, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    // Overlapping static entry reached from 0xC2770B.
    case 0xC2770D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC2770E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:215 JSL DISPLAY_IN_BATTLE_TEXT
    // Macro caller: src/battle/ko_target.asm:290 DISPLAY_BATTLE_TEXT_PTR MSG_BTL_KIZETU_ON
    case 0xC27710: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/ko_target.asm:291 JMP @UNKNOWN62
    case 0xC27714: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:293 LDX @VIRTUAL02
    case 0xC27717: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:294 LDA a:battler::id,X
    case 0xC27719: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    case 0xC2771C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DA, 2); else cpu.execute_instruction<0xC9>(0x0000DA, 3); return true;
    // src/battle/ko_target.asm:295 CMP #ENEMY::GIYGAS_2
    // Overlapping static entry reached from 0xC2771C.
    case 0xC2771E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC2771F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:296 BEQL @UNKNOWN62
    case 0xC27721: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    case 0xC27724: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DB, 2); else cpu.execute_instruction<0xC9>(0x0000DB, 3); return true;
    // src/battle/ko_target.asm:297 CMP #ENEMY::GIYGAS_3
    // Overlapping static entry reached from 0xC27724.
    case 0xC27726: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC27727: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:298 BEQL @UNKNOWN62
    case 0xC27729: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    case 0xC2772C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DD, 2); else cpu.execute_instruction<0xC9>(0x0000DD, 3); return true;
    // src/battle/ko_target.asm:299 CMP #ENEMY::GIYGAS_5
    // Overlapping static entry reached from 0xC2772C.
    case 0xC2772E: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC2772F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:300 BEQL @UNKNOWN62
    case 0xC27731: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    case 0xC27734: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000E5, 2); else cpu.execute_instruction<0xC9>(0x0000E5, 3); return true;
    // src/battle/ko_target.asm:301 CMP #ENEMY::GIYGAS_6
    // Overlapping static entry reached from 0xC27734.
    case 0xC27736: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC27737: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:302 BEQL @UNKNOWN62
    case 0xC27739: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:303 LDA #1
    case 0xC2773C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:303 LDA #1
    // Overlapping static entry reached from 0xC2773C.
    case 0xC2773E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:304 JSL COUNT_CHARS
    case 0xC2773F: cpu.execute_instruction<0x22>(0xC2BA70, 4); return true;
    // src/battle/ko_target.asm:305 CMP #1
    case 0xC27743: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:305 CMP #1
    // Overlapping static entry reached from 0xC27743.
    case 0xC27745: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC27746: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:306 BNEL @UNKNOWN31
    case 0xC27748: cpu.execute_instruction<0x4C>(0x0077C6, 3); return true;
    // src/battle/ko_target.asm:307 JSL RESET_HPPP_ROLLING
    case 0xC2774B: cpu.execute_instruction<0x22>(0xC20E2B, 4); return true;
    // src/battle/ko_target.asm:308 LDA #0
    case 0xC2774F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:308 LDA #0
    // Overlapping static entry reached from 0xC2774F.
    case 0xC27751: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:309 STA @LOCAL07
    case 0xC27752: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/ko_target.asm:310 BRA @UNKNOWN30
    case 0xC27754: cpu.execute_instruction<0x80>(0x00006B, 2); return true;
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    case 0xC27756: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:312 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27756.
    case 0xC27758: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:313 JSL MULT168
    case 0xC27759: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:314 TAX
    case 0xC2775D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:315 STX @LOCAL05
    case 0xC2775E: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:316 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27760: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/ko_target.asm:317 AND #$00FF
    case 0xC27763: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:317 AND #$00FF
    // Overlapping static entry reached from 0xC27763.
    case 0xC27765: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:318 BEQ @UNKNOWN29
    case 0xC27766: cpu.execute_instruction<0xF0>(0x000054, 2); return true;
    // src/battle/ko_target.asm:319 LDA BATTLERS_TABLE+battler::ally_or_enemy,X
    case 0xC27768: cpu.execute_instruction<0xBD>(0x00A1BC, 3); return true;
    // src/battle/ko_target.asm:320 AND #$00FF
    case 0xC2776B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:320 AND #$00FF
    // Overlapping static entry reached from 0xC2776B.
    case 0xC2776D: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:321 BNE @UNKNOWN29
    case 0xC2776E: cpu.execute_instruction<0xD0>(0x00004C, 2); return true;
    // src/battle/ko_target.asm:322 LDA BATTLERS_TABLE+battler::afflictions,X
    case 0xC27770: cpu.execute_instruction<0xBD>(0x00A1CB, 3); return true;
    // src/battle/ko_target.asm:323 AND #$00FF
    case 0xC27773: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:323 AND #$00FF
    // Overlapping static entry reached from 0xC27773.
    case 0xC27775: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    case 0xC27776: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:324 CMP #STATUS_0::UNCONSCIOUS
    // Overlapping static entry reached from 0xC27776.
    case 0xC27778: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:325 BEQ @UNKNOWN29
    case 0xC27779: cpu.execute_instruction<0xF0>(0x000041, 2); return true;
    // src/battle/ko_target.asm:326 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC2777B: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/ko_target.asm:327 AND #$00FF
    case 0xC2777E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:327 AND #$00FF
    // Overlapping static entry reached from 0xC2777E.
    case 0xC27780: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:328 BNE @UNKNOWN29
    case 0xC27781: cpu.execute_instruction<0xD0>(0x000039, 2); return true;
    // src/battle/ko_target.asm:329 TXA
    case 0xC27783: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:330 CLC
    case 0xC27784: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    case 0xC27785: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000BE, 2); else cpu.execute_instruction<0x69>(0x00A1BE, 3); return true;
    // src/battle/ko_target.asm:331 ADC #.LOWORD(BATTLERS_TABLE) + battler::row
    // Overlapping static entry reached from 0xC27785.
    case 0xC27787: cpu.execute_instruction<0xA1>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:332 TAY
    case 0xC27788: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:333 STY @LOCAL06
    case 0xC27789: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // src/battle/ko_target.asm:334 LDA __BSS_START__,Y
    case 0xC2778B: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:335 AND #$00FF
    case 0xC2778E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:335 AND #$00FF
    // Overlapping static entry reached from 0xC2778E.
    case 0xC27790: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    case 0xC27791: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:336 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC27791.
    case 0xC27793: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:337 JSL MULT168
    case 0xC27794: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:338 TAX
    case 0xC27798: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:339 LDA PARTY_CHARACTERS+char_struct::current_hp,X
    case 0xC27799: cpu.execute_instruction<0xBD>(0x009CC3, 3); return true;
    // src/battle/ko_target.asm:340 BNE @UNKNOWN29
    case 0xC2779C: cpu.execute_instruction<0xD0>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:341 LDA #1
    case 0xC2779E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:341 LDA #1
    // Overlapping static entry reached from 0xC2779E.
    case 0xC277A0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/ko_target.asm:342 LDX @LOCAL05
    case 0xC277A1: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:343 STA BATTLERS_TABLE+battler::hp_target,X
    case 0xC277A3: cpu.execute_instruction<0x9D>(0x00A1C1, 3); return true;
    // src/battle/ko_target.asm:344 LDY @LOCAL06
    case 0xC277A6: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/battle/ko_target.asm:345 LDA __BSS_START__,Y
    case 0xC277A8: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:346 AND #$00FF
    case 0xC277AB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:346 AND #$00FF
    // Overlapping static entry reached from 0xC277AB.
    case 0xC277AD: cpu.execute_instruction<0x00>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    case 0xC277AE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00005E, 2); else cpu.execute_instruction<0xA0>(0x00005E, 3); return true;
    // src/battle/ko_target.asm:347 LDY #.SIZEOF(char_struct)
    // Overlapping static entry reached from 0xC277AE.
    case 0xC277B0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:348 JSL MULT168
    case 0xC277B1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:349 TAX
    case 0xC277B5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:350 LDA #1
    case 0xC277B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:350 LDA #1
    // Overlapping static entry reached from 0xC277B6.
    case 0xC277B8: cpu.execute_instruction<0x00>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:351 STA PARTY_CHARACTERS+char_struct::current_hp_target,X
    case 0xC277B9: cpu.execute_instruction<0x9D>(0x009CC5, 3); return true;
    // src/battle/ko_target.asm:353 LDA @LOCAL07
    case 0xC277BC: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/ko_target.asm:354 INC
    case 0xC277BE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:355 STA @LOCAL07
    case 0xC277BF: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    case 0xC277C1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/ko_target.asm:357 CMP #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC277C1.
    case 0xC277C3: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:358 BCC @UNKNOWN28
    case 0xC277C4: cpu.execute_instruction<0x90>(0x000090, 2); return true;
    // src/battle/ko_target.asm:360 LDA @VIRTUAL02
    case 0xC277C6: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:361 CLC
    case 0xC277C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:362 ADC #battler::exp
    case 0xC277C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003F, 2); else cpu.execute_instruction<0x69>(0x00003F, 3); return true;
    // src/battle/ko_target.asm:362 ADC #battler::exp
    // Overlapping static entry reached from 0xC277C9.
    case 0xC277CB: cpu.execute_instruction<0x00>(0x0000A8, 2); return true;
    // src/battle/ko_target.asm:363 TAY
    case 0xC277CC: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1113 LDA src, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277CD: cpu.execute_instruction<0xB9>(0x000000, 3); return true;
    // include/macros.asm:1114 STA dest
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277D0: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1115 LDA src+2, Y
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277D2: cpu.execute_instruction<0xB9>(0x000002, 3); return true;
    // include/macros.asm:1116 STA dest+2
    // Macro caller: src/battle/ko_target.asm:364 MOVE_INT_YPTRSRC __BSS_START__, @VIRTUAL0A
    case 0xC277D5: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277D7: cpu.execute_instruction<0xAD>(0x00AB76, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277DA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277DC: cpu.execute_instruction<0xAD>(0x00AB78, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:365 MOVE_INT BATTLE_EXP_SCRATCH, @VIRTUAL06
    case 0xC277DF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/ko_target.asm:366 CLC
    case 0xC277E1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:942 LDA val1
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:943 ADC val2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E4: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // include/macros.asm:944 STA dest
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E6: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:945 LDA val1+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277E8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:946 ADC val2+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277EA: cpu.execute_instruction<0x65>(0x00000C, 2); return true;
    // include/macros.asm:947 STA dest+2
    // Macro caller: src/battle/ko_target.asm:367 ADD_INT_ASSIGN @VIRTUAL06, @VIRTUAL0A
    case 0xC277EC: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277EE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277F0: cpu.execute_instruction<0x8D>(0x00AB76, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277F3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:368 MOVE_INT @VIRTUAL06, BATTLE_EXP_SCRATCH
    case 0xC277F5: cpu.execute_instruction<0x8D>(0x00AB78, 3); return true;
    // src/battle/ko_target.asm:369 LDX @VIRTUAL02
    case 0xC277F8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:370 LDA a:battler::money,X
    case 0xC277FA: cpu.execute_instruction<0xBD>(0x00003D, 3); return true;
    // src/battle/ko_target.asm:371 CLC
    case 0xC277FD: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:372 ADC BATTLE_MONEY_SCRATCH
    case 0xC277FE: cpu.execute_instruction<0x6D>(0x00AB7A, 3); return true;
    // src/battle/ko_target.asm:373 STA BATTLE_MONEY_SCRATCH
    case 0xC27801: cpu.execute_instruction<0x8D>(0x00AB7A, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27804: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27804.
    case 0xC27806: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27807: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27806.
    case 0xC27808: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC27809: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27809.
    case 0xC2780B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:375 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC2780C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/ko_target.asm:379 LDX @VIRTUAL02
    case 0xC2780E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:380 LDA a:battler::id,X
    case 0xC27810: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    case 0xC27813: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:381 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27813.
    case 0xC27815: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:382 JSL MULT168
    case 0xC27816: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:383 CLC
    case 0xC2781A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    case 0xC2781B: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003D, 2); else cpu.execute_instruction<0x69>(0x00003D, 3); return true;
    // src/battle/ko_target.asm:384 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC2781B.
    case 0xC2781D: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2781E: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27820: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27822: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:386 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27824: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/ko_target.asm:387 CLC
    case 0xC27826: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:388 ADC @VIRTUAL06
    case 0xC27827: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:389 STA @VIRTUAL06
    case 0xC27829: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/ko_target.asm:390 LDA [@VIRTUAL06]
    case 0xC2782B: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:391 BEQL @UNKNOWN33
    case 0xC2782D: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:391 BEQL @UNKNOWN33
    case 0xC2782F: cpu.execute_instruction<0x4C>(0x00799C, 3); return true;
    // src/battle/ko_target.asm:392 LDA #1
    case 0xC27832: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:392 LDA #1
    // Overlapping static entry reached from 0xC27832.
    case 0xC27834: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/ko_target.asm:393 STA ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC27835: cpu.execute_instruction<0x8D>(0x00AC65, 3); return true;
    // src/battle/ko_target.asm:394 LDY CURRENT_ATTACKER
    case 0xC27838: cpu.execute_instruction<0xAC>(0x00AB72, 3); return true;
    // src/battle/ko_target.asm:395 STY @LOCAL03
    case 0xC2783B: cpu.execute_instruction<0x84>(0x00001A, 2); return true;
    // src/battle/ko_target.asm:396 LDX CURRENT_TARGET
    case 0xC2783D: cpu.execute_instruction<0xAE>(0x00AB74, 3); return true;
    // src/battle/ko_target.asm:397 STX @LOCAL05
    case 0xC27840: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27842: cpu.execute_instruction<0xAD>(0x00AB6E, 3); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27845: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC27847: cpu.execute_instruction<0xAD>(0x00AB70, 3); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:398 MOVE_INT BATTLER_TARGET_FLAGS, @VIRTUAL06
    case 0xC2784A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2784C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2784E: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC27850: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:399 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC27852: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/ko_target.asm:400 LDA @VIRTUAL02
    case 0xC27854: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/ko_target.asm:401 STA CURRENT_ATTACKER
    case 0xC27856: cpu.execute_instruction<0x8D>(0x00AB72, 3); return true;
    // src/battle/ko_target.asm:402 LDX @VIRTUAL02
    case 0xC27859: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:403 LDA a:battler::id,X
    case 0xC2785B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:404 LDY #.SIZEOF(enemy_data)
    case 0xC2785E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:404 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2785E.
    case 0xC27860: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:405 JSL MULT168
    case 0xC27861: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:406 CLC
    case 0xC27865: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:407 ADC #enemy_data::final_action
    case 0xC27866: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003D, 2); else cpu.execute_instruction<0x69>(0x00003D, 3); return true;
    // src/battle/ko_target.asm:407 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC27866.
    case 0xC27868: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27869: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2786B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2786D: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:408 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2786F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/ko_target.asm:409 CLC
    case 0xC27871: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:410 ADC @VIRTUAL06
    case 0xC27872: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:411 STA @VIRTUAL06
    case 0xC27874: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/ko_target.asm:412 LDA [@VIRTUAL06]
    case 0xC27876: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/ko_target.asm:436 LDX @VIRTUAL02
    case 0xC27878: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:437 STA a:battler::current_action,X
    case 0xC2787A: cpu.execute_instruction<0x9D>(0x000004, 3); return true;
    // src/battle/ko_target.asm:438 LDX @VIRTUAL02
    case 0xC2787D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:439 LDA a:battler::id,X
    case 0xC2787F: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    case 0xC27882: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:440 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27882.
    case 0xC27884: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:441 JSL MULT168
    case 0xC27885: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:442 CLC
    case 0xC27889: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    case 0xC2788A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000043, 2); else cpu.execute_instruction<0x69>(0x000043, 3); return true;
    // src/battle/ko_target.asm:443 ADC #enemy_data::final_action_arg
    // Overlapping static entry reached from 0xC2788A.
    case 0xC2788C: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2788D: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2788F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27891: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:445 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27893: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/ko_target.asm:446 CLC
    case 0xC27895: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:447 ADC @VIRTUAL06
    case 0xC27896: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:448 STA @VIRTUAL06
    case 0xC27898: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/ko_target.asm:449 SEP #PROC_FLAGS::ACCUM8
    case 0xC2789A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:450 LDA [@VIRTUAL06]
    case 0xC2789C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/ko_target.asm:456 LDX @VIRTUAL02
    case 0xC2789E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:457 STA a:battler::current_action_argument,X
    case 0xC278A0: cpu.execute_instruction<0x9D>(0x000008, 3); return true;
    // src/battle/ko_target.asm:458 REP #PROC_FLAGS::ACCUM8
    case 0xC278A3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:459 LDA CURRENT_ATTACKER
    case 0xC278A5: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/ko_target.asm:460 JSL CHOOSE_TARGET
    case 0xC278A8: cpu.execute_instruction<0x22>(0xC24344, 4); return true;
    // src/battle/ko_target.asm:461 LDA CURRENT_ATTACKER
    case 0xC278AC: cpu.execute_instruction<0xAD>(0x00AB72, 3); return true;
    // src/battle/ko_target.asm:462 JSL UNKNOWN_C24703
    case 0xC278AF: cpu.execute_instruction<0x22>(0xC245D0, 4); return true;
    // src/battle/ko_target.asm:463 LDA #0
    case 0xC278B3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:463 LDA #0
    // Overlapping static entry reached from 0xC278B3.
    case 0xC278B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:464 JSL FIX_ATTACKER_NAME
    case 0xC278B6: cpu.execute_instruction<0x22>(0xC23AB9, 4); return true;
    // src/battle/ko_target.asm:465 JSL UNKNOWN_C23E32
    case 0xC278BA: cpu.execute_instruction<0x22>(0xC23D07, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278BE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001E, 2); else cpu.execute_instruction<0xA9>(0x008B1E, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    // Overlapping static entry reached from 0xC278BE.
    case 0xC278C0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278C1: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    // Overlapping static entry reached from 0xC278C3.
    case 0xC278C5: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:467 LOADPTR BATTLE_ACTION_TABLE, @LOCAL01
    case 0xC278C6: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/ko_target.asm:471 LDX @VIRTUAL02
    case 0xC278C8: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:472 LDA a:battler::id,X
    case 0xC278CA: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    case 0xC278CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:473 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC278CD.
    case 0xC278CF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:474 JSL MULT168
    case 0xC278D0: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:475 CLC
    case 0xC278D4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    case 0xC278D5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003D, 2); else cpu.execute_instruction<0x69>(0x00003D, 3); return true;
    // src/battle/ko_target.asm:476 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC278D5.
    case 0xC278D7: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278D8: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278DA: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278DC: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:478 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC278DE: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/ko_target.asm:479 CLC
    case 0xC278E0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:480 ADC @VIRTUAL06
    case 0xC278E1: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:481 STA @VIRTUAL06
    case 0xC278E3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/ko_target.asm:482 LDA [@VIRTUAL06]
    case 0xC278E5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278E7: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278E9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278EA: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278EC: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:487 OPTIMIZED_MULT @VIRTUAL04, 12
    case 0xC278ED: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:488 INC
    case 0xC278EE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:489 INC
    case 0xC278EF: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:490 INC
    case 0xC278F0: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:491 INC
    case 0xC278F1: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:493 PHA
    case 0xC278F2: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F3: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F7: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:494 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC278F9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/ko_target.asm:495 PLA
    case 0xC278FB: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/ko_target.asm:499 CLC
    case 0xC278FC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:500 ADC @VIRTUAL06
    case 0xC278FD: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:501 STA @VIRTUAL06
    case 0xC278FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27901: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC27901.
    case 0xC27903: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27904: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27906: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27907: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC27909: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:502 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2790B: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2790D: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2790F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27911: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:503 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC27913: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:504 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC27915: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/ko_target.asm:505 LDX @VIRTUAL02
    case 0xC27919: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:506 LDA a:battler::id,X
    case 0xC2791B: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    case 0xC2791E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:507 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC2791E.
    case 0xC27920: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:508 JSL MULT168
    case 0xC27921: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:509 CLC
    case 0xC27925: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    case 0xC27926: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00003D, 2); else cpu.execute_instruction<0x69>(0x00003D, 3); return true;
    // src/battle/ko_target.asm:510 ADC #enemy_data::final_action
    // Overlapping static entry reached from 0xC27926.
    case 0xC27928: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC27929: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2792B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2792D: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/ko_target.asm:512 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2792F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/ko_target.asm:513 CLC
    case 0xC27931: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:514 ADC @VIRTUAL06
    case 0xC27932: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:515 STA @VIRTUAL06
    case 0xC27934: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/ko_target.asm:516 LDA [@VIRTUAL06]
    case 0xC27936: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:568 STA scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC27938: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:569 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:570 ADC scratch
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:571 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:572 ASL
    // Macro caller: src/battle/ko_target.asm:521 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(battle_action)
    case 0xC2793E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:522 CLC
    case 0xC2793F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    case 0xC27940: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x000008, 3); return true;
    // src/battle/ko_target.asm:523 ADC #battle_action::battle_function_pointer
    // Overlapping static entry reached from 0xC27940.
    case 0xC27942: cpu.execute_instruction<0x00>(0x000048, 2); return true;
    // src/battle/ko_target.asm:525 PHA
    case 0xC27943: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC27944: cpu.execute_instruction<0xA5>(0x000012, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC27946: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC27948: cpu.execute_instruction<0xA5>(0x000014, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:526 MOVE_INT @LOCAL01, @VIRTUAL06
    case 0xC2794A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/ko_target.asm:527 PLA
    case 0xC2794C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/ko_target.asm:528 CLC
    case 0xC2794D: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:529 ADC @VIRTUAL06
    case 0xC2794E: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/ko_target.asm:530 STA @VIRTUAL06
    case 0xC27950: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27952: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC27952.
    case 0xC27954: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27955: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27957: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC27958: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2795A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:531 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2795C: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2795E: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC27960: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC27962: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:532 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC27964: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:540 JSL UNKNOWN_C240A4
    case 0xC27966: cpu.execute_instruction<0x22>(0xC23F58, 4); return true;
    // src/battle/ko_target.asm:541 STZ ENEMY_PERFORMING_FINAL_ATTACK
    case 0xC2796A: cpu.execute_instruction<0x9C>(0x00AC65, 3); return true;
    // src/battle/ko_target.asm:543 LDY @LOCAL03
    case 0xC2796D: cpu.execute_instruction<0xA4>(0x00001A, 2); return true;
    // src/battle/ko_target.asm:544 STY CURRENT_ATTACKER
    case 0xC2796F: cpu.execute_instruction<0x8C>(0x00AB72, 3); return true;
    // src/battle/ko_target.asm:545 LDX @LOCAL05
    case 0xC27972: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:546 STX CURRENT_TARGET
    case 0xC27974: cpu.execute_instruction<0x8E>(0x00AB74, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC27977: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC27979: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2797B: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:547 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2797D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC2797F: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27981: cpu.execute_instruction<0x8D>(0x00AB6E, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27984: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:555 MOVE_INT @VIRTUAL06, BATTLER_TARGET_FLAGS
    case 0xC27986: cpu.execute_instruction<0x8D>(0x00AB70, 3); return true;
    // src/battle/ko_target.asm:556 LDA #0
    case 0xC27989: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/ko_target.asm:556 LDA #0
    // Overlapping static entry reached from 0xC27989.
    case 0xC2798B: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:557 JSL FIX_ATTACKER_NAME
    case 0xC2798C: cpu.execute_instruction<0x22>(0xC23AB9, 4); return true;
    // src/battle/ko_target.asm:558 JSL FIX_TARGET_NAME
    case 0xC27990: cpu.execute_instruction<0x22>(0xC23BF4, 4); return true;
    // src/battle/ko_target.asm:559 LDA SPECIAL_DEFEAT
    case 0xC27994: cpu.execute_instruction<0xAD>(0x00ABE3, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27997: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:560 BNEL @UNKNOWN62
    case 0xC27999: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:562 LDA SKIP_DEATH_TEXT_AND_CLEANUP
    case 0xC2799C: cpu.execute_instruction<0xAD>(0x00AC67, 3); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC2799F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:563 BNEL @UNKNOWN62
    case 0xC279A1: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279A4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x00A440, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC279A4.
    case 0xC279A6: cpu.execute_instruction<0xA4>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279A7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC279A6.
    case 0xC279A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279A9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC279A9.
    case 0xC279AB: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/ko_target.asm:564 LOADPTR ENEMY_CONFIGURATION_TABLE, @VIRTUAL0A
    case 0xC279AC: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/ko_target.asm:565 LDX @VIRTUAL02
    case 0xC279AE: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:566 LDA a:battler::id,X
    case 0xC279B0: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    case 0xC279B3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:567 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC279B3.
    case 0xC279B5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:568 JSL MULT168
    case 0xC279B6: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:569 CLC
    case 0xC279BA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    case 0xC279BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x000020, 3); return true;
    // src/battle/ko_target.asm:570 ADC #enemy_data::death_text_ptr
    // Overlapping static entry reached from 0xC279BB.
    case 0xC279BD: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // src/battle/ko_target.asm:571 CLC
    case 0xC279BE: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:572 ADC @VIRTUAL0A
    case 0xC279BF: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:573 STA @VIRTUAL0A
    case 0xC279C1: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC279C3.
    case 0xC279C5: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C6: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C8: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279C9: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/ko_target.asm:574 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC279CD: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279D3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/ko_target.asm:575 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC279D5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/ko_target.asm:576 JSL DISPLAY_IN_BATTLE_TEXT
    case 0xC279D7: cpu.execute_instruction<0x22>(0xC1D9FF, 4); return true;
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    case 0xC279DB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AE, 2); else cpu.execute_instruction<0xA9>(0x00A1AE, 3); return true;
    // src/battle/ko_target.asm:577 LDA #.LOWORD(BATTLERS_TABLE)
    // Overlapping static entry reached from 0xC279DB.
    case 0xC279DD: cpu.execute_instruction<0xA1>(0x0000A2, 2); return true;
    // src/battle/ko_target.asm:578 LDX #0
    case 0xC279DE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/ko_target.asm:578 LDX #0
    // Overlapping static entry reached from 0xC279DD.
    case 0xC279DF: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/ko_target.asm:578 LDX #0
    // Overlapping static entry reached from 0xC279DE.
    case 0xC279E0: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/ko_target.asm:579 STX @LOCAL07
    case 0xC279E1: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/ko_target.asm:580 BRA @UNKNOWN36
    case 0xC279E3: cpu.execute_instruction<0x80>(0x000011, 2); return true;
    // src/battle/ko_target.asm:582 TAX
    case 0xC279E5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:583 SEP #PROC_FLAGS::ACCUM8
    case 0xC279E6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:584 STZ a:battler::use_alt_spritemap,X
    case 0xC279E8: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/ko_target.asm:585 CLC
    case 0xC279EB: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:586 REP #PROC_FLAGS::ACCUM8
    case 0xC279EC: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    case 0xC279EE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:587 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC279EE.
    case 0xC279F0: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/ko_target.asm:588 LDX @LOCAL07
    case 0xC279F1: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/ko_target.asm:589 INX
    case 0xC279F3: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:590 STX @LOCAL07
    case 0xC279F4: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    case 0xC279F6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000020, 2); else cpu.execute_instruction<0xE0>(0x000020, 3); return true;
    // src/battle/ko_target.asm:592 CPX #BATTLER_COUNT
    // Overlapping static entry reached from 0xC279F6.
    case 0xC279F8: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:593 BCC @UNKNOWN35
    case 0xC279F9: cpu.execute_instruction<0x90>(0x0000EA, 2); return true;
    // src/battle/ko_target.asm:594 SEP #PROC_FLAGS::ACCUM8
    case 0xC279FB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:595 LDA #1
    case 0xC279FD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    case 0xC279FF: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:596 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC279FD.
    case 0xC27A00: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:597 STA a:battler::use_alt_spritemap,X
    case 0xC27A01: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/ko_target.asm:598 REP #PROC_FLAGS::ACCUM8
    case 0xC27A04: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:599 LDA #10
    case 0xC27A06: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:599 LDA #10
    // Overlapping static entry reached from 0xC27A06.
    case 0xC27A08: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:600 JSL UNKNOWN_C2FAD8
    case 0xC27A09: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/battle/ko_target.asm:601 LDA #1
    case 0xC27A0D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:601 LDA #1
    // Overlapping static entry reached from 0xC27A0D.
    case 0xC27A0F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:602 STA @VIRTUAL04
    case 0xC27A10: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:603 BRA @UNKNOWN38
    case 0xC27A12: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/ko_target.asm:605 LDA #31
    case 0xC27A14: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:605 LDA #31
    // Overlapping static entry reached from 0xC27A14.
    case 0xC27A16: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:606 STA @LOCAL00
    case 0xC27A17: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:607 TAY
    case 0xC27A19: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:608 TAX
    case 0xC27A1A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:609 STX @LOCAL05
    case 0xC27A1B: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:610 LDX @VIRTUAL02
    case 0xC27A1D: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:611 LDA a:battler::vram_sprite_index,X
    case 0xC27A1F: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/ko_target.asm:612 AND #$00FF
    case 0xC27A22: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:612 AND #$00FF
    // Overlapping static entry reached from 0xC27A22.
    case 0xC27A24: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:613 ASL
    case 0xC27A25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:614 ASL
    case 0xC27A26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:615 ASL
    case 0xC27A27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:616 ASL
    case 0xC27A28: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:617 CLC
    case 0xC27A29: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:618 ADC @VIRTUAL04
    case 0xC27A2A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/ko_target.asm:619 LDX @LOCAL05
    case 0xC27A2C: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:620 JSL UNKNOWN_C2FB35
    case 0xC27A2E: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/battle/ko_target.asm:621 INC @VIRTUAL04
    case 0xC27A32: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:623 LDA @VIRTUAL04
    case 0xC27A34: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:624 CMP #16
    case 0xC27A36: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/ko_target.asm:624 CMP #16
    // Overlapping static entry reached from 0xC27A36.
    case 0xC27A38: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:625 BCC @UNKNOWN37
    case 0xC27A39: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    case 0xC27A3B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:626 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27A3B.
    case 0xC27A3D: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:627 JSR WAIT
    case 0xC27A3E: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/ko_target.asm:628 LDA #20
    case 0xC27A41: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:628 LDA #20
    // Overlapping static entry reached from 0xC27A41.
    case 0xC27A43: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:629 JSL UNKNOWN_C2FAD8
    case 0xC27A44: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/battle/ko_target.asm:630 LDA #1
    case 0xC27A48: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:630 LDA #1
    // Overlapping static entry reached from 0xC27A48.
    case 0xC27A4A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:631 STA @VIRTUAL04
    case 0xC27A4B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:632 BRA @UNKNOWN40
    case 0xC27A4D: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    case 0xC27A4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC27A4F.
    case 0xC27A51: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/ko_target.asm:634 STZ_BADOPT @LOCAL00
    case 0xC27A52: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:636 TAY
    case 0xC27A54: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:637 TAX
    case 0xC27A55: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:642 STX @LOCAL05
    case 0xC27A56: cpu.execute_instruction<0x86>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:643 LDX @VIRTUAL02
    case 0xC27A58: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:644 LDA a:battler::vram_sprite_index,X
    case 0xC27A5A: cpu.execute_instruction<0xBD>(0x000043, 3); return true;
    // src/battle/ko_target.asm:645 AND #$00FF
    case 0xC27A5D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:645 AND #$00FF
    // Overlapping static entry reached from 0xC27A5D.
    case 0xC27A5F: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/ko_target.asm:646 ASL
    case 0xC27A60: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:647 ASL
    case 0xC27A61: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:648 ASL
    case 0xC27A62: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:649 ASL
    case 0xC27A63: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:650 CLC
    case 0xC27A64: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:651 ADC @VIRTUAL04
    case 0xC27A65: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/ko_target.asm:652 LDX @LOCAL05
    case 0xC27A67: cpu.execute_instruction<0xA6>(0x00001E, 2); return true;
    // src/battle/ko_target.asm:653 JSL UNKNOWN_C2FB35
    case 0xC27A69: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/battle/ko_target.asm:654 INC @VIRTUAL04
    case 0xC27A6D: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:656 LDA @VIRTUAL04
    case 0xC27A6F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:657 CMP #16
    case 0xC27A71: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000010, 2); else cpu.execute_instruction<0xC9>(0x000010, 3); return true;
    // src/battle/ko_target.asm:657 CMP #16
    // Overlapping static entry reached from 0xC27A71.
    case 0xC27A73: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:658 BCC @UNKNOWN39
    case 0xC27A74: cpu.execute_instruction<0x90>(0x0000D9, 2); return true;
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    case 0xC27A76: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:659 LDA #THIRD_OF_A_SECOND
    // Overlapping static entry reached from 0xC27A76.
    case 0xC27A78: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:660 JSR WAIT
    case 0xC27A79: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/ko_target.asm:661 SEP #PROC_FLAGS::ACCUM8
    case 0xC27A7C: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:662 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27A7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    case 0xC27A80: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:663 LDX @VIRTUAL02
    // Overlapping static entry reached from 0xC27A7E.
    case 0xC27A81: cpu.execute_instruction<0x02>(0x00009D, 2); return true;
    // src/battle/ko_target.asm:664 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27A82: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:665 LDX @VIRTUAL02
    case 0xC27A85: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:666 STZ a:battler::afflictions + STATUS_GROUP::SHIELD,X
    case 0xC27A87: cpu.execute_instruction<0x9E>(0x000023, 3); return true;
    // src/battle/ko_target.asm:667 LDX @VIRTUAL02
    case 0xC27A8A: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:668 STZ a:battler::afflictions + STATUS_GROUP::HOMESICKNESS,X
    case 0xC27A8C: cpu.execute_instruction<0x9E>(0x000022, 3); return true;
    // src/battle/ko_target.asm:669 LDX @VIRTUAL02
    case 0xC27A8F: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:670 STZ a:battler::afflictions + STATUS_GROUP::CONCENTRATION,X
    case 0xC27A91: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/ko_target.asm:671 LDX @VIRTUAL02
    case 0xC27A94: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:672 STZ a:battler::afflictions + STATUS_GROUP::STRANGENESS,X
    case 0xC27A96: cpu.execute_instruction<0x9E>(0x000020, 3); return true;
    // src/battle/ko_target.asm:673 LDX @VIRTUAL02
    case 0xC27A99: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:674 STZ a:battler::afflictions + STATUS_GROUP::TEMPORARY,X
    case 0xC27A9B: cpu.execute_instruction<0x9E>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:675 LDX @VIRTUAL02
    case 0xC27A9E: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:676 STZ a:battler::afflictions + STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27AA0: cpu.execute_instruction<0x9E>(0x00001E, 3); return true;
    // src/battle/ko_target.asm:677 LDX @VIRTUAL02
    case 0xC27AA3: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:678 REP #PROC_FLAGS::ACCUM8
    case 0xC27AA5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:679 STZ a:battler::hp_target,X
    case 0xC27AA7: cpu.execute_instruction<0x9E>(0x000013, 3); return true;
    // src/battle/ko_target.asm:680 LDX @VIRTUAL02
    case 0xC27AAA: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:681 LDA a:battler::id,X
    case 0xC27AAC: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    case 0xC27AAF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004D, 2); else cpu.execute_instruction<0xA0>(0x00004D, 3); return true;
    // src/battle/ko_target.asm:682 LDY #.SIZEOF(enemy_data)
    // Overlapping static entry reached from 0xC27AAF.
    case 0xC27AB1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:683 JSL MULT168
    case 0xC27AB2: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:684 CLC
    case 0xC27AB6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    case 0xC27AB7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000049, 2); else cpu.execute_instruction<0x69>(0x000049, 3); return true;
    // src/battle/ko_target.asm:685 ADC #enemy_data::death_type
    // Overlapping static entry reached from 0xC27AB7.
    case 0xC27AB9: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:686 TAX
    case 0xC27ABA: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:687 LDA f:ENEMY_CONFIGURATION_TABLE,X
    case 0xC27ABB: cpu.execute_instruction<0xBF>(0xD5A440, 4); return true;
    // src/battle/ko_target.asm:688 AND #$00FF
    case 0xC27ABF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:688 AND #$00FF
    // Overlapping static entry reached from 0xC27ABF.
    case 0xC27AC1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27AC2: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/ko_target.asm:689 BEQL @UNKNOWN54
    case 0xC27AC4: cpu.execute_instruction<0x4C>(0x007B84, 3); return true;
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    case 0xC27AC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00A41E, 3); return true;
    // src/battle/ko_target.asm:690 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * (FIRST_ENEMY_INDEX))
    // Overlapping static entry reached from 0xC27AC7.
    case 0xC27AC9: cpu.execute_instruction<0xA4>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    case 0xC27ACA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27AC9.
    case 0xC27ACB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/ko_target.asm:691 LDY #FIRST_ENEMY_INDEX
    // Overlapping static entry reached from 0xC27ACA.
    case 0xC27ACC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/ko_target.asm:692 BRA @UNKNOWN44
    case 0xC27ACD: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/ko_target.asm:694 LDA a:battler::consciousness,X
    case 0xC27ACF: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:695 AND #$00FF
    case 0xC27AD2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:695 AND #$00FF
    // Overlapping static entry reached from 0xC27AD2.
    case 0xC27AD4: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:696 BEQ @UNKNOWN43
    case 0xC27AD5: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/ko_target.asm:697 SEP #PROC_FLAGS::ACCUM8
    case 0xC27AD7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:698 LDA #1
    case 0xC27AD9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    case 0xC27ADB: cpu.execute_instruction<0x9D>(0x00004B, 3); return true;
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27AD9.
    case 0xC27ADC: cpu.execute_instruction<0x4B>(0x000000, 1); return true;
    // src/battle/ko_target.asm:699 STA a:battler::use_alt_spritemap,X
    // Overlapping static entry reached from 0xC27ADC.
    case 0xC27ADD: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/ko_target.asm:701 REP #PROC_FLAGS::ACCUM8
    case 0xC27ADE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:702 TXA
    case 0xC27AE0: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:703 CLC
    case 0xC27AE1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    case 0xC27AE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:704 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27AE2.
    case 0xC27AE4: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:705 TAX
    case 0xC27AE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:706 INY
    case 0xC27AE6: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    case 0xC27AE7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/ko_target.asm:708 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27AE7.
    case 0xC27AE9: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:709 BCC @UNKNOWN42
    case 0xC27AEA: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    case 0xC27AEC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000021, 2); else cpu.execute_instruction<0xA9>(0x000021, 3); return true;
    // src/battle/ko_target.asm:710 LDA #SFX::ENEMY_DEFEATED
    // Overlapping static entry reached from 0xC27AEC.
    case 0xC27AEE: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:711 JSL PLAY_SOUND
    case 0xC27AEF: cpu.execute_instruction<0x22>(0xC0ABBF, 4); return true;
    // src/battle/ko_target.asm:712 LDA #10
    case 0xC27AF3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:712 LDA #10
    // Overlapping static entry reached from 0xC27AF3.
    case 0xC27AF5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:713 JSL UNKNOWN_C2FAD8
    case 0xC27AF6: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/battle/ko_target.asm:714 LDA #1
    case 0xC27AFA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:714 LDA #1
    // Overlapping static entry reached from 0xC27AFA.
    case 0xC27AFC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:715 STA @VIRTUAL04
    case 0xC27AFD: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:716 BRA @UNKNOWN47
    case 0xC27AFF: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/ko_target.asm:718 LDA @VIRTUAL04
    case 0xC27B01: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:719 AND #15
    case 0xC27B03: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:719 AND #15
    // Overlapping static entry reached from 0xC27B03.
    case 0xC27B05: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:720 BEQ @UNKNOWN46
    case 0xC27B06: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // src/battle/ko_target.asm:721 LDA #31
    case 0xC27B08: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00001F, 2); else cpu.execute_instruction<0xA9>(0x00001F, 3); return true;
    // src/battle/ko_target.asm:721 LDA #31
    // Overlapping static entry reached from 0xC27B08.
    case 0xC27B0A: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:722 STA @LOCAL00
    case 0xC27B0B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:723 TAY
    case 0xC27B0D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:724 TAX
    case 0xC27B0E: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:725 LDA @VIRTUAL04
    case 0xC27B0F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:726 JSL UNKNOWN_C2FB35
    case 0xC27B11: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/battle/ko_target.asm:728 INC @VIRTUAL04
    case 0xC27B15: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:730 LDA @VIRTUAL04
    case 0xC27B17: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:731 CMP #64
    case 0xC27B19: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/battle/ko_target.asm:731 CMP #64
    // Overlapping static entry reached from 0xC27B19.
    case 0xC27B1B: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:732 BCC @UNKNOWN45
    case 0xC27B1C: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    case 0xC27B1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00000A, 2); else cpu.execute_instruction<0xA9>(0x00000A, 3); return true;
    // src/battle/ko_target.asm:733 LDA #SIXTH_OF_A_SECOND
    // Overlapping static entry reached from 0xC27B1E.
    case 0xC27B20: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:734 JSR WAIT
    case 0xC27B21: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/ko_target.asm:735 LDA #20
    case 0xC27B24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:735 LDA #20
    // Overlapping static entry reached from 0xC27B24.
    case 0xC27B26: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:736 JSL UNKNOWN_C2FAD8
    case 0xC27B27: cpu.execute_instruction<0x22>(0xC2F9F1, 4); return true;
    // src/battle/ko_target.asm:737 LDA #1
    case 0xC27B2B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/ko_target.asm:737 LDA #1
    // Overlapping static entry reached from 0xC27B2B.
    case 0xC27B2D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/ko_target.asm:738 STA @VIRTUAL04
    case 0xC27B2E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/ko_target.asm:739 BRA @UNKNOWN50
    case 0xC27B30: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/ko_target.asm:741 LDA @VIRTUAL04
    case 0xC27B32: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:742 AND #15
    case 0xC27B34: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x00000F, 2); else cpu.execute_instruction<0x29>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:742 AND #15
    // Overlapping static entry reached from 0xC27B34.
    case 0xC27B36: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:743 BEQ @UNKNOWN49
    case 0xC27B37: cpu.execute_instruction<0xF0>(0x00000D, 2); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    case 0xC27B39: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:1275 LDA #$00
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    // Overlapping static entry reached from 0xC27B39.
    case 0xC27B3B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:1282 STA dest
    // Macro caller: src/battle/ko_target.asm:744 STZ_BADOPT @LOCAL00
    case 0xC27B3C: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/ko_target.asm:746 TAY
    case 0xC27B3E: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:747 TAX
    case 0xC27B3F: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:752 LDA @VIRTUAL04
    case 0xC27B40: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:753 JSL UNKNOWN_C2FB35
    case 0xC27B42: cpu.execute_instruction<0x22>(0xC2FA4E, 4); return true;
    // src/battle/ko_target.asm:755 INC @VIRTUAL04
    case 0xC27B46: cpu.execute_instruction<0xE6>(0x000004, 2); return true;
    // src/battle/ko_target.asm:757 LDA @VIRTUAL04
    case 0xC27B48: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/ko_target.asm:758 CMP #64
    case 0xC27B4A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000040, 2); else cpu.execute_instruction<0xC9>(0x000040, 3); return true;
    // src/battle/ko_target.asm:758 CMP #64
    // Overlapping static entry reached from 0xC27B4A.
    case 0xC27B4C: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:759 BCC @UNKNOWN48
    case 0xC27B4D: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:760 LDA #20
    case 0xC27B4F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/ko_target.asm:760 LDA #20
    // Overlapping static entry reached from 0xC27B4F.
    case 0xC27B51: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // src/battle/ko_target.asm:761 JSR WAIT
    case 0xC27B52: cpu.execute_instruction<0x20>(0x0068FD, 3); return true;
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    case 0xC27B55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x00001E, 2); else cpu.execute_instruction<0xA2>(0x00A41E, 3); return true;
    // src/battle/ko_target.asm:762 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 8)
    // Overlapping static entry reached from 0xC27B55.
    case 0xC27B57: cpu.execute_instruction<0xA4>(0x0000A0, 2); return true;
    // src/battle/ko_target.asm:763 LDY #8
    case 0xC27B58: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27B57.
    case 0xC27B59: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/ko_target.asm:763 LDY #8
    // Overlapping static entry reached from 0xC27B58.
    case 0xC27B5A: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/ko_target.asm:764 BRA @UNKNOWN53
    case 0xC27B5B: cpu.execute_instruction<0x80>(0x000018, 2); return true;
    // src/battle/ko_target.asm:766 LDA a:battler::consciousness,X
    case 0xC27B5D: cpu.execute_instruction<0xBD>(0x00000C, 3); return true;
    // src/battle/ko_target.asm:767 AND #$00FF
    case 0xC27B60: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:767 AND #$00FF
    // Overlapping static entry reached from 0xC27B60.
    case 0xC27B62: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:768 BEQ @UNKNOWN52
    case 0xC27B63: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/ko_target.asm:769 SEP #PROC_FLAGS::ACCUM8
    case 0xC27B65: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:770 LDA #STATUS_0::UNCONSCIOUS
    case 0xC27B67: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009D01, 3); return true;
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    case 0xC27B69: cpu.execute_instruction<0x9D>(0x00001D, 3); return true;
    // src/battle/ko_target.asm:771 STA a:battler::afflictions + STATUS_GROUP::PERSISTENT_EASYHEAL,X
    // Overlapping static entry reached from 0xC27B67.
    case 0xC27B6A: cpu.execute_instruction<0x1D>(0x00C200, 3); return true;
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    case 0xC27B6C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:773 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC27B6A.
    case 0xC27B6D: cpu.execute_instruction<0x20>(0x00188A, 3); return true;
    // src/battle/ko_target.asm:774 TXA
    case 0xC27B6E: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:775 CLC
    case 0xC27B6F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    case 0xC27B70: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00004E, 2); else cpu.execute_instruction<0x69>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:776 ADC #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27B70.
    case 0xC27B72: cpu.execute_instruction<0x00>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:777 TAX
    case 0xC27B73: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:778 INY
    case 0xC27B74: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    case 0xC27B75: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000020, 2); else cpu.execute_instruction<0xC0>(0x000020, 3); return true;
    // src/battle/ko_target.asm:780 CPY #BATTLER_COUNT
    // Overlapping static entry reached from 0xC27B75.
    case 0xC27B77: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:781 BCC @UNKNOWN51
    case 0xC27B78: cpu.execute_instruction<0x90>(0x0000E3, 2); return true;
    // src/battle/ko_target.asm:782 JSL UNKNOWN_C2F8F9
    case 0xC27B7A: cpu.execute_instruction<0x22>(0xC2F812, 4); return true;
    // src/battle/ko_target.asm:783 LDA #2
    case 0xC27B7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:783 LDA #2
    // Overlapping static entry reached from 0xC27B7E.
    case 0xC27B80: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/ko_target.asm:784 STA SPECIAL_DEFEAT
    case 0xC27B81: cpu.execute_instruction<0x8D>(0x00ABE3, 3); return true;
    // src/battle/ko_target.asm:786 LDX @VIRTUAL02
    case 0xC27B84: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/ko_target.asm:787 LDA a:battler::npc_id,X
    case 0xC27B86: cpu.execute_instruction<0xBD>(0x00000F, 3); return true;
    // src/battle/ko_target.asm:788 AND #$00FF
    case 0xC27B89: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:788 AND #$00FF
    // Overlapping static entry reached from 0xC27B89.
    case 0xC27B8B: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    case 0xC27B8C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000D5, 2); else cpu.execute_instruction<0xC9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:789 CMP #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27B8C.
    case 0xC27B8E: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27B8F: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/ko_target.asm:790 BNEL @UNKNOWN62
    case 0xC27B91: cpu.execute_instruction<0x4C>(0x007C29, 3); return true;
    // src/battle/ko_target.asm:791 LDY #0
    case 0xC27B94: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/ko_target.asm:791 LDY #0
    // Overlapping static entry reached from 0xC27B94.
    case 0xC27B96: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/ko_target.asm:792 STY @LOCAL07
    case 0xC27B97: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:793 BRA @UNKNOWN58
    case 0xC27B99: cpu.execute_instruction<0x80>(0x000039, 2); return true;
    // src/battle/ko_target.asm:795 TYA
    case 0xC27B9B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    case 0xC27B9C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:796 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27B9C.
    case 0xC27B9E: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:797 JSL MULT168
    case 0xC27B9F: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:798 TAX
    case 0xC27BA3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:799 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27BA4: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/ko_target.asm:800 AND #$00FF
    case 0xC27BA7: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:800 AND #$00FF
    // Overlapping static entry reached from 0xC27BA7.
    case 0xC27BA9: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:801 BEQ @UNKNOWN57
    case 0xC27BAA: cpu.execute_instruction<0xF0>(0x000023, 2); return true;
    // src/battle/ko_target.asm:802 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27BAC: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/ko_target.asm:803 AND #$00FF
    case 0xC27BAF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:803 AND #$00FF
    // Overlapping static entry reached from 0xC27BAF.
    case 0xC27BB1: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:804 BNE @UNKNOWN57
    case 0xC27BB2: cpu.execute_instruction<0xD0>(0x00001B, 2); return true;
    // src/battle/ko_target.asm:805 TXA
    case 0xC27BB4: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:806 CLC
    case 0xC27BB5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27BB6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/battle/ko_target.asm:807 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27BB6.
    case 0xC27BB8: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:808 TAX
    case 0xC27BB9: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:809 INX
    case 0xC27BBA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:810 LDA __BSS_START__,X ; STATUS_GROUP::PERSISTENT_HARDHEAL
    case 0xC27BBB: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/ko_target.asm:811 AND #$00FF
    case 0xC27BBE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:811 AND #$00FF
    // Overlapping static entry reached from 0xC27BBE.
    case 0xC27BC0: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:812 CMP #2
    case 0xC27BC1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:812 CMP #2
    // Overlapping static entry reached from 0xC27BC1.
    case 0xC27BC3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:813 BNE @UNKNOWN57
    case 0xC27BC4: cpu.execute_instruction<0xD0>(0x000009, 2); return true;
    // src/battle/ko_target.asm:814 SEP #PROC_FLAGS::ACCUM8
    case 0xC27BC6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:815 LDA #0
    case 0xC27BC8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    case 0xC27BCA: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/ko_target.asm:816 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC27BC8.
    case 0xC27BCB: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/ko_target.asm:817 BRA @UNKNOWN61
    case 0xC27BCD: cpu.execute_instruction<0x80>(0x000053, 2); return true;
    // src/battle/ko_target.asm:819 LDY @LOCAL07
    case 0xC27BCF: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:820 INY
    case 0xC27BD1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:821 STY @LOCAL07
    case 0xC27BD2: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    case 0xC27BD4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:823 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27BD4.
    case 0xC27BD6: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:824 BCC @UNKNOWN56
    case 0xC27BD7: cpu.execute_instruction<0x90>(0x0000C2, 2); return true;
    // src/battle/ko_target.asm:825 BRA @UNKNOWN61
    case 0xC27BD9: cpu.execute_instruction<0x80>(0x000047, 2); return true;
    // src/battle/ko_target.asm:827 REP #PROC_FLAGS::ACCUM8
    case 0xC27BDB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:828 TYA
    case 0xC27BDD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    case 0xC27BDE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/ko_target.asm:829 LDY #.SIZEOF(battler)
    // Overlapping static entry reached from 0xC27BDE.
    case 0xC27BE0: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:830 JSL MULT168
    case 0xC27BE1: cpu.execute_instruction<0x22>(0xC08FDB, 4); return true;
    // src/battle/ko_target.asm:831 TAX
    case 0xC27BE5: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:832 LDA BATTLERS_TABLE+battler::consciousness,X
    case 0xC27BE6: cpu.execute_instruction<0xBD>(0x00A1BA, 3); return true;
    // src/battle/ko_target.asm:833 AND #$00FF
    case 0xC27BE9: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:833 AND #$00FF
    // Overlapping static entry reached from 0xC27BE9.
    case 0xC27BEB: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/ko_target.asm:834 BEQ @UNKNOWN60
    case 0xC27BEC: cpu.execute_instruction<0xF0>(0x00002F, 2); return true;
    // src/battle/ko_target.asm:835 LDA BATTLERS_TABLE+battler::npc_id,X
    case 0xC27BEE: cpu.execute_instruction<0xBD>(0x00A1BD, 3); return true;
    // src/battle/ko_target.asm:836 AND #$00FF
    case 0xC27BF1: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:836 AND #$00FF
    // Overlapping static entry reached from 0xC27BF1.
    case 0xC27BF3: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:837 BNE @UNKNOWN60
    case 0xC27BF4: cpu.execute_instruction<0xD0>(0x000027, 2); return true;
    // src/battle/ko_target.asm:838 TXA
    case 0xC27BF6: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/ko_target.asm:839 CLC
    case 0xC27BF7: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    case 0xC27BF8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CB, 2); else cpu.execute_instruction<0x69>(0x00A1CB, 3); return true;
    // src/battle/ko_target.asm:840 ADC #.LOWORD(BATTLERS_TABLE) + battler::afflictions
    // Overlapping static entry reached from 0xC27BF8.
    case 0xC27BFA: cpu.execute_instruction<0xA1>(0x0000AA, 2); return true;
    // src/battle/ko_target.asm:841 TAX
    case 0xC27BFB: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/ko_target.asm:842 LDA a:STATUS_GROUP::PERSISTENT_HARDHEAL,X
    case 0xC27BFC: cpu.execute_instruction<0xBD>(0x000001, 3); return true;
    // src/battle/ko_target.asm:843 AND #$00FF
    case 0xC27BFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/ko_target.asm:843 AND #$00FF
    // Overlapping static entry reached from 0xC27BFF.
    case 0xC27C01: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    case 0xC27C02: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/ko_target.asm:844 CMP #STATUS_1::POSSESSED
    // Overlapping static entry reached from 0xC27C02.
    case 0xC27C04: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // src/battle/ko_target.asm:845 BNE @UNKNOWN60
    case 0xC27C05: cpu.execute_instruction<0xD0>(0x000016, 2); return true;
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    case 0xC27C07: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000082, 2); else cpu.execute_instruction<0xA2>(0x00A382, 3); return true;
    // src/battle/ko_target.asm:846 LDX #.LOWORD(BATTLERS_TABLE) + (.SIZEOF(battler) * 6)
    // Overlapping static entry reached from 0xC27C07.
    case 0xC27C09: cpu.execute_instruction<0xA3>(0x0000A9, 2); return true;
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C0A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x0000D5, 3); return true;
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C09.
    case 0xC27C0B: cpu.execute_instruction<0xD5>(0x000000, 2); return true;
    // src/battle/ko_target.asm:847 LDA #ENEMY::TINY_LIL_GHOST
    // Overlapping static entry reached from 0xC27C0A.
    case 0xC27C0C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/ko_target.asm:848 JSL BATTLE_INIT_ENEMY_STATS
    case 0xC27C0D: cpu.execute_instruction<0x22>(0xC2B692, 4); return true;
    // src/battle/ko_target.asm:849 SEP #PROC_FLAGS::ACCUM8
    case 0xC27C11: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/ko_target.asm:850 LDA #ENEMY::TINY_LIL_GHOST
    case 0xC27C13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x008DD5, 3); return true;
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    case 0xC27C15: cpu.execute_instruction<0x8D>(0x00A391, 3); return true;
    // src/battle/ko_target.asm:851 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::npc_id
    // Overlapping static entry reached from 0xC27C13.
    case 0xC27C16: cpu.execute_instruction<0x91>(0x0000A3, 2); return true;
    // src/battle/ko_target.asm:852 LDA #1
    case 0xC27C18: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    case 0xC27C1A: cpu.execute_instruction<0x8D>(0x00A38F, 3); return true;
    // src/battle/ko_target.asm:853 STA BATTLERS_TABLE+(TOTAL_PARTY_COUNT)*.SIZEOF(battler)+battler::has_taken_turn
    // Overlapping static entry reached from 0xC27C18.
    case 0xC27C1B: cpu.execute_instruction<0x8F>(0x22A4A3, 4); return true;
    // src/battle/ko_target.asm:855 LDY @LOCAL07
    case 0xC27C1D: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:856 INY
    case 0xC27C1F: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/ko_target.asm:857 STY @LOCAL07
    case 0xC27C20: cpu.execute_instruction<0x84>(0x000022, 2); return true;
    // src/battle/ko_target.asm:859 LDY @LOCAL07
    case 0xC27C22: cpu.execute_instruction<0xA4>(0x000022, 2); return true;
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    case 0xC27C24: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000006, 2); else cpu.execute_instruction<0xC0>(0x000006, 3); return true;
    // src/battle/ko_target.asm:860 CPY #TOTAL_PARTY_COUNT
    // Overlapping static entry reached from 0xC27C24.
    case 0xC27C26: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/ko_target.asm:861 BCC @UNKNOWN59
    case 0xC27C27: cpu.execute_instruction<0x90>(0x0000B2, 2); return true;
    // src/battle/ko_target.asm:863 REP #PROC_FLAGS::ACCUM8
    case 0xC27C29: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C2B: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/ko_target.asm:864 END_C_FUNCTION
    case 0xC27C2C: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_battle_sprite.asm (source_named).
bool execute_battle_load_battle_sprite_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battle_sprite.asm:3 BEGIN_C_FUNCTION
    case 0xC2EA03: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EA05: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EA06: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EA07: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EA08: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000D6, 2); else cpu.execute_instruction<0x69>(0x00FFD6, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    // Overlapping static entry reached from 0xC2EA08.
    case 0xC2EA0A: cpu.execute_instruction<0xFF>(0xAA685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EA0B: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battle_sprite.asm:16 END_STACK_VARS
    case 0xC2EA0C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:24 TAX
    case 0xC2EA0D: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:25 STX @LOCAL09
    case 0xC2EA0E: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:26 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EA10: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/battle/load_battle_sprite.asm:27 ASL
    case 0xC2EA13: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:28 TAX
    case 0xC2EA14: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:29 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EA15: cpu.execute_instruction<0xAD>(0x00AC87, 3); return true;
    // src/battle/load_battle_sprite.asm:30 STA BATTLE_SPRITEMAP_ALLOCATION_COUNTS,X
    case 0xC2EA18: cpu.execute_instruction<0x9D>(0x00AC8B, 3); return true;
    // src/battle/load_battle_sprite.asm:31 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EA1B: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA1E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA20: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA21: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA22: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA24: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA25: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA26: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:32 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EA27: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:33 CLC
    case 0xC2EA28: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:34 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2EA29: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AB, 2); else cpu.execute_instruction<0x69>(0x00ACAB, 3); return true;
    // src/battle/load_battle_sprite.asm:34 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2EA29.
    case 0xC2EA2B: cpu.execute_instruction<0xAC>(0x002685, 3); return true;
    // src/battle/load_battle_sprite.asm:35 STA @LOCAL08
    case 0xC2EA2C: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:36 LDX @LOCAL09
    case 0xC2EA2E: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:37 TXA
    case 0xC2EA30: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:38 DEC
    case 0xC2EA31: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:39 STA @VIRTUAL04
    case 0xC2EA32: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:40 STA @LOCAL09
    case 0xC2EA34: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:41 LDY #1
    case 0xC2EA36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000001, 2); else cpu.execute_instruction<0xA0>(0x000001, 3); return true;
    // src/battle/load_battle_sprite.asm:41 LDY #1
    // Overlapping static entry reached from 0xC2EA36.
    case 0xC2EA38: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:42 STY @LOCAL07
    case 0xC2EA39: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:43 TYA
    case 0xC2EA3B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:44 STA @VIRTUAL02
    case 0xC2EA3C: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:45 STA @LOCAL06
    case 0xC2EA3E: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:46 LDX #0
    case 0xC2EA40: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:46 LDX #0
    // Overlapping static entry reached from 0xC2EA40.
    case 0xC2EA42: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battle_sprite.asm:47 STX @LOCAL05
    case 0xC2EA43: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:48 JMP @UNKNOWN1
    case 0xC2EA45: cpu.execute_instruction<0x4C>(0x00EADD, 3); return true;
    // src/battle/load_battle_sprite.asm:50 REP #PROC_FLAGS::ACCUM8
    case 0xC2EA48: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:51 TXA
    case 0xC2EA4A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EA4B: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EA4D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EA4E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:52 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EA4F: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:53 STA @LOCAL04
    case 0xC2EA51: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:54 TAY
    case 0xC2EA53: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:55 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EA54: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:56 LDA #224
    case 0xC2EA56: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0091E0, 3); return true;
    // src/battle/load_battle_sprite.asm:57 STA (@LOCAL08),Y ;spritemap::y_offset
    case 0xC2EA58: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:57 STA (@LOCAL08),Y ;spritemap::y_offset
    // Overlapping static entry reached from 0xC2EA56.
    case 0xC2EA59: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/battle/load_battle_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    case 0xC2EA5A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:58 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EA59.
    case 0xC2EA5B: cpu.execute_instruction<0x20>(0x00F6A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EA5C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F6, 2); else cpu.execute_instruction<0xA9>(0x00F3F6, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EA5C.
    case 0xC2EA5E: cpu.execute_instruction<0xF3>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EA5F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EA5E.
    case 0xC2EA60: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EA61: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C3, 2); else cpu.execute_instruction<0xA9>(0x0000C3, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EA60.
    case 0xC2EA62: cpu.execute_instruction<0xC3>(0x000000, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2EA61.
    case 0xC2EA63: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:59 LOADPTR UNKNOWN_C3F8B1, @VIRTUAL06
    case 0xC2EA64: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:60 LDA @LOCAL04
    case 0xC2EA66: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:61 TAY
    case 0xC2EA68: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:62 INY
    case 0xC2EA69: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:63 TXA
    case 0xC2EA6A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:64 CLC
    case 0xC2EA6B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:65 ADC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EA6C: cpu.execute_instruction<0x6D>(0x00AC87, 3); return true;
    // src/battle/load_battle_sprite.asm:66 ASL
    case 0xC2EA6F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:67 PHA
    case 0xC2EA70: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EA71: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EA73: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EA75: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:68 MOVE_INT @VIRTUAL06, @VIRTUAL0A
    case 0xC2EA77: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battle_sprite.asm:69 PLA
    case 0xC2EA79: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:70 CLC
    case 0xC2EA7A: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:71 ADC @VIRTUAL0A
    case 0xC2EA7B: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:72 STA @VIRTUAL0A
    case 0xC2EA7D: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:73 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EA7F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:74 LDA [@VIRTUAL0A]
    case 0xC2EA81: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:75 STA (@LOCAL08),Y ;spritemap::tile
    case 0xC2EA83: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:76 LDA #8
    case 0xC2EA85: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x004808, 3); return true;
    // src/battle/load_battle_sprite.asm:77 PHA
    case 0xC2EA87: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:78 REP #PROC_FLAGS::ACCUM8
    case 0xC2EA88: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:79 TXA
    case 0xC2EA8A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:80 CLC
    case 0xC2EA8B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:81 ADC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2EA8C: cpu.execute_instruction<0x6D>(0x00AC87, 3); return true;
    // src/battle/load_battle_sprite.asm:82 ASL
    case 0xC2EA8F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:83 CLC
    case 0xC2EA90: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:84 ADC @VIRTUAL06
    case 0xC2EA91: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:85 STA @VIRTUAL06
    case 0xC2EA93: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:86 LDA [@VIRTUAL06]
    case 0xC2EA95: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:87 SEP #PROC_FLAGS::INDEX8
    case 0xC2EA97: cpu.execute_instruction<0xE2>(0x000010, 2); return true;
    // src/battle/load_battle_sprite.asm:88 PLY
    case 0xC2EA99: cpu.execute_instruction<0x7A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:89 JSL ASR8_UNKNOWN1
    case 0xC2EA9A: cpu.execute_instruction<0x22>(0xC09233, 4); return true;
    // src/battle/load_battle_sprite.asm:90 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EA9E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:91 STA @VIRTUAL00
    case 0xC2EAA0: cpu.execute_instruction<0x85>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:92 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EAA2: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/battle/load_battle_sprite.asm:93 ASL
    case 0xC2EAA5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:94 CLC
    case 0xC2EAA6: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:95 ADC @VIRTUAL00
    case 0xC2EAA7: cpu.execute_instruction<0x65>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:96 CLC
    case 0xC2EAA9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:97 ADC #32
    case 0xC2EAAA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000020, 2); else cpu.execute_instruction<0x69>(0x004820, 3); return true;
    // src/battle/load_battle_sprite.asm:98 PHA
    case 0xC2EAAC: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:99 REP #PROC_FLAGS::ACCUM8
    case 0xC2EAAD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:100 LDA @LOCAL04
    case 0xC2EAAF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:101 REP #PROC_FLAGS::INDEX8
    case 0xC2EAB1: cpu.execute_instruction<0xC2>(0x000010, 2); return true;
    // src/battle/load_battle_sprite.asm:102 TAY
    case 0xC2EAB3: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:103 INY
    case 0xC2EAB4: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:104 INY
    case 0xC2EAB5: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EAB6: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:106 PLA
    case 0xC2EAB8: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:107 STA (@LOCAL08),Y ;spritemap::flags
    case 0xC2EAB9: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC2EABB: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:109 LDA @LOCAL04
    case 0xC2EABD: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:110 TAY
    case 0xC2EABF: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:111 INY
    case 0xC2EAC0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:112 INY
    case 0xC2EAC1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:113 INY
    case 0xC2EAC2: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:114 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EAC3: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:115 LDA #240
    case 0xC2EAC5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F0, 2); else cpu.execute_instruction<0xA9>(0x0091F0, 3); return true;
    // src/battle/load_battle_sprite.asm:116 STA (@LOCAL08),Y ;;spritemap::x_offset
    case 0xC2EAC7: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:116 STA (@LOCAL08),Y ;;spritemap::x_offset
    // Overlapping static entry reached from 0xC2EAC5.
    case 0xC2EAC8: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/battle/load_battle_sprite.asm:117 REP #PROC_FLAGS::ACCUM8
    case 0xC2EAC9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:117 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EAC8.
    case 0xC2EACA: cpu.execute_instruction<0x20>(0x001EA5, 3); return true;
    // src/battle/load_battle_sprite.asm:118 LDA @LOCAL04
    case 0xC2EACB: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:119 TAY
    case 0xC2EACD: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:120 INY
    case 0xC2EACE: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:121 INY
    case 0xC2EACF: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:122 INY
    case 0xC2EAD0: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:123 INY
    case 0xC2EAD1: cpu.execute_instruction<0xC8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:124 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EAD2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:125 LDA #1
    case 0xC2EAD4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x009101, 3); return true;
    // src/battle/load_battle_sprite.asm:126 STA (@LOCAL08),Y ;spritemap::special_flags
    case 0xC2EAD6: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:126 STA (@LOCAL08),Y ;spritemap::special_flags
    // Overlapping static entry reached from 0xC2EAD4.
    case 0xC2EAD7: cpu.execute_instruction<0x26>(0x0000A6, 2); return true;
    // src/battle/load_battle_sprite.asm:127 LDX @LOCAL05
    case 0xC2EAD8: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:127 LDX @LOCAL05
    // Overlapping static entry reached from 0xC2EAD7.
    case 0xC2EAD9: cpu.execute_instruction<0x20>(0x0086E8, 3); return true;
    // src/battle/load_battle_sprite.asm:128 INX
    case 0xC2EADA: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:129 STX @LOCAL05
    case 0xC2EADB: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:129 STX @LOCAL05
    // Overlapping static entry reached from 0xC2EAD9.
    case 0xC2EADC: cpu.execute_instruction<0x20>(0x0010E0, 3); return true;
    // src/battle/load_battle_sprite.asm:131 CPX #16
    case 0xC2EADD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/load_battle_sprite.asm:131 CPX #16
    // Overlapping static entry reached from 0xC2EADD.
    case 0xC2EADF: cpu.execute_instruction<0x00>(0x0000B0, 2); return true;
    // include/macros.asm:784 BCS :+
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EAE0: cpu.execute_instruction<0xB0>(0x000005, 2); return true;
    // include/macros.asm:785 BEQ :+
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EAE2: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:786 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:132 BCCL @UNKNOWN0
    case 0xC2EAE4: cpu.execute_instruction<0x4C>(0x00EA48, 3); return true;
    // src/battle/load_battle_sprite.asm:133 REP #PROC_FLAGS::ACCUM8
    case 0xC2EAE7: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:134 LDA @LOCAL09
    case 0xC2EAE9: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:135 STA @VIRTUAL04
    case 0xC2EAEB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EAED: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EAEF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EAF0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:136 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EAF1: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:137 TAX
    case 0xC2EAF3: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:138 INX
    case 0xC2EAF4: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:139 INX
    case 0xC2EAF5: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:140 INX
    case 0xC2EAF6: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:141 INX
    case 0xC2EAF7: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:142 LDA f:BATTLE_SPRITES_POINTERS,X
    case 0xC2EAF8: cpu.execute_instruction<0xBF>(0xCE62EE, 4); return true;
    // src/battle/load_battle_sprite.asm:143 AND #$00FF
    case 0xC2EAFC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battle_sprite.asm:143 AND #$00FF
    // Overlapping static entry reached from 0xC2EAFC.
    case 0xC2EAFE: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/load_battle_sprite.asm:144 CMP #2
    case 0xC2EAFF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:144 CMP #2
    // Overlapping static entry reached from 0xC2EAFF.
    case 0xC2EB01: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:145 BEQ @UNKNOWN4
    case 0xC2EB02: cpu.execute_instruction<0xF0>(0x00001A, 2); return true;
    // src/battle/load_battle_sprite.asm:146 CMP #3
    case 0xC2EB04: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:146 CMP #3
    // Overlapping static entry reached from 0xC2EB04.
    case 0xC2EB06: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:147 BEQ @UNKNOWN5
    case 0xC2EB07: cpu.execute_instruction<0xF0>(0x00002D, 2); return true;
    // src/battle/load_battle_sprite.asm:148 CMP #4
    case 0xC2EB09: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:148 CMP #4
    // Overlapping static entry reached from 0xC2EB09.
    case 0xC2EB0B: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:149 BEQ @UNKNOWN6
    case 0xC2EB0C: cpu.execute_instruction<0xF0>(0x000036, 2); return true;
    // src/battle/load_battle_sprite.asm:150 CMP #5
    case 0xC2EB0E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000005, 2); else cpu.execute_instruction<0xC9>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:150 CMP #5
    // Overlapping static entry reached from 0xC2EB0E.
    case 0xC2EB10: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battle_sprite.asm:151 BEQ @UNKNOWN7
    case 0xC2EB11: cpu.execute_instruction<0xF0>(0x000062, 2); return true;
    // src/battle/load_battle_sprite.asm:152 CMP #6
    case 0xC2EB13: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000006, 2); else cpu.execute_instruction<0xC9>(0x000006, 3); return true;
    // src/battle/load_battle_sprite.asm:152 CMP #6
    // Overlapping static entry reached from 0xC2EB13.
    case 0xC2EB15: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battle_sprite.asm:153 BEQL @UNKNOWN8
    case 0xC2EB16: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:153 BEQL @UNKNOWN8
    case 0xC2EB18: cpu.execute_instruction<0x4C>(0x00EBC7, 3); return true;
    // src/battle/load_battle_sprite.asm:154 JMP @UNKNOWN9
    case 0xC2EB1B: cpu.execute_instruction<0x4C>(0x00EC64, 3); return true;
    // src/battle/load_battle_sprite.asm:156 LDA #2
    case 0xC2EB1E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:156 LDA #2
    // Overlapping static entry reached from 0xC2EB1E.
    case 0xC2EB20: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battle_sprite.asm:157 STA @VIRTUAL02
    case 0xC2EB21: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:158 STA @LOCAL06
    case 0xC2EB23: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:159 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB25: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:160 LDA #224
    case 0xC2EB27: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    case 0xC2EB29: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB27.
    case 0xC2EB2A: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:161 LDY #spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB29.
    case 0xC2EB2B: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:162 STA (@LOCAL08),Y
    case 0xC2EB2C: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:163 LDX @LOCAL08
    case 0xC2EB2E: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:164 STZ a:0 + (.SIZEOF(spritemap) * 1) + spritemap::x_offset,X ;not sure why the +0 is necessary here
    case 0xC2EB30: cpu.execute_instruction<0x9E>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:165 JMP @UNKNOWN9
    case 0xC2EB33: cpu.execute_instruction<0x4C>(0x00EC64, 3); return true;
    // src/battle/load_battle_sprite.asm:167 LDY #2
    case 0xC2EB36: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:167 LDY #2
    // Overlapping static entry reached from 0xC2EB36.
    case 0xC2EB38: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:168 STY @LOCAL07
    case 0xC2EB39: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:169 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB3B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:170 LDA #192
    case 0xC2EB3D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0092C0, 3); return true;
    // src/battle/load_battle_sprite.asm:171 STA (@LOCAL08) ;spritemap::y_offset
    case 0xC2EB3F: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:171 STA (@LOCAL08) ;spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB3D.
    case 0xC2EB40: cpu.execute_instruction<0x26>(0x00004C, 2); return true;
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    case 0xC2EB41: cpu.execute_instruction<0x4C>(0x00EC64, 3); return true;
    // src/battle/load_battle_sprite.asm:172 JMP @UNKNOWN9
    // Overlapping static entry reached from 0xC2EB40.
    case 0xC2EB42: cpu.execute_instruction<0x64>(0x0000EC, 2); return true;
    // src/battle/load_battle_sprite.asm:174 LDY #2
    case 0xC2EB44: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:174 LDY #2
    // Overlapping static entry reached from 0xC2EB44.
    case 0xC2EB46: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:175 STY @LOCAL07
    case 0xC2EB47: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:176 STY @VIRTUAL02
    case 0xC2EB49: cpu.execute_instruction<0x84>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:177 LDA @VIRTUAL02
    case 0xC2EB4B: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:178 STA @LOCAL06
    case 0xC2EB4D: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:179 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB4F: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:180 LDA #192
    case 0xC2EB51: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00A0C0, 3); return true;
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EB53: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB51.
    case 0xC2EB54: cpu.execute_instruction<0x05>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:181 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB53.
    case 0xC2EB55: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:182 STA (@LOCAL08),Y
    case 0xC2EB56: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:183 STA (@LOCAL08) ;spritemap::y_offset
    case 0xC2EB58: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:184 LDA #224
    case 0xC2EB5A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    case 0xC2EB5C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB5A.
    case 0xC2EB5D: cpu.execute_instruction<0x0D>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:185 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB5C.
    case 0xC2EB5E: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:186 STA (@LOCAL08),Y
    case 0xC2EB5F: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:186 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EB5D.
    case 0xC2EB60: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EB61: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB60.
    case 0xC2EB62: cpu.execute_instruction<0x03>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:187 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB61.
    case 0xC2EB63: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:188 STA (@LOCAL08),Y
    case 0xC2EB64: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:189 LDA #0
    case 0xC2EB66: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A000, 3); return true;
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2EB68: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB66.
    case 0xC2EB69: cpu.execute_instruction<0x12>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:190 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB68.
    case 0xC2EB6A: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:191 STA (@LOCAL08),Y
    case 0xC2EB6B: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:192 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EB6D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:192 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB6D.
    case 0xC2EB6F: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:193 STA (@LOCAL08),Y
    case 0xC2EB70: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:194 JMP @UNKNOWN9
    case 0xC2EB72: cpu.execute_instruction<0x4C>(0x00EC64, 3); return true;
    // src/battle/load_battle_sprite.asm:197 LDA #4
    case 0xC2EB75: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:197 LDA #4
    // Overlapping static entry reached from 0xC2EB75.
    case 0xC2EB77: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battle_sprite.asm:198 STA @VIRTUAL02
    case 0xC2EB78: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:199 STA @LOCAL06
    case 0xC2EB7A: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:200 LDY #2
    case 0xC2EB7C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // src/battle/load_battle_sprite.asm:200 LDY #2
    // Overlapping static entry reached from 0xC2EB7C.
    case 0xC2EB7E: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:201 STY @LOCAL07
    case 0xC2EB7F: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:202 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EB81: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:203 LDA #192
    case 0xC2EB83: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00A0C0, 3); return true;
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    case 0xC2EB85: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB83.
    case 0xC2EB86: cpu.execute_instruction<0x0F>(0x269100, 4); return true;
    // src/battle/load_battle_sprite.asm:204 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB85.
    case 0xC2EB87: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:205 STA (@LOCAL08),Y
    case 0xC2EB88: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:206 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    case 0xC2EB8A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/load_battle_sprite.asm:206 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB8A.
    case 0xC2EB8C: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:207 STA (@LOCAL08),Y
    case 0xC2EB8D: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:208 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EB8F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:208 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EB8F.
    case 0xC2EB91: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:209 STA (@LOCAL08),Y
    case 0xC2EB92: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:210 STA (@LOCAL08) ;(.SIZEOF(spritemap) * 0) + spritemap::y_offset
    case 0xC2EB94: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:211 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    case 0xC2EB96: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000017, 2); else cpu.execute_instruction<0xA0>(0x000017, 3); return true;
    // src/battle/load_battle_sprite.asm:211 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB96.
    case 0xC2EB98: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:212 STA (@LOCAL08),Y
    case 0xC2EB99: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:213 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EB9B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:213 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EB9B.
    case 0xC2EB9D: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:214 STA (@LOCAL08),Y
    case 0xC2EB9E: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:215 LDA #224
    case 0xC2EBA0: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    case 0xC2EBA2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBA0.
    case 0xC2EBA3: cpu.execute_instruction<0x1C>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:216 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBA2.
    case 0xC2EBA4: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:217 STA (@LOCAL08),Y
    case 0xC2EBA5: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:217 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EBA3.
    case 0xC2EBA6: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EBA7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBA6.
    case 0xC2EBA8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:218 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBA7.
    case 0xC2EBA9: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:219 STA (@LOCAL08),Y
    case 0xC2EBAA: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:220 LDA #0
    case 0xC2EBAC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x00A000, 3); return true;
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    case 0xC2EBAE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000021, 2); else cpu.execute_instruction<0xA0>(0x000021, 3); return true;
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBAC.
    case 0xC2EBAF: cpu.execute_instruction<0x21>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:221 LDY #(.SIZEOF(spritemap) * 6) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBAE.
    case 0xC2EBB0: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:222 STA (@LOCAL08),Y
    case 0xC2EBB1: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:223 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    case 0xC2EBB3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000D, 2); else cpu.execute_instruction<0xA0>(0x00000D, 3); return true;
    // src/battle/load_battle_sprite.asm:223 LDY #(.SIZEOF(spritemap) * 2) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBB3.
    case 0xC2EBB5: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:224 STA (@LOCAL08),Y
    case 0xC2EBB6: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:225 LDA #32
    case 0xC2EBB8: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00A020, 3); return true;
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    case 0xC2EBBA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x000026, 3); return true;
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBB8.
    case 0xC2EBBB: cpu.execute_instruction<0x26>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:226 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBBA.
    case 0xC2EBBC: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:227 STA (@LOCAL08),Y
    case 0xC2EBBD: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:228 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2EBBF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/load_battle_sprite.asm:228 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EBBF.
    case 0xC2EBC1: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:229 STA (@LOCAL08),Y
    case 0xC2EBC2: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:230 JMP @UNKNOWN9
    case 0xC2EBC4: cpu.execute_instruction<0x4C>(0x00EC64, 3); return true;
    // src/battle/load_battle_sprite.asm:232 LDY #4
    case 0xC2EBC7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000004, 2); else cpu.execute_instruction<0xA0>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:232 LDY #4
    // Overlapping static entry reached from 0xC2EBC7.
    case 0xC2EBC9: cpu.execute_instruction<0x00>(0x000084, 2); return true;
    // src/battle/load_battle_sprite.asm:233 STY @LOCAL07
    case 0xC2EBCA: cpu.execute_instruction<0x84>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:234 TYA
    case 0xC2EBCC: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:235 STA @VIRTUAL02
    case 0xC2EBCD: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:236 STA @LOCAL06
    case 0xC2EBCF: cpu.execute_instruction<0x85>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:237 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EBD1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:238 LDA #160
    case 0xC2EBD3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A0, 2); else cpu.execute_instruction<0xA9>(0x00A0A0, 3); return true;
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    case 0xC2EBD5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000F, 2); else cpu.execute_instruction<0xA0>(0x00000F, 3); return true;
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBD3.
    case 0xC2EBD6: cpu.execute_instruction<0x0F>(0x269100, 4); return true;
    // src/battle/load_battle_sprite.asm:239 LDY #(.SIZEOF(spritemap) * 3) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBD5.
    case 0xC2EBD7: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:240 STA (@LOCAL08),Y
    case 0xC2EBD8: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:241 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    case 0xC2EBDA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00000A, 2); else cpu.execute_instruction<0xA0>(0x00000A, 3); return true;
    // src/battle/load_battle_sprite.asm:241 LDY #(.SIZEOF(spritemap) * 2) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBDA.
    case 0xC2EBDC: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:242 STA (@LOCAL08),Y
    case 0xC2EBDD: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:243 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    case 0xC2EBDF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000005, 2); else cpu.execute_instruction<0xA0>(0x000005, 3); return true;
    // src/battle/load_battle_sprite.asm:243 LDY #(.SIZEOF(spritemap) * 1) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBDF.
    case 0xC2EBE1: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:244 STA (@LOCAL08),Y
    case 0xC2EBE2: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:245 STA (@LOCAL08) ;(.SIZEOF(spritemap) * 0) + spritemap::y_offset
    case 0xC2EBE4: cpu.execute_instruction<0x92>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:246 LDA #192
    case 0xC2EBE6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x00A0C0, 3); return true;
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    case 0xC2EBE8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000023, 2); else cpu.execute_instruction<0xA0>(0x000023, 3); return true;
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBE6.
    case 0xC2EBE9: cpu.execute_instruction<0x23>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:247 LDY #(.SIZEOF(spritemap) * 7) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBE8.
    case 0xC2EBEA: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:248 STA (@LOCAL08),Y
    case 0xC2EBEB: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:249 LDY #(.SIZEOF(spritemap) * 6) + spritemap::y_offset
    case 0xC2EBED: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001E, 2); else cpu.execute_instruction<0xA0>(0x00001E, 3); return true;
    // src/battle/load_battle_sprite.asm:249 LDY #(.SIZEOF(spritemap) * 6) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBED.
    case 0xC2EBEF: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:250 STA (@LOCAL08),Y
    case 0xC2EBF0: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:251 LDY #(.SIZEOF(spritemap) * 5) + spritemap::y_offset
    case 0xC2EBF2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000019, 2); else cpu.execute_instruction<0xA0>(0x000019, 3); return true;
    // src/battle/load_battle_sprite.asm:251 LDY #(.SIZEOF(spritemap) * 5) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBF2.
    case 0xC2EBF4: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:252 STA (@LOCAL08),Y
    case 0xC2EBF5: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:253 LDY #(.SIZEOF(spritemap) * 4) + spritemap::y_offset
    case 0xC2EBF7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000014, 2); else cpu.execute_instruction<0xA0>(0x000014, 3); return true;
    // src/battle/load_battle_sprite.asm:253 LDY #(.SIZEOF(spritemap) * 4) + spritemap::y_offset
    // Overlapping static entry reached from 0xC2EBF7.
    case 0xC2EBF9: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:254 STA (@LOCAL08),Y
    case 0xC2EBFA: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:255 LDX @LOCAL08
    case 0xC2EBFC: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:256 STZ a:0 + (.SIZEOF(spritemap) * 15) + spritemap::y_offset,X
    case 0xC2EBFE: cpu.execute_instruction<0x9E>(0x00004B, 3); return true;
    // src/battle/load_battle_sprite.asm:257 LDX @LOCAL08
    case 0xC2EC01: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:258 STZ a:0 + (.SIZEOF(spritemap) * 14) + spritemap::y_offset,X
    case 0xC2EC03: cpu.execute_instruction<0x9E>(0x000046, 3); return true;
    // src/battle/load_battle_sprite.asm:259 LDX @LOCAL08
    case 0xC2EC06: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:260 STZ a:0 + (.SIZEOF(spritemap) * 13) + spritemap::y_offset,X
    case 0xC2EC08: cpu.execute_instruction<0x9E>(0x000041, 3); return true;
    // src/battle/load_battle_sprite.asm:261 LDX @LOCAL08
    case 0xC2EC0B: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:262 STZ a:0 + (.SIZEOF(spritemap) * 12) + spritemap::y_offset,X
    case 0xC2EC0D: cpu.execute_instruction<0x9E>(0x00003C, 3); return true;
    // src/battle/load_battle_sprite.asm:263 LDY #(.SIZEOF(spritemap) * 12) + spritemap::x_offset
    case 0xC2EC10: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003F, 2); else cpu.execute_instruction<0xA0>(0x00003F, 3); return true;
    // src/battle/load_battle_sprite.asm:263 LDY #(.SIZEOF(spritemap) * 12) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC10.
    case 0xC2EC12: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:264 STA (@LOCAL08),Y
    case 0xC2EC13: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:265 LDY #(.SIZEOF(spritemap) * 8) + spritemap::x_offset
    case 0xC2EC15: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002B, 2); else cpu.execute_instruction<0xA0>(0x00002B, 3); return true;
    // src/battle/load_battle_sprite.asm:265 LDY #(.SIZEOF(spritemap) * 8) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC15.
    case 0xC2EC17: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:266 STA (@LOCAL08),Y
    case 0xC2EC18: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:267 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    case 0xC2EC1A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000017, 2); else cpu.execute_instruction<0xA0>(0x000017, 3); return true;
    // src/battle/load_battle_sprite.asm:267 LDY #(.SIZEOF(spritemap) * 4) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC1A.
    case 0xC2EC1C: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:268 STA (@LOCAL08),Y
    case 0xC2EC1D: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:269 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    case 0xC2EC1F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000003, 2); else cpu.execute_instruction<0xA0>(0x000003, 3); return true;
    // src/battle/load_battle_sprite.asm:269 LDY #(.SIZEOF(spritemap) * 0) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC1F.
    case 0xC2EC21: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:270 STA (@LOCAL08),Y
    case 0xC2EC22: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:271 LDA #224
    case 0xC2EC24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x00A0E0, 3); return true;
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    case 0xC2EC26: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000044, 2); else cpu.execute_instruction<0xA0>(0x000044, 3); return true;
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC24.
    case 0xC2EC27: cpu.execute_instruction<0x44>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:272 LDY #(.SIZEOF(spritemap) * 13) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC26.
    case 0xC2EC28: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:273 STA (@LOCAL08),Y
    case 0xC2EC29: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:273 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC27.
    case 0xC2EC2A: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    case 0xC2EC2B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000030, 2); else cpu.execute_instruction<0xA0>(0x000030, 3); return true;
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC2A.
    case 0xC2EC2C: cpu.execute_instruction<0x30>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:274 LDY #(.SIZEOF(spritemap) * 9) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC2B.
    case 0xC2EC2D: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:275 STA (@LOCAL08),Y
    case 0xC2EC2E: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:276 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    case 0xC2EC30: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00001C, 2); else cpu.execute_instruction<0xA0>(0x00001C, 3); return true;
    // src/battle/load_battle_sprite.asm:276 LDY #(.SIZEOF(spritemap) * 5) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC30.
    case 0xC2EC32: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:277 STA (@LOCAL08),Y
    case 0xC2EC33: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:278 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    case 0xC2EC35: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000008, 2); else cpu.execute_instruction<0xA0>(0x000008, 3); return true;
    // src/battle/load_battle_sprite.asm:278 LDY #(.SIZEOF(spritemap) * 1) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC35.
    case 0xC2EC37: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:279 STA (@LOCAL08),Y
    case 0xC2EC38: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:280 LDX @LOCAL08
    case 0xC2EC3A: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:281 STZ a:0 + (.SIZEOF(spritemap) * 14) + spritemap::x_offset,X
    case 0xC2EC3C: cpu.execute_instruction<0x9E>(0x000049, 3); return true;
    // src/battle/load_battle_sprite.asm:282 LDX @LOCAL08
    case 0xC2EC3F: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:283 STZ a:0 + (.SIZEOF(spritemap) * 10) + spritemap::x_offset,X
    case 0xC2EC41: cpu.execute_instruction<0x9E>(0x000035, 3); return true;
    // src/battle/load_battle_sprite.asm:284 LDX @LOCAL08
    case 0xC2EC44: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:285 STZ a:0 + (.SIZEOF(spritemap) * 6) + spritemap::x_offset,X
    case 0xC2EC46: cpu.execute_instruction<0x9E>(0x000021, 3); return true;
    // src/battle/load_battle_sprite.asm:286 LDX @LOCAL08
    case 0xC2EC49: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:287 STZ a:0 + (.SIZEOF(spritemap) * 2) + spritemap::x_offset,X
    case 0xC2EC4B: cpu.execute_instruction<0x9E>(0x00000D, 3); return true;
    // src/battle/load_battle_sprite.asm:288 LDA #32
    case 0xC2EC4E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00A020, 3); return true;
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    case 0xC2EC50: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00004E, 2); else cpu.execute_instruction<0xA0>(0x00004E, 3); return true;
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC4E.
    case 0xC2EC51: cpu.execute_instruction<0x4E>(0x009100, 3); return true;
    // src/battle/load_battle_sprite.asm:289 LDY #(.SIZEOF(spritemap) * 15) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC50.
    case 0xC2EC52: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:290 STA (@LOCAL08),Y
    case 0xC2EC53: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:290 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC51.
    case 0xC2EC54: cpu.execute_instruction<0x26>(0x0000A0, 2); return true;
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    case 0xC2EC55: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00003A, 2); else cpu.execute_instruction<0xA0>(0x00003A, 3); return true;
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC54.
    case 0xC2EC56: cpu.execute_instruction<0x3A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:291 LDY #(.SIZEOF(spritemap) * 11) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC55.
    case 0xC2EC57: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:292 STA (@LOCAL08),Y
    case 0xC2EC58: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:293 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    case 0xC2EC5A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000026, 2); else cpu.execute_instruction<0xA0>(0x000026, 3); return true;
    // src/battle/load_battle_sprite.asm:293 LDY #(.SIZEOF(spritemap) * 7) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC5A.
    case 0xC2EC5C: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:294 STA (@LOCAL08),Y
    case 0xC2EC5D: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:295 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    case 0xC2EC5F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000012, 2); else cpu.execute_instruction<0xA0>(0x000012, 3); return true;
    // src/battle/load_battle_sprite.asm:295 LDY #(.SIZEOF(spritemap) * 3) + spritemap::x_offset
    // Overlapping static entry reached from 0xC2EC5F.
    case 0xC2EC61: cpu.execute_instruction<0x00>(0x000091, 2); return true;
    // src/battle/load_battle_sprite.asm:296 STA (@LOCAL08),Y
    case 0xC2EC62: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:298 LDY @LOCAL07
    case 0xC2EC64: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:299 REP #PROC_FLAGS::ACCUM8
    case 0xC2EC66: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:300 LDA @VIRTUAL02
    case 0xC2EC68: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:301 JSL MULT16
    case 0xC2EC6A: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EC6E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EC70: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EC71: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:302 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2EC72: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:303 TAY
    case 0xC2EC74: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:304 DEY
    case 0xC2EC75: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:305 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EC76: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:306 LDA #$81
    case 0xC2EC78: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000081, 2); else cpu.execute_instruction<0xA9>(0x009181, 3); return true;
    // src/battle/load_battle_sprite.asm:307 STA (@LOCAL08),Y
    case 0xC2EC7A: cpu.execute_instruction<0x91>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:307 STA (@LOCAL08),Y
    // Overlapping static entry reached from 0xC2EC78.
    case 0xC2EC7B: cpu.execute_instruction<0x26>(0x0000C2, 2); return true;
    // src/battle/load_battle_sprite.asm:308 REP #PROC_FLAGS::ACCUM8
    case 0xC2EC7C: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:308 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2EC7B.
    case 0xC2EC7D: cpu.execute_instruction<0x20>(0x0089AD, 3); return true;
    // src/battle/load_battle_sprite.asm:309 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2EC7E: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/battle/load_battle_sprite.asm:309 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    // Overlapping static entry reached from 0xC2EC7D.
    case 0xC2EC80: cpu.execute_instruction<0xAC>(0x000485, 3); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC81: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC83: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC84: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC85: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC87: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC88: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC89: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:310 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2EC8A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:311 STA @LOCAL04
    case 0xC2EC8B: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:312 LDA #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    case 0xC2EC8D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EB, 2); else cpu.execute_instruction<0xA9>(0x00ADEB, 3); return true;
    // src/battle/load_battle_sprite.asm:312 LDA #.LOWORD(ALT_BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2EC8D.
    case 0xC2EC8F: cpu.execute_instruction<0xAD>(0x002085, 3); return true;
    // src/battle/load_battle_sprite.asm:313 STA @LOCAL20ALT2
    case 0xC2EC90: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:314 LDA @LOCAL04
    case 0xC2EC92: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:315 CLC
    case 0xC2EC94: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:316 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    case 0xC2EC95: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000AB, 2); else cpu.execute_instruction<0x69>(0x00ACAB, 3); return true;
    // src/battle/load_battle_sprite.asm:316 ADC #.LOWORD(BATTLE_SPRITEMAPS)
    // Overlapping static entry reached from 0xC2EC95.
    case 0xC2EC97: cpu.execute_instruction<0xAC>(0x000685, 3); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2EC98: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2EC9A: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2EC9B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2EC9D: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2EC9E: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battle_sprite.asm:317 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2ECA0: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battle_sprite.asm:318 REP #PROC_FLAGS::ACCUM8
    case 0xC2ECA2: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ECA4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ECA6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ECA8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:319 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2ECAA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battle_sprite.asm:320 LDX #80
    case 0xC2ECAC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000050, 2); else cpu.execute_instruction<0xA2>(0x000050, 3); return true;
    // src/battle/load_battle_sprite.asm:320 LDX #80
    // Overlapping static entry reached from 0xC2ECAC.
    case 0xC2ECAE: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/load_battle_sprite.asm:321 LDA @LOCAL04
    case 0xC2ECAF: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:322 CLC
    case 0xC2ECB1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:323 ADC @LOCAL20ALT2
    case 0xC2ECB2: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:324 JSL MEMCPY16
    case 0xC2ECB4: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battle_sprite.asm:325 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ECB8: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // include/macros.asm:703 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECBB: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:704 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECBD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:705 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECBE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:706 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECBF: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:707 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECC1: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:708 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECC2: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:709 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECC3: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:710 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:326 OPTIMIZED_MULT @VIRTUAL04, 80
    case 0xC2ECC4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:327 CLC
    case 0xC2ECC5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:328 ADC @LOCAL20ALT2
    case 0xC2ECC6: cpu.execute_instruction<0x65>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:329 STA @LOCAL04
    case 0xC2ECC8: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:330 LDX #0
    case 0xC2ECCA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:330 LDX #0
    // Overlapping static entry reached from 0xC2ECCA.
    case 0xC2ECCC: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/load_battle_sprite.asm:331 BRA @UNKNOWN11
    case 0xC2ECCD: cpu.execute_instruction<0x80>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:333 REP #PROC_FLAGS::ACCUM8
    case 0xC2ECCF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:334 TXA
    case 0xC2ECD1: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ECD2: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ECD4: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ECD5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:335 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ECD6: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:336 STA @VIRTUAL02
    case 0xC2ECD8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:337 INC @VIRTUAL02
    case 0xC2ECDA: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:338 INC @VIRTUAL02
    case 0xC2ECDC: cpu.execute_instruction<0xE6>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:339 LDA @LOCAL04
    case 0xC2ECDE: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // src/battle/load_battle_sprite.asm:340 CLC
    case 0xC2ECE0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:341 ADC @VIRTUAL02
    case 0xC2ECE1: cpu.execute_instruction<0x65>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:342 STA @LOCAL05
    case 0xC2ECE3: cpu.execute_instruction<0x85>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:343 SEP #PROC_FLAGS::ACCUM8
    case 0xC2ECE5: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:344 LDA (@LOCAL05)
    case 0xC2ECE7: cpu.execute_instruction<0xB2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:345 CLC
    case 0xC2ECE9: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:346 ADC #8
    case 0xC2ECEA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000008, 2); else cpu.execute_instruction<0x69>(0x009208, 3); return true;
    // src/battle/load_battle_sprite.asm:347 STA (@LOCAL05)
    case 0xC2ECEC: cpu.execute_instruction<0x92>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:347 STA (@LOCAL05)
    // Overlapping static entry reached from 0xC2ECEA.
    case 0xC2ECED: cpu.execute_instruction<0x20>(0x00E0E8, 3); return true;
    // src/battle/load_battle_sprite.asm:348 INX
    case 0xC2ECEE: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:350 CPX #16
    case 0xC2ECEF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000010, 2); else cpu.execute_instruction<0xE0>(0x000010, 3); return true;
    // src/battle/load_battle_sprite.asm:350 CPX #16
    // Overlapping static entry reached from 0xC2ECED.
    case 0xC2ECF0: cpu.execute_instruction<0x10>(0x000000, 2); return true;
    // src/battle/load_battle_sprite.asm:350 CPX #16
    // Overlapping static entry reached from 0xC2ECEF.
    case 0xC2ECF1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/load_battle_sprite.asm:351 BCC @UNKNOWN10
    case 0xC2ECF2: cpu.execute_instruction<0x90>(0x0000DB, 2); return true;
    // src/battle/load_battle_sprite.asm:352 REP #PROC_FLAGS::ACCUM8
    case 0xC2ECF4: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:353 LDA @LOCAL06
    case 0xC2ECF6: cpu.execute_instruction<0xA5>(0x000022, 2); return true;
    // src/battle/load_battle_sprite.asm:354 STA @VIRTUAL02
    case 0xC2ECF8: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:355 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ECFA: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/battle/load_battle_sprite.asm:356 ASL
    case 0xC2ECFD: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:357 TAX
    case 0xC2ECFE: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:358 LDA @VIRTUAL02
    case 0xC2ECFF: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:359 STA CURRENT_BATTLE_SPRITE_WIDTHS,X
    case 0xC2ED01: cpu.execute_instruction<0x9D>(0x00AC9B, 3); return true;
    // src/battle/load_battle_sprite.asm:360 LDY @LOCAL07
    case 0xC2ED04: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:361 LDA CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ED06: cpu.execute_instruction<0xAD>(0x00AC89, 3); return true;
    // src/battle/load_battle_sprite.asm:362 ASL
    case 0xC2ED09: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:363 TAX
    case 0xC2ED0A: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:364 TYA
    case 0xC2ED0B: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:365 STA CURRENT_BATTLE_SPRITE_HEIGHTS,X
    case 0xC2ED0C: cpu.execute_instruction<0x9D>(0x00ACA3, 3); return true;
    // src/battle/load_battle_sprite.asm:366 INC CURRENT_BATTLE_SPRITES_ALLOCATED
    case 0xC2ED0F: cpu.execute_instruction<0xEE>(0x00AC89, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2ED12: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ED12.
    case 0xC2ED14: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2ED15: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2ED17: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ED17.
    case 0xC2ED19: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:367 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2ED1A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED1C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED1E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED20: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:368 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED22: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:370 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL06
    case 0xC2ED24: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000EE, 2); else cpu.execute_instruction<0xA9>(0x0062EE, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:370 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ED24.
    case 0xC2ED26: cpu.execute_instruction<0x62>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:370 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL06
    case 0xC2ED27: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:370 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL06
    case 0xC2ED29: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CE, 2); else cpu.execute_instruction<0xA9>(0x0000CE, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:370 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2ED29.
    case 0xC2ED2B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:370 LOADPTR BATTLE_SPRITES_POINTERS, @VIRTUAL06
    case 0xC2ED2C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:374 LDA @LOCAL09
    case 0xC2ED2E: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/load_battle_sprite.asm:375 STA @VIRTUAL04
    case 0xC2ED30: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:529 STA scratch
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED32: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:530 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED34: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:531 ASL
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED35: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:532 ADC scratch
    // Macro caller: src/battle/load_battle_sprite.asm:376 OPTIMIZED_MULT @VIRTUAL04, 5
    case 0xC2ED36: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battle_sprite.asm:377 CLC
    case 0xC2ED38: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:379 ADC @VIRTUAL06
    case 0xC2ED39: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:380 STA @VIRTUAL06
    case 0xC2ED3B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2ED3D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2ED3D.
    case 0xC2ED3F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2ED40: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2ED42: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2ED43: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2ED45: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:381 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2ED47: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:382 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2ED49: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:382 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2ED4B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:382 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2ED4D: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:382 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2ED4F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2ED51: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2ED53: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2ED55: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:389 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2ED57: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ED59: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ED5B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ED5D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:390 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2ED5F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battle_sprite.asm:391 JSL DECOMP
    case 0xC2ED61: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED65: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED67: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED69: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:392 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2ED6B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // src/battle/load_battle_sprite.asm:393 LDY @LOCAL07
    case 0xC2ED6D: cpu.execute_instruction<0xA4>(0x000024, 2); return true;
    // src/battle/load_battle_sprite.asm:394 LDA @VIRTUAL02
    case 0xC2ED6F: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battle_sprite.asm:395 JSL MULT16
    case 0xC2ED71: cpu.execute_instruction<0x22>(0xC09014, 4); return true;
    // src/battle/load_battle_sprite.asm:396 TAY
    case 0xC2ED75: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:397 JMP @UNKNOWN17
    case 0xC2ED76: cpu.execute_instruction<0x4C>(0x00EDF4, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2ED79: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2ED79.
    case 0xC2ED7B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2ED7C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2ED7E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2ED7E.
    case 0xC2ED80: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battle_sprite.asm:399 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2ED81: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battle_sprite.asm:400 LDA CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2ED83: cpu.execute_instruction<0xAD>(0x00AC87, 3); return true;
    // src/battle/load_battle_sprite.asm:401 ASL
    case 0xC2ED86: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:402 TAX
    case 0xC2ED87: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:403 LDA f:UNKNOWN_C3F871,X
    case 0xC2ED88: cpu.execute_instruction<0xBF>(0xC3F3B6, 4); return true;
    // src/battle/load_battle_sprite.asm:404 CLC
    case 0xC2ED8C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:405 ADC @VIRTUAL0A
    case 0xC2ED8D: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:406 STA @VIRTUAL0A
    case 0xC2ED8F: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:407 INC CURRENT_BATTLE_SPRITEMAPS_ALLOCATED
    case 0xC2ED91: cpu.execute_instruction<0xEE>(0x00AC87, 3); return true;
    // src/battle/load_battle_sprite.asm:408 LDA #0
    case 0xC2ED94: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:408 LDA #0
    // Overlapping static entry reached from 0xC2ED94.
    case 0xC2ED96: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battle_sprite.asm:409 STA @LOCAL20ALT
    case 0xC2ED97: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:410 BRA @UNKNOWN16
    case 0xC2ED99: cpu.execute_instruction<0x80>(0x000054, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2ED9B: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2ED9D: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2ED9F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:412 MOVE_INT @VIRTUAL0A, @VIRTUAL06
    case 0xC2EDA1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDA3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDA5: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDA7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:413 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDA9: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battle_sprite.asm:414 LDX #0
    case 0xC2EDAB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:414 LDX #0
    // Overlapping static entry reached from 0xC2EDAB.
    case 0xC2EDAD: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/load_battle_sprite.asm:415 BRA @UNKNOWN15
    case 0xC2EDAE: cpu.execute_instruction<0x80>(0x00002D, 2); return true;
    // src/battle/load_battle_sprite.asm:417 SEP #PROC_FLAGS::ACCUM8
    case 0xC2EDB0: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battle_sprite.asm:418 LDA [@LOCAL03]
    case 0xC2EDB2: cpu.execute_instruction<0xA7>(0x00001A, 2); return true;
    // src/battle/load_battle_sprite.asm:419 STA [@VIRTUAL06]
    case 0xC2EDB4: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battle_sprite.asm:420 REP #PROC_FLAGS::ACCUM8
    case 0xC2EDB6: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EDB8: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EDBA: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EDBC: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:421 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2EDBE: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:422 INC @VIRTUAL06
    case 0xC2EDC0: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EDC2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EDC4: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EDC6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:423 MOVE_INT @VIRTUAL06, @LOCAL03
    case 0xC2EDC8: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EDCA: cpu.execute_instruction<0xA5>(0x000016, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EDCC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EDCE: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:424 MOVE_INT @LOCAL02, @VIRTUAL06
    case 0xC2EDD0: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battle_sprite.asm:425 INC @VIRTUAL06
    case 0xC2EDD2: cpu.execute_instruction<0xE6>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDD4: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDD6: cpu.execute_instruction<0x85>(0x000016, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDD8: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battle_sprite.asm:426 MOVE_INT @VIRTUAL06, @LOCAL02
    case 0xC2EDDA: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battle_sprite.asm:427 INX
    case 0xC2EDDC: cpu.execute_instruction<0xE8>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:429 CPX #$0080
    case 0xC2EDDD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000080, 2); else cpu.execute_instruction<0xE0>(0x000080, 3); return true;
    // src/battle/load_battle_sprite.asm:429 CPX #$0080
    // Overlapping static entry reached from 0xC2EDDD.
    case 0xC2EDDF: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/load_battle_sprite.asm:430 BCC @UNKNOWN14
    case 0xC2EDE0: cpu.execute_instruction<0x90>(0x0000CE, 2); return true;
    // src/battle/load_battle_sprite.asm:431 LDA #$0200
    case 0xC2EDE2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000200, 3); return true;
    // src/battle/load_battle_sprite.asm:431 LDA #$0200
    // Overlapping static entry reached from 0xC2EDE2.
    case 0xC2EDE4: cpu.execute_instruction<0x02>(0x000018, 2); return true;
    // src/battle/load_battle_sprite.asm:432 CLC
    case 0xC2EDE5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:433 ADC @VIRTUAL0A
    case 0xC2EDE6: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:434 STA @VIRTUAL0A
    case 0xC2EDE8: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battle_sprite.asm:435 LDA @LOCAL20ALT
    case 0xC2EDEA: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:436 INC
    case 0xC2EDEC: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:437 STA @LOCAL20ALT
    case 0xC2EDED: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battle_sprite.asm:439 CMP #4
    case 0xC2EDEF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/load_battle_sprite.asm:439 CMP #4
    // Overlapping static entry reached from 0xC2EDEF.
    case 0xC2EDF1: cpu.execute_instruction<0x00>(0x000090, 2); return true;
    // src/battle/load_battle_sprite.asm:440 BCC @UNKNOWN13
    case 0xC2EDF2: cpu.execute_instruction<0x90>(0x0000A7, 2); return true;
    // src/battle/load_battle_sprite.asm:442 TYX
    case 0xC2EDF4: cpu.execute_instruction<0xBB>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:443 DEY
    case 0xC2EDF5: cpu.execute_instruction<0x88>(0x000000, 1); return true;
    // src/battle/load_battle_sprite.asm:444 CPX #0
    case 0xC2EDF6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xE0>(0x000000, 2); else cpu.execute_instruction<0xE0>(0x000000, 3); return true;
    // src/battle/load_battle_sprite.asm:444 CPX #0
    // Overlapping static entry reached from 0xC2EDF6.
    case 0xC2EDF8: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battle_sprite.asm:445 BNEL @UNKNOWN12
    case 0xC2EDF9: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battle_sprite.asm:445 BNEL @UNKNOWN12
    case 0xC2EDFB: cpu.execute_instruction<0x4C>(0x00ED79, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battle_sprite.asm:446 END_C_FUNCTION
    case 0xC2EDFE: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:28 RTS
    // Macro caller: src/battle/load_battle_sprite.asm:446 END_C_FUNCTION
    case 0xC2EDFF: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_battlebg-jp.asm (source_named).
bool execute_battle_load_battlebg_jp_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_battlebg-jp.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2D0D5: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0D7: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0D8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0D9: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0DA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000CE, 2); else cpu.execute_instruction<0x69>(0x00FFCE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    // Overlapping static entry reached from 0xC2D0DA.
    case 0xC2D0DC: cpu.execute_instruction<0xFF>(0x84685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0DD: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:20 END_STACK_VARS
    case 0xC2D0DE: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:21 STY @LOCAL0B
    case 0xC2D0DF: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:21 STY @LOCAL0B
    // Overlapping static entry reached from 0xC2D0DC.
    case 0xC2D0E0: cpu.execute_instruction<0x30>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:22 STX @VIRTUAL04
    case 0xC2D0E1: cpu.execute_instruction<0x86>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:22 STX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D0E0.
    case 0xC2D0E2: cpu.execute_instruction<0x04>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:23 STX @LOCAL0A
    case 0xC2D0E3: cpu.execute_instruction<0x86>(0x00002E, 2); return true;
    // src/battle/load_battlebg-jp.asm:23 STX @LOCAL0A
    // Overlapping static entry reached from 0xC2D0E2.
    case 0xC2D0E4: cpu.execute_instruction<0x2E>(0x000285, 3); return true;
    // src/battle/load_battlebg-jp.asm:24 STA @VIRTUAL02
    case 0xC2D0E5: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:25 STZ RED_FLASH_DURATION
    case 0xC2D0E7: cpu.execute_instruction<0x9C>(0x00AF75, 3); return true;
    // src/battle/load_battlebg-jp.asm:26 STZ GREEN_FLASH_DURATION
    case 0xC2D0EA: cpu.execute_instruction<0x9C>(0x00AF73, 3); return true;
    // src/battle/load_battlebg-jp.asm:27 STZ SHAKE_DURATION
    case 0xC2D0ED: cpu.execute_instruction<0x9C>(0x00AF69, 3); return true;
    // src/battle/load_battlebg-jp.asm:28 STZ WOBBLE_DURATION
    case 0xC2D0F0: cpu.execute_instruction<0x9C>(0x00AF67, 3); return true;
    // src/battle/load_battlebg-jp.asm:29 STZ SCREEN_EFFECT_MINIMUM_WAIT_FRAMES
    case 0xC2D0F3: cpu.execute_instruction<0x9C>(0x00AF65, 3); return true;
    // src/battle/load_battlebg-jp.asm:30 STZ VERTICAL_SHAKE_HOLD_DURATION
    case 0xC2D0F6: cpu.execute_instruction<0x9C>(0x00AF63, 3); return true;
    // src/battle/load_battlebg-jp.asm:31 STZ VERTICAL_SHAKE_DURATION
    case 0xC2D0F9: cpu.execute_instruction<0x9C>(0x00AF61, 3); return true;
    // src/battle/load_battlebg-jp.asm:32 LDA @LOCAL0B
    case 0xC2D0FC: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:33 AND #$0003
    case 0xC2D0FE: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000003, 2); else cpu.execute_instruction<0x29>(0x000003, 3); return true;
    // src/battle/load_battlebg-jp.asm:33 AND #$0003
    // Overlapping static entry reached from 0xC2D0FE.
    case 0xC2D100: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg-jp.asm:34 BEQ @NO_LETTERBOX
    case 0xC2D101: cpu.execute_instruction<0xF0>(0x000011, 2); return true;
    // src/battle/load_battlebg-jp.asm:35 CMP #LETTERBOX_STYLE::LARGE
    case 0xC2D103: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000001, 2); else cpu.execute_instruction<0xC9>(0x000001, 3); return true;
    // src/battle/load_battlebg-jp.asm:35 CMP #LETTERBOX_STYLE::LARGE
    // Overlapping static entry reached from 0xC2D103.
    case 0xC2D105: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg-jp.asm:36 BEQ @LARGE_LETTERBOX
    case 0xC2D106: cpu.execute_instruction<0xF0>(0x000017, 2); return true;
    // src/battle/load_battlebg-jp.asm:37 CMP #LETTERBOX_STYLE::MEDIUM
    case 0xC2D108: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000002, 2); else cpu.execute_instruction<0xC9>(0x000002, 3); return true;
    // src/battle/load_battlebg-jp.asm:37 CMP #LETTERBOX_STYLE::MEDIUM
    // Overlapping static entry reached from 0xC2D108.
    case 0xC2D10A: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg-jp.asm:38 BEQ @MEDIUM_LETTERBOX
    case 0xC2D10B: cpu.execute_instruction<0xF0>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:39 CMP #LETTERBOX_STYLE::SMALL
    case 0xC2D10D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000003, 2); else cpu.execute_instruction<0xC9>(0x000003, 3); return true;
    // src/battle/load_battlebg-jp.asm:39 CMP #LETTERBOX_STYLE::SMALL
    // Overlapping static entry reached from 0xC2D10D.
    case 0xC2D10F: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg-jp.asm:40 BEQ @SMALL_LETTERBOX
    case 0xC2D110: cpu.execute_instruction<0xF0>(0x000029, 2); return true;
    // src/battle/load_battlebg-jp.asm:41 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D112: cpu.execute_instruction<0x80>(0x000033, 2); return true;
    // src/battle/load_battlebg-jp.asm:43 STZ LETTERBOX_TOP_END
    case 0xC2D114: cpu.execute_instruction<0x9C>(0x00AF87, 3); return true;
    // src/battle/load_battlebg-jp.asm:44 LDA #SCREEN_Y_RESOLUTION
    case 0xC2D117: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000E0, 2); else cpu.execute_instruction<0xA9>(0x0000E0, 3); return true;
    // src/battle/load_battlebg-jp.asm:44 LDA #SCREEN_Y_RESOLUTION
    // Overlapping static entry reached from 0xC2D117.
    case 0xC2D119: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:45 STA LETTERBOX_BOTTOM_START
    case 0xC2D11A: cpu.execute_instruction<0x8D>(0x00AF89, 3); return true;
    // src/battle/load_battlebg-jp.asm:46 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D11D: cpu.execute_instruction<0x80>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:48 LDA #LETTERBOX_SIZE_LARGE - 1
    case 0xC2D11F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002F, 2); else cpu.execute_instruction<0xA9>(0x00002F, 3); return true;
    // src/battle/load_battlebg-jp.asm:48 LDA #LETTERBOX_SIZE_LARGE - 1
    // Overlapping static entry reached from 0xC2D11F.
    case 0xC2D121: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:49 STA LETTERBOX_TOP_END
    case 0xC2D122: cpu.execute_instruction<0x8D>(0x00AF87, 3); return true;
    // src/battle/load_battlebg-jp.asm:50 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    case 0xC2D125: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000B0, 2); else cpu.execute_instruction<0xA9>(0x0000B0, 3); return true;
    // src/battle/load_battlebg-jp.asm:50 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_LARGE
    // Overlapping static entry reached from 0xC2D125.
    case 0xC2D127: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:51 STA LETTERBOX_BOTTOM_START
    case 0xC2D128: cpu.execute_instruction<0x8D>(0x00AF89, 3); return true;
    // src/battle/load_battlebg-jp.asm:52 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D12B: cpu.execute_instruction<0x80>(0x00001A, 2); return true;
    // src/battle/load_battlebg-jp.asm:54 LDA #LETTERBOX_SIZE_MEDIUM - 1
    case 0xC2D12D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000039, 2); else cpu.execute_instruction<0xA9>(0x000039, 3); return true;
    // src/battle/load_battlebg-jp.asm:54 LDA #LETTERBOX_SIZE_MEDIUM - 1
    // Overlapping static entry reached from 0xC2D12D.
    case 0xC2D12F: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:55 STA LETTERBOX_TOP_END
    case 0xC2D130: cpu.execute_instruction<0x8D>(0x00AF87, 3); return true;
    // src/battle/load_battlebg-jp.asm:56 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    case 0xC2D133: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A6, 2); else cpu.execute_instruction<0xA9>(0x0000A6, 3); return true;
    // src/battle/load_battlebg-jp.asm:56 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_MEDIUM
    // Overlapping static entry reached from 0xC2D133.
    case 0xC2D135: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:57 STA LETTERBOX_BOTTOM_START
    case 0xC2D136: cpu.execute_instruction<0x8D>(0x00AF89, 3); return true;
    // src/battle/load_battlebg-jp.asm:58 BRA @LETTERBOX_SETUP_DONE
    case 0xC2D139: cpu.execute_instruction<0x80>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:60 LDA #LETTERBOX_SIZE_SMALL - 1
    case 0xC2D13B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000043, 2); else cpu.execute_instruction<0xA9>(0x000043, 3); return true;
    // src/battle/load_battlebg-jp.asm:60 LDA #LETTERBOX_SIZE_SMALL - 1
    // Overlapping static entry reached from 0xC2D13B.
    case 0xC2D13D: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:61 STA LETTERBOX_TOP_END
    case 0xC2D13E: cpu.execute_instruction<0x8D>(0x00AF87, 3); return true;
    // src/battle/load_battlebg-jp.asm:62 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    case 0xC2D141: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00009C, 2); else cpu.execute_instruction<0xA9>(0x00009C, 3); return true;
    // src/battle/load_battlebg-jp.asm:62 LDA #SCREEN_Y_RESOLUTION - LETTERBOX_SIZE_SMALL
    // Overlapping static entry reached from 0xC2D141.
    case 0xC2D143: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:63 STA LETTERBOX_BOTTOM_START
    case 0xC2D144: cpu.execute_instruction<0x8D>(0x00AF89, 3); return true;
    // src/battle/load_battlebg-jp.asm:65 STZ LETTERBOX_EFFECT_ENDING
    case 0xC2D147: cpu.execute_instruction<0x9C>(0x00AF8B, 3); return true;
    // src/battle/load_battlebg-jp.asm:66 LDX #$7000
    case 0xC2D14A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007000, 3); return true;
    // src/battle/load_battlebg-jp.asm:66 LDX #$7000
    // Overlapping static entry reached from 0xC2D14A.
    case 0xC2D14C: cpu.execute_instruction<0x70>(0x00008E, 2); return true;
    // src/battle/load_battlebg-jp.asm:67 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    case 0xC2D14D: cpu.execute_instruction<0x8E>(0x00AFA3, 3); return true;
    // src/battle/load_battlebg-jp.asm:67 STX LETTERBOX_EFFECT_ENDING_BOTTOM
    // Overlapping static entry reached from 0xC2D14C.
    case 0xC2D14E: cpu.execute_instruction<0xA3>(0x0000AF, 2); return true;
    // src/battle/load_battlebg-jp.asm:68 STX LETTERBOX_EFFECT_ENDING_TOP
    case 0xC2D150: cpu.execute_instruction<0x8E>(0x00AFA1, 3); return true;
    // src/battle/load_battlebg-jp.asm:69 STZ ENABLE_BACKGROUND_DARKENING
    case 0xC2D153: cpu.execute_instruction<0x9C>(0x00AFA5, 3); return true;
    // src/battle/load_battlebg-jp.asm:70 LDA #$FFFF
    case 0xC2D156: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000FF, 2); else cpu.execute_instruction<0xA9>(0x00FFFF, 3); return true;
    // src/battle/load_battlebg-jp.asm:70 LDA #$FFFF
    // Overlapping static entry reached from 0xC2D156.
    case 0xC2D158: cpu.execute_instruction<0xFF>(0xAFA78D, 4); return true;
    // src/battle/load_battlebg-jp.asm:71 STA BACKGROUND_BRIGHTNESS
    case 0xC2D159: cpu.execute_instruction<0x8D>(0x00AFA7, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D15C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D15C.
    case 0xC2D15E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D15F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D161: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D161.
    case 0xC2D163: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:72 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D164: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D166: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    // Overlapping static entry reached from 0xC2D1C3.
    case 0xC2D167: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D168: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    // Overlapping static entry reached from 0xC2D167.
    case 0xC2D169: cpu.execute_instruction<0x2A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D16A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:73 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D16C: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D16E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D16E.
    case 0xC2D170: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D171: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D170.
    case 0xC2D172: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D173: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D172.
    case 0xC2D174: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D173.
    case 0xC2D175: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:74 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D176: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:75 LDA @VIRTUAL02
    case 0xC2D178: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D17F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:76 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D180: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:77 TAX
    case 0xC2D182: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:78 LDA f:BG_DATA_TABLE,X
    case 0xC2D183: cpu.execute_instruction<0xBF>(0xCADCA1, 4); return true;
    // src/battle/load_battlebg-jp.asm:79 AND #$00FF
    case 0xC2D187: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:79 AND #$00FF
    // Overlapping static entry reached from 0xC2D187.
    case 0xC2D189: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:80 ASL
    case 0xC2D18A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:81 ASL
    case 0xC2D18B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:82 CLC
    case 0xC2D18C: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:83 ADC @VIRTUAL06
    case 0xC2D18D: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:84 STA @VIRTUAL06
    case 0xC2D18F: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D191: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D191.
    case 0xC2D193: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D194: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D196: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D197: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D199: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:85 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D19B: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D19D: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D19F: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D1A1: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:86 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D1A3: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1A5: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1A7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1A9: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:87 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D1AB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1AD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1AF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1B1: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:88 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D1B3: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg-jp.asm:89 JSL DECOMP
    case 0xC2D1B5: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/battle/load_battlebg-jp.asm:90 LDA CURRENT_BATTLE_GROUP
    case 0xC2D1B9: cpu.execute_instruction<0xAD>(0x004E12, 3); return true;
    // src/battle/load_battlebg-jp.asm:91 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    case 0xC2D1BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x0000DE, 2); else cpu.execute_instruction<0xC9>(0x0001DE, 3); return true;
    // src/battle/load_battlebg-jp.asm:91 CMP #ENEMY_GROUP::BOSS_GIYGAS_PHASE_DURING_PRAYER_1
    // Overlapping static entry reached from 0xC2D1BC.
    case 0xC2D1BE: cpu.execute_instruction<0x01>(0x0000D0, 2); return true;
    // src/battle/load_battlebg-jp.asm:92 BNE @UNKNOWN5
    case 0xC2D1BF: cpu.execute_instruction<0xD0>(0x000025, 2); return true;
    // src/battle/load_battlebg-jp.asm:92 BNE @UNKNOWN5
    // Overlapping static entry reached from 0xC2D1BE.
    case 0xC2D1C0: cpu.execute_instruction<0x25>(0x0000A0, 2); return true;
    // src/battle/load_battlebg-jp.asm:93 LDY #$3000
    case 0xC2D1C1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // src/battle/load_battlebg-jp.asm:93 LDY #$3000
    // Overlapping static entry reached from 0xC2D1C0.
    case 0xC2D1C2: cpu.execute_instruction<0x00>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:93 LDY #$3000
    // Overlapping static entry reached from 0xC2D1C1.
    case 0xC2D1C3: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // src/battle/load_battlebg-jp.asm:94 LDX #$5C00
    case 0xC2D1C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/battle/load_battlebg-jp.asm:94 LDX #$5C00
    // Overlapping static entry reached from 0xC2D1C3.
    case 0xC2D1C5: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/battle/load_battlebg-jp.asm:94 LDX #$5C00
    // Overlapping static entry reached from 0xC2D1C4.
    case 0xC2D1C6: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/battle/load_battlebg-jp.asm:95 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D1C7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:95 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D1C7.
    case 0xC2D1C9: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:96 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D1CA: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1CE: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D0: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D2: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D4: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1D6.
    case 0xC2D1D8: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1D8.
    case 0xC2D1DA: cpu.execute_instruction<0x00>(0x000050, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1D9.
    case 0xC2D1DB: cpu.execute_instruction<0x50>(0x0000E2, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1DC: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1DB.
    case 0xC2D1DD: cpu.execute_instruction<0x20>(0x0000A9, 3); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    case 0xC2D1E0: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1DE.
    case 0xC2D1E1: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:97 COPY_TO_VRAM1P @VIRTUAL06, $3000, $5000, 0
    // Overlapping static entry reached from 0xC2D1E1.
    case 0xC2D1E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000080, 2); else cpu.execute_instruction<0xC0>(0x001680, 3); return true;
    // src/battle/load_battlebg-jp.asm:98 BRA @UNKNOWN6
    case 0xC2D1E4: cpu.execute_instruction<0x80>(0x000016, 2); return true;
    // src/battle/load_battlebg-jp.asm:98 BRA @UNKNOWN6
    // Overlapping static entry reached from 0xC2D1E3.
    case 0xC2D1E5: cpu.execute_instruction<0x16>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1E6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1E5.
    case 0xC2D1E7: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1E8: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1E7.
    case 0xC2D1E9: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1EA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1EC: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1EE: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1EE.
    case 0xC2D1F0: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F0.
    case 0xC2D1F2: cpu.execute_instruction<0x00>(0x000020, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F1.
    case 0xC2D1F3: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    case 0xC2D1F8: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F6.
    case 0xC2D1F9: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:100 COPY_TO_VRAM1P @VIRTUAL06, $1000, $2000, 0
    // Overlapping static entry reached from 0xC2D1F9.
    case 0xC2D1FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x0000A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1FB.
    case 0xC2D1FD: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D1FC.
    case 0xC2D1FE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D1FF: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D201: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D201.
    case 0xC2D203: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:103 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D204: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D206: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D208: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D20A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:104 MOVE_INT @VIRTUAL06, @LOCAL09
    case 0xC2D20C: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/battle/load_battlebg-jp.asm:105 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D20E: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:106 LDA #0
    case 0xC2D210: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/battle/load_battlebg-jp.asm:107 STA [@VIRTUAL06]
    case 0xC2D212: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:107 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D210.
    case 0xC2D213: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:108 REP #PROC_FLAGS::ACCUM8
    case 0xC2D214: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:108 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D213.
    case 0xC2D215: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D216: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D218: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D21A: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D21C: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D21E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D21E.
    case 0xC2D220: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D221: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D221.
    case 0xC2D223: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D224: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D226: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    case 0xC2D228: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D226.
    case 0xC2D229: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:109 COPY_TO_VRAM1P @VIRTUAL06, $5800, $800, 3
    // Overlapping static entry reached from 0xC2D229.
    case 0xC2D22B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D22C: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D22B.
    case 0xC2D22D: cpu.execute_instruction<0x06>(0x000085, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D22E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D22D.
    case 0xC2D22F: cpu.execute_instruction<0x0E>(0x0008A5, 3); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D230: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D232: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D234: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D234.
    case 0xC2D236: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D237: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D237.
    case 0xC2D239: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D23A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D23C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    case 0xC2D23E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D23C.
    case 0xC2D23F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:110 COPY_TO_VRAM1P @VIRTUAL06, $0000, $800, 3
    // Overlapping static entry reached from 0xC2D23F.
    case 0xC2D241: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D242: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D241.
    case 0xC2D243: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D242.
    case 0xC2D244: cpu.execute_instruction<0xDC>(0x000A85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D245: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D247: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D247.
    case 0xC2D249: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:112 LOADPTR BG_DATA_TABLE, @VIRTUAL0A
    case 0xC2D24A: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:113 LDA @VIRTUAL02
    case 0xC2D24C: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D24E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D250: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D251: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D252: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D253: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:114 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D254: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:115 STA @LOCAL08
    case 0xC2D256: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D258: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25A: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25C: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:116 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D25E: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:117 CLC
    case 0xC2D260: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:118 ADC @VIRTUAL06
    case 0xC2D261: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:119 STA @VIRTUAL06
    case 0xC2D263: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:120 LDA [@VIRTUAL06]
    case 0xC2D265: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:121 AND #$00FF
    case 0xC2D267: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:121 AND #$00FF
    // Overlapping static entry reached from 0xC2D267.
    case 0xC2D269: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D26A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:122 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D26B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:123 PHA
    case 0xC2D26C: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D26D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D26D.
    case 0xC2D26F: cpu.execute_instruction<0xD9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D270: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D272: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D272.
    case 0xC2D274: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:124 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D275: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:125 PLA
    case 0xC2D277: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:126 CLC
    case 0xC2D278: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:127 ADC @VIRTUAL06
    case 0xC2D279: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:128 STA @VIRTUAL06
    case 0xC2D27B: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D27D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D27D.
    case 0xC2D27F: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D280: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D282: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D283: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D285: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:129 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D287: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D289: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D28B: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D28D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:130 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D28F: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D291: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D293: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D295: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:131 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D297: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D299: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D29B: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D29D: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:132 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D29F: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg-jp.asm:133 JSL DECOMP
    case 0xC2D2A1: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/battle/load_battlebg-jp.asm:134 LDA @LOCAL08
    case 0xC2D2A5: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:135 INC
    case 0xC2D2A7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:136 INC
    case 0xC2D2A8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2A9: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2AB: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2AD: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:137 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D2AF: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:138 CLC
    case 0xC2D2B1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:139 ADC @VIRTUAL06
    case 0xC2D2B2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:140 STA @VIRTUAL06
    case 0xC2D2B4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:141 LDA [@VIRTUAL06]
    case 0xC2D2B6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:142 AND #$00FF
    case 0xC2D2B8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:142 AND #$00FF
    // Overlapping static entry reached from 0xC2D2B8.
    case 0xC2D2BA: cpu.execute_instruction<0x00>(0x0000C9, 2); return true;
    // src/battle/load_battlebg-jp.asm:143 CMP #4
    case 0xC2D2BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000004, 2); else cpu.execute_instruction<0xC9>(0x000004, 3); return true;
    // src/battle/load_battlebg-jp.asm:143 CMP #4
    // Overlapping static entry reached from 0xC2D2BB.
    case 0xC2D2BD: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // include/macros.asm:778 BEQ :+
    // Macro caller: src/battle/load_battlebg-jp.asm:144 BNEL @UNKNOWN15
    case 0xC2D2BE: cpu.execute_instruction<0xF0>(0x000003, 2); return true;
    // include/macros.asm:779 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:144 BNEL @UNKNOWN15
    case 0xC2D2C0: cpu.execute_instruction<0x4C>(0x00D698, 3); return true;
    // src/battle/load_battlebg-jp.asm:145 LDA #9
    case 0xC2D2C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/battle/load_battlebg-jp.asm:145 LDA #9
    // Overlapping static entry reached from 0xC2D2C3.
    case 0xC2D2C5: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:146 JSL UNKNOWN_C08D79
    case 0xC2D2C6: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/battle/load_battlebg-jp.asm:147 LDA #0
    case 0xC2D2CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:147 LDA #0
    // Overlapping static entry reached from 0xC2D2CA.
    case 0xC2D2CC: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:148 STA @LOCAL08
    case 0xC2D2CD: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:149 BRA @UNKNOWN9
    case 0xC2D2CF: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D2D1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:151 STORE_INT1632 @VIRTUAL06
    case 0xC2D2D3: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:152 CLC
    case 0xC2D2D5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2D6: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2D8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2D8.
    case 0xC2D2DA: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2DB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2DD: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D2DF.
    case 0xC2D2E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:153 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D2E2: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:154 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D2E4: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:155 LDA [@VIRTUAL06]
    case 0xC2D2E6: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:156 AND #$00DF
    case 0xC2D2E8: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0009DF, 3); return true;
    // src/battle/load_battlebg-jp.asm:157 ORA #$0008
    case 0xC2D2EA: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000008, 2); else cpu.execute_instruction<0x09>(0x008708, 3); return true;
    // src/battle/load_battlebg-jp.asm:157 ORA #$0008
    // Overlapping static entry reached from 0xC2D2E8.
    case 0xC2D2EB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:158 STA [@VIRTUAL06]
    case 0xC2D2EC: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:158 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D2EA.
    case 0xC2D2ED: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:159 REP #PROC_FLAGS::ACCUM8
    case 0xC2D2EE: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:159 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D2ED.
    case 0xC2D2EF: cpu.execute_instruction<0x20>(0x0028A5, 3); return true;
    // src/battle/load_battlebg-jp.asm:160 LDA @LOCAL08
    case 0xC2D2F0: cpu.execute_instruction<0xA5>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:161 INC
    case 0xC2D2F2: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:162 INC
    case 0xC2D2F3: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:163 STA @LOCAL08
    case 0xC2D2F4: cpu.execute_instruction<0x85>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:165 CMP #$0800
    case 0xC2D2F6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg-jp.asm:165 CMP #$0800
    // Overlapping static entry reached from 0xC2D2F6.
    case 0xC2D2F8: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:166 BCC @UNKNOWN8
    case 0xC2D2F9: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D2FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D2FB.
    case 0xC2D2FD: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D2FE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D300: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D300.
    case 0xC2D302: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:167 LOADPTR BUFFER, @VIRTUAL0A
    case 0xC2D303: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D305: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D307: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D309: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D30B: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D30D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D30D.
    case 0xC2D30F: cpu.execute_instruction<0x5C>(0x0800A2, 4); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D310: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D310.
    case 0xC2D312: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D313: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D315: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    case 0xC2D317: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D315.
    case 0xC2D318: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:168 COPY_TO_VRAM1P @VIRTUAL0A, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D318.
    case 0xC2D31A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D31B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D31A.
    case 0xC2D31C: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D31B.
    case 0xC2D31D: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D31E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D320: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D320.
    case 0xC2D322: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:170 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D323: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D325: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D327: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D329: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:171 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D32B: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battlebg-jp.asm:172 LDA @VIRTUAL02
    case 0xC2D32D: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D32F: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D331: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D332: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D333: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D334: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:173 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D335: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:174 TAX
    case 0xC2D337: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:175 STX @LOCAL06
    case 0xC2D338: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:176 TXA
    case 0xC2D33A: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:177 CLC
    case 0xC2D33B: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:178 ADC @VIRTUAL06
    case 0xC2D33C: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:179 STA @VIRTUAL06
    case 0xC2D33E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:180 STA @LOCAL00
    case 0xC2D340: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg-jp.asm:181 LDA @VIRTUAL06+2
    case 0xC2D342: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:182 STA @LOCAL00+2
    case 0xC2D344: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:183 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D346: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/battle/load_battlebg-jp.asm:183 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D346.
    case 0xC2D348: cpu.execute_instruction<0xAF>(0xCF9F22, 4); return true;
    // src/battle/load_battlebg-jp.asm:184 JSL UNKNOWN_C2CFE5
    case 0xC2D349: cpu.execute_instruction<0x22>(0xC2CF9F, 4); return true;
    // src/battle/load_battlebg-jp.asm:184 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D348.
    case 0xC2D34C: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:185 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D34D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00AFF5, 3); return true;
    // src/battle/load_battlebg-jp.asm:185 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D34C.
    case 0xC2D34E: cpu.execute_instruction<0xF5>(0x0000AF, 2); return true;
    // src/battle/load_battlebg-jp.asm:185 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D34D.
    case 0xC2D34F: cpu.execute_instruction<0xAF>(0xA90285, 4); return true;
    // src/battle/load_battlebg-jp.asm:186 STA @VIRTUAL02
    case 0xC2D350: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:187 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    case 0xC2D352: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000040, 2); else cpu.execute_instruction<0xA9>(0x000240, 3); return true;
    // src/battle/load_battlebg-jp.asm:187 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC2D34F.
    case 0xC2D353: cpu.execute_instruction<0x40>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:187 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 2
    // Overlapping static entry reached from 0xC2D352.
    case 0xC2D354: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg-jp.asm:188 LDX @VIRTUAL02
    case 0xC2D355: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:189 STA __BSS_START__,X
    case 0xC2D357: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:190 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D35A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B5, 2); else cpu.execute_instruction<0xA0>(0x00AFB5, 3); return true;
    // src/battle/load_battlebg-jp.asm:190 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D35A.
    case 0xC2D35C: cpu.execute_instruction<0xAF>(0xA92084, 4); return true;
    // src/battle/load_battlebg-jp.asm:191 STY @LOCAL05
    case 0xC2D35D: cpu.execute_instruction<0x84>(0x000020, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D35F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D35C.
    case 0xC2D360: cpu.execute_instruction<0xD9>(0x0085DA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D35F.
    case 0xC2D361: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D362: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D360.
    case 0xC2D363: cpu.execute_instruction<0x1C>(0x00CAA9, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D364: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    // Overlapping static entry reached from 0xC2D364.
    case 0xC2D366: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:192 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL04
    case 0xC2D367: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battlebg-jp.asm:193 LDX @LOCAL06
    case 0xC2D369: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:194 TXA
    case 0xC2D36B: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:195 INC
    case 0xC2D36C: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D36D: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D36F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D371: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:196 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D373: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:197 CLC
    case 0xC2D375: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:198 ADC @VIRTUAL06
    case 0xC2D376: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:199 STA @VIRTUAL06
    case 0xC2D378: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:200 STA @LOCAL03
    case 0xC2D37A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battlebg-jp.asm:201 LDA @VIRTUAL06+2
    case 0xC2D37C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:202 STA @LOCAL03+2
    case 0xC2D37E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D380: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D382: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D384: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:203 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D386: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:204 LDA [@LOCAL03]
    case 0xC2D388: cpu.execute_instruction<0xA7>(0x000018, 2); return true;
    // src/battle/load_battlebg-jp.asm:205 AND #$00FF
    case 0xC2D38A: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:205 AND #$00FF
    // Overlapping static entry reached from 0xC2D38A.
    case 0xC2D38C: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:206 ASL
    case 0xC2D38D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:207 ASL
    case 0xC2D38E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:208 CLC
    case 0xC2D38F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:209 ADC @VIRTUAL06
    case 0xC2D390: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:210 STA @VIRTUAL06
    case 0xC2D392: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D394: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D394.
    case 0xC2D396: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D397: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D399: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D39A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D39C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:211 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D39E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:212 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:213 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D3A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:213 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D3A8.
    case 0xC2D3AA: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg-jp.asm:214 LDY @LOCAL05
    case 0xC2D3AB: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:215 TYA
    case 0xC2D3AD: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:216 JSL MEMCPY16
    case 0xC2D3AE: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B2: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B6: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:217 MOVE_INT @LOCAL04, @VIRTUAL06
    case 0xC2D3B8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:218 LDA [@LOCAL03]
    case 0xC2D3BA: cpu.execute_instruction<0xA7>(0x000018, 2); return true;
    // src/battle/load_battlebg-jp.asm:219 AND #$00FF
    case 0xC2D3BC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:219 AND #$00FF
    // Overlapping static entry reached from 0xC2D3BC.
    case 0xC2D3BE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:220 ASL
    case 0xC2D3BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:221 ASL
    case 0xC2D3C0: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:222 CLC
    case 0xC2D3C1: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:223 ADC @VIRTUAL06
    case 0xC2D3C2: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:224 STA @VIRTUAL06
    case 0xC2D3C4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3C6: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D3C6.
    case 0xC2D3C8: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3C9: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3CB: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3CC: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3CE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:225 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D3D0: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D2: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D4: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D6: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:226 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3D8: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:227 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D3DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:227 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D3DA.
    case 0xC2D3DC: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:228 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D3DD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x00AFD5, 3); return true;
    // src/battle/load_battlebg-jp.asm:228 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D3DD.
    case 0xC2D3DF: cpu.execute_instruction<0xAF>(0x8EC322, 4); return true;
    // src/battle/load_battlebg-jp.asm:229 JSL MEMCPY16
    case 0xC2D3E0: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:229 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D3DF.
    case 0xC2D3E3: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0020A4, 3); return true;
    // src/battle/load_battlebg-jp.asm:230 LDY @LOCAL05
    case 0xC2D3E4: cpu.execute_instruction<0xA4>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:230 LDY @LOCAL05
    // Overlapping static entry reached from 0xC2D3E3.
    case 0xC2D3E5: cpu.execute_instruction<0x20>(0x008598, 3); return true;
    // src/battle/load_battlebg-jp.asm:231 TYA
    case 0xC2D3E6: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    // Overlapping static entry reached from 0xC2D3E5.
    case 0xC2D3E8: cpu.execute_instruction<0x06>(0x00008B, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3E9: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3EA: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3EC: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3ED: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:232 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D3EF: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg-jp.asm:233 REP #PROC_FLAGS::ACCUM8
    case 0xC2D3F1: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F5: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F7: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:234 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D3F9: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:235 LDX #32
    case 0xC2D3FB: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:235 LDX #32
    // Overlapping static entry reached from 0xC2D3FB.
    case 0xC2D3FD: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:236 STX @LOCAL08
    case 0xC2D3FE: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:237 LDX @VIRTUAL02
    case 0xC2D400: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:238 LDA __BSS_START__,X
    case 0xC2D402: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:239 LDX @LOCAL08
    case 0xC2D405: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:240 JSL MEMCPY16
    case 0xC2D407: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:241 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D40B: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:242 LDA #2
    case 0xC2D40D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x008D02, 3); return true;
    // src/battle/load_battlebg-jp.asm:243 STA LOADED_BG_DATA_LAYER1
    case 0xC2D40F: cpu.execute_instruction<0x8D>(0x00AFA9, 3); return true;
    // src/battle/load_battlebg-jp.asm:243 STA LOADED_BG_DATA_LAYER1
    // Overlapping static entry reached from 0xC2D40D.
    case 0xC2D410: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x00A2AF, 3); return true;
    // src/battle/load_battlebg-jp.asm:244 LDX #0
    case 0xC2D412: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:244 LDX #0
    // Overlapping static entry reached from 0xC2D410.
    case 0xC2D413: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg-jp.asm:244 LDX #0
    // Overlapping static entry reached from 0xC2D412.
    case 0xC2D414: cpu.execute_instruction<0x00>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:245 REP #PROC_FLAGS::ACCUM8
    case 0xC2D415: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:246 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D417: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/battle/load_battlebg-jp.asm:246 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D417.
    case 0xC2D419: cpu.execute_instruction<0xAF>(0xC8E722, 4); return true;
    // src/battle/load_battlebg-jp.asm:247 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D41A: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/battle/load_battlebg-jp.asm:247 JSL GENERATE_BATTLEBG_FRAME
    // Overlapping static entry reached from 0xC2D419.
    case 0xC2D41D: cpu.execute_instruction<0xC2>(0x0000A2, 2); return true;
    // src/battle/load_battlebg-jp.asm:248 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D41E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x00B020, 3); return true;
    // src/battle/load_battlebg-jp.asm:248 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D41D.
    case 0xC2D41F: cpu.execute_instruction<0x20>(0x0086B0, 3); return true;
    // src/battle/load_battlebg-jp.asm:248 LDX #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D41E.
    case 0xC2D420: cpu.execute_instruction<0xB0>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:249 STX @LOCAL05
    case 0xC2D421: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:249 STX @LOCAL05
    // Overlapping static entry reached from 0xC2D420.
    case 0xC2D422: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // src/battle/load_battlebg-jp.asm:250 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D423: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:251 LDA #0
    case 0xC2D425: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x009D00, 3); return true;
    // src/battle/load_battlebg-jp.asm:252 STA __BSS_START__,X
    case 0xC2D427: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:252 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D425.
    case 0xC2D428: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg-jp.asm:253 REP #PROC_FLAGS::ACCUM8
    case 0xC2D42A: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:254 LDA #1
    case 0xC2D42C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/load_battlebg-jp.asm:254 LDA #1
    // Overlapping static entry reached from 0xC2D42C.
    case 0xC2D42E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:255 STA CURRENT_LAYER_CONFIG
    case 0xC2D42F: cpu.execute_instruction<0x8D>(0x00AF5F, 3); return true;
    // src/battle/load_battlebg-jp.asm:256 JSL UNKNOWN_C0AFCD
    case 0xC2D432: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // src/battle/load_battlebg-jp.asm:257 LDA #$0017
    case 0xC2D436: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000017, 3); return true;
    // src/battle/load_battlebg-jp.asm:257 LDA #$0017
    // Overlapping static entry reached from 0xC2D436.
    case 0xC2D438: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:258 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D439: cpu.execute_instruction<0x8D>(0x00AF83, 3); return true;
    // src/battle/load_battlebg-jp.asm:259 LDA #$0015
    case 0xC2D43C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000015, 3); return true;
    // src/battle/load_battlebg-jp.asm:259 LDA #$0015
    // Overlapping static entry reached from 0xC2D43C.
    case 0xC2D43E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:260 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D43F: cpu.execute_instruction<0x8D>(0x00AF85, 3); return true;
    // src/battle/load_battlebg-jp.asm:261 LDA @LOCAL0A
    case 0xC2D442: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg-jp.asm:262 STA @VIRTUAL04
    case 0xC2D444: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg-jp.asm:263 BEQL @UNKNOWN23
    case 0xC2D446: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:263 BEQL @UNKNOWN23
    case 0xC2D448: cpu.execute_instruction<0x4C>(0x00DA27, 3); return true;
    // src/battle/load_battlebg-jp.asm:264 LDA @LOCAL0B
    case 0xC2D44B: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:265 AND #$0004
    case 0xC2D44D: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x000004, 2); else cpu.execute_instruction<0x29>(0x000004, 3); return true;
    // src/battle/load_battlebg-jp.asm:265 AND #$0004
    // Overlapping static entry reached from 0xC2D44D.
    case 0xC2D44F: cpu.execute_instruction<0x00>(0x0000D0, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg-jp.asm:266 BEQL @UNKNOWN14
    case 0xC2D450: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:266 BEQL @UNKNOWN14
    case 0xC2D452: cpu.execute_instruction<0x4C>(0x00D663, 3); return true;
    // src/battle/load_battlebg-jp.asm:267 LDA #7
    case 0xC2D455: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000007, 2); else cpu.execute_instruction<0xA9>(0x000007, 3); return true;
    // src/battle/load_battlebg-jp.asm:267 LDA #7
    // Overlapping static entry reached from 0xC2D455.
    case 0xC2D457: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:268 STA CURRENT_LAYER_CONFIG
    case 0xC2D458: cpu.execute_instruction<0x8D>(0x00AF5F, 3); return true;
    // src/battle/load_battlebg-jp.asm:269 JSL UNKNOWN_C0AFCD
    case 0xC2D45B: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // src/battle/load_battlebg-jp.asm:270 LDA @VIRTUAL04
    case 0xC2D45F: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D461: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D463: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D464: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D465: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D466: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:271 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D467: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D469: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D46B: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D46D: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:272 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D46F: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:273 CLC
    case 0xC2D471: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:274 ADC @VIRTUAL06
    case 0xC2D472: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:275 STA @VIRTUAL06
    case 0xC2D474: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:276 STA @LOCAL07
    case 0xC2D476: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // src/battle/load_battlebg-jp.asm:277 LDA @VIRTUAL06+2
    case 0xC2D478: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:278 STA @LOCAL07+2
    case 0xC2D47A: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // src/battle/load_battlebg-jp.asm:279 LDA [@VIRTUAL06]
    case 0xC2D47C: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:280 AND #$00FF
    case 0xC2D47E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:280 AND #$00FF
    // Overlapping static entry reached from 0xC2D47E.
    case 0xC2D480: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:281 ASL
    case 0xC2D481: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:282 ASL
    case 0xC2D482: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:283 PHA
    case 0xC2D483: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D484: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D484.
    case 0xC2D486: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D487: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D486.
    case 0xC2D488: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D489: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D488.
    case 0xC2D48A: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D489.
    case 0xC2D48B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:284 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D48C: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:285 PLA
    case 0xC2D48E: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:286 CLC
    case 0xC2D48F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:287 ADC @VIRTUAL06
    case 0xC2D490: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:288 STA @VIRTUAL06
    case 0xC2D492: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D494: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D494.
    case 0xC2D496: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D497: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D499: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D49A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D49C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:289 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D49E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:290 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4A8: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4AA: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4AC: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:291 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4AE: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg-jp.asm:292 JSL DECOMP
    case 0xC2D4B0: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/battle/load_battlebg-jp.asm:292 JSL DECOMP
    // Overlapping static entry reached from 0xC2D52A.
    case 0xC2D4B3: cpu.execute_instruction<0xC4>(0x0000A5, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4B4: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D4B3.
    case 0xC2D4B5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4B6: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4B8: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4BA: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4BC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D4BC.
    case 0xC2D4BE: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4BF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x002000, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    // Overlapping static entry reached from 0xC2D4BF.
    case 0xC2D4C1: cpu.execute_instruction<0x20>(0x0020E2, 3); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4C2: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1161 TYA
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4C4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:293 COPY_TO_VRAM1P @VIRTUAL0A, $0000, $2000, 0
    case 0xC2D4C5: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4C9: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4CD: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:295 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D4CF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:296 LDA [@VIRTUAL06]
    case 0xC2D4D1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:297 AND #$00FF
    case 0xC2D4D3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:297 AND #$00FF
    // Overlapping static entry reached from 0xC2D4D3.
    case 0xC2D4D5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:298 ASL
    case 0xC2D4D6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:299 ASL
    case 0xC2D4D7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:300 PHA
    case 0xC2D4D8: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4D9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4D9.
    case 0xC2D4DB: cpu.execute_instruction<0xD9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4DE: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4DE.
    case 0xC2D4E0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:301 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D4E1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:302 PLA
    case 0xC2D4E3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:303 CLC
    case 0xC2D4E4: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:304 ADC @VIRTUAL06
    case 0xC2D4E5: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:305 STA @VIRTUAL06
    case 0xC2D4E7: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4E9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D4E9.
    case 0xC2D4EB: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4EC: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4EE: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4EF: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4F1: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D4F3: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:306 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D56D.
    case 0xC2D4F4: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4F5: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4F7: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4F9: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:307 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D4FB: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4FD: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D4FF: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D501: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:308 MOVE_INT @VIRTUAL0A, @LOCAL01
    case 0xC2D503: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg-jp.asm:309 JSL DECOMP
    case 0xC2D505: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/battle/load_battlebg-jp.asm:310 LDA #0
    case 0xC2D509: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:310 LDA #0
    // Overlapping static entry reached from 0xC2D509.
    case 0xC2D50B: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:311 STA @LOCAL0B
    case 0xC2D50C: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:312 BRA @UNKNOWN13
    case 0xC2D50E: cpu.execute_instruction<0x80>(0x000025, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D510: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:314 STORE_INT1632 @VIRTUAL06
    case 0xC2D512: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:314 STORE_INT1632 @VIRTUAL06
    // Overlapping static entry reached from 0xC2D58C.
    case 0xC2D513: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:315 CLC
    case 0xC2D514: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D515: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D517: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D517.
    case 0xC2D519: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D51A: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D51C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D51E: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D51E.
    case 0xC2D520: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:316 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D521: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:317 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D523: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:318 LDA [@VIRTUAL06]
    case 0xC2D525: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:319 AND #$00DF
    case 0xC2D527: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0009DF, 3); return true;
    // src/battle/load_battlebg-jp.asm:319 AND #$00DF
    // Overlapping static entry reached from 0xC2D5A2.
    case 0xC2D528: cpu.execute_instruction<0xDF>(0x871009, 4); return true;
    // src/battle/load_battlebg-jp.asm:320 ORA #$0010
    case 0xC2D529: if (cpu.status_register & 0x20) cpu.execute_instruction<0x09>(0x000010, 2); else cpu.execute_instruction<0x09>(0x008710, 3); return true;
    // src/battle/load_battlebg-jp.asm:320 ORA #$0010
    // Overlapping static entry reached from 0xC2D527.
    case 0xC2D52A: cpu.execute_instruction<0x10>(0x000087, 2); return true;
    // src/battle/load_battlebg-jp.asm:321 STA [@VIRTUAL06]
    case 0xC2D52B: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:321 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D529.
    case 0xC2D52C: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:322 REP #PROC_FLAGS::ACCUM8
    case 0xC2D52D: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:322 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D52C.
    case 0xC2D52E: cpu.execute_instruction<0x20>(0x0030A5, 3); return true;
    // src/battle/load_battlebg-jp.asm:323 LDA @LOCAL0B
    case 0xC2D52F: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:324 INC
    case 0xC2D531: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:325 INC
    case 0xC2D532: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:326 STA @LOCAL0B
    case 0xC2D533: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:328 CMP #$0800
    case 0xC2D535: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg-jp.asm:328 CMP #$0800
    // Overlapping static entry reached from 0xC2D535.
    case 0xC2D537: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:329 BCC @UNKNOWN12
    case 0xC2D538: cpu.execute_instruction<0x90>(0x0000D6, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D53A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D53A.
    case 0xC2D53C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D53D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D53F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D53F.
    case 0xC2D541: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D542: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D544: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005800, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D544.
    case 0xC2D546: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D547: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D547.
    case 0xC2D549: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D54A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D54C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    case 0xC2D54E: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D54C.
    case 0xC2D54F: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:330 COPY_TO_VRAM1 BUFFER, $5800, $800, 0
    // Overlapping static entry reached from 0xC2D54F.
    case 0xC2D551: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D552: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D551.
    case 0xC2D553: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D552.
    case 0xC2D554: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D555: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D557: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D557.
    case 0xC2D559: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:332 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D55A: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:333 LDA @LOCAL0A
    case 0xC2D55C: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg-jp.asm:334 STA @VIRTUAL04
    case 0xC2D55E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D560: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D562: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D563: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D564: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D565: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:335 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D566: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:336 TAX
    case 0xC2D568: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:337 STX @LOCAL05
    case 0xC2D569: cpu.execute_instruction<0x86>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:338 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D56B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000020, 2); else cpu.execute_instruction<0xA9>(0x00B020, 3); return true;
    // src/battle/load_battlebg-jp.asm:338 LDA #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D56B.
    case 0xC2D56D: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:339 STA @VIRTUAL04
    case 0xC2D56E: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:339 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2D56D.
    case 0xC2D56F: cpu.execute_instruction<0x04>(0x00008A, 2); return true;
    // src/battle/load_battlebg-jp.asm:340 TXA
    case 0xC2D570: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D571: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D573: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D575: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:341 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D577: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:342 CLC
    case 0xC2D579: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:343 ADC @VIRTUAL0A
    case 0xC2D57A: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:344 STA @VIRTUAL0A
    case 0xC2D57C: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:345 STA @LOCAL00
    case 0xC2D57E: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg-jp.asm:346 LDA @VIRTUAL0A+2
    case 0xC2D580: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:347 STA @LOCAL00+2
    case 0xC2D582: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:348 LDA @VIRTUAL04
    case 0xC2D584: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:349 JSL UNKNOWN_C2CFE5
    case 0xC2D586: cpu.execute_instruction<0x22>(0xC2CF9F, 4); return true;
    // src/battle/load_battlebg-jp.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D58A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006C, 2); else cpu.execute_instruction<0xA9>(0x00B06C, 3); return true;
    // src/battle/load_battlebg-jp.asm:350 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D58A.
    case 0xC2D58C: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:351 STA @VIRTUAL02
    case 0xC2D58D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:351 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D58C.
    case 0xC2D58E: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D58F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/load_battlebg-jp.asm:352 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D58F.
    case 0xC2D591: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg-jp.asm:353 LDX @VIRTUAL02
    case 0xC2D592: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:354 STA __BSS_START__,X
    case 0xC2D594: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:355 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D597: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:356 LDA #1
    case 0xC2D599: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x00A601, 3); return true;
    // src/battle/load_battlebg-jp.asm:357 LDX @VIRTUAL04
    case 0xC2D59B: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:357 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D599.
    case 0xC2D59C: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/load_battlebg-jp.asm:358 STA __BSS_START__,X
    case 0xC2D59D: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:358 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D59C.
    case 0xC2D59E: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg-jp.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D5A0: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x00002C, 2); else cpu.execute_instruction<0xA0>(0x00B02C, 3); return true;
    // src/battle/load_battlebg-jp.asm:359 LDY #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D5A0.
    case 0xC2D5A2: cpu.execute_instruction<0xB0>(0x000084, 2); return true;
    // src/battle/load_battlebg-jp.asm:360 STY @LOCAL0B
    case 0xC2D5A3: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:360 STY @LOCAL0B
    // Overlapping static entry reached from 0xC2D5A2.
    case 0xC2D5A4: cpu.execute_instruction<0x30>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:361 REP #PROC_FLAGS::ACCUM8
    case 0xC2D5A5: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:361 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D5A4.
    case 0xC2D5A6: cpu.execute_instruction<0x20>(0x00D9A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5A7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D5A7.
    case 0xC2D5A9: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5AA: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5AC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D5AC.
    case 0xC2D5AE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:362 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D5AF: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:363 LDX @LOCAL05
    case 0xC2D5B1: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:364 TXA
    case 0xC2D5B3: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:365 INC
    case 0xC2D5B4: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:366 CLC
    case 0xC2D5B5: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:367 ADC @VIRTUAL06
    case 0xC2D5B6: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:368 STA @VIRTUAL06
    case 0xC2D5B8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:369 STA @LOCAL09
    case 0xC2D5BA: cpu.execute_instruction<0x85>(0x00002A, 2); return true;
    // src/battle/load_battlebg-jp.asm:370 LDA @VIRTUAL06+2
    case 0xC2D5BC: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:371 STA @LOCAL09+2
    case 0xC2D5BE: cpu.execute_instruction<0x85>(0x00002C, 2); return true;
    // src/battle/load_battlebg-jp.asm:371 STA @LOCAL09+2
    // Overlapping static entry reached from 0xC2D625.
    case 0xC2D5BF: cpu.execute_instruction<0x2C>(0x0006A7, 3); return true;
    // src/battle/load_battlebg-jp.asm:372 LDA [@VIRTUAL06]
    case 0xC2D5C0: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:373 AND #$00FF
    case 0xC2D5C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:373 AND #$00FF
    // Overlapping static entry reached from 0xC2D5C2.
    case 0xC2D5C4: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:374 ASL
    case 0xC2D5C5: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:375 ASL
    case 0xC2D5C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5C7: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5C9: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5CB: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:376 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D5CD: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:377 CLC
    case 0xC2D5CF: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:378 ADC @VIRTUAL06
    case 0xC2D5D0: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:379 STA @VIRTUAL06
    case 0xC2D5D2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5D4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D5D4.
    case 0xC2D5D6: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5D7: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5D9: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5DA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5DC: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:380 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D5DE: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:381 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D5E6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:382 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D5E8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:382 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D5E8.
    case 0xC2D5EA: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg-jp.asm:383 LDY @LOCAL0B
    case 0xC2D5EB: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:384 TYA
    case 0xC2D5ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:385 JSL MEMCPY16
    case 0xC2D5EE: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F2: cpu.execute_instruction<0xA5>(0x00002A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F4: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F6: cpu.execute_instruction<0xA5>(0x00002C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:386 MOVE_INT @LOCAL09, @VIRTUAL06
    case 0xC2D5F8: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:387 LDA [@VIRTUAL06]
    case 0xC2D5FA: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:388 AND #$00FF
    case 0xC2D5FC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:388 AND #$00FF
    // Overlapping static entry reached from 0xC2D5FC.
    case 0xC2D5FE: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:389 ASL
    case 0xC2D5FF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:390 ASL
    case 0xC2D600: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:391 CLC
    case 0xC2D601: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:392 ADC @VIRTUAL0A
    case 0xC2D602: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:393 STA @VIRTUAL0A
    case 0xC2D604: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D606: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D606.
    case 0xC2D608: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D609: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D60B: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D60C: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D60E: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:394 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D610: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D612: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D614: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D616: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:395 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D618: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:396 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D61A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:396 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D61A.
    case 0xC2D61C: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:397 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2D61D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00B04C, 3); return true;
    // src/battle/load_battlebg-jp.asm:397 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D61D.
    case 0xC2D61F: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:398 JSL MEMCPY16
    case 0xC2D620: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:398 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D61F.
    case 0xC2D621: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/battle/load_battlebg-jp.asm:398 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D621.
    case 0xC2D623: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0030A4, 3); return true;
    // src/battle/load_battlebg-jp.asm:399 LDY @LOCAL0B
    case 0xC2D624: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:399 LDY @LOCAL0B
    // Overlapping static entry reached from 0xC2D623.
    case 0xC2D625: cpu.execute_instruction<0x30>(0x000098, 2); return true;
    // src/battle/load_battlebg-jp.asm:400 TYA
    case 0xC2D626: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D627: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D629: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62A: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62C: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:401 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D62F: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg-jp.asm:402 REP #PROC_FLAGS::ACCUM8
    case 0xC2D631: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D633: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D635: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D637: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:403 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D639: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:404 LDX #32
    case 0xC2D63B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:404 LDX #32
    // Overlapping static entry reached from 0xC2D63B.
    case 0xC2D63D: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:405 STX @LOCAL08
    case 0xC2D63E: cpu.execute_instruction<0x86>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:406 LDX @VIRTUAL02
    case 0xC2D640: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:407 LDA __BSS_START__,X
    case 0xC2D642: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:407 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D61F.
    case 0xC2D643: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg-jp.asm:408 LDX @LOCAL08
    case 0xC2D645: cpu.execute_instruction<0xA6>(0x000028, 2); return true;
    // src/battle/load_battlebg-jp.asm:409 JSL MEMCPY16
    case 0xC2D647: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:410 LDX #1
    case 0xC2D64B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000001, 2); else cpu.execute_instruction<0xA2>(0x000001, 3); return true;
    // src/battle/load_battlebg-jp.asm:410 LDX #1
    // Overlapping static entry reached from 0xC2D64B.
    case 0xC2D64D: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/load_battlebg-jp.asm:411 LDA @VIRTUAL04
    case 0xC2D64E: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:412 JSL GENERATE_BATTLEBG_FRAME
    case 0xC2D650: cpu.execute_instruction<0x22>(0xC2C8E7, 4); return true;
    // src/battle/load_battlebg-jp.asm:413 LDA #$0215
    case 0xC2D654: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000015, 2); else cpu.execute_instruction<0xA9>(0x000215, 3); return true;
    // src/battle/load_battlebg-jp.asm:413 LDA #$0215
    // Overlapping static entry reached from 0xC2D654.
    case 0xC2D656: cpu.execute_instruction<0x02>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:414 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2D657: cpu.execute_instruction<0x8D>(0x00AF83, 3); return true;
    // src/battle/load_battlebg-jp.asm:415 LDA #$0014
    case 0xC2D65A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000014, 2); else cpu.execute_instruction<0xA9>(0x000014, 3); return true;
    // src/battle/load_battlebg-jp.asm:415 LDA #$0014
    // Overlapping static entry reached from 0xC2D65A.
    case 0xC2D65C: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:416 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2D65D: cpu.execute_instruction<0x8D>(0x00AF85, 3); return true;
    // src/battle/load_battlebg-jp.asm:417 JMP @UNKNOWN23
    case 0xC2D660: cpu.execute_instruction<0x4C>(0x00DA27, 3); return true;
    // src/battle/load_battlebg-jp.asm:419 LDA @VIRTUAL04
    case 0xC2D663: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D665: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D667: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D668: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D669: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D66A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:420 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D66B: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D66D: cpu.execute_instruction<0xA6>(0x000024, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D66F: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D671: cpu.execute_instruction<0xA6>(0x000026, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:421 MOVE_INTX @LOCAL07, @VIRTUAL06
    case 0xC2D673: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:422 CLC
    case 0xC2D675: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:423 ADC @VIRTUAL06
    case 0xC2D676: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:424 STA @VIRTUAL06
    case 0xC2D678: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:425 STA @LOCAL00
    case 0xC2D67A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg-jp.asm:426 LDA @VIRTUAL06+2
    case 0xC2D67C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:427 STA @LOCAL00+2
    case 0xC2D67E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:428 LDX @LOCAL05
    case 0xC2D680: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:429 TXA
    case 0xC2D682: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:430 JSL UNKNOWN_C2CFE5
    case 0xC2D683: cpu.execute_instruction<0x22>(0xC2CF9F, 4); return true;
    // src/battle/load_battlebg-jp.asm:431 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D687: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:432 LDA #1
    case 0xC2D689: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x008D01, 3); return true;
    // src/battle/load_battlebg-jp.asm:433 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    case 0xC2D68B: cpu.execute_instruction<0x8D>(0x00B022, 3); return true;
    // src/battle/load_battlebg-jp.asm:433 STA LOADED_BG_DATA_LAYER2 + loaded_bg_data::freeze_palette_scrolling
    // Overlapping static entry reached from 0xC2D689.
    case 0xC2D68C: cpu.execute_instruction<0x22>(0x02A9B0, 4); return true;
    // src/battle/load_battlebg-jp.asm:434 LDA #2
    case 0xC2D68E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x00A602, 3); return true;
    // src/battle/load_battlebg-jp.asm:435 LDX @LOCAL05
    case 0xC2D690: cpu.execute_instruction<0xA6>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:435 LDX @LOCAL05
    // Overlapping static entry reached from 0xC2D68E.
    case 0xC2D691: cpu.execute_instruction<0x20>(0x00009D, 3); return true;
    // src/battle/load_battlebg-jp.asm:436 STA __BSS_START__,X
    case 0xC2D692: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:436 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D691.
    case 0xC2D694: cpu.execute_instruction<0x00>(0x00004C, 2); return true;
    // src/battle/load_battlebg-jp.asm:437 JMP @UNKNOWN23
    case 0xC2D695: cpu.execute_instruction<0x4C>(0x00DA27, 3); return true;
    // src/battle/load_battlebg-jp.asm:440 LDA #8
    case 0xC2D698: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000008, 2); else cpu.execute_instruction<0xA9>(0x000008, 3); return true;
    // src/battle/load_battlebg-jp.asm:440 LDA #8
    // Overlapping static entry reached from 0xC2D698.
    case 0xC2D69A: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:441 JSL UNKNOWN_C08D79
    case 0xC2D69B: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/battle/load_battlebg-jp.asm:442 LDY #$6000
    case 0xC2D69F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/battle/load_battlebg-jp.asm:442 LDY #$6000
    // Overlapping static entry reached from 0xC2D69F.
    case 0xC2D6A1: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:443 LDX #$7C00
    case 0xC2D6A2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/battle/load_battlebg-jp.asm:443 LDX #$7C00
    // Overlapping static entry reached from 0xC2D6A2.
    case 0xC2D6A4: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/battle/load_battlebg-jp.asm:444 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D6A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:444 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D6A5.
    case 0xC2D6A7: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:445 JSL SET_BG1_VRAM_LOCATION
    case 0xC2D6A8: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/battle/load_battlebg-jp.asm:446 LDY #$0000
    case 0xC2D6AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:446 LDY #$0000
    // Overlapping static entry reached from 0xC2D6AC.
    case 0xC2D6AE: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/load_battlebg-jp.asm:447 LDX #$5800
    case 0xC2D6AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/battle/load_battlebg-jp.asm:447 LDX #$5800
    // Overlapping static entry reached from 0xC2D6AF.
    case 0xC2D6B1: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:448 TYA
    case 0xC2D6B2: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:449 JSL SET_BG2_VRAM_LOCATION
    case 0xC2D6B3: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/battle/load_battlebg-jp.asm:450 LDY #$1000
    case 0xC2D6B7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/battle/load_battlebg-jp.asm:450 LDY #$1000
    // Overlapping static entry reached from 0xC2D6B7.
    case 0xC2D6B9: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/battle/load_battlebg-jp.asm:451 LDX #$5C00
    case 0xC2D6BA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/battle/load_battlebg-jp.asm:451 LDX #$5C00
    // Overlapping static entry reached from 0xC2D6B9.
    case 0xC2D6BB: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/battle/load_battlebg-jp.asm:451 LDX #$5C00
    // Overlapping static entry reached from 0xC2D6BA.
    case 0xC2D6BC: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/battle/load_battlebg-jp.asm:452 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D6BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:452 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D6BD.
    case 0xC2D6BF: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:453 JSL SET_BG3_VRAM_LOCATION
    case 0xC2D6C0: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/battle/load_battlebg-jp.asm:454 LDY #$3000
    case 0xC2D6C4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // src/battle/load_battlebg-jp.asm:454 LDY #$3000
    // Overlapping static entry reached from 0xC2D6C4.
    case 0xC2D6C6: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // src/battle/load_battlebg-jp.asm:455 LDX #$0C00
    case 0xC2D6C7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000C00, 3); return true;
    // src/battle/load_battlebg-jp.asm:455 LDX #$0C00
    // Overlapping static entry reached from 0xC2D6C6.
    case 0xC2D6C8: cpu.execute_instruction<0x00>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:455 LDX #$0C00
    // Overlapping static entry reached from 0xC2D6C7.
    case 0xC2D6C9: cpu.execute_instruction<0x0C>(0x0000A9, 3); return true;
    // src/battle/load_battlebg-jp.asm:456 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2D6CA: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:456 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2D6CA.
    case 0xC2D6CC: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:457 JSL SET_BG4_VRAM_LOCATION
    case 0xC2D6CD: cpu.execute_instruction<0x22>(0xC08E4D, 4); return true;
    // src/battle/load_battlebg-jp.asm:458 LDA #0
    case 0xC2D6D1: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:458 LDA #0
    // Overlapping static entry reached from 0xC2D6D1.
    case 0xC2D6D3: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:459 STA @LOCAL0B
    case 0xC2D6D4: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:460 BRA @UNKNOWN17
    case 0xC2D6D6: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:462 STORE_INT1632 @VIRTUAL06
    case 0xC2D6D8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:462 STORE_INT1632 @VIRTUAL06
    case 0xC2D6DA: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:463 CLC
    case 0xC2D6DC: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6DD: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D6DF.
    case 0xC2D6E1: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E2: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E6: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D6E6.
    case 0xC2D6E8: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:464 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D6E9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:465 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D6EB: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:466 LDA [@VIRTUAL06]
    case 0xC2D6ED: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:467 AND #$00DF
    case 0xC2D6EF: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0087DF, 3); return true;
    // src/battle/load_battlebg-jp.asm:468 STA [@VIRTUAL06]
    case 0xC2D6F1: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:468 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D6EF.
    case 0xC2D6F2: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:469 REP #PROC_FLAGS::ACCUM8
    case 0xC2D6F3: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:469 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D6F2.
    case 0xC2D6F4: cpu.execute_instruction<0x20>(0x0030A5, 3); return true;
    // src/battle/load_battlebg-jp.asm:470 LDA @LOCAL0B
    case 0xC2D6F5: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:471 INC
    case 0xC2D6F7: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:472 INC
    case 0xC2D6F8: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:473 STA @LOCAL0B
    case 0xC2D6F9: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:475 CMP #$0800
    case 0xC2D6FB: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg-jp.asm:475 CMP #$0800
    // Overlapping static entry reached from 0xC2D6FB.
    case 0xC2D6FD: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:476 BCC @UNKNOWN16
    case 0xC2D6FE: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D700: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D700.
    case 0xC2D702: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D703: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D705: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D705.
    case 0xC2D707: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:477 LOADPTR BUFFER, @VIRTUAL06
    case 0xC2D708: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D70A: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D70C: cpu.execute_instruction<0x85>(0x000024, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D70E: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:478 MOVE_INT @VIRTUAL06, @LOCAL07
    case 0xC2D710: cpu.execute_instruction<0x85>(0x000026, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D712: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D714: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D716: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D718: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D71A: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x005C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D71A.
    case 0xC2D71C: cpu.execute_instruction<0x5C>(0x0800A2, 4); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D71D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D71D.
    case 0xC2D71F: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D720: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D722: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    case 0xC2D724: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D722.
    case 0xC2D725: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:479 COPY_TO_VRAM1P @VIRTUAL06, $5C00, $800, 0
    // Overlapping static entry reached from 0xC2D725.
    case 0xC2D727: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D728: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    // Overlapping static entry reached from 0xC2D727.
    case 0xC2D729: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    // Overlapping static entry reached from 0xC2D728.
    case 0xC2D72A: cpu.execute_instruction<0xDC>(0x001C85, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D72B: cpu.execute_instruction<0x85>(0x00001C, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D72D: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    // Overlapping static entry reached from 0xC2D72D.
    case 0xC2D72F: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:481 LOADPTR BG_DATA_TABLE, @LOCAL04
    case 0xC2D730: cpu.execute_instruction<0x85>(0x00001E, 2); return true;
    // src/battle/load_battlebg-jp.asm:482 LDA @VIRTUAL02
    case 0xC2D732: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D734: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D736: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D737: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D738: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D739: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:483 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D73A: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:484 TAX
    case 0xC2D73C: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:485 STX @LOCAL06
    case 0xC2D73D: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D73F: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D741: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D743: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:486 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D745: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:487 TXA
    case 0xC2D747: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:488 CLC
    case 0xC2D748: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:489 ADC @VIRTUAL0A
    case 0xC2D749: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:490 STA @VIRTUAL0A
    case 0xC2D74B: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:491 STA @LOCAL00
    case 0xC2D74D: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg-jp.asm:492 LDA @VIRTUAL0A+2
    case 0xC2D74F: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:493 STA @LOCAL00+2
    case 0xC2D751: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:494 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    case 0xC2D753: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A9, 2); else cpu.execute_instruction<0xA9>(0x00AFA9, 3); return true;
    // src/battle/load_battlebg-jp.asm:494 LDA #.LOWORD(LOADED_BG_DATA_LAYER1)
    // Overlapping static entry reached from 0xC2D753.
    case 0xC2D755: cpu.execute_instruction<0xAF>(0xCF9F22, 4); return true;
    // src/battle/load_battlebg-jp.asm:495 JSL UNKNOWN_C2CFE5
    case 0xC2D756: cpu.execute_instruction<0x22>(0xC2CF9F, 4); return true;
    // src/battle/load_battlebg-jp.asm:495 JSL UNKNOWN_C2CFE5
    // Overlapping static entry reached from 0xC2D755.
    case 0xC2D759: cpu.execute_instruction<0xC2>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:496 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    case 0xC2D75A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000F5, 2); else cpu.execute_instruction<0xA9>(0x00AFF5, 3); return true;
    // src/battle/load_battlebg-jp.asm:496 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D759.
    case 0xC2D75B: cpu.execute_instruction<0xF5>(0x0000AF, 2); return true;
    // src/battle/load_battlebg-jp.asm:496 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D75A.
    case 0xC2D75C: cpu.execute_instruction<0xAF>(0xA90285, 4); return true;
    // src/battle/load_battlebg-jp.asm:497 STA @VIRTUAL02
    case 0xC2D75D: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:498 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    case 0xC2D75F: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000080, 2); else cpu.execute_instruction<0xA9>(0x000280, 3); return true;
    // src/battle/load_battlebg-jp.asm:498 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D75C.
    case 0xC2D760: cpu.execute_instruction<0x80>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:498 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 4
    // Overlapping static entry reached from 0xC2D75F.
    case 0xC2D761: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg-jp.asm:499 LDX @VIRTUAL02
    case 0xC2D762: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:500 STA __BSS_START__,X
    case 0xC2D764: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:501 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    case 0xC2D767: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x0000B5, 2); else cpu.execute_instruction<0xA0>(0x00AFB5, 3); return true;
    // src/battle/load_battlebg-jp.asm:501 LDY #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D767.
    case 0xC2D769: cpu.execute_instruction<0xAF>(0xA93084, 4); return true;
    // src/battle/load_battlebg-jp.asm:502 STY @LOCAL0B
    case 0xC2D76A: cpu.execute_instruction<0x84>(0x000030, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D76C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D769.
    case 0xC2D76D: cpu.execute_instruction<0xD9>(0x0085DA, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D76C.
    case 0xC2D76E: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D76F: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D76D.
    case 0xC2D770: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D771: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    // Overlapping static entry reached from 0xC2D771.
    case 0xC2D773: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:503 LOADPTR BATTLEBG_PALETTE_POINTERS, @LOCAL03
    case 0xC2D774: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D776: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D778: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D77A: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:504 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D77C: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:505 LDX @LOCAL06
    case 0xC2D77E: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:506 TXA
    case 0xC2D780: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:507 INC
    case 0xC2D781: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:508 CLC
    case 0xC2D782: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:509 ADC @VIRTUAL0A
    case 0xC2D783: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:510 STA @VIRTUAL0A
    case 0xC2D785: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:510 STA @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D7EC.
    case 0xC2D786: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D787: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D789: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D78B: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:511 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D78D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:512 LDA [@VIRTUAL0A]
    case 0xC2D78F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:513 AND #$00FF
    case 0xC2D791: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:513 AND #$00FF
    // Overlapping static entry reached from 0xC2D791.
    case 0xC2D793: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:514 ASL
    case 0xC2D794: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:515 ASL
    case 0xC2D795: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:516 CLC
    case 0xC2D796: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:517 ADC @VIRTUAL06
    case 0xC2D797: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:518 STA @VIRTUAL06
    case 0xC2D799: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D79B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D79B.
    case 0xC2D79D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D79E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A0: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A1: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:519 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D7A5: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7A7: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7A9: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7AB: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:520 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D7AD: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:521 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D7AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:521 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D7AF.
    case 0xC2D7B1: cpu.execute_instruction<0x00>(0x0000A4, 2); return true;
    // src/battle/load_battlebg-jp.asm:522 LDY @LOCAL0B
    case 0xC2D7B2: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:523 TYA
    case 0xC2D7B4: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:524 JSL MEMCPY16
    case 0xC2D7B5: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7B9: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7BB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7BD: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:525 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D7BF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:526 LDA [@VIRTUAL0A]
    case 0xC2D7C1: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:527 AND #$00FF
    case 0xC2D7C3: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:527 AND #$00FF
    // Overlapping static entry reached from 0xC2D7C3.
    case 0xC2D7C5: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:528 ASL
    case 0xC2D7C6: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:529 ASL
    case 0xC2D7C7: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:530 CLC
    case 0xC2D7C8: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:531 ADC @VIRTUAL06
    case 0xC2D7C9: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:532 STA @VIRTUAL06
    case 0xC2D7CB: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7CD: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D7CD.
    case 0xC2D7CF: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D0: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D2: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D5: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:533 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D7D7: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7D9: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7DB: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7DD: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:534 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7DF: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:535 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D7E1: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:535 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D7E1.
    case 0xC2D7E3: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:536 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    case 0xC2D7E4: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D5, 2); else cpu.execute_instruction<0xA9>(0x00AFD5, 3); return true;
    // src/battle/load_battlebg-jp.asm:536 LDA #.LOWORD(LOADED_BG_DATA_LAYER1) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D7E4.
    case 0xC2D7E6: cpu.execute_instruction<0xAF>(0x8EC322, 4); return true;
    // src/battle/load_battlebg-jp.asm:537 JSL MEMCPY16
    case 0xC2D7E7: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:537 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D7E6.
    case 0xC2D7EA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A4, 2); else cpu.execute_instruction<0xC0>(0x0030A4, 3); return true;
    // src/battle/load_battlebg-jp.asm:538 LDY @LOCAL0B
    case 0xC2D7EB: cpu.execute_instruction<0xA4>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:538 LDY @LOCAL0B
    // Overlapping static entry reached from 0xC2D7EA.
    case 0xC2D7EC: cpu.execute_instruction<0x30>(0x000098, 2); return true;
    // src/battle/load_battlebg-jp.asm:539 TYA
    case 0xC2D7ED: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7EE: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F0: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F3: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F4: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:540 PROMOTENEARPTRA @VIRTUAL0A
    case 0xC2D7F6: cpu.execute_instruction<0x64>(0x00000D, 2); return true;
    // src/battle/load_battlebg-jp.asm:541 REP #PROC_FLAGS::ACCUM8
    case 0xC2D7F8: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7FA: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7FC: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D7FE: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:542 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D800: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:543 LDX #32
    case 0xC2D802: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:543 LDX #32
    // Overlapping static entry reached from 0xC2D802.
    case 0xC2D804: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:544 STX @LOCAL06
    case 0xC2D805: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:545 LDX @VIRTUAL02
    case 0xC2D807: cpu.execute_instruction<0xA6>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:546 LDA __BSS_START__,X
    case 0xC2D809: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:547 LDX @LOCAL06
    case 0xC2D80C: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:548 JSL MEMCPY16
    case 0xC2D80E: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:549 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D812: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:550 LDA #3
    case 0xC2D814: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x008D03, 3); return true;
    // src/battle/load_battlebg-jp.asm:551 STA LOADED_BG_DATA_LAYER1
    case 0xC2D816: cpu.execute_instruction<0x8D>(0x00AFA9, 3); return true;
    // src/battle/load_battlebg-jp.asm:551 STA LOADED_BG_DATA_LAYER1
    // Overlapping static entry reached from 0xC2D814.
    case 0xC2D817: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000AF, 2); else cpu.execute_instruction<0xA9>(0x00C2AF, 3); return true;
    // src/battle/load_battlebg-jp.asm:552 REP #PROC_FLAGS::ACCUM8
    case 0xC2D819: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:552 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D817.
    case 0xC2D81A: cpu.execute_instruction<0x20>(0x002EA5, 3); return true;
    // src/battle/load_battlebg-jp.asm:553 LDA @LOCAL0A
    case 0xC2D81B: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg-jp.asm:554 STA @VIRTUAL04
    case 0xC2D81D: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:772 BNE :+
    // Macro caller: src/battle/load_battlebg-jp.asm:555 BEQL @UNKNOWN21
    case 0xC2D81F: cpu.execute_instruction<0xD0>(0x000003, 2); return true;
    // include/macros.asm:773 JMP dest
    // Macro caller: src/battle/load_battlebg-jp.asm:555 BEQL @UNKNOWN21
    case 0xC2D821: cpu.execute_instruction<0x4C>(0x00DA14, 3); return true;
    // src/battle/load_battlebg-jp.asm:556 LDA #3
    case 0xC2D824: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x000003, 3); return true;
    // src/battle/load_battlebg-jp.asm:556 LDA #3
    // Overlapping static entry reached from 0xC2D824.
    case 0xC2D826: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:557 STA CURRENT_LAYER_CONFIG
    case 0xC2D827: cpu.execute_instruction<0x8D>(0x00AF5F, 3); return true;
    // src/battle/load_battlebg-jp.asm:558 JSL UNKNOWN_C0AFCD
    case 0xC2D82A: cpu.execute_instruction<0x22>(0xC0AFAC, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D82E: cpu.execute_instruction<0xA5>(0x00001C, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D830: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D88D.
    case 0xC2D831: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D832: cpu.execute_instruction<0xA5>(0x00001E, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:559 MOVE_INT @LOCAL04, @VIRTUAL0A
    case 0xC2D834: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:560 LDA @VIRTUAL04
    case 0xC2D836: cpu.execute_instruction<0xA5>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D838: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83A: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83B: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83C: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83D: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:561 OPTIMIZED_MULT @VIRTUAL04, 17
    case 0xC2D83E: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:562 CLC
    case 0xC2D840: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:563 ADC @VIRTUAL0A
    case 0xC2D841: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:564 STA @VIRTUAL0A
    case 0xC2D843: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D845: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00D7A1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D845.
    case 0xC2D847: cpu.execute_instruction<0xD7>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D848: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D847.
    case 0xC2D849: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D84A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D849.
    case 0xC2D84B: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D84A.
    case 0xC2D84C: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:565 LOADPTR BATTLEBG_GFX_POINTERS, @VIRTUAL06
    case 0xC2D84D: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:566 LDA [@VIRTUAL0A]
    case 0xC2D84F: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:567 AND #$00FF
    case 0xC2D851: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:567 AND #$00FF
    // Overlapping static entry reached from 0xC2D851.
    case 0xC2D853: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // include/macros.asm:526 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:568 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D854: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:527 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:568 OPTIMIZED_MULT @VIRTUAL04, 4
    case 0xC2D855: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:569 CLC
    case 0xC2D856: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:570 ADC @VIRTUAL06
    case 0xC2D857: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:571 STA @VIRTUAL06
    case 0xC2D859: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D85B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D85B.
    case 0xC2D85D: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D85E: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D860: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D861: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D863: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:572 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D865: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D867: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D869: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D86B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:573 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D86D: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D86F: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D871: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D873: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:574 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D875: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D877: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D879: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D87B: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:575 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D87D: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg-jp.asm:576 JSL DECOMP
    case 0xC2D87F: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D883: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D885: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D887: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D889: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D88B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x003000, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D88B.
    case 0xC2D88D: cpu.execute_instruction<0x30>(0x0000A2, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D88E: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x001800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D88D.
    case 0xC2D88F: cpu.execute_instruction<0x00>(0x000018, 2); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D88E.
    case 0xC2D890: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D891: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D893: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    case 0xC2D895: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D893.
    case 0xC2D896: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:577 COPY_TO_VRAM1P @VIRTUAL06, $3000, $1800, 0
    // Overlapping static entry reached from 0xC2D896.
    case 0xC2D898: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x003DA9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D899: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00003D, 2); else cpu.execute_instruction<0xA9>(0x00D93D, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D898.
    case 0xC2D89A: cpu.execute_instruction<0x3D>(0x0085D9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D899.
    case 0xC2D89B: cpu.execute_instruction<0xD9>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D89C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D89A.
    case 0xC2D89D: cpu.execute_instruction<0x06>(0x0000A9, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D89E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D89D.
    case 0xC2D89F: cpu.execute_instruction<0xCA>(0x000000, 1); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D89E.
    case 0xC2D8A0: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:579 LOADPTR BATTLEBG_ARR_POINTERS, @VIRTUAL06
    case 0xC2D8A1: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:580 LDA [@VIRTUAL0A]
    case 0xC2D8A3: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:581 AND #$00FF
    case 0xC2D8A5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:581 AND #$00FF
    // Overlapping static entry reached from 0xC2D8A5.
    case 0xC2D8A7: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:582 ASL
    case 0xC2D8A8: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:583 ASL
    case 0xC2D8A9: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:584 CLC
    case 0xC2D8AA: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:585 ADC @VIRTUAL06
    case 0xC2D8AB: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:586 STA @VIRTUAL06
    case 0xC2D8AD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8AF: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D8AF.
    case 0xC2D8B1: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B2: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B4: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B5: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B7: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:587 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL0A
    case 0xC2D8B9: cpu.execute_instruction<0x84>(0x00000C, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8BB: cpu.execute_instruction<0xA5>(0x00000A, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8BD: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8BF: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:588 MOVE_INT @VIRTUAL0A, @LOCAL00
    case 0xC2D8C1: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C3: cpu.execute_instruction<0xA5>(0x000024, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C7: cpu.execute_instruction<0xA5>(0x000026, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:589 MOVE_INT @LOCAL07, @VIRTUAL06
    case 0xC2D8C9: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8CB: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8CD: cpu.execute_instruction<0x85>(0x000012, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8CF: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:590 MOVE_INT @VIRTUAL06, @LOCAL01
    case 0xC2D8D1: cpu.execute_instruction<0x85>(0x000014, 2); return true;
    // src/battle/load_battlebg-jp.asm:591 JSL DECOMP
    case 0xC2D8D3: cpu.execute_instruction<0x22>(0xC419EA, 4); return true;
    // src/battle/load_battlebg-jp.asm:592 LDA #0
    case 0xC2D8D7: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:592 LDA #0
    // Overlapping static entry reached from 0xC2D8D7.
    case 0xC2D8D9: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:593 STA @LOCAL0B
    case 0xC2D8DA: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:594 BRA @UNKNOWN20
    case 0xC2D8DC: cpu.execute_instruction<0x80>(0x000023, 2); return true;
    // include/macros.asm:870 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:596 STORE_INT1632 @VIRTUAL06
    case 0xC2D8DE: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:871 STZ dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:596 STORE_INT1632 @VIRTUAL06
    case 0xC2D8E0: cpu.execute_instruction<0x64>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:597 CLC
    case 0xC2D8E2: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // include/macros.asm:994 LDA var
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8E3: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8E5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x000001, 2); else cpu.execute_instruction<0x69>(0x000001, 3); return true;
    // include/macros.asm:995 ADC #.LOWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8E5.
    case 0xC2D8E7: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:996 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8E8: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8EA: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:997 LDA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D964.
    case 0xC2D8EB: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8EC: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x00007F, 2); else cpu.execute_instruction<0x69>(0x00007F, 3); return true;
    // include/macros.asm:998 ADC #.HIWORD(constant)
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D8EC.
    case 0xC2D8EE: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:999 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:598 VAR_ADD_CONST_INT_ASSIGN BUFFER + 1, @VIRTUAL06
    case 0xC2D8EF: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:599 SEP #PROC_FLAGS::ACCUM8
    case 0xC2D8F1: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:600 LDA [@VIRTUAL06]
    case 0xC2D8F3: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:601 AND #$00DF
    case 0xC2D8F5: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000DF, 2); else cpu.execute_instruction<0x29>(0x0087DF, 3); return true;
    // src/battle/load_battlebg-jp.asm:602 STA [@VIRTUAL06]
    case 0xC2D8F7: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:602 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2D8F5.
    case 0xC2D8F8: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_battlebg-jp.asm:603 REP #PROC_FLAGS::ACCUM8
    case 0xC2D8F9: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:603 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2D8F8.
    case 0xC2D8FA: cpu.execute_instruction<0x20>(0x0030A5, 3); return true;
    // src/battle/load_battlebg-jp.asm:604 LDA @LOCAL0B
    case 0xC2D8FB: cpu.execute_instruction<0xA5>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:605 INC
    case 0xC2D8FD: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:606 INC
    case 0xC2D8FE: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:607 STA @LOCAL0B
    case 0xC2D8FF: cpu.execute_instruction<0x85>(0x000030, 2); return true;
    // src/battle/load_battlebg-jp.asm:609 CMP #$0800
    case 0xC2D901: if (cpu.status_register & 0x20) cpu.execute_instruction<0xC9>(0x000000, 2); else cpu.execute_instruction<0xC9>(0x000800, 3); return true;
    // src/battle/load_battlebg-jp.asm:609 CMP #$0800
    // Overlapping static entry reached from 0xC2D901.
    case 0xC2D903: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:610 BCC @UNKNOWN19
    case 0xC2D904: cpu.execute_instruction<0x90>(0x0000D8, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D906: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D906.
    case 0xC2D908: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D909: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D90B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D90B.
    case 0xC2D90D: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D90E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D910: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D910.
    case 0xC2D912: cpu.execute_instruction<0x0C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D913: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D913.
    case 0xC2D915: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D916: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D918: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x002200, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    case 0xC2D91A: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D918.
    case 0xC2D91B: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_battlebg-jp.asm:611 COPY_TO_VRAM1 BUFFER, $C00, $800, 0
    // Overlapping static entry reached from 0xC2D91B.
    case 0xC2D91D: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A9, 2); else cpu.execute_instruction<0xC0>(0x00A1A9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D91E: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000A1, 2); else cpu.execute_instruction<0xA9>(0x00DCA1, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D91D.
    case 0xC2D91F: cpu.execute_instruction<0xA1>(0x0000DC, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D91E.
    case 0xC2D920: cpu.execute_instruction<0xDC>(0x000685, 3); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D921: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D923: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D923.
    case 0xC2D925: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:613 LOADPTR BG_DATA_TABLE, @VIRTUAL06
    case 0xC2D926: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:614 LDA @LOCAL0A
    case 0xC2D928: cpu.execute_instruction<0xA5>(0x00002E, 2); return true;
    // src/battle/load_battlebg-jp.asm:615 STA @VIRTUAL04
    case 0xC2D92A: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:594 STA scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D92C: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // include/macros.asm:595 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D92E: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:596 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D92F: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:597 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D930: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:598 ASL
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D931: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:599 ADC scratch
    // Macro caller: src/battle/load_battlebg-jp.asm:616 OPTIMIZED_MULT @VIRTUAL04, .SIZEOF(bg_layer_config_entry)
    case 0xC2D932: cpu.execute_instruction<0x65>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:617 TAX
    case 0xC2D934: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:618 STX @LOCAL06
    case 0xC2D935: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:619 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    case 0xC2D937: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000020, 2); else cpu.execute_instruction<0xA0>(0x00B020, 3); return true;
    // src/battle/load_battlebg-jp.asm:619 LDY #.LOWORD(LOADED_BG_DATA_LAYER2)
    // Overlapping static entry reached from 0xC2D937.
    case 0xC2D939: cpu.execute_instruction<0xB0>(0x000084, 2); return true;
    // src/battle/load_battlebg-jp.asm:620 STY @LOCAL02
    case 0xC2D93A: cpu.execute_instruction<0x84>(0x000016, 2); return true;
    // src/battle/load_battlebg-jp.asm:620 STY @LOCAL02
    // Overlapping static entry reached from 0xC2D939.
    case 0xC2D93B: cpu.execute_instruction<0x16>(0x00008A, 2); return true;
    // src/battle/load_battlebg-jp.asm:621 TXA
    case 0xC2D93C: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D93D: cpu.execute_instruction<0xA6>(0x000006, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D93F: cpu.execute_instruction<0x86>(0x00000A, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D941: cpu.execute_instruction<0xA6>(0x000008, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:622 MOVE_INTX @VIRTUAL06, @VIRTUAL0A
    case 0xC2D943: cpu.execute_instruction<0x86>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:623 CLC
    case 0xC2D945: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:624 ADC @VIRTUAL0A
    case 0xC2D946: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:625 STA @VIRTUAL0A
    case 0xC2D948: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:626 STA @LOCAL00
    case 0xC2D94A: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/load_battlebg-jp.asm:627 LDA @VIRTUAL0A+2
    case 0xC2D94C: cpu.execute_instruction<0xA5>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:628 STA @LOCAL00+2
    case 0xC2D94E: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:629 TYA
    case 0xC2D950: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:630 JSL UNKNOWN_C2CFE5
    case 0xC2D951: cpu.execute_instruction<0x22>(0xC2CF9F, 4); return true;
    // src/battle/load_battlebg-jp.asm:631 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    case 0xC2D955: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00006C, 2); else cpu.execute_instruction<0xA9>(0x00B06C, 3); return true;
    // src/battle/load_battlebg-jp.asm:631 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette_pointer
    // Overlapping static entry reached from 0xC2D955.
    case 0xC2D957: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:632 STA @VIRTUAL04
    case 0xC2D958: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:632 STA @VIRTUAL04
    // Overlapping static entry reached from 0xC2D957.
    case 0xC2D959: cpu.execute_instruction<0x04>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:633 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    case 0xC2D95A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000C0, 2); else cpu.execute_instruction<0xA9>(0x0002C0, 3); return true;
    // src/battle/load_battlebg-jp.asm:633 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2D959.
    case 0xC2D95B: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x000002, 2); else cpu.execute_instruction<0xC0>(0x00A602, 3); return true;
    // src/battle/load_battlebg-jp.asm:633 LDA #.LOWORD(PALETTES) + BPP4PALETTE_SIZE * 6
    // Overlapping static entry reached from 0xC2D95A.
    case 0xC2D95C: cpu.execute_instruction<0x02>(0x0000A6, 2); return true;
    // src/battle/load_battlebg-jp.asm:634 LDX @VIRTUAL04
    case 0xC2D95D: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:634 LDX @VIRTUAL04
    // Overlapping static entry reached from 0xC2D95B.
    case 0xC2D95E: cpu.execute_instruction<0x04>(0x00009D, 2); return true;
    // src/battle/load_battlebg-jp.asm:635 STA __BSS_START__,X
    case 0xC2D95F: cpu.execute_instruction<0x9D>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:635 STA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D95E.
    case 0xC2D960: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg-jp.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    case 0xC2D962: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00002C, 2); else cpu.execute_instruction<0xA9>(0x00B02C, 3); return true;
    // src/battle/load_battlebg-jp.asm:636 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette
    // Overlapping static entry reached from 0xC2D962.
    case 0xC2D964: cpu.execute_instruction<0xB0>(0x000085, 2); return true;
    // src/battle/load_battlebg-jp.asm:637 STA @VIRTUAL02
    case 0xC2D965: cpu.execute_instruction<0x85>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:637 STA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D964.
    case 0xC2D966: cpu.execute_instruction<0x02>(0x0000A9, 2); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D967: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000D9, 2); else cpu.execute_instruction<0xA9>(0x00DAD9, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D967.
    case 0xC2D969: cpu.execute_instruction<0xDA>(0x000000, 1); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D96A: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D96C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x0000CA, 2); else cpu.execute_instruction<0xA9>(0x0000CA, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    // Overlapping static entry reached from 0xC2D96C.
    case 0xC2D96E: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_battlebg-jp.asm:638 LOADPTR BATTLEBG_PALETTE_POINTERS, @VIRTUAL0A
    case 0xC2D96F: cpu.execute_instruction<0x85>(0x00000C, 2); return true;
    // src/battle/load_battlebg-jp.asm:639 LDX @LOCAL06
    case 0xC2D971: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:640 TXA
    case 0xC2D973: cpu.execute_instruction<0x8A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:641 INC
    case 0xC2D974: cpu.execute_instruction<0x1A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:642 CLC
    case 0xC2D975: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:643 ADC @VIRTUAL06
    case 0xC2D976: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:644 STA @VIRTUAL06
    case 0xC2D978: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:645 STA @LOCAL03
    case 0xC2D97A: cpu.execute_instruction<0x85>(0x000018, 2); return true;
    // src/battle/load_battlebg-jp.asm:646 LDA @VIRTUAL06+2
    case 0xC2D97C: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:647 STA @LOCAL03+2
    case 0xC2D97E: cpu.execute_instruction<0x85>(0x00001A, 2); return true;
    // src/battle/load_battlebg-jp.asm:648 LDA [@VIRTUAL06]
    case 0xC2D980: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:649 AND #$00FF
    case 0xC2D982: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:649 AND #$00FF
    // Overlapping static entry reached from 0xC2D982.
    case 0xC2D984: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:650 ASL
    case 0xC2D985: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:651 ASL
    case 0xC2D986: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // include/macros.asm:1037 LDX src
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D987: cpu.execute_instruction<0xA6>(0x00000A, 2); return true;
    // include/macros.asm:1038 STX dest
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D989: cpu.execute_instruction<0x86>(0x000006, 2); return true;
    // include/macros.asm:1039 LDX src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D98B: cpu.execute_instruction<0xA6>(0x00000C, 2); return true;
    // include/macros.asm:1040 STX dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:652 MOVE_INTX @VIRTUAL0A, @VIRTUAL06
    case 0xC2D98D: cpu.execute_instruction<0x86>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:653 CLC
    case 0xC2D98F: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:654 ADC @VIRTUAL06
    case 0xC2D990: cpu.execute_instruction<0x65>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:655 STA @VIRTUAL06
    case 0xC2D992: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D994: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D994.
    case 0xC2D996: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D997: cpu.execute_instruction<0xB7>(0x000006, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D999: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D99A: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D99C: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:656 DEREFERENCE_PTR_TO @VIRTUAL06, @VIRTUAL06
    case 0xC2D99E: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A0: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A2: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A4: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:657 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9A6: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:658 LDX #.SIZEOF(loaded_bg_data::palette)
    case 0xC2D9A8: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:658 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D5A6.
    case 0xC2D9A9: cpu.execute_instruction<0x20>(0x00A500, 3); return true;
    // src/battle/load_battlebg-jp.asm:658 LDX #.SIZEOF(loaded_bg_data::palette)
    // Overlapping static entry reached from 0xC2D9A8.
    case 0xC2D9AA: cpu.execute_instruction<0x00>(0x0000A5, 2); return true;
    // src/battle/load_battlebg-jp.asm:659 LDA @VIRTUAL02
    case 0xC2D9AB: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:659 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D9A9.
    case 0xC2D9AC: cpu.execute_instruction<0x02>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:660 JSL MEMCPY16
    case 0xC2D9AD: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B1: cpu.execute_instruction<0xA5>(0x000018, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B3: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B5: cpu.execute_instruction<0xA5>(0x00001A, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:661 MOVE_INT @LOCAL03, @VIRTUAL06
    case 0xC2D9B7: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_battlebg-jp.asm:662 LDA [@VIRTUAL06]
    case 0xC2D9B9: cpu.execute_instruction<0xA7>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:663 AND #$00FF
    case 0xC2D9BB: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:663 AND #$00FF
    // Overlapping static entry reached from 0xC2D9BB.
    case 0xC2D9BD: cpu.execute_instruction<0x00>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:664 ASL
    case 0xC2D9BE: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:665 ASL
    case 0xC2D9BF: cpu.execute_instruction<0x0A>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:666 CLC
    case 0xC2D9C0: cpu.execute_instruction<0x18>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:667 ADC @VIRTUAL0A
    case 0xC2D9C1: cpu.execute_instruction<0x65>(0x00000A, 2); return true;
    // src/battle/load_battlebg-jp.asm:668 STA @VIRTUAL0A
    case 0xC2D9C3: cpu.execute_instruction<0x85>(0x00000A, 2); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9C5: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000002, 2); else cpu.execute_instruction<0xA0>(0x000002, 3); return true;
    // include/macros.asm:1134 LDY #$0002
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    // Overlapping static entry reached from 0xC2D9C5.
    case 0xC2D9C7: cpu.execute_instruction<0x00>(0x0000B7, 2); return true;
    // include/macros.asm:1135 LDA [ptr],Y
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9C8: cpu.execute_instruction<0xB7>(0x00000A, 2); return true;
    // include/macros.asm:1136 TAY
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CA: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // include/macros.asm:1137 LDA [ptr]
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CB: cpu.execute_instruction<0xA7>(0x00000A, 2); return true;
    // include/macros.asm:1138 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CD: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:1139 STY dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:669 DEREFERENCE_PTR_TO @VIRTUAL0A, @VIRTUAL06
    case 0xC2D9CF: cpu.execute_instruction<0x84>(0x000008, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:670 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9D7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:671 LDX #.SIZEOF(loaded_bg_data::palette2)
    case 0xC2D9D9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:671 LDX #.SIZEOF(loaded_bg_data::palette2)
    // Overlapping static entry reached from 0xC2D9D9.
    case 0xC2D9DB: cpu.execute_instruction<0x00>(0x0000A9, 2); return true;
    // src/battle/load_battlebg-jp.asm:672 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    case 0xC2D9DC: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00004C, 2); else cpu.execute_instruction<0xA9>(0x00B04C, 3); return true;
    // src/battle/load_battlebg-jp.asm:672 LDA #.LOWORD(LOADED_BG_DATA_LAYER2) + loaded_bg_data::palette2
    // Overlapping static entry reached from 0xC2D9DC.
    case 0xC2D9DE: cpu.execute_instruction<0xB0>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:673 JSL MEMCPY16
    case 0xC2D9DF: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:673 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D9DE.
    case 0xC2D9E0: cpu.execute_instruction<0xC3>(0x00008E, 2); return true;
    // src/battle/load_battlebg-jp.asm:673 JSL MEMCPY16
    // Overlapping static entry reached from 0xC2D9E0.
    case 0xC2D9E2: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x0000A5, 2); else cpu.execute_instruction<0xC0>(0x0002A5, 3); return true;
    // src/battle/load_battlebg-jp.asm:674 LDA @VIRTUAL02
    case 0xC2D9E3: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/load_battlebg-jp.asm:674 LDA @VIRTUAL02
    // Overlapping static entry reached from 0xC2D9E2.
    case 0xC2D9E4: cpu.execute_instruction<0x02>(0x000085, 2); return true;
    // include/macros.asm:908 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9E5: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:909 PHB
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9E7: cpu.execute_instruction<0x8B>(0x000000, 1); return true;
    // include/macros.asm:910 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9E8: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:911 PLA
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9EA: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // include/macros.asm:848 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9EB: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // include/macros.asm:849 STZ dest+1
    // Macro caller: src/battle/load_battlebg-jp.asm:675 PROMOTENEARPTRA @VIRTUAL06
    case 0xC2D9ED: cpu.execute_instruction<0x64>(0x000009, 2); return true;
    // src/battle/load_battlebg-jp.asm:676 REP #PROC_FLAGS::ACCUM8
    case 0xC2D9EF: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F1: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F3: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F5: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_battlebg-jp.asm:677 MOVE_INT @VIRTUAL06, @LOCAL00
    case 0xC2D9F7: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // src/battle/load_battlebg-jp.asm:678 LDX #32
    case 0xC2D9F9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000020, 2); else cpu.execute_instruction<0xA2>(0x000020, 3); return true;
    // src/battle/load_battlebg-jp.asm:678 LDX #32
    // Overlapping static entry reached from 0xC2D9F9.
    case 0xC2D9FB: cpu.execute_instruction<0x00>(0x000086, 2); return true;
    // src/battle/load_battlebg-jp.asm:679 STX @LOCAL06
    case 0xC2D9FC: cpu.execute_instruction<0x86>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:680 LDX @VIRTUAL04
    case 0xC2D9FE: cpu.execute_instruction<0xA6>(0x000004, 2); return true;
    // src/battle/load_battlebg-jp.asm:681 LDA __BSS_START__,X
    case 0xC2DA00: cpu.execute_instruction<0xBD>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:681 LDA __BSS_START__,X
    // Overlapping static entry reached from 0xC2D9DE.
    case 0xC2DA02: cpu.execute_instruction<0x00>(0x0000A6, 2); return true;
    // src/battle/load_battlebg-jp.asm:682 LDX @LOCAL06
    case 0xC2DA03: cpu.execute_instruction<0xA6>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:683 JSL MEMCPY16
    case 0xC2DA05: cpu.execute_instruction<0x22>(0xC08EC3, 4); return true;
    // src/battle/load_battlebg-jp.asm:684 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA09: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:685 LDA #4
    case 0xC2DA0B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000004, 2); else cpu.execute_instruction<0xA9>(0x00A404, 3); return true;
    // src/battle/load_battlebg-jp.asm:686 LDY @LOCAL02
    case 0xC2DA0D: cpu.execute_instruction<0xA4>(0x000016, 2); return true;
    // src/battle/load_battlebg-jp.asm:686 LDY @LOCAL02
    // Overlapping static entry reached from 0xC2DA0B.
    case 0xC2DA0E: cpu.execute_instruction<0x16>(0x000099, 2); return true;
    // src/battle/load_battlebg-jp.asm:687 STA __BSS_START__,Y
    case 0xC2DA0F: cpu.execute_instruction<0x99>(0x000000, 3); return true;
    // src/battle/load_battlebg-jp.asm:687 STA __BSS_START__,Y
    // Overlapping static entry reached from 0xC2DA0E.
    case 0xC2DA10: cpu.execute_instruction<0x00>(0x000000, 2); return true;
    // src/battle/load_battlebg-jp.asm:688 BRA @UNKNOWN22
    case 0xC2DA12: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/load_battlebg-jp.asm:690 SEP #PROC_FLAGS::ACCUM8
    case 0xC2DA14: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:691 STZ LOADED_BG_DATA_LAYER2
    case 0xC2DA16: cpu.execute_instruction<0x9C>(0x00B020, 3); return true;
    // src/battle/load_battlebg-jp.asm:693 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA19: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:694 LDA #$0817
    case 0xC2DA1B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000017, 2); else cpu.execute_instruction<0xA9>(0x000817, 3); return true;
    // src/battle/load_battlebg-jp.asm:694 LDA #$0817
    // Overlapping static entry reached from 0xC2DA1B.
    case 0xC2DA1D: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // src/battle/load_battlebg-jp.asm:695 STA LETTERBOX_VISIBLE_SCREEN_VALUE
    case 0xC2DA1E: cpu.execute_instruction<0x8D>(0x00AF83, 3); return true;
    // src/battle/load_battlebg-jp.asm:696 LDA #$0013
    case 0xC2DA21: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000013, 2); else cpu.execute_instruction<0xA9>(0x000013, 3); return true;
    // src/battle/load_battlebg-jp.asm:696 LDA #$0013
    // Overlapping static entry reached from 0xC2DA21.
    case 0xC2DA23: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:697 STA LETTERBOX_NONVISIBLE_SCREEN_VALUE
    case 0xC2DA24: cpu.execute_instruction<0x8D>(0x00AF85, 3); return true;
    // src/battle/load_battlebg-jp.asm:699 REP #PROC_FLAGS::ACCUM8
    case 0xC2DA27: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_battlebg-jp.asm:700 STZ DISTORT_30FPS
    case 0xC2DA29: cpu.execute_instruction<0x9C>(0x00AF81, 3); return true;
    // src/battle/load_battlebg-jp.asm:701 LDA LOADED_BG_DATA_LAYER2
    case 0xC2DA2C: cpu.execute_instruction<0xAD>(0x00B020, 3); return true;
    // src/battle/load_battlebg-jp.asm:702 AND #$00FF
    case 0xC2DA2F: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:702 AND #$00FF
    // Overlapping static entry reached from 0xC2DA2F.
    case 0xC2DA31: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg-jp.asm:703 BEQ @UNKNOWN24
    case 0xC2DA32: cpu.execute_instruction<0xF0>(0x00000E, 2); return true;
    // src/battle/load_battlebg-jp.asm:704 LDA LOADED_BG_DATA_LAYER2 + loaded_bg_data::distortion_styles
    case 0xC2DA34: cpu.execute_instruction<0xAD>(0x00B081, 3); return true;
    // src/battle/load_battlebg-jp.asm:705 AND #$00FF
    case 0xC2DA37: if (cpu.status_register & 0x20) cpu.execute_instruction<0x29>(0x0000FF, 2); else cpu.execute_instruction<0x29>(0x0000FF, 3); return true;
    // src/battle/load_battlebg-jp.asm:705 AND #$00FF
    // Overlapping static entry reached from 0xC2DA37.
    case 0xC2DA39: cpu.execute_instruction<0x00>(0x0000F0, 2); return true;
    // src/battle/load_battlebg-jp.asm:706 BEQ @UNKNOWN24
    case 0xC2DA3A: cpu.execute_instruction<0xF0>(0x000006, 2); return true;
    // src/battle/load_battlebg-jp.asm:707 LDA #1
    case 0xC2DA3C: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000001, 2); else cpu.execute_instruction<0xA9>(0x000001, 3); return true;
    // src/battle/load_battlebg-jp.asm:707 LDA #1
    // Overlapping static entry reached from 0xC2DA3C.
    case 0xC2DA3E: cpu.execute_instruction<0x00>(0x00008D, 2); return true;
    // src/battle/load_battlebg-jp.asm:708 STA DISTORT_30FPS
    case 0xC2DA3F: cpu.execute_instruction<0x8D>(0x00AF81, 3); return true;
    // src/battle/load_battlebg-jp.asm:710 JSL UNKNOWN_C2D0AC
    case 0xC2DA42: cpu.execute_instruction<0x22>(0xC2D060, 4); return true;
    // src/battle/load_battlebg-jp.asm:711 LDA LETTERBOX_TOP_END
    case 0xC2DA46: cpu.execute_instruction<0xAD>(0x00AF87, 3); return true;
    // src/battle/load_battlebg-jp.asm:712 BEQ @UNKNOWN25
    case 0xC2DA49: cpu.execute_instruction<0xF0>(0x000007, 2); return true;
    // src/battle/load_battlebg-jp.asm:713 LDA #2
    case 0xC2DA4B: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000002, 2); else cpu.execute_instruction<0xA9>(0x000002, 3); return true;
    // src/battle/load_battlebg-jp.asm:713 LDA #2
    // Overlapping static entry reached from 0xC2DA4B.
    case 0xC2DA4D: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_battlebg-jp.asm:714 JSL UNKNOWN_C429E8
    case 0xC2DA4E: cpu.execute_instruction<0x22>(0xC42926, 4); return true;
    // src/battle/load_battlebg-jp.asm:716 JSL UNKNOWN_C2E9ED
    case 0xC2DA52: cpu.execute_instruction<0x22>(0xC2E906, 4); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_battlebg-jp.asm:717 END_C_FUNCTION
    case 0xC2DA56: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_battlebg-jp.asm:717 END_C_FUNCTION
    case 0xC2DA57: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_battlebg_movement.asm (source_named).
bool execute_battle_load_battlebg_movement_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // src/battle/load_battlebg_movement.asm:3 JSL MOVEMENT_DATA_READ16
    case 0xC0A956: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/battle/load_battlebg_movement.asm:4 PHA
    case 0xC0A95A: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // src/battle/load_battlebg_movement.asm:5 STY $94
    case 0xC0A95B: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/battle/load_battlebg_movement.asm:6 JSL MOVEMENT_DATA_READ16
    case 0xC0A95D: cpu.execute_instruction<0x22>(0xC09D73, 4); return true;
    // src/battle/load_battlebg_movement.asm:7 TAX
    case 0xC0A961: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/load_battlebg_movement.asm:8 STY $94
    case 0xC0A962: cpu.execute_instruction<0x84>(0x000094, 2); return true;
    // src/battle/load_battlebg_movement.asm:9 PLA
    case 0xC0A964: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/load_battlebg_movement.asm:10 JSL LOAD_BACKGROUND_ANIMATION
    case 0xC0A965: cpu.execute_instruction<0x22>(0xC450F4, 4); return true;
    // src/battle/load_battlebg_movement.asm:11 RTL
    case 0xC0A969: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/load_enemy_battle_sprites.asm (source_named).
bool execute_battle_load_enemy_battle_sprites_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2C882: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C884: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C885: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C886: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000EE, 2); else cpu.execute_instruction<0x69>(0x00FFEE, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    // Overlapping static entry reached from 0xC2C886.
    case 0xC2C888: cpu.execute_instruction<0xFF>(0x09A95B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:6 END_STACK_VARS
    case 0xC2C889: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:7 LDA #9
    case 0xC2C88A: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000009, 2); else cpu.execute_instruction<0xA9>(0x000009, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:7 LDA #9
    // Overlapping static entry reached from 0xC2C88A.
    case 0xC2C88C: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:8 JSL UNKNOWN_C08D79
    case 0xC2C88D: cpu.execute_instruction<0x22>(0xC08D6A, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:9 LDY #$0000
    case 0xC2C891: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x000000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:9 LDY #$0000
    // Overlapping static entry reached from 0xC2C891.
    case 0xC2C893: cpu.execute_instruction<0x00>(0x0000A2, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:10 LDX #$5800
    case 0xC2C894: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005800, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:10 LDX #$5800
    // Overlapping static entry reached from 0xC2C894.
    case 0xC2C896: cpu.execute_instruction<0x58>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:11 TYA ;BG_TILEMAP_SIZE::NORMAL
    case 0xC2C897: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:12 JSL SET_BG1_VRAM_LOCATION
    case 0xC2C898: cpu.execute_instruction<0x22>(0xC08D8F, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:13 LDY #$1000
    case 0xC2C89C: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x001000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:13 LDY #$1000
    // Overlapping static entry reached from 0xC2C89C.
    case 0xC2C89E: cpu.execute_instruction<0x10>(0x0000A2, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    case 0xC2C89F: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x005C00, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    // Overlapping static entry reached from 0xC2C89E.
    case 0xC2C8A0: cpu.execute_instruction<0x00>(0x00005C, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:14 LDX #$5C00
    // Overlapping static entry reached from 0xC2C89F.
    case 0xC2C8A1: cpu.execute_instruction<0x5C>(0x0000A9, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:15 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8A2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:15 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2C8A2.
    case 0xC2C8A4: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:16 JSL SET_BG2_VRAM_LOCATION
    case 0xC2C8A5: cpu.execute_instruction<0x22>(0xC08DCF, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:17 LDY #$6000
    case 0xC2C8A9: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x006000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:17 LDY #$6000
    // Overlapping static entry reached from 0xC2C8A9.
    case 0xC2C8AB: cpu.execute_instruction<0x60>(0x000000, 1); return true;
    // src/battle/load_enemy_battle_sprites.asm:18 LDX #$7C00
    case 0xC2C8AC: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x007C00, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:18 LDX #$7C00
    // Overlapping static entry reached from 0xC2C8AC.
    case 0xC2C8AE: cpu.execute_instruction<0x7C>(0x0000A9, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    case 0xC2C8AF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:19 LDA #BG_TILEMAP_SIZE::NORMAL
    // Overlapping static entry reached from 0xC2C8AF.
    case 0xC2C8B1: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:20 JSL SET_BG3_VRAM_LOCATION
    case 0xC2C8B2: cpu.execute_instruction<0x22>(0xC08E0D, 4); return true;
    // src/battle/load_enemy_battle_sprites.asm:21 LDA #$0061
    case 0xC2C8B6: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000061, 2); else cpu.execute_instruction<0xA9>(0x000061, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:21 LDA #$0061
    // Overlapping static entry reached from 0xC2C8B6.
    case 0xC2C8B8: cpu.execute_instruction<0x00>(0x000022, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:22 JSL SET_OAM_SIZE
    case 0xC2C8B9: cpu.execute_instruction<0x22>(0xC08D83, 4); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C8BD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008000, 3); return true;
    // include/macros.asm:223 LDA #.LOWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C8BD.
    case 0xC2C8BF: cpu.execute_instruction<0x80>(0x000085, 2); return true;
    // include/macros.asm:224 STA var
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C8C0: cpu.execute_instruction<0x85>(0x000006, 2); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C8C2: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x00007F, 2); else cpu.execute_instruction<0xA9>(0x00007F, 3); return true;
    // include/macros.asm:225 LDA #.HIWORD(val)
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    // Overlapping static entry reached from 0xC2C8C2.
    case 0xC2C8C4: cpu.execute_instruction<0x00>(0x000085, 2); return true;
    // include/macros.asm:226 STA var+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:23 LOADPTR BUFFER + $8000, @VIRTUAL06
    case 0xC2C8C5: cpu.execute_instruction<0x85>(0x000008, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:24 SEP #PROC_FLAGS::ACCUM8
    case 0xC2C8C7: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:25 LDA #0
    case 0xC2C8C9: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x008700, 3); return true;
    // src/battle/load_enemy_battle_sprites.asm:26 STA [@VIRTUAL06]
    case 0xC2C8CB: cpu.execute_instruction<0x87>(0x000006, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:26 STA [@VIRTUAL06]
    // Overlapping static entry reached from 0xC2C8C9.
    case 0xC2C8CC: cpu.execute_instruction<0x06>(0x0000C2, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:27 REP #PROC_FLAGS::ACCUM8
    case 0xC2C8CD: cpu.execute_instruction<0xC2>(0x000020, 2); return true;
    // src/battle/load_enemy_battle_sprites.asm:27 REP #PROC_FLAGS::ACCUM8
    // Overlapping static entry reached from 0xC2C8CC.
    case 0xC2C8CE: cpu.execute_instruction<0x20>(0x0006A5, 3); return true;
    // include/macros.asm:836 LDA src
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8CF: cpu.execute_instruction<0xA5>(0x000006, 2); return true;
    // include/macros.asm:837 STA dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8D1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // include/macros.asm:838 LDA src+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8D3: cpu.execute_instruction<0xA5>(0x000008, 2); return true;
    // include/macros.asm:839 STA dest+2
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8D5: cpu.execute_instruction<0x85>(0x000010, 2); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8D7: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA0>(0x000000, 2); else cpu.execute_instruction<0xA0>(0x007C00, 3); return true;
    // include/macros.asm:1153 LDY #dest
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C8D7.
    case 0xC2C8D9: cpu.execute_instruction<0x7C>(0x0000A2, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8DA: if (cpu.status_register & 0x10) cpu.execute_instruction<0xA2>(0x000000, 2); else cpu.execute_instruction<0xA2>(0x000800, 3); return true;
    // include/macros.asm:1157 LDX #size
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C8DA.
    case 0xC2C8DC: cpu.execute_instruction<0x08>(0x000000, 1); return true;
    // include/macros.asm:1159 SEP #PROC_FLAGS::ACCUM8
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8DD: cpu.execute_instruction<0xE2>(0x000020, 2); return true;
    // include/macros.asm:1163 LDA #unk
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8DF: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000003, 2); else cpu.execute_instruction<0xA9>(0x002203, 3); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    case 0xC2C8E1: cpu.execute_instruction<0x22>(0xC08616, 4); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C8DF.
    case 0xC2C8E2: cpu.execute_instruction<0x16>(0x000086, 2); return true;
    // include/macros.asm:1165 JSL PREPARE_VRAM_COPY
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:28 COPY_TO_VRAM1P @VIRTUAL06, $7C00, $800, 3
    // Overlapping static entry reached from 0xC2C8E2.
    case 0xC2C8E4: if (cpu.status_register & 0x10) cpu.execute_instruction<0xC0>(0x00002B, 2); else cpu.execute_instruction<0xC0>(0x006B2B, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:29 END_C_FUNCTION
    case 0xC2C8E5: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/load_enemy_battle_sprites.asm:29 END_C_FUNCTION
    case 0xC2C8E6: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

// Assembly routine source: src/battle/lose_hp_status.asm (source_named).
bool execute_battle_lose_hp_status_instruction(MainCpu65816& cpu, std::uint32_t address) {
    switch (address) {
    // include/macros.asm:4 REP #PROC_FLAGS::ACCUM8 | PROC_FLAGS::INDEX8 | PROC_FLAGS::CARRY
    // Macro caller: src/battle/lose_hp_status.asm:3 BEGIN_C_FUNCTION_FAR
    case 0xC2BC91: cpu.execute_instruction<0xC2>(0x000031, 2); return true;
    // include/macros.asm:147 PHD
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC93: cpu.execute_instruction<0x0B>(0x000000, 1); return true;
    // include/macros.asm:149 PHA
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC94: cpu.execute_instruction<0x48>(0x000000, 1); return true;
    // include/macros.asm:151 TDC
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC95: cpu.execute_instruction<0x7B>(0x000000, 1); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC96: if (cpu.status_register & 0x20) cpu.execute_instruction<0x69>(0x0000F0, 2); else cpu.execute_instruction<0x69>(0x00FFF0, 3); return true;
    // include/macros.asm:152 ADC #$FFFF - @STACKSIZE + 1
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    // Overlapping static entry reached from 0xC2BC96.
    case 0xC2BC98: cpu.execute_instruction<0xFF>(0x86685B, 4); return true;
    // include/macros.asm:153 TCD
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC99: cpu.execute_instruction<0x5B>(0x000000, 1); return true;
    // include/macros.asm:155 PLA
    // Macro caller: src/battle/lose_hp_status.asm:8 END_STACK_VARS
    case 0xC2BC9A: cpu.execute_instruction<0x68>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:9 STX @VIRTUAL02
    case 0xC2BC9B: cpu.execute_instruction<0x86>(0x000002, 2); return true;
    // src/battle/lose_hp_status.asm:9 STX @VIRTUAL02
    // Overlapping static entry reached from 0xC2BC98.
    case 0xC2BC9C: cpu.execute_instruction<0x02>(0x0000A8, 2); return true;
    // src/battle/lose_hp_status.asm:10 TAY
    case 0xC2BC9D: cpu.execute_instruction<0xA8>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:11 LDA a:battler::hp_target,Y
    case 0xC2BC9E: cpu.execute_instruction<0xB9>(0x000013, 3); return true;
    // src/battle/lose_hp_status.asm:12 STA @LOCAL00
    case 0xC2BCA1: cpu.execute_instruction<0x85>(0x00000E, 2); return true;
    // src/battle/lose_hp_status.asm:13 STA @VIRTUAL04
    case 0xC2BCA3: cpu.execute_instruction<0x85>(0x000004, 2); return true;
    // src/battle/lose_hp_status.asm:14 LDA @VIRTUAL02
    case 0xC2BCA5: cpu.execute_instruction<0xA5>(0x000002, 2); return true;
    // src/battle/lose_hp_status.asm:15 CMP @VIRTUAL04
    case 0xC2BCA7: cpu.execute_instruction<0xC5>(0x000004, 2); return true;
    // include/macros.asm:761 BCC dest
    // Macro caller: src/battle/lose_hp_status.asm:16 BLTEQ @UNKNOWN0
    case 0xC2BCA9: cpu.execute_instruction<0x90>(0x000007, 2); return true;
    // include/macros.asm:762 BEQ dest
    // Macro caller: src/battle/lose_hp_status.asm:16 BLTEQ @UNKNOWN0
    case 0xC2BCAB: cpu.execute_instruction<0xF0>(0x000005, 2); return true;
    // src/battle/lose_hp_status.asm:17 LDA #0
    case 0xC2BCAD: if (cpu.status_register & 0x20) cpu.execute_instruction<0xA9>(0x000000, 2); else cpu.execute_instruction<0xA9>(0x000000, 3); return true;
    // src/battle/lose_hp_status.asm:17 LDA #0
    // Overlapping static entry reached from 0xC2BCAD.
    case 0xC2BCAF: cpu.execute_instruction<0x00>(0x000080, 2); return true;
    // src/battle/lose_hp_status.asm:18 BRA @UNKNOWN1
    case 0xC2BCB0: cpu.execute_instruction<0x80>(0x000005, 2); return true;
    // src/battle/lose_hp_status.asm:20 LDA @LOCAL00
    case 0xC2BCB2: cpu.execute_instruction<0xA5>(0x00000E, 2); return true;
    // src/battle/lose_hp_status.asm:21 SEC
    case 0xC2BCB4: cpu.execute_instruction<0x38>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:22 SBC @VIRTUAL02
    case 0xC2BCB5: cpu.execute_instruction<0xE5>(0x000002, 2); return true;
    // src/battle/lose_hp_status.asm:24 TAX
    case 0xC2BCB7: cpu.execute_instruction<0xAA>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:25 TYA
    case 0xC2BCB8: cpu.execute_instruction<0x98>(0x000000, 1); return true;
    // src/battle/lose_hp_status.asm:26 JSR SET_HP
    case 0xC2BCB9: cpu.execute_instruction<0x20>(0x007065, 3); return true;
    // include/macros.asm:25 PLD
    // Macro caller: src/battle/lose_hp_status.asm:27 END_C_FUNCTION
    case 0xC2BCBC: cpu.execute_instruction<0x2B>(0x000000, 1); return true;
    // include/macros.asm:30 RTL
    // Macro caller: src/battle/lose_hp_status.asm:27 END_C_FUNCTION
    case 0xC2BCBD: cpu.execute_instruction<0x6B>(0x000000, 1); return true;
    default: return false;
    }
}

} // namespace eb::jp
